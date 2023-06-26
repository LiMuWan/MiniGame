#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>
struct Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UniFramework.Machine.IStateNode>
struct KeyCollection_t99B66FF37703451F506387AEEB2AD0C9BEA2F92F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UniFramework.Machine.IStateNode>
struct ValueCollection_tB4F6482E3D65861D306AD02D1A95821475F2E279;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UniFramework.Machine.IStateNode>[]
struct EntryU5BU5D_t1E2C7402B9060EDBF72E284E76325DC45268BEF5;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UniFramework.Machine.IStateNode
struct IStateNode_t8B8F93857409EC313448421739CDC22C514FE1FE;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UniFramework.Machine.StateMachine
struct StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateNode_t8B8F93857409EC313448421739CDC22C514FE1FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1763AF784DFA180734BCF2EEE1C8509BEF694D17;
IL2CPP_EXTERN_C String_t* _stringLiteral69CFE45B6CFF55DDCB69FDECB194F9C42DAE4E98;
IL2CPP_EXTERN_C String_t* _stringLiteralC25531ECE3BAFE307AF040E6193D3FF264D56BE3;
IL2CPP_EXTERN_C String_t* _stringLiteralEF2F1849B5D7CE6EB4F6B3EC5A3CDFC34AEC955B;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m496D7CCCD04D7EBB9BFB31537F8FB43C543B9A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m95E45455B2440BC6B6C4A61EF369F37C78BC5A87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE8B13BDC410316AAD0DC25C60B1E3004C9094A00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1C5818831ACCD5297FD159211B5ADCED168FC8C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateMachine_AddNode_mAF608A92BC53A14748DC12B09E068C5B0873F729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateMachine_ChangeState_m94E27D4DF603AF2C81ACAEF4D305B5D1ED14D0EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateMachine_Run_m46D4A2A9D6ECCD2E625E5E8A7AA40451DAF493C3_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t947B784DDEA6FE758F6D5DA8A84DFAF04EE2D2E2 
{
};

// System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>
struct Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E2C7402B9060EDBF72E284E76325DC45268BEF5* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t99B66FF37703451F506387AEEB2AD0C9BEA2F92F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB4F6482E3D65861D306AD02D1A95821475F2E279* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UniFramework.Machine.StateMachine
struct StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode> UniFramework.Machine.StateMachine::_nodes
	Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636* ____nodes_0;
	// UniFramework.Machine.IStateNode UniFramework.Machine.StateMachine::_curNode
	RuntimeObject* ____curNode_1;
	// UniFramework.Machine.IStateNode UniFramework.Machine.StateMachine::_preNode
	RuntimeObject* ____preNode_2;
	// System.Object UniFramework.Machine.StateMachine::<Owner>k__BackingField
	RuntimeObject* ___U3COwnerU3Ek__BackingField_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>

// System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>

// UniFramework.Machine.StateMachine

// UniFramework.Machine.StateMachine

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

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

// System.Void

// System.Void

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;

// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m1C5818831ACCD5297FD159211B5ADCED168FC8C8 (Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_capacity, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UniFramework.Machine.StateMachine::set_Owner(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateMachine_set_Owner_m1ED10D84BBE8CD4F022726204F991C69E5D51D1D_inline (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void UniFramework.Machine.StateMachine::Run(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Run_m46D4A2A9D6ECCD2E625E5E8A7AA40451DAF493C3 (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, String_t* ___0_entryNode, const RuntimeMethod* method) ;
// UniFramework.Machine.IStateNode UniFramework.Machine.StateMachine::TryGetNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateMachine_TryGetNode_m1CD1E96C2DE62451E77EF9871276702E6112E610 (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, String_t* ___0_nodeName, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m95E45455B2440BC6B6C4A61EF369F37C78BC5A87 (Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>::Add(TKey,TValue)
inline void Dictionary_2_Add_m496D7CCCD04D7EBB9BFB31537F8FB43C543B9A8C (Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void UniFramework.Utility.UniLogger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Error_m1652C65D2BE70E7292B2AC431CB476D5215F456F (String_t* ___0_info, const RuntimeMethod* method) ;
// System.Void UniFramework.Machine.StateMachine::ChangeState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_ChangeState_m94E27D4DF603AF2C81ACAEF4D305B5D1ED14D0EA (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, String_t* ___0_nodeName, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UniFramework.Utility.UniLogger::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Log_m6C38F40923E6C37ED422BD8DA0B5039C7298E8FC (String_t* ___0_info, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mE8B13BDC410316AAD0DC25C60B1E3004C9094A00 (Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
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
// System.Void UniFramework.Machine.StateMachine::set_Owner(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_set_Owner_m1ED10D84BBE8CD4F022726204F991C69E5D51D1D (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public System.Object Owner { private set; get; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3COwnerU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COwnerU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Object UniFramework.Machine.StateMachine::get_Owner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateMachine_get_Owner_mD4DCA767CE90C29DBA59C647F6D61E607337BC6C (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, const RuntimeMethod* method) 
{
	{
		// public System.Object Owner { private set; get; }
		RuntimeObject* L_0 = __this->___U3COwnerU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String UniFramework.Machine.StateMachine::get_CurrentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StateMachine_get_CurrentNode_m7CDC730AD487DCD5EB03657379B1B90502A8467F (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _curNode != null ? _curNode.GetType().FullName : string.Empty; }
		RuntimeObject* L_0 = __this->____curNode_1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		RuntimeObject* L_2 = __this->____curNode_1;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(41 /* System.String System.Type::get_FullName() */, L_3);
		return L_4;
	}
}
// System.String UniFramework.Machine.StateMachine::get_PreviousNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StateMachine_get_PreviousNode_m1E561F2663E71732AD32038001615511067CD92B (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _preNode != null ? _preNode.GetType().FullName : string.Empty; }
		RuntimeObject* L_0 = __this->____preNode_2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		RuntimeObject* L_2 = __this->____preNode_2;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(41 /* System.String System.Type::get_FullName() */, L_3);
		return L_4;
	}
}
// System.Void UniFramework.Machine.StateMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine__ctor_mC50E8C9D1BB692CE767CF8CC5A35E608E1080E37 (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1C5818831ACCD5297FD159211B5ADCED168FC8C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, IStateNode> _nodes = new Dictionary<string, IStateNode>(100);
		Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636* L_0 = (Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636*)il2cpp_codegen_object_new(Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m1C5818831ACCD5297FD159211B5ADCED168FC8C8(L_0, ((int32_t)100), Dictionary_2__ctor_m1C5818831ACCD5297FD159211B5ADCED168FC8C8_RuntimeMethod_var);
		__this->____nodes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodes_0), (void*)L_0);
		// private StateMachine() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// private StateMachine() { }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine__ctor_mB84B8CC2021FDDDC939EF5728C384685524A922C (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, RuntimeObject* ___0_owner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1C5818831ACCD5297FD159211B5ADCED168FC8C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, IStateNode> _nodes = new Dictionary<string, IStateNode>(100);
		Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636* L_0 = (Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636*)il2cpp_codegen_object_new(Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m1C5818831ACCD5297FD159211B5ADCED168FC8C8(L_0, ((int32_t)100), Dictionary_2__ctor_m1C5818831ACCD5297FD159211B5ADCED168FC8C8_RuntimeMethod_var);
		__this->____nodes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodes_0), (void*)L_0);
		// public StateMachine(System.Object owner)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Owner = owner;
		RuntimeObject* L_1 = ___0_owner;
		StateMachine_set_Owner_m1ED10D84BBE8CD4F022726204F991C69E5D51D1D_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Update_m6C11651FAF2B83088F0618E7018F8958C871DE52 (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateNode_t8B8F93857409EC313448421739CDC22C514FE1FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_curNode != null)
		RuntimeObject* L_0 = __this->____curNode_1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// _curNode.OnUpdate();
		RuntimeObject* L_1 = __this->____curNode_1;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UniFramework.Machine.IStateNode::OnUpdate() */, IStateNode_t8B8F93857409EC313448421739CDC22C514FE1FE_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::Run(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Run_m66FE0472B596F250D6677D8E2D1A8AE88F278258 (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, Type_t* ___0_entryNode, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// var nodeName = entryNode.FullName;
		Type_t* L_0 = ___0_entryNode;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(41 /* System.String System.Type::get_FullName() */, L_0);
		V_0 = L_1;
		// Run(nodeName);
		String_t* L_2 = V_0;
		StateMachine_Run_m46D4A2A9D6ECCD2E625E5E8A7AA40451DAF493C3(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::Run(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Run_m46D4A2A9D6ECCD2E625E5E8A7AA40451DAF493C3 (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, String_t* ___0_entryNode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateNode_t8B8F93857409EC313448421739CDC22C514FE1FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _curNode = TryGetNode(entryNode);
		String_t* L_0 = ___0_entryNode;
		RuntimeObject* L_1;
		L_1 = StateMachine_TryGetNode_m1CD1E96C2DE62451E77EF9871276702E6112E610(__this, L_0, NULL);
		__this->____curNode_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____curNode_1), (void*)L_1);
		// _preNode = _curNode;
		RuntimeObject* L_2 = __this->____curNode_1;
		__this->____preNode_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preNode_2), (void*)L_2);
		// if (_curNode == null)
		RuntimeObject* L_3 = __this->____curNode_1;
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		// throw new Exception($"Not found entry node: {entryNode }");
		String_t* L_4 = ___0_entryNode;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF2F1849B5D7CE6EB4F6B3EC5A3CDFC34AEC955B)), L_4, NULL);
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StateMachine_Run_m46D4A2A9D6ECCD2E625E5E8A7AA40451DAF493C3_RuntimeMethod_var)));
	}

IL_0032:
	{
		// _curNode.OnEnter();
		RuntimeObject* L_7 = __this->____curNode_1;
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UniFramework.Machine.IStateNode::OnEnter() */, IStateNode_t8B8F93857409EC313448421739CDC22C514FE1FE_il2cpp_TypeInfo_var, L_7);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::AddNode(UniFramework.Machine.IStateNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_AddNode_mAF608A92BC53A14748DC12B09E068C5B0873F729 (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, RuntimeObject* ___0_stateNode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m496D7CCCD04D7EBB9BFB31537F8FB43C543B9A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m95E45455B2440BC6B6C4A61EF369F37C78BC5A87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateNode_t8B8F93857409EC313448421739CDC22C514FE1FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1763AF784DFA180734BCF2EEE1C8509BEF694D17);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (stateNode == null)
		RuntimeObject* L_0 = ___0_stateNode;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StateMachine_AddNode_mAF608A92BC53A14748DC12B09E068C5B0873F729_RuntimeMethod_var)));
	}

IL_0009:
	{
		// var nodeType = stateNode.GetType();
		RuntimeObject* L_2 = ___0_stateNode;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		// var nodeName = nodeType.FullName;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(41 /* System.String System.Type::get_FullName() */, L_3);
		V_0 = L_4;
		// if (_nodes.ContainsKey(nodeName) == false)
		Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636* L_5 = __this->____nodes_0;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m95E45455B2440BC6B6C4A61EF369F37C78BC5A87(L_5, L_6, Dictionary_2_ContainsKey_m95E45455B2440BC6B6C4A61EF369F37C78BC5A87_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		// stateNode.OnCreate(this);
		RuntimeObject* L_8 = ___0_stateNode;
		NullCheck(L_8);
		InterfaceActionInvoker1< StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* >::Invoke(0 /* System.Void UniFramework.Machine.IStateNode::OnCreate(UniFramework.Machine.StateMachine) */, IStateNode_t8B8F93857409EC313448421739CDC22C514FE1FE_il2cpp_TypeInfo_var, L_8, __this);
		// _nodes.Add(nodeName, stateNode);
		Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636* L_9 = __this->____nodes_0;
		String_t* L_10 = V_0;
		RuntimeObject* L_11 = ___0_stateNode;
		NullCheck(L_9);
		Dictionary_2_Add_m496D7CCCD04D7EBB9BFB31537F8FB43C543B9A8C(L_9, L_10, L_11, Dictionary_2_Add_m496D7CCCD04D7EBB9BFB31537F8FB43C543B9A8C_RuntimeMethod_var);
		return;
	}

IL_0038:
	{
		// UniLogger.Error($"State node already existed : {nodeName}");
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1763AF784DFA180734BCF2EEE1C8509BEF694D17, L_12, NULL);
		UniLogger_Error_m1652C65D2BE70E7292B2AC431CB476D5215F456F(L_13, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::ChangeState(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_ChangeState_mE031988BAAF0F93CD10687F2483DB134F7ADB1D5 (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, Type_t* ___0_nodeType, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// var nodeName = nodeType.FullName;
		Type_t* L_0 = ___0_nodeType;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(41 /* System.String System.Type::get_FullName() */, L_0);
		V_0 = L_1;
		// ChangeState(nodeName);
		String_t* L_2 = V_0;
		StateMachine_ChangeState_m94E27D4DF603AF2C81ACAEF4D305B5D1ED14D0EA(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::ChangeState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_ChangeState_m94E27D4DF603AF2C81ACAEF4D305B5D1ED14D0EA (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, String_t* ___0_nodeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateNode_t8B8F93857409EC313448421739CDC22C514FE1FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69CFE45B6CFF55DDCB69FDECB194F9C42DAE4E98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC25531ECE3BAFE307AF040E6193D3FF264D56BE3);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (string.IsNullOrEmpty(nodeName))
		String_t* L_0 = ___0_nodeName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StateMachine_ChangeState_m94E27D4DF603AF2C81ACAEF4D305B5D1ED14D0EA_RuntimeMethod_var)));
	}

IL_000e:
	{
		// IStateNode node = TryGetNode(nodeName);
		String_t* L_3 = ___0_nodeName;
		RuntimeObject* L_4;
		L_4 = StateMachine_TryGetNode_m1CD1E96C2DE62451E77EF9871276702E6112E610(__this, L_3, NULL);
		V_0 = L_4;
		// if (node == null)
		RuntimeObject* L_5 = V_0;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		// UniLogger.Error($"Can not found state node : {nodeName}");
		String_t* L_6 = ___0_nodeName;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral69CFE45B6CFF55DDCB69FDECB194F9C42DAE4E98, L_6, NULL);
		UniLogger_Error_m1652C65D2BE70E7292B2AC431CB476D5215F456F(L_7, NULL);
		// return;
		return;
	}

IL_002a:
	{
		// UniLogger.Log($"{_curNode.GetType().FullName} --> {node.GetType().FullName}");
		RuntimeObject* L_8 = __this->____curNode_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(41 /* System.String System.Type::get_FullName() */, L_9);
		RuntimeObject* L_11 = V_0;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(41 /* System.String System.Type::get_FullName() */, L_12);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_10, _stringLiteralC25531ECE3BAFE307AF040E6193D3FF264D56BE3, L_13, NULL);
		UniLogger_Log_m6C38F40923E6C37ED422BD8DA0B5039C7298E8FC(L_14, NULL);
		// _preNode = _curNode;
		RuntimeObject* L_15 = __this->____curNode_1;
		__this->____preNode_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preNode_2), (void*)L_15);
		// _curNode.OnExit();
		RuntimeObject* L_16 = __this->____curNode_1;
		NullCheck(L_16);
		InterfaceActionInvoker0::Invoke(3 /* System.Void UniFramework.Machine.IStateNode::OnExit() */, IStateNode_t8B8F93857409EC313448421739CDC22C514FE1FE_il2cpp_TypeInfo_var, L_16);
		// _curNode = node;
		RuntimeObject* L_17 = V_0;
		__this->____curNode_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____curNode_1), (void*)L_17);
		// _curNode.OnEnter();
		RuntimeObject* L_18 = __this->____curNode_1;
		NullCheck(L_18);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UniFramework.Machine.IStateNode::OnEnter() */, IStateNode_t8B8F93857409EC313448421739CDC22C514FE1FE_il2cpp_TypeInfo_var, L_18);
		// }
		return;
	}
}
// UniFramework.Machine.IStateNode UniFramework.Machine.StateMachine::TryGetNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateMachine_TryGetNode_m1CD1E96C2DE62451E77EF9871276702E6112E610 (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, String_t* ___0_nodeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE8B13BDC410316AAD0DC25C60B1E3004C9094A00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// _nodes.TryGetValue(nodeName, out IStateNode result);
		Dictionary_2_tDBEA854C84027C8F6D06F6AC28F8951F7218C636* L_0 = __this->____nodes_0;
		String_t* L_1 = ___0_nodeName;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mE8B13BDC410316AAD0DC25C60B1E3004C9094A00(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mE8B13BDC410316AAD0DC25C60B1E3004C9094A00_RuntimeMethod_var);
		// return result;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateMachine_set_Owner_m1ED10D84BBE8CD4F022726204F991C69E5D51D1D_inline (StateMachine_t7CC44D9AB1AE47113D624933CD26BDBEC8FEBB0F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public System.Object Owner { private set; get; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3COwnerU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COwnerU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
