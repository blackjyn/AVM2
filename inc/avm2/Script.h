#ifndef __AVM2_SCRIPT__
#define __AVM2_SCRIPT__
#include <avm2/DataTypes.h>

typedef struct
{
	byte* buffer;
	unsigned int size;
} avm_script;

avm_script* script_load(const char* fn);

#endif //__AVM2_SCRIPT__