#ifndef __AVM2_METADATA_INFO__
#define __AVM2_METADATA_INFO__
#include <avm2/DataTypes.h>

typedef struct {
	u30 key;
	u30 value;
} item_info;

typedef struct {
	u30 name;
	u30 item_count;
	item_info* items;
} metadata_info;

#endif //__AVM2_METADATA_INFO__