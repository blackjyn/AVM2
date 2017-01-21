#ifndef __AVM2_SCRIPT_INFO__
#define __AVM2_SCRIPT_INFO__
#include <avm2/ABC/InstanceInfo.h>

typedef struct {
	u30 init;
	u30 trait_count;
	traits_info* trait;
} script_info;

#endif //__AVM2_SCRIPT_INFO__