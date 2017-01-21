#ifndef __AVM2_ABC_FILE__
#define __AVM2_ABC_FILE__
#include <avm2/ABC/ConstantPool.h>
#include <avm2/ABC/ClassInfo.h>
#include <avm2/ABC/MethodInfo.h>
#include <avm2/ABC/MethodBodyInfo.h>
#include <avm2/ABC/ScriptInfo.h>
#include <avm2/ABC/MetadataInfo.h>

typedef struct
{
	u16 minor_version;
	u16 major_version;
	cpool_info* constant_pool;
	u30 method_count;
	method_info* method;
	u30 metadata_count;
	metadata_info* metadata;
	u30 class_count;
	instance_info* instance;
	class_info* class;
	u30 script_count;
	script_info* script;
	u30 method_body_count;
	method_body_info* method_body;
} abc_file;

#endif //__AVM2_ABC_FILE__