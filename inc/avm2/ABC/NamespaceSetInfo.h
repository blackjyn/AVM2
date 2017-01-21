#ifndef __AVM2_NAMESPACE_SET_INFO__
#define __AVM2_NAMESPACE_SET_INFO__
#include <avm2/DataTypes.h>

typedef struct {
	u30 count;
	u30* ns; // indices in the namespace array (in the constant pool) - index shouldn't be zero.  
} ns_set_info;

#endif //__AVM2_NAMESPACE_SET_INFO__