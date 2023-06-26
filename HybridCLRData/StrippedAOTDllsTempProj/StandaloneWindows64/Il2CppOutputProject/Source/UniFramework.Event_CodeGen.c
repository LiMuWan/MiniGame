#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UniFramework.Event.EventGroup::AddListener(System.Action`1<UniFramework.Event.IEventMessage>)
// 0x00000002 System.Void UniFramework.Event.EventGroup::RemoveAllListener()
extern void EventGroup_RemoveAllListener_m9A95A03A6AEEB468ABC1ACC66F8C62B2C35F1C06 (void);
// 0x00000003 System.Void UniFramework.Event.EventGroup::.ctor()
extern void EventGroup__ctor_mE4245477F0D69E7D777B598BD964DBECB6A1882E (void);
// 0x00000004 System.Void UniFramework.Event.UniEvent::Initalize()
extern void UniEvent_Initalize_mA822B8559446292FC577EC8115EDDE6DBD1AF3B3 (void);
// 0x00000005 System.Void UniFramework.Event.UniEvent::Destroy()
extern void UniEvent_Destroy_mABAC2383E78B060A08679C69FB8147F3EC0FF1AA (void);
// 0x00000006 System.Void UniFramework.Event.UniEvent::Update()
extern void UniEvent_Update_m3DFEE21911F2200B15AF44CFDB5BAA0534E3BFCF (void);
// 0x00000007 System.Void UniFramework.Event.UniEvent::ClearAll()
extern void UniEvent_ClearAll_m48AAB5757071CDB9B2B0D34ABAC68634548268E7 (void);
// 0x00000008 System.Void UniFramework.Event.UniEvent::AddListener(System.Action`1<UniFramework.Event.IEventMessage>)
// 0x00000009 System.Void UniFramework.Event.UniEvent::AddListener(System.Type,System.Action`1<UniFramework.Event.IEventMessage>)
extern void UniEvent_AddListener_mEDA8F8B7D655E726FAA962783886605B33DED8F9 (void);
// 0x0000000A System.Void UniFramework.Event.UniEvent::AddListener(System.Int32,System.Action`1<UniFramework.Event.IEventMessage>)
extern void UniEvent_AddListener_mC43C75D575FB6EEE2D20A943D263ED517AE97FC1 (void);
// 0x0000000B System.Void UniFramework.Event.UniEvent::RemoveListener(System.Action`1<UniFramework.Event.IEventMessage>)
// 0x0000000C System.Void UniFramework.Event.UniEvent::RemoveListener(System.Type,System.Action`1<UniFramework.Event.IEventMessage>)
extern void UniEvent_RemoveListener_mE6AEF992B879D4726FB77D9A3951A70BE54B2923 (void);
// 0x0000000D System.Void UniFramework.Event.UniEvent::RemoveListener(System.Int32,System.Action`1<UniFramework.Event.IEventMessage>)
extern void UniEvent_RemoveListener_mAD0026A7474E88D9B6B5A271D4416C95B8D20368 (void);
// 0x0000000E System.Void UniFramework.Event.UniEvent::SendMessage(UniFramework.Event.IEventMessage)
extern void UniEvent_SendMessage_m2786D142D8B742B912D48B2877823769E404B750 (void);
// 0x0000000F System.Void UniFramework.Event.UniEvent::SendMessage(System.Int32,UniFramework.Event.IEventMessage)
extern void UniEvent_SendMessage_mAEFDFF98113145BFDC8398321C287AFAF2F73FBC (void);
// 0x00000010 System.Void UniFramework.Event.UniEvent::PostMessage(UniFramework.Event.IEventMessage)
extern void UniEvent_PostMessage_m12365C9D3ADA4E7E1CC17998E29A028560B18B5A (void);
// 0x00000011 System.Void UniFramework.Event.UniEvent::PostMessage(System.Int32,UniFramework.Event.IEventMessage)
extern void UniEvent_PostMessage_mF38F521353F4C25F24D790303A7BEE05916C6D92 (void);
// 0x00000012 System.Void UniFramework.Event.UniEvent::.cctor()
extern void UniEvent__cctor_m808BA94F623700EB486E82CDE0A9A4950AA77B54 (void);
// 0x00000013 System.Void UniFramework.Event.UniEvent/PostWrapper::OnRelease()
extern void PostWrapper_OnRelease_m8B7183684D0819E766607BAE6ED7CF38F9DBCE1F (void);
// 0x00000014 System.Void UniFramework.Event.UniEvent/PostWrapper::.ctor()
extern void PostWrapper__ctor_mBF1025C7FBCAA172BF2E26263D17AD1EBCF84A25 (void);
// 0x00000015 System.Void UniFramework.Event.UniEventDriver::Update()
extern void UniEventDriver_Update_m232B1A941AFB69BEEBC713E3672F41C45627F8DE (void);
// 0x00000016 System.Void UniFramework.Event.UniEventDriver::.ctor()
extern void UniEventDriver__ctor_m4BF2BBF041AC0AD5D8C0641D26AF3EDD9CB14D6D (void);
static Il2CppMethodPointer s_methodPointers[22] = 
{
	NULL,
	EventGroup_RemoveAllListener_m9A95A03A6AEEB468ABC1ACC66F8C62B2C35F1C06,
	EventGroup__ctor_mE4245477F0D69E7D777B598BD964DBECB6A1882E,
	UniEvent_Initalize_mA822B8559446292FC577EC8115EDDE6DBD1AF3B3,
	UniEvent_Destroy_mABAC2383E78B060A08679C69FB8147F3EC0FF1AA,
	UniEvent_Update_m3DFEE21911F2200B15AF44CFDB5BAA0534E3BFCF,
	UniEvent_ClearAll_m48AAB5757071CDB9B2B0D34ABAC68634548268E7,
	NULL,
	UniEvent_AddListener_mEDA8F8B7D655E726FAA962783886605B33DED8F9,
	UniEvent_AddListener_mC43C75D575FB6EEE2D20A943D263ED517AE97FC1,
	NULL,
	UniEvent_RemoveListener_mE6AEF992B879D4726FB77D9A3951A70BE54B2923,
	UniEvent_RemoveListener_mAD0026A7474E88D9B6B5A271D4416C95B8D20368,
	UniEvent_SendMessage_m2786D142D8B742B912D48B2877823769E404B750,
	UniEvent_SendMessage_mAEFDFF98113145BFDC8398321C287AFAF2F73FBC,
	UniEvent_PostMessage_m12365C9D3ADA4E7E1CC17998E29A028560B18B5A,
	UniEvent_PostMessage_mF38F521353F4C25F24D790303A7BEE05916C6D92,
	UniEvent__cctor_m808BA94F623700EB486E82CDE0A9A4950AA77B54,
	PostWrapper_OnRelease_m8B7183684D0819E766607BAE6ED7CF38F9DBCE1F,
	PostWrapper__ctor_mBF1025C7FBCAA172BF2E26263D17AD1EBCF84A25,
	UniEventDriver_Update_m232B1A941AFB69BEEBC713E3672F41C45627F8DE,
	UniEventDriver__ctor_m4BF2BBF041AC0AD5D8C0641D26AF3EDD9CB14D6D,
};
static const int32_t s_InvokerIndices[22] = 
{
	0,
	1826,
	1826,
	3882,
	3882,
	3882,
	3882,
	0,
	3343,
	3325,
	0,
	3343,
	3325,
	3805,
	3325,
	3805,
	3325,
	3882,
	1826,
	1826,
	1826,
	1826,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x06000001, { 0, 1 } },
	{ 0x06000008, { 1, 1 } },
	{ 0x0600000B, { 2, 1 } },
};
extern const uint32_t g_rgctx_TEvent_tE3FF178468BAFCD6E3B253D13F26D6E3E78A51AE;
extern const uint32_t g_rgctx_TEvent_t3E6E125FD8DFBEFD1E087A0DF12D68E9D71F39F1;
extern const uint32_t g_rgctx_TEvent_tB116969390037DB64244D3494DF0628E3F0C7F5B;
static const Il2CppRGCTXDefinition s_rgctxValues[3] = 
{
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TEvent_tE3FF178468BAFCD6E3B253D13F26D6E3E78A51AE },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TEvent_t3E6E125FD8DFBEFD1E087A0DF12D68E9D71F39F1 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TEvent_tB116969390037DB64244D3494DF0628E3F0C7F5B },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UniFramework_Event_CodeGenModule;
const Il2CppCodeGenModule g_UniFramework_Event_CodeGenModule = 
{
	"UniFramework.Event.dll",
	22,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	3,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
