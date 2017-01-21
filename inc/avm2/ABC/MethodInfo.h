#ifndef __AVM2_METHOD_INFO__
#define __AVM2_METHOD_INFO__
#include <avm2/DataTypes.h>

typedef struct { 
	u30 val;
	u8 kind;
} option_detail;

typedef struct {
	u30 option_count;
	option_detail* option;
} option_info;

typedef struct {
	u30* param_name;
} param_info;

typedef struct {
	u30 param_count;
	u30 return_type; // index in the multiname array (in the constant pool) 
	u30* param_type; // indices in the multiname array (in the constant pool) - they point at the name of the type of the parameter
	u30 name;
	u8  flags;
	option_info options;
	param_info param_names;
} method_info;

const u8 METHOD_NEED_ARGUMENTS = 0x01;
const u8 METHOD_NEED_ACTIVATION = 0x02;
const u8 METHOD_NEED_REST = 0x04;
const u8 METHOD_HAS_OPTIONAL = 0x08;
const u8 METHOD_SET_DXNS = 0x40;
const u8 METHOD_HAS_PARAM_NAMES = 0x80;

const u8 OPTION_Int = 0x03;
const u8 OPTION_UInt = 0x04;
const u8 OPTION_Double = 0x06;
const u8 OPTION_Utf8 = 0x01;
const u8 OPTION_True = 0x0B;
const u8 OPTION_False = 0x0A;
const u8 OPTION_Null = 0x0C;
const u8 OPTION_Undefined = 0x00;
const u8 OPTION_Namespace = 0x08;
const u8 OPTION_PackageNamespace = 0x16;
const u8 OPTION_PackageInternalNs = 0x17;
const u8 OPTION_ProtectedNamespace = 0x18;
const u8 OPTION_ExplicitNamespace = 0x19;
const u8 OPTION_StaticProtectedNs = 0x1A;
const u8 OPTION_PrivateNs = 0x05;

#endif //__AVM2_METHOD_INFO__