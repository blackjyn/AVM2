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

const u8 INSTANCE_ClassSealed = 0x01;
const u8 INSTANCE_ClassFinal = 0x02;
const u8 INSTANCE_ClassInterface = 0x04;
const u8 INSTANCE_ClassProtectedNs = 0x08;

const u8 TRAIT_Slot = 0;
const u8 TRAIT_Method = 1;
const u8 TRAIT_Getter = 2;
const u8 TRAIT_Setter = 3;
const u8 TRAIT_Class = 4;
const u8 TRAIT_Function = 5;
const u8 TRAIT_Const = 6;

const u8 ATTR_Final = 0x1;
const u8 ATTR_Override = 0x2;
const u8 ATTR_Metadata = 0x4;

/*
Slot/Const: { u30 slot_id, u30 type_name, u30 vindex, u8 vkind  }
Class: { u30 slot_id, u30 classi }
Function: { u30 slot_id, u30 function }
Method/Getter/Setter: { u30 disp_id, u30 method }
*/

#endif //__AVM2_INSTANCE_INFO__