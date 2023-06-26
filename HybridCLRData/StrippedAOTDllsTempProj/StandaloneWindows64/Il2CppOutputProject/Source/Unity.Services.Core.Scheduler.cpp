#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.IComparer`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct IComparer_1_t01C63228358C914FEDFFEF944D63D4BE0F08023F;
// System.Collections.Generic.IComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
// System.Collections.Generic.IEnumerable`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct IEnumerable_1_tD022CDF8A7E4F1F913427E8746221007473EC6F2;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tDBA96AAC21C7C21D26B68A9F19E6AE4E015D2316;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct KeyCollection_t46282B2E398826C1C735B17267980564D8BAEC44;
// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52;
// System.Collections.Generic.List`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD;
// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct ValueCollection_t2506C27E8ADB5523FB387555CFB906B8FE8449C8;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>[]
struct EntryU5BU5D_t803404543244D9254164B53D7FDFC84478F4331C;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
// Unity.Services.Core.Scheduler.Internal.ScheduledInvocation[]
struct ScheduledInvocationU5BU5D_t5FF33B203DD9429A370AB454EAC64C77BF507DAE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Unity.Services.Core.Scheduler.Internal.ActionScheduler
struct ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Services.Core.Scheduler.Internal.ITimeProvider
struct ITimeProvider_t6CB8C4316E58E0ABEFDEAAF4FA47B90DE03CD2E6;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap
struct MinimumBinaryHeap_tA55F58E6B1D3F482C11529BAB4C1D56F5BF745FE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Unity.Services.Core.Scheduler.Internal.ScheduledInvocation
struct ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93;
// Unity.Services.Core.Scheduler.Internal.ScheduledInvocationComparer
struct ScheduledInvocationComparer_t785D4501646D05413E8F88FAECD14D9902742CC2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Unity.Services.Core.Scheduler.Internal.UtcTimeProvider
struct UtcTimeProvider_t45FE04D3C9372C9089808CBF396C87E62AA26743;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITimeProvider_t6CB8C4316E58E0ABEFDEAAF4FA47B90DE03CD2E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScheduledInvocationComparer_t785D4501646D05413E8F88FAECD14D9902742CC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UtcTimeProvider_t45FE04D3C9372C9089808CBF396C87E62AA26743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral7028C7CE8A2E408C86531D117C3BF7BE94AF10D4;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* ActionScheduler_ExecuteExpiredActions_mB683F55950DD543D90A479DF7E68539969F2B48C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionScheduler_ScheduleAction_m6D586ADFCCA974FEBA1D7E23AA3D3DBBA517F8CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF48375565652F72160F059EB62C1FC8A6331A0AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m4EEA35DDD180B435CA4CCB7714A4FF4844ADFE34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD4BDCE432034E3DD2E6E079602DF5CE6C804937C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC2C4F027C0F5DF5863AC1194299269D2907550D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAC237D510E358726C014DD3F610942E989613559_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m46C4F2A2917BB3C219137A08B6E29579FCBF6CA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m76478B2825D5D7493DFBD3E478233114BE128B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m20B47157F68B2A1C1C92F34C111874885F78607A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3539AF736216DC060382909AAC2FAD2AA49EF16C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m708BB07A967216E1312094EBD2CD7C393B281926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m040083A451046E87051FFEF6119F608D5B760BD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1E92478DAD982718EEF541288BFDEEFBD906EB0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF1B4B099D6EC830C7AE856231485FF238F2985E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB04A90FFEEEF02B8DFAE87198BF601E3429D69AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDB148E7C9F949120117B65AD14BDD7A5832ABA2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimumBinaryHeap_1_ExtractMin_m65CF7190823530D1EC9BB094AE57526F0B7FE155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimumBinaryHeap_1_Insert_m7AD50B20077FD1D21C8A8849E35493078CEB85C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimumBinaryHeap_1_Remove_mB0E42318CD574177F32E7FECD9CE8C3B6F1DB464_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimumBinaryHeap_1__ctor_m9C7E57F3215D01D6C3543B43940790F1AD3BA4F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimumBinaryHeap_1_get_Count_m6E5BF62E288479F49068E184B79AFA6DD21ED588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimumBinaryHeap_1_get_Min_m20F161E9A7C1A2CD4AAD86738EC2624ED43E6383_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mBE26FDBA8873F7AE883FF290864E1D2665EAC52F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;

struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1A06A280C3A3120637CE5C7405E81F324A763874 
{
};

// System.Collections.Generic.Dictionary`2<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t803404543244D9254164B53D7FDFC84478F4331C* ____entries_1;
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
	KeyCollection_t46282B2E398826C1C735B17267980564D8BAEC44* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2506C27E8ADB5523FB387555CFB906B8FE8449C8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ScheduledInvocationU5BU5D_t5FF33B203DD9429A370AB454EAC64C77BF507DAE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap
struct MinimumBinaryHeap_tA55F58E6B1D3F482C11529BAB4C1D56F5BF745FE  : public RuntimeObject
{
};

// Unity.Services.Core.Scheduler.Internal.ScheduledInvocationComparer
struct ScheduledInvocationComparer_t785D4501646D05413E8F88FAECD14D9902742CC2  : public RuntimeObject
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

// Unity.Services.Core.Scheduler.Internal.UtcTimeProvider
struct UtcTimeProvider_t45FE04D3C9372C9089808CBF396C87E62AA26743  : public RuntimeObject
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

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct Enumerator_tAE300C7056BDE583F62C47321CE68904319DE228 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD  : public MinimumBinaryHeap_tA55F58E6B1D3F482C11529BAB4C1D56F5BF745FE
{
	// System.Object Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::m_Lock
	RuntimeObject* ___m_Lock_0;
	// System.Collections.Generic.IComparer`1<T> Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::m_Comparer
	RuntimeObject* ___m_Comparer_1;
	// System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::m_MinimumCapacity
	int32_t ___m_MinimumCapacity_2;
	// T[] Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::m_HeapArray
	ScheduledInvocationU5BU5D_t5FF33B203DD9429A370AB454EAC64C77BF507DAE* ___m_HeapArray_3;
	// System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_4;
};

// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007  : public MinimumBinaryHeap_tA55F58E6B1D3F482C11529BAB4C1D56F5BF745FE
{
	// System.Object Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::m_Lock
	RuntimeObject* ___m_Lock_0;
	// System.Collections.Generic.IComparer`1<T> Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::m_Comparer
	RuntimeObject* ___m_Comparer_1;
	// System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::m_MinimumCapacity
	int32_t ___m_MinimumCapacity_2;
	// T[] Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::m_HeapArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_HeapArray_3;
	// System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_4;
};

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value_1;
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

// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F 
{
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t* ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Services.Core.Scheduler.Internal.ScheduledInvocation
struct ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93  : public RuntimeObject
{
	// System.Action Unity.Services.Core.Scheduler.Internal.ScheduledInvocation::Action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Action_0;
	// System.DateTime Unity.Services.Core.Scheduler.Internal.ScheduledInvocation::InvocationTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___InvocationTime_1;
	// System.Int64 Unity.Services.Core.Scheduler.Internal.ScheduledInvocation::ActionId
	int64_t ___ActionId_2;
};

// Unity.Services.Core.Scheduler.Internal.ActionScheduler
struct ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154  : public RuntimeObject
{
	// UnityEngine.LowLevel.PlayerLoopSystem Unity.Services.Core.Scheduler.Internal.ActionScheduler::SchedulerLoopSystem
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___SchedulerLoopSystem_0;
	// Unity.Services.Core.Scheduler.Internal.ITimeProvider Unity.Services.Core.Scheduler.Internal.ActionScheduler::m_TimeProvider
	RuntimeObject* ___m_TimeProvider_1;
	// System.Object Unity.Services.Core.Scheduler.Internal.ActionScheduler::m_Lock
	RuntimeObject* ___m_Lock_2;
	// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation> Unity.Services.Core.Scheduler.Internal.ActionScheduler::m_ScheduledActions
	MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* ___m_ScheduledActions_3;
	// System.Collections.Generic.Dictionary`2<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation> Unity.Services.Core.Scheduler.Internal.ActionScheduler::m_IdScheduledInvocationMap
	Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA* ___m_IdScheduledInvocationMap_4;
	// System.Collections.Generic.List`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation> Unity.Services.Core.Scheduler.Internal.ActionScheduler::m_ExpiredActions
	List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3* ___m_ExpiredActions_5;
	// System.Int64 Unity.Services.Core.Scheduler.Internal.ActionScheduler::m_NextId
	int64_t ___m_NextId_6;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>

// System.Collections.Generic.Dictionary`2<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>

// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>

// System.Collections.Generic.List`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ScheduledInvocationU5BU5D_t5FF33B203DD9429A370AB454EAC64C77BF507DAE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap

// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap

// Unity.Services.Core.Scheduler.Internal.ScheduledInvocationComparer

// Unity.Services.Core.Scheduler.Internal.ScheduledInvocationComparer

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Unity.Services.Core.Scheduler.Internal.UtcTimeProvider

// Unity.Services.Core.Scheduler.Internal.UtcTimeProvider

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>

// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>

// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// System.Nullable`1<System.DateTime>

// System.Nullable`1<System.DateTime>

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.LowLevel.PlayerLoopSystem

// UnityEngine.LowLevel.PlayerLoopSystem

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Unity.Services.Core.Scheduler.Internal.ScheduledInvocation

// Unity.Services.Core.Scheduler.Internal.ScheduledInvocation

// Unity.Services.Core.Scheduler.Internal.ActionScheduler

// Unity.Services.Core.Scheduler.Internal.ActionScheduler

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

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F m_Items[1];

	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IComparer`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimumBinaryHeap_1__ctor_m738B6C583818DEF20982FF5A7CB33A547FEDBEAC_gshared (MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007* __this, RuntimeObject* ___0_comparer, int32_t ___1_minimumCapacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Insert(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimumBinaryHeap_1_Insert_mD4C7D5CD2186455454C04CB444D687FCCA73A122_gshared (MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimumBinaryHeap_1_Remove_mF2902E4C1809F65B915847690794BF6EDED69464_gshared (MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ExtractMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimumBinaryHeap_1_ExtractMin_m234521E126041CA42ED0BD656C7DA4ECE855DBBE_gshared (MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MinimumBinaryHeap_1_get_Count_mE56E5CB156D33667EFEA806408FBB4FA3E1FD1B8_gshared_inline (MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007* __this, const RuntimeMethod* method) ;
// T Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimumBinaryHeap_1_get_Min_m47EAB7C9B714D750D9814E73E2B88C31364BE533_gshared (MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;

// System.Void Unity.Services.Core.Scheduler.Internal.UtcTimeProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UtcTimeProvider__ctor_m0B5F5EE010F7BDBED40E139D11D931E90D82DFE2 (UtcTimeProvider_t45FE04D3C9372C9089808CBF396C87E62AA26743* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::.ctor(Unity.Services.Core.Scheduler.Internal.ITimeProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionScheduler__ctor_m3F34A80C3965C10463085599131EA2A7A488C0AF (ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* __this, RuntimeObject* ___0_timeProvider, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Scheduler.Internal.ScheduledInvocationComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduledInvocationComparer__ctor_mBC023A46362D70B10A4FB65D8C0BB653C9F5F972 (ScheduledInvocationComparer_t785D4501646D05413E8F88FAECD14D9902742CC2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::.ctor(System.Collections.Generic.IComparer`1<T>,System.Int32)
inline void MinimumBinaryHeap_1__ctor_m9C7E57F3215D01D6C3543B43940790F1AD3BA4F4 (MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* __this, RuntimeObject* ___0_comparer, int32_t ___1_minimumCapacity, const RuntimeMethod* method)
{
	((  void (*) (MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007*, RuntimeObject*, int32_t, const RuntimeMethod*))MinimumBinaryHeap_1__ctor_m738B6C583818DEF20982FF5A7CB33A547FEDBEAC_gshared)((MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007*)__this, (RuntimeObject*)___0_comparer, ___1_minimumCapacity, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::.ctor()
inline void Dictionary_2__ctor_mC2C4F027C0F5DF5863AC1194299269D2907550D2 (Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::.ctor()
inline void List_1__ctor_mDB148E7C9F949120117B65AD14BDD7A5832ABA2F (List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction__ctor_m0D1D766F22D02176396DA6745A60EA046EE8227B (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Scheduler.Internal.ScheduledInvocation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduledInvocation__ctor_mB7D79780A933DBF3A750A1FABB2DAA45852513BD (ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::Insert(T)
inline void MinimumBinaryHeap_1_Insert_m7AD50B20077FD1D21C8A8849E35493078CEB85C4 (MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* __this, ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))MinimumBinaryHeap_1_Insert_mD4C7D5CD2186455454C04CB444D687FCCA73A122_gshared)((MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::Add(TKey,TValue)
inline void Dictionary_2_Add_mF48375565652F72160F059EB62C1FC8A6331A0AA (Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA* __this, int64_t ___0_key, ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD4BDCE432034E3DD2E6E079602DF5CE6C804937C (Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA* __this, int64_t ___0_key, ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::Remove(T)
inline void MinimumBinaryHeap_1_Remove_mB0E42318CD574177F32E7FECD9CE8C3B6F1DB464 (MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* __this, ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))MinimumBinaryHeap_1_Remove_mF2902E4C1809F65B915847690794BF6EDED69464_gshared)((MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::Remove(TKey)
inline bool Dictionary_2_Remove_m4EEA35DDD180B435CA4CCB7714A4FF4844ADFE34 (Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA* __this, int64_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::Clear()
inline void List_1_Clear_m708BB07A967216E1312094EBD2CD7C393B281926_inline (List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::ExtractMin()
inline ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* MinimumBinaryHeap_1_ExtractMin_m65CF7190823530D1EC9BB094AE57526F0B7FE155 (MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* __this, const RuntimeMethod* method)
{
	ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* il2cppRetVal;
	((  void (*) (MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MinimumBinaryHeap_1_ExtractMin_m234521E126041CA42ED0BD656C7DA4ECE855DBBE_gshared)((MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::Add(T)
inline void List_1_Add_m3539AF736216DC060382909AAC2FAD2AA49EF16C_inline (List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3* __this, ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::get_Count()
inline int32_t MinimumBinaryHeap_1_get_Count_m6E5BF62E288479F49068E184B79AFA6DD21ED588_inline (MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007*, const RuntimeMethod*))MinimumBinaryHeap_1_get_Count_mE56E5CB156D33667EFEA806408FBB4FA3E1FD1B8_gshared_inline)((MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007*)__this, method);
}
// T Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::get_Min()
inline ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* MinimumBinaryHeap_1_get_Min_m20F161E9A7C1A2CD4AAD86738EC2624ED43E6383 (MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* __this, const RuntimeMethod* method)
{
	ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* il2cppRetVal;
	((  void (*) (MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MinimumBinaryHeap_1_get_Min_m47EAB7C9B714D750D9814E73E2B88C31364BE533_gshared)((MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
inline void Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___0_value, method);
}
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
inline bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// T System.Nullable`1<System.DateTime>::GetValueOrDefault()
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Nullable_1_GetValueOrDefault_mBE26FDBA8873F7AE883FF290864E1D2665EAC52F_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_LessThanOrEqual_mC22EB236042D9E1C17C64393FB429E58B8F952F8 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_t1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_t2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::GetEnumerator()
inline Enumerator_tAE300C7056BDE583F62C47321CE68904319DE228 List_1_GetEnumerator_m1E92478DAD982718EEF541288BFDEEFBD906EB0A (List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3* __this, const RuntimeMethod* method)
{
	Enumerator_tAE300C7056BDE583F62C47321CE68904319DE228 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::Dispose()
inline void Enumerator_Dispose_mAC237D510E358726C014DD3F610942E989613559 (Enumerator_tAE300C7056BDE583F62C47321CE68904319DE228* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::get_Current()
inline ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* Enumerator_get_Current_m76478B2825D5D7493DFBD3E478233114BE128B35_inline (Enumerator_tAE300C7056BDE583F62C47321CE68904319DE228* __this, const RuntimeMethod* method)
{
	ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreLogger::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogException_m7129C6F678E086232211CBC0347F2300D0A42F3C (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>::MoveNext()
inline bool Enumerator_MoveNext_m46C4F2A2917BB3C219137A08B6E29579FCBF6CA5 (Enumerator_tAE300C7056BDE583F62C47321CE68904319DE228* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>::ToArray()
inline PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* List_1_ToArray_mF1B4B099D6EC830C7AE856231485FF238F2985E3 (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)il2cppRetVal;
}
// System.Void UnityEngine.LowLevel.PlayerLoop::SetPlayerLoop(UnityEngine.LowLevel.PlayerLoopSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoop_SetPlayerLoop_m7D2DB1287D886B0AC17C24F86C897C82A813D01B (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___0_loop, const RuntimeMethod* method) ;
// UnityEngine.LowLevel.PlayerLoopSystem UnityEngine.LowLevel.PlayerLoop::GetCurrentPlayerLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F PlayerLoop_GetCurrentPlayerLoop_mDC8CBE388799E9CF78200030C101875B1ABD4BA3 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mB04A90FFEEEF02B8DFAE87198BF601E3429D69AF (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___0_collection, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>::Contains(T)
inline bool List_1_Contains_m040083A451046E87051FFEF6119F608D5B760BD4 (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* __this, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>::Add(T)
inline void List_1_Add_m20B47157F68B2A1C1C92F34C111874885F78607A_inline (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* __this, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::UpdateCurrentPlayerLoopWith(System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>,UnityEngine.LowLevel.PlayerLoopSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionScheduler_UpdateCurrentPlayerLoopWith_m32DBF6F37F3D8776484265E95830FEFA40C6A230 (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* ___0_subSystemList, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___1_currentPlayerLoop, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::CompareTo(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_CompareTo_m4A3000CD4FF15EA7CA2E9C5C95A9D07F3AA8D35D (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Int64::CompareTo(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490 (int64_t* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionScheduler__ctor_m65721521873C0894B75820E4DC934F47E068495D (ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtcTimeProvider_t45FE04D3C9372C9089808CBF396C87E62AA26743_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(new UtcTimeProvider()) {}
		UtcTimeProvider_t45FE04D3C9372C9089808CBF396C87E62AA26743* L_0 = (UtcTimeProvider_t45FE04D3C9372C9089808CBF396C87E62AA26743*)il2cpp_codegen_object_new(UtcTimeProvider_t45FE04D3C9372C9089808CBF396C87E62AA26743_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UtcTimeProvider__ctor_m0B5F5EE010F7BDBED40E139D11D931E90D82DFE2(L_0, NULL);
		ActionScheduler__ctor_m3F34A80C3965C10463085599131EA2A7A488C0AF(__this, L_0, NULL);
		// : this(new UtcTimeProvider()) {}
		return;
	}
}
// System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::.ctor(Unity.Services.Core.Scheduler.Internal.ITimeProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionScheduler__ctor_m3F34A80C3965C10463085599131EA2A7A488C0AF (ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* __this, RuntimeObject* ___0_timeProvider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionScheduler_ExecuteExpiredActions_mB683F55950DD543D90A479DF7E68539969F2B48C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC2C4F027C0F5DF5863AC1194299269D2907550D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB148E7C9F949120117B65AD14BDD7A5832ABA2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimumBinaryHeap_1__ctor_m9C7E57F3215D01D6C3543B43940790F1AD3BA4F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScheduledInvocationComparer_t785D4501646D05413E8F88FAECD14D9902742CC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// readonly object m_Lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___m_Lock_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Lock_2), (void*)L_0);
		// readonly MinimumBinaryHeap<ScheduledInvocation> m_ScheduledActions
		//     = new MinimumBinaryHeap<ScheduledInvocation>(new ScheduledInvocationComparer());
		ScheduledInvocationComparer_t785D4501646D05413E8F88FAECD14D9902742CC2* L_1 = (ScheduledInvocationComparer_t785D4501646D05413E8F88FAECD14D9902742CC2*)il2cpp_codegen_object_new(ScheduledInvocationComparer_t785D4501646D05413E8F88FAECD14D9902742CC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ScheduledInvocationComparer__ctor_mBC023A46362D70B10A4FB65D8C0BB653C9F5F972(L_1, NULL);
		MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* L_2 = (MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD*)il2cpp_codegen_object_new(MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MinimumBinaryHeap_1__ctor_m9C7E57F3215D01D6C3543B43940790F1AD3BA4F4(L_2, L_1, ((int32_t)10), MinimumBinaryHeap_1__ctor_m9C7E57F3215D01D6C3543B43940790F1AD3BA4F4_RuntimeMethod_var);
		__this->___m_ScheduledActions_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScheduledActions_3), (void*)L_2);
		// readonly Dictionary<long, ScheduledInvocation> m_IdScheduledInvocationMap
		//     = new Dictionary<long, ScheduledInvocation>();
		Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA* L_3 = (Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA*)il2cpp_codegen_object_new(Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mC2C4F027C0F5DF5863AC1194299269D2907550D2(L_3, Dictionary_2__ctor_mC2C4F027C0F5DF5863AC1194299269D2907550D2_RuntimeMethod_var);
		__this->___m_IdScheduledInvocationMap_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_IdScheduledInvocationMap_4), (void*)L_3);
		// readonly List<ScheduledInvocation> m_ExpiredActions = new List<ScheduledInvocation>();
		List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3* L_4 = (List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3*)il2cpp_codegen_object_new(List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mDB148E7C9F949120117B65AD14BDD7A5832ABA2F(L_4, List_1__ctor_mDB148E7C9F949120117B65AD14BDD7A5832ABA2F_RuntimeMethod_var);
		__this->___m_ExpiredActions_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExpiredActions_5), (void*)L_4);
		// long m_NextId = k_MinimumIdValue;
		__this->___m_NextId_6 = ((int64_t)1);
		// public ActionScheduler(ITimeProvider timeProvider)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_TimeProvider = timeProvider;
		RuntimeObject* L_5 = ___0_timeProvider;
		__this->___m_TimeProvider_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TimeProvider_1), (void*)L_5);
		// SchedulerLoopSystem = new PlayerLoopSystem
		// {
		//     type = typeof(ActionScheduler),
		//     updateDelegate = ExecuteExpiredActions
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		(&V_0)->___type_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type_0), (void*)L_7);
		UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* L_8 = (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4*)il2cpp_codegen_object_new(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UpdateFunction__ctor_m0D1D766F22D02176396DA6745A60EA046EE8227B(L_8, __this, (intptr_t)((void*)ActionScheduler_ExecuteExpiredActions_mB683F55950DD543D90A479DF7E68539969F2B48C_RuntimeMethod_var), NULL);
		(&V_0)->___updateDelegate_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___updateDelegate_2), (void*)L_8);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_9 = V_0;
		__this->___SchedulerLoopSystem_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___SchedulerLoopSystem_0))->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___SchedulerLoopSystem_0))->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___SchedulerLoopSystem_0))->___updateDelegate_2), (void*)NULL);
		#endif
		// }
		return;
	}
}
// System.Int64 Unity.Services.Core.Scheduler.Internal.ActionScheduler::ScheduleAction(System.Action,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ActionScheduler_ScheduleAction_m6D586ADFCCA974FEBA1D7E23AA3D3DBBA517F8CD (ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, double ___1_delaySeconds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF48375565652F72160F059EB62C1FC8A6331A0AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITimeProvider_t6CB8C4316E58E0ABEFDEAAF4FA47B90DE03CD2E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimumBinaryHeap_1_Insert_m7AD50B20077FD1D21C8A8849E35493078CEB85C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* V_2 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	{
		// if (delaySeconds < 0)
		double L_0 = ___1_delaySeconds;
		if ((!(((double)L_0) < ((double)(0.0)))))
		{
			goto IL_0017;
		}
	}
	{
		// throw new ArgumentException("delaySeconds can not be negative");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7028C7CE8A2E408C86531D117C3BF7BE94AF10D4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActionScheduler_ScheduleAction_m6D586ADFCCA974FEBA1D7E23AA3D3DBBA517F8CD_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (action is null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___0_action;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// throw new ArgumentNullException(nameof(action));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActionScheduler_ScheduleAction_m6D586ADFCCA974FEBA1D7E23AA3D3DBBA517F8CD_RuntimeMethod_var)));
	}

IL_0025:
	{
		// lock (m_Lock)
		RuntimeObject* L_4 = __this->___m_Lock_2;
		V_0 = L_4;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b2:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_1;
					if (!L_5)
					{
						goto IL_00bb;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_00bb:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_7 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_1), NULL);
				// var scheduledInvocation = new ScheduledInvocation
				// {
				//     Action = action,
				//     InvocationTime = m_TimeProvider.Now.AddSeconds(delaySeconds),
				//     ActionId = m_NextId++
				// };
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_8 = (ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93*)il2cpp_codegen_object_new(ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				ScheduledInvocation__ctor_mB7D79780A933DBF3A750A1FABB2DAA45852513BD(L_8, NULL);
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_9 = L_8;
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = ___0_action;
				NullCheck(L_9);
				L_9->___Action_0 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&L_9->___Action_0), (void*)L_10);
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_11 = L_9;
				RuntimeObject* L_12 = __this->___m_TimeProvider_1;
				NullCheck(L_12);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_13;
				L_13 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(0 /* System.DateTime Unity.Services.Core.Scheduler.Internal.ITimeProvider::get_Now() */, ITimeProvider_t6CB8C4316E58E0ABEFDEAAF4FA47B90DE03CD2E6_il2cpp_TypeInfo_var, L_12);
				V_3 = L_13;
				double L_14 = ___1_delaySeconds;
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15;
				L_15 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_3), L_14, NULL);
				NullCheck(L_11);
				L_11->___InvocationTime_1 = L_15;
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_16 = L_11;
				int64_t L_17 = __this->___m_NextId_6;
				V_4 = L_17;
				int64_t L_18 = V_4;
				__this->___m_NextId_6 = ((int64_t)il2cpp_codegen_add(L_18, ((int64_t)1)));
				int64_t L_19 = V_4;
				NullCheck(L_16);
				L_16->___ActionId_2 = L_19;
				V_2 = L_16;
				// if (m_NextId < k_MinimumIdValue)
				int64_t L_20 = __this->___m_NextId_6;
				if ((((int64_t)L_20) >= ((int64_t)((int64_t)1))))
				{
					goto IL_008a_1;
				}
			}
			{
				// m_NextId = k_MinimumIdValue;
				__this->___m_NextId_6 = ((int64_t)1);
			}

IL_008a_1:
			{
				// m_ScheduledActions.Insert(scheduledInvocation);
				MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* L_21 = __this->___m_ScheduledActions_3;
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_22 = V_2;
				NullCheck(L_21);
				MinimumBinaryHeap_1_Insert_m7AD50B20077FD1D21C8A8849E35493078CEB85C4(L_21, L_22, MinimumBinaryHeap_1_Insert_m7AD50B20077FD1D21C8A8849E35493078CEB85C4_RuntimeMethod_var);
				// m_IdScheduledInvocationMap.Add(scheduledInvocation.ActionId, scheduledInvocation);
				Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA* L_23 = __this->___m_IdScheduledInvocationMap_4;
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_24 = V_2;
				NullCheck(L_24);
				int64_t L_25 = L_24->___ActionId_2;
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_26 = V_2;
				NullCheck(L_23);
				Dictionary_2_Add_mF48375565652F72160F059EB62C1FC8A6331A0AA(L_23, L_25, L_26, Dictionary_2_Add_mF48375565652F72160F059EB62C1FC8A6331A0AA_RuntimeMethod_var);
				// return scheduledInvocation.ActionId;
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_27 = V_2;
				NullCheck(L_27);
				int64_t L_28 = L_27->___ActionId_2;
				V_4 = L_28;
				goto IL_00bc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bc:
	{
		// }
		int64_t L_29 = V_4;
		return L_29;
	}
}
// System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::CancelAction(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionScheduler_CancelAction_mDC93985AECBE933318100A3BC5530E1D63F37875 (ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* __this, int64_t ___0_actionId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m4EEA35DDD180B435CA4CCB7714A4FF4844ADFE34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD4BDCE432034E3DD2E6E079602DF5CE6C804937C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimumBinaryHeap_1_Remove_mB0E42318CD574177F32E7FECD9CE8C3B6F1DB464_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* V_2 = NULL;
	{
		// lock (m_Lock)
		RuntimeObject* L_0 = __this->___m_Lock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_004c;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_004c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (!m_IdScheduledInvocationMap.TryGetValue(actionId, out var scheduledInvocation))
				Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA* L_4 = __this->___m_IdScheduledInvocationMap_4;
				int64_t L_5 = ___0_actionId;
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_TryGetValue_mD4BDCE432034E3DD2E6E079602DF5CE6C804937C(L_4, L_5, (&V_2), Dictionary_2_TryGetValue_mD4BDCE432034E3DD2E6E079602DF5CE6C804937C_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0023_1;
				}
			}
			{
				// return;
				goto IL_004d;
			}

IL_0023_1:
			{
				// m_ScheduledActions.Remove(scheduledInvocation);
				MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* L_7 = __this->___m_ScheduledActions_3;
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_8 = V_2;
				NullCheck(L_7);
				MinimumBinaryHeap_1_Remove_mB0E42318CD574177F32E7FECD9CE8C3B6F1DB464(L_7, L_8, MinimumBinaryHeap_1_Remove_mB0E42318CD574177F32E7FECD9CE8C3B6F1DB464_RuntimeMethod_var);
				// m_IdScheduledInvocationMap.Remove(scheduledInvocation.ActionId);
				Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA* L_9 = __this->___m_IdScheduledInvocationMap_4;
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_10 = V_2;
				NullCheck(L_10);
				int64_t L_11 = L_10->___ActionId_2;
				NullCheck(L_9);
				bool L_12;
				L_12 = Dictionary_2_Remove_m4EEA35DDD180B435CA4CCB7714A4FF4844ADFE34(L_9, L_11, Dictionary_2_Remove_m4EEA35DDD180B435CA4CCB7714A4FF4844ADFE34_RuntimeMethod_var);
				// }
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::ExecuteExpiredActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionScheduler_ExecuteExpiredActions_mB683F55950DD543D90A479DF7E68539969F2B48C (ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m4EEA35DDD180B435CA4CCB7714A4FF4844ADFE34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAC237D510E358726C014DD3F610942E989613559_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m46C4F2A2917BB3C219137A08B6E29579FCBF6CA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m76478B2825D5D7493DFBD3E478233114BE128B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITimeProvider_t6CB8C4316E58E0ABEFDEAAF4FA47B90DE03CD2E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3539AF736216DC060382909AAC2FAD2AA49EF16C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m708BB07A967216E1312094EBD2CD7C393B281926_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1E92478DAD982718EEF541288BFDEEFBD906EB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimumBinaryHeap_1_ExtractMin_m65CF7190823530D1EC9BB094AE57526F0B7FE155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimumBinaryHeap_1_Remove_mB0E42318CD574177F32E7FECD9CE8C3B6F1DB464_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimumBinaryHeap_1_get_Count_m6E5BF62E288479F49068E184B79AFA6DD21ED588_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimumBinaryHeap_1_get_Min_m20F161E9A7C1A2CD4AAD86738EC2624ED43E6383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mBE26FDBA8873F7AE883FF290864E1D2665EAC52F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* V_2 = NULL;
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_3;
	memset((&V_3), 0, sizeof(V_3));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_tAE300C7056BDE583F62C47321CE68904319DE228 V_6;
	memset((&V_6), 0, sizeof(V_6));
	ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* G_B6_0 = NULL;
	ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* G_B5_0 = NULL;
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	int32_t G_B10_0 = 0;
	{
		// lock (m_Lock)
		RuntimeObject* L_0 = __this->___m_Lock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fa:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0103;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0103:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// m_ExpiredActions.Clear();
				List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3* L_4 = __this->___m_ExpiredActions_5;
				NullCheck(L_4);
				List_1_Clear_m708BB07A967216E1312094EBD2CD7C393B281926_inline(L_4, List_1_Clear_m708BB07A967216E1312094EBD2CD7C393B281926_RuntimeMethod_var);
				goto IL_0054_1;
			}

IL_001e_1:
			{
				// var expiredAction = m_ScheduledActions.ExtractMin();
				MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* L_5 = __this->___m_ScheduledActions_3;
				NullCheck(L_5);
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_6;
				L_6 = MinimumBinaryHeap_1_ExtractMin_m65CF7190823530D1EC9BB094AE57526F0B7FE155(L_5, MinimumBinaryHeap_1_ExtractMin_m65CF7190823530D1EC9BB094AE57526F0B7FE155_RuntimeMethod_var);
				V_2 = L_6;
				// m_ExpiredActions.Add(expiredAction);
				List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3* L_7 = __this->___m_ExpiredActions_5;
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_8 = V_2;
				NullCheck(L_7);
				List_1_Add_m3539AF736216DC060382909AAC2FAD2AA49EF16C_inline(L_7, L_8, List_1_Add_m3539AF736216DC060382909AAC2FAD2AA49EF16C_RuntimeMethod_var);
				// m_ScheduledActions.Remove(expiredAction);
				MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* L_9 = __this->___m_ScheduledActions_3;
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_10 = V_2;
				NullCheck(L_9);
				MinimumBinaryHeap_1_Remove_mB0E42318CD574177F32E7FECD9CE8C3B6F1DB464(L_9, L_10, MinimumBinaryHeap_1_Remove_mB0E42318CD574177F32E7FECD9CE8C3B6F1DB464_RuntimeMethod_var);
				// m_IdScheduledInvocationMap.Remove(expiredAction.ActionId);
				Dictionary_2_t2306F810ADE46E708DBCF5BFFD57ED345A61D8CA* L_11 = __this->___m_IdScheduledInvocationMap_4;
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_12 = V_2;
				NullCheck(L_12);
				int64_t L_13 = L_12->___ActionId_2;
				NullCheck(L_11);
				bool L_14;
				L_14 = Dictionary_2_Remove_m4EEA35DDD180B435CA4CCB7714A4FF4844ADFE34(L_11, L_13, Dictionary_2_Remove_m4EEA35DDD180B435CA4CCB7714A4FF4844ADFE34_RuntimeMethod_var);
			}

IL_0054_1:
			{
				// while (m_ScheduledActions.Count > 0
				//        && m_ScheduledActions.Min?.InvocationTime <= m_TimeProvider.Now)
				MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* L_15 = __this->___m_ScheduledActions_3;
				NullCheck(L_15);
				int32_t L_16;
				L_16 = MinimumBinaryHeap_1_get_Count_m6E5BF62E288479F49068E184B79AFA6DD21ED588_inline(L_15, MinimumBinaryHeap_1_get_Count_m6E5BF62E288479F49068E184B79AFA6DD21ED588_RuntimeMethod_var);
				if ((((int32_t)L_16) <= ((int32_t)0)))
				{
					goto IL_00b4_1;
				}
			}
			{
				MinimumBinaryHeap_1_tB7A85B4D870F0107AF6031545D6054927A1CB7AD* L_17 = __this->___m_ScheduledActions_3;
				NullCheck(L_17);
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_18;
				L_18 = MinimumBinaryHeap_1_get_Min_m20F161E9A7C1A2CD4AAD86738EC2624ED43E6383(L_17, MinimumBinaryHeap_1_get_Min_m20F161E9A7C1A2CD4AAD86738EC2624ED43E6383_RuntimeMethod_var);
				ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_19 = L_18;
				G_B5_0 = L_19;
				if (L_19)
				{
					G_B6_0 = L_19;
					goto IL_007d_1;
				}
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC));
				Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_20 = V_5;
				G_B7_0 = L_20;
				goto IL_0087_1;
			}

IL_007d_1:
			{
				NullCheck(G_B6_0);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_21 = G_B6_0->___InvocationTime_1;
				Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_22;
				memset((&L_22), 0, sizeof(L_22));
				Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF((&L_22), L_21, /*hidden argument*/Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
				G_B7_0 = L_22;
			}

IL_0087_1:
			{
				V_3 = G_B7_0;
				RuntimeObject* L_23 = __this->___m_TimeProvider_1;
				NullCheck(L_23);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_24;
				L_24 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(0 /* System.DateTime Unity.Services.Core.Scheduler.Internal.ITimeProvider::get_Now() */, ITimeProvider_t6CB8C4316E58E0ABEFDEAAF4FA47B90DE03CD2E6_il2cpp_TypeInfo_var, L_23);
				V_4 = L_24;
				bool L_25;
				L_25 = Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline((&V_3), Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_00a1_1;
				}
			}
			{
				G_B10_0 = 0;
				goto IL_00af_1;
			}

IL_00a1_1:
			{
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_26;
				L_26 = Nullable_1_GetValueOrDefault_mBE26FDBA8873F7AE883FF290864E1D2665EAC52F_inline((&V_3), Nullable_1_GetValueOrDefault_mBE26FDBA8873F7AE883FF290864E1D2665EAC52F_RuntimeMethod_var);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_27 = V_4;
				il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
				bool L_28;
				L_28 = DateTime_op_LessThanOrEqual_mC22EB236042D9E1C17C64393FB429E58B8F952F8(L_26, L_27, NULL);
				G_B10_0 = ((int32_t)(L_28));
			}

IL_00af_1:
			{
				if (G_B10_0)
				{
					goto IL_001e_1;
				}
			}

IL_00b4_1:
			{
				// foreach (var expiredAction in m_ExpiredActions)
				List_1_tFD4080EF47ACD067F2E4AB57C9E2E8E64CA953E3* L_29 = __this->___m_ExpiredActions_5;
				NullCheck(L_29);
				Enumerator_tAE300C7056BDE583F62C47321CE68904319DE228 L_30;
				L_30 = List_1_GetEnumerator_m1E92478DAD982718EEF541288BFDEEFBD906EB0A(L_29, List_1_GetEnumerator_m1E92478DAD982718EEF541288BFDEEFBD906EB0A_RuntimeMethod_var);
				V_6 = L_30;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00ec_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mAC237D510E358726C014DD3F610942E989613559((&V_6), Enumerator_Dispose_mAC237D510E358726C014DD3F610942E989613559_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00e1_2;
					}

IL_00c3_2:
					{
						// foreach (var expiredAction in m_ExpiredActions)
						ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_31;
						L_31 = Enumerator_get_Current_m76478B2825D5D7493DFBD3E478233114BE128B35_inline((&V_6), Enumerator_get_Current_m76478B2825D5D7493DFBD3E478233114BE128B35_RuntimeMethod_var);
						V_7 = L_31;
					}
					try
					{// begin try (depth: 3)
						// expiredAction.Action();
						ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_32 = V_7;
						NullCheck(L_32);
						Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_33 = L_32->___Action_0;
						NullCheck(L_33);
						Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_33, NULL);
						// }
						goto IL_00e1_2;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
						{
							IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
							goto CATCH_00da_2;
						}
						throw e;
					}

CATCH_00da_2:
					{// begin catch(System.Exception)
						// CoreLogger.LogException(e);
						CoreLogger_LogException_m7129C6F678E086232211CBC0347F2300D0A42F3C(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
						// }
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_00e1_2;
					}// end catch (depth: 3)

IL_00e1_2:
					{
						// foreach (var expiredAction in m_ExpiredActions)
						bool L_34;
						L_34 = Enumerator_MoveNext_m46C4F2A2917BB3C219137A08B6E29579FCBF6CA5((&V_6), Enumerator_MoveNext_m46C4F2A2917BB3C219137A08B6E29579FCBF6CA5_RuntimeMethod_var);
						if (L_34)
						{
							goto IL_00c3_2;
						}
					}
					{
						goto IL_0104;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0104:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::UpdateCurrentPlayerLoopWith(System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>,UnityEngine.LowLevel.PlayerLoopSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionScheduler_UpdateCurrentPlayerLoopWith_m32DBF6F37F3D8776484265E95830FEFA40C6A230 (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* ___0_subSystemList, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___1_currentPlayerLoop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF1B4B099D6EC830C7AE856231485FF238F2985E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentPlayerLoop.subSystemList = subSystemList.ToArray();
		List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* L_0 = ___0_subSystemList;
		NullCheck(L_0);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_1;
		L_1 = List_1_ToArray_mF1B4B099D6EC830C7AE856231485FF238F2985E3(L_0, List_1_ToArray_mF1B4B099D6EC830C7AE856231485FF238F2985E3_RuntimeMethod_var);
		(&___1_currentPlayerLoop)->___subSystemList_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&___1_currentPlayerLoop)->___subSystemList_1), (void*)L_1);
		// PlayerLoop.SetPlayerLoop(currentPlayerLoop);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_2 = ___1_currentPlayerLoop;
		PlayerLoop_SetPlayerLoop_m7D2DB1287D886B0AC17C24F86C897C82A813D01B(L_2, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::JoinPlayerLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionScheduler_JoinPlayerLoopSystem_mB998001E51285B4DF2406DE197A3A5377BD62892 (ActionScheduler_t25AE26866357EBC70F6698FCD3E0B6DBE7473154* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m20B47157F68B2A1C1C92F34C111874885F78607A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m040083A451046E87051FFEF6119F608D5B760BD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB04A90FFEEEF02B8DFAE87198BF601E3429D69AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* V_1 = NULL;
	{
		// var currentPlayerLoop = PlayerLoop.GetCurrentPlayerLoop();
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_0;
		L_0 = PlayerLoop_GetCurrentPlayerLoop_mDC8CBE388799E9CF78200030C101875B1ABD4BA3(NULL);
		V_0 = L_0;
		// var currentSubSystems = new List<PlayerLoopSystem>(currentPlayerLoop.subSystemList);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_1 = V_0;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_2 = L_1.___subSystemList_1;
		List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* L_3 = (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52*)il2cpp_codegen_object_new(List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mB04A90FFEEEF02B8DFAE87198BF601E3429D69AF(L_3, (RuntimeObject*)L_2, List_1__ctor_mB04A90FFEEEF02B8DFAE87198BF601E3429D69AF_RuntimeMethod_var);
		V_1 = L_3;
		// if (!currentSubSystems.Contains(SchedulerLoopSystem))
		List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* L_4 = V_1;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_5 = __this->___SchedulerLoopSystem_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Contains_m040083A451046E87051FFEF6119F608D5B760BD4(L_4, L_5, List_1_Contains_m040083A451046E87051FFEF6119F608D5B760BD4_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		// currentSubSystems.Add(SchedulerLoopSystem);
		List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* L_7 = V_1;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_8 = __this->___SchedulerLoopSystem_0;
		NullCheck(L_7);
		List_1_Add_m20B47157F68B2A1C1C92F34C111874885F78607A_inline(L_7, L_8, List_1_Add_m20B47157F68B2A1C1C92F34C111874885F78607A_RuntimeMethod_var);
		// UpdateCurrentPlayerLoopWith(currentSubSystems, currentPlayerLoop);
		List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* L_9 = V_1;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_10 = V_0;
		ActionScheduler_UpdateCurrentPlayerLoopWith_m32DBF6F37F3D8776484265E95830FEFA40C6A230(L_9, L_10, NULL);
	}

IL_0033:
	{
		// }
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
// System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimumBinaryHeap__ctor_mC63658A36EB912677E6346A2991932B83CED0B5F (MinimumBinaryHeap_tA55F58E6B1D3F482C11529BAB4C1D56F5BF745FE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Unity.Services.Core.Scheduler.Internal.ScheduledInvocation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduledInvocation__ctor_mB7D79780A933DBF3A750A1FABB2DAA45852513BD (ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Int32 Unity.Services.Core.Scheduler.Internal.ScheduledInvocationComparer::Compare(Unity.Services.Core.Scheduler.Internal.ScheduledInvocation,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScheduledInvocationComparer_Compare_m288DA5B3B9D15E393A57ADABBADD311975DD9FE4 (ScheduledInvocationComparer_t785D4501646D05413E8F88FAECD14D9902742CC2* __this, ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* ___0_x, ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (ReferenceEquals(x, y))
		ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_0 = ___0_x;
		ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_1 = ___1_y;
		if ((!(((RuntimeObject*)(ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93*)L_0) == ((RuntimeObject*)(ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0006:
	{
		// if (ReferenceEquals(null, y))
		ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_2 = ___1_y;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_000b:
	{
		// if (ReferenceEquals(null, x))
		ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_3 = ___0_x;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0010:
	{
		// var compareResult = x.InvocationTime.CompareTo(y.InvocationTime);
		ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_4 = ___0_x;
		NullCheck(L_4);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_5 = (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(&L_4->___InvocationTime_1);
		ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_6 = ___1_y;
		NullCheck(L_6);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7 = L_6->___InvocationTime_1;
		int32_t L_8;
		L_8 = DateTime_CompareTo_m4A3000CD4FF15EA7CA2E9C5C95A9D07F3AA8D35D(L_5, L_7, NULL);
		V_0 = L_8;
		// if (compareResult == 0)
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_0037;
		}
	}
	{
		// compareResult = x.ActionId.CompareTo(y.ActionId);
		ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_10 = ___0_x;
		NullCheck(L_10);
		int64_t* L_11 = (int64_t*)(&L_10->___ActionId_2);
		ScheduledInvocation_t049B2F607AC8AAA60877C47F1F9D5F8EBDBA0B93* L_12 = ___1_y;
		NullCheck(L_12);
		int64_t L_13 = L_12->___ActionId_2;
		int32_t L_14;
		L_14 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490(L_11, L_13, NULL);
		V_0 = L_14;
	}

IL_0037:
	{
		// return compareResult;
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Void Unity.Services.Core.Scheduler.Internal.ScheduledInvocationComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduledInvocationComparer__ctor_mBC023A46362D70B10A4FB65D8C0BB653C9F5F972 (ScheduledInvocationComparer_t785D4501646D05413E8F88FAECD14D9902742CC2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.DateTime Unity.Services.Core.Scheduler.Internal.UtcTimeProvider::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D UtcTimeProvider_get_Now_m2BBC0DB7893BDC8457768D897F441264BA779A3F (UtcTimeProvider_t45FE04D3C9372C9089808CBF396C87E62AA26743* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DateTime Now => DateTime.UtcNow;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Scheduler.Internal.UtcTimeProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UtcTimeProvider__ctor_m0B5F5EE010F7BDBED40E139D11D931E90D82DFE2 (UtcTimeProvider_t45FE04D3C9372C9089808CBF396C87E62AA26743* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = __this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MinimumBinaryHeap_1_get_Count_mE56E5CB156D33667EFEA806408FBB4FA3E1FD1B8_gshared_inline (MinimumBinaryHeap_1_tAABE0B65F30D88109575BAAA7E059C648AA72007* __this, const RuntimeMethod* method) 
{
	{
		// public int Count { get; private set; }
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
