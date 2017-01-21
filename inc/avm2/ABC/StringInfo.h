#ifndef __AVM2_STRING_INFO__
#define __AVM2_STRING_INFO__
#include <avm2/DataTypes.h>

typedef struct {
	u30 size;
	u8* utf8;
} string_info;

#endif //__AVM2_STRING_INFO__