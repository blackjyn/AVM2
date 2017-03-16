#ifndef __AVM2_STRING_INFO__
#define __AVM2_STRING_INFO__
#include <avm2/DataTypes.h>

typedef struct {
	u30 size;
	u8* utf8;
} string_info;

string_info create_string(u30 size, const byte* str);	// create string from byte array
string_info string_read(byte** src);					// read string from source

#endif //__AVM2_STRING_INFO__