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

typedef enum
{
	NSKIND_Namespace = 0x08,
	NSKIND_PackageNamespace = 0x16,
	NSKIND_PackageInternalNs = 0x17,
	NSKIND_ProtectedNamespace = 0x18,
	NSKIND_ExplicitNamespace = 0x19,
	NSKIND_StaticProtectedNs = 0x1A,
	NSKIND_PrivateNs = 0x05
} NSKIND;

#endif //__AVM2_NAMESPACE_INFO__