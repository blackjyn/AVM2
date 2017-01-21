#ifndef __AVM2_METHOD_BODY_INFO__
#define __AVM2_METHOD_BODY_INFO__
#include <avm2/ABC/InstanceInfo.h>
#include <avm2/ABC/ExceptionInfo.h>

typedef struct {
	u30 method;
	u30 max_stack;
	u30 local_count;
	u30 init_scope_depth;
	u30 max_scope_depth;
	u30 code_length;
	u8* code;
	u30 exception_count;
	exception_info* exception;
	u30 trait_count;
	traits_info* trait;
} method_body_info;

#endif //__AVM2_METHOD_BODY_INFO__