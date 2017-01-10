#ifndef __AVM2_SCRIPT__
#define __AVM2_SCRIPT__

typedef struct
{
	unsigned char* buffer;
	unsigned int size;
} avm_script;

avm_script* script_load(const char* fn);

#endif //__AVM2_SCRIPT__