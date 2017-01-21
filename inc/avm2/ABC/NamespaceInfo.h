#ifndef __AVM2_NAMESPACE_INFO__
#define __AVM2_NAMESPACE_INFO__
#include <avm2/DataTypes.h>

/*
  User-defined namespaces have kind NSKIND_Namespace or NSKIND_ExplicitNamespace and a non-empty name
*/

typedef struct {
	u8 kind;
	u30 name; // an index in the string array (in the constant pool)
} namespace_info;

const u8 NSKIND_Namespace			= 0x08;
const u8 NSKIND_PackageNamespace	= 0x16;
const u8 NSKIND_PackageInternalNs	= 0x17;
const u8 NSKIND_ProtectedNamespace	= 0x18;
const u8 NSKIND_ExplicitNamespace	= 0x19;
const u8 NSKIND_StaticProtectedNs	= 0x1A;
const u8 NSKIND_PrivateNs			= 0x05;

#endif //__AVM2_NAMESPACE_INFO__