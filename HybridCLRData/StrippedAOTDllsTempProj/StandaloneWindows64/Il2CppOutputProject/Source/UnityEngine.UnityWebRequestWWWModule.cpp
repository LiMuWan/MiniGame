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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// UnityEngine.MovieTexture
struct MovieTexture_tC076F212B0E1B0B008B38AE7D96F0871D9FC90F5;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB;
// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;

IL2CPP_EXTERN_C RuntimeClass* AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral6652A4EEEFE1AE58E7CF235818DAD3A44193F05F;
IL2CPP_EXTERN_C String_t* _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E;
IL2CPP_EXTERN_C String_t* _stringLiteral8F9FE3E63BBBC875EDA943B424F967697C35A562;
IL2CPP_EXTERN_C String_t* _stringLiteral98DC63C9B798605745EDB7457C85928078445AFE;
IL2CPP_EXTERN_C String_t* _stringLiteral997F93B8223285BB571C83E7ACD6C6615F5EF04C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE2429764F10DC7E990250D2AE4138FE5AC928076;
IL2CPP_EXTERN_C String_t* _stringLiteralE3AC59A40D687CA8AD4CF9FF120C62CCB231056D;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WWW_GetMovieTexture_m8C03712289094DC181E30E02255CBF58196D38CA_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t36B2669420D1A4B95932D0C64742D3D5FC618056 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_0;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_1;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_2;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_3;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_6;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_7;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_8;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_9;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_10;
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

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;
};

// UnityEngine.Networking.WebRequestWWW
struct WebRequestWWW_t2B21553D89F8703267D734DB68DD0F0907F862D0  : public RuntimeObject
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Hash128
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	// System.UInt64 UnityEngine.Hash128::u64_0
	uint64_t ___u64_0_0;
	// System.UInt64 UnityEngine.Hash128::u64_1
	uint64_t ___u64_1_1;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// UnityEngine.ThreadPriority UnityEngine.WWW::<threadPriority>k__BackingField
	int32_t ___U3CthreadPriorityU3Ek__BackingField_0;
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ____uwr_1;
	// UnityEngine.AssetBundle UnityEngine.WWW::_assetBundle
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* ____assetBundle_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::_responseHeaders
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____responseHeaders_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.CachedAssetBundle
struct CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91 
{
	// System.String UnityEngine.CachedAssetBundle::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.Hash128 UnityEngine.CachedAssetBundle::m_Hash
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___m_Hash_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.CachedAssetBundle
struct CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91_marshaled_pinvoke
{
	char* ___m_Name_0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___m_Hash_1;
};
// Native definition for COM marshalling of UnityEngine.CachedAssetBundle
struct CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___m_Hash_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// UnityEngine.MovieTexture
struct MovieTexture_tC076F212B0E1B0B008B38AE7D96F0871D9FC90F5  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// System.Text.Encoding

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_11;
};

// System.Collections.Hashtable

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	// System.Byte[] UnityEngine.WWWForm::dDash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash_6;
	// System.Byte[] UnityEngine.WWWForm::crlf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf_7;
	// System.Byte[] UnityEngine.WWWForm::contentTypeHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader_8;
	// System.Byte[] UnityEngine.WWWForm::dispositionHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader_9;
	// System.Byte[] UnityEngine.WWWForm::endQuote
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote_10;
	// System.Byte[] UnityEngine.WWWForm::fileNameField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField_11;
	// System.Byte[] UnityEngine.WWWForm::ampersand
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand_12;
	// System.Byte[] UnityEngine.WWWForm::equal
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal_13;
};

// UnityEngine.WWWForm

// UnityEngine.Networking.WebRequestWWW

// UnityEngine.Networking.WebRequestWWW

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

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

// System.Byte

// System.Byte

// UnityEngine.Hash128

// UnityEngine.Hash128

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// UnityEngine.WWW

// UnityEngine.WWW

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.CachedAssetBundle

// UnityEngine.CachedAssetBundle

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

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

// UnityEngine.Networking.UploadHandler

// UnityEngine.Networking.UploadHandler

// UnityEngine.AssetBundle

// UnityEngine.AssetBundle

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Networking.DownloadHandlerAssetBundle

// UnityEngine.Networking.DownloadHandlerAssetBundle

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UploadHandlerRaw

// UnityEngine.Networking.UploadHandlerRaw

// UnityEngine.MovieTexture

// UnityEngine.MovieTexture

// UnityEngine.Texture2D

// UnityEngine.Texture2D
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;

// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String UnityEngine.WWW::EscapeURL(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_EscapeURL_m072297470E428928626550ACC130A3CEEC9ACC2B (String_t* ___0_s, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_e, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_mA76C33EF0C48CDE8CA317256CFAD9D21A125BCDA (String_t* ___0_s, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_e, const RuntimeMethod* method) ;
// System.String UnityEngine.WWW::UnEscapeURL(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_UnEscapeURL_mBE1A51E8AD62C22B843A9D97558B7542FD0A35E2 (String_t* ___0_s, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_e, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::UnEscapeURL(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_UnEscapeURL_m7164BC27C48FD57AB777128DD271E56B9EF25DC4 (String_t* ___0_s, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_e, const RuntimeMethod* method) ;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* WWW_LoadFromCacheOrDownload_mB384AAC7E38EB3D152BAA71749DE422A7B4117A1 (String_t* ___0_url, int32_t ___1_version, uint32_t ___2_crc, const RuntimeMethod* method) ;
// System.Void UnityEngine.Hash128::.ctor(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128__ctor_m4C7478EE2EED2085265B895E483B128CCAA6D011 (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* __this, uint32_t ___0_u32_0, uint32_t ___1_u32_1, uint32_t ___2_u32_2, uint32_t ___3_u32_3, const RuntimeMethod* method) ;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,UnityEngine.Hash128,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* WWW_LoadFromCacheOrDownload_mFD27E3686C2415421CF328AE75017D39FF7A792F (String_t* ___0_url, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___1_hash, uint32_t ___2_crc, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWW::.ctor(System.String,System.String,UnityEngine.Hash128,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_mE54C20112FA803BB706A405F2892106B2BCB86FD (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___0_url, String_t* ___1_name, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___2_hash, uint32_t ___3_crc, const RuntimeMethod* method) ;
// System.String UnityEngine.CachedAssetBundle::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CachedAssetBundle_get_name_m07DF67334A1C4F36262498F4E47AD33525A13C5F (CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91* __this, const RuntimeMethod* method) ;
// UnityEngine.Hash128 UnityEngine.CachedAssetBundle::get_hash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 CachedAssetBundle_get_hash_mE0D311588D701E6E0D68ADE21DB6CB8FFC0E6803 (CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86 (String_t* ___0_uri, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373 (String_t* ___0_uri, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___1_formData, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_chunkedTransfer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_chunkedTransfer_m83ECE3BA8AF42D0CCD2B9DC89EE26867B5652843 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_url, String_t* ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3 (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A il2cppRetVal;
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Void UnityEngine.CachedAssetBundle::.ctor(System.String,UnityEngine.Hash128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedAssetBundle__ctor_m13AD50663A3717FD159A25BED5C6634425DCC4CE (CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91* __this, String_t* ___0_name, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___1_hash, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String,UnityEngine.CachedAssetBundle,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAssetBundle_GetAssetBundle_m40F278316325A44A7A89AAB3B13EA7BED09B0D13 (String_t* ___0_uri, CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91 ___1_cachedAssetBundle, uint32_t ___2_crc, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WWW::WaitUntilDoneIfPossible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWW_WaitUntilDoneIfPossible_mD975AFF6737F00BB5003C5AEDBD795751F129A84 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::get_assetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* DownloadHandlerAssetBundle_get_assetBundle_m9D07F738F7014C26AF2B7FD89132FD1CB5DDE0FE (DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.WWW::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWW_get_bytes_m83F5C24FC5AC80C5F3B9AF1E290E08F8B96C0642 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromMemory(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* AssetBundle_LoadFromMemory_mBA6847E4133DBBE3CCBCFFF31A40FA943DB95BBA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_binary, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.WWW::get_bytesDownloaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WWW_get_bytesDownloaded_m6B0FB6A1264515565A9D97B7BFE7FE30773E1681 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.Networking.UnityWebRequest::get_downloadedBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnityWebRequest_get_downloadedBytes_m73E3EC726E417FC7F983FFEF9566CF380F322610 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetHTTPStatusString_m791BC62F33D286229978CFFC201B16E1F2D3FB2D (int64_t ___0_responseCode, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Networking.UnityWebRequest::get_downloadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_get_downloadProgress_m28B3DB759530A61929D8AB02A4482AB21D3348B1 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WWW::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWW_get_isDone_m7E88B666AD0E3903757043813B2811BBFCCCA52E (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* UnityWebRequest_GetResponseHeaders_m67147A5D3FF83FD75071AA42F4890439DA2092DF (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.String UnityEngine.WWW::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_text_m95F7CAAC33FD0BAB9B535E3AEAFDA36B81B3EC4F (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, bool ___2_markNonReadable, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.WWW::CreateTextureFromDownloadedData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* WWW_CreateTextureFromDownloadedData_m670DE15775E657BC8CE6CD19FE2C29EA3429F8F0 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, bool ___0_markNonReadable, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Single UnityEngine.Networking.UnityWebRequest::get_uploadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_get_uploadProgress_m3D2DCD424E0435ABAC0F84EE857121E839652F95 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_url_mA3BF205A6FCA2BF66A62174182BE84553CE3FFA8 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.Networking.WebRequestWWW::InternalCreateAudioClipUsingDH(UnityEngine.Networking.DownloadHandler,System.String,System.Boolean,System.Boolean,UnityEngine.AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* WebRequestWWW_InternalCreateAudioClipUsingDH_m2FC91348090ABC797376D75D1F69200DE4946EC8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___0_dh, String_t* ___1_url, bool ___2_stream, bool ___3_compressed, int32_t ___4_audioType, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean,System.Boolean,UnityEngine.AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* WWW_GetAudioClip_m38EFF82040D63C9424EC3A4EDA9E562FB0097116 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, bool ___0_threeD, bool ___1_stream, int32_t ___2_audioType, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.WWW::GetAudioClipInternal(System.Boolean,System.Boolean,System.Boolean,UnityEngine.AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* WWW_GetAudioClipInternal_m08B69E33747BD466B99370200B183B6341798974 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, bool ___0_threeD, bool ___1_stream, bool ___2_compressed, int32_t ___3_audioType, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClipCompressed(System.Boolean,UnityEngine.AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* WWW_GetAudioClipCompressed_mBBDF065BCA711AFC9E59BCBCF51E8C49E791567B (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, bool ___0_threeD, int32_t ___1_audioType, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String UnityEngine.WWW::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_url_m368B1D7D23DC22E412A3F802C6E3047760665519 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
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
// System.String UnityEngine.WWW::EscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_EscapeURL_m2FC43D0805D57D161D661839C17E147B9EBE31E5 (String_t* ___0_s, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_s;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_2;
		L_2 = WWW_EscapeURL_m072297470E428928626550ACC130A3CEEC9ACC2B(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.WWW::EscapeURL(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_EscapeURL_m072297470E428928626550ACC130A3CEEC9ACC2B (String_t* ___0_s, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_e, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_s;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ___1_e;
		String_t* L_2;
		L_2 = UnityWebRequest_EscapeURL_mA76C33EF0C48CDE8CA317256CFAD9D21A125BCDA(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.WWW::UnEscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_UnEscapeURL_m6D51170631248E58948E0221C6A0E99CB46C7EFE (String_t* ___0_s, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_s;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_2;
		L_2 = WWW_UnEscapeURL_mBE1A51E8AD62C22B843A9D97558B7542FD0A35E2(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.WWW::UnEscapeURL(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_UnEscapeURL_mBE1A51E8AD62C22B843A9D97558B7542FD0A35E2 (String_t* ___0_s, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_e, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_s;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ___1_e;
		String_t* L_2;
		L_2 = UnityWebRequest_UnEscapeURL_m7164BC27C48FD57AB777128DD271E56B9EF25DC4(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* WWW_LoadFromCacheOrDownload_mE75A94DFDCDD17412FDB89CB60498BF4405F64F1 (String_t* ___0_url, int32_t ___1_version, const RuntimeMethod* method) 
{
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* V_0 = NULL;
	{
		String_t* L_0 = ___0_url;
		int32_t L_1 = ___1_version;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_2;
		L_2 = WWW_LoadFromCacheOrDownload_mB384AAC7E38EB3D152BAA71749DE422A7B4117A1(L_0, L_1, 0, NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* WWW_LoadFromCacheOrDownload_mB384AAC7E38EB3D152BAA71749DE422A7B4117A1 (String_t* ___0_url, int32_t ___1_version, uint32_t ___2_crc, const RuntimeMethod* method) 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* V_1 = NULL;
	{
		int32_t L_0 = ___1_version;
		Hash128__ctor_m4C7478EE2EED2085265B895E483B128CCAA6D011((&V_0), 0, 0, 0, L_0, NULL);
		String_t* L_1 = ___0_url;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_2 = V_0;
		uint32_t L_3 = ___2_crc;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_4;
		L_4 = WWW_LoadFromCacheOrDownload_mFD27E3686C2415421CF328AE75017D39FF7A792F(L_1, L_2, L_3, NULL);
		V_1 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,UnityEngine.Hash128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* WWW_LoadFromCacheOrDownload_m4D1C62B3DE6C5F0E9F4DEC9EDE719B7658011920 (String_t* ___0_url, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___1_hash, const RuntimeMethod* method) 
{
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* V_0 = NULL;
	{
		String_t* L_0 = ___0_url;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_1 = ___1_hash;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_2;
		L_2 = WWW_LoadFromCacheOrDownload_mFD27E3686C2415421CF328AE75017D39FF7A792F(L_0, L_1, 0, NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,UnityEngine.Hash128,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* WWW_LoadFromCacheOrDownload_mFD27E3686C2415421CF328AE75017D39FF7A792F (String_t* ___0_url, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___1_hash, uint32_t ___2_crc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* V_0 = NULL;
	{
		String_t* L_0 = ___0_url;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_1 = ___1_hash;
		uint32_t L_2 = ___2_crc;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_3 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WWW__ctor_mE54C20112FA803BB706A405F2892106B2BCB86FD(L_3, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,UnityEngine.CachedAssetBundle,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* WWW_LoadFromCacheOrDownload_m8F1C9DB4BBE821128B59733BEAAC5306C48A69BD (String_t* ___0_url, CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91 ___1_cachedBundle, uint32_t ___2_crc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* V_0 = NULL;
	{
		String_t* L_0 = ___0_url;
		String_t* L_1;
		L_1 = CachedAssetBundle_get_name_m07DF67334A1C4F36262498F4E47AD33525A13C5F((&___1_cachedBundle), NULL);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_2;
		L_2 = CachedAssetBundle_get_hash_mE0D311588D701E6E0D68ADE21DB6CB8FFC0E6803((&___1_cachedBundle), NULL);
		uint32_t L_3 = ___2_crc;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_4 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WWW__ctor_mE54C20112FA803BB706A405F2892106B2BCB86FD(L_4, L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.WWW::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		String_t* L_0 = ___0_url;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1;
		L_1 = UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86(L_0, NULL);
		__this->____uwr_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uwr_1), (void*)L_1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = __this->____uwr_1;
		NullCheck(L_2);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_3;
		L_3 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_mAA7DCD89AE9B79BD685BA8A1853C42C9A9B0C533 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___0_url, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___1_form, const RuntimeMethod* method) 
{
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		String_t* L_0 = ___0_url;
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_1 = ___1_form;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2;
		L_2 = UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373(L_0, L_1, NULL);
		__this->____uwr_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uwr_1), (void*)L_2);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = __this->____uwr_1;
		NullCheck(L_3);
		UnityWebRequest_set_chunkedTransfer_m83ECE3BA8AF42D0CCD2B9DC89EE26867B5652843(L_3, (bool)0, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = __this->____uwr_1;
		NullCheck(L_4);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_5;
		L_5 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_m0CA60044A418EE7CC242A3780D66254353F25629 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___0_url, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_postData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		s_Il2CppMethodInitialized = true;
	}
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* V_0 = NULL;
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		String_t* L_0 = ___0_url;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_1, L_0, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		__this->____uwr_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uwr_1), (void*)L_1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = __this->____uwr_1;
		NullCheck(L_2);
		UnityWebRequest_set_chunkedTransfer_m83ECE3BA8AF42D0CCD2B9DC89EE26867B5652843(L_2, (bool)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_postData;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_4 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_4, L_3, NULL);
		V_0 = L_4;
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_5 = V_0;
		NullCheck(L_5);
		UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3(L_5, _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->____uwr_1;
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_7 = V_0;
		NullCheck(L_6);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_6, L_7, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->____uwr_1;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_9 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_9, NULL);
		NullCheck(L_8);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_8, L_9, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->____uwr_1;
		NullCheck(L_10);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_11;
		L_11 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_10, NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[],System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_m5C4B331123CF25248BF866143A94B2275F0E5975 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___0_url, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_postData, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___2_headers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	String_t* G_B3_0 = NULL;
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_postData;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		G_B3_0 = _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		String_t* L_1 = ___0_url;
		String_t* L_2 = V_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_3, L_1, L_2, NULL);
		__this->____uwr_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uwr_1), (void*)L_3);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = __this->____uwr_1;
		NullCheck(L_4);
		UnityWebRequest_set_chunkedTransfer_m83ECE3BA8AF42D0CCD2B9DC89EE26867B5652843(L_4, (bool)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_postData;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_6 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_6, L_5, NULL);
		V_1 = L_6;
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_7 = V_1;
		NullCheck(L_7);
		UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3(L_7, _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->____uwr_1;
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_9 = V_1;
		NullCheck(L_8);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_8, L_9, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->____uwr_1;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_11 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_11, NULL);
		NullCheck(L_10);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_10, L_11, NULL);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_12 = ___2_headers;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(37 /* System.Collections.ICollection System.Collections.Hashtable::get_Keys() */, L_12);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_13);
		V_2 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a1:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_15 = V_2;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_16 = V_4;
					if (!L_16)
					{
						goto IL_00b5;
					}
				}
				{
					RuntimeObject* L_17 = V_4;
					NullCheck(L_17);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_17);
				}

IL_00b5:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0097_1;
			}

IL_0072_1:
			{
				RuntimeObject* L_18 = V_2;
				NullCheck(L_18);
				RuntimeObject* L_19;
				L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				V_3 = L_19;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_20 = __this->____uwr_1;
				RuntimeObject* L_21 = V_3;
				Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_22 = ___2_headers;
				RuntimeObject* L_23 = V_3;
				NullCheck(L_22);
				RuntimeObject* L_24;
				L_24 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_22, L_23);
				NullCheck(L_20);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_20, ((String_t*)CastclassSealed((RuntimeObject*)L_21, String_t_il2cpp_TypeInfo_var)), ((String_t*)CastclassSealed((RuntimeObject*)L_24, String_t_il2cpp_TypeInfo_var)), NULL);
			}

IL_0097_1:
			{
				RuntimeObject* L_25 = V_2;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0072_1;
				}
			}
			{
				goto IL_00b6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b6:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_27 = __this->____uwr_1;
		NullCheck(L_27);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_28;
		L_28 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_27, NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_mD51946C4380DAAA935F7C5996E5A6AF135165A7E (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___0_url, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_postData, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___2_headers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* V_1 = NULL;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* G_B3_0 = NULL;
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_postData;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		G_B3_0 = _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		String_t* L_1 = ___0_url;
		String_t* L_2 = V_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_3, L_1, L_2, NULL);
		__this->____uwr_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uwr_1), (void*)L_3);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = __this->____uwr_1;
		NullCheck(L_4);
		UnityWebRequest_set_chunkedTransfer_m83ECE3BA8AF42D0CCD2B9DC89EE26867B5652843(L_4, (bool)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_postData;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_6 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_6, L_5, NULL);
		V_1 = L_6;
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_7 = V_1;
		NullCheck(L_7);
		UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3(L_7, _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->____uwr_1;
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_9 = V_1;
		NullCheck(L_8);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_8, L_9, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->____uwr_1;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_11 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_11, NULL);
		NullCheck(L_10);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_10, L_11, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = ___2_headers;
		NullCheck(L_12);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_13;
		L_13 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_12, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_2 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_2), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008f_1;
			}

IL_006d_1:
			{
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_14;
				L_14 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_2), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_3 = L_14;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->____uwr_1;
				String_t* L_16;
				L_16 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_3), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_17;
				L_17 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_3), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_15);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_15, L_16, L_17, NULL);
			}

IL_008f_1:
			{
				bool L_18;
				L_18 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_2), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_006d_1;
				}
			}
			{
				goto IL_00a9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a9:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_19 = __this->____uwr_1;
		NullCheck(L_19);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_20;
		L_20 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_19, NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::.ctor(System.String,System.String,UnityEngine.Hash128,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_mE54C20112FA803BB706A405F2892106B2BCB86FD (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___0_url, String_t* ___1_name, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___2_hash, uint32_t ___3_crc, const RuntimeMethod* method) 
{
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_name;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_2 = ___2_hash;
		CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91 L_3;
		memset((&L_3), 0, sizeof(L_3));
		CachedAssetBundle__ctor_m13AD50663A3717FD159A25BED5C6634425DCC4CE((&L_3), L_1, L_2, /*hidden argument*/NULL);
		uint32_t L_4 = ___3_crc;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5;
		L_5 = UnityWebRequestAssetBundle_GetAssetBundle_m40F278316325A44A7A89AAB3B13EA7BED09B0D13(L_0, L_3, L_4, NULL);
		__this->____uwr_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uwr_1), (void*)L_5);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->____uwr_1;
		NullCheck(L_6);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_7;
		L_7 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_6, NULL);
		return;
	}
}
// UnityEngine.AssetBundle UnityEngine.WWW::get_assetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* WWW_get_assetBundle_mB4DC5AFC3732922D2AE792A02699058DABF5B38E (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C* V_1 = NULL;
	bool V_2 = false;
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	bool V_7 = false;
	{
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = __this->____assetBundle_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		bool L_3;
		L_3 = WWW_WaitUntilDoneIfPossible_mD975AFF6737F00BB5003C5AEDBD795751F129A84(__this, NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		V_3 = (AssetBundle_tB38418819A49060CD738CB21541649340F082943*)NULL;
		goto IL_0094;
	}

IL_0023:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->____uwr_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_5, NULL);
		V_4 = (bool)((((int32_t)L_6) == ((int32_t)2))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		V_3 = (AssetBundle_tB38418819A49060CD738CB21541649340F082943*)NULL;
		goto IL_0094;
	}

IL_003b:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->____uwr_1;
		NullCheck(L_8);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_9;
		L_9 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_8, NULL);
		V_1 = ((DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C*)IsInstSealed((RuntimeObject*)L_9, DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_il2cpp_TypeInfo_var));
		DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C* L_10 = V_1;
		V_5 = (bool)((!(((RuntimeObject*)(DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C* L_12 = V_1;
		NullCheck(L_12);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_13;
		L_13 = DownloadHandlerAssetBundle_get_assetBundle_m9D07F738F7014C26AF2B7FD89132FD1CB5DDE0FE(L_12, NULL);
		__this->____assetBundle_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____assetBundle_2), (void*)L_13);
		goto IL_008a;
	}

IL_0064:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = WWW_get_bytes_m83F5C24FC5AC80C5F3B9AF1E290E08F8B96C0642(__this, NULL);
		V_6 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_6;
		V_7 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_15) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_007c;
		}
	}
	{
		V_3 = (AssetBundle_tB38418819A49060CD738CB21541649340F082943*)NULL;
		goto IL_0094;
	}

IL_007c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_6;
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_18;
		L_18 = AssetBundle_LoadFromMemory_mBA6847E4133DBBE3CCBCFFF31A40FA943DB95BBA(L_17, NULL);
		__this->____assetBundle_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____assetBundle_2), (void*)L_18);
	}

IL_008a:
	{
	}

IL_008b:
	{
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_19 = __this->____assetBundle_2;
		V_3 = L_19;
		goto IL_0094;
	}

IL_0094:
	{
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_20 = V_3;
		return L_20;
	}
}
// UnityEngine.Object UnityEngine.WWW::get_audioClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* WWW_get_audioClip_m916DAADDEF02A8614F2AC6E9B071028D87FD3307 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	{
		V_0 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = V_0;
		return L_0;
	}
}
// System.Byte[] UnityEngine.WWW::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWW_get_bytes_m83F5C24FC5AC80C5F3B9AF1E290E08F8B96C0642 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		bool L_0;
		L_0 = WWW_WaitUntilDoneIfPossible_mD975AFF6737F00BB5003C5AEDBD795751F129A84(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = L_2;
		goto IL_005a;
	}

IL_0017:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = __this->____uwr_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_3, NULL);
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = L_6;
		goto IL_005a;
	}

IL_0032:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = __this->____uwr_1;
		NullCheck(L_7);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_8;
		L_8 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_7, NULL);
		V_0 = L_8;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_9 = V_0;
		V_4 = (bool)((((RuntimeObject*)(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = L_11;
		goto IL_005a;
	}

IL_0051:
	{
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3(L_12, NULL);
		V_2 = L_13;
		goto IL_005a;
	}

IL_005a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		return L_14;
	}
}
// UnityEngine.Object UnityEngine.WWW::get_movie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* WWW_get_movie_m51C3BC286F99610F0D6137C75E61378FB22EEDD8 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	{
		V_0 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = V_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.WWW::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WWW_get_size_m7EC5D697C80F65ECD128507135323FC099CF22E5 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = WWW_get_bytesDownloaded_m6B0FB6A1264515565A9D97B7BFE7FE30773E1681(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.WWW::get_bytesDownloaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WWW_get_bytesDownloaded_m6B0FB6A1264515565A9D97B7BFE7FE30773E1681 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->____uwr_1;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = UnityWebRequest_get_downloadedBytes_m73E3EC726E417FC7F983FFEF9566CF380F322610(L_0, NULL);
		V_0 = ((int32_t)L_1);
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.WWW::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_error_m6B2E4F6DB8ECC8217A112EC62AAA1D5E71AA1C93 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	String_t* V_4 = NULL;
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->____uwr_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		V_1 = (String_t*)NULL;
		goto IL_0087;
	}

IL_0017:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = __this->____uwr_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_3, NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->____uwr_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_6, NULL);
		V_1 = L_7;
		goto IL_0087;
	}

IL_0037:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->____uwr_1;
		NullCheck(L_8);
		int64_t L_9;
		L_9 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_8, NULL);
		V_3 = (bool)((((int32_t)((((int64_t)L_9) < ((int64_t)((int64_t)((int32_t)400))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = __this->____uwr_1;
		NullCheck(L_11);
		int64_t L_12;
		L_12 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_11, NULL);
		String_t* L_13;
		L_13 = UnityWebRequest_GetHTTPStatusString_m791BC62F33D286229978CFFC201B16E1F2D3FB2D(L_12, NULL);
		V_4 = L_13;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->____uwr_1;
		NullCheck(L_14);
		int64_t L_15;
		L_15 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_14, NULL);
		int64_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = V_4;
		String_t* L_19;
		L_19 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_17, L_18, NULL);
		V_1 = L_19;
		goto IL_0087;
	}

IL_0083:
	{
		V_1 = (String_t*)NULL;
		goto IL_0087;
	}

IL_0087:
	{
		String_t* L_20 = V_1;
		return L_20;
	}
}
// System.Boolean UnityEngine.WWW::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWW_get_isDone_m7E88B666AD0E3903757043813B2811BBFCCCA52E (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->____uwr_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.WWW::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WWW_get_progress_m8BE51921011B9C737C690F8776F93109E5481B47 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->____uwr_1;
		NullCheck(L_0);
		float L_1;
		L_1 = UnityWebRequest_get_downloadProgress_m28B3DB759530A61929D8AB02A4482AB21D3348B1(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) < ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_0 = (0.0f);
	}

IL_001f:
	{
		float L_4 = V_0;
		V_2 = L_4;
		goto IL_0023;
	}

IL_0023:
	{
		float L_5 = V_2;
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* WWW_get_responseHeaders_m6C9B2980A00E0EE5F537D5CDD48BF6C42C4CF066 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98DC63C9B798605745EDB7457C85928078445AFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral997F93B8223285BB571C83E7ACD6C6615F5EF04C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	String_t* V_4 = NULL;
	{
		bool L_0;
		L_0 = WWW_get_isDone_m7E88B666AD0E3903757043813B2811BBFCCCA52E(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_1 = L_2;
		goto IL_009d;
	}

IL_0019:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = __this->____responseHeaders_3;
		V_2 = (bool)((((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0094;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->____uwr_1;
		NullCheck(L_5);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6;
		L_6 = UnityWebRequest_GetResponseHeaders_m67147A5D3FF83FD75071AA42F4890439DA2092DF(L_5, NULL);
		__this->____responseHeaders_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____responseHeaders_3), (void*)L_6);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = __this->____responseHeaders_3;
		V_3 = (bool)((!(((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->____uwr_1;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_9, NULL);
		String_t* L_11;
		L_11 = UnityWebRequest_GetHTTPStatusString_m791BC62F33D286229978CFFC201B16E1F2D3FB2D(L_10, NULL);
		V_4 = L_11;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = __this->____responseHeaders_3;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->____uwr_1;
		NullCheck(L_13);
		int64_t L_14;
		L_14 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_13, NULL);
		int64_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17 = V_4;
		String_t* L_18;
		L_18 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral997F93B8223285BB571C83E7ACD6C6615F5EF04C, L_16, L_17, NULL);
		NullCheck(L_12);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_12, _stringLiteral98DC63C9B798605745EDB7457C85928078445AFE, L_18, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		goto IL_0093;
	}

IL_0088:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_19 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_19, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->____responseHeaders_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____responseHeaders_3), (void*)L_19);
	}

IL_0093:
	{
	}

IL_0094:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = __this->____responseHeaders_3;
		V_1 = L_20;
		goto IL_009d;
	}

IL_009d:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = V_1;
		return L_21;
	}
}
// System.String UnityEngine.WWW::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_data_m0AC54B7D1F65ED26D8ED3C57F9FA1147A1604AE1 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = WWW_get_text_m95F7CAAC33FD0BAB9B535E3AEAFDA36B81B3EC4F(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.WWW::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_text_m95F7CAAC33FD0BAB9B535E3AEAFDA36B81B3EC4F (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		bool L_0;
		L_0 = WWW_WaitUntilDoneIfPossible_mD975AFF6737F00BB5003C5AEDBD795751F129A84(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0057;
	}

IL_0016:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = __this->____uwr_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_2, NULL);
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0057;
	}

IL_0030:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->____uwr_1;
		NullCheck(L_5);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_6;
		L_6 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_5, NULL);
		V_0 = L_6;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_7 = V_0;
		V_4 = (bool)((((RuntimeObject*)(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0057;
	}

IL_004e:
	{
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_9, NULL);
		V_2 = L_10;
		goto IL_0057;
	}

IL_0057:
	{
		String_t* L_11 = V_2;
		return L_11;
	}
}
// UnityEngine.Texture2D UnityEngine.WWW::CreateTextureFromDownloadedData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* WWW_CreateTextureFromDownloadedData_m670DE15775E657BC8CE6CD19FE2C29EA3429F8F0 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, bool ___0_markNonReadable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	bool V_2 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	{
		bool L_0;
		L_0 = WWW_WaitUntilDoneIfPossible_mD975AFF6737F00BB5003C5AEDBD795751F129A84(__this, NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_2, 2, 2, NULL);
		V_3 = L_2;
		goto IL_0064;
	}

IL_0018:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = __this->____uwr_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_3, NULL);
		V_4 = (bool)((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		V_3 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		goto IL_0064;
	}

IL_0030:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->____uwr_1;
		NullCheck(L_6);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_7;
		L_7 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_6, NULL);
		V_0 = L_7;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_8 = V_0;
		V_5 = (bool)((((RuntimeObject*)(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		V_3 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		goto IL_0064;
	}

IL_004a:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_10, 2, 2, NULL);
		V_1 = L_10;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = V_1;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3(L_12, NULL);
		bool L_14 = ___0_markNonReadable;
		bool L_15;
		L_15 = ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF(L_11, L_13, L_14, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = V_1;
		V_3 = L_16;
		goto IL_0064;
	}

IL_0064:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = V_3;
		return L_17;
	}
}
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* WWW_get_texture_mB38F7FC4220AC09935423B84FD4EB852CF172AAE (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0;
		L_0 = WWW_CreateTextureFromDownloadedData_m670DE15775E657BC8CE6CD19FE2C29EA3429F8F0(__this, (bool)0, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Texture2D UnityEngine.WWW::get_textureNonReadable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* WWW_get_textureNonReadable_m8D15D4BFEF1F5F6FB10319C71387F9A074760FD6 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0;
		L_0 = WWW_CreateTextureFromDownloadedData_m670DE15775E657BC8CE6CD19FE2C29EA3429F8F0(__this, (bool)1, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.WWW::LoadImageIntoTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW_LoadImageIntoTexture_m81D37261ED690E2548887532443C2DBEDCBE43D4 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6652A4EEEFE1AE58E7CF235818DAD3A44193F05F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3AC59A40D687CA8AD4CF9FF120C62CCB231056D);
		s_Il2CppMethodInitialized = true;
	}
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0;
		L_0 = WWW_WaitUntilDoneIfPossible_mD975AFF6737F00BB5003C5AEDBD795751F129A84(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0060;
	}

IL_0010:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = __this->____uwr_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_2, NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE3AC59A40D687CA8AD4CF9FF120C62CCB231056D, NULL);
		goto IL_0060;
	}

IL_0030:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->____uwr_1;
		NullCheck(L_5);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_6;
		L_6 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_5, NULL);
		V_0 = L_6;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_7 = V_0;
		V_3 = (bool)((((RuntimeObject*)(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6652A4EEEFE1AE58E7CF235818DAD3A44193F05F, NULL);
		goto IL_0060;
	}

IL_0052:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = ___0_texture;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_10 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3(L_10, NULL);
		bool L_12;
		L_12 = ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF(L_9, L_11, (bool)0, NULL);
	}

IL_0060:
	{
		return;
	}
}
// UnityEngine.ThreadPriority UnityEngine.WWW::get_threadPriority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WWW_get_threadPriority_mD9063F88AC6750CE98A82A8B46432870F73A0337 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CthreadPriorityU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.WWW::set_threadPriority(UnityEngine.ThreadPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW_set_threadPriority_m07533B2624B8FD97FF6073E9ED5E746C35C16EB1 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CthreadPriorityU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.WWW::get_uploadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WWW_get_uploadProgress_m21E5E22CDA98A2FD19CD7AB65344967661F7C85C (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->____uwr_1;
		NullCheck(L_0);
		float L_1;
		L_1 = UnityWebRequest_get_uploadProgress_m3D2DCD424E0435ABAC0F84EE857121E839652F95(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) < ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_0 = (0.0f);
	}

IL_001f:
	{
		float L_4 = V_0;
		V_2 = L_4;
		goto IL_0023;
	}

IL_0023:
	{
		float L_5 = V_2;
		return L_5;
	}
}
// System.String UnityEngine.WWW::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_url_m368B1D7D23DC22E412A3F802C6E3047760665519 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->____uwr_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UnityWebRequest_get_url_mA3BF205A6FCA2BF66A62174182BE84553CE3FFA8(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.WWW::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWW_get_keepWaiting_m2D6B60FD9CB9C3E86D69E87EA32953AA68AE26B9 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->____uwr_1;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->____uwr_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_1, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.WWW::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW_Dispose_mE5FC4A2013C63A68C287F139B177D86F75C4A74F (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->____uwr_1;
		V_0 = (bool)((!(((RuntimeObject*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = __this->____uwr_1;
		NullCheck(L_2);
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_2, NULL);
		__this->____uwr_1 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uwr_1), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
	}

IL_0023:
	{
		return;
	}
}
// UnityEngine.Object UnityEngine.WWW::GetAudioClipInternal(System.Boolean,System.Boolean,System.Boolean,UnityEngine.AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* WWW_GetAudioClipInternal_m08B69E33747BD466B99370200B183B6341798974 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, bool ___0_threeD, bool ___1_stream, bool ___2_compressed, int32_t ___3_audioType, const RuntimeMethod* method) 
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->____uwr_1;
		NullCheck(L_0);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_1;
		L_1 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_0, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = __this->____uwr_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UnityWebRequest_get_url_mA3BF205A6FCA2BF66A62174182BE84553CE3FFA8(L_2, NULL);
		bool L_4 = ___1_stream;
		bool L_5 = ___2_compressed;
		int32_t L_6 = ___3_audioType;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7;
		L_7 = WebRequestWWW_InternalCreateAudioClipUsingDH_m2FC91348090ABC797376D75D1F69200DE4946EC8(L_1, L_3, L_4, L_5, L_6, NULL);
		V_0 = L_7;
		goto IL_0023;
	}

IL_0023:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* WWW_GetAudioClip_m884E6607F0A93B19013DB7AA86DDC1DDC94C4B2F (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0;
		L_0 = WWW_GetAudioClip_m38EFF82040D63C9424EC3A4EDA9E562FB0097116(__this, (bool)1, (bool)0, 0, NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* WWW_GetAudioClip_mEE3280D26D910755A5E3B8E97632FAD22710AEFD (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, bool ___0_threeD, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		bool L_0 = ___0_threeD;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1;
		L_1 = WWW_GetAudioClip_m38EFF82040D63C9424EC3A4EDA9E562FB0097116(__this, L_0, (bool)0, 0, NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* WWW_GetAudioClip_mACAD8F04E72EF939034B1EA9E8BF2AE524C67714 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, bool ___0_threeD, bool ___1_stream, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		bool L_0 = ___0_threeD;
		bool L_1 = ___1_stream;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2;
		L_2 = WWW_GetAudioClip_m38EFF82040D63C9424EC3A4EDA9E562FB0097116(__this, L_0, L_1, 0, NULL);
		V_0 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean,System.Boolean,UnityEngine.AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* WWW_GetAudioClip_m38EFF82040D63C9424EC3A4EDA9E562FB0097116 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, bool ___0_threeD, bool ___1_stream, int32_t ___2_audioType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		bool L_0 = ___0_threeD;
		bool L_1 = ___1_stream;
		int32_t L_2 = ___2_audioType;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = WWW_GetAudioClipInternal_m08B69E33747BD466B99370200B183B6341798974(__this, L_0, L_1, (bool)0, L_2, NULL);
		V_0 = ((AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)CastclassSealed((RuntimeObject*)L_3, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var));
		goto IL_0013;
	}

IL_0013:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClipCompressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* WWW_GetAudioClipCompressed_m8140DE3B2F1E4D07A77CC8E4F8FB8AA8380F7FE1 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0;
		L_0 = WWW_GetAudioClipCompressed_mBBDF065BCA711AFC9E59BCBCF51E8C49E791567B(__this, (bool)0, 0, NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClipCompressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* WWW_GetAudioClipCompressed_m4239F0E858DC83D60C7C0067DA330854F013A936 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, bool ___0_threeD, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		bool L_0 = ___0_threeD;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1;
		L_1 = WWW_GetAudioClipCompressed_mBBDF065BCA711AFC9E59BCBCF51E8C49E791567B(__this, L_0, 0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClipCompressed(System.Boolean,UnityEngine.AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* WWW_GetAudioClipCompressed_mBBDF065BCA711AFC9E59BCBCF51E8C49E791567B (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, bool ___0_threeD, int32_t ___1_audioType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		bool L_0 = ___0_threeD;
		int32_t L_1 = ___1_audioType;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = WWW_GetAudioClipInternal_m08B69E33747BD466B99370200B183B6341798974(__this, L_0, (bool)0, (bool)1, L_1, NULL);
		V_0 = ((AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)CastclassSealed((RuntimeObject*)L_2, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var));
		goto IL_0013;
	}

IL_0013:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.MovieTexture UnityEngine.WWW::GetMovieTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MovieTexture_tC076F212B0E1B0B008B38AE7D96F0871D9FC90F5* WWW_GetMovieTexture_m8C03712289094DC181E30E02255CBF58196D38CA (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F9FE3E63BBBC875EDA943B424F967697C35A562)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WWW_GetMovieTexture_m8C03712289094DC181E30E02255CBF58196D38CA_RuntimeMethod_var)));
	}
}
// System.Boolean UnityEngine.WWW::WaitUntilDoneIfPossible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWW_WaitUntilDoneIfPossible_mD975AFF6737F00BB5003C5AEDBD795751F129A84 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2429764F10DC7E990250D2AE4138FE5AC928076);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->____uwr_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0054;
	}

IL_0014:
	{
		String_t* L_3;
		L_3 = WWW_get_url_m368B1D7D23DC22E412A3F802C6E3047760665519(__this, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_3, _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, 5, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		goto IL_002e;
	}

IL_002c:
	{
	}

IL_002e:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->____uwr_1;
		NullCheck(L_6);
		bool L_7;
		L_7 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_6, NULL);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (L_8)
		{
			goto IL_002c;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0054;
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE2429764F10DC7E990250D2AE4138FE5AC928076, NULL);
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0054:
	{
		bool L_9 = V_1;
		return L_9;
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
// UnityEngine.AudioClip UnityEngine.Networking.WebRequestWWW::InternalCreateAudioClipUsingDH(UnityEngine.Networking.DownloadHandler,System.String,System.Boolean,System.Boolean,UnityEngine.AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* WebRequestWWW_InternalCreateAudioClipUsingDH_m2FC91348090ABC797376D75D1F69200DE4946EC8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___0_dh, String_t* ___1_url, bool ___2_stream, bool ___3_compressed, int32_t ___4_audioType, const RuntimeMethod* method) 
{
	typedef AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*WebRequestWWW_InternalCreateAudioClipUsingDH_m2FC91348090ABC797376D75D1F69200DE4946EC8_ftn) (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB*, String_t*, bool, bool, int32_t);
	static WebRequestWWW_InternalCreateAudioClipUsingDH_m2FC91348090ABC797376D75D1F69200DE4946EC8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebRequestWWW_InternalCreateAudioClipUsingDH_m2FC91348090ABC797376D75D1F69200DE4946EC8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.WebRequestWWW::InternalCreateAudioClipUsingDH(UnityEngine.Networking.DownloadHandler,System.String,System.Boolean,System.Boolean,UnityEngine.AudioType)");
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* icallRetVal = _il2cpp_icall_func(___0_dh, ___1_url, ___2_stream, ___3_compressed, ___4_audioType);
	return icallRetVal;
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
