#ifndef __AVM2_INSTANCE_INFO__
#define __AVM2_INSTANCE_INFO__
#include <avm2/DataTypes.h>

typedef struct {
	u30 name;
	u8  kind;
	u8* data;
	u30 metadata_count;
	u30* metadata;
} traits_info;

typedef struct {
	u30 name;
	u30 super_name; // base class
	u8 flags;
	u30 protectedNs;
	u30 intrf_count;
	u30* interface;
	u30 iinit;
	u30 trait_count;
	traits_info* trait;
} instance_info;

typedef enum
{
	INSTANCE_ClassSealed = 0x1,
	INSTANCE_ClassFinal = 0x02,
	INSTANCE_ClassInterface = 0x04,
	INSTANCE_ClassProtectedNs = 0x08
} INSTANCE;

typedef enum
{
	TRAIT_Slot,
	TRAIT_Method,
	TRAIT_Getter,
	TRAIT_Setter,
	TRAIT_Class,
	TRAIT_Function,
	TRAIT_Const
} TRAIT;

typedef enum
{
	ATTR_Final = 0x1,
	ATTR_Override = 0x2,
	ATTR_Metadata = 0x4
} ATTR;

/*
Slot/Const: { u30 slot_id, u30 type_name, u30 vindex, u8 vkind  }
Class: { u30 slot_id, u30 classi }
Function: { u30 slot_id, u30 function }
Method/Getter/Setter: { u30 disp_id, u30 method }
*/

#endif //__AVM2_INSTANCE_INFO__