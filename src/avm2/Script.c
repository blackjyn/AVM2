#include <stdio.h>
#include <avm2/Script.h>

avm_script* script_load(const char* fn) {
	avm_script* ret = malloc(sizeof(avm_script)*1);

    FILE *f = fopen(fn, "rb");
	fseek(f, 0, SEEK_END);
	ret->size = ftell(f);
	fseek(f, 0, SEEK_SET);

    ret->buffer = malloc(ret->size * sizeof(byte));
	fread(ret->buffer, ret->size, 1, f);
	fclose(f);

	return ret;
}