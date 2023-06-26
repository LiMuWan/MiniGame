#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Unity.Services.Core.Telemetry.Internal.IDiagnostics::SendDiagnostic(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000002 System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory> Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider::CreateDiagnosticsComponents()
// 0x00000003 System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider::GetSerializedProjectConfigurationAsync()
// 0x00000004 Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory::Create(System.String)
// 0x00000005 System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendHistogramMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000006 System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000007 Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Telemetry.Internal.IMetricsFactory::Create(System.String)
// 0x00000008 System.Int64 Unity.Services.Core.Scheduler.Internal.IActionScheduler::ScheduleAction(System.Action,System.Double)
// 0x00000009 System.Void Unity.Services.Core.Scheduler.Internal.IActionScheduler::CancelAction(System.Int64)
// 0x0000000A System.String Unity.Services.Core.Environments.Internal.IEnvironments::get_Current()
// 0x0000000B System.String Unity.Services.Core.Configuration.Internal.ICloudProjectId::GetCloudProjectId()
// 0x0000000C System.Boolean Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetBool(System.String,System.Boolean)
// 0x0000000D System.Int32 Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetInt(System.String,System.Int32)
// 0x0000000E System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String)
// 0x0000000F System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_keepWaiting()
extern void AsyncOperationBase_get_keepWaiting_mA5C59C7B9164015B04F3653329FD905A743D507F (void);
// 0x00000010 System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_IsCompleted()
// 0x00000011 System.Boolean Unity.Services.Core.Internal.TaskAsyncOperation::get_IsCompleted()
extern void TaskAsyncOperation_get_IsCompleted_mE8E514DC0AF426E20D123189A8166B0536A5BB0A (void);
// 0x00000012 System.Void Unity.Services.Core.Internal.TaskAsyncOperation::SetScheduler()
extern void TaskAsyncOperation_SetScheduler_m3DAA8E75D48B5977ED724AF4F5637FBD73199FBC (void);
// 0x00000013 System.Void Unity.Services.Core.Internal.CoreLogger::LogWarning(System.Object)
extern void CoreLogger_LogWarning_m0ADFEA332A24159D7EBDE589D840C9F563736073 (void);
// 0x00000014 System.Void Unity.Services.Core.Internal.CoreLogger::LogError(System.Object)
extern void CoreLogger_LogError_mC9B6F1572E693EEAE0A8C72A539C8E75AD967D8E (void);
// 0x00000015 System.Void Unity.Services.Core.Internal.CoreLogger::LogException(System.Exception)
extern void CoreLogger_LogException_m7129C6F678E086232211CBC0347F2300D0A42F3C (void);
// 0x00000016 System.Void Unity.Services.Core.Internal.CircularDependencyException::.ctor()
extern void CircularDependencyException__ctor_m4C48FC29A6765759CEF10843D5A98C43F100B2E2 (void);
// 0x00000017 System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.ComponentRegistry::get_ComponentTypeHashToInstance()
extern void ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20 (void);
// 0x00000018 System.Void Unity.Services.Core.Internal.ComponentRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
extern void ComponentRegistry__ctor_m3FF6CDF744DAFB26FFAF27867B8D5BE8DDC0D43A (void);
// 0x00000019 System.Void Unity.Services.Core.Internal.ComponentRegistry::RegisterServiceComponent(TComponent)
// 0x0000001A TComponent Unity.Services.Core.Internal.ComponentRegistry::GetServiceComponent()
// 0x0000001B System.Boolean Unity.Services.Core.Internal.ComponentRegistry::IsComponentTypeRegistered(System.Int32)
extern void ComponentRegistry_IsComponentTypeRegistered_m71D21117B9314CB1CA28F75B0246E215888228F8 (void);
// 0x0000001C System.Void Unity.Services.Core.Internal.ComponentRegistry::ResetProvidedComponents(System.Collections.Generic.IDictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
extern void ComponentRegistry_ResetProvidedComponents_m58F818C1716DBB973137A543DE880D24E2F25908 (void);
// 0x0000001D System.Void Unity.Services.Core.Internal.IComponentRegistry::RegisterServiceComponent(TComponent)
// 0x0000001E TComponent Unity.Services.Core.Internal.IComponentRegistry::GetServiceComponent()
// 0x0000001F System.Void Unity.Services.Core.Internal.IComponentRegistry::ResetProvidedComponents(System.Collections.Generic.IDictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
// 0x00000020 Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.LockedComponentRegistry::get_Registry()
extern void LockedComponentRegistry_get_Registry_m2170B5DB74B027249B53D07BF8A05D530956F941 (void);
// 0x00000021 System.Void Unity.Services.Core.Internal.LockedComponentRegistry::.ctor(Unity.Services.Core.Internal.IComponentRegistry)
extern void LockedComponentRegistry__ctor_m3630AF00C5DA0EC485544F72503B50D95E871BE1 (void);
// 0x00000022 System.Void Unity.Services.Core.Internal.LockedComponentRegistry::RegisterServiceComponent(TComponent)
// 0x00000023 TComponent Unity.Services.Core.Internal.LockedComponentRegistry::GetServiceComponent()
// 0x00000024 System.Void Unity.Services.Core.Internal.LockedComponentRegistry::ResetProvidedComponents(System.Collections.Generic.IDictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
extern void LockedComponentRegistry_ResetProvidedComponents_mA0A7565D5FB2DA9D4938EE1631E60AF9AA4F293D (void);
// 0x00000025 System.Void Unity.Services.Core.Internal.CoreRegistration::.ctor(Unity.Services.Core.Internal.IPackageRegistry,System.Int32)
extern void CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1 (void);
// 0x00000026 Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn()
// 0x00000027 Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent()
// 0x00000028 Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
extern void CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2 (void);
// 0x00000029 System.Void Unity.Services.Core.Internal.CoreRegistry::set_Instance(Unity.Services.Core.Internal.CoreRegistry)
extern void CoreRegistry_set_Instance_mBFC9CEE6661027ED4103B95A82ABD453555803D7 (void);
// 0x0000002A Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::get_PackageRegistry()
extern void CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063 (void);
// 0x0000002B System.Void Unity.Services.Core.Internal.CoreRegistry::set_PackageRegistry(Unity.Services.Core.Internal.IPackageRegistry)
extern void CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B (void);
// 0x0000002C Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::get_ComponentRegistry()
extern void CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13 (void);
// 0x0000002D System.Void Unity.Services.Core.Internal.CoreRegistry::set_ComponentRegistry(Unity.Services.Core.Internal.IComponentRegistry)
extern void CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E (void);
// 0x0000002E System.Void Unity.Services.Core.Internal.CoreRegistry::.ctor()
extern void CoreRegistry__ctor_m507734CEE1C34622E217894B3D29D7AE0EC45314 (void);
// 0x0000002F Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage(TPackage)
// 0x00000030 System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent(TComponent)
// 0x00000031 TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent()
// 0x00000032 System.Void Unity.Services.Core.Internal.CoreRegistry::LockPackageRegistration()
extern void CoreRegistry_LockPackageRegistration_m031751BE6E5CBB6D30AAE2B64DAF04FC0EEA5A0B (void);
// 0x00000033 System.Void Unity.Services.Core.Internal.CoreRegistry::LockComponentRegistration()
extern void CoreRegistry_LockComponentRegistration_mB4ED90ED4F7621588195C9922C9A669C69C831BC (void);
// 0x00000034 System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::.ctor(Unity.Services.Core.Internal.CoreRegistry,System.Collections.Generic.List`1<System.Int32>)
extern void CoreRegistryInitializer__ctor_mBE9C46715DF41A8B1CF31CCAC9166A212318B156 (void);
// 0x00000035 System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>> Unity.Services.Core.Internal.CoreRegistryInitializer::InitializeRegistryAsync()
extern void CoreRegistryInitializer_InitializeRegistryAsync_m3E1030C1B0E033F76CF20DC208555AB915C62BF8 (void);
// 0x00000036 System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m6F552D21A7795194E9AB8D5D042CF8D7B3975EE9 (void);
// 0x00000037 System.Threading.Tasks.Task Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__TryInitializePackageAsync|0(Unity.Services.Core.Internal.IInitializablePackage)
extern void U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0_m56337B98B3CFDB562165FEE8B41F8987D91B7327 (void);
// 0x00000038 Unity.Services.Core.Internal.IInitializablePackage Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__GetPackageAt|1(System.Int32)
extern void U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__GetPackageAtU7C1_m68BD38748C7FE0D2105C0AB91F6F8E5737F8D016 (void);
// 0x00000039 System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__Fail|2()
extern void U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__FailU7C2_mB66A52FC680C0D6D34C45425B8D8838A9576BF63 (void);
// 0x0000003A System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::MoveNext()
extern void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_MoveNext_m5E60799930DE5F81F77BBABBF177E4BF259BEE52 (void);
// 0x0000003B System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_SetStateMachine_m0D4B0934A0549E32EB5FED93883CC1F3E413EEB7 (void);
// 0x0000003C System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::MoveNext()
extern void U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23 (void);
// 0x0000003D System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeRegistryAsyncU3Ed__3_SetStateMachine_m2129B81BA5F7EE6BA5AAFB086161A32FBECDE5E2 (void);
// 0x0000003E System.Void Unity.Services.Core.Internal.DependencyTree::.ctor()
extern void DependencyTree__ctor_mE8C447ED9582DA0A52E5F5294B424C67641AFA1C (void);
// 0x0000003F System.Void Unity.Services.Core.Internal.DependencyTree::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>,System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
extern void DependencyTree__ctor_mE33E7D31398C9CB414DFAA3F000033C0F5C2D928 (void);
// 0x00000040 System.Void Unity.Services.Core.Internal.DependencyTreeSortFailedException::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>,System.Exception)
extern void DependencyTreeSortFailedException__ctor_m20BA3EA58FC55FCFCE5F857FA9A2EC228473891B (void);
// 0x00000041 System.String Unity.Services.Core.Internal.DependencyTreeSortFailedException::CreateExceptionMessage(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>,System.Exception)
extern void DependencyTreeSortFailedException_CreateExceptionMessage_m076D757C6C201D22949EEAFEB546DA673BFD3301 (void);
// 0x00000042 System.String Unity.Services.Core.Internal.DependencyTreeExtensions::ToJson(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
extern void DependencyTreeExtensions_ToJson_m7BB4E9D6A8686F3DB3BB4AE8CDA0F5126BE2FC0C (void);
// 0x00000043 System.Boolean Unity.Services.Core.Internal.DependencyTreeExtensions::IsOptional(Unity.Services.Core.Internal.DependencyTree,System.Int32)
extern void DependencyTreeExtensions_IsOptional_m291995614CC4AA79B75123A32569FF7194759FB7 (void);
// 0x00000044 System.Boolean Unity.Services.Core.Internal.DependencyTreeExtensions::IsProvided(Unity.Services.Core.Internal.DependencyTree,System.Int32)
extern void DependencyTreeExtensions_IsProvided_m5CF82CE2D83F9EED333ABC06783E1902E30EA86A (void);
// 0x00000045 Newtonsoft.Json.Linq.JObject Unity.Services.Core.Internal.DependencyTreeExtensions::GetPackageJObject(Unity.Services.Core.Internal.DependencyTree,System.Int32)
extern void DependencyTreeExtensions_GetPackageJObject_m2D3CA37C10CFAE312157DA12D6BD189FE6C41F65 (void);
// 0x00000046 Newtonsoft.Json.Linq.JObject Unity.Services.Core.Internal.DependencyTreeExtensions::GetComponentJObject(Unity.Services.Core.Internal.DependencyTree,System.Int32)
extern void DependencyTreeExtensions_GetComponentJObject_mF466234CAEE808134510C6D6D29CCFB6D7EEF4B5 (void);
// 0x00000047 System.String Unity.Services.Core.Internal.DependencyTreeExtensions::GetComponentIdentifier(Unity.Services.Core.Internal.IServiceComponent)
extern void DependencyTreeExtensions_GetComponentIdentifier_mA42A0F2ED2930B38CD6BD6ADB5EB4564B1888CAD (void);
// 0x00000048 System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
extern void DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7 (void);
// 0x00000049 System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortRegisteredPackagesIntoTarget()
extern void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831 (void);
// 0x0000004A System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependenciesFromTree()
extern void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183 (void);
// 0x0000004B System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependencies(System.Collections.Generic.IList`1<System.Int32>)
extern void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B (void);
// 0x0000004C System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Int32)
extern void DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C (void);
// 0x0000004D System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D (void);
// 0x0000004E System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::MarkPackage(System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark)
extern void DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31 (void);
// 0x0000004F System.Collections.Generic.IReadOnlyCollection`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashes()
extern void DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653 (void);
// 0x00000050 System.Int32 Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashFor(System.Int32)
extern void DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634 (void);
// 0x00000051 System.Collections.Generic.IEnumerable`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetDependencyTypeHashesFor(System.Int32)
extern void DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF (void);
// 0x00000052 System.Int32 Unity.Services.Core.Internal.HashException::get_Hash()
extern void HashException_get_Hash_mFCB1368E904EFFF479EB757C721CBB832D50E023 (void);
// 0x00000053 System.Void Unity.Services.Core.Internal.HashException::.ctor(System.Int32,System.String)
extern void HashException__ctor_m5FBEC719A3F7F72B31F0C78070EB4D3129BFDA5B (void);
// 0x00000054 System.Void Unity.Services.Core.Internal.HashException::.ctor(System.Int32,System.String,System.Exception)
extern void HashException__ctor_m945EE76429F8A65F885AD4F0AADAC0DD9BC01655 (void);
// 0x00000055 System.Void Unity.Services.Core.Internal.DependencyTreePackageHashException::.ctor(System.Int32,System.String)
extern void DependencyTreePackageHashException__ctor_m923C53FC638F20CEC12103AF32A773C7164D0E33 (void);
// 0x00000056 System.Void Unity.Services.Core.Internal.DependencyTreePackageHashException::.ctor(System.Int32,System.String,System.Exception)
extern void DependencyTreePackageHashException__ctor_m5BF0D7C8B38D9F1E14F2AB38FB5D420528DB10E7 (void);
// 0x00000057 System.Void Unity.Services.Core.Internal.DependencyTreeComponentHashException::.ctor(System.Int32,System.String)
extern void DependencyTreeComponentHashException__ctor_mAE32DD2275602F7BC17EE37475304781149BCBC4 (void);
// 0x00000058 System.Threading.Tasks.Task Unity.Services.Core.Internal.IInitializablePackage::Initialize(Unity.Services.Core.Internal.CoreRegistry)
// 0x00000059 System.Type Unity.Services.Core.Internal.MissingComponent::get_IntendedType()
extern void MissingComponent_get_IntendedType_m97B07B28AD54A741B376A917DCE3635E9479CB59 (void);
// 0x0000005A System.Void Unity.Services.Core.Internal.MissingComponent::.ctor(System.Type)
extern void MissingComponent__ctor_m2D280CE147B980C7656E897F5F237EB2A50A517B (void);
// 0x0000005B System.Void Unity.Services.Core.Internal.PackageInitializationInfo::.ctor()
extern void PackageInitializationInfo__ctor_mA13323855BBE265A977A230EE6F62B586D9C84D4 (void);
// 0x0000005C Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.IPackageRegistry::get_Tree()
// 0x0000005D System.Void Unity.Services.Core.Internal.IPackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
// 0x0000005E Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.IPackageRegistry::RegisterPackage(TPackage)
// 0x0000005F System.Void Unity.Services.Core.Internal.IPackageRegistry::RegisterDependency(System.Int32)
// 0x00000060 System.Void Unity.Services.Core.Internal.IPackageRegistry::RegisterProvision(System.Int32)
// 0x00000061 Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.LockedPackageRegistry::get_Registry()
extern void LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A (void);
// 0x00000062 System.Void Unity.Services.Core.Internal.LockedPackageRegistry::.ctor(Unity.Services.Core.Internal.IPackageRegistry)
extern void LockedPackageRegistry__ctor_m98CE0389216302BCF17DF91BC8B76CAA121D8927 (void);
// 0x00000063 Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.LockedPackageRegistry::get_Tree()
extern void LockedPackageRegistry_get_Tree_m29C509F6076AB2B4910AA7E2413385AD3523123D (void);
// 0x00000064 System.Void Unity.Services.Core.Internal.LockedPackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
extern void LockedPackageRegistry_set_Tree_m51DD9195FEE8F0E7366F915B039495A797BC1C11 (void);
// 0x00000065 Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.LockedPackageRegistry::RegisterPackage(TPackage)
// 0x00000066 System.Void Unity.Services.Core.Internal.LockedPackageRegistry::RegisterDependency(System.Int32)
// 0x00000067 System.Void Unity.Services.Core.Internal.LockedPackageRegistry::RegisterProvision(System.Int32)
// 0x00000068 Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.PackageRegistry::get_Tree()
extern void PackageRegistry_get_Tree_m346DB9D9068093E382434951B623D2593072E31B (void);
// 0x00000069 System.Void Unity.Services.Core.Internal.PackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
extern void PackageRegistry_set_Tree_m812C188D419BEE03291B07E2F0CF20D7BFA6AE0C (void);
// 0x0000006A System.Void Unity.Services.Core.Internal.PackageRegistry::.ctor(Unity.Services.Core.Internal.DependencyTree)
extern void PackageRegistry__ctor_m42324D73BCB367393F2C200E417CA235BDB91330 (void);
// 0x0000006B Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.PackageRegistry::RegisterPackage(TPackage)
// 0x0000006C System.Void Unity.Services.Core.Internal.PackageRegistry::RegisterDependency(System.Int32)
// 0x0000006D System.Void Unity.Services.Core.Internal.PackageRegistry::RegisterProvision(System.Int32)
// 0x0000006E System.Void Unity.Services.Core.Internal.PackageRegistry::AddComponentDependencyToPackage(System.Int32,System.Int32)
extern void PackageRegistry_AddComponentDependencyToPackage_m930F30EC365AAEE8596E7458AD8C86E73D445812 (void);
// 0x0000006F Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.CoreDiagnostics::get_Instance()
extern void CoreDiagnostics_get_Instance_m190590CB1205EE50B22E6BA144371BD3976C0963 (void);
// 0x00000070 System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_Instance(Unity.Services.Core.Internal.CoreDiagnostics)
extern void CoreDiagnostics_set_Instance_mFEA5BC5137F5C737B49419FA33F79339B1D43F2C (void);
// 0x00000071 System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Internal.CoreDiagnostics::get_CoreTags()
extern void CoreDiagnostics_get_CoreTags_mC54A82C01F2093E739ED3991670E8E61ACBE1C20 (void);
// 0x00000072 Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider Unity.Services.Core.Internal.CoreDiagnostics::get_DiagnosticsComponentProvider()
extern void CoreDiagnostics_get_DiagnosticsComponentProvider_m3BC40B07EE22926D3F63B98F8F6858C382A253A7 (void);
// 0x00000073 System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_DiagnosticsComponentProvider(Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider)
extern void CoreDiagnostics_set_DiagnosticsComponentProvider_m4980F8DAE6FC5015B00AB0A083327BDAB8F8A5B3 (void);
// 0x00000074 Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Internal.CoreDiagnostics::get_Diagnostics()
extern void CoreDiagnostics_get_Diagnostics_m0BCD0E90698D2D4CC6032CF9B747FC95B0C5CE48 (void);
// 0x00000075 System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_Diagnostics(Unity.Services.Core.Telemetry.Internal.IDiagnostics)
extern void CoreDiagnostics_set_Diagnostics_m2AF9AFE612FFCA542EFDB30AC5C15494D2E3982C (void);
// 0x00000076 System.Void Unity.Services.Core.Internal.CoreDiagnostics::SetProjectConfiguration(System.String)
extern void CoreDiagnostics_SetProjectConfiguration_mA70A7004CE8C36FA8E0F17E5529F666D536CF987 (void);
// 0x00000077 System.Void Unity.Services.Core.Internal.CoreDiagnostics::SendCircularDependencyDiagnostics(System.Exception)
extern void CoreDiagnostics_SendCircularDependencyDiagnostics_m9A32DD117AC9C01104B3B3EA17A886C46F6EA858 (void);
// 0x00000078 System.Void Unity.Services.Core.Internal.CoreDiagnostics::SendCorePackageInitDiagnostics(System.Exception)
extern void CoreDiagnostics_SendCorePackageInitDiagnostics_m70FFDD2D365654029B3C75CCDE12A384ED7C1397 (void);
// 0x00000079 System.Void Unity.Services.Core.Internal.CoreDiagnostics::SendOperateServicesInitDiagnostics(System.Exception)
extern void CoreDiagnostics_SendOperateServicesInitDiagnostics_m01E3A52B731604F17403740C31004A83104E8461 (void);
// 0x0000007A System.Threading.Tasks.Task Unity.Services.Core.Internal.CoreDiagnostics::SendCoreDiagnosticsAsync(System.String,System.Exception)
extern void CoreDiagnostics_SendCoreDiagnosticsAsync_m384C35BCC6830722891A162716770A5D70A41AE7 (void);
// 0x0000007B System.Void Unity.Services.Core.Internal.CoreDiagnostics::OnSendFailed(System.Threading.Tasks.Task)
extern void CoreDiagnostics_OnSendFailed_mAD6109FFF9114433011F68EA25A054263EA0AE21 (void);
// 0x0000007C System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics> Unity.Services.Core.Internal.CoreDiagnostics::GetOrCreateDiagnosticsAsync()
extern void CoreDiagnostics_GetOrCreateDiagnosticsAsync_mA2C6BC3077D3EF4104FDE4C9BA26D4B8E640CFE2 (void);
// 0x0000007D System.Void Unity.Services.Core.Internal.CoreDiagnostics::.ctor()
extern void CoreDiagnostics__ctor_mFCD549A6812E3CEAB8A7E42B75A777F9061B3330 (void);
// 0x0000007E System.Void Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::MoveNext()
extern void U3CSendCoreDiagnosticsAsyncU3Ed__24_MoveNext_m814AC3E16A712FE76D7F4751D1FC7ED0DC4A1BF0 (void);
// 0x0000007F System.Void Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendCoreDiagnosticsAsyncU3Ed__24_SetStateMachine_m001FBAB9203E0C0F8DA04AB2EB57966CDE5FD838 (void);
// 0x00000080 System.Void Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::MoveNext()
extern void U3CGetOrCreateDiagnosticsAsyncU3Ed__26_MoveNext_m49BB8D9D5179C83C852EA6F9FD5A269613153ECC (void);
// 0x00000081 System.Void Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetOrCreateDiagnosticsAsyncU3Ed__26_SetStateMachine_m585A57FDF4B14229883605019BE52545E830F839 (void);
// 0x00000082 Unity.Services.Core.Internal.CoreMetrics Unity.Services.Core.Internal.CoreMetrics::get_Instance()
extern void CoreMetrics_get_Instance_mE2CA807AAB4F16D20C28256A23E407E5DF5DE74E (void);
// 0x00000083 System.Void Unity.Services.Core.Internal.CoreMetrics::set_Instance(Unity.Services.Core.Internal.CoreMetrics)
extern void CoreMetrics_set_Instance_mC18703DE5A475E77CBA000AA1602A2A9305AEFD2 (void);
// 0x00000084 Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Internal.CoreMetrics::get_Metrics()
extern void CoreMetrics_get_Metrics_m083DD23C26E29687AE75738D8C57A507082F5329 (void);
// 0x00000085 System.Void Unity.Services.Core.Internal.CoreMetrics::set_Metrics(Unity.Services.Core.Telemetry.Internal.IMetrics)
extern void CoreMetrics_set_Metrics_mCC95B75592115A7250E45CDCBF77A62DDED6F1FB (void);
// 0x00000086 System.Collections.Generic.IDictionary`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics> Unity.Services.Core.Internal.CoreMetrics::get_AllPackageMetrics()
extern void CoreMetrics_get_AllPackageMetrics_mAD22D81A59A7B591E50AAF078BF97FFD55E61AF0 (void);
// 0x00000087 System.Void Unity.Services.Core.Internal.CoreMetrics::SendAllPackagesInitSuccessMetric()
extern void CoreMetrics_SendAllPackagesInitSuccessMetric_m6A0C4AD97DA5F22FCA1723F91096E1AC63400AC1 (void);
// 0x00000088 System.Void Unity.Services.Core.Internal.CoreMetrics::SendAllPackagesInitTimeMetric(System.Double)
extern void CoreMetrics_SendAllPackagesInitTimeMetric_m28BB6D84801BEFC36F21D22D148C2C53C19456C6 (void);
// 0x00000089 System.Void Unity.Services.Core.Internal.CoreMetrics::SendInitTimeMetricForPackage(System.Type,System.Double)
extern void CoreMetrics_SendInitTimeMetricForPackage_m20190AC644BB9982E2833904EFE519C088EA566F (void);
// 0x0000008A System.Void Unity.Services.Core.Internal.CoreMetrics::Initialize(Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Telemetry.Internal.IMetricsFactory,System.Type)
extern void CoreMetrics_Initialize_m7F3B9703FBA1138C36F4C3FE4838443B772B9AE7 (void);
// 0x0000008B System.Void Unity.Services.Core.Internal.CoreMetrics::FindAndCacheAllPackageMetrics(Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Telemetry.Internal.IMetricsFactory)
extern void CoreMetrics_FindAndCacheAllPackageMetrics_m1CAE6AD821223E7333BC0E0888F347B7C5DF82E2 (void);
// 0x0000008C System.Void Unity.Services.Core.Internal.CoreMetrics::.ctor()
extern void CoreMetrics__ctor_mF17592A929926B30C9FC2D17569B55740B15D7D2 (void);
// 0x0000008D System.Void Unity.Services.Core.Internal.UnityServicesInitializer::CreateStaticInstance()
extern void UnityServicesInitializer_CreateStaticInstance_m11C921F54756626B2102628C99180975D8907EB9 (void);
// 0x0000008E System.Void Unity.Services.Core.Internal.UnityServicesInitializer::EnableServicesInitializationAsync()
extern void UnityServicesInitializer_EnableServicesInitializationAsync_m16A565849C8E0FC0A11F2ADE7AA87B6EAA29B890 (void);
// 0x0000008F System.Void Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1::MoveNext()
extern void U3CEnableServicesInitializationAsyncU3Ed__1_MoveNext_mE98AC7044CBFAF74DE70A249383A271C2018B81E (void);
// 0x00000090 System.Void Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CEnableServicesInitializationAsyncU3Ed__1_SetStateMachine_mF049794791F6718DA52FC0A1861464C37CBBD553 (void);
// 0x00000091 System.Void Unity.Services.Core.Internal.UnityServicesInternal::set_State(Unity.Services.Core.ServicesInitializationState)
extern void UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4 (void);
// 0x00000092 Unity.Services.Core.InitializationOptions Unity.Services.Core.Internal.UnityServicesInternal::get_Options()
extern void UnityServicesInternal_get_Options_mF08FB9CE83332107302744620D7A459CC581C54F (void);
// 0x00000093 Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.UnityServicesInternal::get_Registry()
extern void UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4 (void);
// 0x00000094 Unity.Services.Core.Internal.CoreMetrics Unity.Services.Core.Internal.UnityServicesInternal::get_Metrics()
extern void UnityServicesInternal_get_Metrics_m0052DC91F8B8F1CE98E2A38F979D96C9A2D47750 (void);
// 0x00000095 Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.UnityServicesInternal::get_Diagnostics()
extern void UnityServicesInternal_get_Diagnostics_m54973089DA076B6D42CA7E9143F2A10BBC508FA3 (void);
// 0x00000096 System.Void Unity.Services.Core.Internal.UnityServicesInternal::.ctor(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.Internal.CoreMetrics,Unity.Services.Core.Internal.CoreDiagnostics)
extern void UnityServicesInternal__ctor_mDA89BB80FC660F4AAE12F656B10C5A3EAB719252 (void);
// 0x00000097 System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::HasRequestedInitialization()
extern void UnityServicesInternal_HasRequestedInitialization_m1E00108399C4206684219675F75D7269F06C5A03 (void);
// 0x00000098 System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal::InitializeServicesAsync()
extern void UnityServicesInternal_InitializeServicesAsync_mD1A530783D1BAC5937E64849348EFFCD3B26AB9E (void);
// 0x00000099 System.Void Unity.Services.Core.Internal.UnityServicesInternal::SendInitializationMetrics(System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>)
extern void UnityServicesInternal_SendInitializationMetrics_m130644476F26813A9527EC8DF92DF8AE0CA33996 (void);
// 0x0000009A System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal::EnableInitializationAsync()
extern void UnityServicesInternal_EnableInitializationAsync_m55FC6F901CD841698285288DA3F2AC772F2B7E35 (void);
// 0x0000009B System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::.ctor()
extern void U3CU3Ec__DisplayClass22_0__ctor_mDBB05CBB8FBBCD2F03D5B8743AFC609009C0CCEC (void);
// 0x0000009C System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__SortPackages|0()
extern void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SortPackagesU7C0_m3EF4EFD7DF837E39D66E554ED45A6057383A3162 (void);
// 0x0000009D System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>> Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__InitializePackagesAsync|1()
extern void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1_m585E1B8F7070EDDBA40606D3425F8E36FDF8ECD5 (void);
// 0x0000009E System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__FailServicesInitialization|2(System.Exception)
extern void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__FailServicesInitializationU7C2_mBFC7350F4146AB29FE8C595C05249A3595824B04 (void);
// 0x0000009F System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__SucceedServicesInitialization|3()
extern void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SucceedServicesInitializationU7C3_m405CF9855B1CEED7DF649B633CB7F269244F15A3 (void);
// 0x000000A0 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::MoveNext()
extern void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_MoveNext_m1A0F587F4E5C48CFBB69476DC6FF0E8D71A8C89E (void);
// 0x000000A1 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_SetStateMachine_mAAD9750957C9D2A753833C40E201F4141C56143D (void);
// 0x000000A2 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::MoveNext()
extern void U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B (void);
// 0x000000A3 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeServicesAsyncU3Ed__22_SetStateMachine_mFC5FA0E2CD3782B01DA1B4624BD5E80D966BFF33 (void);
// 0x000000A4 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24::MoveNext()
extern void U3CEnableInitializationAsyncU3Ed__24_MoveNext_m248BD737D6BA2E63C2EF30305A5A4323F7AF3612 (void);
// 0x000000A5 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CEnableInitializationAsyncU3Ed__24_SetStateMachine_m3D96F983B264B355592C3D4FFC2C36082AA39FA0 (void);
// 0x000000A6 TDictionary Unity.Services.Core.Internal.DictionaryExtensions::MergeAllowOverride(TDictionary,System.Collections.Generic.IDictionary`2<TKey,TValue>)
// 0x000000A7 System.Boolean Unity.Services.Core.Internal.DictionaryExtensions::ValueEquals(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IDictionary`2<TKey,TValue>)
// 0x000000A8 System.Boolean Unity.Services.Core.Internal.DictionaryExtensions::ValueEquals(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IDictionary`2<TKey,TValue>,TComparer)
// 0x000000A9 System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::.ctor()
extern void JsonConvertDefaultSettingsScope__ctor_m3826A21D21B591AD29F95F7B8EDC88A4D28617D0 (void);
// 0x000000AA System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::.ctor(Newtonsoft.Json.JsonSerializerSettings,System.Boolean)
extern void JsonConvertDefaultSettingsScope__ctor_m9FD0A65D85DE5E3E5304A89E5135E62ECC58ECA7 (void);
// 0x000000AB System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::Finalize()
extern void JsonConvertDefaultSettingsScope_Finalize_m83E086DA0D0183069594CBF695A038B094919D2B (void);
// 0x000000AC System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::Apply()
extern void JsonConvertDefaultSettingsScope_Apply_m5BB175E7B00CE7BA4F810514CBA28C4363E028BD (void);
// 0x000000AD System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::Revert()
extern void JsonConvertDefaultSettingsScope_Revert_mC8B3062748C6D0E7A70233D4EF072B7A863AC844 (void);
// 0x000000AE System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::System.IDisposable.Dispose()
extern void JsonConvertDefaultSettingsScope_System_IDisposable_Dispose_mD1E8844BC1E1034F8776498D5567F7C10F783D78 (void);
// 0x000000AF System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m2C06B4781B8CA2B5CF68C47BD418CA23D287FDB3 (void);
// 0x000000B0 Newtonsoft.Json.JsonSerializerSettings Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope/<>c__DisplayClass3_0::<.ctor>b__0()
extern void U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_mA43863B621B23FF2CA4A62E1F17470CBC5D40808 (void);
// 0x000000B1 System.Boolean Unity.Services.Core.Internal.UnityWebRequestUtils::HasSucceeded(UnityEngine.Networking.UnityWebRequest)
extern void UnityWebRequestUtils_HasSucceeded_m06CCE15DA3423C35C7629483DD6BEB166AE4C32D (void);
static Il2CppMethodPointer s_methodPointers[177] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AsyncOperationBase_get_keepWaiting_mA5C59C7B9164015B04F3653329FD905A743D507F,
	NULL,
	TaskAsyncOperation_get_IsCompleted_mE8E514DC0AF426E20D123189A8166B0536A5BB0A,
	TaskAsyncOperation_SetScheduler_m3DAA8E75D48B5977ED724AF4F5637FBD73199FBC,
	CoreLogger_LogWarning_m0ADFEA332A24159D7EBDE589D840C9F563736073,
	CoreLogger_LogError_mC9B6F1572E693EEAE0A8C72A539C8E75AD967D8E,
	CoreLogger_LogException_m7129C6F678E086232211CBC0347F2300D0A42F3C,
	CircularDependencyException__ctor_m4C48FC29A6765759CEF10843D5A98C43F100B2E2,
	ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20,
	ComponentRegistry__ctor_m3FF6CDF744DAFB26FFAF27867B8D5BE8DDC0D43A,
	NULL,
	NULL,
	ComponentRegistry_IsComponentTypeRegistered_m71D21117B9314CB1CA28F75B0246E215888228F8,
	ComponentRegistry_ResetProvidedComponents_m58F818C1716DBB973137A543DE880D24E2F25908,
	NULL,
	NULL,
	NULL,
	LockedComponentRegistry_get_Registry_m2170B5DB74B027249B53D07BF8A05D530956F941,
	LockedComponentRegistry__ctor_m3630AF00C5DA0EC485544F72503B50D95E871BE1,
	NULL,
	NULL,
	LockedComponentRegistry_ResetProvidedComponents_mA0A7565D5FB2DA9D4938EE1631E60AF9AA4F293D,
	CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1,
	NULL,
	NULL,
	CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2,
	CoreRegistry_set_Instance_mBFC9CEE6661027ED4103B95A82ABD453555803D7,
	CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063,
	CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B,
	CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13,
	CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E,
	CoreRegistry__ctor_m507734CEE1C34622E217894B3D29D7AE0EC45314,
	NULL,
	NULL,
	NULL,
	CoreRegistry_LockPackageRegistration_m031751BE6E5CBB6D30AAE2B64DAF04FC0EEA5A0B,
	CoreRegistry_LockComponentRegistration_mB4ED90ED4F7621588195C9922C9A669C69C831BC,
	CoreRegistryInitializer__ctor_mBE9C46715DF41A8B1CF31CCAC9166A212318B156,
	CoreRegistryInitializer_InitializeRegistryAsync_m3E1030C1B0E033F76CF20DC208555AB915C62BF8,
	U3CU3Ec__DisplayClass3_0__ctor_m6F552D21A7795194E9AB8D5D042CF8D7B3975EE9,
	U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0_m56337B98B3CFDB562165FEE8B41F8987D91B7327,
	U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__GetPackageAtU7C1_m68BD38748C7FE0D2105C0AB91F6F8E5737F8D016,
	U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__FailU7C2_mB66A52FC680C0D6D34C45425B8D8838A9576BF63,
	U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_MoveNext_m5E60799930DE5F81F77BBABBF177E4BF259BEE52,
	U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_SetStateMachine_m0D4B0934A0549E32EB5FED93883CC1F3E413EEB7,
	U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23,
	U3CInitializeRegistryAsyncU3Ed__3_SetStateMachine_m2129B81BA5F7EE6BA5AAFB086161A32FBECDE5E2,
	DependencyTree__ctor_mE8C447ED9582DA0A52E5F5294B424C67641AFA1C,
	DependencyTree__ctor_mE33E7D31398C9CB414DFAA3F000033C0F5C2D928,
	DependencyTreeSortFailedException__ctor_m20BA3EA58FC55FCFCE5F857FA9A2EC228473891B,
	DependencyTreeSortFailedException_CreateExceptionMessage_m076D757C6C201D22949EEAFEB546DA673BFD3301,
	DependencyTreeExtensions_ToJson_m7BB4E9D6A8686F3DB3BB4AE8CDA0F5126BE2FC0C,
	DependencyTreeExtensions_IsOptional_m291995614CC4AA79B75123A32569FF7194759FB7,
	DependencyTreeExtensions_IsProvided_m5CF82CE2D83F9EED333ABC06783E1902E30EA86A,
	DependencyTreeExtensions_GetPackageJObject_m2D3CA37C10CFAE312157DA12D6BD189FE6C41F65,
	DependencyTreeExtensions_GetComponentJObject_mF466234CAEE808134510C6D6D29CCFB6D7EEF4B5,
	DependencyTreeExtensions_GetComponentIdentifier_mA42A0F2ED2930B38CD6BD6ADB5EB4564B1888CAD,
	DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7,
	DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831,
	DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183,
	DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B,
	DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C,
	DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D,
	DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31,
	DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653,
	DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634,
	DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF,
	HashException_get_Hash_mFCB1368E904EFFF479EB757C721CBB832D50E023,
	HashException__ctor_m5FBEC719A3F7F72B31F0C78070EB4D3129BFDA5B,
	HashException__ctor_m945EE76429F8A65F885AD4F0AADAC0DD9BC01655,
	DependencyTreePackageHashException__ctor_m923C53FC638F20CEC12103AF32A773C7164D0E33,
	DependencyTreePackageHashException__ctor_m5BF0D7C8B38D9F1E14F2AB38FB5D420528DB10E7,
	DependencyTreeComponentHashException__ctor_mAE32DD2275602F7BC17EE37475304781149BCBC4,
	NULL,
	MissingComponent_get_IntendedType_m97B07B28AD54A741B376A917DCE3635E9479CB59,
	MissingComponent__ctor_m2D280CE147B980C7656E897F5F237EB2A50A517B,
	PackageInitializationInfo__ctor_mA13323855BBE265A977A230EE6F62B586D9C84D4,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A,
	LockedPackageRegistry__ctor_m98CE0389216302BCF17DF91BC8B76CAA121D8927,
	LockedPackageRegistry_get_Tree_m29C509F6076AB2B4910AA7E2413385AD3523123D,
	LockedPackageRegistry_set_Tree_m51DD9195FEE8F0E7366F915B039495A797BC1C11,
	NULL,
	NULL,
	NULL,
	PackageRegistry_get_Tree_m346DB9D9068093E382434951B623D2593072E31B,
	PackageRegistry_set_Tree_m812C188D419BEE03291B07E2F0CF20D7BFA6AE0C,
	PackageRegistry__ctor_m42324D73BCB367393F2C200E417CA235BDB91330,
	NULL,
	NULL,
	NULL,
	PackageRegistry_AddComponentDependencyToPackage_m930F30EC365AAEE8596E7458AD8C86E73D445812,
	CoreDiagnostics_get_Instance_m190590CB1205EE50B22E6BA144371BD3976C0963,
	CoreDiagnostics_set_Instance_mFEA5BC5137F5C737B49419FA33F79339B1D43F2C,
	CoreDiagnostics_get_CoreTags_mC54A82C01F2093E739ED3991670E8E61ACBE1C20,
	CoreDiagnostics_get_DiagnosticsComponentProvider_m3BC40B07EE22926D3F63B98F8F6858C382A253A7,
	CoreDiagnostics_set_DiagnosticsComponentProvider_m4980F8DAE6FC5015B00AB0A083327BDAB8F8A5B3,
	CoreDiagnostics_get_Diagnostics_m0BCD0E90698D2D4CC6032CF9B747FC95B0C5CE48,
	CoreDiagnostics_set_Diagnostics_m2AF9AFE612FFCA542EFDB30AC5C15494D2E3982C,
	CoreDiagnostics_SetProjectConfiguration_mA70A7004CE8C36FA8E0F17E5529F666D536CF987,
	CoreDiagnostics_SendCircularDependencyDiagnostics_m9A32DD117AC9C01104B3B3EA17A886C46F6EA858,
	CoreDiagnostics_SendCorePackageInitDiagnostics_m70FFDD2D365654029B3C75CCDE12A384ED7C1397,
	CoreDiagnostics_SendOperateServicesInitDiagnostics_m01E3A52B731604F17403740C31004A83104E8461,
	CoreDiagnostics_SendCoreDiagnosticsAsync_m384C35BCC6830722891A162716770A5D70A41AE7,
	CoreDiagnostics_OnSendFailed_mAD6109FFF9114433011F68EA25A054263EA0AE21,
	CoreDiagnostics_GetOrCreateDiagnosticsAsync_mA2C6BC3077D3EF4104FDE4C9BA26D4B8E640CFE2,
	CoreDiagnostics__ctor_mFCD549A6812E3CEAB8A7E42B75A777F9061B3330,
	U3CSendCoreDiagnosticsAsyncU3Ed__24_MoveNext_m814AC3E16A712FE76D7F4751D1FC7ED0DC4A1BF0,
	U3CSendCoreDiagnosticsAsyncU3Ed__24_SetStateMachine_m001FBAB9203E0C0F8DA04AB2EB57966CDE5FD838,
	U3CGetOrCreateDiagnosticsAsyncU3Ed__26_MoveNext_m49BB8D9D5179C83C852EA6F9FD5A269613153ECC,
	U3CGetOrCreateDiagnosticsAsyncU3Ed__26_SetStateMachine_m585A57FDF4B14229883605019BE52545E830F839,
	CoreMetrics_get_Instance_mE2CA807AAB4F16D20C28256A23E407E5DF5DE74E,
	CoreMetrics_set_Instance_mC18703DE5A475E77CBA000AA1602A2A9305AEFD2,
	CoreMetrics_get_Metrics_m083DD23C26E29687AE75738D8C57A507082F5329,
	CoreMetrics_set_Metrics_mCC95B75592115A7250E45CDCBF77A62DDED6F1FB,
	CoreMetrics_get_AllPackageMetrics_mAD22D81A59A7B591E50AAF078BF97FFD55E61AF0,
	CoreMetrics_SendAllPackagesInitSuccessMetric_m6A0C4AD97DA5F22FCA1723F91096E1AC63400AC1,
	CoreMetrics_SendAllPackagesInitTimeMetric_m28BB6D84801BEFC36F21D22D148C2C53C19456C6,
	CoreMetrics_SendInitTimeMetricForPackage_m20190AC644BB9982E2833904EFE519C088EA566F,
	CoreMetrics_Initialize_m7F3B9703FBA1138C36F4C3FE4838443B772B9AE7,
	CoreMetrics_FindAndCacheAllPackageMetrics_m1CAE6AD821223E7333BC0E0888F347B7C5DF82E2,
	CoreMetrics__ctor_mF17592A929926B30C9FC2D17569B55740B15D7D2,
	UnityServicesInitializer_CreateStaticInstance_m11C921F54756626B2102628C99180975D8907EB9,
	UnityServicesInitializer_EnableServicesInitializationAsync_m16A565849C8E0FC0A11F2ADE7AA87B6EAA29B890,
	U3CEnableServicesInitializationAsyncU3Ed__1_MoveNext_mE98AC7044CBFAF74DE70A249383A271C2018B81E,
	U3CEnableServicesInitializationAsyncU3Ed__1_SetStateMachine_mF049794791F6718DA52FC0A1861464C37CBBD553,
	UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4,
	UnityServicesInternal_get_Options_mF08FB9CE83332107302744620D7A459CC581C54F,
	UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4,
	UnityServicesInternal_get_Metrics_m0052DC91F8B8F1CE98E2A38F979D96C9A2D47750,
	UnityServicesInternal_get_Diagnostics_m54973089DA076B6D42CA7E9143F2A10BBC508FA3,
	UnityServicesInternal__ctor_mDA89BB80FC660F4AAE12F656B10C5A3EAB719252,
	UnityServicesInternal_HasRequestedInitialization_m1E00108399C4206684219675F75D7269F06C5A03,
	UnityServicesInternal_InitializeServicesAsync_mD1A530783D1BAC5937E64849348EFFCD3B26AB9E,
	UnityServicesInternal_SendInitializationMetrics_m130644476F26813A9527EC8DF92DF8AE0CA33996,
	UnityServicesInternal_EnableInitializationAsync_m55FC6F901CD841698285288DA3F2AC772F2B7E35,
	U3CU3Ec__DisplayClass22_0__ctor_mDBB05CBB8FBBCD2F03D5B8743AFC609009C0CCEC,
	U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SortPackagesU7C0_m3EF4EFD7DF837E39D66E554ED45A6057383A3162,
	U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1_m585E1B8F7070EDDBA40606D3425F8E36FDF8ECD5,
	U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__FailServicesInitializationU7C2_mBFC7350F4146AB29FE8C595C05249A3595824B04,
	U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SucceedServicesInitializationU7C3_m405CF9855B1CEED7DF649B633CB7F269244F15A3,
	U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_MoveNext_m1A0F587F4E5C48CFBB69476DC6FF0E8D71A8C89E,
	U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_SetStateMachine_mAAD9750957C9D2A753833C40E201F4141C56143D,
	U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B,
	U3CInitializeServicesAsyncU3Ed__22_SetStateMachine_mFC5FA0E2CD3782B01DA1B4624BD5E80D966BFF33,
	U3CEnableInitializationAsyncU3Ed__24_MoveNext_m248BD737D6BA2E63C2EF30305A5A4323F7AF3612,
	U3CEnableInitializationAsyncU3Ed__24_SetStateMachine_m3D96F983B264B355592C3D4FFC2C36082AA39FA0,
	NULL,
	NULL,
	NULL,
	JsonConvertDefaultSettingsScope__ctor_m3826A21D21B591AD29F95F7B8EDC88A4D28617D0,
	JsonConvertDefaultSettingsScope__ctor_m9FD0A65D85DE5E3E5304A89E5135E62ECC58ECA7,
	JsonConvertDefaultSettingsScope_Finalize_m83E086DA0D0183069594CBF695A038B094919D2B,
	JsonConvertDefaultSettingsScope_Apply_m5BB175E7B00CE7BA4F810514CBA28C4363E028BD,
	JsonConvertDefaultSettingsScope_Revert_mC8B3062748C6D0E7A70233D4EF072B7A863AC844,
	JsonConvertDefaultSettingsScope_System_IDisposable_Dispose_mD1E8844BC1E1034F8776498D5567F7C10F783D78,
	U3CU3Ec__DisplayClass3_0__ctor_m2C06B4781B8CA2B5CF68C47BD418CA23D287FDB3,
	U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_mA43863B621B23FF2CA4A62E1F17470CBC5D40808,
	UnityWebRequestUtils_HasSucceeded_m06CCE15DA3423C35C7629483DD6BEB166AE4C32D,
};
extern void CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1_AdjustorThunk (void);
extern void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_MoveNext_m5E60799930DE5F81F77BBABBF177E4BF259BEE52_AdjustorThunk (void);
extern void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_SetStateMachine_m0D4B0934A0549E32EB5FED93883CC1F3E413EEB7_AdjustorThunk (void);
extern void U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23_AdjustorThunk (void);
extern void U3CInitializeRegistryAsyncU3Ed__3_SetStateMachine_m2129B81BA5F7EE6BA5AAFB086161A32FBECDE5E2_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF_AdjustorThunk (void);
extern void U3CSendCoreDiagnosticsAsyncU3Ed__24_MoveNext_m814AC3E16A712FE76D7F4751D1FC7ED0DC4A1BF0_AdjustorThunk (void);
extern void U3CSendCoreDiagnosticsAsyncU3Ed__24_SetStateMachine_m001FBAB9203E0C0F8DA04AB2EB57966CDE5FD838_AdjustorThunk (void);
extern void U3CGetOrCreateDiagnosticsAsyncU3Ed__26_MoveNext_m49BB8D9D5179C83C852EA6F9FD5A269613153ECC_AdjustorThunk (void);
extern void U3CGetOrCreateDiagnosticsAsyncU3Ed__26_SetStateMachine_m585A57FDF4B14229883605019BE52545E830F839_AdjustorThunk (void);
extern void U3CEnableServicesInitializationAsyncU3Ed__1_MoveNext_mE98AC7044CBFAF74DE70A249383A271C2018B81E_AdjustorThunk (void);
extern void U3CEnableServicesInitializationAsyncU3Ed__1_SetStateMachine_mF049794791F6718DA52FC0A1861464C37CBBD553_AdjustorThunk (void);
extern void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_MoveNext_m1A0F587F4E5C48CFBB69476DC6FF0E8D71A8C89E_AdjustorThunk (void);
extern void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_SetStateMachine_mAAD9750957C9D2A753833C40E201F4141C56143D_AdjustorThunk (void);
extern void U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B_AdjustorThunk (void);
extern void U3CInitializeServicesAsyncU3Ed__22_SetStateMachine_mFC5FA0E2CD3782B01DA1B4624BD5E80D966BFF33_AdjustorThunk (void);
extern void U3CEnableInitializationAsyncU3Ed__24_MoveNext_m248BD737D6BA2E63C2EF30305A5A4323F7AF3612_AdjustorThunk (void);
extern void U3CEnableInitializationAsyncU3Ed__24_SetStateMachine_m3D96F983B264B355592C3D4FFC2C36082AA39FA0_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[27] = 
{
	{ 0x06000025, CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1_AdjustorThunk },
	{ 0x0600003A, U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_MoveNext_m5E60799930DE5F81F77BBABBF177E4BF259BEE52_AdjustorThunk },
	{ 0x0600003B, U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_SetStateMachine_m0D4B0934A0549E32EB5FED93883CC1F3E413EEB7_AdjustorThunk },
	{ 0x0600003C, U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23_AdjustorThunk },
	{ 0x0600003D, U3CInitializeRegistryAsyncU3Ed__3_SetStateMachine_m2129B81BA5F7EE6BA5AAFB086161A32FBECDE5E2_AdjustorThunk },
	{ 0x06000048, DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7_AdjustorThunk },
	{ 0x06000049, DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831_AdjustorThunk },
	{ 0x0600004A, DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183_AdjustorThunk },
	{ 0x0600004B, DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B_AdjustorThunk },
	{ 0x0600004C, DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C_AdjustorThunk },
	{ 0x0600004D, DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D_AdjustorThunk },
	{ 0x0600004E, DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31_AdjustorThunk },
	{ 0x0600004F, DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653_AdjustorThunk },
	{ 0x06000050, DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634_AdjustorThunk },
	{ 0x06000051, DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF_AdjustorThunk },
	{ 0x0600007E, U3CSendCoreDiagnosticsAsyncU3Ed__24_MoveNext_m814AC3E16A712FE76D7F4751D1FC7ED0DC4A1BF0_AdjustorThunk },
	{ 0x0600007F, U3CSendCoreDiagnosticsAsyncU3Ed__24_SetStateMachine_m001FBAB9203E0C0F8DA04AB2EB57966CDE5FD838_AdjustorThunk },
	{ 0x06000080, U3CGetOrCreateDiagnosticsAsyncU3Ed__26_MoveNext_m49BB8D9D5179C83C852EA6F9FD5A269613153ECC_AdjustorThunk },
	{ 0x06000081, U3CGetOrCreateDiagnosticsAsyncU3Ed__26_SetStateMachine_m585A57FDF4B14229883605019BE52545E830F839_AdjustorThunk },
	{ 0x0600008F, U3CEnableServicesInitializationAsyncU3Ed__1_MoveNext_mE98AC7044CBFAF74DE70A249383A271C2018B81E_AdjustorThunk },
	{ 0x06000090, U3CEnableServicesInitializationAsyncU3Ed__1_SetStateMachine_mF049794791F6718DA52FC0A1861464C37CBBD553_AdjustorThunk },
	{ 0x060000A0, U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_MoveNext_m1A0F587F4E5C48CFBB69476DC6FF0E8D71A8C89E_AdjustorThunk },
	{ 0x060000A1, U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_SetStateMachine_mAAD9750957C9D2A753833C40E201F4141C56143D_AdjustorThunk },
	{ 0x060000A2, U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B_AdjustorThunk },
	{ 0x060000A3, U3CInitializeServicesAsyncU3Ed__22_SetStateMachine_mFC5FA0E2CD3782B01DA1B4624BD5E80D966BFF33_AdjustorThunk },
	{ 0x060000A4, U3CEnableInitializationAsyncU3Ed__24_MoveNext_m248BD737D6BA2E63C2EF30305A5A4323F7AF3612_AdjustorThunk },
	{ 0x060000A5, U3CEnableInitializationAsyncU3Ed__24_SetStateMachine_m3D96F983B264B355592C3D4FFC2C36082AA39FA0_AdjustorThunk },
};
static const int32_t s_InvokerIndices[177] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1740,
	0,
	1740,
	3882,
	3805,
	3805,
	3805,
	1826,
	1780,
	1655,
	0,
	0,
	1364,
	1655,
	0,
	0,
	0,
	1780,
	1655,
	0,
	0,
	1655,
	1213,
	0,
	0,
	3856,
	3805,
	1780,
	1655,
	1780,
	1655,
	1826,
	0,
	0,
	0,
	1826,
	1826,
	1216,
	1780,
	1826,
	1521,
	1519,
	1826,
	1826,
	1655,
	1826,
	1655,
	1826,
	608,
	899,
	2764,
	3178,
	2991,
	2991,
	3173,
	3173,
	3600,
	1216,
	1826,
	1826,
	1655,
	1648,
	1655,
	1181,
	1780,
	1463,
	1519,
	1768,
	1185,
	852,
	1185,
	852,
	1185,
	0,
	1780,
	1655,
	1826,
	0,
	0,
	0,
	0,
	0,
	1780,
	1655,
	1780,
	1655,
	0,
	0,
	0,
	1780,
	1655,
	1655,
	0,
	0,
	0,
	1181,
	3856,
	3805,
	1780,
	1780,
	1655,
	1780,
	1655,
	1655,
	1655,
	1655,
	1655,
	1099,
	3805,
	1780,
	1826,
	1826,
	1655,
	1826,
	1655,
	3856,
	3805,
	1780,
	1655,
	1780,
	1826,
	1635,
	1210,
	899,
	1216,
	1826,
	3882,
	3882,
	1826,
	1655,
	1648,
	1780,
	1780,
	1780,
	1780,
	899,
	1740,
	1780,
	1655,
	1780,
	1826,
	1826,
	1780,
	1655,
	1826,
	1826,
	1655,
	1826,
	1655,
	1826,
	1655,
	0,
	0,
	0,
	1826,
	1206,
	1826,
	1826,
	1826,
	1826,
	1826,
	1780,
	3440,
};
static const Il2CppTokenRangePair s_rgctxIndices[14] = 
{
	{ 0x06000019, { 0, 3 } },
	{ 0x0600001A, { 3, 2 } },
	{ 0x06000023, { 5, 2 } },
	{ 0x06000026, { 7, 1 } },
	{ 0x06000027, { 8, 1 } },
	{ 0x0600002F, { 9, 2 } },
	{ 0x06000030, { 11, 2 } },
	{ 0x06000031, { 13, 2 } },
	{ 0x0600006B, { 15, 2 } },
	{ 0x0600006C, { 17, 1 } },
	{ 0x0600006D, { 18, 1 } },
	{ 0x060000A6, { 19, 12 } },
	{ 0x060000A7, { 31, 5 } },
	{ 0x060000A8, { 36, 17 } },
};
extern const uint32_t g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19;
extern const uint32_t g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19;
extern const Il2CppRGCTXConstrainedData g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19_Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3;
extern const uint32_t g_rgctx_TComponent_t0CE1B3A4E22EC0D1C5C58C75BCC12B399C511E0C;
extern const uint32_t g_rgctx_TComponent_t0CE1B3A4E22EC0D1C5C58C75BCC12B399C511E0C;
extern const uint32_t g_rgctx_IComponentRegistry_GetServiceComponent_TisTComponent_t96B8B334A174C61ACF2F00AC2D36DA82EFF89D93_m49E36B01B9275916714436B280553CD140C85156;
extern const uint32_t g_rgctx_TComponent_t96B8B334A174C61ACF2F00AC2D36DA82EFF89D93;
extern const uint32_t g_rgctx_IPackageRegistry_RegisterDependency_TisT_tF7329CEE248A45B379F2D9B9C20F1C509D5AC5BE_mAD6891506B8D0C6E17D74F7C8BB210301F897701;
extern const uint32_t g_rgctx_IPackageRegistry_RegisterProvision_TisT_tAF2C20D6116F2B37117D32E592CC2526F3C66387_mB4B584384E95C9C399D4C4F0099A378683FD9F3C;
extern const uint32_t g_rgctx_TPackage_t1F53D662DD7D083035D429593DB6417C7D00B466;
extern const uint32_t g_rgctx_IPackageRegistry_RegisterPackage_TisTPackage_t1F53D662DD7D083035D429593DB6417C7D00B466_m263AC8BBE177344DE7192B249E8EB1582607BF42;
extern const uint32_t g_rgctx_TComponent_t85B70181FD308155E7F16AE3674AFFD3CADCCC5B;
extern const uint32_t g_rgctx_IComponentRegistry_RegisterServiceComponent_TisTComponent_t85B70181FD308155E7F16AE3674AFFD3CADCCC5B_mB9D0C705AE4607805AB4E3AADD0D1A95EEBA7693;
extern const uint32_t g_rgctx_IComponentRegistry_GetServiceComponent_TisTComponent_tD5C669B09D7578B0D96C43ADD96195C237A26343_m14AD4DCAA8DFFB5BBC39FAD1072B05CD971B93F3;
extern const uint32_t g_rgctx_TComponent_tD5C669B09D7578B0D96C43ADD96195C237A26343;
extern const uint32_t g_rgctx_TPackage_tBB906B0EDE41FEF2C415DB07176611363FF605A8;
extern const uint32_t g_rgctx_TPackage_tBB906B0EDE41FEF2C415DB07176611363FF605A8;
extern const uint32_t g_rgctx_TComponent_t238DC5B730435DEF358B69AF16052E2640F2DDAC;
extern const uint32_t g_rgctx_TComponent_t4EAFE06D169C0A9F5CEA93DA71BFAF9901F32E5E;
extern const uint32_t g_rgctx_IDictionary_2_t2D8409E060ED515C7006E9D709774D39F10B147E;
extern const uint32_t g_rgctx_IEnumerable_1_t0054CA7812EA9EB48A93C0ECB6C72ADB4EBE1982;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mF75A892F34C72F44CB3BE51719A01B01C8F17819;
extern const uint32_t g_rgctx_IEnumerator_1_t6236748848A5632DFD186C6A3470C96922406DF5;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m297021CD3C7C2CFEFB3884ABECE09DFFD61B9649;
extern const uint32_t g_rgctx_KeyValuePair_2_tD5CC9E76B152764680BDFB703EAD3F05934C0FBD;
extern const uint32_t g_rgctx_TDictionary_tE4D86954848B8FB9C3446EABF72C614BBFF9753C;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Key_m7E9CBD2AA582BF58E8AC08FB4C3D23FB5D36A4FC;
extern const uint32_t g_rgctx_TKey_t5AE3493F898AB9AD26E3684CE6326537B5025511;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Value_m41435BD3EFCEA1D74342808B791447E327121C23;
extern const uint32_t g_rgctx_TValue_t82AAB48B0F3657E5DA90AA07F39F61CE3FE7D7E6;
extern const Il2CppRGCTXConstrainedData g_rgctx_TDictionary_tE4D86954848B8FB9C3446EABF72C614BBFF9753C_IDictionary_2_set_Item_m961DD5D72BFEDD7568922EBDAA6758DAD60866C3;
extern const uint32_t g_rgctx_IDictionary_2_t4FA8F1D2F19F0DA937AFBE484790449023E7B6CB;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m2B515C1B320E5CF36AA0050682E82CF5D5F9505B;
extern const uint32_t g_rgctx_EqualityComparer_1_t5165A8B3DD812ADBE683BB1D468FA111379D3234;
extern const uint32_t g_rgctx_EqualityComparer_1_t5165A8B3DD812ADBE683BB1D468FA111379D3234;
extern const uint32_t g_rgctx_DictionaryExtensions_ValueEquals_TisTKey_tA2C259308CDF9A6EED83D5F966E768D2262AEC84_TisTValue_tFFD2E87CCEA33ABE7EDA245CE4C29800C97B9536_TisEqualityComparer_1_t5165A8B3DD812ADBE683BB1D468FA111379D3234_m54C6A5F72E426D42E1BE5401EA21DD7B61A83114;
extern const uint32_t g_rgctx_IDictionary_2_tE50C0FFEC6D79EA185C75DF597327CE3215AF873;
extern const uint32_t g_rgctx_ICollection_1_tB8CC21E0BBDAB20953D7473CF7ECCF43D669E46B;
extern const uint32_t g_rgctx_ICollection_1_get_Count_m67990A458BE4D71990AA7C9B848A0F9BFAAB0383;
extern const uint32_t g_rgctx_IEnumerable_1_t4AF8B1594094E1F7080DDEDC88B9333E1933F23B;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m9C274231A6AF975F87804E7EDEA765E232E475ED;
extern const uint32_t g_rgctx_IEnumerator_1_t34C8B82973DA853C2784A1C4F0D0A6AE383D8109;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m2DBEC56F7F27495EA24036517B4246A9BCC48FF7;
extern const uint32_t g_rgctx_KeyValuePair_2_t2EC318B3EA197895957BB5F90C7D21AAF0D3FCE0;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Key_mA735C5CED8E2598473BCEB99D54850D0511F6D61;
extern const uint32_t g_rgctx_TKey_t30CFDC7DEB9412B55D2F66D01113FEBD81EFBAA8;
extern const uint32_t g_rgctx_IDictionary_2_TryGetValue_m97A2BBE1D3AF3F8E8B4631B336F80294FE44DF1B;
extern const uint32_t g_rgctx_TValueU26_tC290AE45B4CBAC0DFA15C37C8A8AAFEF234D0108;
extern const uint32_t g_rgctx_TComparer_t37AE823B42E889BD9778EDC5EC070CFC6076773B;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Value_m252C3B5B863E19A3A4D80B124F3621915BE6216D;
extern const uint32_t g_rgctx_TValue_t25C6C2559E60C6592B0664EC8F06B89AC7C8A3A1;
extern const uint32_t g_rgctx_IEqualityComparer_1_tD30141587EFB392D4D6E72E7DABE192E2E12570D;
extern const Il2CppRGCTXConstrainedData g_rgctx_TComparer_t37AE823B42E889BD9778EDC5EC070CFC6076773B_IEqualityComparer_1_Equals_m7030F970691161B6AA17EA1ED96D96361311E07B;
static const Il2CppRGCTXDefinition s_rgctxValues[53] = 
{
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19_Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t0CE1B3A4E22EC0D1C5C58C75BCC12B399C511E0C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TComponent_t0CE1B3A4E22EC0D1C5C58C75BCC12B399C511E0C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IComponentRegistry_GetServiceComponent_TisTComponent_t96B8B334A174C61ACF2F00AC2D36DA82EFF89D93_m49E36B01B9275916714436B280553CD140C85156 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TComponent_t96B8B334A174C61ACF2F00AC2D36DA82EFF89D93 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPackageRegistry_RegisterDependency_TisT_tF7329CEE248A45B379F2D9B9C20F1C509D5AC5BE_mAD6891506B8D0C6E17D74F7C8BB210301F897701 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPackageRegistry_RegisterProvision_TisT_tAF2C20D6116F2B37117D32E592CC2526F3C66387_mB4B584384E95C9C399D4C4F0099A378683FD9F3C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TPackage_t1F53D662DD7D083035D429593DB6417C7D00B466 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPackageRegistry_RegisterPackage_TisTPackage_t1F53D662DD7D083035D429593DB6417C7D00B466_m263AC8BBE177344DE7192B249E8EB1582607BF42 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TComponent_t85B70181FD308155E7F16AE3674AFFD3CADCCC5B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IComponentRegistry_RegisterServiceComponent_TisTComponent_t85B70181FD308155E7F16AE3674AFFD3CADCCC5B_mB9D0C705AE4607805AB4E3AADD0D1A95EEBA7693 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IComponentRegistry_GetServiceComponent_TisTComponent_tD5C669B09D7578B0D96C43ADD96195C237A26343_m14AD4DCAA8DFFB5BBC39FAD1072B05CD971B93F3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TComponent_tD5C669B09D7578B0D96C43ADD96195C237A26343 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TPackage_tBB906B0EDE41FEF2C415DB07176611363FF605A8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TPackage_tBB906B0EDE41FEF2C415DB07176611363FF605A8 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t238DC5B730435DEF358B69AF16052E2640F2DDAC },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t4EAFE06D169C0A9F5CEA93DA71BFAF9901F32E5E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IDictionary_2_t2D8409E060ED515C7006E9D709774D39F10B147E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t0054CA7812EA9EB48A93C0ECB6C72ADB4EBE1982 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mF75A892F34C72F44CB3BE51719A01B01C8F17819 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t6236748848A5632DFD186C6A3470C96922406DF5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m297021CD3C7C2CFEFB3884ABECE09DFFD61B9649 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_KeyValuePair_2_tD5CC9E76B152764680BDFB703EAD3F05934C0FBD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TDictionary_tE4D86954848B8FB9C3446EABF72C614BBFF9753C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Key_m7E9CBD2AA582BF58E8AC08FB4C3D23FB5D36A4FC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKey_t5AE3493F898AB9AD26E3684CE6326537B5025511 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Value_m41435BD3EFCEA1D74342808B791447E327121C23 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TValue_t82AAB48B0F3657E5DA90AA07F39F61CE3FE7D7E6 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TDictionary_tE4D86954848B8FB9C3446EABF72C614BBFF9753C_IDictionary_2_set_Item_m961DD5D72BFEDD7568922EBDAA6758DAD60866C3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IDictionary_2_t4FA8F1D2F19F0DA937AFBE484790449023E7B6CB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_m2B515C1B320E5CF36AA0050682E82CF5D5F9505B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t5165A8B3DD812ADBE683BB1D468FA111379D3234 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t5165A8B3DD812ADBE683BB1D468FA111379D3234 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DictionaryExtensions_ValueEquals_TisTKey_tA2C259308CDF9A6EED83D5F966E768D2262AEC84_TisTValue_tFFD2E87CCEA33ABE7EDA245CE4C29800C97B9536_TisEqualityComparer_1_t5165A8B3DD812ADBE683BB1D468FA111379D3234_m54C6A5F72E426D42E1BE5401EA21DD7B61A83114 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IDictionary_2_tE50C0FFEC6D79EA185C75DF597327CE3215AF873 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_tB8CC21E0BBDAB20953D7473CF7ECCF43D669E46B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_get_Count_m67990A458BE4D71990AA7C9B848A0F9BFAAB0383 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t4AF8B1594094E1F7080DDEDC88B9333E1933F23B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m9C274231A6AF975F87804E7EDEA765E232E475ED },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t34C8B82973DA853C2784A1C4F0D0A6AE383D8109 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m2DBEC56F7F27495EA24036517B4246A9BCC48FF7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_KeyValuePair_2_t2EC318B3EA197895957BB5F90C7D21AAF0D3FCE0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Key_mA735C5CED8E2598473BCEB99D54850D0511F6D61 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKey_t30CFDC7DEB9412B55D2F66D01113FEBD81EFBAA8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IDictionary_2_TryGetValue_m97A2BBE1D3AF3F8E8B4631B336F80294FE44DF1B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TValueU26_tC290AE45B4CBAC0DFA15C37C8A8AAFEF234D0108 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TComparer_t37AE823B42E889BD9778EDC5EC070CFC6076773B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Value_m252C3B5B863E19A3A4D80B124F3621915BE6216D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TValue_t25C6C2559E60C6592B0664EC8F06B89AC7C8A3A1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_tD30141587EFB392D4D6E72E7DABE192E2E12570D },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TComparer_t37AE823B42E889BD9778EDC5EC070CFC6076773B_IEqualityComparer_1_Equals_m7030F970691161B6AA17EA1ED96D96361311E07B },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Services_Core_Internal_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Services_Core_Internal_CodeGenModule = 
{
	"Unity.Services.Core.Internal.dll",
	177,
	s_methodPointers,
	27,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	14,
	s_rgctxIndices,
	53,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
