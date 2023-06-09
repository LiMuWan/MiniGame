﻿#include "pch-cpp.hpp"

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

// System.Action`1<UniFramework.Event.IEventMessage>
struct Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct Dictionary_2_t056A679EC6E5807C1AAEB51DF4E7EA591D6DBEF8;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct KeyCollection_t30777644B7A9F21F16690824FC8E928DDE0A7303;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct KeyCollection_tB61438C9FD774CF543E2F9D2F62FA8C8CA2B527D;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
// System.Collections.Generic.LinkedListNode`1<System.Action`1<UniFramework.Event.IEventMessage>>
struct LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F;
// System.Collections.Generic.LinkedListNode`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9;
// System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>
struct LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245;
// System.Collections.Generic.LinkedList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9;
// System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>
struct List_1_t47958B1CA41CD666AB8A3B5C661D42FF4D007279;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>
struct List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct ValueCollection_t618A3CB8B30A96356C9CC42EC93A0F44CE4133A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct ValueCollection_t64C27259C4A54836A1B20463BA8E749BDCDC1D18;
// System.Action`1<UniFramework.Event.IEventMessage>[]
struct Action_1U5BU5D_tFCCC1A669E12D11CC49B44AD9E2FB162FEDB02DB;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>[]
struct EntryU5BU5D_tA513852498BD612FFE3677987DB862D632E248F1;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>[]
struct EntryU5BU5D_t70C3A5A99512751C37F57CB90180C7F85023793E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UniFramework.Event.UniEvent/PostWrapper[]
struct PostWrapperU5BU5D_tE9D49C05877C795D44F5EED483352941E4F388A5;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UniFramework.Event.EventGroup
struct EventGroup_tE501F54247FC83B92FD5A84DAD660029B3AEEE2F;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UniFramework.Event.IEventMessage
struct IEventMessage_tB42AC73B18290A7493A1977542780F9DA8B5D9AC;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UniFramework.Event.UniEventDriver
struct UniEventDriver_tA5647DF856D970D2AF520EF2012D31DD3A649F1C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UniFramework.Event.UniEvent/PostWrapper
struct PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t056A679EC6E5807C1AAEB51DF4E7EA591D6DBEF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2C2A31EC8F081A703CF4CAA538CCF7816626F9EC;
IL2CPP_EXTERN_C String_t* _stringLiteral2D75CF734386176E70FCF86F01D17CEB9F77632A;
IL2CPP_EXTERN_C String_t* _stringLiteral4606498A3C0251CCCCAABA79968B003E52A227AB;
IL2CPP_EXTERN_C String_t* _stringLiteral4C8C00CA8B1FC768BE330815119433CED16578F0;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mCFCAB6BE4BFB0B68B279329FC588048D9AA96708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m963F6BE102CFE808DAA41C415DB3584029848816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mBD54E238C3AB205CCD4BCE73D28EA379F056B133_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4107182356683B08962CC6D8D7EE65FD8F478366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m4D4CA380E353A2D24F4F5794CEDBC6AE3C66F830_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7144BD4BC1938A1514A1A5BBD008C92CAD1E0399_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA56D5A0CE478B42458253B99C1B44F2F8EF753E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m230A995ABD272ABB36AF0D475208FD75D06E1BC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2FE239A1A8D0A5F4413FC7BA8388638A4557774D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m87581BB705264EDBB84B9A381551B4E902E29F57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC4F606CA8941113D9163ACA3250201BA6FAEF77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDFE653A29A943E31F523B56D9035758A585A52CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m46AA3D3FE1B17CAAB5DA2B5E15D714629103887B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m90AE71D16B24CA85AA556AE7365576211BFBADF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUniEventDriver_tA5647DF856D970D2AF520EF2012D31DD3A649F1C_m796171BF41648DA5484C125A70F4557F09012A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_mCA2B0CD3C2906BBB8C2F0EA20E965C9DE35A8567_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m57B7252913B41F6FDC28FF69363D3BD055927053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD0ABA347503D9475B29A6F1A02E58C74CB0125FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedListNode_1_get_Previous_mE5FD98A22FB9C9643EE3441C6D307EA3F69D7344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedListNode_1_get_Value_mAD2488C4B92C8C1918B67C7FFB4537C4E315613D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddLast_m3E12A3CFA819278F32A6A9DA475450D7613E011C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_Clear_m1ECA92D74EE01B439359F5DD905C9E6DF9610DD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_Contains_m430D73B6FB50718D83D4ECD3A680BEFB07931326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_Remove_m2C8CE926DA9A74565F8851520AA1067A5F8630FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_mAD42959CAAB7596201B23516FBBD79B4F660FD4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_get_Count_mB692B4D208B55F541F3BB911E7775DB2CF93688D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_get_Last_m6F00E536F0408E031B460CEE70AE136C2DC3850A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF34C9BDD25EE6FD4D78D3F950D0E875A8F27FE64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE1E53BD24C9A1FC898C76AA5C7C082F06885729E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mEECAD835EAECADCF9EB473C4A5CE55059F1E8073_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m59AD491EA1B7081D2948895EB4E97E749D3F9EAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDDEB530634B6618F1B05441FDF1232C87B3EEB07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2E13ADC8A3ACBC1354C047E196E930A23775A675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5CC8869FF040E388D384C2FBA45FA7EBAC7554E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m32131B35B6036090B4A4CEBE8407F0E3B71D3292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8BD1521E6D652971D676D4EA7C6C463098FC29BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniEvent_Initalize_mA822B8559446292FC577EC8115EDDE6DBD1AF3B3_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7401F67EBE674BE84DDC2626A288C45D1C5A6896 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA513852498BD612FFE3677987DB862D632E248F1* ____entries_1;
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
	KeyCollection_t30777644B7A9F21F16690824FC8E928DDE0A7303* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t618A3CB8B30A96356C9CC42EC93A0F44CE4133A2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct Dictionary_2_t056A679EC6E5807C1AAEB51DF4E7EA591D6DBEF8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t70C3A5A99512751C37F57CB90180C7F85023793E* ____entries_1;
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
	KeyCollection_tB61438C9FD774CF543E2F9D2F62FA8C8CA2B527D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t64C27259C4A54836A1B20463BA8E749BDCDC1D18* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct KeyCollection_t30777644B7A9F21F16690824FC8E928DDE0A7303  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* ____dictionary_0;
};

// System.Collections.Generic.LinkedListNode`1<System.Action`1<UniFramework.Event.IEventMessage>>
struct LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::list
	LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::next
	LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* ___next_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::prev
	LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* ___prev_2;
	// T System.Collections.Generic.LinkedListNode`1::item
	Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* ___item_3;
};

// System.Collections.Generic.LinkedListNode`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9 : public RuntimeObject {};

// System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>
struct LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245  : public RuntimeObject
{
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_4;
};

// System.Collections.Generic.LinkedList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9  : public RuntimeObject
{
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_4;
};

// System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>
struct List_1_t47958B1CA41CD666AB8A3B5C661D42FF4D007279  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_tFCCC1A669E12D11CC49B44AD9E2FB162FEDB02DB* ____items_1;
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

// System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>
struct List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PostWrapperU5BU5D_tE9D49C05877C795D44F5EED483352941E4F388A5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UniFramework.Event.EventGroup
struct EventGroup_tE501F54247FC83B92FD5A84DAD660029B3AEEE2F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>> UniFramework.Event.EventGroup::_cachedListener
	Dictionary_2_t056A679EC6E5807C1AAEB51DF4E7EA591D6DBEF8* ____cachedListener_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// UniFramework.Event.UniEvent
struct UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468  : public RuntimeObject
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

// UniFramework.Event.UniEvent/PostWrapper
struct PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84  : public RuntimeObject
{
	// System.Int32 UniFramework.Event.UniEvent/PostWrapper::PostFrame
	int32_t ___PostFrame_0;
	// System.Int32 UniFramework.Event.UniEvent/PostWrapper::EventID
	int32_t ___EventID_1;
	// UniFramework.Event.IEventMessage UniFramework.Event.UniEvent/PostWrapper::Message
	RuntimeObject* ___Message_2;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct Enumerator_t5E48BC499B2C59C9D49E50EF9189346687C67616 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	int32_t ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977;

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct KeyValuePair_2_t42C43153F4910E3C476F83D04705726261D16D8B 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t47958B1CA41CD666AB8A3B5C661D42FF4D007279* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

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

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct Enumerator_t45EA399D558F3312AB219E3AC4A8A435233B325A 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t056A679EC6E5807C1AAEB51DF4E7EA591D6DBEF8* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t42C43153F4910E3C476F83D04705726261D16D8B ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;

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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<UniFramework.Event.IEventMessage>
struct Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UniFramework.Event.UniEventDriver
struct UniEventDriver_tA5647DF856D970D2AF520EF2012D31DD3A649F1C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>

// System.Collections.Generic.LinkedListNode`1<System.Action`1<UniFramework.Event.IEventMessage>>

// System.Collections.Generic.LinkedListNode`1<System.Action`1<UniFramework.Event.IEventMessage>>

// System.Collections.Generic.LinkedListNode`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.LinkedListNode`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>

// System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>

// System.Collections.Generic.LinkedList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.LinkedList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>
struct List_1_t47958B1CA41CD666AB8A3B5C661D42FF4D007279_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Action_1U5BU5D_tFCCC1A669E12D11CC49B44AD9E2FB162FEDB02DB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>
struct List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PostWrapperU5BU5D_tE9D49C05877C795D44F5EED483352941E4F388A5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>

// UniFramework.Event.EventGroup

// UniFramework.Event.EventGroup

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UniFramework.Event.UniEvent
struct UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields
{
	// System.Boolean UniFramework.Event.UniEvent::_isInitialize
	bool ____isInitialize_0;
	// UnityEngine.GameObject UniFramework.Event.UniEvent::_driver
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____driver_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>> UniFramework.Event.UniEvent::_listeners
	Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* ____listeners_2;
	// System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper> UniFramework.Event.UniEvent::_postingList
	List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B* ____postingList_3;
};

// UniFramework.Event.UniEvent

// UniFramework.Event.UniEvent/PostWrapper

// UniFramework.Event.UniEvent/PostWrapper

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

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

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.GameObject

// UnityEngine.GameObject

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

// System.Action`1<UniFramework.Event.IEventMessage>

// System.Action`1<UniFramework.Event.IEventMessage>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UniFramework.Event.UniEventDriver

// UniFramework.Event.UniEventDriver
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection_GetEnumerator_m1624A44B07D62B8CC592FEAE7A521D9504E0ACB3_gshared (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* __this, Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3E0B734E98D35978EEE706FCEC2FE08FEA74FD35_gshared (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m2D9E3398C2A3349E3F0F189A38E881D11DE5AA15_gshared_inline (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_Clear_mEEF1E2EB69B41641254C9872FE3D6646FCE6D0F7_gshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m21C503A713FDCA406492E2BE960D85320752E615_gshared (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1__ctor_mED84A7ED11208CC35CCE76B96F8ADC2AADF1542F_gshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.LinkedList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinkedList_1_Contains_m84F2AC87606CAFCD70ECB18C8ECFF41F105DADB8_gshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AddLast(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* LinkedList_1_AddLast_mFD59AD680986C098B0C771703AFD654C00C981E3_gshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.LinkedList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinkedList_1_Remove_m7D799D70C3D6A30F27FE6CFCDF155759B031C0D0_gshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.LinkedList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_m6E80F28E7CB5BA6E35ECE961C429AE6CA69003A2_gshared_inline (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Last()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* LinkedList_1_get_Last_m79C544AB97456CCD4B9D035096F018ED752653D5_gshared (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.LinkedListNode`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LinkedListNode_1_get_Value_mBE1731ACB5C697546EC5E8D10426D81420E8491F_gshared_inline (/*System.Collections.Generic.LinkedListNode`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Previous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* LinkedListNode_1_get_Previous_m078A66552207385FADB8C52D5DBA636CE15A63FD_gshared (/*System.Collections.Generic.LinkedListNode`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;

// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::GetEnumerator()
inline Enumerator_t45EA399D558F3312AB219E3AC4A8A435233B325A Dictionary_2_GetEnumerator_m4D4CA380E353A2D24F4F5794CEDBC6AE3C66F830 (Dictionary_2_t056A679EC6E5807C1AAEB51DF4E7EA591D6DBEF8* __this, const RuntimeMethod* method)
{
	Enumerator_t45EA399D558F3312AB219E3AC4A8A435233B325A il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::Dispose()
inline void Enumerator_Dispose_m2FE239A1A8D0A5F4413FC7BA8388638A4557774D (Enumerator_t45EA399D558F3312AB219E3AC4A8A435233B325A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::get_Current()
inline KeyValuePair_2_t42C43153F4910E3C476F83D04705726261D16D8B Enumerator_get_Current_m46AA3D3FE1B17CAAB5DA2B5E15D714629103887B_inline (Enumerator_t45EA399D558F3312AB219E3AC4A8A435233B325A* __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t42C43153F4910E3C476F83D04705726261D16D8B il2cppRetVal;
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::get_Key()
inline Type_t* KeyValuePair_2_get_Key_m57B7252913B41F6FDC28FF69363D3BD055927053_inline (KeyValuePair_2_t42C43153F4910E3C476F83D04705726261D16D8B* __this, const RuntimeMethod* method)
{
	Type_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::get_Value()
inline List_1_t47958B1CA41CD666AB8A3B5C661D42FF4D007279* KeyValuePair_2_get_Value_mD0ABA347503D9475B29A6F1A02E58C74CB0125FB_inline (KeyValuePair_2_t42C43153F4910E3C476F83D04705726261D16D8B* __this, const RuntimeMethod* method)
{
	List_1_t47958B1CA41CD666AB8A3B5C661D42FF4D007279* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>::get_Item(System.Int32)
inline Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* List_1_get_Item_m8BD1521E6D652971D676D4EA7C6C463098FC29BF (List_1_t47958B1CA41CD666AB8A3B5C661D42FF4D007279* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UniFramework.Event.UniEvent::RemoveListener(System.Type,System.Action`1<UniFramework.Event.IEventMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_RemoveListener_mE6AEF992B879D4726FB77D9A3951A70BE54B2923 (Type_t* ___0_eventType, Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* ___1_listener, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>::get_Count()
inline int32_t List_1_get_Count_m2E13ADC8A3ACBC1354C047E196E930A23775A675_inline (List_1_t47958B1CA41CD666AB8A3B5C661D42FF4D007279* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>::Clear()
inline void List_1_Clear_mE1E53BD24C9A1FC898C76AA5C7C082F06885729E_inline (List_1_t47958B1CA41CD666AB8A3B5C661D42FF4D007279* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::MoveNext()
inline bool Enumerator_MoveNext_mDFE653A29A943E31F523B56D9035758A585A52CD (Enumerator_t45EA399D558F3312AB219E3AC4A8A435233B325A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::Clear()
inline void Dictionary_2_Clear_m963F6BE102CFE808DAA41C415DB3584029848816 (Dictionary_2_t056A679EC6E5807C1AAEB51DF4E7EA591D6DBEF8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::.ctor()
inline void Dictionary_2__ctor_mA56D5A0CE478B42458253B99C1B44F2F8EF753E0 (Dictionary_2_t056A679EC6E5807C1AAEB51DF4E7EA591D6DBEF8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UniFramework.Event.UniEventDriver>()
inline UniEventDriver_tA5647DF856D970D2AF520EF2012D31DD3A649F1C* GameObject_AddComponent_TisUniEventDriver_tA5647DF856D970D2AF520EF2012D31DD3A649F1C_m796171BF41648DA5484C125A70F4557F09012A08 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UniEventDriver_tA5647DF856D970D2AF520EF2012D31DD3A649F1C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UniFramework.Utility.UniLogger::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Log_m6C38F40923E6C37ED422BD8DA0B5039C7298E8FC (String_t* ___0_info, const RuntimeMethod* method) ;
// System.Void UniFramework.Event.UniEvent::ClearAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_ClearAll_m48AAB5757071CDB9B2B0D34ABAC68634548268E7 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>::get_Count()
inline int32_t List_1_get_Count_m5CC8869FF040E388D384C2FBA45FA7EBAC7554E1_inline (List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>::get_Item(System.Int32)
inline PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* List_1_get_Item_m32131B35B6036090B4A4CEBE8407F0E3B71D3292 (List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// System.Void UniFramework.Event.UniEvent::SendMessage(System.Int32,UniFramework.Event.IEventMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_SendMessage_mAEFDFF98113145BFDC8398321C287AFAF2F73FBC (int32_t ___0_eventId, RuntimeObject* ___1_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m59AD491EA1B7081D2948895EB4E97E749D3F9EAD (List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::get_Keys()
inline KeyCollection_t30777644B7A9F21F16690824FC8E928DDE0A7303* Dictionary_2_get_Keys_m230A995ABD272ABB36AF0D475208FD75D06E1BC7 (Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* __this, const RuntimeMethod* method)
{
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* il2cppRetVal = ((  KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
	return (KeyCollection_t30777644B7A9F21F16690824FC8E928DDE0A7303*)il2cppRetVal;
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::GetEnumerator()
inline Enumerator_t5E48BC499B2C59C9D49E50EF9189346687C67616 KeyCollection_GetEnumerator_mCA2B0CD3C2906BBB8C2F0EA20E965C9DE35A8567 (KeyCollection_t30777644B7A9F21F16690824FC8E928DDE0A7303* __this, const RuntimeMethod* method)
{
	Enumerator_t5E48BC499B2C59C9D49E50EF9189346687C67616 il2cppRetVal;
	((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, const RuntimeMethod*))KeyCollection_GetEnumerator_m1624A44B07D62B8CC592FEAE7A521D9504E0ACB3_gshared)((KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)__this, (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::Dispose()
inline void Enumerator_Dispose_m87581BB705264EDBB84B9A381551B4E902E29F57 (Enumerator_t5E48BC499B2C59C9D49E50EF9189346687C67616* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, const RuntimeMethod*))Enumerator_Dispose_m3E0B734E98D35978EEE706FCEC2FE08FEA74FD35_gshared)((Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::get_Current()
inline int32_t Enumerator_get_Current_m90AE71D16B24CA85AA556AE7365576211BFBADF9_inline (Enumerator_t5E48BC499B2C59C9D49E50EF9189346687C67616* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m2D9E3398C2A3349E3F0F189A38E881D11DE5AA15_gshared_inline)((Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::get_Item(TKey)
inline LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32 (Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>::Clear()
inline void LinkedList_1_Clear_m1ECA92D74EE01B439359F5DD905C9E6DF9610DD6 (LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, const RuntimeMethod*))LinkedList_1_Clear_mEEF1E2EB69B41641254C9872FE3D6646FCE6D0F7_gshared)((LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*)__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::MoveNext()
inline bool Enumerator_MoveNext_mC4F606CA8941113D9163ACA3250201BA6FAEF77B (Enumerator_t5E48BC499B2C59C9D49E50EF9189346687C67616* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, const RuntimeMethod*))Enumerator_MoveNext_m21C503A713FDCA406492E2BE960D85320752E615_gshared)((Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::Clear()
inline void Dictionary_2_Clear_mBD54E238C3AB205CCD4BCE73D28EA379F056B133 (Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>::Clear()
inline void List_1_Clear_mEECAD835EAECADCF9EB473C4A5CE55059F1E8073_inline (List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void UniFramework.Event.UniEvent::AddListener(System.Int32,System.Action`1<UniFramework.Event.IEventMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_AddListener_mC43C75D575FB6EEE2D20A943D263ED517AE97FC1 (int32_t ___0_eventId, Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* ___1_listener, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4107182356683B08962CC6D8D7EE65FD8F478366 (Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, method);
}
// System.Void System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>::.ctor()
inline void LinkedList_1__ctor_mAD42959CAAB7596201B23516FBBD79B4F660FD4A (LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, const RuntimeMethod*))LinkedList_1__ctor_mED84A7ED11208CC35CCE76B96F8ADC2AADF1542F_gshared)((LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mCFCAB6BE4BFB0B68B279329FC588048D9AA96708 (Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* __this, int32_t ___0_key, LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Boolean System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>::Contains(T)
inline bool LinkedList_1_Contains_m430D73B6FB50718D83D4ECD3A680BEFB07931326 (LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* __this, Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))LinkedList_1_Contains_m84F2AC87606CAFCD70ECB18C8ECFF41F105DADB8_gshared)((LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*)__this, (Il2CppFullySharedGenericAny)___0_value, method);
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>::AddLast(T)
inline LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* LinkedList_1_AddLast_m3E12A3CFA819278F32A6A9DA475450D7613E011C (LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* __this, Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* ___0_value, const RuntimeMethod* method)
{
	LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* il2cppRetVal = ((  LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))LinkedList_1_AddLast_mFD59AD680986C098B0C771703AFD654C00C981E3_gshared)((LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*)__this, (Il2CppFullySharedGenericAny)___0_value, method);
	return (LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F*)il2cppRetVal;
}
// System.Void UniFramework.Event.UniEvent::RemoveListener(System.Int32,System.Action`1<UniFramework.Event.IEventMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_RemoveListener_mAD0026A7474E88D9B6B5A271D4416C95B8D20368 (int32_t ___0_eventId, Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* ___1_listener, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>::Remove(T)
inline bool LinkedList_1_Remove_m2C8CE926DA9A74565F8851520AA1067A5F8630FA (LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* __this, Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))LinkedList_1_Remove_m7D799D70C3D6A30F27FE6CFCDF155759B031C0D0_gshared)((LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*)__this, (Il2CppFullySharedGenericAny)___0_value, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>::get_Count()
inline int32_t LinkedList_1_get_Count_mB692B4D208B55F541F3BB911E7775DB2CF93688D_inline (LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, const RuntimeMethod*))LinkedList_1_get_Count_m6E80F28E7CB5BA6E35ECE961C429AE6CA69003A2_gshared_inline)((LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*)__this, method);
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>::get_Last()
inline LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* LinkedList_1_get_Last_m6F00E536F0408E031B460CEE70AE136C2DC3850A (LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* __this, const RuntimeMethod* method)
{
	LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* il2cppRetVal = ((  LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, const RuntimeMethod*))LinkedList_1_get_Last_m79C544AB97456CCD4B9D035096F018ED752653D5_gshared)((LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*)__this, method);
	return (LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F*)il2cppRetVal;
}
// T System.Collections.Generic.LinkedListNode`1<System.Action`1<UniFramework.Event.IEventMessage>>::get_Value()
inline Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* LinkedListNode_1_get_Value_mAD2488C4B92C8C1918B67C7FFB4537C4E315613D_inline (LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* __this, const RuntimeMethod* method)
{
	Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* il2cppRetVal;
	((  void (*) (/*System.Collections.Generic.LinkedListNode`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))LinkedListNode_1_get_Value_mBE1731ACB5C697546EC5E8D10426D81420E8491F_gshared_inline)((LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Action`1<UniFramework.Event.IEventMessage>::Invoke(T)
inline void Action_1_Invoke_mC733DFED74C10D9C1AC08810607857EF8355B1EC_inline (Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Action`1<UniFramework.Event.IEventMessage>>::get_Previous()
inline LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* LinkedListNode_1_get_Previous_mE5FD98A22FB9C9643EE3441C6D307EA3F69D7344 (LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* __this, const RuntimeMethod* method)
{
	LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* il2cppRetVal = ((  LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* (*) (/*System.Collections.Generic.LinkedListNode`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, const RuntimeMethod*))LinkedListNode_1_get_Previous_m078A66552207385FADB8C52D5DBA636CE15A63FD_gshared)((LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)__this, method);
	return (LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F*)il2cppRetVal;
}
// System.Void UniFramework.Event.UniEvent::PostMessage(System.Int32,UniFramework.Event.IEventMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_PostMessage_mF38F521353F4C25F24D790303A7BEE05916C6D92 (int32_t ___0_eventId, RuntimeObject* ___1_message, const RuntimeMethod* method) ;
// System.Void UniFramework.Event.UniEvent/PostWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostWrapper__ctor_mBF1025C7FBCAA172BF2E26263D17AD1EBCF84A25 (PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>::Add(T)
inline void List_1_Add_mF34C9BDD25EE6FD4D78D3F950D0E875A8F27FE64_inline (List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B* __this, PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m7144BD4BC1938A1514A1A5BBD008C92CAD1E0399 (Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>::.ctor(System.Int32)
inline void List_1__ctor_mDDEB530634B6618F1B05441FDF1232C87B3EEB07 (List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_capacity, method);
}
// System.Void UniFramework.Event.UniEvent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_Update_m3DFEE21911F2200B15AF44CFDB5BAA0534E3BFCF (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
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
// System.Void UniFramework.Event.EventGroup::RemoveAllListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventGroup_RemoveAllListener_m9A95A03A6AEEB468ABC1ACC66F8C62B2C35F1C06 (EventGroup_tE501F54247FC83B92FD5A84DAD660029B3AEEE2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m963F6BE102CFE808DAA41C415DB3584029848816_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m4D4CA380E353A2D24F4F5794CEDBC6AE3C66F830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2FE239A1A8D0A5F4413FC7BA8388638A4557774D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDFE653A29A943E31F523B56D9035758A585A52CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m46AA3D3FE1B17CAAB5DA2B5E15D714629103887B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m57B7252913B41F6FDC28FF69363D3BD055927053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD0ABA347503D9475B29A6F1A02E58C74CB0125FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE1E53BD24C9A1FC898C76AA5C7C082F06885729E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2E13ADC8A3ACBC1354C047E196E930A23775A675_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8BD1521E6D652971D676D4EA7C6C463098FC29BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t45EA399D558F3312AB219E3AC4A8A435233B325A V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t42C43153F4910E3C476F83D04705726261D16D8B V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// foreach (var pair in _cachedListener)
		Dictionary_2_t056A679EC6E5807C1AAEB51DF4E7EA591D6DBEF8* L_0 = __this->____cachedListener_0;
		NullCheck(L_0);
		Enumerator_t45EA399D558F3312AB219E3AC4A8A435233B325A L_1;
		L_1 = Dictionary_2_GetEnumerator_m4D4CA380E353A2D24F4F5794CEDBC6AE3C66F830(L_0, Dictionary_2_GetEnumerator_m4D4CA380E353A2D24F4F5794CEDBC6AE3C66F830_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2FE239A1A8D0A5F4413FC7BA8388638A4557774D((&V_0), Enumerator_Dispose_m2FE239A1A8D0A5F4413FC7BA8388638A4557774D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0054_1;
			}

IL_000e_1:
			{
				// foreach (var pair in _cachedListener)
				KeyValuePair_2_t42C43153F4910E3C476F83D04705726261D16D8B L_2;
				L_2 = Enumerator_get_Current_m46AA3D3FE1B17CAAB5DA2B5E15D714629103887B_inline((&V_0), Enumerator_get_Current_m46AA3D3FE1B17CAAB5DA2B5E15D714629103887B_RuntimeMethod_var);
				V_1 = L_2;
				// System.Type eventType = pair.Key;
				Type_t* L_3;
				L_3 = KeyValuePair_2_get_Key_m57B7252913B41F6FDC28FF69363D3BD055927053_inline((&V_1), KeyValuePair_2_get_Key_m57B7252913B41F6FDC28FF69363D3BD055927053_RuntimeMethod_var);
				V_2 = L_3;
				// for (int i = 0; i < pair.Value.Count; i++)
				V_3 = 0;
				goto IL_0039_1;
			}

IL_0022_1:
			{
				// UniEvent.RemoveListener(eventType, pair.Value[i]);
				Type_t* L_4 = V_2;
				List_1_t47958B1CA41CD666AB8A3B5C661D42FF4D007279* L_5;
				L_5 = KeyValuePair_2_get_Value_mD0ABA347503D9475B29A6F1A02E58C74CB0125FB_inline((&V_1), KeyValuePair_2_get_Value_mD0ABA347503D9475B29A6F1A02E58C74CB0125FB_RuntimeMethod_var);
				int32_t L_6 = V_3;
				NullCheck(L_5);
				Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* L_7;
				L_7 = List_1_get_Item_m8BD1521E6D652971D676D4EA7C6C463098FC29BF(L_5, L_6, List_1_get_Item_m8BD1521E6D652971D676D4EA7C6C463098FC29BF_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
				UniEvent_RemoveListener_mE6AEF992B879D4726FB77D9A3951A70BE54B2923(L_4, L_7, NULL);
				// for (int i = 0; i < pair.Value.Count; i++)
				int32_t L_8 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
			}

IL_0039_1:
			{
				// for (int i = 0; i < pair.Value.Count; i++)
				int32_t L_9 = V_3;
				List_1_t47958B1CA41CD666AB8A3B5C661D42FF4D007279* L_10;
				L_10 = KeyValuePair_2_get_Value_mD0ABA347503D9475B29A6F1A02E58C74CB0125FB_inline((&V_1), KeyValuePair_2_get_Value_mD0ABA347503D9475B29A6F1A02E58C74CB0125FB_RuntimeMethod_var);
				NullCheck(L_10);
				int32_t L_11;
				L_11 = List_1_get_Count_m2E13ADC8A3ACBC1354C047E196E930A23775A675_inline(L_10, List_1_get_Count_m2E13ADC8A3ACBC1354C047E196E930A23775A675_RuntimeMethod_var);
				if ((((int32_t)L_9) < ((int32_t)L_11)))
				{
					goto IL_0022_1;
				}
			}
			{
				// pair.Value.Clear();
				List_1_t47958B1CA41CD666AB8A3B5C661D42FF4D007279* L_12;
				L_12 = KeyValuePair_2_get_Value_mD0ABA347503D9475B29A6F1A02E58C74CB0125FB_inline((&V_1), KeyValuePair_2_get_Value_mD0ABA347503D9475B29A6F1A02E58C74CB0125FB_RuntimeMethod_var);
				NullCheck(L_12);
				List_1_Clear_mE1E53BD24C9A1FC898C76AA5C7C082F06885729E_inline(L_12, List_1_Clear_mE1E53BD24C9A1FC898C76AA5C7C082F06885729E_RuntimeMethod_var);
			}

IL_0054_1:
			{
				// foreach (var pair in _cachedListener)
				bool L_13;
				L_13 = Enumerator_MoveNext_mDFE653A29A943E31F523B56D9035758A585A52CD((&V_0), Enumerator_MoveNext_mDFE653A29A943E31F523B56D9035758A585A52CD_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_006d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		// _cachedListener.Clear();
		Dictionary_2_t056A679EC6E5807C1AAEB51DF4E7EA591D6DBEF8* L_14 = __this->____cachedListener_0;
		NullCheck(L_14);
		Dictionary_2_Clear_m963F6BE102CFE808DAA41C415DB3584029848816(L_14, Dictionary_2_Clear_m963F6BE102CFE808DAA41C415DB3584029848816_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UniFramework.Event.EventGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventGroup__ctor_mE4245477F0D69E7D777B598BD964DBECB6A1882E (EventGroup_tE501F54247FC83B92FD5A84DAD660029B3AEEE2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA56D5A0CE478B42458253B99C1B44F2F8EF753E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t056A679EC6E5807C1AAEB51DF4E7EA591D6DBEF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<System.Type, List<Action<IEventMessage>>> _cachedListener = new Dictionary<System.Type, List<Action<IEventMessage>>>();
		Dictionary_2_t056A679EC6E5807C1AAEB51DF4E7EA591D6DBEF8* L_0 = (Dictionary_2_t056A679EC6E5807C1AAEB51DF4E7EA591D6DBEF8*)il2cpp_codegen_object_new(Dictionary_2_t056A679EC6E5807C1AAEB51DF4E7EA591D6DBEF8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mA56D5A0CE478B42458253B99C1B44F2F8EF753E0(L_0, Dictionary_2__ctor_mA56D5A0CE478B42458253B99C1B44F2F8EF753E0_RuntimeMethod_var);
		__this->____cachedListener_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cachedListener_0), (void*)L_0);
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
// System.Void UniFramework.Event.UniEvent::Initalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_Initalize_mA822B8559446292FC577EC8115EDDE6DBD1AF3B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUniEventDriver_tA5647DF856D970D2AF520EF2012D31DD3A649F1C_m796171BF41648DA5484C125A70F4557F09012A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D75CF734386176E70FCF86F01D17CEB9F77632A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C8C00CA8B1FC768BE330815119433CED16578F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isInitialize)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		bool L_0 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new Exception($"{nameof(UniEvent)} is initialized !");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2C2A31EC8F081A703CF4CAA538CCF7816626F9EC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniEvent_Initalize_mA822B8559446292FC577EC8115EDDE6DBD1AF3B3_RuntimeMethod_var)));
	}

IL_0012:
	{
		// if (_isInitialize == false)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		bool L_2 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (L_2)
		{
			goto IL_004d;
		}
	}
	{
		// _isInitialize = true;
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____isInitialize_0 = (bool)1;
		// _driver = new UnityEngine.GameObject($"[{nameof(UniEvent)}]");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral4C8C00CA8B1FC768BE330815119433CED16578F0, NULL);
		((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____driver_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____driver_1), (void*)L_3);
		// _driver.AddComponent<UniEventDriver>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____driver_1;
		NullCheck(L_4);
		UniEventDriver_tA5647DF856D970D2AF520EF2012D31DD3A649F1C* L_5;
		L_5 = GameObject_AddComponent_TisUniEventDriver_tA5647DF856D970D2AF520EF2012D31DD3A649F1C_m796171BF41648DA5484C125A70F4557F09012A08(L_4, GameObject_AddComponent_TisUniEventDriver_tA5647DF856D970D2AF520EF2012D31DD3A649F1C_m796171BF41648DA5484C125A70F4557F09012A08_RuntimeMethod_var);
		// UnityEngine.Object.DontDestroyOnLoad(_driver);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____driver_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_6, NULL);
		// UniLogger.Log($"{nameof(UniEvent)} initalize !");
		UniLogger_Log_m6C38F40923E6C37ED422BD8DA0B5039C7298E8FC(_stringLiteral2D75CF734386176E70FCF86F01D17CEB9F77632A, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_Destroy_mABAC2383E78B060A08679C69FB8147F3EC0FF1AA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4606498A3C0251CCCCAABA79968B003E52A227AB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isInitialize)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		bool L_0 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		// ClearAll();
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		UniEvent_ClearAll_m48AAB5757071CDB9B2B0D34ABAC68634548268E7(NULL);
		// _isInitialize = false;
		((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____isInitialize_0 = (bool)0;
		// if (_driver != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____driver_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// GameObject.Destroy(_driver);
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____driver_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_0029:
	{
		// UniLogger.Log($"{nameof(UniEvent)} destroy all !");
		UniLogger_Log_m6C38F40923E6C37ED422BD8DA0B5039C7298E8FC(_stringLiteral4606498A3C0251CCCCAABA79968B003E52A227AB, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_Update_m3DFEE21911F2200B15AF44CFDB5BAA0534E3BFCF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m59AD491EA1B7081D2948895EB4E97E749D3F9EAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5CC8869FF040E388D384C2FBA45FA7EBAC7554E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m32131B35B6036090B4A4CEBE8407F0E3B71D3292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* V_1 = NULL;
	{
		// for (int i = _postingList.Count - 1; i >= 0; i--)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B* L_0 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____postingList_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m5CC8869FF040E388D384C2FBA45FA7EBAC7554E1_inline(L_0, List_1_get_Count_m5CC8869FF040E388D384C2FBA45FA7EBAC7554E1_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0048;
	}

IL_000f:
	{
		// var wrapper = _postingList[i];
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B* L_2 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____postingList_3;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* L_4;
		L_4 = List_1_get_Item_m32131B35B6036090B4A4CEBE8407F0E3B71D3292(L_2, L_3, List_1_get_Item_m32131B35B6036090B4A4CEBE8407F0E3B71D3292_RuntimeMethod_var);
		V_1 = L_4;
		// if (UnityEngine.Time.frameCount > wrapper.PostFrame)
		int32_t L_5;
		L_5 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___PostFrame_0;
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_0044;
		}
	}
	{
		// SendMessage(wrapper.EventID, wrapper.Message);
		PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___EventID_1;
		PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* L_10 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___Message_2;
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		UniEvent_SendMessage_mAEFDFF98113145BFDC8398321C287AFAF2F73FBC(L_9, L_11, NULL);
		// _postingList.RemoveAt(i);
		List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B* L_12 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____postingList_3;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		List_1_RemoveAt_m59AD491EA1B7081D2948895EB4E97E749D3F9EAD(L_12, L_13, List_1_RemoveAt_m59AD491EA1B7081D2948895EB4E97E749D3F9EAD_RuntimeMethod_var);
	}

IL_0044:
	{
		// for (int i = _postingList.Count - 1; i >= 0; i--)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0048:
	{
		// for (int i = _postingList.Count - 1; i >= 0; i--)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::ClearAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_ClearAll_m48AAB5757071CDB9B2B0D34ABAC68634548268E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mBD54E238C3AB205CCD4BCE73D28EA379F056B133_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m230A995ABD272ABB36AF0D475208FD75D06E1BC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m87581BB705264EDBB84B9A381551B4E902E29F57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC4F606CA8941113D9163ACA3250201BA6FAEF77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m90AE71D16B24CA85AA556AE7365576211BFBADF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mCA2B0CD3C2906BBB8C2F0EA20E965C9DE35A8567_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Clear_m1ECA92D74EE01B439359F5DD905C9E6DF9610DD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mEECAD835EAECADCF9EB473C4A5CE55059F1E8073_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5E48BC499B2C59C9D49E50EF9189346687C67616 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (int eventId in _listeners.Keys)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* L_0 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____listeners_2;
		NullCheck(L_0);
		KeyCollection_t30777644B7A9F21F16690824FC8E928DDE0A7303* L_1;
		L_1 = Dictionary_2_get_Keys_m230A995ABD272ABB36AF0D475208FD75D06E1BC7(L_0, Dictionary_2_get_Keys_m230A995ABD272ABB36AF0D475208FD75D06E1BC7_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t5E48BC499B2C59C9D49E50EF9189346687C67616 L_2;
		L_2 = KeyCollection_GetEnumerator_mCA2B0CD3C2906BBB8C2F0EA20E965C9DE35A8567(L_1, KeyCollection_GetEnumerator_mCA2B0CD3C2906BBB8C2F0EA20E965C9DE35A8567_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m87581BB705264EDBB84B9A381551B4E902E29F57((&V_0), Enumerator_Dispose_m87581BB705264EDBB84B9A381551B4E902E29F57_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_0012_1:
			{
				// foreach (int eventId in _listeners.Keys)
				int32_t L_3;
				L_3 = Enumerator_get_Current_m90AE71D16B24CA85AA556AE7365576211BFBADF9_inline((&V_0), Enumerator_get_Current_m90AE71D16B24CA85AA556AE7365576211BFBADF9_RuntimeMethod_var);
				V_1 = L_3;
				// _listeners[eventId].Clear();
				il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
				Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* L_4 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____listeners_2;
				int32_t L_5 = V_1;
				NullCheck(L_4);
				LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* L_6;
				L_6 = Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32(L_4, L_5, Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32_RuntimeMethod_var);
				NullCheck(L_6);
				LinkedList_1_Clear_m1ECA92D74EE01B439359F5DD905C9E6DF9610DD6(L_6, LinkedList_1_Clear_m1ECA92D74EE01B439359F5DD905C9E6DF9610DD6_RuntimeMethod_var);
			}

IL_002a_1:
			{
				// foreach (int eventId in _listeners.Keys)
				bool L_7;
				L_7 = Enumerator_MoveNext_mC4F606CA8941113D9163ACA3250201BA6FAEF77B((&V_0), Enumerator_MoveNext_mC4F606CA8941113D9163ACA3250201BA6FAEF77B_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// _listeners.Clear();
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* L_8 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____listeners_2;
		NullCheck(L_8);
		Dictionary_2_Clear_mBD54E238C3AB205CCD4BCE73D28EA379F056B133(L_8, Dictionary_2_Clear_mBD54E238C3AB205CCD4BCE73D28EA379F056B133_RuntimeMethod_var);
		// _postingList.Clear();
		List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B* L_9 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____postingList_3;
		NullCheck(L_9);
		List_1_Clear_mEECAD835EAECADCF9EB473C4A5CE55059F1E8073_inline(L_9, List_1_Clear_mEECAD835EAECADCF9EB473C4A5CE55059F1E8073_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::AddListener(System.Type,System.Action`1<UniFramework.Event.IEventMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_AddListener_mEDA8F8B7D655E726FAA962783886605B33DED8F9 (Type_t* ___0_eventType, Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int eventId = eventType.GetHashCode();
		Type_t* L_0 = ___0_eventType;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// AddListener(eventId, listener);
		Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* L_2 = ___1_listener;
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		UniEvent_AddListener_mC43C75D575FB6EEE2D20A943D263ED517AE97FC1(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::AddListener(System.Int32,System.Action`1<UniFramework.Event.IEventMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_AddListener_mC43C75D575FB6EEE2D20A943D263ED517AE97FC1 (int32_t ___0_eventId, Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mCFCAB6BE4BFB0B68B279329FC588048D9AA96708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4107182356683B08962CC6D8D7EE65FD8F478366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_m3E12A3CFA819278F32A6A9DA475450D7613E011C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Contains_m430D73B6FB50718D83D4ECD3A680BEFB07931326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_mAD42959CAAB7596201B23516FBBD79B4F660FD4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_listeners.ContainsKey(eventId) == false)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* L_0 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_1 = ___0_eventId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4107182356683B08962CC6D8D7EE65FD8F478366(L_0, L_1, Dictionary_2_ContainsKey_m4107182356683B08962CC6D8D7EE65FD8F478366_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// _listeners.Add(eventId, new LinkedList<Action<IEventMessage>>());
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* L_3 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_4 = ___0_eventId;
		LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* L_5 = (LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245*)il2cpp_codegen_object_new(LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		LinkedList_1__ctor_mAD42959CAAB7596201B23516FBBD79B4F660FD4A(L_5, LinkedList_1__ctor_mAD42959CAAB7596201B23516FBBD79B4F660FD4A_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_Add_mCFCAB6BE4BFB0B68B279329FC588048D9AA96708(L_3, L_4, L_5, Dictionary_2_Add_mCFCAB6BE4BFB0B68B279329FC588048D9AA96708_RuntimeMethod_var);
	}

IL_001d:
	{
		// if (_listeners[eventId].Contains(listener) == false)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* L_6 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_7 = ___0_eventId;
		NullCheck(L_6);
		LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* L_8;
		L_8 = Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32(L_6, L_7, Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32_RuntimeMethod_var);
		Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* L_9 = ___1_listener;
		NullCheck(L_8);
		bool L_10;
		L_10 = LinkedList_1_Contains_m430D73B6FB50718D83D4ECD3A680BEFB07931326(L_8, L_9, LinkedList_1_Contains_m430D73B6FB50718D83D4ECD3A680BEFB07931326_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0042;
		}
	}
	{
		// _listeners[eventId].AddLast(listener);
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* L_11 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_12 = ___0_eventId;
		NullCheck(L_11);
		LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* L_13;
		L_13 = Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32(L_11, L_12, Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32_RuntimeMethod_var);
		Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* L_14 = ___1_listener;
		NullCheck(L_13);
		LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* L_15;
		L_15 = LinkedList_1_AddLast_m3E12A3CFA819278F32A6A9DA475450D7613E011C(L_13, L_14, LinkedList_1_AddLast_m3E12A3CFA819278F32A6A9DA475450D7613E011C_RuntimeMethod_var);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::RemoveListener(System.Type,System.Action`1<UniFramework.Event.IEventMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_RemoveListener_mE6AEF992B879D4726FB77D9A3951A70BE54B2923 (Type_t* ___0_eventType, Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int eventId = eventType.GetHashCode();
		Type_t* L_0 = ___0_eventType;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// RemoveListener(eventId, listener);
		Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* L_2 = ___1_listener;
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		UniEvent_RemoveListener_mAD0026A7474E88D9B6B5A271D4416C95B8D20368(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::RemoveListener(System.Int32,System.Action`1<UniFramework.Event.IEventMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_RemoveListener_mAD0026A7474E88D9B6B5A271D4416C95B8D20368 (int32_t ___0_eventId, Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4107182356683B08962CC6D8D7EE65FD8F478366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Contains_m430D73B6FB50718D83D4ECD3A680BEFB07931326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Remove_m2C8CE926DA9A74565F8851520AA1067A5F8630FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_listeners.ContainsKey(eventId))
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* L_0 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_1 = ___0_eventId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4107182356683B08962CC6D8D7EE65FD8F478366(L_0, L_1, Dictionary_2_ContainsKey_m4107182356683B08962CC6D8D7EE65FD8F478366_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if (_listeners[eventId].Contains(listener))
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* L_3 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_4 = ___0_eventId;
		NullCheck(L_3);
		LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* L_5;
		L_5 = Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32(L_3, L_4, Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32_RuntimeMethod_var);
		Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* L_6 = ___1_listener;
		NullCheck(L_5);
		bool L_7;
		L_7 = LinkedList_1_Contains_m430D73B6FB50718D83D4ECD3A680BEFB07931326(L_5, L_6, LinkedList_1_Contains_m430D73B6FB50718D83D4ECD3A680BEFB07931326_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		// _listeners[eventId].Remove(listener);
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* L_8 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_9 = ___0_eventId;
		NullCheck(L_8);
		LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* L_10;
		L_10 = Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32(L_8, L_9, Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32_RuntimeMethod_var);
		Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* L_11 = ___1_listener;
		NullCheck(L_10);
		bool L_12;
		L_12 = LinkedList_1_Remove_m2C8CE926DA9A74565F8851520AA1067A5F8630FA(L_10, L_11, LinkedList_1_Remove_m2C8CE926DA9A74565F8851520AA1067A5F8630FA_RuntimeMethod_var);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::SendMessage(UniFramework.Event.IEventMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_SendMessage_m2786D142D8B742B912D48B2877823769E404B750 (RuntimeObject* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int eventId = message.GetType().GetHashCode();
		RuntimeObject* L_0 = ___0_message;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		// SendMessage(eventId, message);
		RuntimeObject* L_3 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		UniEvent_SendMessage_mAEFDFF98113145BFDC8398321C287AFAF2F73FBC(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::SendMessage(System.Int32,UniFramework.Event.IEventMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_SendMessage_mAEFDFF98113145BFDC8398321C287AFAF2F73FBC (int32_t ___0_eventId, RuntimeObject* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4107182356683B08962CC6D8D7EE65FD8F478366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedListNode_1_get_Previous_mE5FD98A22FB9C9643EE3441C6D307EA3F69D7344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedListNode_1_get_Value_mAD2488C4B92C8C1918B67C7FFB4537C4E315613D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Count_mB692B4D208B55F541F3BB911E7775DB2CF93688D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Last_m6F00E536F0408E031B460CEE70AE136C2DC3850A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* V_0 = NULL;
	LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* V_1 = NULL;
	{
		// if (_listeners.ContainsKey(eventId) == false)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* L_0 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_1 = ___0_eventId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4107182356683B08962CC6D8D7EE65FD8F478366(L_0, L_1, Dictionary_2_ContainsKey_m4107182356683B08962CC6D8D7EE65FD8F478366_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// LinkedList<Action<IEventMessage>> listeners = _listeners[eventId];
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* L_3 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_4 = ___0_eventId;
		NullCheck(L_3);
		LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* L_5;
		L_5 = Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32(L_3, L_4, Dictionary_2_get_Item_m537975C2CB86C70419F315211F46D1EFDD680C32_RuntimeMethod_var);
		V_0 = L_5;
		// if (listeners.Count > 0)
		LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = LinkedList_1_get_Count_mB692B4D208B55F541F3BB911E7775DB2CF93688D_inline(L_6, LinkedList_1_get_Count_mB692B4D208B55F541F3BB911E7775DB2CF93688D_RuntimeMethod_var);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		// var currentNode = listeners.Last;
		LinkedList_1_t4273A706A15DDEE76E0DD1EC0B4789DB1EF4F245* L_8 = V_0;
		NullCheck(L_8);
		LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* L_9;
		L_9 = LinkedList_1_get_Last_m6F00E536F0408E031B460CEE70AE136C2DC3850A(L_8, LinkedList_1_get_Last_m6F00E536F0408E031B460CEE70AE136C2DC3850A_RuntimeMethod_var);
		V_1 = L_9;
		goto IL_003f;
	}

IL_002c:
	{
		// currentNode.Value.Invoke(message);
		LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* L_10 = V_1;
		NullCheck(L_10);
		Action_1_tF855FBBAF984D056A5D0AB2466189F21300A9C7F* L_11;
		L_11 = LinkedListNode_1_get_Value_mAD2488C4B92C8C1918B67C7FFB4537C4E315613D_inline(L_10, LinkedListNode_1_get_Value_mAD2488C4B92C8C1918B67C7FFB4537C4E315613D_RuntimeMethod_var);
		RuntimeObject* L_12 = ___1_message;
		NullCheck(L_11);
		Action_1_Invoke_mC733DFED74C10D9C1AC08810607857EF8355B1EC_inline(L_11, L_12, NULL);
		// currentNode = currentNode.Previous;
		LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* L_13 = V_1;
		NullCheck(L_13);
		LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* L_14;
		L_14 = LinkedListNode_1_get_Previous_mE5FD98A22FB9C9643EE3441C6D307EA3F69D7344(L_13, LinkedListNode_1_get_Previous_mE5FD98A22FB9C9643EE3441C6D307EA3F69D7344_RuntimeMethod_var);
		V_1 = L_14;
	}

IL_003f:
	{
		// while (currentNode != null)
		LinkedListNode_1_tC80378E17E7223081AA225D1D791DDF125E9048F* L_15 = V_1;
		if (L_15)
		{
			goto IL_002c;
		}
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::PostMessage(UniFramework.Event.IEventMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_PostMessage_m12365C9D3ADA4E7E1CC17998E29A028560B18B5A (RuntimeObject* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int eventId = message.GetType().GetHashCode();
		RuntimeObject* L_0 = ___0_message;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		// PostMessage(eventId, message);
		RuntimeObject* L_3 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		UniEvent_PostMessage_mF38F521353F4C25F24D790303A7BEE05916C6D92(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::PostMessage(System.Int32,UniFramework.Event.IEventMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_PostMessage_mF38F521353F4C25F24D790303A7BEE05916C6D92 (int32_t ___0_eventId, RuntimeObject* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF34C9BDD25EE6FD4D78D3F950D0E875A8F27FE64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* V_0 = NULL;
	{
		// var wrapper = new PostWrapper();
		PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* L_0 = (PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84*)il2cpp_codegen_object_new(PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PostWrapper__ctor_mBF1025C7FBCAA172BF2E26263D17AD1EBCF84A25(L_0, NULL);
		V_0 = L_0;
		// wrapper.PostFrame = UnityEngine.Time.frameCount;
		PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* L_1 = V_0;
		int32_t L_2;
		L_2 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		NullCheck(L_1);
		L_1->___PostFrame_0 = L_2;
		// wrapper.EventID = eventId;
		PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* L_3 = V_0;
		int32_t L_4 = ___0_eventId;
		NullCheck(L_3);
		L_3->___EventID_1 = L_4;
		// wrapper.Message = message;
		PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* L_5 = V_0;
		RuntimeObject* L_6 = ___1_message;
		NullCheck(L_5);
		L_5->___Message_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___Message_2), (void*)L_6);
		// _postingList.Add(wrapper);
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B* L_7 = ((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____postingList_3;
		PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* L_8 = V_0;
		NullCheck(L_7);
		List_1_Add_mF34C9BDD25EE6FD4D78D3F950D0E875A8F27FE64_inline(L_7, L_8, List_1_Add_mF34C9BDD25EE6FD4D78D3F950D0E875A8F27FE64_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent__cctor_m808BA94F623700EB486E82CDE0A9A4950AA77B54 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7144BD4BC1938A1514A1A5BBD008C92CAD1E0399_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDDEB530634B6618F1B05441FDF1232C87B3EEB07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool _isInitialize = false;
		((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____isInitialize_0 = (bool)0;
		// private static GameObject _driver = null;
		((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____driver_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____driver_1), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// private static readonly Dictionary<int, LinkedList<Action<IEventMessage>>> _listeners = new Dictionary<int, LinkedList<Action<IEventMessage>>>(1000);
		Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612* L_0 = (Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612*)il2cpp_codegen_object_new(Dictionary_2_t7774617C14541D41983598C9A477ADD54D637612_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m7144BD4BC1938A1514A1A5BBD008C92CAD1E0399(L_0, ((int32_t)1000), Dictionary_2__ctor_m7144BD4BC1938A1514A1A5BBD008C92CAD1E0399_RuntimeMethod_var);
		((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____listeners_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____listeners_2), (void*)L_0);
		// private static readonly List<PostWrapper> _postingList = new List<PostWrapper>(1000);
		List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B* L_1 = (List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B*)il2cpp_codegen_object_new(List_1_tAE630DB5FFF64B7E4DA20B6A316334B6ABC9432B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mDDEB530634B6618F1B05441FDF1232C87B3EEB07(L_1, ((int32_t)1000), List_1__ctor_mDDEB530634B6618F1B05441FDF1232C87B3EEB07_RuntimeMethod_var);
		((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____postingList_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var))->____postingList_3), (void*)L_1);
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
// System.Void UniFramework.Event.UniEvent/PostWrapper::OnRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostWrapper_OnRelease_m8B7183684D0819E766607BAE6ED7CF38F9DBCE1F (PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* __this, const RuntimeMethod* method) 
{
	{
		// PostFrame = 0;
		__this->___PostFrame_0 = 0;
		// EventID = 0;
		__this->___EventID_1 = 0;
		// Message = null;
		__this->___Message_2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Message_2), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent/PostWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostWrapper__ctor_mBF1025C7FBCAA172BF2E26263D17AD1EBCF84A25 (PostWrapper_tA360712FB8D88840EF63D710B546105C0AFC5F84* __this, const RuntimeMethod* method) 
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
// System.Void UniFramework.Event.UniEventDriver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEventDriver_Update_m232B1A941AFB69BEEBC713E3672F41C45627F8DE (UniEventDriver_tA5647DF856D970D2AF520EF2012D31DD3A649F1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniEvent.Update();
		il2cpp_codegen_runtime_class_init_inline(UniEvent_t625AABCC03D9B6F44A10AEC2CE2CD389A209A468_il2cpp_TypeInfo_var);
		UniEvent_Update_m3DFEE21911F2200B15AF44CFDB5BAA0534E3BFCF(NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEventDriver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEventDriver__ctor_m4BF2BBF041AC0AD5D8C0641D26AF3EDD9CB14D6D (UniEventDriver_tA5647DF856D970D2AF520EF2012D31DD3A649F1C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
	const uint32_t SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// TValue
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m2D9E3398C2A3349E3F0F189A38E881D11DE5AA15_gshared_inline (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tD6F5EEADA0A8791813A4EF1C80C94030B153E4B0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tD6F5EEADA0A8791813A4EF1C80C94030B153E4B0);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_TKey_tD6F5EEADA0A8791813A4EF1C80C94030B153E4B0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TKey_tD6F5EEADA0A8791813A4EF1C80C94030B153E4B0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_m6E80F28E7CB5BA6E35ECE961C429AE6CA69003A2_gshared_inline (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___count_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LinkedListNode_1_get_Value_mBE1731ACB5C697546EC5E8D10426D81420E8491F_gshared_inline (/*System.Collections.Generic.LinkedListNode`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tD35F114112C8EBEAD274D7F6267468B20051DAC1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tD35F114112C8EBEAD274D7F6267468B20051DAC1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),3)), SizeOf_T_tD35F114112C8EBEAD274D7F6267468B20051DAC1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tD35F114112C8EBEAD274D7F6267468B20051DAC1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
