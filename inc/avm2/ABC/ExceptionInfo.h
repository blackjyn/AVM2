#ifndef __AVM2_EXCEPTION_INFO__
#define __AVM2_EXCEPTION_INFO__
#include <avm2/DataTypes.h>

typedef struct {
	u30 from;
	u30 to;
	u30 target;
	u30 exc_type;
	u30 var_name;
} exception_info;

#endif //__AVM2_EXCEPTION_INFO__