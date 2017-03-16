#ifndef __AVM2_MULTINAME_INFO__
#define __AVM2_MULTINAME_INFO__
#include <avm2/DataTypes.h>

typedef struct {
	u8 kind;
	u8* data; // hold different data types (u30/u32, etc...) - depends on kind
} multiname_info;

multiname_info multiname_info_read(char** buf);
void multiname_info_release(multiname_info* nsi);

typedef enum
{
	MNKIND_QName = 0x07,
	MNKIND_QNameA = 0x0D,
	MNKIND_RTQName = 0x0F,
	MNKIND_RTQNameA = 0x10,
	MNKIND_RTQNameL = 0x11,
	MNKIND_RTQNameLA = 0x12,
	MNKIND_Multiname = 0x09,
	MNKIND_MultinameA = 0x0E,
	MNKIND_MultinameL = 0x1B,
	MNKIND_MultinameLA = 0x1C
} MNKIND;

/*
QName: { u30 ns, u30 name }
RTQName: { u30 name }
RTQNameL: { }
Multiname: { u30 name, u30 ns_set }
MultinameL: { u30 ns_set }
*/

#endif //__AVM2_MULTINAME_INFO__