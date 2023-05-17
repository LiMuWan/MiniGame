#include "../metadata/ReversePInvokeMethodStub.h"
#include "../metadata/MetadataModule.h"

namespace hybridclr
{
namespace metadata
{
#if HYBRIDCLR_ABI_ARM_64

	//!!!{{CODE

	void __ReversePInvokeMethod_0(int32_t __arg0, int64_t __arg1)
	{
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(0);
        typedef void (*Callback)(int32_t, int64_t, const MethodInfo*);
		((Callback)(method->methodPointerCallByInterp))(__arg0, __arg1, method);
	}

	void __ReversePInvokeMethod_1(int32_t __arg0, int64_t __arg1)
	{
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(1);
        typedef void (*Callback)(int32_t, int64_t, const MethodInfo*);
		((Callback)(method->methodPointerCallByInterp))(__arg0, __arg1, method);
	}

	void __ReversePInvokeMethod_2(int32_t __arg0, int64_t __arg1, int32_t __arg2)
	{
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(2);
        typedef void (*Callback)(int32_t, int64_t, int32_t, const MethodInfo*);
		((Callback)(method->methodPointerCallByInterp))(__arg0, __arg1, __arg2, method);
	}

    ReversePInvokeMethodData g_reversePInvokeMethodStub[]
	{
		{"vi4i8", (Il2CppMethodPointer)__ReversePInvokeMethod_0},
		{"vi4i8", (Il2CppMethodPointer)__ReversePInvokeMethod_1},
		{"vi4i8i4", (Il2CppMethodPointer)__ReversePInvokeMethod_2},

		{nullptr, nullptr},
	};


	//!!!}}CODE
#endif
}
}