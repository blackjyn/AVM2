#ifndef __AVM2_MULTINAME_INFO__
#define __AVM2_MULTINAME_INFO__
#include <avm2/DataTypes.h>

typedef struct {
	u8 kind;
	u8* data; // hold different data types (u30/u32, etc...) - depends on kind
} multiname_info;

multiname_info multiname_info_read(char** buf);
void multiname_info_release(multiname_info* nsi);

const u8 MNKIND_QName = 0x07;
const u8 MNKIND_QNameA = 0x0D;
const u8 MNKIND_RTQName = 0x0F;
const u8 MNKIND_RTQNameA = 0x10;
const u8 MNKIND_RTQNameL = 0x11;
const u8 MNKIND_RTQNameLA = 0x12;
const u8 MNKIND_Multiname = 0x09;
const u8 MNKIND_MultinameA = 0x0E;
const u8 MNKIND_MultinameL = 0x1B;
const u8 MNKIND_MultinameLA = 0x1C;

/*
QName: { u30 ns, u30 name }
RTQName: { u30 name }
RTQNameL: { }
Multiname: { u30 name, u30 ns_set }
MultinameL: { u30 ns_set }
*/

#endif //__AVM2_MULTINAME_INFO__