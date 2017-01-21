#ifndef __AVM2_CLASS_INFO__
#define __AVM2_CLASS_INFO__
#include <avm2/ABC/InstanceInfo.h>

typedef struct {
	u30 cinit;
	u30 trait_count;
	traits_info* traits;
} class_info;

#endif //__AVM2_CLASS_INFO__