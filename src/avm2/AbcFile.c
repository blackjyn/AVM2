#include <avm2/AbcFile.h>

string_info create_string(u30 size, const byte* str)
{
	string_info ret;
	int i;

	ret.size = size;
	ret.utf8 = malloc(size);

	for (i = 0; i < size; i++)
		ret.utf8[i] = str[i];

	return ret;
}
string_info string_read(byte** src)
{
	string_info ret;
	int i;

	ret.size = u30_read(src);
	ret.utf8 = malloc(ret.size + 1);

	for (i = 0; i < ret.size; i++)
		ret.utf8[i] = u8_read(src);

	ret.utf8[i] = 0;

	return ret;
}

cpool_info* cpool_parse(byte** src)
{
	int i;
	cpool_info* ret = malloc(sizeof(cpool_info));

	// read integeres
	ret->int_count = u30_read(src);
	ret->integer = malloc(sizeof(s32) * (ret->int_count + 1));
	ret->integer[0] = 0;
	for (i = 1; i < (ret->int_count + 1); i++)
		ret->integer[i] = s32_read(src);

	// read uintegers
	ret->uint_count = u30_read(src);
	ret->uinteger = malloc(sizeof(u32) * (ret->uint_count + 1));
	ret->uinteger[0] = 0;
	for (i = 1; i < (ret->uint_count + 1); i++)
		ret->uinteger[i] = u32_read(src);

	// read doubles
	ret->double_count = u30_read(src);
	ret->dbl = malloc(sizeof(d64) * (ret->double_count + 1));
	ret->dbl[0] = 0; // TODO: NaN
	for (i = 1; i < (ret->double_count + 1); i++)
		ret->dbl[i] = d64_read(src);

	// read strings
	ret->string_count = u30_read(src);
	ret->string = malloc(sizeof(string_info) * (ret->string_count + 1));
	ret->string[0] = create_string(1, "\0");
	for (i = 1; i < (ret->string_count + 1); i++)
		ret->string[i] = string_read(src);
}

abc_file* abc_parse(byte* src)
{
	abc_file* ret = malloc(sizeof(abc_file));

	ret->minor_version = u16_read(&src);
	ret->major_version = u16_read(&src);
	ret->constant_pool = cpool_parse(&src);

	return ret;
}

void abc_free(abc_file* abc) {
	free(abc->constant_pool->integer);
	free(abc->constant_pool->dbl);
	free(abc->constant_pool->string);
	free(abc->constant_pool->uinteger);
	free(abc->constant_pool);
	free(abc);
}