#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3, T4, T5, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, p2, &p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.Camera>
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2EB7EACAE6B3BFBFD70862A8840592343396CF46;
IL2CPP_EXTERN_C String_t* _stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF;
IL2CPP_EXTERN_C String_t* _stringLiteral807D31E7D618CFE25644A0B838EBD88C978E78F1;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_BaselineInternal_m1CB75FF4F21CC040899903C1BAA548691A94D757_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_MeasureInternal_m48B8FB32DE181D6CF67675FE8FCE8B5947CCBFF0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCFDAF3CE34E8117DEABC58BB3EBDB7B80EA66F5A 
{
};

// UnityEngine.Yoga.Native
struct Native_t97ADC11284398663A27E9214C13A84F868A25614  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.UIElements.UIElementsRuntimeUtilityNative
struct UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938  : public RuntimeObject
{
};

// UnityEngine.UIElements.UIR.Utility
struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Yoga.YogaSize
struct YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA 
{
	// System.Single UnityEngine.Yoga.YogaSize::width
	float ___width_0;
	// System.Single UnityEngine.Yoga.YogaSize::height
	float ___height_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Yoga.YogaNode::_ygNode
	intptr_t ____ygNode_0;
	// UnityEngine.Yoga.MeasureFunction UnityEngine.Yoga.YogaNode::_measureFunction
	MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* ____measureFunction_1;
	// UnityEngine.Yoga.BaselineFunction UnityEngine.Yoga.YogaNode::_baselineFunction
	BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* ____baselineFunction_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Camera>
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA  : public MulticastDelegate_t
{
};

// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// <Module>

// <Module>

// UnityEngine.Yoga.Native

// UnityEngine.Yoga.Native

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.UIElements.UIElementsRuntimeUtilityNative
struct UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_StaticFields
{
	// System.Action UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RepaintOverlayPanelsCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___RepaintOverlayPanelsCallback_0;
	// System.Action UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UpdateRuntimePanelsCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UpdateRuntimePanelsCallback_1;
};

// UnityEngine.UIElements.UIElementsRuntimeUtilityNative

// UnityEngine.UIElements.UIR.Utility
struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields
{
	// System.Action`1<System.Boolean> UnityEngine.UIElements.UIR.Utility::GraphicsResourcesRecreate
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___GraphicsResourcesRecreate_0;
	// System.Action UnityEngine.UIElements.UIR.Utility::EngineUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___EngineUpdate_1;
	// System.Action UnityEngine.UIElements.UIR.Utility::FlushPendingResources
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___FlushPendingResources_2;
	// System.Action`1<UnityEngine.Camera> UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderers
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___RegisterIntermediateRenderers_3;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeAdd
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeAdd_4;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeExecute
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeExecute_5;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeCleanup
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeCleanup_6;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.Utility::s_MarkerRaiseEngineUpdate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerRaiseEngineUpdate_7;
};

// UnityEngine.UIElements.UIR.Utility

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// System.Void

// System.Void

// UnityEngine.Yoga.YogaSize

// UnityEngine.Yoga.YogaSize

// System.Delegate

// System.Delegate

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// UnityEngine.Yoga.YogaNode

// UnityEngine.Yoga.YogaNode

// System.Action`1<System.Boolean>

// System.Action`1<System.Boolean>

// System.Action`1<UnityEngine.Camera>

// System.Action`1<UnityEngine.Camera>

// System.Action`1<System.IntPtr>

// System.Action`1<System.IntPtr>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action

// System.Action

// UnityEngine.Yoga.BaselineFunction

// UnityEngine.Yoga.BaselineFunction

// System.InvalidOperationException

// System.InvalidOperationException

// UnityEngine.Yoga.MeasureFunction

// UnityEngine.Yoga.MeasureFunction

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;

// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA YogaNode_MeasureInternal_m48B8FB32DE181D6CF67675FE8FCE8B5947CCBFF0 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_m1CB75FF4F21CC040899903C1BAA548691A94D757 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_inline (MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_inline (BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)&___0_obj, method);
}
// System.Void System.Action`1<UnityEngine.Camera>::Invoke(T)
inline void Action_1_Invoke_mCEB98AA7C8ED536CE7A592667637829D2D609DCF_inline (Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// System.Void System.Action`1<System.IntPtr>::Invoke(T)
inline void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)&___0_obj, method);
}
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64 (String_t* ___0_name, uint16_t ___1_categoryId, uint16_t ___2_flags, int32_t ___3_metadataCount, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_Multicast(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* currentDelegate = reinterpret_cast<BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_node, ___1_width, ___2_height, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenInst(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	typedef float (*FunctionPointerType) (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_node, ___1_width, ___2_height, method);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenStatic(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_node, ___1_width, ___2_height, method);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenStaticInvoker(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< float, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_node, ___1_width, ___2_height);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_ClosedStaticInvoker(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< float, RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_node, ___1_width, ___2_height);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenVirtual(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return VirtualFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_node, ___1_width, ___2_height);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenInterface(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return InterfaceFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_node, ___1_width, ___2_height);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenGenericVirtual(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return GenericVirtualFuncInvoker2< float, float, float >::Invoke(method, ___0_node, ___1_width, ___2_height);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenGenericInterface(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return GenericInterfaceFuncInvoker2< float, float, float >::Invoke(method, ___0_node, ___1_width, ___2_height);
}
// System.Void UnityEngine.Yoga.BaselineFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaselineFunction__ctor_m525AED7069E4DFB2C8770618315000F96E7FD500 (BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_Multicast;
}
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109 (BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_node, ___1_width, ___2_height, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_Multicast(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* currentDelegate = reinterpret_cast<MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09*>(delegatesToInvoke[i]);
		typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenInst(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode, method);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenStatic(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode, method);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenStaticInvoker(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_ClosedStaticInvoker(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenVirtual(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return VirtualFuncInvoker4< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenInterface(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return InterfaceFuncInvoker4< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenGenericVirtual(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return GenericVirtualFuncInvoker4< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, float, int32_t, float, int32_t >::Invoke(method, ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenGenericInterface(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return GenericInterfaceFuncInvoker4< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, float, int32_t, float, int32_t >::Invoke(method, ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode);
}
// System.Void UnityEngine.Yoga.MeasureFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasureFunction__ctor_mE08DFEFBD622065D2E123492910EA66C4A80A0BA (MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_Multicast;
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE (MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method) 
{
	typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.Native::YGNodeMeasureInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMeasureInvoke_mCDB590CFD8E79635FFA4C9E787FEC4AA48D2A448 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, intptr_t ___5_returnValueAddress, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___5_returnValueAddress;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_2 = ___0_node;
		float L_3 = ___1_width;
		int32_t L_4 = ___2_widthMode;
		float L_5 = ___3_height;
		int32_t L_6 = ___4_heightMode;
		YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA L_7;
		L_7 = YogaNode_MeasureInternal_m48B8FB32DE181D6CF67675FE8FCE8B5947CCBFF0(L_2, L_3, L_4, L_5, L_6, NULL);
		*(YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA*)L_1 = L_7;
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeBaselineInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeBaselineInvoke_m6EDF6191EEF3C742BF22A6E6232D3EA8E6F4C5E0 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, intptr_t ___3_returnValueAddress, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___3_returnValueAddress;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_2 = ___0_node;
		float L_3 = ___1_width;
		float L_4 = ___2_height;
		float L_5;
		L_5 = YogaNode_BaselineInternal_m1CB75FF4F21CC040899903C1BAA548691A94D757(L_2, L_3, L_4, NULL);
		*((float*)L_1) = (float)L_5;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA YogaNode_MeasureInternal_m48B8FB32DE181D6CF67675FE8FCE8B5947CCBFF0 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method) 
{
	bool V_0 = false;
	YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_0 = ___0_node;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_1 = ___0_node;
		NullCheck(L_1);
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* L_2 = L_1->____measureFunction_1;
		G_B3_0 = ((((RuntimeObject*)(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral807D31E7D618CFE25644A0B838EBD88C978E78F1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode_MeasureInternal_m48B8FB32DE181D6CF67675FE8FCE8B5947CCBFF0_RuntimeMethod_var)));
	}

IL_0020:
	{
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_5 = ___0_node;
		NullCheck(L_5);
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* L_6 = L_5->____measureFunction_1;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_7 = ___0_node;
		float L_8 = ___1_width;
		int32_t L_9 = ___2_widthMode;
		float L_10 = ___3_height;
		int32_t L_11 = ___4_heightMode;
		NullCheck(L_6);
		YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA L_12;
		L_12 = MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_inline(L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		V_1 = L_12;
		goto IL_0034;
	}

IL_0034:
	{
		YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA L_13 = V_1;
		return L_13;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_m1CB75FF4F21CC040899903C1BAA548691A94D757 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_0 = ___0_node;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_1 = ___0_node;
		NullCheck(L_1);
		BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* L_2 = L_1->____baselineFunction_2;
		G_B3_0 = ((((RuntimeObject*)(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2EB7EACAE6B3BFBFD70862A8840592343396CF46)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode_BaselineInternal_m1CB75FF4F21CC040899903C1BAA548691A94D757_RuntimeMethod_var)));
	}

IL_0020:
	{
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_5 = ___0_node;
		NullCheck(L_5);
		BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* L_6 = L_5->____baselineFunction_2;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_7 = ___0_node;
		float L_8 = ___1_width;
		float L_9 = ___2_height;
		NullCheck(L_6);
		float L_10;
		L_10 = BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_inline(L_6, L_7, L_8, L_9, NULL);
		V_1 = L_10;
		goto IL_0031;
	}

IL_0031:
	{
		float L_11 = V_1;
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RepaintOverlayPanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_RepaintOverlayPanels_m346BC3BDB4713023D04B36C35E1D5C20465A815A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_StaticFields*)il2cpp_codegen_static_fields_for(UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var))->___RepaintOverlayPanelsCallback_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UpdateRuntimePanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_UpdateRuntimePanels_mB08CCB60AFCD7B71AA0E1F50DF697BFCFA8DC376 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_StaticFields*)il2cpp_codegen_static_fields_for(UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var))->___UpdateRuntimePanelsCallback_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseGraphicsResourcesRecreate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseGraphicsResourcesRecreate_m836B6EF1199237DBF417FA6F803ECD85E221201B (bool ___0_recreate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___GraphicsResourcesRecreate_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		bool L_2 = ___0_recreate;
		NullCheck(G_B2_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseEngineUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseEngineUpdate_m7AB4CDD154B44E8B1E224F5BC180640AD1749B1F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___EngineUpdate_1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___EngineUpdate_1;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseFlushPendingResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseFlushPendingResources_mB13980DB6EAEE1060226EB7DFA6CCEEB57D9CE68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___FlushPendingResources_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRegisterIntermediateRenderers(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRegisterIntermediateRenderers_mABFC7BADB09B3ADECB04E0E4D1B52ECD161C9F9E (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* G_B2_0 = NULL;
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RegisterIntermediateRenderers_3;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___0_camera;
		NullCheck(G_B2_0);
		Action_1_Invoke_mCEB98AA7C8ED536CE7A592667637829D2D609DCF_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeAdd(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeAdd_mC61730515A6F1CB102C9D98DB7A85763EBDF5D96 (intptr_t ___0_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B2_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeAdd_4;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___0_userData;
		NullCheck(G_B2_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeExecute(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeExecute_mA31EAEA7E25A4EB997B70359272900579DAA5446 (intptr_t ___0_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B2_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeExecute_5;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___0_userData;
		NullCheck(G_B2_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeCleanup(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeCleanup_mEF39A08F8A41ACDD38F7BF073F5B3B545A048B0C (intptr_t ___0_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B2_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeCleanup_6;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___0_userData;
		NullCheck(G_B2_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility__cctor_m8AD41F9B37AF2853080C9A52DEFDCE5E6693C3FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF, /*hidden argument*/NULL);
		((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___s_MarkerRaiseEngineUpdate_7 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_inline (MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method) 
{
	typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_inline (BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_node, ___1_width, ___2_height, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64(L_0, (uint16_t)1, 0, 0, NULL);
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
