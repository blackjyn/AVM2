#ifndef __AVM2_CONSTANT_POOL__
#define __AVM2_CONSTANT_POOL__
#include <avm2/DataTypes.h>
#include <avm2/ABC/StringInfo.h>
#include <avm2/ABC/NamespaceInfo.h>
#include <avm2/ABC/NamespaceSetInfo.h>
#include <avm2/ABC/MultinameInfo.h>

typedef struct {
	u30 int_count;
	s32* integer; // [0] = 0;
	u30 uint_count;
	u32* uinteger; // [0] = 0;
	u30 double_count;
	d64* dbl; // [0] = 0.0 / 0.0;
	u30 string_count;
	string_info* string; // [0] = string.empty; or [0] = "any" name (aka * in as3);
	u30 namespace_count;
	namespace_info* namespc; // [0] = "any" namespace (aka * in as3);
	u30 ns_set_count;
	ns_set_info* ns_set; // [0] is not present
	u30 multiname_count;
	multiname_info* multiname; // [0] is not present
} cpool_info;

#endif //__AVM2_CONSTANT_POOL__