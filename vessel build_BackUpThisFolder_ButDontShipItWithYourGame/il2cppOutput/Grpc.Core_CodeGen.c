#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.CallCredentials::ToNativeCredentials()
// 0x00000002 System.Void Grpc.Core.CallInvocationDetails`2::.ctor(Grpc.Core.Channel,Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x00000003 System.Void Grpc.Core.CallInvocationDetails`2::.ctor(Grpc.Core.Channel,System.String,System.String,Grpc.Core.Marshaller`1<TRequest>,Grpc.Core.Marshaller`1<TResponse>,Grpc.Core.CallOptions)
// 0x00000004 Grpc.Core.Channel Grpc.Core.CallInvocationDetails`2::get_Channel()
// 0x00000005 System.String Grpc.Core.CallInvocationDetails`2::get_Method()
// 0x00000006 System.String Grpc.Core.CallInvocationDetails`2::get_Host()
// 0x00000007 Grpc.Core.Marshaller`1<TRequest> Grpc.Core.CallInvocationDetails`2::get_RequestMarshaller()
// 0x00000008 Grpc.Core.Marshaller`1<TResponse> Grpc.Core.CallInvocationDetails`2::get_ResponseMarshaller()
// 0x00000009 Grpc.Core.CallOptions Grpc.Core.CallInvocationDetails`2::get_Options()
// 0x0000000A Grpc.Core.CallInvocationDetails`2<TRequest,TResponse> Grpc.Core.CallInvocationDetails`2::WithOptions(Grpc.Core.CallOptions)
// 0x0000000B TResponse Grpc.Core.CallInvoker::BlockingUnaryCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions,TRequest)
// 0x0000000C System.Void Grpc.Core.CallInvoker::.ctor()
extern void CallInvoker__ctor_m14E10A85BDE1D6527069B685D823EAF472C60CB6 (void);
// 0x0000000D System.Void Grpc.Core.CallOptions::.ctor(Grpc.Core.Metadata,System.Nullable`1<System.DateTime>,System.Threading.CancellationToken,Grpc.Core.WriteOptions,Grpc.Core.ContextPropagationToken,Grpc.Core.CallCredentials)
extern void CallOptions__ctor_m1AEB9AE5049E7BCBE1FF371D565CF313FCFAEAF4 (void);
// 0x0000000E Grpc.Core.Metadata Grpc.Core.CallOptions::get_Headers()
extern void CallOptions_get_Headers_mFC6A54A222982567FBA9BC5E722F981B6BEDED32 (void);
// 0x0000000F System.Nullable`1<System.DateTime> Grpc.Core.CallOptions::get_Deadline()
extern void CallOptions_get_Deadline_m690790D582CCB0BBE0453BFB4525A9225897B7B0 (void);
// 0x00000010 System.Threading.CancellationToken Grpc.Core.CallOptions::get_CancellationToken()
extern void CallOptions_get_CancellationToken_m99069FDFB1F6AF9CD66440943E9D0994B570F845 (void);
// 0x00000011 Grpc.Core.WriteOptions Grpc.Core.CallOptions::get_WriteOptions()
extern void CallOptions_get_WriteOptions_mCCAD13A0CCBBF55EE69877CC0179B6E1BE58F6E3 (void);
// 0x00000012 Grpc.Core.ContextPropagationToken Grpc.Core.CallOptions::get_PropagationToken()
extern void CallOptions_get_PropagationToken_mDAEB8A7CE897C1F462A5EA217E5DFDB492FB39F2 (void);
// 0x00000013 Grpc.Core.CallCredentials Grpc.Core.CallOptions::get_Credentials()
extern void CallOptions_get_Credentials_mEBA6A20D2C0D61D3FB6776619B8E395A1737AE79 (void);
// 0x00000014 Grpc.Core.Internal.CallFlags Grpc.Core.CallOptions::get_Flags()
extern void CallOptions_get_Flags_m17943C17884032BD7BD6209FAC07FA2891EB36A0 (void);
// 0x00000015 Grpc.Core.CallOptions Grpc.Core.CallOptions::Normalize()
extern void CallOptions_Normalize_m9629515871AAED7A0719B93CEC5366280DFC27AB (void);
// 0x00000016 TResponse Grpc.Core.Calls::BlockingUnaryCall(Grpc.Core.CallInvocationDetails`2<TRequest,TResponse>,TRequest)
// 0x00000017 System.Void Grpc.Core.Channel::.ctor(System.String,Grpc.Core.ChannelCredentials)
extern void Channel__ctor_m1A1C8DA6AD18389A25C9B3C71C274443631EC487 (void);
// 0x00000018 System.Void Grpc.Core.Channel::.ctor(System.String,Grpc.Core.ChannelCredentials,System.Collections.Generic.IEnumerable`1<Grpc.Core.ChannelOption>)
extern void Channel__ctor_m724DF69C027B605B508E353A08342AEF9CE918A0 (void);
// 0x00000019 Grpc.Core.ChannelState Grpc.Core.Channel::get_State()
extern void Channel_get_State_m7A2A7FC2000828CC7D98BE8DDBBD189FDE1CC0BC (void);
// 0x0000001A System.Threading.Tasks.Task`1<System.Boolean> Grpc.Core.Channel::WaitForStateChangedInternalAsync(Grpc.Core.ChannelState,System.Nullable`1<System.DateTime>)
extern void Channel_WaitForStateChangedInternalAsync_mAF4787ED2F4A84701EC5CF269353376131BAFF8A (void);
// 0x0000001B System.Threading.Tasks.Task Grpc.Core.Channel::ShutdownAsync()
extern void Channel_ShutdownAsync_mC3E38FE10F4626CB219E62016DDCA503257DE159 (void);
// 0x0000001C Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Channel::get_Handle()
extern void Channel_get_Handle_mA57DC024D89B0B2325559565A05DEDB3C9D4B154 (void);
// 0x0000001D Grpc.Core.GrpcEnvironment Grpc.Core.Channel::get_Environment()
extern void Channel_get_Environment_mECAC1A3A50FCA64EBC9A084FC8C03469C335E2AE (void);
// 0x0000001E System.Void Grpc.Core.Channel::AddCallReference(System.Object)
extern void Channel_AddCallReference_m2F8D5F8470E15A5039098A791E4F210E30612BD4 (void);
// 0x0000001F System.Void Grpc.Core.Channel::RemoveCallReference(System.Object)
extern void Channel_RemoveCallReference_m62F2EFCF40A901308CB48B4AA43BE3698DEBB55C (void);
// 0x00000020 Grpc.Core.ChannelState Grpc.Core.Channel::GetConnectivityState(System.Boolean)
extern void Channel_GetConnectivityState_mB72C575A08D021152C19FBC65B8E0AF401C73312 (void);
// 0x00000021 System.Threading.Tasks.Task Grpc.Core.Channel::RunConnectivityWatcherAsync()
extern void Channel_RunConnectivityWatcherAsync_m0092B4B801059B6DEFE4CDA70DF7E03B4DC63ACE (void);
// 0x00000022 System.Void Grpc.Core.Channel::EnsureUserAgentChannelOption(System.Collections.Generic.Dictionary`2<System.String,Grpc.Core.ChannelOption>)
extern void Channel_EnsureUserAgentChannelOption_m7626A9DF0E0B1C912F964DAEF619570D7B5393A6 (void);
// 0x00000023 System.Collections.Generic.Dictionary`2<System.String,Grpc.Core.ChannelOption> Grpc.Core.Channel::CreateOptionsDictionary(System.Collections.Generic.IEnumerable`1<Grpc.Core.ChannelOption>)
extern void Channel_CreateOptionsDictionary_m341CC454564F5FF8964448E476560CCFBFDB6463 (void);
// 0x00000024 System.Void Grpc.Core.Channel::.cctor()
extern void Channel__cctor_m1A7B482711A7D000C58D2298262A8C8F8185A75D (void);
// 0x00000025 System.Void Grpc.Core.Channel/<ShutdownAsync>d__27::MoveNext()
extern void U3CShutdownAsyncU3Ed__27_MoveNext_mCF49ACE9F4DD4230A7B724D3867F7A337CF2B8E2 (void);
// 0x00000026 System.Void Grpc.Core.Channel/<ShutdownAsync>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownAsyncU3Ed__27_SetStateMachine_m9A41DAA653D838C2B9B977446AF40C9ADC108BFC (void);
// 0x00000027 System.Void Grpc.Core.Channel/<RunConnectivityWatcherAsync>d__37::MoveNext()
extern void U3CRunConnectivityWatcherAsyncU3Ed__37_MoveNext_mB16C33EB16EA1ED3B7C230B42924F614359456F6 (void);
// 0x00000028 System.Void Grpc.Core.Channel/<RunConnectivityWatcherAsync>d__37::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRunConnectivityWatcherAsyncU3Ed__37_SetStateMachine_m8C5E8CAFC1342E10670CBAFBEC2489AD239C6D7C (void);
// 0x00000029 System.Void Grpc.Core.Channel/<>c::.cctor()
extern void U3CU3Ec__cctor_m262CC69D754DED032DF3D624BEBFCD4ACDB4877E (void);
// 0x0000002A System.Void Grpc.Core.Channel/<>c::.ctor()
extern void U3CU3Ec__ctor_mFD7D29DF9C4C25A074FF3B819B1FEBF4B3F4EA14 (void);
// 0x0000002B System.Void Grpc.Core.Channel/<>c::<.cctor>b__40_0(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__40_0_mF399C2C5A5A59B74EDBC45A3D632708F86AAB8B5 (void);
// 0x0000002C Grpc.Core.ChannelCredentials Grpc.Core.ChannelCredentials::get_Insecure()
extern void ChannelCredentials_get_Insecure_m72957F89C56F5FC18AD5E811B6C1E1797A620D33 (void);
// 0x0000002D Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.ChannelCredentials::ToNativeCredentials()
// 0x0000002E System.Void Grpc.Core.ChannelCredentials::.ctor()
extern void ChannelCredentials__ctor_m8163A1F7C6E64A6161EAE6E9CCBA84748453806B (void);
// 0x0000002F System.Void Grpc.Core.ChannelCredentials::.cctor()
extern void ChannelCredentials__cctor_mF2AB8D2B0A8595D7A71F48B9A1C50422B6B8593F (void);
// 0x00000030 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.ChannelCredentials/InsecureCredentialsImpl::ToNativeCredentials()
extern void InsecureCredentialsImpl_ToNativeCredentials_m47CF97A1279871F327244DAF711BEE2A8AECD812 (void);
// 0x00000031 System.Void Grpc.Core.ChannelCredentials/InsecureCredentialsImpl::.ctor()
extern void InsecureCredentialsImpl__ctor_m90E6AC1968213015CD9C8BE09DA829A4D1FF8C26 (void);
// 0x00000032 System.Void Grpc.Core.ChannelOption::.ctor(System.String,System.String)
extern void ChannelOption__ctor_m6BB16321B902100FA71DFB1D71CEC9F0074CBCEC (void);
// 0x00000033 Grpc.Core.ChannelOption/OptionType Grpc.Core.ChannelOption::get_Type()
extern void ChannelOption_get_Type_mCD069610D4FBDB52EA05AA93D751A99B7DFB73A8 (void);
// 0x00000034 System.String Grpc.Core.ChannelOption::get_Name()
extern void ChannelOption_get_Name_mFE49F4B5B53BAE8E4F73D6CCF5DFE77A460CE528 (void);
// 0x00000035 System.Int32 Grpc.Core.ChannelOption::get_IntValue()
extern void ChannelOption_get_IntValue_mC4B7690AF0C4F73DCFF777FC7D5389D7F9CA13C5 (void);
// 0x00000036 System.String Grpc.Core.ChannelOption::get_StringValue()
extern void ChannelOption_get_StringValue_m44C52F7890BD0DAC5FFC6D76083D04C04523C5C4 (void);
// 0x00000037 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.ChannelOptions::CreateChannelArgs(System.Collections.Generic.ICollection`1<Grpc.Core.ChannelOption>)
extern void ChannelOptions_CreateChannelArgs_mB15B07901BB88CC3201F999FAA0DFFB1872A6C04 (void);
// 0x00000038 System.Void Grpc.Core.ClientBase`1::.ctor(Grpc.Core.Channel)
// 0x00000039 System.Void Grpc.Core.ClientBase::.ctor(Grpc.Core.ClientBase/ClientBaseConfiguration)
extern void ClientBase__ctor_mB752B8A09E97A4F7DA48DB34276B85E53C09290B (void);
// 0x0000003A System.Void Grpc.Core.ClientBase::.ctor(Grpc.Core.Channel)
extern void ClientBase__ctor_mC81AADBB6912059C94ED48F367E983224BBE18E4 (void);
// 0x0000003B System.Void Grpc.Core.ClientBase::.ctor(Grpc.Core.CallInvoker)
extern void ClientBase__ctor_mE1328313B33B19F032168BF55315035790E03D46 (void);
// 0x0000003C Grpc.Core.CallInvoker Grpc.Core.ClientBase::get_CallInvoker()
extern void ClientBase_get_CallInvoker_m8A5DF25E614C5C611656BFD6FBB75AB59A1AC8DE (void);
// 0x0000003D System.Void Grpc.Core.ClientBase/ClientBaseConfiguration::.ctor(Grpc.Core.CallInvoker,System.String)
extern void ClientBaseConfiguration__ctor_m1969F8CEF5A73F1ABEE3A7E0F9738BE10001A759 (void);
// 0x0000003E Grpc.Core.CallInvoker Grpc.Core.ClientBase/ClientBaseConfiguration::CreateDecoratedCallInvoker()
extern void ClientBaseConfiguration_CreateDecoratedCallInvoker_mB44781B14FC22C6F77C969F068DDCA1DBD4A36A2 (void);
// 0x0000003F System.Tuple`2<System.String,Grpc.Core.CallOptions> Grpc.Core.ClientBase/ClientBaseConfiguration::<CreateDecoratedCallInvoker>b__4_0(Grpc.Core.IMethod,System.String,Grpc.Core.CallOptions)
extern void ClientBaseConfiguration_U3CCreateDecoratedCallInvokerU3Eb__4_0_mB1B01BEA093CA6D38B5D0F92E7F33005BC353810 (void);
// 0x00000040 System.Void Grpc.Core.ClientBase/ClientBaseConfiguration/ClientBaseConfigurationInterceptor::.ctor(System.Func`4<Grpc.Core.IMethod,System.String,Grpc.Core.CallOptions,System.Tuple`2<System.String,Grpc.Core.CallOptions>>)
extern void ClientBaseConfigurationInterceptor__ctor_mF40F2E2C17F00263211EA8417F3A87451BDE0110 (void);
// 0x00000041 Grpc.Core.Interceptors.ClientInterceptorContext`2<TRequest,TResponse> Grpc.Core.ClientBase/ClientBaseConfiguration/ClientBaseConfigurationInterceptor::GetNewContext(Grpc.Core.Interceptors.ClientInterceptorContext`2<TRequest,TResponse>)
// 0x00000042 TResponse Grpc.Core.ClientBase/ClientBaseConfiguration/ClientBaseConfigurationInterceptor::BlockingUnaryCall(TRequest,Grpc.Core.Interceptors.ClientInterceptorContext`2<TRequest,TResponse>,Grpc.Core.Interceptors.Interceptor/BlockingUnaryCallContinuation`2<TRequest,TResponse>)
// 0x00000043 Grpc.Core.Internal.CallSafeHandle Grpc.Core.ContextPropagationToken::get_ParentCall()
extern void ContextPropagationToken_get_ParentCall_m98FE8C4AAA69FE4FDC7E76AC2E5988C95EDE6CC9 (void);
// 0x00000044 System.DateTime Grpc.Core.ContextPropagationToken::get_ParentDeadline()
extern void ContextPropagationToken_get_ParentDeadline_m74969472C7A9E96B08A4451F833433835E116B8C (void);
// 0x00000045 System.Threading.CancellationToken Grpc.Core.ContextPropagationToken::get_ParentCancellationToken()
extern void ContextPropagationToken_get_ParentCancellationToken_m906FFCA76BBF7A32385EB4F848944B333794F4B4 (void);
// 0x00000046 Grpc.Core.ContextPropagationOptions Grpc.Core.ContextPropagationToken::get_Options()
extern void ContextPropagationToken_get_Options_m2BC9B0EEECD7FB058543BF1962C135CED494B933 (void);
// 0x00000047 System.Void Grpc.Core.ContextPropagationOptions::.ctor(System.Boolean,System.Boolean)
extern void ContextPropagationOptions__ctor_mED163C8704796B026E4607C3AAFDB61566E2CB99 (void);
// 0x00000048 System.Boolean Grpc.Core.ContextPropagationOptions::get_IsPropagateDeadline()
extern void ContextPropagationOptions_get_IsPropagateDeadline_mD378A613B42E533F571B641B1496007ED5CF0BF0 (void);
// 0x00000049 System.Boolean Grpc.Core.ContextPropagationOptions::get_IsPropagateCancellation()
extern void ContextPropagationOptions_get_IsPropagateCancellation_mDC10BB9E384D6BFB97D9A17E8041A099DD3D3E9B (void);
// 0x0000004A System.Void Grpc.Core.ContextPropagationOptions::.cctor()
extern void ContextPropagationOptions__cctor_m1B45E7FDF741D84D2BC018B7136C10F05A22E0C7 (void);
// 0x0000004B System.Void Grpc.Core.DefaultCallInvoker::.ctor(Grpc.Core.Channel)
extern void DefaultCallInvoker__ctor_mDB33F036E9582CDC692867AE23AF724C2C2334E8 (void);
// 0x0000004C TResponse Grpc.Core.DefaultCallInvoker::BlockingUnaryCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions,TRequest)
// 0x0000004D Grpc.Core.CallInvocationDetails`2<TRequest,TResponse> Grpc.Core.DefaultCallInvoker::CreateCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x0000004E Grpc.Core.GrpcEnvironment Grpc.Core.GrpcEnvironment::AddRef()
extern void GrpcEnvironment_AddRef_mAD11ABFF97DFC58C75AABDBCC49C7287DBB2BB5A (void);
// 0x0000004F System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::ReleaseAsync()
extern void GrpcEnvironment_ReleaseAsync_mFCE8F893E89AA417148077FB733A717FD95185D0 (void);
// 0x00000050 System.Void Grpc.Core.GrpcEnvironment::RegisterChannel(Grpc.Core.Channel)
extern void GrpcEnvironment_RegisterChannel_mB0F9E0CEA91EE96EF949C9FC4906BB72B726259A (void);
// 0x00000051 System.Void Grpc.Core.GrpcEnvironment::UnregisterChannel(Grpc.Core.Channel)
extern void GrpcEnvironment_UnregisterChannel_mBFD439AB817BF9ABD44CB1E06BAB6EDF4C0F6B94 (void);
// 0x00000052 System.Void Grpc.Core.GrpcEnvironment::UnregisterServer(Grpc.Core.Server)
extern void GrpcEnvironment_UnregisterServer_m757CE7F1BC313ADC07057AD27A033824A05AFDCA (void);
// 0x00000053 System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::ShutdownChannelsAsync()
extern void GrpcEnvironment_ShutdownChannelsAsync_mB7184DB802A59FA72C873E39A6DABB5C94F3AE92 (void);
// 0x00000054 System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::KillServersAsync()
extern void GrpcEnvironment_KillServersAsync_m21C4E4EA13EBC93D4FE6E8A762F4D0221534A9EE (void);
// 0x00000055 Grpc.Core.Logging.ILogger Grpc.Core.GrpcEnvironment::get_Logger()
extern void GrpcEnvironment_get_Logger_m3D70D64EF455993F6ADCB2B64F696FAD44D0E8F7 (void);
// 0x00000056 System.Void Grpc.Core.GrpcEnvironment::.ctor()
extern void GrpcEnvironment__ctor_m150FD9FDD4022C594BC18A6A8A97B49A4ABE82FC (void);
// 0x00000057 System.Collections.Generic.IReadOnlyCollection`1<Grpc.Core.Internal.CompletionQueueSafeHandle> Grpc.Core.GrpcEnvironment::get_CompletionQueues()
extern void GrpcEnvironment_get_CompletionQueues_m3F6B4119310EEA15364FF8B69A8FFF5445103D60 (void);
// 0x00000058 Grpc.Core.Internal.IObjectPool`1<Grpc.Core.Internal.BatchContextSafeHandle> Grpc.Core.GrpcEnvironment::get_BatchContextPool()
extern void GrpcEnvironment_get_BatchContextPool_mEF69D66885A81BEDC61458F0C3362517692511EF (void);
// 0x00000059 Grpc.Core.Internal.IObjectPool`1<Grpc.Core.Internal.RequestCallContextSafeHandle> Grpc.Core.GrpcEnvironment::get_RequestCallContextPool()
extern void GrpcEnvironment_get_RequestCallContextPool_m0F35E281E6DC15C3E616E998B59F5C2F5AE51FE7 (void);
// 0x0000005A System.Boolean Grpc.Core.GrpcEnvironment::get_IsAlive()
extern void GrpcEnvironment_get_IsAlive_m05495967B36402FA2DA579022953EF20A7E4A620 (void);
// 0x0000005B Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.GrpcEnvironment::PickCompletionQueue()
extern void GrpcEnvironment_PickCompletionQueue_m216F9F8A39D6242456F2B19290BF5C30A8EE01FD (void);
// 0x0000005C Grpc.Core.Internal.DebugStats Grpc.Core.GrpcEnvironment::get_DebugStats()
extern void GrpcEnvironment_get_DebugStats_m56F2E28D2EA2786F896CD7C21B25DBEC11139AE0 (void);
// 0x0000005D System.Void Grpc.Core.GrpcEnvironment::GrpcNativeInit()
extern void GrpcEnvironment_GrpcNativeInit_m9AE8B6A6D6978191237590278588DB01F34C7B16 (void);
// 0x0000005E System.Void Grpc.Core.GrpcEnvironment::GrpcNativeShutdown()
extern void GrpcEnvironment_GrpcNativeShutdown_m029AA2C66D8D065DEFF4976703E93F341F6B9159 (void);
// 0x0000005F System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::ShutdownAsync()
extern void GrpcEnvironment_ShutdownAsync_m1EC1778E430DBD17ECEE727EBB262771F78204C7 (void);
// 0x00000060 System.Int32 Grpc.Core.GrpcEnvironment::GetThreadPoolSizeOrDefault()
extern void GrpcEnvironment_GetThreadPoolSizeOrDefault_m475465E45CF61660B631C77D1AEABCAB412363CB (void);
// 0x00000061 System.Int32 Grpc.Core.GrpcEnvironment::GetCompletionQueueCountOrDefault()
extern void GrpcEnvironment_GetCompletionQueueCountOrDefault_mE9571A925CBE83CCAF9DCB801CAD95A9364B8921 (void);
// 0x00000062 System.Void Grpc.Core.GrpcEnvironment::.cctor()
extern void GrpcEnvironment__cctor_mE8A8B2BA6E6994934CD42551B623BFCBA0443A6B (void);
// 0x00000063 System.Void Grpc.Core.GrpcEnvironment::<ShutdownAsync>b__59_0()
extern void GrpcEnvironment_U3CShutdownAsyncU3Eb__59_0_m00E470BBE9291F8A1ACC80509EED640687E01E83 (void);
// 0x00000064 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks::Register()
extern void ShutdownHooks_Register_m2A099E8A81D1B32B113C3DFEC9D04721718B46CE (void);
// 0x00000065 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks::HandleShutdown()
extern void ShutdownHooks_HandleShutdown_m7ECE40A79D449A3AC6BE74B37B9B769C8AF061F2 (void);
// 0x00000066 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks::.cctor()
extern void ShutdownHooks__cctor_m62C0F0166FE88DB0871203ACBD50A8BFA47912EB (void);
// 0x00000067 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::.cctor()
extern void U3CU3Ec__cctor_mB2D6CACBC0C4236E613BCDA3124297741D911693 (void);
// 0x00000068 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::.ctor()
extern void U3CU3Ec__ctor_m29FE9F41D13507D12D8C179D654ED20A08FB23A4 (void);
// 0x00000069 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::<Register>b__2_0(System.Object,System.EventArgs)
extern void U3CU3Ec_U3CRegisterU3Eb__2_0_mEFCDEEEA5B95DDFAB059796DED18F6EC90CA2F16 (void);
// 0x0000006A System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::<Register>b__2_1(System.Object,System.EventArgs)
extern void U3CU3Ec_U3CRegisterU3Eb__2_1_mA338A044EF13AF20A57DDD9F477635D9EE4CA561 (void);
// 0x0000006B System.Void Grpc.Core.GrpcEnvironment/<ReleaseAsync>d__25::MoveNext()
extern void U3CReleaseAsyncU3Ed__25_MoveNext_m8C324FAF133C61CF8D0D09C10CBBA3601436F2EA (void);
// 0x0000006C System.Void Grpc.Core.GrpcEnvironment/<ReleaseAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReleaseAsyncU3Ed__25_SetStateMachine_m6D16DDD506C9287E858D5628FD8D16E13F0D858E (void);
// 0x0000006D System.Void Grpc.Core.GrpcEnvironment/<>c::.cctor()
extern void U3CU3Ec__cctor_mE883D5D767EEA794C2A6D99AB2BCF5D42309A406 (void);
// 0x0000006E System.Void Grpc.Core.GrpcEnvironment/<>c::.ctor()
extern void U3CU3Ec__ctor_m35323870B47C5F0902A32A56330F4AD1F99D72A9 (void);
// 0x0000006F System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment/<>c::<ShutdownChannelsAsync>b__31_0(Grpc.Core.Channel)
extern void U3CU3Ec_U3CShutdownChannelsAsyncU3Eb__31_0_m09E49BF280A5DD6B723F049829FD475D8AE3F7AA (void);
// 0x00000070 System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment/<>c::<KillServersAsync>b__32_0(Grpc.Core.Server)
extern void U3CU3Ec_U3CKillServersAsyncU3Eb__32_0_m6E58ECD96915B4461CFB4502F60D9D093C5760BF (void);
// 0x00000071 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.GrpcEnvironment/<>c::<.ctor>b__44_0()
extern void U3CU3Ec_U3C_ctorU3Eb__44_0_m2B999F710E75EDF79B69F05EACA66A64E76CAE43 (void);
// 0x00000072 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.GrpcEnvironment/<>c::<.ctor>b__44_1()
extern void U3CU3Ec_U3C_ctorU3Eb__44_1_mB2F80B00AB934EBA7C58BE4B6B322537FAA6E54E (void);
// 0x00000073 System.Void Grpc.Core.GrpcEnvironment/<ShutdownAsync>d__59::MoveNext()
extern void U3CShutdownAsyncU3Ed__59_MoveNext_mEDF586693548F068CDFEF4608BDF0999DCA468F9 (void);
// 0x00000074 System.Void Grpc.Core.GrpcEnvironment/<ShutdownAsync>d__59::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownAsyncU3Ed__59_SetStateMachine_m7C5E392AC9059FF7ECBDF1D4FC1CB09157D0F4BE (void);
// 0x00000075 System.Void Grpc.Core.Marshaller`1::.ctor(System.Func`2<T,System.Byte[]>,System.Func`2<System.Byte[],T>)
// 0x00000076 System.Func`2<T,System.Byte[]> Grpc.Core.Marshaller`1::get_Serializer()
// 0x00000077 System.Func`2<System.Byte[],T> Grpc.Core.Marshaller`1::get_Deserializer()
// 0x00000078 Grpc.Core.Marshaller`1<T> Grpc.Core.Marshallers::Create(System.Func`2<T,System.Byte[]>,System.Func`2<System.Byte[],T>)
// 0x00000079 System.Void Grpc.Core.Metadata::.ctor()
extern void Metadata__ctor_m9FACCA1CDCFB30E895C93B76F4932BC4841BA1D7 (void);
// 0x0000007A Grpc.Core.Metadata Grpc.Core.Metadata::Freeze()
extern void Metadata_Freeze_mBE1D996B7B98F74103F841DBA47C95FD52589A63 (void);
// 0x0000007B System.Int32 Grpc.Core.Metadata::IndexOf(Grpc.Core.Metadata/Entry)
extern void Metadata_IndexOf_m6D45656A88BF8FA8ED9A76AADECC94809A4DDBFD (void);
// 0x0000007C System.Void Grpc.Core.Metadata::Insert(System.Int32,Grpc.Core.Metadata/Entry)
extern void Metadata_Insert_m1084C9630FC7521181D11E99C18374983FBD0C8F (void);
// 0x0000007D System.Void Grpc.Core.Metadata::RemoveAt(System.Int32)
extern void Metadata_RemoveAt_mF60BFFAD2BA13DC9CC5F19BA6915EA5ADD475572 (void);
// 0x0000007E Grpc.Core.Metadata/Entry Grpc.Core.Metadata::get_Item(System.Int32)
extern void Metadata_get_Item_m49D4C16103D03966E77859F2D586721E0080ECC5 (void);
// 0x0000007F System.Void Grpc.Core.Metadata::set_Item(System.Int32,Grpc.Core.Metadata/Entry)
extern void Metadata_set_Item_m45B64DEC0CA61A752E8F60E632D776050B11F081 (void);
// 0x00000080 System.Void Grpc.Core.Metadata::Add(Grpc.Core.Metadata/Entry)
extern void Metadata_Add_mD1007C4C23168B98C467743B56722B0BB2B5E9E1 (void);
// 0x00000081 System.Void Grpc.Core.Metadata::Clear()
extern void Metadata_Clear_mD5F35F7C1853CE929713AEB1581F169DFE44A8AE (void);
// 0x00000082 System.Boolean Grpc.Core.Metadata::Contains(Grpc.Core.Metadata/Entry)
extern void Metadata_Contains_m0407E8767759C6BF5B73024455EDD1256C88AC92 (void);
// 0x00000083 System.Void Grpc.Core.Metadata::CopyTo(Grpc.Core.Metadata/Entry[],System.Int32)
extern void Metadata_CopyTo_m4E306B96BA66E9CC9B3F0AD257A1E17AF276F5AE (void);
// 0x00000084 System.Int32 Grpc.Core.Metadata::get_Count()
extern void Metadata_get_Count_m83237ED3AD0D42FDA063942F213F17710F4493CF (void);
// 0x00000085 System.Boolean Grpc.Core.Metadata::get_IsReadOnly()
extern void Metadata_get_IsReadOnly_m7144018B362CD6C6142CA27B90059C44A9AF88F2 (void);
// 0x00000086 System.Boolean Grpc.Core.Metadata::Remove(Grpc.Core.Metadata/Entry)
extern void Metadata_Remove_mF8A95BBB6AB83231BC3B3D2FACDCD88B3B6A86FC (void);
// 0x00000087 System.Collections.Generic.IEnumerator`1<Grpc.Core.Metadata/Entry> Grpc.Core.Metadata::GetEnumerator()
extern void Metadata_GetEnumerator_m70BC7FBF897C1633EEA26037DA63093C9F3B501D (void);
// 0x00000088 System.Collections.IEnumerator Grpc.Core.Metadata::System.Collections.IEnumerable.GetEnumerator()
extern void Metadata_System_Collections_IEnumerable_GetEnumerator_mE0286EA400F60B979EFE39B1D990848F4DB3D1AF (void);
// 0x00000089 System.Void Grpc.Core.Metadata::CheckWriteable()
extern void Metadata_CheckWriteable_mCA7F57399A61CD7B8E92BADEAFB6749B2D285F5A (void);
// 0x0000008A System.Void Grpc.Core.Metadata::.cctor()
extern void Metadata__cctor_m7EE6A9E581C749C165C9307AB10CA02EB3ACDE95 (void);
// 0x0000008B System.Void Grpc.Core.Metadata/Entry::.ctor(System.String,System.String,System.Byte[])
extern void Entry__ctor_m242B1476229A31F3C3532AF9BF2A15803C8009F2 (void);
// 0x0000008C System.String Grpc.Core.Metadata/Entry::get_Key()
extern void Entry_get_Key_m6406873E1A418B8493A3F6F43E02035E713E157C (void);
// 0x0000008D System.Boolean Grpc.Core.Metadata/Entry::get_IsBinary()
extern void Entry_get_IsBinary_mE71882A1E67B476A34AC9719203F383ACD8AD3C2 (void);
// 0x0000008E System.String Grpc.Core.Metadata/Entry::ToString()
extern void Entry_ToString_mAE96D3D3DE6FF1E8E931452D61A723075AC6C8C0 (void);
// 0x0000008F System.Byte[] Grpc.Core.Metadata/Entry::GetSerializedValueUnsafe()
extern void Entry_GetSerializedValueUnsafe_m52ACE4411AB1AABAF101E7DB81C28D3702AB6CC9 (void);
// 0x00000090 Grpc.Core.Metadata/Entry Grpc.Core.Metadata/Entry::CreateUnsafe(System.String,System.Byte[])
extern void Entry_CreateUnsafe_m6AB937749D4D611794958DFE52038D1A96FC789C (void);
// 0x00000091 System.Boolean Grpc.Core.Metadata/Entry::HasBinaryHeaderSuffix(System.String)
extern void Entry_HasBinaryHeaderSuffix_mA16AEB05C7375226FD9653D9BBD9619BFBFA88E5 (void);
// 0x00000092 System.Void Grpc.Core.Metadata/Entry::.cctor()
extern void Entry__cctor_m7A76A417C4CD54F19215AE8F893F3B880AFD2678 (void);
// 0x00000093 System.Void Grpc.Core.Method`2::.ctor(Grpc.Core.MethodType,System.String,System.String,Grpc.Core.Marshaller`1<TRequest>,Grpc.Core.Marshaller`1<TResponse>)
// 0x00000094 Grpc.Core.Marshaller`1<TRequest> Grpc.Core.Method`2::get_RequestMarshaller()
// 0x00000095 Grpc.Core.Marshaller`1<TResponse> Grpc.Core.Method`2::get_ResponseMarshaller()
// 0x00000096 System.String Grpc.Core.Method`2::get_FullName()
// 0x00000097 System.String Grpc.Core.Method`2::GetFullName(System.String,System.String)
// 0x00000098 System.Void Grpc.Core.RpcException::.ctor(Grpc.Core.Status,Grpc.Core.Metadata)
extern void RpcException__ctor_m8E8E2780D8EEE4FEE3C1B329E33BD7A77F8826BD (void);
// 0x00000099 Grpc.Core.Status Grpc.Core.RpcException::get_Status()
extern void RpcException_get_Status_m94B362BFA1DE6325D1474E63581B179D13CB772F (void);
// 0x0000009A System.Threading.Tasks.Task Grpc.Core.Server::KillAsync()
extern void Server_KillAsync_mEE5BBC5E318204DDC8AE5DDB431D728CBCA410FB (void);
// 0x0000009B System.Threading.Tasks.Task Grpc.Core.Server::ShutdownInternalAsync(System.Boolean)
extern void Server_ShutdownInternalAsync_m004F538FE49A8E34F91ED62840B0A45596094F08 (void);
// 0x0000009C System.Threading.Tasks.Task Grpc.Core.Server::ShutdownCompleteOrEnvironmentDeadAsync()
extern void Server_ShutdownCompleteOrEnvironmentDeadAsync_m1743441C21D162BACFC284D786175F14F3E68226 (void);
// 0x0000009D System.Void Grpc.Core.Server::DisposeHandle()
extern void Server_DisposeHandle_m65854C4A0031F454CFF40F0FA9BADE0020D5D43F (void);
// 0x0000009E System.Void Grpc.Core.Server::HandleServerShutdown(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void Server_HandleServerShutdown_mEAD942FCD249B6AEF32DA86B0CED122C80FB1E53 (void);
// 0x0000009F System.Void Grpc.Core.Server::.cctor()
extern void Server__cctor_m02127C89FEE5604AEF60CB5E79BA4478582E2A26 (void);
// 0x000000A0 System.Void Grpc.Core.Server/<ShutdownInternalAsync>d__32::MoveNext()
extern void U3CShutdownInternalAsyncU3Ed__32_MoveNext_m1566CF613F56E95FCC908D9E2BDE7E97154BDC5B (void);
// 0x000000A1 System.Void Grpc.Core.Server/<ShutdownInternalAsync>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_mBAF9615560F8F99805EE87FE50EAA1A5AE0E7F44 (void);
// 0x000000A2 System.Void Grpc.Core.Server/<ShutdownCompleteOrEnvironmentDeadAsync>d__33::MoveNext()
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_m2A4F57280EEAF69C40FF8A3709D5DC524E1CF177 (void);
// 0x000000A3 System.Void Grpc.Core.Server/<ShutdownCompleteOrEnvironmentDeadAsync>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_m10A2710C4114AF8D2A8C308C92293166414D4A1F (void);
// 0x000000A4 System.Void Grpc.Core.Status::.ctor(Grpc.Core.StatusCode,System.String)
extern void Status__ctor_m24B7DBD91C17D3A49A8445161FFEA196C945C268 (void);
// 0x000000A5 Grpc.Core.StatusCode Grpc.Core.Status::get_StatusCode()
extern void Status_get_StatusCode_mDD6E402914C3542C77CD5A475AE9F2D451F71B6D (void);
// 0x000000A6 System.String Grpc.Core.Status::get_Detail()
extern void Status_get_Detail_mEC53DC9F6C581A48AE1AB63C634571459D909CA8 (void);
// 0x000000A7 System.String Grpc.Core.Status::ToString()
extern void Status_ToString_mE23E3F9362C611D293FC0BE2BB2E0DA3C7BF6F04 (void);
// 0x000000A8 System.Void Grpc.Core.Status::.cctor()
extern void Status__cctor_m2ABAD7DDB3D325821AA25CA82BC4B8F68B16D032 (void);
// 0x000000A9 System.Void Grpc.Core.WriteOptions::.ctor(Grpc.Core.WriteFlags)
extern void WriteOptions__ctor_m949AB76994DD197FAE47945B00BBF3251576B5CE (void);
// 0x000000AA Grpc.Core.WriteFlags Grpc.Core.WriteOptions::get_Flags()
extern void WriteOptions_get_Flags_m525076B776383933632DC69FBAF364A033B4FB57 (void);
// 0x000000AB System.Void Grpc.Core.WriteOptions::.cctor()
extern void WriteOptions__cctor_mC03D17CD793CBC379323FA8FA6682458C8A6AE31 (void);
// 0x000000AC System.Void Grpc.Core.Utils.GrpcPreconditions::CheckArgument(System.Boolean)
extern void GrpcPreconditions_CheckArgument_mA723983A3B4EC1EAB33694EFB08063FE8E20DCAC (void);
// 0x000000AD System.Void Grpc.Core.Utils.GrpcPreconditions::CheckArgument(System.Boolean,System.String)
extern void GrpcPreconditions_CheckArgument_m373B57B91A5BF6F190274633BB71BE35742D4F9E (void);
// 0x000000AE T Grpc.Core.Utils.GrpcPreconditions::CheckNotNull(T)
// 0x000000AF T Grpc.Core.Utils.GrpcPreconditions::CheckNotNull(T,System.String)
// 0x000000B0 System.Void Grpc.Core.Utils.GrpcPreconditions::CheckState(System.Boolean)
extern void GrpcPreconditions_CheckState_m9C04796062CF98653CA9049CFD5F86951E02C9EE (void);
// 0x000000B1 System.Void Grpc.Core.Utils.GrpcPreconditions::CheckState(System.Boolean,System.String)
extern void GrpcPreconditions_CheckState_m487E8372240985788633EC5040D74ACD64D9F952 (void);
// 0x000000B2 System.Void Grpc.Core.Profiling.IProfiler::Begin(System.String)
// 0x000000B3 System.Void Grpc.Core.Profiling.IProfiler::End(System.String)
// 0x000000B4 System.Void Grpc.Core.Profiling.ProfilerEntry::.ctor(Grpc.Core.Internal.Timespec,Grpc.Core.Profiling.ProfilerEntry/Type,System.String)
extern void ProfilerEntry__ctor_m3FF1E12C83AA8248E759F953AEF5E937157FC000 (void);
// 0x000000B5 System.String Grpc.Core.Profiling.ProfilerEntry::ToString()
extern void ProfilerEntry_ToString_m05EE211900D090352DF336B1341CD45AE0BE905F (void);
// 0x000000B6 System.String Grpc.Core.Profiling.ProfilerEntry::GetTypeAbbreviation(Grpc.Core.Profiling.ProfilerEntry/Type)
extern void ProfilerEntry_GetTypeAbbreviation_mB9E2EE0E4784289B0E260603E679AC7ED1CE7788 (void);
// 0x000000B7 Grpc.Core.Profiling.IProfiler Grpc.Core.Profiling.Profilers::ForCurrentThread()
extern void Profilers_ForCurrentThread_m4A7BEC0271981DFCFC6B682E677E732C5BE02EB6 (void);
// 0x000000B8 System.Void Grpc.Core.Profiling.Profilers::SetForCurrentThread(Grpc.Core.Profiling.IProfiler)
extern void Profilers_SetForCurrentThread_m1AB9FB82F30A772275494B7D3CA9B982F873AF09 (void);
// 0x000000B9 Grpc.Core.Profiling.ProfilerScope Grpc.Core.Profiling.Profilers::NewScope(Grpc.Core.Profiling.IProfiler,System.String)
extern void Profilers_NewScope_m8E74C335DA351E45A27B886A89B095BBAD27FC23 (void);
// 0x000000BA System.Void Grpc.Core.Profiling.Profilers::.cctor()
extern void Profilers__cctor_m9329BDDD2E3674471DA5791075DC67AD78A2879E (void);
// 0x000000BB System.Void Grpc.Core.Profiling.NopProfiler::Begin(System.String)
extern void NopProfiler_Begin_m66108B9847EF8344D3301C5947B81B3221080944 (void);
// 0x000000BC System.Void Grpc.Core.Profiling.NopProfiler::End(System.String)
extern void NopProfiler_End_mB9B43DC73A6EA3D7F0295593FA87FF1AD2545D96 (void);
// 0x000000BD System.Void Grpc.Core.Profiling.NopProfiler::.ctor()
extern void NopProfiler__ctor_m608FEEC2F703D8E6B1A13A6416EE3391F48FE82D (void);
// 0x000000BE System.Void Grpc.Core.Profiling.BasicProfiler::Begin(System.String)
extern void BasicProfiler_Begin_mE4B2E3B3AF1EA0A6ABD4DFAD0A48030D746DD6ED (void);
// 0x000000BF System.Void Grpc.Core.Profiling.BasicProfiler::End(System.String)
extern void BasicProfiler_End_m6BA67351699958FC01E3D30A6E54EE14C4D5A110 (void);
// 0x000000C0 System.Void Grpc.Core.Profiling.BasicProfiler::Dump(System.String)
extern void BasicProfiler_Dump_m7A5B3900BAEA24EE6315D01142A0539C2811374A (void);
// 0x000000C1 System.Void Grpc.Core.Profiling.BasicProfiler::Dump(System.IO.TextWriter)
extern void BasicProfiler_Dump_mF6D7BDD08BAC27369FA938F3C2E416F6FB38A659 (void);
// 0x000000C2 System.Void Grpc.Core.Profiling.BasicProfiler::AddEntry(Grpc.Core.Profiling.ProfilerEntry)
extern void BasicProfiler_AddEntry_m60899C61B6E4F8AE1CBCE4B0D14255CB18FD077F (void);
// 0x000000C3 System.Void Grpc.Core.Profiling.ProfilerScope::.ctor(Grpc.Core.Profiling.IProfiler,System.String)
extern void ProfilerScope__ctor_m483C2898546B1C5F86C967A95141AA30D10275CE (void);
// 0x000000C4 System.Void Grpc.Core.Profiling.ProfilerScope::Dispose()
extern void ProfilerScope_Dispose_m035AE616C0C95C33177C91A7F362CC51B68F23E6 (void);
// 0x000000C5 System.Void Grpc.Core.Logging.ConsoleLogger::.ctor()
extern void ConsoleLogger__ctor_mE369C7DD6DCD07EFFC1EB47BAF710945B8EA5747 (void);
// 0x000000C6 System.Void Grpc.Core.Logging.ConsoleLogger::.ctor(System.Type)
extern void ConsoleLogger__ctor_m3DBAD5398DF090E3D59D44C72A40508A8D1097BC (void);
// 0x000000C7 Grpc.Core.Logging.ILogger Grpc.Core.Logging.ConsoleLogger::ForType()
// 0x000000C8 System.Void Grpc.Core.Logging.ConsoleLogger/<>c::.cctor()
extern void U3CU3Ec__cctor_m239B8B59651722D715C2E26AD61578E647BEEBF0 (void);
// 0x000000C9 System.Void Grpc.Core.Logging.ConsoleLogger/<>c::.ctor()
extern void U3CU3Ec__ctor_mDB152F4DD2D58370C816BF22A62175F30E2F7854 (void);
// 0x000000CA System.IO.TextWriter Grpc.Core.Logging.ConsoleLogger/<>c::<.ctor>b__1_0()
extern void U3CU3Ec_U3C_ctorU3Eb__1_0_m6BD07984B31AC91AD8BE47A330F9B02C7EF38DEA (void);
// 0x000000CB Grpc.Core.Logging.ILogger Grpc.Core.Logging.ILogger::ForType()
// 0x000000CC System.Void Grpc.Core.Logging.ILogger::Debug(System.String)
// 0x000000CD System.Void Grpc.Core.Logging.ILogger::Debug(System.String,System.Object[])
// 0x000000CE System.Void Grpc.Core.Logging.ILogger::Info(System.String)
// 0x000000CF System.Void Grpc.Core.Logging.ILogger::Warning(System.String,System.Object[])
// 0x000000D0 System.Void Grpc.Core.Logging.ILogger::Error(System.String)
// 0x000000D1 System.Void Grpc.Core.Logging.ILogger::Error(System.Exception,System.String)
// 0x000000D2 System.Void Grpc.Core.Logging.LogLevelFilterLogger::.ctor(Grpc.Core.Logging.ILogger,Grpc.Core.Logging.LogLevel)
extern void LogLevelFilterLogger__ctor_m0C8C22BEE1D930984B355F7E658EC0C920CBD7EA (void);
// 0x000000D3 System.Void Grpc.Core.Logging.LogLevelFilterLogger::.ctor(Grpc.Core.Logging.ILogger,Grpc.Core.Logging.LogLevel,System.Boolean)
extern void LogLevelFilterLogger__ctor_m0D729C9CB3BF2D63D18C6A15E016C5AE7EA2EC59 (void);
// 0x000000D4 Grpc.Core.Logging.ILogger Grpc.Core.Logging.LogLevelFilterLogger::ForType()
// 0x000000D5 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Debug(System.String)
extern void LogLevelFilterLogger_Debug_mC7B63DBD3E70300E442160D4BC3C8E9AA78FC93C (void);
// 0x000000D6 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Debug(System.String,System.Object[])
extern void LogLevelFilterLogger_Debug_m06FE192F3617DFF1F234E7B113E4A1CB342E7F54 (void);
// 0x000000D7 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Info(System.String)
extern void LogLevelFilterLogger_Info_mFA3421A072F6D65F7895BBAA2CEE814B10A260D7 (void);
// 0x000000D8 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Warning(System.String,System.Object[])
extern void LogLevelFilterLogger_Warning_m92FBC925968A294B9E3C788E3945AD90EB6A97C2 (void);
// 0x000000D9 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Error(System.String)
extern void LogLevelFilterLogger_Error_m8297B845D513ACC6182A38C498B4BFCF4EEF2CFD (void);
// 0x000000DA System.Void Grpc.Core.Logging.LogLevelFilterLogger::Error(System.Exception,System.String)
extern void LogLevelFilterLogger_Error_m28D5CC4CBE4E26A93D4F1409EB4BA5E19E6931E6 (void);
// 0x000000DB Grpc.Core.Logging.LogLevel Grpc.Core.Logging.LogLevelFilterLogger::GetLogLevelFromEnvironment(Grpc.Core.Logging.LogLevel,System.Boolean)
extern void LogLevelFilterLogger_GetLogLevelFromEnvironment_m609D6A17D0EDBBA72CDBF1EC7BB36FCCAF0E227D (void);
// 0x000000DC System.Void Grpc.Core.Logging.TextWriterLogger::.ctor(System.Func`1<System.IO.TextWriter>,System.Type)
extern void TextWriterLogger__ctor_mBED6509536AA9FF73555B924E42D1DFA4EA0C94F (void);
// 0x000000DD Grpc.Core.Logging.ILogger Grpc.Core.Logging.TextWriterLogger::ForType()
// 0x000000DE System.Void Grpc.Core.Logging.TextWriterLogger::Debug(System.String)
extern void TextWriterLogger_Debug_m872C644E122AC35FFEF341D3BF77A8118F6324A2 (void);
// 0x000000DF System.Void Grpc.Core.Logging.TextWriterLogger::Debug(System.String,System.Object[])
extern void TextWriterLogger_Debug_m23C523D56DFA60FDE24FFB6F926E7341F3FCCC25 (void);
// 0x000000E0 System.Void Grpc.Core.Logging.TextWriterLogger::Info(System.String)
extern void TextWriterLogger_Info_mDF9B71E5B9992E521D90ED52EF3876860E96C9DA (void);
// 0x000000E1 System.Void Grpc.Core.Logging.TextWriterLogger::Warning(System.String)
extern void TextWriterLogger_Warning_mEBFEE177BB27FCB0CFA390B16A4DE0F27618201A (void);
// 0x000000E2 System.Void Grpc.Core.Logging.TextWriterLogger::Warning(System.String,System.Object[])
extern void TextWriterLogger_Warning_mF0B3D508F336BF9AFF942C9FC8FDB88515898D85 (void);
// 0x000000E3 System.Void Grpc.Core.Logging.TextWriterLogger::Error(System.String)
extern void TextWriterLogger_Error_mE90FD2105548FFA10B5798DF1E6E80B316518DD5 (void);
// 0x000000E4 System.Void Grpc.Core.Logging.TextWriterLogger::Error(System.Exception,System.String)
extern void TextWriterLogger_Error_m223C8EC416F14045F6E87BD7444EE9923E0A93C3 (void);
// 0x000000E5 System.Type Grpc.Core.Logging.TextWriterLogger::get_AssociatedType()
extern void TextWriterLogger_get_AssociatedType_m6F886923B629230DD38C168B2E12081243C37049 (void);
// 0x000000E6 System.Void Grpc.Core.Logging.TextWriterLogger::Log(System.String,System.String)
extern void TextWriterLogger_Log_m4DB66F319F370D049EFF4B4D9E138305A882C770 (void);
// 0x000000E7 System.Void Grpc.Core.Internal.AsyncCall`2::.ctor(Grpc.Core.CallInvocationDetails`2<TRequest,TResponse>)
// 0x000000E8 TResponse Grpc.Core.Internal.AsyncCall`2::UnaryCall(TRequest)
// 0x000000E9 System.Void Grpc.Core.Internal.AsyncCall`2::OnAfterReleaseResources()
// 0x000000EA System.Boolean Grpc.Core.Internal.AsyncCall`2::get_IsClient()
// 0x000000EB System.Exception Grpc.Core.Internal.AsyncCall`2::GetRpcExceptionClientOnly()
// 0x000000EC System.Void Grpc.Core.Internal.AsyncCall`2::Initialize(Grpc.Core.Internal.CompletionQueueSafeHandle)
// 0x000000ED Grpc.Core.Internal.INativeCall Grpc.Core.Internal.AsyncCall`2::CreateNativeCall(Grpc.Core.Internal.CompletionQueueSafeHandle)
// 0x000000EE System.Void Grpc.Core.Internal.AsyncCall`2::RegisterCancellationCallback()
// 0x000000EF Grpc.Core.WriteFlags Grpc.Core.Internal.AsyncCall`2::GetWriteFlagsForCall()
// 0x000000F0 System.Void Grpc.Core.Internal.AsyncCall`2::HandleReceivedResponseHeaders(System.Boolean,Grpc.Core.Metadata)
// 0x000000F1 System.Void Grpc.Core.Internal.AsyncCall`2::HandleUnaryResponse(System.Boolean,Grpc.Core.Internal.ClientSideStatus,System.Byte[],Grpc.Core.Metadata)
// 0x000000F2 System.Void Grpc.Core.Internal.AsyncCall`2::HandleFinished(System.Boolean,Grpc.Core.Internal.ClientSideStatus)
// 0x000000F3 System.Void Grpc.Core.Internal.AsyncCall`2::Grpc.Core.Internal.IUnaryResponseClientCallback.OnUnaryResponseClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus,System.Byte[],Grpc.Core.Metadata)
// 0x000000F4 System.Void Grpc.Core.Internal.AsyncCall`2::Grpc.Core.Internal.IReceivedStatusOnClientCallback.OnReceivedStatusOnClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus)
// 0x000000F5 System.Void Grpc.Core.Internal.AsyncCall`2::Grpc.Core.Internal.IReceivedResponseHeadersCallback.OnReceivedResponseHeaders(System.Boolean,Grpc.Core.Metadata)
// 0x000000F6 System.Void Grpc.Core.Internal.AsyncCall`2::.cctor()
// 0x000000F7 System.Void Grpc.Core.Internal.AsyncCall`2::<RegisterCancellationCallback>b__34_0()
// 0x000000F8 System.Void Grpc.Core.Internal.AsyncCallBase`2::.ctor(System.Func`2<TWrite,System.Byte[]>,System.Func`2<System.Byte[],TRead>)
// 0x000000F9 System.Void Grpc.Core.Internal.AsyncCallBase`2::Cancel()
// 0x000000FA System.Void Grpc.Core.Internal.AsyncCallBase`2::CancelWithStatus(Grpc.Core.Status)
// 0x000000FB System.Void Grpc.Core.Internal.AsyncCallBase`2::InitializeInternal(Grpc.Core.Internal.INativeCall)
// 0x000000FC System.Boolean Grpc.Core.Internal.AsyncCallBase`2::ReleaseResourcesIfPossible()
// 0x000000FD System.Boolean Grpc.Core.Internal.AsyncCallBase`2::get_IsClient()
// 0x000000FE System.Exception Grpc.Core.Internal.AsyncCallBase`2::GetRpcExceptionClientOnly()
// 0x000000FF System.Void Grpc.Core.Internal.AsyncCallBase`2::ReleaseResources()
// 0x00000100 System.Void Grpc.Core.Internal.AsyncCallBase`2::OnAfterReleaseResources()
// 0x00000101 System.Byte[] Grpc.Core.Internal.AsyncCallBase`2::UnsafeSerialize(TWrite)
// 0x00000102 System.Exception Grpc.Core.Internal.AsyncCallBase`2::TryDeserialize(System.Byte[],TRead&)
// 0x00000103 System.Void Grpc.Core.Internal.AsyncCallBase`2::HandleSendFinished(System.Boolean)
// 0x00000104 System.Void Grpc.Core.Internal.AsyncCallBase`2::HandleReadFinished(System.Boolean,System.Byte[])
// 0x00000105 System.Void Grpc.Core.Internal.AsyncCallBase`2::Grpc.Core.Internal.ISendCompletionCallback.OnSendCompletion(System.Boolean)
// 0x00000106 System.Void Grpc.Core.Internal.AsyncCallBase`2::Grpc.Core.Internal.IReceivedMessageCallback.OnReceivedMessage(System.Boolean,System.Byte[])
// 0x00000107 System.Void Grpc.Core.Internal.AsyncCallBase`2::.cctor()
// 0x00000108 System.Void Grpc.Core.Internal.AtomicCounter::.ctor(System.Int64)
extern void AtomicCounter__ctor_m7974CF7B21105692BB74D973CA52F9DB2076BA12 (void);
// 0x00000109 System.Int64 Grpc.Core.Internal.AtomicCounter::Increment()
extern void AtomicCounter_Increment_m0D73151AF41FF0B7C276CD2EE38633F8BADFD402 (void);
// 0x0000010A System.Void Grpc.Core.Internal.AtomicCounter::IncrementIfNonzero(System.Boolean&)
extern void AtomicCounter_IncrementIfNonzero_m40E20636B6DDF0F0805EF6831FFA3D98C8170E8F (void);
// 0x0000010B System.Int64 Grpc.Core.Internal.AtomicCounter::Decrement()
extern void AtomicCounter_Decrement_mB8A946D434BA4CEC3D841666A645D6E1AE6097E5 (void);
// 0x0000010C System.Int64 Grpc.Core.Internal.AtomicCounter::get_Count()
extern void AtomicCounter_get_Count_m8F68E0BC018A8092C7DA5AC8F8724E4EE456B081 (void);
// 0x0000010D System.Boolean Grpc.Core.Internal.AuthContextSafeHandle::ReleaseHandle()
extern void AuthContextSafeHandle_ReleaseHandle_mEC07C82226C75A859AB024D7989C01136E2D23B9 (void);
// 0x0000010E System.Void Grpc.Core.Internal.AuthContextSafeHandle::.cctor()
extern void AuthContextSafeHandle__cctor_m5F478B967E1F78CAAC522DE90AE293298FD6B42C (void);
// 0x0000010F System.Void Grpc.Core.Internal.IOpCompletionCallback::OnComplete(System.Boolean)
// 0x00000110 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.BatchContextSafeHandle::Create()
extern void BatchContextSafeHandle_Create_m1CAD2643CDCC821FB45FA633949267556F737D94 (void);
// 0x00000111 System.IntPtr Grpc.Core.Internal.BatchContextSafeHandle::get_Handle()
extern void BatchContextSafeHandle_get_Handle_m24B8D1E744A4F7DD138CBD94831648A739646FF0 (void);
// 0x00000112 System.Void Grpc.Core.Internal.BatchContextSafeHandle::SetReturnToPoolAction(System.Action`1<Grpc.Core.Internal.BatchContextSafeHandle>)
extern void BatchContextSafeHandle_SetReturnToPoolAction_m1428992336300AA5AA23EE93963F7EF8E0123BF3 (void);
// 0x00000113 System.Void Grpc.Core.Internal.BatchContextSafeHandle::SetCompletionCallback(Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void BatchContextSafeHandle_SetCompletionCallback_m15A78BBA9A0001228856D0CF7D6D284EAFB0F792 (void);
// 0x00000114 Grpc.Core.Metadata Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedInitialMetadata()
extern void BatchContextSafeHandle_GetReceivedInitialMetadata_m153A2CEC77A6B3BAF300DA8C016139E732D8C89A (void);
// 0x00000115 Grpc.Core.Internal.ClientSideStatus Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedStatusOnClient()
extern void BatchContextSafeHandle_GetReceivedStatusOnClient_m414D5F5FAD7B44F036AC394A1D3C147E3238CF01 (void);
// 0x00000116 System.Byte[] Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedMessage()
extern void BatchContextSafeHandle_GetReceivedMessage_m57A63678F5A42BCE2658F27F240AAE4F7704D7FC (void);
// 0x00000117 System.Boolean Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedCloseOnServerCancelled()
extern void BatchContextSafeHandle_GetReceivedCloseOnServerCancelled_mAD912E3E23EE173CCA7ADEBD71FCFCB9B4308769 (void);
// 0x00000118 System.Void Grpc.Core.Internal.BatchContextSafeHandle::Recycle()
extern void BatchContextSafeHandle_Recycle_mC78BBE1ED115F26CFE6282CC4DAAC51AA00DA190 (void);
// 0x00000119 System.Boolean Grpc.Core.Internal.BatchContextSafeHandle::ReleaseHandle()
extern void BatchContextSafeHandle_ReleaseHandle_m763FB324C880F482890467965D65176B9718EC1C (void);
// 0x0000011A System.Void Grpc.Core.Internal.BatchContextSafeHandle::Grpc.Core.Internal.IOpCompletionCallback.OnComplete(System.Boolean)
extern void BatchContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_m8F04B8BEE65461BA669E264DCD5C63B426B02C38 (void);
// 0x0000011B System.Void Grpc.Core.Internal.BatchContextSafeHandle::.cctor()
extern void BatchContextSafeHandle__cctor_m026BE4A6E60CE8CF37F3497AE266A47A5726E462 (void);
// 0x0000011C System.Void Grpc.Core.Internal.BatchContextSafeHandle/CompletionCallbackData::.ctor(Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void CompletionCallbackData__ctor_m3729AC1E1BA8567E5B22FF19858BAEA497CA049D (void);
// 0x0000011D Grpc.Core.Internal.BatchCompletionDelegate Grpc.Core.Internal.BatchContextSafeHandle/CompletionCallbackData::get_Callback()
extern void CompletionCallbackData_get_Callback_mAD7916AA2B108E70FEA7D2B0A427DA95B968B127 (void);
// 0x0000011E System.Object Grpc.Core.Internal.BatchContextSafeHandle/CompletionCallbackData::get_State()
extern void CompletionCallbackData_get_State_m1ABE57B421E8574ECC458DC5BD3AE65F61EAB8A5 (void);
// 0x0000011F System.Boolean Grpc.Core.Internal.CallCredentialsSafeHandle::ReleaseHandle()
extern void CallCredentialsSafeHandle_ReleaseHandle_mFB3E734C817E3A7C90A79C95272A8AD3673DA939 (void);
// 0x00000120 System.Void Grpc.Core.Internal.CallCredentialsSafeHandle::.cctor()
extern void CallCredentialsSafeHandle__cctor_m292547949A696C3122A0A890229D87D2FE9A9EE1 (void);
// 0x00000121 System.Void Grpc.Core.Internal.CallErrorExtensions::CheckOk(Grpc.Core.Internal.CallError)
extern void CallErrorExtensions_CheckOk_m5AA87AD51F966025A2B4C42BF4A10AC3E8413E17 (void);
// 0x00000122 System.Void Grpc.Core.Internal.CallSafeHandle::.ctor()
extern void CallSafeHandle__ctor_m517D908CD9F8CF08B3CD259692BC85699F8F1EA0 (void);
// 0x00000123 System.Void Grpc.Core.Internal.CallSafeHandle::Initialize(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void CallSafeHandle_Initialize_m7ACDB8416A8D713D43A52723FEB88D2ED0BB7E72 (void);
// 0x00000124 System.Void Grpc.Core.Internal.CallSafeHandle::SetCredentials(Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void CallSafeHandle_SetCredentials_m9215165F4A1B53DDB5AA9E569A4857F365B8A796 (void);
// 0x00000125 System.Void Grpc.Core.Internal.CallSafeHandle::StartUnary(Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void CallSafeHandle_StartUnary_m91DE725C4B6B1CDA1EDF5FEF7169D13C638A33E9 (void);
// 0x00000126 System.Void Grpc.Core.Internal.CallSafeHandle::Cancel()
extern void CallSafeHandle_Cancel_mC714A4502B12A357B02E430FBB4061436753D1FA (void);
// 0x00000127 System.Void Grpc.Core.Internal.CallSafeHandle::CancelWithStatus(Grpc.Core.Status)
extern void CallSafeHandle_CancelWithStatus_mA3D328342B4379D8CB2F8258864887DC4DF511A2 (void);
// 0x00000128 System.Boolean Grpc.Core.Internal.CallSafeHandle::ReleaseHandle()
extern void CallSafeHandle_ReleaseHandle_m3285C7C1552867484F6FF19A2F20344B9604AFA9 (void);
// 0x00000129 System.Void Grpc.Core.Internal.CallSafeHandle::.cctor()
extern void CallSafeHandle__cctor_m3884B98858DAE789EB6DBBA68CAA9717ADB10283 (void);
// 0x0000012A System.Void Grpc.Core.Internal.CallSafeHandle/<>c::.cctor()
extern void U3CU3Ec__cctor_m286535C3B760F849D997FF100A00623DB6F5F9AE (void);
// 0x0000012B System.Void Grpc.Core.Internal.CallSafeHandle/<>c::.ctor()
extern void U3CU3Ec__ctor_mF9EFB64FA56C786276FA4BB10460EBBB95D4E441 (void);
// 0x0000012C System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_0(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_0_m82C46D8109DDB2DBE30D2656B4C4EE9A2EFD2016 (void);
// 0x0000012D System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_1(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_1_mEE0320FB56C3F92F1F37064083C69DFC32CABCBC (void);
// 0x0000012E System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_2(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_2_mD81A52C710336C9F1664D84B9A52904E07AEF3D2 (void);
// 0x0000012F System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_3(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_3_m259E1B4ED4803D23940995073E9E1D641261AAD5 (void);
// 0x00000130 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_4(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_4_mE75BBDB8045087F0DDD2B3CBE3F79ACEB1A33ABC (void);
// 0x00000131 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_5(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_5_m9E5419C2B72F810D28D8A4643C834A58EF5F3D2A (void);
// 0x00000132 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_6(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_6_m95845C67F16219C708A95DAB65ED597130908296 (void);
// 0x00000133 System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::.ctor()
extern void ChannelArgsSafeHandle__ctor_m65C166DECD9D8E2E00CFFBBD21B137D651E062F4 (void);
// 0x00000134 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.ChannelArgsSafeHandle::CreateNull()
extern void ChannelArgsSafeHandle_CreateNull_m9CC7537F72ADFAB4AD7460CFD19B54AD9B5DA9D1 (void);
// 0x00000135 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.ChannelArgsSafeHandle::Create(System.Int32)
extern void ChannelArgsSafeHandle_Create_m7CA50EDEDECAA72D6FF97492A7C819D4A88DFD55 (void);
// 0x00000136 System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::SetString(System.Int32,System.String,System.String)
extern void ChannelArgsSafeHandle_SetString_mBBEAF0C29D93FEBF6CF0B37DF3EDB4A1E1625C23 (void);
// 0x00000137 System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::SetInteger(System.Int32,System.String,System.Int32)
extern void ChannelArgsSafeHandle_SetInteger_m147968C034CD3F46E1517F8B61677816F44F844F (void);
// 0x00000138 System.Boolean Grpc.Core.Internal.ChannelArgsSafeHandle::ReleaseHandle()
extern void ChannelArgsSafeHandle_ReleaseHandle_mA202712485EAD2423B2AD4DC9EB8C20E42BCBDB1 (void);
// 0x00000139 System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::.cctor()
extern void ChannelArgsSafeHandle__cctor_m6A3B128CAC0F819FC5798A20F4606311C606E3AE (void);
// 0x0000013A System.Boolean Grpc.Core.Internal.ChannelCredentialsSafeHandle::ReleaseHandle()
extern void ChannelCredentialsSafeHandle_ReleaseHandle_mA6D137AE68CC5D0225A01C17B135CEA31C9D9A17 (void);
// 0x0000013B System.Void Grpc.Core.Internal.ChannelCredentialsSafeHandle::.cctor()
extern void ChannelCredentialsSafeHandle__cctor_m99066BFDA58BB602F8C5DDF1317E48BCE6BBBE08 (void);
// 0x0000013C Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.ChannelSafeHandle::CreateInsecure(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void ChannelSafeHandle_CreateInsecure_m0EC4330059BD7AF8049859F8C7BEDEAA57BF3DF0 (void);
// 0x0000013D Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.ChannelSafeHandle::CreateSecure(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void ChannelSafeHandle_CreateSecure_m152813B7EAA0C00FB20A2326E07EBB1B86107142 (void);
// 0x0000013E Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.ChannelSafeHandle::CreateCall(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void ChannelSafeHandle_CreateCall_mAE441BC92399AC2691E59C5F1943933780FE5258 (void);
// 0x0000013F Grpc.Core.ChannelState Grpc.Core.Internal.ChannelSafeHandle::CheckConnectivityState(System.Boolean)
extern void ChannelSafeHandle_CheckConnectivityState_m7656F44A598692C175853CF4F8BDBF13C531C1BC (void);
// 0x00000140 System.Void Grpc.Core.Internal.ChannelSafeHandle::WatchConnectivityState(Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void ChannelSafeHandle_WatchConnectivityState_m84E8D47750DF72B7F68CE75F5FA840298EECA504 (void);
// 0x00000141 System.Boolean Grpc.Core.Internal.ChannelSafeHandle::ReleaseHandle()
extern void ChannelSafeHandle_ReleaseHandle_m586DBE44DDD72ECF178B9E1FC418391ADC34F725 (void);
// 0x00000142 System.Void Grpc.Core.Internal.ChannelSafeHandle::.cctor()
extern void ChannelSafeHandle__cctor_m13E84E09FDE041581E9565D8592AC75FC5A48D3D (void);
// 0x00000143 System.Void Grpc.Core.Internal.ClientSideStatus::.ctor(Grpc.Core.Status,Grpc.Core.Metadata)
extern void ClientSideStatus__ctor_mD608389BE52E1457F765F4FB017F52E15AEB2AB6 (void);
// 0x00000144 Grpc.Core.Status Grpc.Core.Internal.ClientSideStatus::get_Status()
extern void ClientSideStatus_get_Status_mCEA26A40C7599141284FA8B0F351C0F65F2D6A3A (void);
// 0x00000145 Grpc.Core.Metadata Grpc.Core.Internal.ClientSideStatus::get_Trailers()
extern void ClientSideStatus_get_Trailers_mF94B423EC5844577EEA4C11EB433DCE8D9CC263A (void);
// 0x00000146 System.Void Grpc.Core.Internal.CompletionQueueEvent::.cctor()
extern void CompletionQueueEvent__cctor_mC75B41668358EA7626D899D2AC540A0729BC25B4 (void);
// 0x00000147 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.CompletionQueueSafeHandle::CreateSync()
extern void CompletionQueueSafeHandle_CreateSync_mF33BCC0312DCEE775BBCACE85ADD539F6BE56D27 (void);
// 0x00000148 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.CompletionQueueSafeHandle::CreateAsync(Grpc.Core.Internal.CompletionRegistry)
extern void CompletionQueueSafeHandle_CreateAsync_m4BBAAD9A297ED3920CE92DF47ED8F169D4C736A5 (void);
// 0x00000149 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.CompletionQueueSafeHandle::Next()
extern void CompletionQueueSafeHandle_Next_m7C670BCFF808EA9297B57D6F9E30D0640118113F (void);
// 0x0000014A Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.CompletionQueueSafeHandle::Pluck(System.IntPtr)
extern void CompletionQueueSafeHandle_Pluck_m88835BE76FCD49E5FBE1CAB94ED1BBEAEF9E0B81 (void);
// 0x0000014B Grpc.Core.Internal.CompletionQueueSafeHandle/UsageScope Grpc.Core.Internal.CompletionQueueSafeHandle::NewScope()
extern void CompletionQueueSafeHandle_NewScope_m827904599913BE7C1B1D132082E76CD3D12E2622 (void);
// 0x0000014C System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::Shutdown()
extern void CompletionQueueSafeHandle_Shutdown_mC5B14144CD0CD0C672291A134C1DE0D6BD6BA75A (void);
// 0x0000014D Grpc.Core.Internal.CompletionRegistry Grpc.Core.Internal.CompletionQueueSafeHandle::get_CompletionRegistry()
extern void CompletionQueueSafeHandle_get_CompletionRegistry_mEEA1B6DDB1393B93925877FB612BE441DB904137 (void);
// 0x0000014E System.Boolean Grpc.Core.Internal.CompletionQueueSafeHandle::ReleaseHandle()
extern void CompletionQueueSafeHandle_ReleaseHandle_mB8BAD8D2179520B4FC242345AA9D75ABDFC07EA9 (void);
// 0x0000014F System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::DecrementShutdownRefcount()
extern void CompletionQueueSafeHandle_DecrementShutdownRefcount_m5DE45FFE11B6ADF840FA62BD9CF4DBF546182E64 (void);
// 0x00000150 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::BeginOp()
extern void CompletionQueueSafeHandle_BeginOp_m90069DD4B388790C9F00D50B1700E31D5C961876 (void);
// 0x00000151 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::EndOp()
extern void CompletionQueueSafeHandle_EndOp_m32107AFE26F1C752CE3682920F2F0D964C579A12 (void);
// 0x00000152 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::.cctor()
extern void CompletionQueueSafeHandle__cctor_mA75471436B491E27820E787FB29DB9206EB12C1B (void);
// 0x00000153 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle/UsageScope::.ctor(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void UsageScope__ctor_m1574271335AFBD32A321477847586059B52C67D1 (void);
// 0x00000154 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle/UsageScope::Dispose()
extern void UsageScope_Dispose_m18D3245A5F32184D31FC837A4D65BCD75B92FB97 (void);
// 0x00000155 System.Void Grpc.Core.Internal.BatchCompletionDelegate::.ctor(System.Object,System.IntPtr)
extern void BatchCompletionDelegate__ctor_mD9C9749E54B8FE1A8111FD91EF1867BB48DDD58A (void);
// 0x00000156 System.Void Grpc.Core.Internal.BatchCompletionDelegate::Invoke(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void BatchCompletionDelegate_Invoke_mEFAE8E58DF061573F70A6AF265C26E6F72449332 (void);
// 0x00000157 System.IAsyncResult Grpc.Core.Internal.BatchCompletionDelegate::BeginInvoke(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object,System.AsyncCallback,System.Object)
extern void BatchCompletionDelegate_BeginInvoke_m8C231161FB5AD53C13856255256181639EFBDE38 (void);
// 0x00000158 System.Void Grpc.Core.Internal.BatchCompletionDelegate::EndInvoke(System.IAsyncResult)
extern void BatchCompletionDelegate_EndInvoke_m935FDE47E582A67513CCB7C7E229BDB23F50C9E7 (void);
// 0x00000159 System.Void Grpc.Core.Internal.RequestCallCompletionDelegate::.ctor(System.Object,System.IntPtr)
extern void RequestCallCompletionDelegate__ctor_mF8767BDC66E420EB9518BA042890EE6E3253A724 (void);
// 0x0000015A System.Void Grpc.Core.Internal.RequestCallCompletionDelegate::Invoke(System.Boolean,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void RequestCallCompletionDelegate_Invoke_mF972A346DA8708BEDB74E81930DD20325AE42C59 (void);
// 0x0000015B System.IAsyncResult Grpc.Core.Internal.RequestCallCompletionDelegate::BeginInvoke(System.Boolean,Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void RequestCallCompletionDelegate_BeginInvoke_m1EAD48F25CB5FD1A1C8AB3686ECFA48F0C22841D (void);
// 0x0000015C System.Void Grpc.Core.Internal.RequestCallCompletionDelegate::EndInvoke(System.IAsyncResult)
extern void RequestCallCompletionDelegate_EndInvoke_m86EC270C4FA89B024266C91C0F048C92799CD0A2 (void);
// 0x0000015D System.Void Grpc.Core.Internal.CompletionRegistry::.ctor(Grpc.Core.GrpcEnvironment,System.Func`1<Grpc.Core.Internal.BatchContextSafeHandle>,System.Func`1<Grpc.Core.Internal.RequestCallContextSafeHandle>)
extern void CompletionRegistry__ctor_m0C3430B9BEE90A1E759FB57372B6177186F4BDF3 (void);
// 0x0000015E System.Void Grpc.Core.Internal.CompletionRegistry::Register(System.IntPtr,Grpc.Core.Internal.IOpCompletionCallback)
extern void CompletionRegistry_Register_m21602F31459239434329B2BA51313D6235BCC9E9 (void);
// 0x0000015F Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.CompletionRegistry::RegisterBatchCompletion(Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void CompletionRegistry_RegisterBatchCompletion_m34E5B2CB0215A45A8733FB6A275C0CEF04D69D25 (void);
// 0x00000160 Grpc.Core.Internal.IOpCompletionCallback Grpc.Core.Internal.CompletionRegistry::Extract(System.IntPtr)
extern void CompletionRegistry_Extract_m41A040F8CCAA00D8AA362D91496A5584CFCCB8CD (void);
// 0x00000161 System.Void Grpc.Core.Internal.CompletionRegistry::.cctor()
extern void CompletionRegistry__cctor_mBA505984292944585C0B9A8D8475A0DF9268B54C (void);
// 0x00000162 System.Boolean Grpc.Core.Internal.CompletionRegistry/IntPtrComparer::Equals(System.IntPtr,System.IntPtr)
extern void IntPtrComparer_Equals_m28A047A8A6E91B6B7B9B8E40D83ADFA7C62FCE36 (void);
// 0x00000163 System.Int32 Grpc.Core.Internal.CompletionRegistry/IntPtrComparer::GetHashCode(System.IntPtr)
extern void IntPtrComparer_GetHashCode_m098B705735AB80192B3F7FC96DAB91F8DA955207 (void);
// 0x00000164 System.Void Grpc.Core.Internal.CompletionRegistry/IntPtrComparer::.ctor()
extern void IntPtrComparer__ctor_mF482E04E2D2E979116AF05605052BB0577E2C854 (void);
// 0x00000165 System.Boolean Grpc.Core.Internal.CStringSafeHandle::ReleaseHandle()
extern void CStringSafeHandle_ReleaseHandle_m2BAC1A4C51E33DCF5774B0844B52E80FEEC360CA (void);
// 0x00000166 System.Void Grpc.Core.Internal.CStringSafeHandle::.cctor()
extern void CStringSafeHandle__cctor_m69DEAE4EF8D8A7C8DDD054DD4367DD8EB2C74BA8 (void);
// 0x00000167 System.Void Grpc.Core.Internal.DebugStats::CheckOK()
extern void DebugStats_CheckOK_m098392C37999A8EECE4CCEA14D56F6F93A276223 (void);
// 0x00000168 System.Void Grpc.Core.Internal.DebugStats::DebugWarning(System.String)
extern void DebugStats_DebugWarning_m55601B475C393BD6E5BA71F0A3D05B512EF182ED (void);
// 0x00000169 System.Void Grpc.Core.Internal.DebugStats::.ctor()
extern void DebugStats__ctor_m1F30B51352AD2266CEDCABEC955F4B0AD920F088 (void);
// 0x0000016A System.Void Grpc.Core.Internal.DefaultObjectPool`1::.ctor(System.Func`1<T>,System.Int32,System.Int32)
// 0x0000016B T Grpc.Core.Internal.DefaultObjectPool`1::Lease()
// 0x0000016C T Grpc.Core.Internal.DefaultObjectPool`1::LeaseInternal()
// 0x0000016D System.Void Grpc.Core.Internal.DefaultObjectPool`1::Return(T)
// 0x0000016E System.Void Grpc.Core.Internal.DefaultObjectPool`1::Dispose()
// 0x0000016F System.Void Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::.ctor(System.Int32)
// 0x00000170 System.Collections.Generic.Queue`1<T> Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::get_Queue()
// 0x00000171 System.Int32 Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::get_CreateBudget()
// 0x00000172 System.Void Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::set_CreateBudget(System.Int32)
// 0x00000173 System.Int32 Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::get_DisposeBudget()
// 0x00000174 System.Void Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::set_DisposeBudget(System.Int32)
// 0x00000175 System.Void Grpc.Core.Internal.DefaultObjectPool`1/<>c__DisplayClass9_0::.ctor()
// 0x00000176 Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData<T> Grpc.Core.Internal.DefaultObjectPool`1/<>c__DisplayClass9_0::<.ctor>b__0()
// 0x00000177 System.Void Grpc.Core.Internal.DefaultSslRootsOverride::Override(Grpc.Core.Internal.NativeMethods)
extern void DefaultSslRootsOverride_Override_m9F1E736961167B585C9C6827F6EE669ACADEF553 (void);
// 0x00000178 System.Void Grpc.Core.Internal.DefaultSslRootsOverride::.cctor()
extern void DefaultSslRootsOverride__cctor_mDE6F96FA261EF8A8E1C4F4B50348D11EB277E3C3 (void);
// 0x00000179 System.Void Grpc.Core.Internal.GrpcThreadPool::.ctor(Grpc.Core.GrpcEnvironment,System.Int32,System.Int32,System.Boolean)
extern void GrpcThreadPool__ctor_mA70A1F1CBCB8937A4ABEA5EE1FE2A85169785041 (void);
// 0x0000017A System.Void Grpc.Core.Internal.GrpcThreadPool::Start()
extern void GrpcThreadPool_Start_m143FE0D3A33F16606DB7210BD83E079283C99100 (void);
// 0x0000017B System.Threading.Tasks.Task Grpc.Core.Internal.GrpcThreadPool::StopAsync()
extern void GrpcThreadPool_StopAsync_m3BD6F361D81B809EA00AA157DE8D28C300CC27CA (void);
// 0x0000017C System.Boolean Grpc.Core.Internal.GrpcThreadPool::get_IsAlive()
extern void GrpcThreadPool_get_IsAlive_m23E6685AF3BE0DAED101F52585A0F5DDA0A69A94 (void);
// 0x0000017D System.Collections.Generic.IReadOnlyCollection`1<Grpc.Core.Internal.CompletionQueueSafeHandle> Grpc.Core.Internal.GrpcThreadPool::get_CompletionQueues()
extern void GrpcThreadPool_get_CompletionQueues_mADFBE1774095EE9385C0BF880C67CABD77D0A9A0 (void);
// 0x0000017E System.Threading.Thread Grpc.Core.Internal.GrpcThreadPool::CreateAndStartThread(System.Int32,Grpc.Core.Profiling.IProfiler)
extern void GrpcThreadPool_CreateAndStartThread_m92701F9D08073A3C6C4C715DA26501031ABC9248 (void);
// 0x0000017F System.Void Grpc.Core.Internal.GrpcThreadPool::RunHandlerLoop(Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Profiling.IProfiler)
extern void GrpcThreadPool_RunHandlerLoop_m2991ED3557D785AE77BFC5C8B3248132E66D847B (void);
// 0x00000180 System.Collections.Generic.IReadOnlyCollection`1<Grpc.Core.Internal.CompletionQueueSafeHandle> Grpc.Core.Internal.GrpcThreadPool::CreateCompletionQueueList(Grpc.Core.GrpcEnvironment,System.Int32)
extern void GrpcThreadPool_CreateCompletionQueueList_m3F59E746922590122432185D55A9E40EE13400B7 (void);
// 0x00000181 System.Void Grpc.Core.Internal.GrpcThreadPool::RunCompletionQueueEventCallback(Grpc.Core.Internal.IOpCompletionCallback,System.Boolean)
extern void GrpcThreadPool_RunCompletionQueueEventCallback_mFE555E698BD725531DEFDDB4053DFA73EB25CC3B (void);
// 0x00000182 System.Void Grpc.Core.Internal.GrpcThreadPool::.cctor()
extern void GrpcThreadPool__cctor_m5522C93E0F2C9C0AA3C4F17CD7A7671E49E591D6 (void);
// 0x00000183 System.Void Grpc.Core.Internal.GrpcThreadPool::<.ctor>b__15_0(System.Object)
extern void GrpcThreadPool_U3C_ctorU3Eb__15_0_m2F9B11D73FE160725973EBC39812C9D5C03313A9 (void);
// 0x00000184 System.Void Grpc.Core.Internal.GrpcThreadPool::<.ctor>b__15_1(System.Object)
extern void GrpcThreadPool_U3C_ctorU3Eb__15_1_m2ABFCF4FB032B9ABA5B2D561338FE76B445A8B9B (void);
// 0x00000185 System.Void Grpc.Core.Internal.GrpcThreadPool::<StopAsync>b__17_0()
extern void GrpcThreadPool_U3CStopAsyncU3Eb__17_0_m0924DB9AB9C89049AA861CF991358F3393ABB81B (void);
// 0x00000186 System.Void Grpc.Core.Internal.GrpcThreadPool/<>c::.cctor()
extern void U3CU3Ec__cctor_m86609044E0CD71D13C743BF08C5C3C5F25D31EE0 (void);
// 0x00000187 System.Void Grpc.Core.Internal.GrpcThreadPool/<>c::.ctor()
extern void U3CU3Ec__ctor_mCCBBD6408EE7EF38C4D767ABA3803CE2CEAF5D77 (void);
// 0x00000188 System.Boolean Grpc.Core.Internal.GrpcThreadPool/<>c::<get_IsAlive>b__19_0(System.Threading.Thread)
extern void U3CU3Ec_U3Cget_IsAliveU3Eb__19_0_m0BE48BB22B0E201982CAF31ADEBCD542678F2C9C (void);
// 0x00000189 System.Void Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass22_0::.ctor()
extern void U3CU3Ec__DisplayClass22_0__ctor_m8F090A93B57BC5303687D22D9EE54ED19CCF9D85 (void);
// 0x0000018A System.Void Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass22_0::<CreateAndStartThread>b__0()
extern void U3CU3Ec__DisplayClass22_0_U3CCreateAndStartThreadU3Eb__0_m98D8E52DCA9A79BC019154929A8D02E608D5AE06 (void);
// 0x0000018B System.Void Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_m96BE1FF8420CD5F1149C1CB111BC8385CE28EF6A (void);
// 0x0000018C Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass24_0::<CreateCompletionQueueList>b__0()
extern void U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__0_m26BCBB6761CB69D707828078D6366478EE5E27E8 (void);
// 0x0000018D Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass24_0::<CreateCompletionQueueList>b__1()
extern void U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__1_m406A62498077637D32A222E6BDCDF4B83296CCE2 (void);
// 0x0000018E System.Void Grpc.Core.Internal.IUnaryResponseClientCallback::OnUnaryResponseClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus,System.Byte[],Grpc.Core.Metadata)
// 0x0000018F System.Void Grpc.Core.Internal.IReceivedStatusOnClientCallback::OnReceivedStatusOnClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus)
// 0x00000190 System.Void Grpc.Core.Internal.IReceivedMessageCallback::OnReceivedMessage(System.Boolean,System.Byte[])
// 0x00000191 System.Void Grpc.Core.Internal.IReceivedResponseHeadersCallback::OnReceivedResponseHeaders(System.Boolean,Grpc.Core.Metadata)
// 0x00000192 System.Void Grpc.Core.Internal.ISendCompletionCallback::OnSendCompletion(System.Boolean)
// 0x00000193 System.Void Grpc.Core.Internal.ISendStatusFromServerCompletionCallback::OnSendStatusFromServerCompletion(System.Boolean)
// 0x00000194 System.Void Grpc.Core.Internal.IReceivedCloseOnServerCallback::OnReceivedCloseOnServer(System.Boolean,System.Boolean)
// 0x00000195 System.Void Grpc.Core.Internal.INativeCall::Cancel()
// 0x00000196 System.Void Grpc.Core.Internal.INativeCall::CancelWithStatus(Grpc.Core.Status)
// 0x00000197 System.Void Grpc.Core.Internal.INativeCall::StartUnary(Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
// 0x00000198 T Grpc.Core.Internal.IObjectPool`1::Lease()
// 0x00000199 System.Void Grpc.Core.Internal.IPooledObject`1::SetReturnToPoolAction(System.Action`1<T>)
// 0x0000019A System.String Grpc.Core.Internal.MarshalUtils::PtrToStringUTF8(System.IntPtr,System.Int32)
extern void MarshalUtils_PtrToStringUTF8_mF806393EC8674A0C51568CF50BF5A260D16AF624 (void);
// 0x0000019B System.Byte[] Grpc.Core.Internal.MarshalUtils::GetBytesASCII(System.String)
extern void MarshalUtils_GetBytesASCII_m8D4C209F8953940554262F415B82BCBB3ACEDA6F (void);
// 0x0000019C System.String Grpc.Core.Internal.MarshalUtils::GetStringASCII(System.Byte[])
extern void MarshalUtils_GetStringASCII_m8C2373EBB48EE89853102DD8F3E9780F42640A50 (void);
// 0x0000019D System.Void Grpc.Core.Internal.MarshalUtils::.cctor()
extern void MarshalUtils__cctor_m77852343E88BB0E78B0A8FA6E0A18DCA61EEDF47 (void);
// 0x0000019E System.Void Grpc.Core.Internal.MetadataArraySafeHandle::.ctor()
extern void MetadataArraySafeHandle__ctor_mAC67AB927B4070E5A08436037C0763FF93E134C2 (void);
// 0x0000019F Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.MetadataArraySafeHandle::Create(Grpc.Core.Metadata)
extern void MetadataArraySafeHandle_Create_m2039F33BAEDBCC3F13C1C1AA5303966CAD7E3F90 (void);
// 0x000001A0 Grpc.Core.Metadata Grpc.Core.Internal.MetadataArraySafeHandle::ReadMetadataFromPtrUnsafe(System.IntPtr)
extern void MetadataArraySafeHandle_ReadMetadataFromPtrUnsafe_mFFE4315DD0CE37D9019D0D78F83217B8D9911C48 (void);
// 0x000001A1 System.Boolean Grpc.Core.Internal.MetadataArraySafeHandle::ReleaseHandle()
extern void MetadataArraySafeHandle_ReleaseHandle_m3921F6D2E2ECAA0A5D8CB706E0B6ED7EA6C5B555 (void);
// 0x000001A2 System.Void Grpc.Core.Internal.MetadataArraySafeHandle::.cctor()
extern void MetadataArraySafeHandle__cctor_m09AE04E2D6066B23A3F86FAEF9EBBBB5509A43C9 (void);
// 0x000001A3 System.Void Grpc.Core.Internal.NativeExtension::.ctor()
extern void NativeExtension__ctor_mBB4876A1EFDD925A63B8E10EEDB0A262D51EC379 (void);
// 0x000001A4 Grpc.Core.Internal.NativeExtension Grpc.Core.Internal.NativeExtension::Get()
extern void NativeExtension_Get_mCEE2E00D7A73D38930E07FD802775F1DA19ABE3B (void);
// 0x000001A5 Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeExtension::get_NativeMethods()
extern void NativeExtension_get_NativeMethods_m05C9341D9219CFF6AEA1D1062D685F00EA83A76A (void);
// 0x000001A6 Grpc.Core.Internal.UnmanagedLibrary Grpc.Core.Internal.NativeExtension::Load()
extern void NativeExtension_Load_mD871AF4B177B28F64B369A3DD0311719E7898630 (void);
// 0x000001A7 System.String Grpc.Core.Internal.NativeExtension::GetAssemblyPath()
extern void NativeExtension_GetAssemblyPath_m6D34CEC76FC2A9000D140EFAE3C33C3CCA89F07B (void);
// 0x000001A8 System.Boolean Grpc.Core.Internal.NativeExtension::IsFileUri(System.String)
extern void NativeExtension_IsFileUri_m2E1B5E6AE93B2E23712DE794015FF00231006E1D (void);
// 0x000001A9 System.String Grpc.Core.Internal.NativeExtension::GetPlatformString()
extern void NativeExtension_GetPlatformString_mE45132A1105EA0F62E9E5EAF89F9973F4C5973AA (void);
// 0x000001AA System.String Grpc.Core.Internal.NativeExtension::GetArchitectureString()
extern void NativeExtension_GetArchitectureString_m716A1F66BC8E256C6E0387D74A401538ED7AB87A (void);
// 0x000001AB System.String Grpc.Core.Internal.NativeExtension::GetNativeLibraryFilename()
extern void NativeExtension_GetNativeLibraryFilename_m742C630AEABEDE23122AD70AFDEAE2089DA14F3B (void);
// 0x000001AC System.Void Grpc.Core.Internal.NativeExtension::.cctor()
extern void NativeExtension__cctor_m02340E1433DE008CCF16F1728F9D11543DDC1AE1 (void);
// 0x000001AD System.Void Grpc.Core.Internal.GprLogDelegate::.ctor(System.Object,System.IntPtr)
extern void GprLogDelegate__ctor_mF547E54638D8A9D265C45A4A5A30AAC5B78E44D0 (void);
// 0x000001AE System.Void Grpc.Core.Internal.GprLogDelegate::Invoke(System.IntPtr,System.Int32,System.UInt64,System.IntPtr,System.IntPtr)
extern void GprLogDelegate_Invoke_m0CDFE6CC78F9A7F2A0FD99AC42A456B8EB650C85 (void);
// 0x000001AF System.IAsyncResult Grpc.Core.Internal.GprLogDelegate::BeginInvoke(System.IntPtr,System.Int32,System.UInt64,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void GprLogDelegate_BeginInvoke_m02590F0678C0A3E62A1AD21D7C2DB475258C142B (void);
// 0x000001B0 System.Void Grpc.Core.Internal.GprLogDelegate::EndInvoke(System.IAsyncResult)
extern void GprLogDelegate_EndInvoke_m017982A8C8D4D865BFAF75E5099555C427A9DEA3 (void);
// 0x000001B1 System.Void Grpc.Core.Internal.NativeLogRedirector::Redirect(Grpc.Core.Internal.NativeMethods)
extern void NativeLogRedirector_Redirect_m3972FE39518E055D810F4D80B9F8503D84B61401 (void);
// 0x000001B2 System.Void Grpc.Core.Internal.NativeLogRedirector::HandleWrite(System.IntPtr,System.Int32,System.UInt64,System.IntPtr,System.IntPtr)
extern void NativeLogRedirector_HandleWrite_m9F113EBB49A1632924AD8A1EE47D76C9991DFF30 (void);
// 0x000001B3 System.Void Grpc.Core.Internal.NativeLogRedirector::.cctor()
extern void NativeLogRedirector__cctor_m8051C7F6DEF423DD51B69D877E6C87D5E7A8B91E (void);
// 0x000001B4 System.Void Grpc.Core.Internal.NativeMetadataInterceptor::.ctor(System.Object,System.IntPtr)
extern void NativeMetadataInterceptor__ctor_m4F872513EB7D0D32C5A0CEA37F514B231982E346 (void);
// 0x000001B5 System.Void Grpc.Core.Internal.NativeMetadataInterceptor::Invoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Boolean)
extern void NativeMetadataInterceptor_Invoke_m1C2BF147010A00C1BB34F1BFD6E1D32F8775A868 (void);
// 0x000001B6 System.IAsyncResult Grpc.Core.Internal.NativeMetadataInterceptor::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Boolean,System.AsyncCallback,System.Object)
extern void NativeMetadataInterceptor_BeginInvoke_mBF76CD7A1F0D40D474CA66DBC39632721392BDBB (void);
// 0x000001B7 System.Void Grpc.Core.Internal.NativeMetadataInterceptor::EndInvoke(System.IAsyncResult)
extern void NativeMetadataInterceptor_EndInvoke_m3EDFA5DE7B1D5B5DFEB0C493ABDDAE617FF9F9BB (void);
// 0x000001B8 System.Void Grpc.Core.Internal.NativeCallbackTestDelegate::.ctor(System.Object,System.IntPtr)
extern void NativeCallbackTestDelegate__ctor_mA61C490A4BB4CBEA9629393FE3B0665D6D305B89 (void);
// 0x000001B9 System.Void Grpc.Core.Internal.NativeCallbackTestDelegate::Invoke(System.Boolean)
extern void NativeCallbackTestDelegate_Invoke_mC4D46085DFA1CE639E50DCEC0F22E90753BC9D2B (void);
// 0x000001BA System.IAsyncResult Grpc.Core.Internal.NativeCallbackTestDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern void NativeCallbackTestDelegate_BeginInvoke_m158DA41CB02D7361E560487FE71CED607E4D8859 (void);
// 0x000001BB System.Void Grpc.Core.Internal.NativeCallbackTestDelegate::EndInvoke(System.IAsyncResult)
extern void NativeCallbackTestDelegate_EndInvoke_mC8DC83C096BEB46ED7665EBD17FFC9C488C2D495 (void);
// 0x000001BC System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.UnmanagedLibrary)
extern void NativeMethods__ctor_m33FF7379DF6AEACFFF5B43A2126E7E1E5DA8903F (void);
// 0x000001BD Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeMethods::Get()
extern void NativeMethods_Get_mC638EFF33AD00D6AC3609E45E34042ABAE48CDBB (void);
// 0x000001BE T Grpc.Core.Internal.NativeMethods::GetMethodDelegate(Grpc.Core.Internal.UnmanagedLibrary)
// 0x000001BF System.String Grpc.Core.Internal.NativeMethods::RemoveStringSuffix(System.String,System.String)
extern void NativeMethods_RemoveStringSuffix_m04485271BC5D5103AC8D3F858F20D97C84505B0E (void);
// 0x000001C0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_init_delegate__ctor_mB6764645C6B05B604DFA939DDDA5EDBF16AF8F33 (void);
// 0x000001C1 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::Invoke()
extern void grpcsharp_init_delegate_Invoke_mA9C36FEBD1AAE430CE8E4A086D67FD66C4A78875 (void);
// 0x000001C2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_init_delegate_BeginInvoke_m5A58BCD2FC25F12A41E7FBE7D6E9A80D2BB263A6 (void);
// 0x000001C3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_init_delegate_EndInvoke_mA41EE996B0FDD36574373520DE9536CB0B30F6DD (void);
// 0x000001C4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_shutdown_delegate__ctor_m75864B29EB8C232C4D99867B0D5743DBB379B8E1 (void);
// 0x000001C5 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::Invoke()
extern void grpcsharp_shutdown_delegate_Invoke_mB638C4E14B3C08D396927D8F2CCCAFDB3EAD9B7E (void);
// 0x000001C6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_shutdown_delegate_BeginInvoke_mCBC3E8CE8D96E93B3A099B792BFC525BF8EB9D69 (void);
// 0x000001C7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_shutdown_delegate_EndInvoke_mA8AE92A27FC2331A7D73D9B649C63B73D7181C9E (void);
// 0x000001C8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_version_string_delegate__ctor_m9C52207025D842995233B53175B44BE9B289C7AC (void);
// 0x000001C9 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::Invoke()
extern void grpcsharp_version_string_delegate_Invoke_mD54C48FD33B0D633548FDA52DC7D63842E02ABC8 (void);
// 0x000001CA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_version_string_delegate_BeginInvoke_mD51C3261D17E6B18087885E4D176054D13A455E0 (void);
// 0x000001CB System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_version_string_delegate_EndInvoke_mB46C0B42BC2707545F4BE237BD5F9424FD40DADE (void);
// 0x000001CC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_create_delegate__ctor_mC5A1C898C75F2E6FC85454A80FA9F51BFF8B51BC (void);
// 0x000001CD Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::Invoke()
extern void grpcsharp_batch_context_create_delegate_Invoke_m09B68AE880E4C902293857E65620939377C1B3B5 (void);
// 0x000001CE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_create_delegate_BeginInvoke_mB787C6C6061650278299D6EEF443397A03825A7F (void);
// 0x000001CF Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_create_delegate_EndInvoke_m48D6491CDD9E4C572B66B1BDE0E19A014A776259 (void);
// 0x000001D0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate__ctor_m88AB235F593FB7BF438C98205D9D39D59CE6446E (void);
// 0x000001D1 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate_Invoke_m894E5FB196C92CBB65A25D16D76253D1AE72EB28 (void);
// 0x000001D2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate_BeginInvoke_m5FFBB5D664BD97225A2871466BEDD094D14D53EE (void);
// 0x000001D3 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate_EndInvoke_m4B19134149FB7D15FDC935C2BC520E19E81BA380 (void);
// 0x000001D4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_message_length_delegate__ctor_m954C9FF7A1F6DC8BE39523363D3D38DCB465B286 (void);
// 0x000001D5 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_message_length_delegate_Invoke_m08942BE984C3B2A6AB042E4CF103FD246FE2080E (void);
// 0x000001D6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_message_length_delegate_BeginInvoke_mEE8E596B23D2C463F30E358C14DFFF0EF1793F0B (void);
// 0x000001D7 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_message_length_delegate_EndInvoke_mD7BBDF3CA36A433932A1029522ADE5E4AC49D132 (void);
// 0x000001D8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_to_buffer_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_message_to_buffer_delegate__ctor_m38932AFFD7B2CBC37C7B0A7244042CFE43CB6180 (void);
// 0x000001D9 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_to_buffer_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr)
extern void grpcsharp_batch_context_recv_message_to_buffer_delegate_Invoke_mEE10A5CFE18998D15496AA883D6DA43B883422D7 (void);
// 0x000001DA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_to_buffer_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_message_to_buffer_delegate_BeginInvoke_m3B99DBD3CCB4313792C624F3D7B1A18AD3FCEF9C (void);
// 0x000001DB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_to_buffer_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_message_to_buffer_delegate_EndInvoke_mDAB1B1E82063FE12EF64A7844431EFF3D7DD9716 (void);
// 0x000001DC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate__ctor_m9CA1139F51C2EC413A2496B50E30D42F64668DA8 (void);
// 0x000001DD Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate_Invoke_mA7D0D933AF72981A8DF41A4812C6A5343220F9CD (void);
// 0x000001DE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate_BeginInvoke_m739343474C4CFE3CD4992071F50AF8A81F5ACB64 (void);
// 0x000001DF Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate_EndInvoke_m2303FEADB0230919DB814D5C801C8C7E6BDB8F43 (void);
// 0x000001E0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate__ctor_m77B85D1724612D8530E6C134C212B5547B31E08A (void);
// 0x000001E1 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate_Invoke_m18E00BB62BC31E865758321B472E639F5148728A (void);
// 0x000001E2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate_BeginInvoke_m334444C030A9F59B9E3A1D2693B62D1F89DE98FD (void);
// 0x000001E3 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate_EndInvoke_m54923BFCBC87EE66B73D69CD6C384CCD56F2432A (void);
// 0x000001E4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate__ctor_mD092104D4C5A27472D59C4EF93A575DA45CC8E02 (void);
// 0x000001E5 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_Invoke_mB449C0B2748056C46A92A004F81532E265F2C53A (void);
// 0x000001E6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_BeginInvoke_mC201E0A2CF21DD37675C4D865CF3DD25DB3FA23E (void);
// 0x000001E7 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_EndInvoke_m64DA8C6215F7D9079D74F6712E8B871832DC7213 (void);
// 0x000001E8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate__ctor_mD08C5B82A0D14EE3142E1671992416FBB9056CD5 (void);
// 0x000001E9 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_Invoke_m8DC28333F341B4A16E35A16C789637BC75BA0A5A (void);
// 0x000001EA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_BeginInvoke_m23CF956FE428F5252192FF26CDB53EA77707580A (void);
// 0x000001EB System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_EndInvoke_m803CC6E2E0A2B93A129AA9C035DAB9ED5E31FCB8 (void);
// 0x000001EC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_reset_delegate__ctor_m0C546D115F19B6D72634DB64D701D75C5C677529 (void);
// 0x000001ED System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_reset_delegate_Invoke_m839E360C63230B7E519F5D889F98C98D5188B0FF (void);
// 0x000001EE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_reset_delegate_BeginInvoke_m458BBF54D7C326952149C5B2DE4D5083DB714BBB (void);
// 0x000001EF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_reset_delegate_EndInvoke_m8EA9C0D868D78DE7D53616F532D202D0F2B3CAE7 (void);
// 0x000001F0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_destroy_delegate__ctor_m28E891521EEB3823D09AADAA1594422E97EA7488 (void);
// 0x000001F1 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_batch_context_destroy_delegate_Invoke_m3CFD0472DDDA03068EF83EE647C7B86D5B80616E (void);
// 0x000001F2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_destroy_delegate_BeginInvoke_m9C10767B4F9D37552B151FDA1A811F6855C32ACA (void);
// 0x000001F3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_destroy_delegate_EndInvoke_m1058E72DDCE2AB1D237E28AC9CC6C4EB7F8894A6 (void);
// 0x000001F4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_create_delegate__ctor_m0B59F9CFDB453844C4FFFAFA48D7610897BFB8CE (void);
// 0x000001F5 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::Invoke()
extern void grpcsharp_request_call_context_create_delegate_Invoke_mC53906ABE07AA8A68162EA9674F64CD42BE36B4B (void);
// 0x000001F6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_create_delegate_BeginInvoke_mAEEC78768264300F13C64D0575A9646430E52CB5 (void);
// 0x000001F7 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_create_delegate_EndInvoke_m0446C00BAAAA15B3A6E548F1775CE15E70F2C3EA (void);
// 0x000001F8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_call_delegate__ctor_mEF246A2BEFE28716D774532AC56FD2BB125B8B86 (void);
// 0x000001F9 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_call_delegate_Invoke_m7A8427DD78DE795F94A41EFA7EBED7A598041267 (void);
// 0x000001FA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_call_delegate_BeginInvoke_mE40CA3186C093786725A44A044DA2953EA9B9A10 (void);
// 0x000001FB Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_call_delegate_EndInvoke_m8B75726A66E9481327DC85C1EB710FCCD178CD18 (void);
// 0x000001FC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_method_delegate__ctor_m6EC24A4EC337E3125A4110243F07376CFA26C250 (void);
// 0x000001FD System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void grpcsharp_request_call_context_method_delegate_Invoke_mF061891A38C8CD39C8DFFB04E460DA5B934BB67F (void);
// 0x000001FE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_method_delegate_BeginInvoke_mF60F883BF970A01F8C7935A932B2E3D71CDAD872 (void);
// 0x000001FF System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_request_call_context_method_delegate_EndInvoke_m152BA2D75DB102C240AEE14CE8BE7886A63644F6 (void);
// 0x00000200 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_host_delegate__ctor_m49B078E184AAFD359164B260C1E83EB111C1AD6F (void);
// 0x00000201 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void grpcsharp_request_call_context_host_delegate_Invoke_m9495161A0122EC2431F308E16C80AAB011EED2D6 (void);
// 0x00000202 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_host_delegate_BeginInvoke_m22E8A67C72CFDBA55AB013CCFF61F6A15E797761 (void);
// 0x00000203 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_request_call_context_host_delegate_EndInvoke_m5E09FDE627D53AE711879C0E97780E207C19603F (void);
// 0x00000204 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_deadline_delegate__ctor_m6BA2AFE8E1E7D0D90BD52DDFE208A7C5E07E62C5 (void);
// 0x00000205 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_deadline_delegate_Invoke_m35DAE342E47C160D048B0F382A4A035142634F54 (void);
// 0x00000206 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_deadline_delegate_BeginInvoke_m24D5849144C6EA37BE36C66F2FE949FE2B6E717E (void);
// 0x00000207 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_deadline_delegate_EndInvoke_m614CC5874139B8F06A6D4C7C0A1C10F93B1A3861 (void);
// 0x00000208 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_request_metadata_delegate__ctor_m7C13B3CE74C4C569E01226D22442739B887140CA (void);
// 0x00000209 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_request_metadata_delegate_Invoke_mD519B694798ACA34CCEB94179D3E9395AD3174BD (void);
// 0x0000020A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_request_metadata_delegate_BeginInvoke_mCA8B263A82B6D18FF32259F697BEC4A0746D2728 (void);
// 0x0000020B System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_request_metadata_delegate_EndInvoke_m7DE4262BD1888ED117D3F4B83AC399852C311DCF (void);
// 0x0000020C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_reset_delegate__ctor_m072A9AE45BE3B9624A34412D957906DACA3F41C3 (void);
// 0x0000020D System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_reset_delegate_Invoke_m099A15D2E2D7E23E981781DFA0F8FE2D57044B51 (void);
// 0x0000020E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_reset_delegate_BeginInvoke_m926BED8C2635880EBFFE200C1EAE8D05209116A8 (void);
// 0x0000020F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_reset_delegate_EndInvoke_m033F99CFDF40D977474F261F7645573768B1ADC5 (void);
// 0x00000210 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_destroy_delegate__ctor_m900F7BE1EE48B6503EEF30BFE2C7274E57AA1720 (void);
// 0x00000211 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_request_call_context_destroy_delegate_Invoke_mFA8AFE67C27E8C7887CE8FDE42D3CDBA87C40E75 (void);
// 0x00000212 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_destroy_delegate_BeginInvoke_mEB1A6D569A31B6E01E5F0A87D7DCBC681CBAF46A (void);
// 0x00000213 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_destroy_delegate_EndInvoke_mD6A1889670B70F6D56A71EC03A2EC80985A34E20 (void);
// 0x00000214 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_composite_call_credentials_create_delegate__ctor_m290CA938F6032C0B736D3768FB5A416684B13212 (void);
// 0x00000215 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::Invoke(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void grpcsharp_composite_call_credentials_create_delegate_Invoke_m5782DDA3DC9621056796A1B4F9ED9A81DEFECF7D (void);
// 0x00000216 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::BeginInvoke(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_composite_call_credentials_create_delegate_BeginInvoke_m3FB0F85B5AB6835E8E6496B20479E15DA509FD19 (void);
// 0x00000217 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_composite_call_credentials_create_delegate_EndInvoke_mF4784C6EBF3027FC438B75942C838CAB0C20446B (void);
// 0x00000218 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_credentials_release_delegate__ctor_mD013EC002B1CC13F7DC0613AEE4C0E0ED5FCF8C5 (void);
// 0x00000219 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_call_credentials_release_delegate_Invoke_mCB0C393BA9ECD1B532368C472F0E14B38D14D194 (void);
// 0x0000021A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_call_credentials_release_delegate_BeginInvoke_mAD7A4A51F0618009851C7856FEAF0ADCE5DE6017 (void);
// 0x0000021B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_credentials_release_delegate_EndInvoke_m41855C913F51F1C8D2F876CE84F10130BAB0C0DE (void);
// 0x0000021C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_cancel_delegate__ctor_m175FF622D7DF642CEC28FCC21F92648E9D33C4BE (void);
// 0x0000021D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle)
extern void grpcsharp_call_cancel_delegate_Invoke_m159257C916F562947F0AFEE857EAEDFED0401128 (void);
// 0x0000021E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_cancel_delegate_BeginInvoke_m60389BEE1D2073687E086124C48D9A933958FC82 (void);
// 0x0000021F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_cancel_delegate_EndInvoke_mAB69E7BC811DF14966B19841E393564E5B770EF4 (void);
// 0x00000220 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_cancel_with_status_delegate__ctor_m2957DD271E5AAD1ED1B8F7C4B9C03ECDF21B570D (void);
// 0x00000221 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void grpcsharp_call_cancel_with_status_delegate_Invoke_m5ED7369F6C4AFC2AD5D8791D30816F028D7102C9 (void);
// 0x00000222 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_call_cancel_with_status_delegate_BeginInvoke_m54C2947116138B1F5930FD91EC216AB0830D5B81 (void);
// 0x00000223 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_cancel_with_status_delegate_EndInvoke_mA27A02036C54B60BF604083A8D82EECBEED38D13 (void);
// 0x00000224 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_unary_delegate__ctor_mCCA073CC444575F94ADAB8BD3D621F6722D8F8DF (void);
// 0x00000225 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_unary_delegate_Invoke_m80305C224E96CD1524198CB7ACD6223A5273C503 (void);
// 0x00000226 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_unary_delegate_BeginInvoke_m7989592BBA9EF64BC742D5AB17002B8F053478CF (void);
// 0x00000227 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_unary_delegate_EndInvoke_m836C567651E2FD68726FD3DC9A37C0224DB88E8F (void);
// 0x00000228 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_client_streaming_delegate__ctor_m06C70BEE73374A519CB43D6D03511D2E592A753D (void);
// 0x00000229 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_client_streaming_delegate_Invoke_mB2C7E21AE49ED85ABD5B892BBCE800CC49BFB83B (void);
// 0x0000022A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_client_streaming_delegate_BeginInvoke_mA6E55C7B08C451F7399511B1BF73E44C64E5FCF3 (void);
// 0x0000022B Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_client_streaming_delegate_EndInvoke_mE2D71485480ED44972FF5C086989EC71874E2BD9 (void);
// 0x0000022C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_server_streaming_delegate__ctor_m8AF2A8B13313C2B14FD050756A996048BFE43AB1 (void);
// 0x0000022D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_server_streaming_delegate_Invoke_m54BEA85EC744F4D42DA492AD045F906AEEC78FB2 (void);
// 0x0000022E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_server_streaming_delegate_BeginInvoke_m84E795E1C462C59C8F0FF87557A0020ADF2A37D8 (void);
// 0x0000022F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_server_streaming_delegate_EndInvoke_mBFE503EF60B50CCA8204FBB38307F1E1CEF0F305 (void);
// 0x00000230 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_duplex_streaming_delegate__ctor_mD36CFDAA3978B9C6865A2E9A0E7AB25CDCC9E1A7 (void);
// 0x00000231 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_duplex_streaming_delegate_Invoke_m87FA34D5F92B89A90B613813A49CEFCF261B6D12 (void);
// 0x00000232 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_duplex_streaming_delegate_BeginInvoke_m2B989122682F579D1BE2406A098FA5130EB31100 (void);
// 0x00000233 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_duplex_streaming_delegate_EndInvoke_m841818A936D1DA0FE4DE136B5F33ACC58CECC6DD (void);
// 0x00000234 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_message_delegate__ctor_m382EFC601099FFB97D9FD172F0A793065CE2D249 (void);
// 0x00000235 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags,System.Int32)
extern void grpcsharp_call_send_message_delegate_Invoke_m66AFE32C8AC4F8807D197892A7657EB879001C6E (void);
// 0x00000236 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags,System.Int32,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_message_delegate_BeginInvoke_m30E9D6B81FC68CBBFD21E123172EB60DC8444057 (void);
// 0x00000237 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_message_delegate_EndInvoke_m06B5D7662CEEBAD97B0D84B57EBD9E914BEF9EA4 (void);
// 0x00000238 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_close_from_client_delegate__ctor_m4B9BE7E60CFCFB77F7E061BF0DBC0BA36DA4A185 (void);
// 0x00000239 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_send_close_from_client_delegate_Invoke_mAF52EA9F5EBF86CB73020E91ECD452798582D875 (void);
// 0x0000023A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_close_from_client_delegate_BeginInvoke_mD7B6342E61D085361F2DDF0EB2E34D3F0FFD62FB (void);
// 0x0000023B Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_close_from_client_delegate_EndInvoke_m357C15E5AD2C679AB533EDB40177F11FCD065A49 (void);
// 0x0000023C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_status_from_server_delegate__ctor_mE21EFC6900AC035616AB606FC5286AB3E967D0AD (void);
// 0x0000023D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.Byte[],System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags)
extern void grpcsharp_call_send_status_from_server_delegate_Invoke_mEB999DC5A3AF3AED40157E25E1E8FD9A7CC39B85 (void);
// 0x0000023E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.Byte[],System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_status_from_server_delegate_BeginInvoke_m3DE75DB6476972F73319424AEF068320714E4A6B (void);
// 0x0000023F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_status_from_server_delegate_EndInvoke_mEAC23848022CA1AAC49C27075F2413B16B1DB117 (void);
// 0x00000240 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_recv_message_delegate__ctor_m8C331FAF044CDBD910A91C85F16B471BA123B524 (void);
// 0x00000241 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_recv_message_delegate_Invoke_m0C93C286FAF4BBCA13644A085CCC595F4C60151E (void);
// 0x00000242 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_recv_message_delegate_BeginInvoke_m3B24CD1B16D1742391F0A72E49D876017BD11A94 (void);
// 0x00000243 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_recv_message_delegate_EndInvoke_m7F81256329E192ECD87A08FA75E1AF88775FC738 (void);
// 0x00000244 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_recv_initial_metadata_delegate__ctor_m693FAB365C023ED05110B3528CC550D265EC1A01 (void);
// 0x00000245 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_recv_initial_metadata_delegate_Invoke_mD755A7261EBC5471B756801880D516042DB0C483 (void);
// 0x00000246 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_recv_initial_metadata_delegate_BeginInvoke_mBD8A97CF8E3489664085573DA55E757B79018B7E (void);
// 0x00000247 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_recv_initial_metadata_delegate_EndInvoke_mFDF2EC088DD61619B44DD778C4A2F0D5BA128BF5 (void);
// 0x00000248 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_serverside_delegate__ctor_mA7AE50A272897B0413A315142098F42B8C01961C (void);
// 0x00000249 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_start_serverside_delegate_Invoke_m133A82F565CDC93178C76BFEEC591C171910A00E (void);
// 0x0000024A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_serverside_delegate_BeginInvoke_m77B4CCABD8D54F5781F575E82AEAED79623BAAEE (void);
// 0x0000024B Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_serverside_delegate_EndInvoke_mE21066C693229EDAFF5597A214A3ABCFCE88C0F6 (void);
// 0x0000024C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_initial_metadata_delegate__ctor_m4CDE50E3CFF69203F5FB91374E01758A420DB573 (void);
// 0x0000024D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void grpcsharp_call_send_initial_metadata_delegate_Invoke_mFADF3755620C84AB2F5D2812D53DA7571524E6FA (void);
// 0x0000024E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_initial_metadata_delegate_BeginInvoke_m7E8AF1E8E101839A892556C5D4E23E801DE02853 (void);
// 0x0000024F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_initial_metadata_delegate_EndInvoke_mDAA3358E101C934F551AAD118A18044B67F06B64 (void);
// 0x00000250 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_set_credentials_delegate__ctor_mE48262AB391C06ED742C9E429A6C5BB67B80EEA3 (void);
// 0x00000251 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void grpcsharp_call_set_credentials_delegate_Invoke_m78814AC6E7C7C3584375E04113BCDC36C3966752 (void);
// 0x00000252 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_set_credentials_delegate_BeginInvoke_m38A8BFE66364CA363A0A790DB5584A6B562461E3 (void);
// 0x00000253 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_set_credentials_delegate_EndInvoke_m371C133BD714E0201189032DA2EFD287BB30D213 (void);
// 0x00000254 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_get_peer_delegate__ctor_m29206E184F26B801F698089E3F5D30205E86811F (void);
// 0x00000255 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle)
extern void grpcsharp_call_get_peer_delegate_Invoke_m06554897988564AF1E2FA17EB1A275694EF5182C (void);
// 0x00000256 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_get_peer_delegate_BeginInvoke_mC0FE75E293059BBA8E9DD4700397414C9744223F (void);
// 0x00000257 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_get_peer_delegate_EndInvoke_m47546F2EDE77092120D4548FA483B342D74EFAC5 (void);
// 0x00000258 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_destroy_delegate__ctor_m6A8D4D3977A0BD52F2980F7E45F722BCBC9305ED (void);
// 0x00000259 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_call_destroy_delegate_Invoke_m1DA24B50E8827A56FED427ECA14370C5F78D64B1 (void);
// 0x0000025A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_call_destroy_delegate_BeginInvoke_mED8674C9E0D2740397E8F862201726DE0A4F96DE (void);
// 0x0000025B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_destroy_delegate_EndInvoke_m69E0AB8E787AE29B771B24BE84E8D7B57BFCAD6D (void);
// 0x0000025C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_create_delegate__ctor_m5745E01B422746DB45CE116521A0C9E36C65D873 (void);
// 0x0000025D Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::Invoke(System.UIntPtr)
extern void grpcsharp_channel_args_create_delegate_Invoke_m14082CBBC4250A444DA51B83E2767EFDC04BA849 (void);
// 0x0000025E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::BeginInvoke(System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_create_delegate_BeginInvoke_m99EA5F1B3D99C3AB461C5A712DE5179FD0A13B03 (void);
// 0x0000025F Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_create_delegate_EndInvoke_mE68A69697CE994FD70D5CF7A727C8F55EFA5BCD0 (void);
// 0x00000260 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_set_string_delegate__ctor_mC00D79FAD19E30A9DFFAE3EEB624B84029E671E0 (void);
// 0x00000261 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::Invoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void grpcsharp_channel_args_set_string_delegate_Invoke_m6603EC2AEEF0007CAA053B89EDA5AB9DDB164228 (void);
// 0x00000262 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::BeginInvoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_set_string_delegate_BeginInvoke_mE8230F4054F8BBBFB740D617A94644F50635C6EE (void);
// 0x00000263 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_set_string_delegate_EndInvoke_m454B2E9AC33F121A81E96BCFBBB666AD9BDC07CF (void);
// 0x00000264 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_set_integer_delegate__ctor_mE1F474719419B605535DDD312BA6872B86C19F01 (void);
// 0x00000265 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::Invoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void grpcsharp_channel_args_set_integer_delegate_Invoke_m64CD478FD44110476298BB12301726032256A81D (void);
// 0x00000266 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::BeginInvoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_set_integer_delegate_BeginInvoke_mA121233867A80022A4EF0CA94DAEDC7C1E6DB6F2 (void);
// 0x00000267 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_set_integer_delegate_EndInvoke_m44AD5420872509B970BDA36FE7CCCD813BB69CDC (void);
// 0x00000268 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_destroy_delegate__ctor_mF94C6A0ABBE2671D1CC159C61A2880F57092C64D (void);
// 0x00000269 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_channel_args_destroy_delegate_Invoke_mC51AF584E2C49EF1E07A876E82CE942F3B02F5D3 (void);
// 0x0000026A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_destroy_delegate_BeginInvoke_m2E514EA3845BA9D1DB962DC00D058C1E278370EF (void);
// 0x0000026B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_destroy_delegate_EndInvoke_m0044A5E84E20BEE5E27754B235E983F68036175E (void);
// 0x0000026C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_override_default_ssl_roots__ctor_m98DDF5AA7AF905E3BF3C99CBF8F305B8724CD2B7 (void);
// 0x0000026D System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots::Invoke(System.String)
extern void grpcsharp_override_default_ssl_roots_Invoke_m5E615BEAAC7D2BA7AE9662B4A8A18E6A33E0AEBD (void);
// 0x0000026E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_override_default_ssl_roots_BeginInvoke_m2B761ED1F1B7F7C29EECAD2C8F7C212DAF64032A (void);
// 0x0000026F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots::EndInvoke(System.IAsyncResult)
extern void grpcsharp_override_default_ssl_roots_EndInvoke_m2DBF7A4E61F8BDFF02781415F71E97DB2BF6C7CD (void);
// 0x00000270 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_ssl_credentials_create_delegate__ctor_m8831DEA1536A7BDD8FEE1306BB60536EB14FF118 (void);
// 0x00000271 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::Invoke(System.String,System.String,System.String)
extern void grpcsharp_ssl_credentials_create_delegate_Invoke_mB601BD2FA93CF89F8C2066620462FCADA6CBEAF1 (void);
// 0x00000272 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::BeginInvoke(System.String,System.String,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_ssl_credentials_create_delegate_BeginInvoke_mCD887D9E5449D3F6268783E5DF915B6100ABDAF5 (void);
// 0x00000273 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_ssl_credentials_create_delegate_EndInvoke_m8796A4EA79B5E644AAA2A4A54E0972670255F22A (void);
// 0x00000274 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_composite_channel_credentials_create_delegate__ctor_m357309AECBC045AF76BBA4074970837A4907E339 (void);
// 0x00000275 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::Invoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void grpcsharp_composite_channel_credentials_create_delegate_Invoke_m3012AFF3F22876D10223C1303C6740DB36213130 (void);
// 0x00000276 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::BeginInvoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_composite_channel_credentials_create_delegate_BeginInvoke_m515E84E5EA8D16E77EAC00DE091D0CE392F34123 (void);
// 0x00000277 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_composite_channel_credentials_create_delegate_EndInvoke_mB7A33D336EE8E25C7B00CF81873AABFEEF18EE11 (void);
// 0x00000278 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_credentials_release_delegate__ctor_m48A91DC3B0B6637314384B40546A08FA905B444F (void);
// 0x00000279 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_channel_credentials_release_delegate_Invoke_mE56A5ECC91697789081C797C216CE7D554014C73 (void);
// 0x0000027A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_credentials_release_delegate_BeginInvoke_m6ABC23B74980C2A0D95DBDB575E94F92DD4EC4B3 (void);
// 0x0000027B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_credentials_release_delegate_EndInvoke_mB0571138681314558DE8B6862E12DF10F3D5BA34 (void);
// 0x0000027C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_insecure_channel_create_delegate__ctor_m48FB381D0D4EE2E883912EF2BCDAB34E23D139B7 (void);
// 0x0000027D Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::Invoke(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void grpcsharp_insecure_channel_create_delegate_Invoke_m132543685C9A3AAEF8B2233BAE837F4FD960E2E9 (void);
// 0x0000027E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::BeginInvoke(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_insecure_channel_create_delegate_BeginInvoke_m187620802307B83610FCD3ED927D7A40E1D5DFF9 (void);
// 0x0000027F Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_insecure_channel_create_delegate_EndInvoke_m267DB14ED223949094D85BA447B523DB11269EA4 (void);
// 0x00000280 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_secure_channel_create_delegate__ctor_m43D9D475A12ABECDB265FA8FCE1F35A3E711619A (void);
// 0x00000281 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::Invoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void grpcsharp_secure_channel_create_delegate_Invoke_m1B2E81C7C9F4E7C241A006D929E538140D27B12C (void);
// 0x00000282 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::BeginInvoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_secure_channel_create_delegate_BeginInvoke_mBFD78123F0D0D38C34795AEF97AF40EA47D7AAEE (void);
// 0x00000283 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_secure_channel_create_delegate_EndInvoke_m8E268EDB4E6750A900DCC4D684665170F4A093D2 (void);
// 0x00000284 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_create_call_delegate__ctor_m0876323BA140203B4E6F36C9DE00BF703C8DD5F6 (void);
// 0x00000285 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void grpcsharp_channel_create_call_delegate_Invoke_m18EC5751CE211A920B77DD5DF21385E2C1C3D556 (void);
// 0x00000286 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_create_call_delegate_BeginInvoke_mC9C79AD344241D0CB10D81D28886F6E054759915 (void);
// 0x00000287 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_create_call_delegate_EndInvoke_m7B5FE78BF29D6699A770221D21F53E0FD8C77301 (void);
// 0x00000288 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_check_connectivity_state_delegate__ctor_m9750D78A2D6D1125293D049E3E068CD0FDAADD89 (void);
// 0x00000289 Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void grpcsharp_channel_check_connectivity_state_delegate_Invoke_mE7587BA695319FFB04CF704375696D7AF54B0020 (void);
// 0x0000028A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,System.Int32,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_check_connectivity_state_delegate_BeginInvoke_m5ABEAE5524BA4FC297E698F5C5258B9AE01B6102 (void);
// 0x0000028B Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_check_connectivity_state_delegate_EndInvoke_m89AF324B6CBCC1DD46891944B5AFFC0B3D68B7DB (void);
// 0x0000028C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_watch_connectivity_state_delegate__ctor_mB8CEA6E8F27713C228D6F01B221E5C07AB3AEB76 (void);
// 0x0000028D System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m5195FE7A994B38052F6C8C18608A72135B66762C (void);
// 0x0000028E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_watch_connectivity_state_delegate_BeginInvoke_mDFE61261C452A505F110A97AE6BFF354E47B8DA4 (void);
// 0x0000028F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_watch_connectivity_state_delegate_EndInvoke_mBC5C2E55CBCD69EFD786B2E9658146CA095BD239 (void);
// 0x00000290 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_get_target_delegate__ctor_m8F3C9A0F4942326FC4DF6114B4B1C2216DBCF158 (void);
// 0x00000291 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle)
extern void grpcsharp_channel_get_target_delegate_Invoke_m4FFC78879F30068949FD46E63B86FD653C7A0FB4 (void);
// 0x00000292 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_get_target_delegate_BeginInvoke_m871A58308F45E77E68A84C76DD3375388642DC4A (void);
// 0x00000293 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_get_target_delegate_EndInvoke_m8B621C05EDC19CE077AE9CE87B8E8D11E05ED550 (void);
// 0x00000294 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_destroy_delegate__ctor_m92AE865D424FE76AE1C722D1709560BC28BFB4BA (void);
// 0x00000295 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_channel_destroy_delegate_Invoke_m5D6CD8FE072AF58774219E54462F1DFDE76F4DBF (void);
// 0x00000296 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_destroy_delegate_BeginInvoke_m9EC3E96E2D0B1B199ECB149339A66610226C9474 (void);
// 0x00000297 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_destroy_delegate_EndInvoke_mF145F9569DD228CD2D71A3D838C6D99D1C67689E (void);
// 0x00000298 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_sizeof_grpc_event_delegate__ctor_mB91C95B41C4B5DAE7413E2F30B483628AA6CBD0F (void);
// 0x00000299 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::Invoke()
extern void grpcsharp_sizeof_grpc_event_delegate_Invoke_m53562F1F97589901B0AF4EED0404EA100696D3B3 (void);
// 0x0000029A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_sizeof_grpc_event_delegate_BeginInvoke_mB7B65AE43DA1CCBC06F14651087F9CE0E6F4C92B (void);
// 0x0000029B System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_sizeof_grpc_event_delegate_EndInvoke_mC6E785442A24D680CF3B949F9CF0590922DDD76F (void);
// 0x0000029C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_create_async_delegate__ctor_mBE9A0EE1FA94B6E90C0B1722D02A6A52D7FE394E (void);
// 0x0000029D Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::Invoke()
extern void grpcsharp_completion_queue_create_async_delegate_Invoke_m1829A28121DE7347C55D59644E77F4E12A63D538 (void);
// 0x0000029E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_create_async_delegate_BeginInvoke_m1D932B50DD047392933E5E6FC85EED0524EF86E1 (void);
// 0x0000029F Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_create_async_delegate_EndInvoke_m5FBAC93932E354DE8FB403CEF37B81D30AF171B8 (void);
// 0x000002A0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_create_sync_delegate__ctor_m2BFDD16573B175EAFC90735C18B887326C826D73 (void);
// 0x000002A1 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::Invoke()
extern void grpcsharp_completion_queue_create_sync_delegate_Invoke_mA3BC9A25017FC5DE000289165443480419C95392 (void);
// 0x000002A2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_create_sync_delegate_BeginInvoke_m8314C081BB5E249798AE81F3BE28D34CF429F3A0 (void);
// 0x000002A3 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_create_sync_delegate_EndInvoke_mBBBF24FA851F9A49A8E3E540213535027B0D5978 (void);
// 0x000002A4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_shutdown_delegate__ctor_m5078A0ECAA47060517A4CBB23BDD83F1661ADA01 (void);
// 0x000002A5 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::Invoke(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void grpcsharp_completion_queue_shutdown_delegate_Invoke_m4192AAB65591385F6242E67F71A4D122989C201A (void);
// 0x000002A6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::BeginInvoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_shutdown_delegate_BeginInvoke_mE2D30791C8E29AEBD1ACD6F575AD37B8417CF309 (void);
// 0x000002A7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_shutdown_delegate_EndInvoke_m61570D7C8CAA366181DCBA53DA92694A174A9513 (void);
// 0x000002A8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_next_delegate__ctor_m40E09D674E38895B120BB2919D6C2FA1A713C178 (void);
// 0x000002A9 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::Invoke(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void grpcsharp_completion_queue_next_delegate_Invoke_mCCC1B0708E2AE9BEC8655C615A9662BB60F33A5C (void);
// 0x000002AA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::BeginInvoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_next_delegate_BeginInvoke_m263E7D4F27D34C77698980E5FFD652983EFD0FBD (void);
// 0x000002AB Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_next_delegate_EndInvoke_mA212BC97DC7137820D8CB9B9E9AABE9586227CCC (void);
// 0x000002AC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_pluck_delegate__ctor_m2FDB427FBC36B8A082EAE4B2694E39F964D13357 (void);
// 0x000002AD Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::Invoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void grpcsharp_completion_queue_pluck_delegate_Invoke_mFB899DEB8042F857202A958DF39C7E1C11660554 (void);
// 0x000002AE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::BeginInvoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_pluck_delegate_BeginInvoke_mC49A5C9B8DD4CC0575E65DB5835F3347FD561EC6 (void);
// 0x000002AF Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_pluck_delegate_EndInvoke_m18C90EAED243C749BFE92F9AF221E66BCEFFB793 (void);
// 0x000002B0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_destroy_delegate__ctor_m34257A6CD68B29C4423EB341A7F68DD3489AD728 (void);
// 0x000002B1 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_completion_queue_destroy_delegate_Invoke_mA74CCEE03ADD8438EE10C90EBBCD8046BE097727 (void);
// 0x000002B2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_destroy_delegate_BeginInvoke_m225F895A2B65DAACD4623C463F9820E6FE874152 (void);
// 0x000002B3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_destroy_delegate_EndInvoke_mB8696E0849D0AB9B91A009485EC2EB1ECF26FC43 (void);
// 0x000002B4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_free_delegate__ctor_m893E16BD0C132EDC8BD127830AFABD3606393689 (void);
// 0x000002B5 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::Invoke(System.IntPtr)
extern void gprsharp_free_delegate_Invoke_mEB602C2E9DACFC984516657FB7BD0BCDE4BE6875 (void);
// 0x000002B6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void gprsharp_free_delegate_BeginInvoke_m21F6E027B1B4AE93EAF256D98B28FE75FB538FCC (void);
// 0x000002B7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_free_delegate_EndInvoke_m43FC48EBFCDDC5B3A811B2F4A9F1885BEB019879 (void);
// 0x000002B8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_create_delegate__ctor_m772B4ACE86477B18A56D10F5CDECFC8DB48071AB (void);
// 0x000002B9 Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::Invoke(System.UIntPtr)
extern void grpcsharp_metadata_array_create_delegate_Invoke_mDE260A67775DA58E957560F4F1E0C1B5F138F851 (void);
// 0x000002BA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::BeginInvoke(System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_create_delegate_BeginInvoke_m636C6BF23E6C3CC9ADF31718396C209E715D7E9E (void);
// 0x000002BB Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_create_delegate_EndInvoke_m11D8C8FC84E49CEBDA47FD5456A96589155895A5 (void);
// 0x000002BC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_add_delegate__ctor_m011C493247FE6BEA5C7DC771C0BD84F8A22E5263 (void);
// 0x000002BD System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::Invoke(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void grpcsharp_metadata_array_add_delegate_Invoke_m97AF4B78DD758C89BDFCB44BC0459969E86F60C3 (void);
// 0x000002BE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::BeginInvoke(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_add_delegate_BeginInvoke_m0F60C3E3468BE732F5475BBB88EB400B6F00E3A0 (void);
// 0x000002BF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_add_delegate_EndInvoke_mB47DA50CE8AD7833F7C12C6CC97528F33D5F352B (void);
// 0x000002C0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_count_delegate__ctor_m90F77B8E3E8358E0A355EE3DDC8AC798CA6095AF (void);
// 0x000002C1 System.UIntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::Invoke(System.IntPtr)
extern void grpcsharp_metadata_array_count_delegate_Invoke_mE1335A71E9AB4EA39E801CC1F30DF1E027EE8552 (void);
// 0x000002C2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_count_delegate_BeginInvoke_m1ADAB32D4EE749B205A4A4F892BDFBA2439C03E2 (void);
// 0x000002C3 System.UIntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_count_delegate_EndInvoke_mFAFFDBBFA822AD60AADF6F1496FBAAFD41E789BC (void);
// 0x000002C4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_get_key_delegate__ctor_m7DAA5BA0AA67CE2492DBF0A582F5269FC5EE5331 (void);
// 0x000002C5 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::Invoke(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void grpcsharp_metadata_array_get_key_delegate_Invoke_m20088C5BA6860F4DBF8655E87627607EA96126BB (void);
// 0x000002C6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::BeginInvoke(System.IntPtr,System.UIntPtr,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_get_key_delegate_BeginInvoke_mE27D34A8C425AEBF03C71A4632085FE1215A2EA7 (void);
// 0x000002C7 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_metadata_array_get_key_delegate_EndInvoke_m03A827E401BD21BD6FB4E7E776D2D68A0B54CCBF (void);
// 0x000002C8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_get_value_delegate__ctor_m1648524F9708A0E7230E061EC5248CA91E712456 (void);
// 0x000002C9 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::Invoke(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void grpcsharp_metadata_array_get_value_delegate_Invoke_m3EB206C62506743F648EFA3FC5CEBD77D0376A46 (void);
// 0x000002CA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::BeginInvoke(System.IntPtr,System.UIntPtr,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_get_value_delegate_BeginInvoke_m8A14F0356AF49B95230973FCB806A41C5F825551 (void);
// 0x000002CB System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_metadata_array_get_value_delegate_EndInvoke_m6A325C20EB324F48604EAAD00986DB59ED932E80 (void);
// 0x000002CC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_destroy_full_delegate__ctor_m4266CD0C1E581CCDFB25CB3C7D38303FDBD4ADCB (void);
// 0x000002CD System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::Invoke(System.IntPtr)
extern void grpcsharp_metadata_array_destroy_full_delegate_Invoke_mFF84304D900A523DB208B3A7078AB1568CC3949B (void);
// 0x000002CE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_destroy_full_delegate_BeginInvoke_mE443A9C716278A4C9D69B9E2A13C393D8CFB40A3 (void);
// 0x000002CF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_destroy_full_delegate_EndInvoke_m4CF3A8CAEFBEE4EAEBF9A2877D84BD5918BCB101 (void);
// 0x000002D0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_redirect_log_delegate__ctor_mEAF67F0B3984D7874982A69624957200402C2503 (void);
// 0x000002D1 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::Invoke(Grpc.Core.Internal.GprLogDelegate)
extern void grpcsharp_redirect_log_delegate_Invoke_mFD7E0A36D5F8A176E8A4502A402A27F0C8E146F7 (void);
// 0x000002D2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::BeginInvoke(Grpc.Core.Internal.GprLogDelegate,System.AsyncCallback,System.Object)
extern void grpcsharp_redirect_log_delegate_BeginInvoke_m1B10DE0F5008D1A92E9ABBB57DFF8C5DC7A3532E (void);
// 0x000002D3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_redirect_log_delegate_EndInvoke_m2CF1FBF37CA77C15C0101F6311915D33EC28F648 (void);
// 0x000002D4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate__ctor_m4C1AA38268B355295FA1CEA608910CECFF9D7079 (void);
// 0x000002D5 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::Invoke(Grpc.Core.Internal.NativeMetadataInterceptor)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_mFCF8686D4FBD59CB561B4AD336EC65E052EA6747 (void);
// 0x000002D6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::BeginInvoke(Grpc.Core.Internal.NativeMetadataInterceptor,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate_BeginInvoke_m8F18D229419AA9C3C8EA6E31323243CA7F97CE23 (void);
// 0x000002D7 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate_EndInvoke_mD8FB275BB8EE33E31CF5F96F71B6D4BDC9F9A2AD (void);
// 0x000002D8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate__ctor_mC9AF2E3BD4BE0C31C9E16488EE6B329CD5DFD096 (void);
// 0x000002D9 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::Invoke(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate_Invoke_mD629EBA653CB1EA91D6EAF68E65FF7136D171A45 (void);
// 0x000002DA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::BeginInvoke(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate_BeginInvoke_mD60F73D7DDF0EAA2D4BD140E5D664BD31E6F935B (void);
// 0x000002DB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate_EndInvoke_m46D6304A98B39020033C6736879E0EB17E2498B6 (void);
// 0x000002DC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_ssl_server_credentials_create_delegate__ctor_m688C7AF93D27B7FAF5D1E15F47DDA914DB32E144 (void);
// 0x000002DD Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::Invoke(System.String,System.String[],System.String[],System.UIntPtr,System.Int32)
extern void grpcsharp_ssl_server_credentials_create_delegate_Invoke_m027576156F96D1D60825BDBE6FDDE8165D33DB44 (void);
// 0x000002DE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::BeginInvoke(System.String,System.String[],System.String[],System.UIntPtr,System.Int32,System.AsyncCallback,System.Object)
extern void grpcsharp_ssl_server_credentials_create_delegate_BeginInvoke_mD039F4C273EF1734FC731B9EFF7506094D760430 (void);
// 0x000002DF Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_ssl_server_credentials_create_delegate_EndInvoke_m6F8F868C23518B80AB9B996149AB0B76845B2767 (void);
// 0x000002E0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_credentials_release_delegate__ctor_m412A0612C615A2CD671D510EFBD8970819B1EDF2 (void);
// 0x000002E1 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_server_credentials_release_delegate_Invoke_m50AFC5500E95CC5B3FEDD4348408AF08126C4B83 (void);
// 0x000002E2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_server_credentials_release_delegate_BeginInvoke_m800F36E6D84F9893F25BEE42A1F157EA8EBB8ECE (void);
// 0x000002E3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_credentials_release_delegate_EndInvoke_mE24D58BC2772AF82F25EFB0CDA9EE7EDA75572C8 (void);
// 0x000002E4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_create_delegate__ctor_m95127C8AE1416F3FC0F65F3417B5CA74E872C626 (void);
// 0x000002E5 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::Invoke(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void grpcsharp_server_create_delegate_Invoke_m26B88F8162A632C58F26A24DECB8F91E2DBFD39A (void);
// 0x000002E6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::BeginInvoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_create_delegate_BeginInvoke_m0405B40838097390180E52394AB3598E5C3284E8 (void);
// 0x000002E7 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_create_delegate_EndInvoke_mEC9968279D40CE6F700FB5636B2981F8BBDAB933 (void);
// 0x000002E8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_register_completion_queue_delegate__ctor_m5C545E185FE84DD68D91F0016FD0678445292865 (void);
// 0x000002E9 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void grpcsharp_server_register_completion_queue_delegate_Invoke_mF5E747148DE6B84F61D7AF382FB06F6604B215C3 (void);
// 0x000002EA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_register_completion_queue_delegate_BeginInvoke_mC260D4A7842EB46662A818595577014B4DC15A9D (void);
// 0x000002EB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_register_completion_queue_delegate_EndInvoke_m86F757363AA6DF46925C54707CF97C352C38BD38 (void);
// 0x000002EC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_add_insecure_http2_port_delegate__ctor_mB8A7BC7548BE6F7F384A2FC92281BCB4B2485026 (void);
// 0x000002ED System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m2753511205E02F8F617BC5F44257935DD0AC3202 (void);
// 0x000002EE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_server_add_insecure_http2_port_delegate_BeginInvoke_m79D48CE519F09C1930A8A1896A3D3F87EC7DA086 (void);
// 0x000002EF System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_add_insecure_http2_port_delegate_EndInvoke_m8849F7D5887C187D5E122A8BA52C98BDD05A4294 (void);
// 0x000002F0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_add_secure_http2_port_delegate__ctor_m1A13ABF4E9DC31EA41D59446EB80089D6E4B4967 (void);
// 0x000002F1 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void grpcsharp_server_add_secure_http2_port_delegate_Invoke_m5968B2CA246F04FB554D87A28B036AD5CAFEEB32 (void);
// 0x000002F2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_add_secure_http2_port_delegate_BeginInvoke_m74AA65DBF32D3C930B8DF4EF1715EC5B32A3020C (void);
// 0x000002F3 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_add_secure_http2_port_delegate_EndInvoke_mEF12D0D34A88D2DD22FCA3D6661EA918EAABCCB7 (void);
// 0x000002F4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_start_delegate__ctor_m31DD713C72B45C349D67CA63C12A121EC71E607B (void);
// 0x000002F5 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle)
extern void grpcsharp_server_start_delegate_Invoke_m0EB677203848E60D201703FF07AA1DC29DC790B3 (void);
// 0x000002F6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_start_delegate_BeginInvoke_mABE28BE23AC22259100230A9245BE5A1144F5CEB (void);
// 0x000002F7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_start_delegate_EndInvoke_m054CB1D48EC94296F823582B462E0341AEB514CF (void);
// 0x000002F8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_request_call_delegate__ctor_m3D2908B8A78E18DD817BB336BA800E7F1FCE55FA (void);
// 0x000002F9 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_server_request_call_delegate_Invoke_mF24F2D55232020B9D143D2C909888A7F864EA46A (void);
// 0x000002FA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_request_call_delegate_BeginInvoke_m34EE483F8AF598C4E9AB8DCCF3AB2CBAAE63507B (void);
// 0x000002FB Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_request_call_delegate_EndInvoke_m6ECB4A83C61C35242373B958C743B28F3F178F5C (void);
// 0x000002FC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_cancel_all_calls_delegate__ctor_m84C51EFC3E49A905E2677B9357FF1E824280C022 (void);
// 0x000002FD System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle)
extern void grpcsharp_server_cancel_all_calls_delegate_Invoke_mEDA0825BC4A183397005B473DA8B60BAE5DCA5EC (void);
// 0x000002FE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_cancel_all_calls_delegate_BeginInvoke_m34AD034D3BECD54F8B8C9FA068BDC849D6606702 (void);
// 0x000002FF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_cancel_all_calls_delegate_EndInvoke_mC3490A14F68D3407717D57B04BAB1DAAE305E0F8 (void);
// 0x00000300 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate__ctor_m5E4DFA0CEBFC226DD3D090D47A265F35206599DF (void);
// 0x00000301 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m498B57A8F61C559758A7BEF5ACD21A9F42C06F93 (void);
// 0x00000302 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate_BeginInvoke_m094A363C17F34427336CA58ACC725E0DFCA78C96 (void);
// 0x00000303 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate_EndInvoke_m9AA6991B2762F7EA1FB1834D251E672F20882D54 (void);
// 0x00000304 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_destroy_delegate__ctor_mE2A7169FCC10B82E5DF35CE2782DC3C3C34AF5D2 (void);
// 0x00000305 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_server_destroy_delegate_Invoke_mC9001ACE446E1147B044E3A2DF556CD6F32A2215 (void);
// 0x00000306 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_server_destroy_delegate_BeginInvoke_m853C115199A83B0CD15FA0D1BDE278F75F27F5CD (void);
// 0x00000307 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_destroy_delegate_EndInvoke_m85C8815E94D0EB489175CFA5B059F2111D8898E1 (void);
// 0x00000308 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_auth_context_delegate__ctor_mFB53971FBA1C4D1D074504FB16D1A21506EA0BA1 (void);
// 0x00000309 Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle)
extern void grpcsharp_call_auth_context_delegate_Invoke_m6E25A339DC48A95CE1DCA9711960B6F70E5E00B4 (void);
// 0x0000030A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_auth_context_delegate_BeginInvoke_m992ABA2FB2E1FBCB6DDF3684652A5B29647F7729 (void);
// 0x0000030B Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_auth_context_delegate_EndInvoke_m69CCEA2ED7F1D3DAF8BC6EB4854B4702978F124E (void);
// 0x0000030C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate__ctor_m6F7C0891D400A4A41B09C5A318CD8A5C452C043F (void);
// 0x0000030D System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::Invoke(Grpc.Core.Internal.AuthContextSafeHandle)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_m88B5407F5DB2C37214D947CBD6C4DFF55D1BEE19 (void);
// 0x0000030E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::BeginInvoke(Grpc.Core.Internal.AuthContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate_BeginInvoke_mF3483D077192629A81F7A1C4058E49098FF7B639 (void);
// 0x0000030F System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate_EndInvoke_mFA636F5E359B266623D26619E236142134CD51BA (void);
// 0x00000310 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_context_property_iterator_delegate__ctor_m7770BF6F9BE6F25F2E53A96959004C4BA7658FB4 (void);
// 0x00000311 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::Invoke(Grpc.Core.Internal.AuthContextSafeHandle)
extern void grpcsharp_auth_context_property_iterator_delegate_Invoke_m103AC62FFB4D56AB8F0A3D08DD32ED56C093992F (void);
// 0x00000312 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::BeginInvoke(Grpc.Core.Internal.AuthContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_context_property_iterator_delegate_BeginInvoke_m8E55EA045EE29B6AA86935CF5BA0FE952FEBECFA (void);
// 0x00000313 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_auth_context_property_iterator_delegate_EndInvoke_m80AE7A33C2BAB97988EC92A58BA6BA61DC25B3FF (void);
// 0x00000314 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_property_iterator_next_delegate__ctor_m5F7ED3071A5B04C315C453F308466C51CD281772 (void);
// 0x00000315 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::Invoke(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void grpcsharp_auth_property_iterator_next_delegate_Invoke_m2CBC2B9FE58121B2CA8D5876ACBF0781E1498BAD (void);
// 0x00000316 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::BeginInvoke(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_property_iterator_next_delegate_BeginInvoke_m8E79F6D57DC1E49D856EA8C9EE1642B0D1109FF4 (void);
// 0x00000317 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::EndInvoke(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&,System.IAsyncResult)
extern void grpcsharp_auth_property_iterator_next_delegate_EndInvoke_m42815973168B7E1B1D630696D07A795F8D838DDC (void);
// 0x00000318 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_context_release_delegate__ctor_mB161F1BC2CAC1103ED0E5254425BA74838BD61F8 (void);
// 0x00000319 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_auth_context_release_delegate_Invoke_m7AF4503F3E9B4AE556E6FEB0BDEC8943C3016172 (void);
// 0x0000031A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_context_release_delegate_BeginInvoke_m2C59FF8E8B8091F172400246358891B1032D2CDD (void);
// 0x0000031B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_auth_context_release_delegate_EndInvoke_m950E033C2A65F66826A5EC4DDC99C8F24521E3DD (void);
// 0x0000031C System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_now_delegate__ctor_mF22D1C5D71E02CBB29A1B9E60F5069505D80F3C8 (void);
// 0x0000031D Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::Invoke(Grpc.Core.Internal.ClockType)
extern void gprsharp_now_delegate_Invoke_m4FF39FA6CC4512A7CA8115CE6021007440CEC7F8 (void);
// 0x0000031E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::BeginInvoke(Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_now_delegate_BeginInvoke_m042D17669703D4BD34B010AB03003E0F04CD7A51 (void);
// 0x0000031F Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_now_delegate_EndInvoke_mF20347A049E24190DFFC00C62490DF3B0AB06E5C (void);
// 0x00000320 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_inf_future_delegate__ctor_mE199B03D324A3299AC47036F158020C9A3C201C4 (void);
// 0x00000321 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::Invoke(Grpc.Core.Internal.ClockType)
extern void gprsharp_inf_future_delegate_Invoke_m45B997CEAAB75769A6BD4A7DF6A274DEF2D443DC (void);
// 0x00000322 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::BeginInvoke(Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_inf_future_delegate_BeginInvoke_mBD347F8CB00002301346495E1A9254ED9BF293E4 (void);
// 0x00000323 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_inf_future_delegate_EndInvoke_m543292375F727139716F71039D1C5DA08B047739 (void);
// 0x00000324 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_inf_past_delegate__ctor_m6D647F7A28AFC5A1900EB553124206A2DC82EA4B (void);
// 0x00000325 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::Invoke(Grpc.Core.Internal.ClockType)
extern void gprsharp_inf_past_delegate_Invoke_m1F5B2BAA9A0474219E3FB739A7859D8061AD18F0 (void);
// 0x00000326 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::BeginInvoke(Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_inf_past_delegate_BeginInvoke_m86A378ECB16770114B87AA9FA974C157DFD4E5B7 (void);
// 0x00000327 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_inf_past_delegate_EndInvoke_m64BFD4C9837BA41154B002F4D61EF08437AE51E1 (void);
// 0x00000328 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_convert_clock_type_delegate__ctor_mBE453727F14A7DCE1B1F22F4683663DCDFB3B746 (void);
// 0x00000329 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::Invoke(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void gprsharp_convert_clock_type_delegate_Invoke_mFB549FC9DC2FFC59639F493ADA88B2F1FFED8805 (void);
// 0x0000032A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::BeginInvoke(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_convert_clock_type_delegate_BeginInvoke_mB5262B174DF54B7510B3D43BF178BE64F55204A9 (void);
// 0x0000032B Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_convert_clock_type_delegate_EndInvoke_mD6CB226CA19BF0076804B420FBFF397581A044F3 (void);
// 0x0000032C System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_sizeof_timespec_delegate__ctor_m8875D40394D79CF99ED429D03618BD633AF90ECD (void);
// 0x0000032D System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::Invoke()
extern void gprsharp_sizeof_timespec_delegate_Invoke_m4AC887C1F3892A0AE9610ED0B65D3EC4D57893DD (void);
// 0x0000032E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void gprsharp_sizeof_timespec_delegate_BeginInvoke_m99803978402232525665DF20F6B2B4486866D22B (void);
// 0x0000032F System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_sizeof_timespec_delegate_EndInvoke_m129429874CB6CC2ED49317269C655C466AC99E04 (void);
// 0x00000330 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_test_callback_delegate__ctor_m401FC9C0B234B684F64296086427C5789265F67A (void);
// 0x00000331 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::Invoke(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void grpcsharp_test_callback_delegate_Invoke_m183E31FE7202C2ED82674994D98C792EB2A36E4E (void);
// 0x00000332 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::BeginInvoke(Grpc.Core.Internal.NativeCallbackTestDelegate,System.AsyncCallback,System.Object)
extern void grpcsharp_test_callback_delegate_BeginInvoke_m01E470E6FDBD127093677536461FD9E56F97F6E4 (void);
// 0x00000333 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_test_callback_delegate_EndInvoke_m9F1BF073F03E7F9ACC0A82EB407A154F508AB3E3 (void);
// 0x00000334 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_test_nop_delegate__ctor_m600948EB73AC98BC6E6BBBEDDBBC6AAC4FD3C5D7 (void);
// 0x00000335 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::Invoke(System.IntPtr)
extern void grpcsharp_test_nop_delegate_Invoke_m2DBC3D211FA294C15F531C1B9E5518DD79C69D2E (void);
// 0x00000336 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_test_nop_delegate_BeginInvoke_m73D3294DF09222CCA5512C31598707EC09BAB918 (void);
// 0x00000337 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_test_nop_delegate_EndInvoke_m73CF412FF82A3F7DF40EF3986609DA7D57322EA1 (void);
// 0x00000338 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_test_override_method_delegate__ctor_m07ADDB3A606D884AB742921EFD12E6092CA021F9 (void);
// 0x00000339 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::Invoke(System.String,System.String)
extern void grpcsharp_test_override_method_delegate_Invoke_mAC150C69FF62741B495DC3F30FDF1EF684AC2614 (void);
// 0x0000033A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_test_override_method_delegate_BeginInvoke_mFB71A8267FBC0BC25AB3BF906B166E9FCFF6C15A (void);
// 0x0000033B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_test_override_method_delegate_EndInvoke_mA78F8EC1265386D25861BAFC8F95D21D89AC4E34 (void);
// 0x0000033C System.Void Grpc.Core.Internal.PlatformApis::.cctor()
extern void PlatformApis__cctor_mB0BD5E1B84EE3EDADFC771779E9A1C3C03C04AC3 (void);
// 0x0000033D System.Boolean Grpc.Core.Internal.PlatformApis::get_IsLinux()
extern void PlatformApis_get_IsLinux_m683BA4F5C53C392DD780AA90460313ECEC8ED8ED (void);
// 0x0000033E System.Boolean Grpc.Core.Internal.PlatformApis::get_IsMacOSX()
extern void PlatformApis_get_IsMacOSX_mBB31699A724CEE50A0924DABFDCC588F540969D4 (void);
// 0x0000033F System.Boolean Grpc.Core.Internal.PlatformApis::get_IsWindows()
extern void PlatformApis_get_IsWindows_m2E74043C918DD52B2280CEFF8F10D17E5E9DE1CF (void);
// 0x00000340 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsMono()
extern void PlatformApis_get_IsMono_m9468DBEDE746CF5BC9F09F97981A2922EABF7CAC (void);
// 0x00000341 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsNetCore()
extern void PlatformApis_get_IsNetCore_m32D0962291BACCA3A737E6AFDB7EE92776B8BD5D (void);
// 0x00000342 System.Boolean Grpc.Core.Internal.PlatformApis::get_Is64Bit()
extern void PlatformApis_get_Is64Bit_m37743A197BB108CAA91C8198BC70B17E361E4D50 (void);
// 0x00000343 System.Int32 Grpc.Core.Internal.PlatformApis::uname(System.IntPtr)
extern void PlatformApis_uname_m609EB1AAB6200DB1CEEEF4B3940B0BDCAD32D831 (void);
// 0x00000344 System.String Grpc.Core.Internal.PlatformApis::GetUname()
extern void PlatformApis_GetUname_m3AC3546F48CB6E83D870ACE70D7C8C292DA81DB3 (void);
// 0x00000345 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.RequestCallContextSafeHandle::Create()
extern void RequestCallContextSafeHandle_Create_m2A95CC23E04C8BBE0A4F6175787AECB4E5705A0D (void);
// 0x00000346 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::SetReturnToPoolAction(System.Action`1<Grpc.Core.Internal.RequestCallContextSafeHandle>)
extern void RequestCallContextSafeHandle_SetReturnToPoolAction_m4D71071E22B0CD7A0C01D0FC27DD525CFC9579C8 (void);
// 0x00000347 Grpc.Core.Internal.RequestCallCompletionDelegate Grpc.Core.Internal.RequestCallContextSafeHandle::get_CompletionCallback()
extern void RequestCallContextSafeHandle_get_CompletionCallback_m200AFFC1B7B08B61A1E93C28AAF10EC41481BEB4 (void);
// 0x00000348 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::set_CompletionCallback(Grpc.Core.Internal.RequestCallCompletionDelegate)
extern void RequestCallContextSafeHandle_set_CompletionCallback_mC3DB7FD3562D097FCD31901E1B27FE21B7C7DCBA (void);
// 0x00000349 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::Recycle()
extern void RequestCallContextSafeHandle_Recycle_m26D2F4A6C3EA88D28629D3ADD72EE84E16990496 (void);
// 0x0000034A System.Boolean Grpc.Core.Internal.RequestCallContextSafeHandle::ReleaseHandle()
extern void RequestCallContextSafeHandle_ReleaseHandle_mAF64A21ECB1A739E5938DE889D46C763097518DB (void);
// 0x0000034B System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::Grpc.Core.Internal.IOpCompletionCallback.OnComplete(System.Boolean)
extern void RequestCallContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_m1CB8BE8FED775B93E82F857C8B12EA81577B8C43 (void);
// 0x0000034C System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::.cctor()
extern void RequestCallContextSafeHandle__cctor_mFB6B20E599A2ED85224E1871CF527E0089E4D846 (void);
// 0x0000034D System.Void Grpc.Core.Internal.SafeHandleZeroIsInvalid::.ctor()
extern void SafeHandleZeroIsInvalid__ctor_m7E656A1FB58ADC6448FD2641E17E56A96967EAF6 (void);
// 0x0000034E System.Boolean Grpc.Core.Internal.SafeHandleZeroIsInvalid::get_IsInvalid()
extern void SafeHandleZeroIsInvalid_get_IsInvalid_m978372947B2E0A3BB798BC60AEC63BB2B64E919D (void);
// 0x0000034F System.Boolean Grpc.Core.Internal.ServerCredentialsSafeHandle::ReleaseHandle()
extern void ServerCredentialsSafeHandle_ReleaseHandle_m840638D88CA9D536C2B7BE890B042B2CBE76DE85 (void);
// 0x00000350 System.Void Grpc.Core.Internal.ServerCredentialsSafeHandle::.cctor()
extern void ServerCredentialsSafeHandle__cctor_m0E405FC4C5D16349DB74C13069F478BE23D45CAF (void);
// 0x00000351 System.Void Grpc.Core.Internal.ServerSafeHandle::ShutdownAndNotify(Grpc.Core.Internal.BatchCompletionDelegate,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void ServerSafeHandle_ShutdownAndNotify_m066DADDEB5EB48E0C72DAF2933EC65C5476B7B9E (void);
// 0x00000352 System.Boolean Grpc.Core.Internal.ServerSafeHandle::ReleaseHandle()
extern void ServerSafeHandle_ReleaseHandle_m65A5C000977C09A757D0D6928B72F2F93755FDB9 (void);
// 0x00000353 System.Void Grpc.Core.Internal.ServerSafeHandle::CancelAllCalls()
extern void ServerSafeHandle_CancelAllCalls_mE58BAEC1363151D0DCF65DDD10CEE45913076D0E (void);
// 0x00000354 System.Void Grpc.Core.Internal.ServerSafeHandle::.cctor()
extern void ServerSafeHandle__cctor_m1A625FBF422C86D5F2E8ACA9DA2CD0B82A2AAC6C (void);
// 0x00000355 System.Void Grpc.Core.Internal.Timespec::.ctor(System.Int64,System.Int32)
extern void Timespec__ctor_m1384ADEA22D04D508007FC7298C380D2500E875F (void);
// 0x00000356 System.Void Grpc.Core.Internal.Timespec::.ctor(System.Int64,System.Int32,Grpc.Core.Internal.ClockType)
extern void Timespec__ctor_m4345712E5136B85DB1AAC299451D4BA7B69F5851 (void);
// 0x00000357 Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::get_InfFuture()
extern void Timespec_get_InfFuture_m1081C731091C90E6C7A868DB12F75E387FF67926 (void);
// 0x00000358 Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::get_InfPast()
extern void Timespec_get_InfPast_mCCA1B5F4ACE56C3B1C3BC8F780EB1BBA6D66F65B (void);
// 0x00000359 System.Int64 Grpc.Core.Internal.Timespec::get_TimevalSeconds()
extern void Timespec_get_TimevalSeconds_m571B6C93A9EB6F2EC6C4DB5E31D85AA6CA06E141 (void);
// 0x0000035A System.Int32 Grpc.Core.Internal.Timespec::get_TimevalNanos()
extern void Timespec_get_TimevalNanos_m7C47D1F224A7068523135C2B294C8FF7CC26E715 (void);
// 0x0000035B Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::FromDateTime(System.DateTime)
extern void Timespec_FromDateTime_mEA68EB6B9004C241A06F829A8C165454F052510B (void);
// 0x0000035C Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::get_PreciseNow()
extern void Timespec_get_PreciseNow_m32D2D9056BB9282E03F0DA8877184454699326D9 (void);
// 0x0000035D System.Void Grpc.Core.Internal.Timespec::.cctor()
extern void Timespec__cctor_mC2F83E9290AC0E4BC28B360C1ECF0FF99DA3D1DC (void);
// 0x0000035E System.Void Grpc.Core.Internal.UnmanagedLibrary::.ctor(System.String[])
extern void UnmanagedLibrary__ctor_m02619EE6F4B41F6D45611106BF25F9B1054771A1 (void);
// 0x0000035F System.IntPtr Grpc.Core.Internal.UnmanagedLibrary::LoadSymbol(System.String)
extern void UnmanagedLibrary_LoadSymbol_mE2F12764CBEB5D49F8AF224E1A3925A12E35157D (void);
// 0x00000360 T Grpc.Core.Internal.UnmanagedLibrary::GetNativeMethodDelegate(System.String)
// 0x00000361 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary::PlatformSpecificLoadLibrary(System.String)
extern void UnmanagedLibrary_PlatformSpecificLoadLibrary_mA91FE40F512309F76B0D9E36BEB6E31D349649C4 (void);
// 0x00000362 System.String Grpc.Core.Internal.UnmanagedLibrary::FirstValidLibraryPath(System.String[])
extern void UnmanagedLibrary_FirstValidLibraryPath_mEBCD5BE91688AB149E5F7FAD44DBF2FD5D43F05C (void);
// 0x00000363 System.Void Grpc.Core.Internal.UnmanagedLibrary::.cctor()
extern void UnmanagedLibrary__cctor_m909CD132CA4A8BD14392803EDF809C80435F17BB (void);
// 0x00000364 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Windows::LoadLibrary(System.String)
extern void Windows_LoadLibrary_m119B7164DCA85407FF3C0B978DA115DDFCC77AF5 (void);
// 0x00000365 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Windows::GetProcAddress(System.IntPtr,System.String)
extern void Windows_GetProcAddress_m1C1425E35E862AD7E242DAFB99403A0F6B5F964E (void);
// 0x00000366 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Linux::dlopen(System.String,System.Int32)
extern void Linux_dlopen_mB0370EE4949F72404965620F82BB8B61AD233217 (void);
// 0x00000367 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Linux::dlsym(System.IntPtr,System.String)
extern void Linux_dlsym_m529C2D9D78F8419FB921A60A379358385B75D0B4 (void);
// 0x00000368 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/MacOSX::dlopen(System.String,System.Int32)
extern void MacOSX_dlopen_mB8E4F8141A29C148F1E4028F0730345B0E5CB6E8 (void);
// 0x00000369 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/MacOSX::dlsym(System.IntPtr,System.String)
extern void MacOSX_dlsym_m715A2C7ADA4AA34BD1B22B8B552C7DAB2DDAD8D1 (void);
// 0x0000036A System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Mono::dlopen(System.String,System.Int32)
extern void Mono_dlopen_m99E4CF2695C06AB46A063D3973F134EE95112719 (void);
// 0x0000036B System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Mono::dlsym(System.IntPtr,System.String)
extern void Mono_dlsym_m203A90F70D2F6211B298FFFB55FE63DC5B0BEA3F (void);
// 0x0000036C System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/CoreCLR::dlopen(System.String,System.Int32)
extern void CoreCLR_dlopen_m0CDC59B96A7F0E18BEE68D91D933D601B1979AFE (void);
// 0x0000036D System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/CoreCLR::dlsym(System.IntPtr,System.String)
extern void CoreCLR_dlsym_m7331D98AA152166E3AE6E2308D43DE6413775FE9 (void);
// 0x0000036E Grpc.Core.CallInvoker Grpc.Core.Interceptors.CallInvokerExtensions::Intercept(Grpc.Core.CallInvoker,Grpc.Core.Interceptors.Interceptor)
extern void CallInvokerExtensions_Intercept_m142248113C926E7C76C2743076036DC0233796A6 (void);
// 0x0000036F System.Void Grpc.Core.Interceptors.ClientInterceptorContext`2::.ctor(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x00000370 Grpc.Core.Method`2<TRequest,TResponse> Grpc.Core.Interceptors.ClientInterceptorContext`2::get_Method()
// 0x00000371 System.String Grpc.Core.Interceptors.ClientInterceptorContext`2::get_Host()
// 0x00000372 Grpc.Core.CallOptions Grpc.Core.Interceptors.ClientInterceptorContext`2::get_Options()
// 0x00000373 System.Void Grpc.Core.Interceptors.InterceptingCallInvoker::.ctor(Grpc.Core.CallInvoker,Grpc.Core.Interceptors.Interceptor)
extern void InterceptingCallInvoker__ctor_m7109FF00A43434D1C909ABB09897808B0316C730 (void);
// 0x00000374 TResponse Grpc.Core.Interceptors.InterceptingCallInvoker::BlockingUnaryCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions,TRequest)
// 0x00000375 TResponse Grpc.Core.Interceptors.InterceptingCallInvoker::<BlockingUnaryCall>b__3_0(TRequest,Grpc.Core.Interceptors.ClientInterceptorContext`2<TRequest,TResponse>)
// 0x00000376 TResponse Grpc.Core.Interceptors.Interceptor::BlockingUnaryCall(TRequest,Grpc.Core.Interceptors.ClientInterceptorContext`2<TRequest,TResponse>,Grpc.Core.Interceptors.Interceptor/BlockingUnaryCallContinuation`2<TRequest,TResponse>)
// 0x00000377 System.Void Grpc.Core.Interceptors.Interceptor::.ctor()
extern void Interceptor__ctor_m828E69426C30DD717BD6659CDFB0DC86FCF93B20 (void);
// 0x00000378 System.Void Grpc.Core.Interceptors.Interceptor/BlockingUnaryCallContinuation`2::.ctor(System.Object,System.IntPtr)
// 0x00000379 TResponse Grpc.Core.Interceptors.Interceptor/BlockingUnaryCallContinuation`2::Invoke(TRequest,Grpc.Core.Interceptors.ClientInterceptorContext`2<TRequest,TResponse>)
// 0x0000037A System.IAsyncResult Grpc.Core.Interceptors.Interceptor/BlockingUnaryCallContinuation`2::BeginInvoke(TRequest,Grpc.Core.Interceptors.ClientInterceptorContext`2<TRequest,TResponse>,System.AsyncCallback,System.Object)
// 0x0000037B TResponse Grpc.Core.Interceptors.Interceptor/BlockingUnaryCallContinuation`2::EndInvoke(System.IAsyncResult)
static Il2CppMethodPointer s_methodPointers[891] = 
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
	CallInvoker__ctor_m14E10A85BDE1D6527069B685D823EAF472C60CB6,
	CallOptions__ctor_m1AEB9AE5049E7BCBE1FF371D565CF313FCFAEAF4,
	CallOptions_get_Headers_mFC6A54A222982567FBA9BC5E722F981B6BEDED32,
	CallOptions_get_Deadline_m690790D582CCB0BBE0453BFB4525A9225897B7B0,
	CallOptions_get_CancellationToken_m99069FDFB1F6AF9CD66440943E9D0994B570F845,
	CallOptions_get_WriteOptions_mCCAD13A0CCBBF55EE69877CC0179B6E1BE58F6E3,
	CallOptions_get_PropagationToken_mDAEB8A7CE897C1F462A5EA217E5DFDB492FB39F2,
	CallOptions_get_Credentials_mEBA6A20D2C0D61D3FB6776619B8E395A1737AE79,
	CallOptions_get_Flags_m17943C17884032BD7BD6209FAC07FA2891EB36A0,
	CallOptions_Normalize_m9629515871AAED7A0719B93CEC5366280DFC27AB,
	NULL,
	Channel__ctor_m1A1C8DA6AD18389A25C9B3C71C274443631EC487,
	Channel__ctor_m724DF69C027B605B508E353A08342AEF9CE918A0,
	Channel_get_State_m7A2A7FC2000828CC7D98BE8DDBBD189FDE1CC0BC,
	Channel_WaitForStateChangedInternalAsync_mAF4787ED2F4A84701EC5CF269353376131BAFF8A,
	Channel_ShutdownAsync_mC3E38FE10F4626CB219E62016DDCA503257DE159,
	Channel_get_Handle_mA57DC024D89B0B2325559565A05DEDB3C9D4B154,
	Channel_get_Environment_mECAC1A3A50FCA64EBC9A084FC8C03469C335E2AE,
	Channel_AddCallReference_m2F8D5F8470E15A5039098A791E4F210E30612BD4,
	Channel_RemoveCallReference_m62F2EFCF40A901308CB48B4AA43BE3698DEBB55C,
	Channel_GetConnectivityState_mB72C575A08D021152C19FBC65B8E0AF401C73312,
	Channel_RunConnectivityWatcherAsync_m0092B4B801059B6DEFE4CDA70DF7E03B4DC63ACE,
	Channel_EnsureUserAgentChannelOption_m7626A9DF0E0B1C912F964DAEF619570D7B5393A6,
	Channel_CreateOptionsDictionary_m341CC454564F5FF8964448E476560CCFBFDB6463,
	Channel__cctor_m1A7B482711A7D000C58D2298262A8C8F8185A75D,
	U3CShutdownAsyncU3Ed__27_MoveNext_mCF49ACE9F4DD4230A7B724D3867F7A337CF2B8E2,
	U3CShutdownAsyncU3Ed__27_SetStateMachine_m9A41DAA653D838C2B9B977446AF40C9ADC108BFC,
	U3CRunConnectivityWatcherAsyncU3Ed__37_MoveNext_mB16C33EB16EA1ED3B7C230B42924F614359456F6,
	U3CRunConnectivityWatcherAsyncU3Ed__37_SetStateMachine_m8C5E8CAFC1342E10670CBAFBEC2489AD239C6D7C,
	U3CU3Ec__cctor_m262CC69D754DED032DF3D624BEBFCD4ACDB4877E,
	U3CU3Ec__ctor_mFD7D29DF9C4C25A074FF3B819B1FEBF4B3F4EA14,
	U3CU3Ec_U3C_cctorU3Eb__40_0_mF399C2C5A5A59B74EDBC45A3D632708F86AAB8B5,
	ChannelCredentials_get_Insecure_m72957F89C56F5FC18AD5E811B6C1E1797A620D33,
	NULL,
	ChannelCredentials__ctor_m8163A1F7C6E64A6161EAE6E9CCBA84748453806B,
	ChannelCredentials__cctor_mF2AB8D2B0A8595D7A71F48B9A1C50422B6B8593F,
	InsecureCredentialsImpl_ToNativeCredentials_m47CF97A1279871F327244DAF711BEE2A8AECD812,
	InsecureCredentialsImpl__ctor_m90E6AC1968213015CD9C8BE09DA829A4D1FF8C26,
	ChannelOption__ctor_m6BB16321B902100FA71DFB1D71CEC9F0074CBCEC,
	ChannelOption_get_Type_mCD069610D4FBDB52EA05AA93D751A99B7DFB73A8,
	ChannelOption_get_Name_mFE49F4B5B53BAE8E4F73D6CCF5DFE77A460CE528,
	ChannelOption_get_IntValue_mC4B7690AF0C4F73DCFF777FC7D5389D7F9CA13C5,
	ChannelOption_get_StringValue_m44C52F7890BD0DAC5FFC6D76083D04C04523C5C4,
	ChannelOptions_CreateChannelArgs_mB15B07901BB88CC3201F999FAA0DFFB1872A6C04,
	NULL,
	ClientBase__ctor_mB752B8A09E97A4F7DA48DB34276B85E53C09290B,
	ClientBase__ctor_mC81AADBB6912059C94ED48F367E983224BBE18E4,
	ClientBase__ctor_mE1328313B33B19F032168BF55315035790E03D46,
	ClientBase_get_CallInvoker_m8A5DF25E614C5C611656BFD6FBB75AB59A1AC8DE,
	ClientBaseConfiguration__ctor_m1969F8CEF5A73F1ABEE3A7E0F9738BE10001A759,
	ClientBaseConfiguration_CreateDecoratedCallInvoker_mB44781B14FC22C6F77C969F068DDCA1DBD4A36A2,
	ClientBaseConfiguration_U3CCreateDecoratedCallInvokerU3Eb__4_0_mB1B01BEA093CA6D38B5D0F92E7F33005BC353810,
	ClientBaseConfigurationInterceptor__ctor_mF40F2E2C17F00263211EA8417F3A87451BDE0110,
	NULL,
	NULL,
	ContextPropagationToken_get_ParentCall_m98FE8C4AAA69FE4FDC7E76AC2E5988C95EDE6CC9,
	ContextPropagationToken_get_ParentDeadline_m74969472C7A9E96B08A4451F833433835E116B8C,
	ContextPropagationToken_get_ParentCancellationToken_m906FFCA76BBF7A32385EB4F848944B333794F4B4,
	ContextPropagationToken_get_Options_m2BC9B0EEECD7FB058543BF1962C135CED494B933,
	ContextPropagationOptions__ctor_mED163C8704796B026E4607C3AAFDB61566E2CB99,
	ContextPropagationOptions_get_IsPropagateDeadline_mD378A613B42E533F571B641B1496007ED5CF0BF0,
	ContextPropagationOptions_get_IsPropagateCancellation_mDC10BB9E384D6BFB97D9A17E8041A099DD3D3E9B,
	ContextPropagationOptions__cctor_m1B45E7FDF741D84D2BC018B7136C10F05A22E0C7,
	DefaultCallInvoker__ctor_mDB33F036E9582CDC692867AE23AF724C2C2334E8,
	NULL,
	NULL,
	GrpcEnvironment_AddRef_mAD11ABFF97DFC58C75AABDBCC49C7287DBB2BB5A,
	GrpcEnvironment_ReleaseAsync_mFCE8F893E89AA417148077FB733A717FD95185D0,
	GrpcEnvironment_RegisterChannel_mB0F9E0CEA91EE96EF949C9FC4906BB72B726259A,
	GrpcEnvironment_UnregisterChannel_mBFD439AB817BF9ABD44CB1E06BAB6EDF4C0F6B94,
	GrpcEnvironment_UnregisterServer_m757CE7F1BC313ADC07057AD27A033824A05AFDCA,
	GrpcEnvironment_ShutdownChannelsAsync_mB7184DB802A59FA72C873E39A6DABB5C94F3AE92,
	GrpcEnvironment_KillServersAsync_m21C4E4EA13EBC93D4FE6E8A762F4D0221534A9EE,
	GrpcEnvironment_get_Logger_m3D70D64EF455993F6ADCB2B64F696FAD44D0E8F7,
	GrpcEnvironment__ctor_m150FD9FDD4022C594BC18A6A8A97B49A4ABE82FC,
	GrpcEnvironment_get_CompletionQueues_m3F6B4119310EEA15364FF8B69A8FFF5445103D60,
	GrpcEnvironment_get_BatchContextPool_mEF69D66885A81BEDC61458F0C3362517692511EF,
	GrpcEnvironment_get_RequestCallContextPool_m0F35E281E6DC15C3E616E998B59F5C2F5AE51FE7,
	GrpcEnvironment_get_IsAlive_m05495967B36402FA2DA579022953EF20A7E4A620,
	GrpcEnvironment_PickCompletionQueue_m216F9F8A39D6242456F2B19290BF5C30A8EE01FD,
	GrpcEnvironment_get_DebugStats_m56F2E28D2EA2786F896CD7C21B25DBEC11139AE0,
	GrpcEnvironment_GrpcNativeInit_m9AE8B6A6D6978191237590278588DB01F34C7B16,
	GrpcEnvironment_GrpcNativeShutdown_m029AA2C66D8D065DEFF4976703E93F341F6B9159,
	GrpcEnvironment_ShutdownAsync_m1EC1778E430DBD17ECEE727EBB262771F78204C7,
	GrpcEnvironment_GetThreadPoolSizeOrDefault_m475465E45CF61660B631C77D1AEABCAB412363CB,
	GrpcEnvironment_GetCompletionQueueCountOrDefault_mE9571A925CBE83CCAF9DCB801CAD95A9364B8921,
	GrpcEnvironment__cctor_mE8A8B2BA6E6994934CD42551B623BFCBA0443A6B,
	GrpcEnvironment_U3CShutdownAsyncU3Eb__59_0_m00E470BBE9291F8A1ACC80509EED640687E01E83,
	ShutdownHooks_Register_m2A099E8A81D1B32B113C3DFEC9D04721718B46CE,
	ShutdownHooks_HandleShutdown_m7ECE40A79D449A3AC6BE74B37B9B769C8AF061F2,
	ShutdownHooks__cctor_m62C0F0166FE88DB0871203ACBD50A8BFA47912EB,
	U3CU3Ec__cctor_mB2D6CACBC0C4236E613BCDA3124297741D911693,
	U3CU3Ec__ctor_m29FE9F41D13507D12D8C179D654ED20A08FB23A4,
	U3CU3Ec_U3CRegisterU3Eb__2_0_mEFCDEEEA5B95DDFAB059796DED18F6EC90CA2F16,
	U3CU3Ec_U3CRegisterU3Eb__2_1_mA338A044EF13AF20A57DDD9F477635D9EE4CA561,
	U3CReleaseAsyncU3Ed__25_MoveNext_m8C324FAF133C61CF8D0D09C10CBBA3601436F2EA,
	U3CReleaseAsyncU3Ed__25_SetStateMachine_m6D16DDD506C9287E858D5628FD8D16E13F0D858E,
	U3CU3Ec__cctor_mE883D5D767EEA794C2A6D99AB2BCF5D42309A406,
	U3CU3Ec__ctor_m35323870B47C5F0902A32A56330F4AD1F99D72A9,
	U3CU3Ec_U3CShutdownChannelsAsyncU3Eb__31_0_m09E49BF280A5DD6B723F049829FD475D8AE3F7AA,
	U3CU3Ec_U3CKillServersAsyncU3Eb__32_0_m6E58ECD96915B4461CFB4502F60D9D093C5760BF,
	U3CU3Ec_U3C_ctorU3Eb__44_0_m2B999F710E75EDF79B69F05EACA66A64E76CAE43,
	U3CU3Ec_U3C_ctorU3Eb__44_1_mB2F80B00AB934EBA7C58BE4B6B322537FAA6E54E,
	U3CShutdownAsyncU3Ed__59_MoveNext_mEDF586693548F068CDFEF4608BDF0999DCA468F9,
	U3CShutdownAsyncU3Ed__59_SetStateMachine_m7C5E392AC9059FF7ECBDF1D4FC1CB09157D0F4BE,
	NULL,
	NULL,
	NULL,
	NULL,
	Metadata__ctor_m9FACCA1CDCFB30E895C93B76F4932BC4841BA1D7,
	Metadata_Freeze_mBE1D996B7B98F74103F841DBA47C95FD52589A63,
	Metadata_IndexOf_m6D45656A88BF8FA8ED9A76AADECC94809A4DDBFD,
	Metadata_Insert_m1084C9630FC7521181D11E99C18374983FBD0C8F,
	Metadata_RemoveAt_mF60BFFAD2BA13DC9CC5F19BA6915EA5ADD475572,
	Metadata_get_Item_m49D4C16103D03966E77859F2D586721E0080ECC5,
	Metadata_set_Item_m45B64DEC0CA61A752E8F60E632D776050B11F081,
	Metadata_Add_mD1007C4C23168B98C467743B56722B0BB2B5E9E1,
	Metadata_Clear_mD5F35F7C1853CE929713AEB1581F169DFE44A8AE,
	Metadata_Contains_m0407E8767759C6BF5B73024455EDD1256C88AC92,
	Metadata_CopyTo_m4E306B96BA66E9CC9B3F0AD257A1E17AF276F5AE,
	Metadata_get_Count_m83237ED3AD0D42FDA063942F213F17710F4493CF,
	Metadata_get_IsReadOnly_m7144018B362CD6C6142CA27B90059C44A9AF88F2,
	Metadata_Remove_mF8A95BBB6AB83231BC3B3D2FACDCD88B3B6A86FC,
	Metadata_GetEnumerator_m70BC7FBF897C1633EEA26037DA63093C9F3B501D,
	Metadata_System_Collections_IEnumerable_GetEnumerator_mE0286EA400F60B979EFE39B1D990848F4DB3D1AF,
	Metadata_CheckWriteable_mCA7F57399A61CD7B8E92BADEAFB6749B2D285F5A,
	Metadata__cctor_m7EE6A9E581C749C165C9307AB10CA02EB3ACDE95,
	Entry__ctor_m242B1476229A31F3C3532AF9BF2A15803C8009F2,
	Entry_get_Key_m6406873E1A418B8493A3F6F43E02035E713E157C,
	Entry_get_IsBinary_mE71882A1E67B476A34AC9719203F383ACD8AD3C2,
	Entry_ToString_mAE96D3D3DE6FF1E8E931452D61A723075AC6C8C0,
	Entry_GetSerializedValueUnsafe_m52ACE4411AB1AABAF101E7DB81C28D3702AB6CC9,
	Entry_CreateUnsafe_m6AB937749D4D611794958DFE52038D1A96FC789C,
	Entry_HasBinaryHeaderSuffix_mA16AEB05C7375226FD9653D9BBD9619BFBFA88E5,
	Entry__cctor_m7A76A417C4CD54F19215AE8F893F3B880AFD2678,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	RpcException__ctor_m8E8E2780D8EEE4FEE3C1B329E33BD7A77F8826BD,
	RpcException_get_Status_m94B362BFA1DE6325D1474E63581B179D13CB772F,
	Server_KillAsync_mEE5BBC5E318204DDC8AE5DDB431D728CBCA410FB,
	Server_ShutdownInternalAsync_m004F538FE49A8E34F91ED62840B0A45596094F08,
	Server_ShutdownCompleteOrEnvironmentDeadAsync_m1743441C21D162BACFC284D786175F14F3E68226,
	Server_DisposeHandle_m65854C4A0031F454CFF40F0FA9BADE0020D5D43F,
	Server_HandleServerShutdown_mEAD942FCD249B6AEF32DA86B0CED122C80FB1E53,
	Server__cctor_m02127C89FEE5604AEF60CB5E79BA4478582E2A26,
	U3CShutdownInternalAsyncU3Ed__32_MoveNext_m1566CF613F56E95FCC908D9E2BDE7E97154BDC5B,
	U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_mBAF9615560F8F99805EE87FE50EAA1A5AE0E7F44,
	U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_m2A4F57280EEAF69C40FF8A3709D5DC524E1CF177,
	U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_m10A2710C4114AF8D2A8C308C92293166414D4A1F,
	Status__ctor_m24B7DBD91C17D3A49A8445161FFEA196C945C268,
	Status_get_StatusCode_mDD6E402914C3542C77CD5A475AE9F2D451F71B6D,
	Status_get_Detail_mEC53DC9F6C581A48AE1AB63C634571459D909CA8,
	Status_ToString_mE23E3F9362C611D293FC0BE2BB2E0DA3C7BF6F04,
	Status__cctor_m2ABAD7DDB3D325821AA25CA82BC4B8F68B16D032,
	WriteOptions__ctor_m949AB76994DD197FAE47945B00BBF3251576B5CE,
	WriteOptions_get_Flags_m525076B776383933632DC69FBAF364A033B4FB57,
	WriteOptions__cctor_mC03D17CD793CBC379323FA8FA6682458C8A6AE31,
	GrpcPreconditions_CheckArgument_mA723983A3B4EC1EAB33694EFB08063FE8E20DCAC,
	GrpcPreconditions_CheckArgument_m373B57B91A5BF6F190274633BB71BE35742D4F9E,
	NULL,
	NULL,
	GrpcPreconditions_CheckState_m9C04796062CF98653CA9049CFD5F86951E02C9EE,
	GrpcPreconditions_CheckState_m487E8372240985788633EC5040D74ACD64D9F952,
	NULL,
	NULL,
	ProfilerEntry__ctor_m3FF1E12C83AA8248E759F953AEF5E937157FC000,
	ProfilerEntry_ToString_m05EE211900D090352DF336B1341CD45AE0BE905F,
	ProfilerEntry_GetTypeAbbreviation_mB9E2EE0E4784289B0E260603E679AC7ED1CE7788,
	Profilers_ForCurrentThread_m4A7BEC0271981DFCFC6B682E677E732C5BE02EB6,
	Profilers_SetForCurrentThread_m1AB9FB82F30A772275494B7D3CA9B982F873AF09,
	Profilers_NewScope_m8E74C335DA351E45A27B886A89B095BBAD27FC23,
	Profilers__cctor_m9329BDDD2E3674471DA5791075DC67AD78A2879E,
	NopProfiler_Begin_m66108B9847EF8344D3301C5947B81B3221080944,
	NopProfiler_End_mB9B43DC73A6EA3D7F0295593FA87FF1AD2545D96,
	NopProfiler__ctor_m608FEEC2F703D8E6B1A13A6416EE3391F48FE82D,
	BasicProfiler_Begin_mE4B2E3B3AF1EA0A6ABD4DFAD0A48030D746DD6ED,
	BasicProfiler_End_m6BA67351699958FC01E3D30A6E54EE14C4D5A110,
	BasicProfiler_Dump_m7A5B3900BAEA24EE6315D01142A0539C2811374A,
	BasicProfiler_Dump_mF6D7BDD08BAC27369FA938F3C2E416F6FB38A659,
	BasicProfiler_AddEntry_m60899C61B6E4F8AE1CBCE4B0D14255CB18FD077F,
	ProfilerScope__ctor_m483C2898546B1C5F86C967A95141AA30D10275CE,
	ProfilerScope_Dispose_m035AE616C0C95C33177C91A7F362CC51B68F23E6,
	ConsoleLogger__ctor_mE369C7DD6DCD07EFFC1EB47BAF710945B8EA5747,
	ConsoleLogger__ctor_m3DBAD5398DF090E3D59D44C72A40508A8D1097BC,
	NULL,
	U3CU3Ec__cctor_m239B8B59651722D715C2E26AD61578E647BEEBF0,
	U3CU3Ec__ctor_mDB152F4DD2D58370C816BF22A62175F30E2F7854,
	U3CU3Ec_U3C_ctorU3Eb__1_0_m6BD07984B31AC91AD8BE47A330F9B02C7EF38DEA,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LogLevelFilterLogger__ctor_m0C8C22BEE1D930984B355F7E658EC0C920CBD7EA,
	LogLevelFilterLogger__ctor_m0D729C9CB3BF2D63D18C6A15E016C5AE7EA2EC59,
	NULL,
	LogLevelFilterLogger_Debug_mC7B63DBD3E70300E442160D4BC3C8E9AA78FC93C,
	LogLevelFilterLogger_Debug_m06FE192F3617DFF1F234E7B113E4A1CB342E7F54,
	LogLevelFilterLogger_Info_mFA3421A072F6D65F7895BBAA2CEE814B10A260D7,
	LogLevelFilterLogger_Warning_m92FBC925968A294B9E3C788E3945AD90EB6A97C2,
	LogLevelFilterLogger_Error_m8297B845D513ACC6182A38C498B4BFCF4EEF2CFD,
	LogLevelFilterLogger_Error_m28D5CC4CBE4E26A93D4F1409EB4BA5E19E6931E6,
	LogLevelFilterLogger_GetLogLevelFromEnvironment_m609D6A17D0EDBBA72CDBF1EC7BB36FCCAF0E227D,
	TextWriterLogger__ctor_mBED6509536AA9FF73555B924E42D1DFA4EA0C94F,
	NULL,
	TextWriterLogger_Debug_m872C644E122AC35FFEF341D3BF77A8118F6324A2,
	TextWriterLogger_Debug_m23C523D56DFA60FDE24FFB6F926E7341F3FCCC25,
	TextWriterLogger_Info_mDF9B71E5B9992E521D90ED52EF3876860E96C9DA,
	TextWriterLogger_Warning_mEBFEE177BB27FCB0CFA390B16A4DE0F27618201A,
	TextWriterLogger_Warning_mF0B3D508F336BF9AFF942C9FC8FDB88515898D85,
	TextWriterLogger_Error_mE90FD2105548FFA10B5798DF1E6E80B316518DD5,
	TextWriterLogger_Error_m223C8EC416F14045F6E87BD7444EE9923E0A93C3,
	TextWriterLogger_get_AssociatedType_m6F886923B629230DD38C168B2E12081243C37049,
	TextWriterLogger_Log_m4DB66F319F370D049EFF4B4D9E138305A882C770,
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
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AtomicCounter__ctor_m7974CF7B21105692BB74D973CA52F9DB2076BA12,
	AtomicCounter_Increment_m0D73151AF41FF0B7C276CD2EE38633F8BADFD402,
	AtomicCounter_IncrementIfNonzero_m40E20636B6DDF0F0805EF6831FFA3D98C8170E8F,
	AtomicCounter_Decrement_mB8A946D434BA4CEC3D841666A645D6E1AE6097E5,
	AtomicCounter_get_Count_m8F68E0BC018A8092C7DA5AC8F8724E4EE456B081,
	AuthContextSafeHandle_ReleaseHandle_mEC07C82226C75A859AB024D7989C01136E2D23B9,
	AuthContextSafeHandle__cctor_m5F478B967E1F78CAAC522DE90AE293298FD6B42C,
	NULL,
	BatchContextSafeHandle_Create_m1CAD2643CDCC821FB45FA633949267556F737D94,
	BatchContextSafeHandle_get_Handle_m24B8D1E744A4F7DD138CBD94831648A739646FF0,
	BatchContextSafeHandle_SetReturnToPoolAction_m1428992336300AA5AA23EE93963F7EF8E0123BF3,
	BatchContextSafeHandle_SetCompletionCallback_m15A78BBA9A0001228856D0CF7D6D284EAFB0F792,
	BatchContextSafeHandle_GetReceivedInitialMetadata_m153A2CEC77A6B3BAF300DA8C016139E732D8C89A,
	BatchContextSafeHandle_GetReceivedStatusOnClient_m414D5F5FAD7B44F036AC394A1D3C147E3238CF01,
	BatchContextSafeHandle_GetReceivedMessage_m57A63678F5A42BCE2658F27F240AAE4F7704D7FC,
	BatchContextSafeHandle_GetReceivedCloseOnServerCancelled_mAD912E3E23EE173CCA7ADEBD71FCFCB9B4308769,
	BatchContextSafeHandle_Recycle_mC78BBE1ED115F26CFE6282CC4DAAC51AA00DA190,
	BatchContextSafeHandle_ReleaseHandle_m763FB324C880F482890467965D65176B9718EC1C,
	BatchContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_m8F04B8BEE65461BA669E264DCD5C63B426B02C38,
	BatchContextSafeHandle__cctor_m026BE4A6E60CE8CF37F3497AE266A47A5726E462,
	CompletionCallbackData__ctor_m3729AC1E1BA8567E5B22FF19858BAEA497CA049D,
	CompletionCallbackData_get_Callback_mAD7916AA2B108E70FEA7D2B0A427DA95B968B127,
	CompletionCallbackData_get_State_m1ABE57B421E8574ECC458DC5BD3AE65F61EAB8A5,
	CallCredentialsSafeHandle_ReleaseHandle_mFB3E734C817E3A7C90A79C95272A8AD3673DA939,
	CallCredentialsSafeHandle__cctor_m292547949A696C3122A0A890229D87D2FE9A9EE1,
	CallErrorExtensions_CheckOk_m5AA87AD51F966025A2B4C42BF4A10AC3E8413E17,
	CallSafeHandle__ctor_m517D908CD9F8CF08B3CD259692BC85699F8F1EA0,
	CallSafeHandle_Initialize_m7ACDB8416A8D713D43A52723FEB88D2ED0BB7E72,
	CallSafeHandle_SetCredentials_m9215165F4A1B53DDB5AA9E569A4857F365B8A796,
	CallSafeHandle_StartUnary_m91DE725C4B6B1CDA1EDF5FEF7169D13C638A33E9,
	CallSafeHandle_Cancel_mC714A4502B12A357B02E430FBB4061436753D1FA,
	CallSafeHandle_CancelWithStatus_mA3D328342B4379D8CB2F8258864887DC4DF511A2,
	CallSafeHandle_ReleaseHandle_m3285C7C1552867484F6FF19A2F20344B9604AFA9,
	CallSafeHandle__cctor_m3884B98858DAE789EB6DBBA68CAA9717ADB10283,
	U3CU3Ec__cctor_m286535C3B760F849D997FF100A00623DB6F5F9AE,
	U3CU3Ec__ctor_mF9EFB64FA56C786276FA4BB10460EBBB95D4E441,
	U3CU3Ec_U3C_cctorU3Eb__33_0_m82C46D8109DDB2DBE30D2656B4C4EE9A2EFD2016,
	U3CU3Ec_U3C_cctorU3Eb__33_1_mEE0320FB56C3F92F1F37064083C69DFC32CABCBC,
	U3CU3Ec_U3C_cctorU3Eb__33_2_mD81A52C710336C9F1664D84B9A52904E07AEF3D2,
	U3CU3Ec_U3C_cctorU3Eb__33_3_m259E1B4ED4803D23940995073E9E1D641261AAD5,
	U3CU3Ec_U3C_cctorU3Eb__33_4_mE75BBDB8045087F0DDD2B3CBE3F79ACEB1A33ABC,
	U3CU3Ec_U3C_cctorU3Eb__33_5_m9E5419C2B72F810D28D8A4643C834A58EF5F3D2A,
	U3CU3Ec_U3C_cctorU3Eb__33_6_m95845C67F16219C708A95DAB65ED597130908296,
	ChannelArgsSafeHandle__ctor_m65C166DECD9D8E2E00CFFBBD21B137D651E062F4,
	ChannelArgsSafeHandle_CreateNull_m9CC7537F72ADFAB4AD7460CFD19B54AD9B5DA9D1,
	ChannelArgsSafeHandle_Create_m7CA50EDEDECAA72D6FF97492A7C819D4A88DFD55,
	ChannelArgsSafeHandle_SetString_mBBEAF0C29D93FEBF6CF0B37DF3EDB4A1E1625C23,
	ChannelArgsSafeHandle_SetInteger_m147968C034CD3F46E1517F8B61677816F44F844F,
	ChannelArgsSafeHandle_ReleaseHandle_mA202712485EAD2423B2AD4DC9EB8C20E42BCBDB1,
	ChannelArgsSafeHandle__cctor_m6A3B128CAC0F819FC5798A20F4606311C606E3AE,
	ChannelCredentialsSafeHandle_ReleaseHandle_mA6D137AE68CC5D0225A01C17B135CEA31C9D9A17,
	ChannelCredentialsSafeHandle__cctor_m99066BFDA58BB602F8C5DDF1317E48BCE6BBBE08,
	ChannelSafeHandle_CreateInsecure_m0EC4330059BD7AF8049859F8C7BEDEAA57BF3DF0,
	ChannelSafeHandle_CreateSecure_m152813B7EAA0C00FB20A2326E07EBB1B86107142,
	ChannelSafeHandle_CreateCall_mAE441BC92399AC2691E59C5F1943933780FE5258,
	ChannelSafeHandle_CheckConnectivityState_m7656F44A598692C175853CF4F8BDBF13C531C1BC,
	ChannelSafeHandle_WatchConnectivityState_m84E8D47750DF72B7F68CE75F5FA840298EECA504,
	ChannelSafeHandle_ReleaseHandle_m586DBE44DDD72ECF178B9E1FC418391ADC34F725,
	ChannelSafeHandle__cctor_m13E84E09FDE041581E9565D8592AC75FC5A48D3D,
	ClientSideStatus__ctor_mD608389BE52E1457F765F4FB017F52E15AEB2AB6,
	ClientSideStatus_get_Status_mCEA26A40C7599141284FA8B0F351C0F65F2D6A3A,
	ClientSideStatus_get_Trailers_mF94B423EC5844577EEA4C11EB433DCE8D9CC263A,
	CompletionQueueEvent__cctor_mC75B41668358EA7626D899D2AC540A0729BC25B4,
	CompletionQueueSafeHandle_CreateSync_mF33BCC0312DCEE775BBCACE85ADD539F6BE56D27,
	CompletionQueueSafeHandle_CreateAsync_m4BBAAD9A297ED3920CE92DF47ED8F169D4C736A5,
	CompletionQueueSafeHandle_Next_m7C670BCFF808EA9297B57D6F9E30D0640118113F,
	CompletionQueueSafeHandle_Pluck_m88835BE76FCD49E5FBE1CAB94ED1BBEAEF9E0B81,
	CompletionQueueSafeHandle_NewScope_m827904599913BE7C1B1D132082E76CD3D12E2622,
	CompletionQueueSafeHandle_Shutdown_mC5B14144CD0CD0C672291A134C1DE0D6BD6BA75A,
	CompletionQueueSafeHandle_get_CompletionRegistry_mEEA1B6DDB1393B93925877FB612BE441DB904137,
	CompletionQueueSafeHandle_ReleaseHandle_mB8BAD8D2179520B4FC242345AA9D75ABDFC07EA9,
	CompletionQueueSafeHandle_DecrementShutdownRefcount_m5DE45FFE11B6ADF840FA62BD9CF4DBF546182E64,
	CompletionQueueSafeHandle_BeginOp_m90069DD4B388790C9F00D50B1700E31D5C961876,
	CompletionQueueSafeHandle_EndOp_m32107AFE26F1C752CE3682920F2F0D964C579A12,
	CompletionQueueSafeHandle__cctor_mA75471436B491E27820E787FB29DB9206EB12C1B,
	UsageScope__ctor_m1574271335AFBD32A321477847586059B52C67D1,
	UsageScope_Dispose_m18D3245A5F32184D31FC837A4D65BCD75B92FB97,
	BatchCompletionDelegate__ctor_mD9C9749E54B8FE1A8111FD91EF1867BB48DDD58A,
	BatchCompletionDelegate_Invoke_mEFAE8E58DF061573F70A6AF265C26E6F72449332,
	BatchCompletionDelegate_BeginInvoke_m8C231161FB5AD53C13856255256181639EFBDE38,
	BatchCompletionDelegate_EndInvoke_m935FDE47E582A67513CCB7C7E229BDB23F50C9E7,
	RequestCallCompletionDelegate__ctor_mF8767BDC66E420EB9518BA042890EE6E3253A724,
	RequestCallCompletionDelegate_Invoke_mF972A346DA8708BEDB74E81930DD20325AE42C59,
	RequestCallCompletionDelegate_BeginInvoke_m1EAD48F25CB5FD1A1C8AB3686ECFA48F0C22841D,
	RequestCallCompletionDelegate_EndInvoke_m86EC270C4FA89B024266C91C0F048C92799CD0A2,
	CompletionRegistry__ctor_m0C3430B9BEE90A1E759FB57372B6177186F4BDF3,
	CompletionRegistry_Register_m21602F31459239434329B2BA51313D6235BCC9E9,
	CompletionRegistry_RegisterBatchCompletion_m34E5B2CB0215A45A8733FB6A275C0CEF04D69D25,
	CompletionRegistry_Extract_m41A040F8CCAA00D8AA362D91496A5584CFCCB8CD,
	CompletionRegistry__cctor_mBA505984292944585C0B9A8D8475A0DF9268B54C,
	IntPtrComparer_Equals_m28A047A8A6E91B6B7B9B8E40D83ADFA7C62FCE36,
	IntPtrComparer_GetHashCode_m098B705735AB80192B3F7FC96DAB91F8DA955207,
	IntPtrComparer__ctor_mF482E04E2D2E979116AF05605052BB0577E2C854,
	CStringSafeHandle_ReleaseHandle_m2BAC1A4C51E33DCF5774B0844B52E80FEEC360CA,
	CStringSafeHandle__cctor_m69DEAE4EF8D8A7C8DDD054DD4367DD8EB2C74BA8,
	DebugStats_CheckOK_m098392C37999A8EECE4CCEA14D56F6F93A276223,
	DebugStats_DebugWarning_m55601B475C393BD6E5BA71F0A3D05B512EF182ED,
	DebugStats__ctor_m1F30B51352AD2266CEDCABEC955F4B0AD920F088,
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
	DefaultSslRootsOverride_Override_m9F1E736961167B585C9C6827F6EE669ACADEF553,
	DefaultSslRootsOverride__cctor_mDE6F96FA261EF8A8E1C4F4B50348D11EB277E3C3,
	GrpcThreadPool__ctor_mA70A1F1CBCB8937A4ABEA5EE1FE2A85169785041,
	GrpcThreadPool_Start_m143FE0D3A33F16606DB7210BD83E079283C99100,
	GrpcThreadPool_StopAsync_m3BD6F361D81B809EA00AA157DE8D28C300CC27CA,
	GrpcThreadPool_get_IsAlive_m23E6685AF3BE0DAED101F52585A0F5DDA0A69A94,
	GrpcThreadPool_get_CompletionQueues_mADFBE1774095EE9385C0BF880C67CABD77D0A9A0,
	GrpcThreadPool_CreateAndStartThread_m92701F9D08073A3C6C4C715DA26501031ABC9248,
	GrpcThreadPool_RunHandlerLoop_m2991ED3557D785AE77BFC5C8B3248132E66D847B,
	GrpcThreadPool_CreateCompletionQueueList_m3F59E746922590122432185D55A9E40EE13400B7,
	GrpcThreadPool_RunCompletionQueueEventCallback_mFE555E698BD725531DEFDDB4053DFA73EB25CC3B,
	GrpcThreadPool__cctor_m5522C93E0F2C9C0AA3C4F17CD7A7671E49E591D6,
	GrpcThreadPool_U3C_ctorU3Eb__15_0_m2F9B11D73FE160725973EBC39812C9D5C03313A9,
	GrpcThreadPool_U3C_ctorU3Eb__15_1_m2ABFCF4FB032B9ABA5B2D561338FE76B445A8B9B,
	GrpcThreadPool_U3CStopAsyncU3Eb__17_0_m0924DB9AB9C89049AA861CF991358F3393ABB81B,
	U3CU3Ec__cctor_m86609044E0CD71D13C743BF08C5C3C5F25D31EE0,
	U3CU3Ec__ctor_mCCBBD6408EE7EF38C4D767ABA3803CE2CEAF5D77,
	U3CU3Ec_U3Cget_IsAliveU3Eb__19_0_m0BE48BB22B0E201982CAF31ADEBCD542678F2C9C,
	U3CU3Ec__DisplayClass22_0__ctor_m8F090A93B57BC5303687D22D9EE54ED19CCF9D85,
	U3CU3Ec__DisplayClass22_0_U3CCreateAndStartThreadU3Eb__0_m98D8E52DCA9A79BC019154929A8D02E608D5AE06,
	U3CU3Ec__DisplayClass24_0__ctor_m96BE1FF8420CD5F1149C1CB111BC8385CE28EF6A,
	U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__0_m26BCBB6761CB69D707828078D6366478EE5E27E8,
	U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__1_m406A62498077637D32A222E6BDCDF4B83296CCE2,
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
	MarshalUtils_PtrToStringUTF8_mF806393EC8674A0C51568CF50BF5A260D16AF624,
	MarshalUtils_GetBytesASCII_m8D4C209F8953940554262F415B82BCBB3ACEDA6F,
	MarshalUtils_GetStringASCII_m8C2373EBB48EE89853102DD8F3E9780F42640A50,
	MarshalUtils__cctor_m77852343E88BB0E78B0A8FA6E0A18DCA61EEDF47,
	MetadataArraySafeHandle__ctor_mAC67AB927B4070E5A08436037C0763FF93E134C2,
	MetadataArraySafeHandle_Create_m2039F33BAEDBCC3F13C1C1AA5303966CAD7E3F90,
	MetadataArraySafeHandle_ReadMetadataFromPtrUnsafe_mFFE4315DD0CE37D9019D0D78F83217B8D9911C48,
	MetadataArraySafeHandle_ReleaseHandle_m3921F6D2E2ECAA0A5D8CB706E0B6ED7EA6C5B555,
	MetadataArraySafeHandle__cctor_m09AE04E2D6066B23A3F86FAEF9EBBBB5509A43C9,
	NativeExtension__ctor_mBB4876A1EFDD925A63B8E10EEDB0A262D51EC379,
	NativeExtension_Get_mCEE2E00D7A73D38930E07FD802775F1DA19ABE3B,
	NativeExtension_get_NativeMethods_m05C9341D9219CFF6AEA1D1062D685F00EA83A76A,
	NativeExtension_Load_mD871AF4B177B28F64B369A3DD0311719E7898630,
	NativeExtension_GetAssemblyPath_m6D34CEC76FC2A9000D140EFAE3C33C3CCA89F07B,
	NativeExtension_IsFileUri_m2E1B5E6AE93B2E23712DE794015FF00231006E1D,
	NativeExtension_GetPlatformString_mE45132A1105EA0F62E9E5EAF89F9973F4C5973AA,
	NativeExtension_GetArchitectureString_m716A1F66BC8E256C6E0387D74A401538ED7AB87A,
	NativeExtension_GetNativeLibraryFilename_m742C630AEABEDE23122AD70AFDEAE2089DA14F3B,
	NativeExtension__cctor_m02340E1433DE008CCF16F1728F9D11543DDC1AE1,
	GprLogDelegate__ctor_mF547E54638D8A9D265C45A4A5A30AAC5B78E44D0,
	GprLogDelegate_Invoke_m0CDFE6CC78F9A7F2A0FD99AC42A456B8EB650C85,
	GprLogDelegate_BeginInvoke_m02590F0678C0A3E62A1AD21D7C2DB475258C142B,
	GprLogDelegate_EndInvoke_m017982A8C8D4D865BFAF75E5099555C427A9DEA3,
	NativeLogRedirector_Redirect_m3972FE39518E055D810F4D80B9F8503D84B61401,
	NativeLogRedirector_HandleWrite_m9F113EBB49A1632924AD8A1EE47D76C9991DFF30,
	NativeLogRedirector__cctor_m8051C7F6DEF423DD51B69D877E6C87D5E7A8B91E,
	NativeMetadataInterceptor__ctor_m4F872513EB7D0D32C5A0CEA37F514B231982E346,
	NativeMetadataInterceptor_Invoke_m1C2BF147010A00C1BB34F1BFD6E1D32F8775A868,
	NativeMetadataInterceptor_BeginInvoke_mBF76CD7A1F0D40D474CA66DBC39632721392BDBB,
	NativeMetadataInterceptor_EndInvoke_m3EDFA5DE7B1D5B5DFEB0C493ABDDAE617FF9F9BB,
	NativeCallbackTestDelegate__ctor_mA61C490A4BB4CBEA9629393FE3B0665D6D305B89,
	NativeCallbackTestDelegate_Invoke_mC4D46085DFA1CE639E50DCEC0F22E90753BC9D2B,
	NativeCallbackTestDelegate_BeginInvoke_m158DA41CB02D7361E560487FE71CED607E4D8859,
	NativeCallbackTestDelegate_EndInvoke_mC8DC83C096BEB46ED7665EBD17FFC9C488C2D495,
	NativeMethods__ctor_m33FF7379DF6AEACFFF5B43A2126E7E1E5DA8903F,
	NativeMethods_Get_mC638EFF33AD00D6AC3609E45E34042ABAE48CDBB,
	NULL,
	NativeMethods_RemoveStringSuffix_m04485271BC5D5103AC8D3F858F20D97C84505B0E,
	grpcsharp_init_delegate__ctor_mB6764645C6B05B604DFA939DDDA5EDBF16AF8F33,
	grpcsharp_init_delegate_Invoke_mA9C36FEBD1AAE430CE8E4A086D67FD66C4A78875,
	grpcsharp_init_delegate_BeginInvoke_m5A58BCD2FC25F12A41E7FBE7D6E9A80D2BB263A6,
	grpcsharp_init_delegate_EndInvoke_mA41EE996B0FDD36574373520DE9536CB0B30F6DD,
	grpcsharp_shutdown_delegate__ctor_m75864B29EB8C232C4D99867B0D5743DBB379B8E1,
	grpcsharp_shutdown_delegate_Invoke_mB638C4E14B3C08D396927D8F2CCCAFDB3EAD9B7E,
	grpcsharp_shutdown_delegate_BeginInvoke_mCBC3E8CE8D96E93B3A099B792BFC525BF8EB9D69,
	grpcsharp_shutdown_delegate_EndInvoke_mA8AE92A27FC2331A7D73D9B649C63B73D7181C9E,
	grpcsharp_version_string_delegate__ctor_m9C52207025D842995233B53175B44BE9B289C7AC,
	grpcsharp_version_string_delegate_Invoke_mD54C48FD33B0D633548FDA52DC7D63842E02ABC8,
	grpcsharp_version_string_delegate_BeginInvoke_mD51C3261D17E6B18087885E4D176054D13A455E0,
	grpcsharp_version_string_delegate_EndInvoke_mB46C0B42BC2707545F4BE237BD5F9424FD40DADE,
	grpcsharp_batch_context_create_delegate__ctor_mC5A1C898C75F2E6FC85454A80FA9F51BFF8B51BC,
	grpcsharp_batch_context_create_delegate_Invoke_m09B68AE880E4C902293857E65620939377C1B3B5,
	grpcsharp_batch_context_create_delegate_BeginInvoke_mB787C6C6061650278299D6EEF443397A03825A7F,
	grpcsharp_batch_context_create_delegate_EndInvoke_m48D6491CDD9E4C572B66B1BDE0E19A014A776259,
	grpcsharp_batch_context_recv_initial_metadata_delegate__ctor_m88AB235F593FB7BF438C98205D9D39D59CE6446E,
	grpcsharp_batch_context_recv_initial_metadata_delegate_Invoke_m894E5FB196C92CBB65A25D16D76253D1AE72EB28,
	grpcsharp_batch_context_recv_initial_metadata_delegate_BeginInvoke_m5FFBB5D664BD97225A2871466BEDD094D14D53EE,
	grpcsharp_batch_context_recv_initial_metadata_delegate_EndInvoke_m4B19134149FB7D15FDC935C2BC520E19E81BA380,
	grpcsharp_batch_context_recv_message_length_delegate__ctor_m954C9FF7A1F6DC8BE39523363D3D38DCB465B286,
	grpcsharp_batch_context_recv_message_length_delegate_Invoke_m08942BE984C3B2A6AB042E4CF103FD246FE2080E,
	grpcsharp_batch_context_recv_message_length_delegate_BeginInvoke_mEE8E596B23D2C463F30E358C14DFFF0EF1793F0B,
	grpcsharp_batch_context_recv_message_length_delegate_EndInvoke_mD7BBDF3CA36A433932A1029522ADE5E4AC49D132,
	grpcsharp_batch_context_recv_message_to_buffer_delegate__ctor_m38932AFFD7B2CBC37C7B0A7244042CFE43CB6180,
	grpcsharp_batch_context_recv_message_to_buffer_delegate_Invoke_mEE10A5CFE18998D15496AA883D6DA43B883422D7,
	grpcsharp_batch_context_recv_message_to_buffer_delegate_BeginInvoke_m3B99DBD3CCB4313792C624F3D7B1A18AD3FCEF9C,
	grpcsharp_batch_context_recv_message_to_buffer_delegate_EndInvoke_mDAB1B1E82063FE12EF64A7844431EFF3D7DD9716,
	grpcsharp_batch_context_recv_status_on_client_status_delegate__ctor_m9CA1139F51C2EC413A2496B50E30D42F64668DA8,
	grpcsharp_batch_context_recv_status_on_client_status_delegate_Invoke_mA7D0D933AF72981A8DF41A4812C6A5343220F9CD,
	grpcsharp_batch_context_recv_status_on_client_status_delegate_BeginInvoke_m739343474C4CFE3CD4992071F50AF8A81F5ACB64,
	grpcsharp_batch_context_recv_status_on_client_status_delegate_EndInvoke_m2303FEADB0230919DB814D5C801C8C7E6BDB8F43,
	grpcsharp_batch_context_recv_status_on_client_details_delegate__ctor_m77B85D1724612D8530E6C134C212B5547B31E08A,
	grpcsharp_batch_context_recv_status_on_client_details_delegate_Invoke_m18E00BB62BC31E865758321B472E639F5148728A,
	grpcsharp_batch_context_recv_status_on_client_details_delegate_BeginInvoke_m334444C030A9F59B9E3A1D2693B62D1F89DE98FD,
	grpcsharp_batch_context_recv_status_on_client_details_delegate_EndInvoke_m54923BFCBC87EE66B73D69CD6C384CCD56F2432A,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate__ctor_mD092104D4C5A27472D59C4EF93A575DA45CC8E02,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_Invoke_mB449C0B2748056C46A92A004F81532E265F2C53A,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_BeginInvoke_mC201E0A2CF21DD37675C4D865CF3DD25DB3FA23E,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_EndInvoke_m64DA8C6215F7D9079D74F6712E8B871832DC7213,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate__ctor_mD08C5B82A0D14EE3142E1671992416FBB9056CD5,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_Invoke_m8DC28333F341B4A16E35A16C789637BC75BA0A5A,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_BeginInvoke_m23CF956FE428F5252192FF26CDB53EA77707580A,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_EndInvoke_m803CC6E2E0A2B93A129AA9C035DAB9ED5E31FCB8,
	grpcsharp_batch_context_reset_delegate__ctor_m0C546D115F19B6D72634DB64D701D75C5C677529,
	grpcsharp_batch_context_reset_delegate_Invoke_m839E360C63230B7E519F5D889F98C98D5188B0FF,
	grpcsharp_batch_context_reset_delegate_BeginInvoke_m458BBF54D7C326952149C5B2DE4D5083DB714BBB,
	grpcsharp_batch_context_reset_delegate_EndInvoke_m8EA9C0D868D78DE7D53616F532D202D0F2B3CAE7,
	grpcsharp_batch_context_destroy_delegate__ctor_m28E891521EEB3823D09AADAA1594422E97EA7488,
	grpcsharp_batch_context_destroy_delegate_Invoke_m3CFD0472DDDA03068EF83EE647C7B86D5B80616E,
	grpcsharp_batch_context_destroy_delegate_BeginInvoke_m9C10767B4F9D37552B151FDA1A811F6855C32ACA,
	grpcsharp_batch_context_destroy_delegate_EndInvoke_m1058E72DDCE2AB1D237E28AC9CC6C4EB7F8894A6,
	grpcsharp_request_call_context_create_delegate__ctor_m0B59F9CFDB453844C4FFFAFA48D7610897BFB8CE,
	grpcsharp_request_call_context_create_delegate_Invoke_mC53906ABE07AA8A68162EA9674F64CD42BE36B4B,
	grpcsharp_request_call_context_create_delegate_BeginInvoke_mAEEC78768264300F13C64D0575A9646430E52CB5,
	grpcsharp_request_call_context_create_delegate_EndInvoke_m0446C00BAAAA15B3A6E548F1775CE15E70F2C3EA,
	grpcsharp_request_call_context_call_delegate__ctor_mEF246A2BEFE28716D774532AC56FD2BB125B8B86,
	grpcsharp_request_call_context_call_delegate_Invoke_m7A8427DD78DE795F94A41EFA7EBED7A598041267,
	grpcsharp_request_call_context_call_delegate_BeginInvoke_mE40CA3186C093786725A44A044DA2953EA9B9A10,
	grpcsharp_request_call_context_call_delegate_EndInvoke_m8B75726A66E9481327DC85C1EB710FCCD178CD18,
	grpcsharp_request_call_context_method_delegate__ctor_m6EC24A4EC337E3125A4110243F07376CFA26C250,
	grpcsharp_request_call_context_method_delegate_Invoke_mF061891A38C8CD39C8DFFB04E460DA5B934BB67F,
	grpcsharp_request_call_context_method_delegate_BeginInvoke_mF60F883BF970A01F8C7935A932B2E3D71CDAD872,
	grpcsharp_request_call_context_method_delegate_EndInvoke_m152BA2D75DB102C240AEE14CE8BE7886A63644F6,
	grpcsharp_request_call_context_host_delegate__ctor_m49B078E184AAFD359164B260C1E83EB111C1AD6F,
	grpcsharp_request_call_context_host_delegate_Invoke_m9495161A0122EC2431F308E16C80AAB011EED2D6,
	grpcsharp_request_call_context_host_delegate_BeginInvoke_m22E8A67C72CFDBA55AB013CCFF61F6A15E797761,
	grpcsharp_request_call_context_host_delegate_EndInvoke_m5E09FDE627D53AE711879C0E97780E207C19603F,
	grpcsharp_request_call_context_deadline_delegate__ctor_m6BA2AFE8E1E7D0D90BD52DDFE208A7C5E07E62C5,
	grpcsharp_request_call_context_deadline_delegate_Invoke_m35DAE342E47C160D048B0F382A4A035142634F54,
	grpcsharp_request_call_context_deadline_delegate_BeginInvoke_m24D5849144C6EA37BE36C66F2FE949FE2B6E717E,
	grpcsharp_request_call_context_deadline_delegate_EndInvoke_m614CC5874139B8F06A6D4C7C0A1C10F93B1A3861,
	grpcsharp_request_call_context_request_metadata_delegate__ctor_m7C13B3CE74C4C569E01226D22442739B887140CA,
	grpcsharp_request_call_context_request_metadata_delegate_Invoke_mD519B694798ACA34CCEB94179D3E9395AD3174BD,
	grpcsharp_request_call_context_request_metadata_delegate_BeginInvoke_mCA8B263A82B6D18FF32259F697BEC4A0746D2728,
	grpcsharp_request_call_context_request_metadata_delegate_EndInvoke_m7DE4262BD1888ED117D3F4B83AC399852C311DCF,
	grpcsharp_request_call_context_reset_delegate__ctor_m072A9AE45BE3B9624A34412D957906DACA3F41C3,
	grpcsharp_request_call_context_reset_delegate_Invoke_m099A15D2E2D7E23E981781DFA0F8FE2D57044B51,
	grpcsharp_request_call_context_reset_delegate_BeginInvoke_m926BED8C2635880EBFFE200C1EAE8D05209116A8,
	grpcsharp_request_call_context_reset_delegate_EndInvoke_m033F99CFDF40D977474F261F7645573768B1ADC5,
	grpcsharp_request_call_context_destroy_delegate__ctor_m900F7BE1EE48B6503EEF30BFE2C7274E57AA1720,
	grpcsharp_request_call_context_destroy_delegate_Invoke_mFA8AFE67C27E8C7887CE8FDE42D3CDBA87C40E75,
	grpcsharp_request_call_context_destroy_delegate_BeginInvoke_mEB1A6D569A31B6E01E5F0A87D7DCBC681CBAF46A,
	grpcsharp_request_call_context_destroy_delegate_EndInvoke_mD6A1889670B70F6D56A71EC03A2EC80985A34E20,
	grpcsharp_composite_call_credentials_create_delegate__ctor_m290CA938F6032C0B736D3768FB5A416684B13212,
	grpcsharp_composite_call_credentials_create_delegate_Invoke_m5782DDA3DC9621056796A1B4F9ED9A81DEFECF7D,
	grpcsharp_composite_call_credentials_create_delegate_BeginInvoke_m3FB0F85B5AB6835E8E6496B20479E15DA509FD19,
	grpcsharp_composite_call_credentials_create_delegate_EndInvoke_mF4784C6EBF3027FC438B75942C838CAB0C20446B,
	grpcsharp_call_credentials_release_delegate__ctor_mD013EC002B1CC13F7DC0613AEE4C0E0ED5FCF8C5,
	grpcsharp_call_credentials_release_delegate_Invoke_mCB0C393BA9ECD1B532368C472F0E14B38D14D194,
	grpcsharp_call_credentials_release_delegate_BeginInvoke_mAD7A4A51F0618009851C7856FEAF0ADCE5DE6017,
	grpcsharp_call_credentials_release_delegate_EndInvoke_m41855C913F51F1C8D2F876CE84F10130BAB0C0DE,
	grpcsharp_call_cancel_delegate__ctor_m175FF622D7DF642CEC28FCC21F92648E9D33C4BE,
	grpcsharp_call_cancel_delegate_Invoke_m159257C916F562947F0AFEE857EAEDFED0401128,
	grpcsharp_call_cancel_delegate_BeginInvoke_m60389BEE1D2073687E086124C48D9A933958FC82,
	grpcsharp_call_cancel_delegate_EndInvoke_mAB69E7BC811DF14966B19841E393564E5B770EF4,
	grpcsharp_call_cancel_with_status_delegate__ctor_m2957DD271E5AAD1ED1B8F7C4B9C03ECDF21B570D,
	grpcsharp_call_cancel_with_status_delegate_Invoke_m5ED7369F6C4AFC2AD5D8791D30816F028D7102C9,
	grpcsharp_call_cancel_with_status_delegate_BeginInvoke_m54C2947116138B1F5930FD91EC216AB0830D5B81,
	grpcsharp_call_cancel_with_status_delegate_EndInvoke_mA27A02036C54B60BF604083A8D82EECBEED38D13,
	grpcsharp_call_start_unary_delegate__ctor_mCCA073CC444575F94ADAB8BD3D621F6722D8F8DF,
	grpcsharp_call_start_unary_delegate_Invoke_m80305C224E96CD1524198CB7ACD6223A5273C503,
	grpcsharp_call_start_unary_delegate_BeginInvoke_m7989592BBA9EF64BC742D5AB17002B8F053478CF,
	grpcsharp_call_start_unary_delegate_EndInvoke_m836C567651E2FD68726FD3DC9A37C0224DB88E8F,
	grpcsharp_call_start_client_streaming_delegate__ctor_m06C70BEE73374A519CB43D6D03511D2E592A753D,
	grpcsharp_call_start_client_streaming_delegate_Invoke_mB2C7E21AE49ED85ABD5B892BBCE800CC49BFB83B,
	grpcsharp_call_start_client_streaming_delegate_BeginInvoke_mA6E55C7B08C451F7399511B1BF73E44C64E5FCF3,
	grpcsharp_call_start_client_streaming_delegate_EndInvoke_mE2D71485480ED44972FF5C086989EC71874E2BD9,
	grpcsharp_call_start_server_streaming_delegate__ctor_m8AF2A8B13313C2B14FD050756A996048BFE43AB1,
	grpcsharp_call_start_server_streaming_delegate_Invoke_m54BEA85EC744F4D42DA492AD045F906AEEC78FB2,
	grpcsharp_call_start_server_streaming_delegate_BeginInvoke_m84E795E1C462C59C8F0FF87557A0020ADF2A37D8,
	grpcsharp_call_start_server_streaming_delegate_EndInvoke_mBFE503EF60B50CCA8204FBB38307F1E1CEF0F305,
	grpcsharp_call_start_duplex_streaming_delegate__ctor_mD36CFDAA3978B9C6865A2E9A0E7AB25CDCC9E1A7,
	grpcsharp_call_start_duplex_streaming_delegate_Invoke_m87FA34D5F92B89A90B613813A49CEFCF261B6D12,
	grpcsharp_call_start_duplex_streaming_delegate_BeginInvoke_m2B989122682F579D1BE2406A098FA5130EB31100,
	grpcsharp_call_start_duplex_streaming_delegate_EndInvoke_m841818A936D1DA0FE4DE136B5F33ACC58CECC6DD,
	grpcsharp_call_send_message_delegate__ctor_m382EFC601099FFB97D9FD172F0A793065CE2D249,
	grpcsharp_call_send_message_delegate_Invoke_m66AFE32C8AC4F8807D197892A7657EB879001C6E,
	grpcsharp_call_send_message_delegate_BeginInvoke_m30E9D6B81FC68CBBFD21E123172EB60DC8444057,
	grpcsharp_call_send_message_delegate_EndInvoke_m06B5D7662CEEBAD97B0D84B57EBD9E914BEF9EA4,
	grpcsharp_call_send_close_from_client_delegate__ctor_m4B9BE7E60CFCFB77F7E061BF0DBC0BA36DA4A185,
	grpcsharp_call_send_close_from_client_delegate_Invoke_mAF52EA9F5EBF86CB73020E91ECD452798582D875,
	grpcsharp_call_send_close_from_client_delegate_BeginInvoke_mD7B6342E61D085361F2DDF0EB2E34D3F0FFD62FB,
	grpcsharp_call_send_close_from_client_delegate_EndInvoke_m357C15E5AD2C679AB533EDB40177F11FCD065A49,
	grpcsharp_call_send_status_from_server_delegate__ctor_mE21EFC6900AC035616AB606FC5286AB3E967D0AD,
	grpcsharp_call_send_status_from_server_delegate_Invoke_mEB999DC5A3AF3AED40157E25E1E8FD9A7CC39B85,
	grpcsharp_call_send_status_from_server_delegate_BeginInvoke_m3DE75DB6476972F73319424AEF068320714E4A6B,
	grpcsharp_call_send_status_from_server_delegate_EndInvoke_mEAC23848022CA1AAC49C27075F2413B16B1DB117,
	grpcsharp_call_recv_message_delegate__ctor_m8C331FAF044CDBD910A91C85F16B471BA123B524,
	grpcsharp_call_recv_message_delegate_Invoke_m0C93C286FAF4BBCA13644A085CCC595F4C60151E,
	grpcsharp_call_recv_message_delegate_BeginInvoke_m3B24CD1B16D1742391F0A72E49D876017BD11A94,
	grpcsharp_call_recv_message_delegate_EndInvoke_m7F81256329E192ECD87A08FA75E1AF88775FC738,
	grpcsharp_call_recv_initial_metadata_delegate__ctor_m693FAB365C023ED05110B3528CC550D265EC1A01,
	grpcsharp_call_recv_initial_metadata_delegate_Invoke_mD755A7261EBC5471B756801880D516042DB0C483,
	grpcsharp_call_recv_initial_metadata_delegate_BeginInvoke_mBD8A97CF8E3489664085573DA55E757B79018B7E,
	grpcsharp_call_recv_initial_metadata_delegate_EndInvoke_mFDF2EC088DD61619B44DD778C4A2F0D5BA128BF5,
	grpcsharp_call_start_serverside_delegate__ctor_mA7AE50A272897B0413A315142098F42B8C01961C,
	grpcsharp_call_start_serverside_delegate_Invoke_m133A82F565CDC93178C76BFEEC591C171910A00E,
	grpcsharp_call_start_serverside_delegate_BeginInvoke_m77B4CCABD8D54F5781F575E82AEAED79623BAAEE,
	grpcsharp_call_start_serverside_delegate_EndInvoke_mE21066C693229EDAFF5597A214A3ABCFCE88C0F6,
	grpcsharp_call_send_initial_metadata_delegate__ctor_m4CDE50E3CFF69203F5FB91374E01758A420DB573,
	grpcsharp_call_send_initial_metadata_delegate_Invoke_mFADF3755620C84AB2F5D2812D53DA7571524E6FA,
	grpcsharp_call_send_initial_metadata_delegate_BeginInvoke_m7E8AF1E8E101839A892556C5D4E23E801DE02853,
	grpcsharp_call_send_initial_metadata_delegate_EndInvoke_mDAA3358E101C934F551AAD118A18044B67F06B64,
	grpcsharp_call_set_credentials_delegate__ctor_mE48262AB391C06ED742C9E429A6C5BB67B80EEA3,
	grpcsharp_call_set_credentials_delegate_Invoke_m78814AC6E7C7C3584375E04113BCDC36C3966752,
	grpcsharp_call_set_credentials_delegate_BeginInvoke_m38A8BFE66364CA363A0A790DB5584A6B562461E3,
	grpcsharp_call_set_credentials_delegate_EndInvoke_m371C133BD714E0201189032DA2EFD287BB30D213,
	grpcsharp_call_get_peer_delegate__ctor_m29206E184F26B801F698089E3F5D30205E86811F,
	grpcsharp_call_get_peer_delegate_Invoke_m06554897988564AF1E2FA17EB1A275694EF5182C,
	grpcsharp_call_get_peer_delegate_BeginInvoke_mC0FE75E293059BBA8E9DD4700397414C9744223F,
	grpcsharp_call_get_peer_delegate_EndInvoke_m47546F2EDE77092120D4548FA483B342D74EFAC5,
	grpcsharp_call_destroy_delegate__ctor_m6A8D4D3977A0BD52F2980F7E45F722BCBC9305ED,
	grpcsharp_call_destroy_delegate_Invoke_m1DA24B50E8827A56FED427ECA14370C5F78D64B1,
	grpcsharp_call_destroy_delegate_BeginInvoke_mED8674C9E0D2740397E8F862201726DE0A4F96DE,
	grpcsharp_call_destroy_delegate_EndInvoke_m69E0AB8E787AE29B771B24BE84E8D7B57BFCAD6D,
	grpcsharp_channel_args_create_delegate__ctor_m5745E01B422746DB45CE116521A0C9E36C65D873,
	grpcsharp_channel_args_create_delegate_Invoke_m14082CBBC4250A444DA51B83E2767EFDC04BA849,
	grpcsharp_channel_args_create_delegate_BeginInvoke_m99EA5F1B3D99C3AB461C5A712DE5179FD0A13B03,
	grpcsharp_channel_args_create_delegate_EndInvoke_mE68A69697CE994FD70D5CF7A727C8F55EFA5BCD0,
	grpcsharp_channel_args_set_string_delegate__ctor_mC00D79FAD19E30A9DFFAE3EEB624B84029E671E0,
	grpcsharp_channel_args_set_string_delegate_Invoke_m6603EC2AEEF0007CAA053B89EDA5AB9DDB164228,
	grpcsharp_channel_args_set_string_delegate_BeginInvoke_mE8230F4054F8BBBFB740D617A94644F50635C6EE,
	grpcsharp_channel_args_set_string_delegate_EndInvoke_m454B2E9AC33F121A81E96BCFBBB666AD9BDC07CF,
	grpcsharp_channel_args_set_integer_delegate__ctor_mE1F474719419B605535DDD312BA6872B86C19F01,
	grpcsharp_channel_args_set_integer_delegate_Invoke_m64CD478FD44110476298BB12301726032256A81D,
	grpcsharp_channel_args_set_integer_delegate_BeginInvoke_mA121233867A80022A4EF0CA94DAEDC7C1E6DB6F2,
	grpcsharp_channel_args_set_integer_delegate_EndInvoke_m44AD5420872509B970BDA36FE7CCCD813BB69CDC,
	grpcsharp_channel_args_destroy_delegate__ctor_mF94C6A0ABBE2671D1CC159C61A2880F57092C64D,
	grpcsharp_channel_args_destroy_delegate_Invoke_mC51AF584E2C49EF1E07A876E82CE942F3B02F5D3,
	grpcsharp_channel_args_destroy_delegate_BeginInvoke_m2E514EA3845BA9D1DB962DC00D058C1E278370EF,
	grpcsharp_channel_args_destroy_delegate_EndInvoke_m0044A5E84E20BEE5E27754B235E983F68036175E,
	grpcsharp_override_default_ssl_roots__ctor_m98DDF5AA7AF905E3BF3C99CBF8F305B8724CD2B7,
	grpcsharp_override_default_ssl_roots_Invoke_m5E615BEAAC7D2BA7AE9662B4A8A18E6A33E0AEBD,
	grpcsharp_override_default_ssl_roots_BeginInvoke_m2B761ED1F1B7F7C29EECAD2C8F7C212DAF64032A,
	grpcsharp_override_default_ssl_roots_EndInvoke_m2DBF7A4E61F8BDFF02781415F71E97DB2BF6C7CD,
	grpcsharp_ssl_credentials_create_delegate__ctor_m8831DEA1536A7BDD8FEE1306BB60536EB14FF118,
	grpcsharp_ssl_credentials_create_delegate_Invoke_mB601BD2FA93CF89F8C2066620462FCADA6CBEAF1,
	grpcsharp_ssl_credentials_create_delegate_BeginInvoke_mCD887D9E5449D3F6268783E5DF915B6100ABDAF5,
	grpcsharp_ssl_credentials_create_delegate_EndInvoke_m8796A4EA79B5E644AAA2A4A54E0972670255F22A,
	grpcsharp_composite_channel_credentials_create_delegate__ctor_m357309AECBC045AF76BBA4074970837A4907E339,
	grpcsharp_composite_channel_credentials_create_delegate_Invoke_m3012AFF3F22876D10223C1303C6740DB36213130,
	grpcsharp_composite_channel_credentials_create_delegate_BeginInvoke_m515E84E5EA8D16E77EAC00DE091D0CE392F34123,
	grpcsharp_composite_channel_credentials_create_delegate_EndInvoke_mB7A33D336EE8E25C7B00CF81873AABFEEF18EE11,
	grpcsharp_channel_credentials_release_delegate__ctor_m48A91DC3B0B6637314384B40546A08FA905B444F,
	grpcsharp_channel_credentials_release_delegate_Invoke_mE56A5ECC91697789081C797C216CE7D554014C73,
	grpcsharp_channel_credentials_release_delegate_BeginInvoke_m6ABC23B74980C2A0D95DBDB575E94F92DD4EC4B3,
	grpcsharp_channel_credentials_release_delegate_EndInvoke_mB0571138681314558DE8B6862E12DF10F3D5BA34,
	grpcsharp_insecure_channel_create_delegate__ctor_m48FB381D0D4EE2E883912EF2BCDAB34E23D139B7,
	grpcsharp_insecure_channel_create_delegate_Invoke_m132543685C9A3AAEF8B2233BAE837F4FD960E2E9,
	grpcsharp_insecure_channel_create_delegate_BeginInvoke_m187620802307B83610FCD3ED927D7A40E1D5DFF9,
	grpcsharp_insecure_channel_create_delegate_EndInvoke_m267DB14ED223949094D85BA447B523DB11269EA4,
	grpcsharp_secure_channel_create_delegate__ctor_m43D9D475A12ABECDB265FA8FCE1F35A3E711619A,
	grpcsharp_secure_channel_create_delegate_Invoke_m1B2E81C7C9F4E7C241A006D929E538140D27B12C,
	grpcsharp_secure_channel_create_delegate_BeginInvoke_mBFD78123F0D0D38C34795AEF97AF40EA47D7AAEE,
	grpcsharp_secure_channel_create_delegate_EndInvoke_m8E268EDB4E6750A900DCC4D684665170F4A093D2,
	grpcsharp_channel_create_call_delegate__ctor_m0876323BA140203B4E6F36C9DE00BF703C8DD5F6,
	grpcsharp_channel_create_call_delegate_Invoke_m18EC5751CE211A920B77DD5DF21385E2C1C3D556,
	grpcsharp_channel_create_call_delegate_BeginInvoke_mC9C79AD344241D0CB10D81D28886F6E054759915,
	grpcsharp_channel_create_call_delegate_EndInvoke_m7B5FE78BF29D6699A770221D21F53E0FD8C77301,
	grpcsharp_channel_check_connectivity_state_delegate__ctor_m9750D78A2D6D1125293D049E3E068CD0FDAADD89,
	grpcsharp_channel_check_connectivity_state_delegate_Invoke_mE7587BA695319FFB04CF704375696D7AF54B0020,
	grpcsharp_channel_check_connectivity_state_delegate_BeginInvoke_m5ABEAE5524BA4FC297E698F5C5258B9AE01B6102,
	grpcsharp_channel_check_connectivity_state_delegate_EndInvoke_m89AF324B6CBCC1DD46891944B5AFFC0B3D68B7DB,
	grpcsharp_channel_watch_connectivity_state_delegate__ctor_mB8CEA6E8F27713C228D6F01B221E5C07AB3AEB76,
	grpcsharp_channel_watch_connectivity_state_delegate_Invoke_m5195FE7A994B38052F6C8C18608A72135B66762C,
	grpcsharp_channel_watch_connectivity_state_delegate_BeginInvoke_mDFE61261C452A505F110A97AE6BFF354E47B8DA4,
	grpcsharp_channel_watch_connectivity_state_delegate_EndInvoke_mBC5C2E55CBCD69EFD786B2E9658146CA095BD239,
	grpcsharp_channel_get_target_delegate__ctor_m8F3C9A0F4942326FC4DF6114B4B1C2216DBCF158,
	grpcsharp_channel_get_target_delegate_Invoke_m4FFC78879F30068949FD46E63B86FD653C7A0FB4,
	grpcsharp_channel_get_target_delegate_BeginInvoke_m871A58308F45E77E68A84C76DD3375388642DC4A,
	grpcsharp_channel_get_target_delegate_EndInvoke_m8B621C05EDC19CE077AE9CE87B8E8D11E05ED550,
	grpcsharp_channel_destroy_delegate__ctor_m92AE865D424FE76AE1C722D1709560BC28BFB4BA,
	grpcsharp_channel_destroy_delegate_Invoke_m5D6CD8FE072AF58774219E54462F1DFDE76F4DBF,
	grpcsharp_channel_destroy_delegate_BeginInvoke_m9EC3E96E2D0B1B199ECB149339A66610226C9474,
	grpcsharp_channel_destroy_delegate_EndInvoke_mF145F9569DD228CD2D71A3D838C6D99D1C67689E,
	grpcsharp_sizeof_grpc_event_delegate__ctor_mB91C95B41C4B5DAE7413E2F30B483628AA6CBD0F,
	grpcsharp_sizeof_grpc_event_delegate_Invoke_m53562F1F97589901B0AF4EED0404EA100696D3B3,
	grpcsharp_sizeof_grpc_event_delegate_BeginInvoke_mB7B65AE43DA1CCBC06F14651087F9CE0E6F4C92B,
	grpcsharp_sizeof_grpc_event_delegate_EndInvoke_mC6E785442A24D680CF3B949F9CF0590922DDD76F,
	grpcsharp_completion_queue_create_async_delegate__ctor_mBE9A0EE1FA94B6E90C0B1722D02A6A52D7FE394E,
	grpcsharp_completion_queue_create_async_delegate_Invoke_m1829A28121DE7347C55D59644E77F4E12A63D538,
	grpcsharp_completion_queue_create_async_delegate_BeginInvoke_m1D932B50DD047392933E5E6FC85EED0524EF86E1,
	grpcsharp_completion_queue_create_async_delegate_EndInvoke_m5FBAC93932E354DE8FB403CEF37B81D30AF171B8,
	grpcsharp_completion_queue_create_sync_delegate__ctor_m2BFDD16573B175EAFC90735C18B887326C826D73,
	grpcsharp_completion_queue_create_sync_delegate_Invoke_mA3BC9A25017FC5DE000289165443480419C95392,
	grpcsharp_completion_queue_create_sync_delegate_BeginInvoke_m8314C081BB5E249798AE81F3BE28D34CF429F3A0,
	grpcsharp_completion_queue_create_sync_delegate_EndInvoke_mBBBF24FA851F9A49A8E3E540213535027B0D5978,
	grpcsharp_completion_queue_shutdown_delegate__ctor_m5078A0ECAA47060517A4CBB23BDD83F1661ADA01,
	grpcsharp_completion_queue_shutdown_delegate_Invoke_m4192AAB65591385F6242E67F71A4D122989C201A,
	grpcsharp_completion_queue_shutdown_delegate_BeginInvoke_mE2D30791C8E29AEBD1ACD6F575AD37B8417CF309,
	grpcsharp_completion_queue_shutdown_delegate_EndInvoke_m61570D7C8CAA366181DCBA53DA92694A174A9513,
	grpcsharp_completion_queue_next_delegate__ctor_m40E09D674E38895B120BB2919D6C2FA1A713C178,
	grpcsharp_completion_queue_next_delegate_Invoke_mCCC1B0708E2AE9BEC8655C615A9662BB60F33A5C,
	grpcsharp_completion_queue_next_delegate_BeginInvoke_m263E7D4F27D34C77698980E5FFD652983EFD0FBD,
	grpcsharp_completion_queue_next_delegate_EndInvoke_mA212BC97DC7137820D8CB9B9E9AABE9586227CCC,
	grpcsharp_completion_queue_pluck_delegate__ctor_m2FDB427FBC36B8A082EAE4B2694E39F964D13357,
	grpcsharp_completion_queue_pluck_delegate_Invoke_mFB899DEB8042F857202A958DF39C7E1C11660554,
	grpcsharp_completion_queue_pluck_delegate_BeginInvoke_mC49A5C9B8DD4CC0575E65DB5835F3347FD561EC6,
	grpcsharp_completion_queue_pluck_delegate_EndInvoke_m18C90EAED243C749BFE92F9AF221E66BCEFFB793,
	grpcsharp_completion_queue_destroy_delegate__ctor_m34257A6CD68B29C4423EB341A7F68DD3489AD728,
	grpcsharp_completion_queue_destroy_delegate_Invoke_mA74CCEE03ADD8438EE10C90EBBCD8046BE097727,
	grpcsharp_completion_queue_destroy_delegate_BeginInvoke_m225F895A2B65DAACD4623C463F9820E6FE874152,
	grpcsharp_completion_queue_destroy_delegate_EndInvoke_mB8696E0849D0AB9B91A009485EC2EB1ECF26FC43,
	gprsharp_free_delegate__ctor_m893E16BD0C132EDC8BD127830AFABD3606393689,
	gprsharp_free_delegate_Invoke_mEB602C2E9DACFC984516657FB7BD0BCDE4BE6875,
	gprsharp_free_delegate_BeginInvoke_m21F6E027B1B4AE93EAF256D98B28FE75FB538FCC,
	gprsharp_free_delegate_EndInvoke_m43FC48EBFCDDC5B3A811B2F4A9F1885BEB019879,
	grpcsharp_metadata_array_create_delegate__ctor_m772B4ACE86477B18A56D10F5CDECFC8DB48071AB,
	grpcsharp_metadata_array_create_delegate_Invoke_mDE260A67775DA58E957560F4F1E0C1B5F138F851,
	grpcsharp_metadata_array_create_delegate_BeginInvoke_m636C6BF23E6C3CC9ADF31718396C209E715D7E9E,
	grpcsharp_metadata_array_create_delegate_EndInvoke_m11D8C8FC84E49CEBDA47FD5456A96589155895A5,
	grpcsharp_metadata_array_add_delegate__ctor_m011C493247FE6BEA5C7DC771C0BD84F8A22E5263,
	grpcsharp_metadata_array_add_delegate_Invoke_m97AF4B78DD758C89BDFCB44BC0459969E86F60C3,
	grpcsharp_metadata_array_add_delegate_BeginInvoke_m0F60C3E3468BE732F5475BBB88EB400B6F00E3A0,
	grpcsharp_metadata_array_add_delegate_EndInvoke_mB47DA50CE8AD7833F7C12C6CC97528F33D5F352B,
	grpcsharp_metadata_array_count_delegate__ctor_m90F77B8E3E8358E0A355EE3DDC8AC798CA6095AF,
	grpcsharp_metadata_array_count_delegate_Invoke_mE1335A71E9AB4EA39E801CC1F30DF1E027EE8552,
	grpcsharp_metadata_array_count_delegate_BeginInvoke_m1ADAB32D4EE749B205A4A4F892BDFBA2439C03E2,
	grpcsharp_metadata_array_count_delegate_EndInvoke_mFAFFDBBFA822AD60AADF6F1496FBAAFD41E789BC,
	grpcsharp_metadata_array_get_key_delegate__ctor_m7DAA5BA0AA67CE2492DBF0A582F5269FC5EE5331,
	grpcsharp_metadata_array_get_key_delegate_Invoke_m20088C5BA6860F4DBF8655E87627607EA96126BB,
	grpcsharp_metadata_array_get_key_delegate_BeginInvoke_mE27D34A8C425AEBF03C71A4632085FE1215A2EA7,
	grpcsharp_metadata_array_get_key_delegate_EndInvoke_m03A827E401BD21BD6FB4E7E776D2D68A0B54CCBF,
	grpcsharp_metadata_array_get_value_delegate__ctor_m1648524F9708A0E7230E061EC5248CA91E712456,
	grpcsharp_metadata_array_get_value_delegate_Invoke_m3EB206C62506743F648EFA3FC5CEBD77D0376A46,
	grpcsharp_metadata_array_get_value_delegate_BeginInvoke_m8A14F0356AF49B95230973FCB806A41C5F825551,
	grpcsharp_metadata_array_get_value_delegate_EndInvoke_m6A325C20EB324F48604EAAD00986DB59ED932E80,
	grpcsharp_metadata_array_destroy_full_delegate__ctor_m4266CD0C1E581CCDFB25CB3C7D38303FDBD4ADCB,
	grpcsharp_metadata_array_destroy_full_delegate_Invoke_mFF84304D900A523DB208B3A7078AB1568CC3949B,
	grpcsharp_metadata_array_destroy_full_delegate_BeginInvoke_mE443A9C716278A4C9D69B9E2A13C393D8CFB40A3,
	grpcsharp_metadata_array_destroy_full_delegate_EndInvoke_m4CF3A8CAEFBEE4EAEBF9A2877D84BD5918BCB101,
	grpcsharp_redirect_log_delegate__ctor_mEAF67F0B3984D7874982A69624957200402C2503,
	grpcsharp_redirect_log_delegate_Invoke_mFD7E0A36D5F8A176E8A4502A402A27F0C8E146F7,
	grpcsharp_redirect_log_delegate_BeginInvoke_m1B10DE0F5008D1A92E9ABBB57DFF8C5DC7A3532E,
	grpcsharp_redirect_log_delegate_EndInvoke_m2CF1FBF37CA77C15C0101F6311915D33EC28F648,
	grpcsharp_metadata_credentials_create_from_plugin_delegate__ctor_m4C1AA38268B355295FA1CEA608910CECFF9D7079,
	grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_mFCF8686D4FBD59CB561B4AD336EC65E052EA6747,
	grpcsharp_metadata_credentials_create_from_plugin_delegate_BeginInvoke_m8F18D229419AA9C3C8EA6E31323243CA7F97CE23,
	grpcsharp_metadata_credentials_create_from_plugin_delegate_EndInvoke_mD8FB275BB8EE33E31CF5F96F71B6D4BDC9F9A2AD,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate__ctor_mC9AF2E3BD4BE0C31C9E16488EE6B329CD5DFD096,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_Invoke_mD629EBA653CB1EA91D6EAF68E65FF7136D171A45,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_BeginInvoke_mD60F73D7DDF0EAA2D4BD140E5D664BD31E6F935B,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_EndInvoke_m46D6304A98B39020033C6736879E0EB17E2498B6,
	grpcsharp_ssl_server_credentials_create_delegate__ctor_m688C7AF93D27B7FAF5D1E15F47DDA914DB32E144,
	grpcsharp_ssl_server_credentials_create_delegate_Invoke_m027576156F96D1D60825BDBE6FDDE8165D33DB44,
	grpcsharp_ssl_server_credentials_create_delegate_BeginInvoke_mD039F4C273EF1734FC731B9EFF7506094D760430,
	grpcsharp_ssl_server_credentials_create_delegate_EndInvoke_m6F8F868C23518B80AB9B996149AB0B76845B2767,
	grpcsharp_server_credentials_release_delegate__ctor_m412A0612C615A2CD671D510EFBD8970819B1EDF2,
	grpcsharp_server_credentials_release_delegate_Invoke_m50AFC5500E95CC5B3FEDD4348408AF08126C4B83,
	grpcsharp_server_credentials_release_delegate_BeginInvoke_m800F36E6D84F9893F25BEE42A1F157EA8EBB8ECE,
	grpcsharp_server_credentials_release_delegate_EndInvoke_mE24D58BC2772AF82F25EFB0CDA9EE7EDA75572C8,
	grpcsharp_server_create_delegate__ctor_m95127C8AE1416F3FC0F65F3417B5CA74E872C626,
	grpcsharp_server_create_delegate_Invoke_m26B88F8162A632C58F26A24DECB8F91E2DBFD39A,
	grpcsharp_server_create_delegate_BeginInvoke_m0405B40838097390180E52394AB3598E5C3284E8,
	grpcsharp_server_create_delegate_EndInvoke_mEC9968279D40CE6F700FB5636B2981F8BBDAB933,
	grpcsharp_server_register_completion_queue_delegate__ctor_m5C545E185FE84DD68D91F0016FD0678445292865,
	grpcsharp_server_register_completion_queue_delegate_Invoke_mF5E747148DE6B84F61D7AF382FB06F6604B215C3,
	grpcsharp_server_register_completion_queue_delegate_BeginInvoke_mC260D4A7842EB46662A818595577014B4DC15A9D,
	grpcsharp_server_register_completion_queue_delegate_EndInvoke_m86F757363AA6DF46925C54707CF97C352C38BD38,
	grpcsharp_server_add_insecure_http2_port_delegate__ctor_mB8A7BC7548BE6F7F384A2FC92281BCB4B2485026,
	grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m2753511205E02F8F617BC5F44257935DD0AC3202,
	grpcsharp_server_add_insecure_http2_port_delegate_BeginInvoke_m79D48CE519F09C1930A8A1896A3D3F87EC7DA086,
	grpcsharp_server_add_insecure_http2_port_delegate_EndInvoke_m8849F7D5887C187D5E122A8BA52C98BDD05A4294,
	grpcsharp_server_add_secure_http2_port_delegate__ctor_m1A13ABF4E9DC31EA41D59446EB80089D6E4B4967,
	grpcsharp_server_add_secure_http2_port_delegate_Invoke_m5968B2CA246F04FB554D87A28B036AD5CAFEEB32,
	grpcsharp_server_add_secure_http2_port_delegate_BeginInvoke_m74AA65DBF32D3C930B8DF4EF1715EC5B32A3020C,
	grpcsharp_server_add_secure_http2_port_delegate_EndInvoke_mEF12D0D34A88D2DD22FCA3D6661EA918EAABCCB7,
	grpcsharp_server_start_delegate__ctor_m31DD713C72B45C349D67CA63C12A121EC71E607B,
	grpcsharp_server_start_delegate_Invoke_m0EB677203848E60D201703FF07AA1DC29DC790B3,
	grpcsharp_server_start_delegate_BeginInvoke_mABE28BE23AC22259100230A9245BE5A1144F5CEB,
	grpcsharp_server_start_delegate_EndInvoke_m054CB1D48EC94296F823582B462E0341AEB514CF,
	grpcsharp_server_request_call_delegate__ctor_m3D2908B8A78E18DD817BB336BA800E7F1FCE55FA,
	grpcsharp_server_request_call_delegate_Invoke_mF24F2D55232020B9D143D2C909888A7F864EA46A,
	grpcsharp_server_request_call_delegate_BeginInvoke_m34EE483F8AF598C4E9AB8DCCF3AB2CBAAE63507B,
	grpcsharp_server_request_call_delegate_EndInvoke_m6ECB4A83C61C35242373B958C743B28F3F178F5C,
	grpcsharp_server_cancel_all_calls_delegate__ctor_m84C51EFC3E49A905E2677B9357FF1E824280C022,
	grpcsharp_server_cancel_all_calls_delegate_Invoke_mEDA0825BC4A183397005B473DA8B60BAE5DCA5EC,
	grpcsharp_server_cancel_all_calls_delegate_BeginInvoke_m34AD034D3BECD54F8B8C9FA068BDC849D6606702,
	grpcsharp_server_cancel_all_calls_delegate_EndInvoke_mC3490A14F68D3407717D57B04BAB1DAAE305E0F8,
	grpcsharp_server_shutdown_and_notify_callback_delegate__ctor_m5E4DFA0CEBFC226DD3D090D47A265F35206599DF,
	grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m498B57A8F61C559758A7BEF5ACD21A9F42C06F93,
	grpcsharp_server_shutdown_and_notify_callback_delegate_BeginInvoke_m094A363C17F34427336CA58ACC725E0DFCA78C96,
	grpcsharp_server_shutdown_and_notify_callback_delegate_EndInvoke_m9AA6991B2762F7EA1FB1834D251E672F20882D54,
	grpcsharp_server_destroy_delegate__ctor_mE2A7169FCC10B82E5DF35CE2782DC3C3C34AF5D2,
	grpcsharp_server_destroy_delegate_Invoke_mC9001ACE446E1147B044E3A2DF556CD6F32A2215,
	grpcsharp_server_destroy_delegate_BeginInvoke_m853C115199A83B0CD15FA0D1BDE278F75F27F5CD,
	grpcsharp_server_destroy_delegate_EndInvoke_m85C8815E94D0EB489175CFA5B059F2111D8898E1,
	grpcsharp_call_auth_context_delegate__ctor_mFB53971FBA1C4D1D074504FB16D1A21506EA0BA1,
	grpcsharp_call_auth_context_delegate_Invoke_m6E25A339DC48A95CE1DCA9711960B6F70E5E00B4,
	grpcsharp_call_auth_context_delegate_BeginInvoke_m992ABA2FB2E1FBCB6DDF3684652A5B29647F7729,
	grpcsharp_call_auth_context_delegate_EndInvoke_m69CCEA2ED7F1D3DAF8BC6EB4854B4702978F124E,
	grpcsharp_auth_context_peer_identity_property_name_delegate__ctor_m6F7C0891D400A4A41B09C5A318CD8A5C452C043F,
	grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_m88B5407F5DB2C37214D947CBD6C4DFF55D1BEE19,
	grpcsharp_auth_context_peer_identity_property_name_delegate_BeginInvoke_mF3483D077192629A81F7A1C4058E49098FF7B639,
	grpcsharp_auth_context_peer_identity_property_name_delegate_EndInvoke_mFA636F5E359B266623D26619E236142134CD51BA,
	grpcsharp_auth_context_property_iterator_delegate__ctor_m7770BF6F9BE6F25F2E53A96959004C4BA7658FB4,
	grpcsharp_auth_context_property_iterator_delegate_Invoke_m103AC62FFB4D56AB8F0A3D08DD32ED56C093992F,
	grpcsharp_auth_context_property_iterator_delegate_BeginInvoke_m8E55EA045EE29B6AA86935CF5BA0FE952FEBECFA,
	grpcsharp_auth_context_property_iterator_delegate_EndInvoke_m80AE7A33C2BAB97988EC92A58BA6BA61DC25B3FF,
	grpcsharp_auth_property_iterator_next_delegate__ctor_m5F7ED3071A5B04C315C453F308466C51CD281772,
	grpcsharp_auth_property_iterator_next_delegate_Invoke_m2CBC2B9FE58121B2CA8D5876ACBF0781E1498BAD,
	grpcsharp_auth_property_iterator_next_delegate_BeginInvoke_m8E79F6D57DC1E49D856EA8C9EE1642B0D1109FF4,
	grpcsharp_auth_property_iterator_next_delegate_EndInvoke_m42815973168B7E1B1D630696D07A795F8D838DDC,
	grpcsharp_auth_context_release_delegate__ctor_mB161F1BC2CAC1103ED0E5254425BA74838BD61F8,
	grpcsharp_auth_context_release_delegate_Invoke_m7AF4503F3E9B4AE556E6FEB0BDEC8943C3016172,
	grpcsharp_auth_context_release_delegate_BeginInvoke_m2C59FF8E8B8091F172400246358891B1032D2CDD,
	grpcsharp_auth_context_release_delegate_EndInvoke_m950E033C2A65F66826A5EC4DDC99C8F24521E3DD,
	gprsharp_now_delegate__ctor_mF22D1C5D71E02CBB29A1B9E60F5069505D80F3C8,
	gprsharp_now_delegate_Invoke_m4FF39FA6CC4512A7CA8115CE6021007440CEC7F8,
	gprsharp_now_delegate_BeginInvoke_m042D17669703D4BD34B010AB03003E0F04CD7A51,
	gprsharp_now_delegate_EndInvoke_mF20347A049E24190DFFC00C62490DF3B0AB06E5C,
	gprsharp_inf_future_delegate__ctor_mE199B03D324A3299AC47036F158020C9A3C201C4,
	gprsharp_inf_future_delegate_Invoke_m45B997CEAAB75769A6BD4A7DF6A274DEF2D443DC,
	gprsharp_inf_future_delegate_BeginInvoke_mBD347F8CB00002301346495E1A9254ED9BF293E4,
	gprsharp_inf_future_delegate_EndInvoke_m543292375F727139716F71039D1C5DA08B047739,
	gprsharp_inf_past_delegate__ctor_m6D647F7A28AFC5A1900EB553124206A2DC82EA4B,
	gprsharp_inf_past_delegate_Invoke_m1F5B2BAA9A0474219E3FB739A7859D8061AD18F0,
	gprsharp_inf_past_delegate_BeginInvoke_m86A378ECB16770114B87AA9FA974C157DFD4E5B7,
	gprsharp_inf_past_delegate_EndInvoke_m64BFD4C9837BA41154B002F4D61EF08437AE51E1,
	gprsharp_convert_clock_type_delegate__ctor_mBE453727F14A7DCE1B1F22F4683663DCDFB3B746,
	gprsharp_convert_clock_type_delegate_Invoke_mFB549FC9DC2FFC59639F493ADA88B2F1FFED8805,
	gprsharp_convert_clock_type_delegate_BeginInvoke_mB5262B174DF54B7510B3D43BF178BE64F55204A9,
	gprsharp_convert_clock_type_delegate_EndInvoke_mD6CB226CA19BF0076804B420FBFF397581A044F3,
	gprsharp_sizeof_timespec_delegate__ctor_m8875D40394D79CF99ED429D03618BD633AF90ECD,
	gprsharp_sizeof_timespec_delegate_Invoke_m4AC887C1F3892A0AE9610ED0B65D3EC4D57893DD,
	gprsharp_sizeof_timespec_delegate_BeginInvoke_m99803978402232525665DF20F6B2B4486866D22B,
	gprsharp_sizeof_timespec_delegate_EndInvoke_m129429874CB6CC2ED49317269C655C466AC99E04,
	grpcsharp_test_callback_delegate__ctor_m401FC9C0B234B684F64296086427C5789265F67A,
	grpcsharp_test_callback_delegate_Invoke_m183E31FE7202C2ED82674994D98C792EB2A36E4E,
	grpcsharp_test_callback_delegate_BeginInvoke_m01E470E6FDBD127093677536461FD9E56F97F6E4,
	grpcsharp_test_callback_delegate_EndInvoke_m9F1BF073F03E7F9ACC0A82EB407A154F508AB3E3,
	grpcsharp_test_nop_delegate__ctor_m600948EB73AC98BC6E6BBBEDDBBC6AAC4FD3C5D7,
	grpcsharp_test_nop_delegate_Invoke_m2DBC3D211FA294C15F531C1B9E5518DD79C69D2E,
	grpcsharp_test_nop_delegate_BeginInvoke_m73D3294DF09222CCA5512C31598707EC09BAB918,
	grpcsharp_test_nop_delegate_EndInvoke_m73CF412FF82A3F7DF40EF3986609DA7D57322EA1,
	grpcsharp_test_override_method_delegate__ctor_m07ADDB3A606D884AB742921EFD12E6092CA021F9,
	grpcsharp_test_override_method_delegate_Invoke_mAC150C69FF62741B495DC3F30FDF1EF684AC2614,
	grpcsharp_test_override_method_delegate_BeginInvoke_mFB71A8267FBC0BC25AB3BF906B166E9FCFF6C15A,
	grpcsharp_test_override_method_delegate_EndInvoke_mA78F8EC1265386D25861BAFC8F95D21D89AC4E34,
	PlatformApis__cctor_mB0BD5E1B84EE3EDADFC771779E9A1C3C03C04AC3,
	PlatformApis_get_IsLinux_m683BA4F5C53C392DD780AA90460313ECEC8ED8ED,
	PlatformApis_get_IsMacOSX_mBB31699A724CEE50A0924DABFDCC588F540969D4,
	PlatformApis_get_IsWindows_m2E74043C918DD52B2280CEFF8F10D17E5E9DE1CF,
	PlatformApis_get_IsMono_m9468DBEDE746CF5BC9F09F97981A2922EABF7CAC,
	PlatformApis_get_IsNetCore_m32D0962291BACCA3A737E6AFDB7EE92776B8BD5D,
	PlatformApis_get_Is64Bit_m37743A197BB108CAA91C8198BC70B17E361E4D50,
	PlatformApis_uname_m609EB1AAB6200DB1CEEEF4B3940B0BDCAD32D831,
	PlatformApis_GetUname_m3AC3546F48CB6E83D870ACE70D7C8C292DA81DB3,
	RequestCallContextSafeHandle_Create_m2A95CC23E04C8BBE0A4F6175787AECB4E5705A0D,
	RequestCallContextSafeHandle_SetReturnToPoolAction_m4D71071E22B0CD7A0C01D0FC27DD525CFC9579C8,
	RequestCallContextSafeHandle_get_CompletionCallback_m200AFFC1B7B08B61A1E93C28AAF10EC41481BEB4,
	RequestCallContextSafeHandle_set_CompletionCallback_mC3DB7FD3562D097FCD31901E1B27FE21B7C7DCBA,
	RequestCallContextSafeHandle_Recycle_m26D2F4A6C3EA88D28629D3ADD72EE84E16990496,
	RequestCallContextSafeHandle_ReleaseHandle_mAF64A21ECB1A739E5938DE889D46C763097518DB,
	RequestCallContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_m1CB8BE8FED775B93E82F857C8B12EA81577B8C43,
	RequestCallContextSafeHandle__cctor_mFB6B20E599A2ED85224E1871CF527E0089E4D846,
	SafeHandleZeroIsInvalid__ctor_m7E656A1FB58ADC6448FD2641E17E56A96967EAF6,
	SafeHandleZeroIsInvalid_get_IsInvalid_m978372947B2E0A3BB798BC60AEC63BB2B64E919D,
	ServerCredentialsSafeHandle_ReleaseHandle_m840638D88CA9D536C2B7BE890B042B2CBE76DE85,
	ServerCredentialsSafeHandle__cctor_m0E405FC4C5D16349DB74C13069F478BE23D45CAF,
	ServerSafeHandle_ShutdownAndNotify_m066DADDEB5EB48E0C72DAF2933EC65C5476B7B9E,
	ServerSafeHandle_ReleaseHandle_m65A5C000977C09A757D0D6928B72F2F93755FDB9,
	ServerSafeHandle_CancelAllCalls_mE58BAEC1363151D0DCF65DDD10CEE45913076D0E,
	ServerSafeHandle__cctor_m1A625FBF422C86D5F2E8ACA9DA2CD0B82A2AAC6C,
	Timespec__ctor_m1384ADEA22D04D508007FC7298C380D2500E875F,
	Timespec__ctor_m4345712E5136B85DB1AAC299451D4BA7B69F5851,
	Timespec_get_InfFuture_m1081C731091C90E6C7A868DB12F75E387FF67926,
	Timespec_get_InfPast_mCCA1B5F4ACE56C3B1C3BC8F780EB1BBA6D66F65B,
	Timespec_get_TimevalSeconds_m571B6C93A9EB6F2EC6C4DB5E31D85AA6CA06E141,
	Timespec_get_TimevalNanos_m7C47D1F224A7068523135C2B294C8FF7CC26E715,
	Timespec_FromDateTime_mEA68EB6B9004C241A06F829A8C165454F052510B,
	Timespec_get_PreciseNow_m32D2D9056BB9282E03F0DA8877184454699326D9,
	Timespec__cctor_mC2F83E9290AC0E4BC28B360C1ECF0FF99DA3D1DC,
	UnmanagedLibrary__ctor_m02619EE6F4B41F6D45611106BF25F9B1054771A1,
	UnmanagedLibrary_LoadSymbol_mE2F12764CBEB5D49F8AF224E1A3925A12E35157D,
	NULL,
	UnmanagedLibrary_PlatformSpecificLoadLibrary_mA91FE40F512309F76B0D9E36BEB6E31D349649C4,
	UnmanagedLibrary_FirstValidLibraryPath_mEBCD5BE91688AB149E5F7FAD44DBF2FD5D43F05C,
	UnmanagedLibrary__cctor_m909CD132CA4A8BD14392803EDF809C80435F17BB,
	Windows_LoadLibrary_m119B7164DCA85407FF3C0B978DA115DDFCC77AF5,
	Windows_GetProcAddress_m1C1425E35E862AD7E242DAFB99403A0F6B5F964E,
	Linux_dlopen_mB0370EE4949F72404965620F82BB8B61AD233217,
	Linux_dlsym_m529C2D9D78F8419FB921A60A379358385B75D0B4,
	MacOSX_dlopen_mB8E4F8141A29C148F1E4028F0730345B0E5CB6E8,
	MacOSX_dlsym_m715A2C7ADA4AA34BD1B22B8B552C7DAB2DDAD8D1,
	Mono_dlopen_m99E4CF2695C06AB46A063D3973F134EE95112719,
	Mono_dlsym_m203A90F70D2F6211B298FFFB55FE63DC5B0BEA3F,
	CoreCLR_dlopen_m0CDC59B96A7F0E18BEE68D91D933D601B1979AFE,
	CoreCLR_dlsym_m7331D98AA152166E3AE6E2308D43DE6413775FE9,
	CallInvokerExtensions_Intercept_m142248113C926E7C76C2743076036DC0233796A6,
	NULL,
	NULL,
	NULL,
	NULL,
	InterceptingCallInvoker__ctor_m7109FF00A43434D1C909ABB09897808B0316C730,
	NULL,
	NULL,
	NULL,
	Interceptor__ctor_m828E69426C30DD717BD6659CDFB0DC86FCF93B20,
	NULL,
	NULL,
	NULL,
	NULL,
};
extern void CallOptions__ctor_m1AEB9AE5049E7BCBE1FF371D565CF313FCFAEAF4_AdjustorThunk (void);
extern void CallOptions_get_Headers_mFC6A54A222982567FBA9BC5E722F981B6BEDED32_AdjustorThunk (void);
extern void CallOptions_get_Deadline_m690790D582CCB0BBE0453BFB4525A9225897B7B0_AdjustorThunk (void);
extern void CallOptions_get_CancellationToken_m99069FDFB1F6AF9CD66440943E9D0994B570F845_AdjustorThunk (void);
extern void CallOptions_get_WriteOptions_mCCAD13A0CCBBF55EE69877CC0179B6E1BE58F6E3_AdjustorThunk (void);
extern void CallOptions_get_PropagationToken_mDAEB8A7CE897C1F462A5EA217E5DFDB492FB39F2_AdjustorThunk (void);
extern void CallOptions_get_Credentials_mEBA6A20D2C0D61D3FB6776619B8E395A1737AE79_AdjustorThunk (void);
extern void CallOptions_get_Flags_m17943C17884032BD7BD6209FAC07FA2891EB36A0_AdjustorThunk (void);
extern void CallOptions_Normalize_m9629515871AAED7A0719B93CEC5366280DFC27AB_AdjustorThunk (void);
extern void U3CShutdownAsyncU3Ed__27_MoveNext_mCF49ACE9F4DD4230A7B724D3867F7A337CF2B8E2_AdjustorThunk (void);
extern void U3CShutdownAsyncU3Ed__27_SetStateMachine_m9A41DAA653D838C2B9B977446AF40C9ADC108BFC_AdjustorThunk (void);
extern void U3CRunConnectivityWatcherAsyncU3Ed__37_MoveNext_mB16C33EB16EA1ED3B7C230B42924F614359456F6_AdjustorThunk (void);
extern void U3CRunConnectivityWatcherAsyncU3Ed__37_SetStateMachine_m8C5E8CAFC1342E10670CBAFBEC2489AD239C6D7C_AdjustorThunk (void);
extern void U3CReleaseAsyncU3Ed__25_MoveNext_m8C324FAF133C61CF8D0D09C10CBBA3601436F2EA_AdjustorThunk (void);
extern void U3CReleaseAsyncU3Ed__25_SetStateMachine_m6D16DDD506C9287E858D5628FD8D16E13F0D858E_AdjustorThunk (void);
extern void U3CShutdownAsyncU3Ed__59_MoveNext_mEDF586693548F068CDFEF4608BDF0999DCA468F9_AdjustorThunk (void);
extern void U3CShutdownAsyncU3Ed__59_SetStateMachine_m7C5E392AC9059FF7ECBDF1D4FC1CB09157D0F4BE_AdjustorThunk (void);
extern void U3CShutdownInternalAsyncU3Ed__32_MoveNext_m1566CF613F56E95FCC908D9E2BDE7E97154BDC5B_AdjustorThunk (void);
extern void U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_mBAF9615560F8F99805EE87FE50EAA1A5AE0E7F44_AdjustorThunk (void);
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_m2A4F57280EEAF69C40FF8A3709D5DC524E1CF177_AdjustorThunk (void);
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_m10A2710C4114AF8D2A8C308C92293166414D4A1F_AdjustorThunk (void);
extern void Status__ctor_m24B7DBD91C17D3A49A8445161FFEA196C945C268_AdjustorThunk (void);
extern void Status_get_StatusCode_mDD6E402914C3542C77CD5A475AE9F2D451F71B6D_AdjustorThunk (void);
extern void Status_get_Detail_mEC53DC9F6C581A48AE1AB63C634571459D909CA8_AdjustorThunk (void);
extern void Status_ToString_mE23E3F9362C611D293FC0BE2BB2E0DA3C7BF6F04_AdjustorThunk (void);
extern void ProfilerEntry__ctor_m3FF1E12C83AA8248E759F953AEF5E937157FC000_AdjustorThunk (void);
extern void ProfilerEntry_ToString_m05EE211900D090352DF336B1341CD45AE0BE905F_AdjustorThunk (void);
extern void ProfilerScope__ctor_m483C2898546B1C5F86C967A95141AA30D10275CE_AdjustorThunk (void);
extern void ProfilerScope_Dispose_m035AE616C0C95C33177C91A7F362CC51B68F23E6_AdjustorThunk (void);
extern void CompletionCallbackData__ctor_m3729AC1E1BA8567E5B22FF19858BAEA497CA049D_AdjustorThunk (void);
extern void CompletionCallbackData_get_Callback_mAD7916AA2B108E70FEA7D2B0A427DA95B968B127_AdjustorThunk (void);
extern void CompletionCallbackData_get_State_m1ABE57B421E8574ECC458DC5BD3AE65F61EAB8A5_AdjustorThunk (void);
extern void ClientSideStatus__ctor_mD608389BE52E1457F765F4FB017F52E15AEB2AB6_AdjustorThunk (void);
extern void ClientSideStatus_get_Status_mCEA26A40C7599141284FA8B0F351C0F65F2D6A3A_AdjustorThunk (void);
extern void ClientSideStatus_get_Trailers_mF94B423EC5844577EEA4C11EB433DCE8D9CC263A_AdjustorThunk (void);
extern void UsageScope__ctor_m1574271335AFBD32A321477847586059B52C67D1_AdjustorThunk (void);
extern void UsageScope_Dispose_m18D3245A5F32184D31FC837A4D65BCD75B92FB97_AdjustorThunk (void);
extern void Timespec__ctor_m1384ADEA22D04D508007FC7298C380D2500E875F_AdjustorThunk (void);
extern void Timespec__ctor_m4345712E5136B85DB1AAC299451D4BA7B69F5851_AdjustorThunk (void);
extern void Timespec_get_TimevalSeconds_m571B6C93A9EB6F2EC6C4DB5E31D85AA6CA06E141_AdjustorThunk (void);
extern void Timespec_get_TimevalNanos_m7C47D1F224A7068523135C2B294C8FF7CC26E715_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[41] = 
{
	{ 0x0600000D, CallOptions__ctor_m1AEB9AE5049E7BCBE1FF371D565CF313FCFAEAF4_AdjustorThunk },
	{ 0x0600000E, CallOptions_get_Headers_mFC6A54A222982567FBA9BC5E722F981B6BEDED32_AdjustorThunk },
	{ 0x0600000F, CallOptions_get_Deadline_m690790D582CCB0BBE0453BFB4525A9225897B7B0_AdjustorThunk },
	{ 0x06000010, CallOptions_get_CancellationToken_m99069FDFB1F6AF9CD66440943E9D0994B570F845_AdjustorThunk },
	{ 0x06000011, CallOptions_get_WriteOptions_mCCAD13A0CCBBF55EE69877CC0179B6E1BE58F6E3_AdjustorThunk },
	{ 0x06000012, CallOptions_get_PropagationToken_mDAEB8A7CE897C1F462A5EA217E5DFDB492FB39F2_AdjustorThunk },
	{ 0x06000013, CallOptions_get_Credentials_mEBA6A20D2C0D61D3FB6776619B8E395A1737AE79_AdjustorThunk },
	{ 0x06000014, CallOptions_get_Flags_m17943C17884032BD7BD6209FAC07FA2891EB36A0_AdjustorThunk },
	{ 0x06000015, CallOptions_Normalize_m9629515871AAED7A0719B93CEC5366280DFC27AB_AdjustorThunk },
	{ 0x06000025, U3CShutdownAsyncU3Ed__27_MoveNext_mCF49ACE9F4DD4230A7B724D3867F7A337CF2B8E2_AdjustorThunk },
	{ 0x06000026, U3CShutdownAsyncU3Ed__27_SetStateMachine_m9A41DAA653D838C2B9B977446AF40C9ADC108BFC_AdjustorThunk },
	{ 0x06000027, U3CRunConnectivityWatcherAsyncU3Ed__37_MoveNext_mB16C33EB16EA1ED3B7C230B42924F614359456F6_AdjustorThunk },
	{ 0x06000028, U3CRunConnectivityWatcherAsyncU3Ed__37_SetStateMachine_m8C5E8CAFC1342E10670CBAFBEC2489AD239C6D7C_AdjustorThunk },
	{ 0x0600006B, U3CReleaseAsyncU3Ed__25_MoveNext_m8C324FAF133C61CF8D0D09C10CBBA3601436F2EA_AdjustorThunk },
	{ 0x0600006C, U3CReleaseAsyncU3Ed__25_SetStateMachine_m6D16DDD506C9287E858D5628FD8D16E13F0D858E_AdjustorThunk },
	{ 0x06000073, U3CShutdownAsyncU3Ed__59_MoveNext_mEDF586693548F068CDFEF4608BDF0999DCA468F9_AdjustorThunk },
	{ 0x06000074, U3CShutdownAsyncU3Ed__59_SetStateMachine_m7C5E392AC9059FF7ECBDF1D4FC1CB09157D0F4BE_AdjustorThunk },
	{ 0x060000A0, U3CShutdownInternalAsyncU3Ed__32_MoveNext_m1566CF613F56E95FCC908D9E2BDE7E97154BDC5B_AdjustorThunk },
	{ 0x060000A1, U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_mBAF9615560F8F99805EE87FE50EAA1A5AE0E7F44_AdjustorThunk },
	{ 0x060000A2, U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_m2A4F57280EEAF69C40FF8A3709D5DC524E1CF177_AdjustorThunk },
	{ 0x060000A3, U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_m10A2710C4114AF8D2A8C308C92293166414D4A1F_AdjustorThunk },
	{ 0x060000A4, Status__ctor_m24B7DBD91C17D3A49A8445161FFEA196C945C268_AdjustorThunk },
	{ 0x060000A5, Status_get_StatusCode_mDD6E402914C3542C77CD5A475AE9F2D451F71B6D_AdjustorThunk },
	{ 0x060000A6, Status_get_Detail_mEC53DC9F6C581A48AE1AB63C634571459D909CA8_AdjustorThunk },
	{ 0x060000A7, Status_ToString_mE23E3F9362C611D293FC0BE2BB2E0DA3C7BF6F04_AdjustorThunk },
	{ 0x060000B4, ProfilerEntry__ctor_m3FF1E12C83AA8248E759F953AEF5E937157FC000_AdjustorThunk },
	{ 0x060000B5, ProfilerEntry_ToString_m05EE211900D090352DF336B1341CD45AE0BE905F_AdjustorThunk },
	{ 0x060000C3, ProfilerScope__ctor_m483C2898546B1C5F86C967A95141AA30D10275CE_AdjustorThunk },
	{ 0x060000C4, ProfilerScope_Dispose_m035AE616C0C95C33177C91A7F362CC51B68F23E6_AdjustorThunk },
	{ 0x0600011C, CompletionCallbackData__ctor_m3729AC1E1BA8567E5B22FF19858BAEA497CA049D_AdjustorThunk },
	{ 0x0600011D, CompletionCallbackData_get_Callback_mAD7916AA2B108E70FEA7D2B0A427DA95B968B127_AdjustorThunk },
	{ 0x0600011E, CompletionCallbackData_get_State_m1ABE57B421E8574ECC458DC5BD3AE65F61EAB8A5_AdjustorThunk },
	{ 0x06000143, ClientSideStatus__ctor_mD608389BE52E1457F765F4FB017F52E15AEB2AB6_AdjustorThunk },
	{ 0x06000144, ClientSideStatus_get_Status_mCEA26A40C7599141284FA8B0F351C0F65F2D6A3A_AdjustorThunk },
	{ 0x06000145, ClientSideStatus_get_Trailers_mF94B423EC5844577EEA4C11EB433DCE8D9CC263A_AdjustorThunk },
	{ 0x06000153, UsageScope__ctor_m1574271335AFBD32A321477847586059B52C67D1_AdjustorThunk },
	{ 0x06000154, UsageScope_Dispose_m18D3245A5F32184D31FC837A4D65BCD75B92FB97_AdjustorThunk },
	{ 0x06000355, Timespec__ctor_m1384ADEA22D04D508007FC7298C380D2500E875F_AdjustorThunk },
	{ 0x06000356, Timespec__ctor_m4345712E5136B85DB1AAC299451D4BA7B69F5851_AdjustorThunk },
	{ 0x06000359, Timespec_get_TimevalSeconds_m571B6C93A9EB6F2EC6C4DB5E31D85AA6CA06E141_AdjustorThunk },
	{ 0x0600035A, Timespec_get_TimevalNanos_m7C47D1F224A7068523135C2B294C8FF7CC26E715_AdjustorThunk },
};
static const int32_t s_InvokerIndices[891] = 
{
	14,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	23,
	1999,
	14,
	1038,
	450,
	14,
	14,
	14,
	10,
	2000,
	-1,
	27,
	198,
	10,
	2001,
	14,
	14,
	14,
	26,
	26,
	216,
	14,
	154,
	0,
	3,
	23,
	26,
	23,
	26,
	3,
	23,
	1344,
	4,
	14,
	23,
	3,
	14,
	23,
	27,
	10,
	14,
	10,
	14,
	0,
	-1,
	26,
	26,
	26,
	14,
	27,
	14,
	2002,
	26,
	-1,
	-1,
	14,
	110,
	450,
	14,
	42,
	89,
	89,
	3,
	26,
	-1,
	-1,
	4,
	4,
	154,
	154,
	154,
	4,
	4,
	4,
	23,
	14,
	14,
	14,
	89,
	14,
	14,
	3,
	3,
	14,
	10,
	10,
	3,
	23,
	3,
	3,
	3,
	3,
	23,
	27,
	27,
	23,
	26,
	3,
	23,
	28,
	28,
	14,
	14,
	23,
	26,
	-1,
	-1,
	-1,
	-1,
	23,
	14,
	112,
	62,
	32,
	34,
	62,
	26,
	23,
	9,
	130,
	10,
	89,
	9,
	14,
	14,
	23,
	3,
	198,
	14,
	89,
	14,
	14,
	1,
	114,
	3,
	-1,
	-1,
	-1,
	-1,
	-1,
	2003,
	2004,
	14,
	123,
	14,
	23,
	1344,
	3,
	23,
	26,
	23,
	26,
	62,
	10,
	14,
	14,
	3,
	32,
	10,
	3,
	850,
	773,
	-1,
	-1,
	850,
	773,
	26,
	26,
	2005,
	14,
	43,
	4,
	154,
	2006,
	3,
	26,
	26,
	23,
	26,
	26,
	26,
	26,
	2007,
	27,
	23,
	23,
	26,
	-1,
	3,
	23,
	14,
	-1,
	26,
	27,
	26,
	27,
	26,
	27,
	130,
	355,
	-1,
	26,
	27,
	26,
	27,
	26,
	27,
	293,
	27,
	-1,
	26,
	27,
	26,
	26,
	27,
	26,
	27,
	14,
	27,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	200,
	173,
	6,
	173,
	173,
	89,
	3,
	31,
	4,
	15,
	26,
	27,
	14,
	2008,
	14,
	89,
	23,
	89,
	31,
	3,
	27,
	14,
	14,
	89,
	3,
	164,
	23,
	26,
	26,
	1334,
	23,
	2009,
	89,
	3,
	3,
	23,
	1344,
	1344,
	1344,
	1344,
	1344,
	1344,
	1344,
	23,
	4,
	43,
	364,
	797,
	89,
	3,
	89,
	3,
	1,
	2,
	2010,
	216,
	2011,
	89,
	3,
	2003,
	2004,
	14,
	3,
	4,
	0,
	2012,
	2013,
	2014,
	23,
	14,
	89,
	23,
	23,
	23,
	3,
	26,
	23,
	124,
	1344,
	2015,
	26,
	124,
	88,
	2016,
	26,
	198,
	1220,
	105,
	1005,
	3,
	2017,
	2018,
	23,
	89,
	3,
	23,
	26,
	23,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	154,
	3,
	1488,
	23,
	14,
	89,
	14,
	136,
	27,
	119,
	449,
	3,
	26,
	26,
	23,
	3,
	23,
	9,
	23,
	23,
	23,
	14,
	14,
	2019,
	2020,
	88,
	88,
	31,
	31,
	42,
	23,
	2009,
	1334,
	-1,
	-1,
	1015,
	0,
	0,
	3,
	23,
	0,
	18,
	89,
	3,
	23,
	4,
	14,
	4,
	4,
	114,
	4,
	4,
	4,
	3,
	124,
	2021,
	2022,
	26,
	154,
	2023,
	3,
	124,
	2024,
	2025,
	26,
	124,
	31,
	1345,
	26,
	26,
	4,
	-1,
	1,
	124,
	23,
	105,
	26,
	124,
	23,
	105,
	26,
	124,
	15,
	105,
	145,
	124,
	14,
	105,
	28,
	124,
	145,
	205,
	145,
	124,
	145,
	205,
	145,
	124,
	2026,
	2027,
	26,
	124,
	112,
	205,
	112,
	124,
	2028,
	2029,
	2030,
	124,
	145,
	205,
	145,
	124,
	112,
	205,
	112,
	124,
	26,
	205,
	26,
	124,
	7,
	838,
	26,
	124,
	14,
	105,
	28,
	124,
	28,
	205,
	28,
	124,
	2028,
	2029,
	2030,
	124,
	2028,
	2029,
	2030,
	124,
	2031,
	205,
	2031,
	124,
	145,
	205,
	145,
	124,
	26,
	205,
	26,
	124,
	7,
	838,
	26,
	124,
	105,
	125,
	28,
	124,
	7,
	838,
	26,
	124,
	112,
	205,
	112,
	124,
	785,
	565,
	112,
	124,
	2032,
	2033,
	112,
	124,
	2034,
	1032,
	112,
	124,
	2032,
	2033,
	112,
	124,
	2034,
	1032,
	112,
	124,
	2035,
	2036,
	112,
	124,
	41,
	125,
	112,
	124,
	2037,
	2038,
	112,
	124,
	41,
	125,
	112,
	124,
	41,
	125,
	112,
	124,
	41,
	125,
	112,
	124,
	2039,
	2040,
	112,
	124,
	41,
	125,
	112,
	124,
	28,
	205,
	28,
	124,
	7,
	838,
	26,
	124,
	1005,
	838,
	28,
	124,
	2041,
	2042,
	26,
	124,
	2043,
	2044,
	26,
	124,
	7,
	838,
	26,
	124,
	26,
	205,
	26,
	124,
	205,
	2040,
	28,
	124,
	105,
	125,
	28,
	124,
	7,
	838,
	26,
	124,
	105,
	125,
	28,
	124,
	205,
	2040,
	28,
	124,
	2045,
	2046,
	28,
	124,
	500,
	142,
	112,
	124,
	2047,
	2048,
	26,
	124,
	28,
	205,
	28,
	124,
	7,
	838,
	26,
	124,
	10,
	105,
	112,
	124,
	14,
	105,
	28,
	124,
	14,
	105,
	28,
	124,
	26,
	205,
	26,
	124,
	2049,
	205,
	2049,
	124,
	2050,
	2051,
	2049,
	124,
	7,
	838,
	26,
	124,
	7,
	838,
	26,
	124,
	1005,
	838,
	28,
	124,
	2052,
	2053,
	26,
	124,
	1217,
	838,
	145,
	124,
	2054,
	2055,
	2030,
	124,
	2054,
	2055,
	2030,
	124,
	7,
	838,
	26,
	124,
	26,
	205,
	26,
	124,
	28,
	205,
	28,
	124,
	2056,
	2057,
	26,
	124,
	2058,
	2059,
	28,
	124,
	7,
	838,
	26,
	124,
	28,
	205,
	28,
	124,
	27,
	125,
	26,
	124,
	41,
	125,
	112,
	124,
	2039,
	2040,
	112,
	124,
	26,
	205,
	26,
	124,
	2039,
	2040,
	112,
	124,
	26,
	205,
	26,
	124,
	198,
	2040,
	26,
	124,
	7,
	838,
	26,
	124,
	28,
	205,
	28,
	124,
	145,
	205,
	145,
	124,
	2060,
	205,
	2060,
	124,
	2061,
	1177,
	2030,
	124,
	7,
	838,
	26,
	124,
	2062,
	586,
	2031,
	124,
	2062,
	586,
	2031,
	124,
	2062,
	586,
	2031,
	124,
	2063,
	2064,
	2031,
	124,
	10,
	105,
	112,
	124,
	112,
	205,
	112,
	124,
	1217,
	838,
	145,
	124,
	27,
	125,
	26,
	3,
	49,
	49,
	49,
	49,
	49,
	49,
	155,
	4,
	4,
	26,
	14,
	26,
	23,
	89,
	31,
	3,
	23,
	89,
	89,
	3,
	27,
	89,
	23,
	3,
	296,
	2065,
	2066,
	2066,
	173,
	10,
	2067,
	2066,
	3,
	26,
	145,
	-1,
	24,
	0,
	3,
	24,
	930,
	1019,
	930,
	1019,
	930,
	1019,
	930,
	1019,
	930,
	1,
	-1,
	-1,
	-1,
	-1,
	27,
	-1,
	-1,
	-1,
	23,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[24] = 
{
	{ 0x02000003, { 0, 6 } },
	{ 0x0200001F, { 20, 2 } },
	{ 0x02000025, { 24, 4 } },
	{ 0x0200003C, { 33, 34 } },
	{ 0x0200003D, { 67, 17 } },
	{ 0x02000059, { 84, 27 } },
	{ 0x0200005A, { 111, 2 } },
	{ 0x0200005B, { 113, 2 } },
	{ 0x06000016, { 6, 3 } },
	{ 0x06000041, { 9, 5 } },
	{ 0x06000042, { 14, 2 } },
	{ 0x0600004C, { 16, 2 } },
	{ 0x0600004D, { 18, 2 } },
	{ 0x06000078, { 22, 2 } },
	{ 0x060000AE, { 28, 1 } },
	{ 0x060000AF, { 29, 1 } },
	{ 0x060000C7, { 30, 1 } },
	{ 0x060000D4, { 31, 1 } },
	{ 0x060000DD, { 32, 1 } },
	{ 0x060001BE, { 115, 2 } },
	{ 0x06000360, { 117, 2 } },
	{ 0x06000374, { 119, 6 } },
	{ 0x06000375, { 125, 4 } },
	{ 0x06000376, { 129, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[130] = 
{
	{ (Il2CppRGCTXDataType)3, 29431 },
	{ (Il2CppRGCTXDataType)3, 29432 },
	{ (Il2CppRGCTXDataType)3, 29433 },
	{ (Il2CppRGCTXDataType)3, 29434 },
	{ (Il2CppRGCTXDataType)3, 29435 },
	{ (Il2CppRGCTXDataType)3, 29436 },
	{ (Il2CppRGCTXDataType)2, 38070 },
	{ (Il2CppRGCTXDataType)3, 29437 },
	{ (Il2CppRGCTXDataType)3, 29438 },
	{ (Il2CppRGCTXDataType)3, 29439 },
	{ (Il2CppRGCTXDataType)3, 29440 },
	{ (Il2CppRGCTXDataType)3, 29441 },
	{ (Il2CppRGCTXDataType)2, 30844 },
	{ (Il2CppRGCTXDataType)3, 29442 },
	{ (Il2CppRGCTXDataType)3, 29443 },
	{ (Il2CppRGCTXDataType)3, 29444 },
	{ (Il2CppRGCTXDataType)3, 29445 },
	{ (Il2CppRGCTXDataType)3, 29446 },
	{ (Il2CppRGCTXDataType)2, 30872 },
	{ (Il2CppRGCTXDataType)3, 29447 },
	{ (Il2CppRGCTXDataType)3, 29448 },
	{ (Il2CppRGCTXDataType)3, 29449 },
	{ (Il2CppRGCTXDataType)2, 30912 },
	{ (Il2CppRGCTXDataType)3, 29450 },
	{ (Il2CppRGCTXDataType)3, 29451 },
	{ (Il2CppRGCTXDataType)3, 29452 },
	{ (Il2CppRGCTXDataType)3, 29453 },
	{ (Il2CppRGCTXDataType)2, 38071 },
	{ (Il2CppRGCTXDataType)2, 30959 },
	{ (Il2CppRGCTXDataType)2, 30960 },
	{ (Il2CppRGCTXDataType)1, 38072 },
	{ (Il2CppRGCTXDataType)3, 29454 },
	{ (Il2CppRGCTXDataType)1, 38074 },
	{ (Il2CppRGCTXDataType)3, 29455 },
	{ (Il2CppRGCTXDataType)3, 29456 },
	{ (Il2CppRGCTXDataType)3, 29457 },
	{ (Il2CppRGCTXDataType)3, 29458 },
	{ (Il2CppRGCTXDataType)3, 29459 },
	{ (Il2CppRGCTXDataType)2, 30999 },
	{ (Il2CppRGCTXDataType)3, 29460 },
	{ (Il2CppRGCTXDataType)3, 29461 },
	{ (Il2CppRGCTXDataType)3, 29462 },
	{ (Il2CppRGCTXDataType)2, 38075 },
	{ (Il2CppRGCTXDataType)3, 29463 },
	{ (Il2CppRGCTXDataType)3, 29464 },
	{ (Il2CppRGCTXDataType)3, 29465 },
	{ (Il2CppRGCTXDataType)3, 29466 },
	{ (Il2CppRGCTXDataType)3, 29467 },
	{ (Il2CppRGCTXDataType)2, 38076 },
	{ (Il2CppRGCTXDataType)3, 29468 },
	{ (Il2CppRGCTXDataType)3, 29469 },
	{ (Il2CppRGCTXDataType)3, 29470 },
	{ (Il2CppRGCTXDataType)3, 29471 },
	{ (Il2CppRGCTXDataType)3, 29472 },
	{ (Il2CppRGCTXDataType)3, 29473 },
	{ (Il2CppRGCTXDataType)3, 29474 },
	{ (Il2CppRGCTXDataType)3, 29475 },
	{ (Il2CppRGCTXDataType)3, 29476 },
	{ (Il2CppRGCTXDataType)3, 29477 },
	{ (Il2CppRGCTXDataType)3, 29478 },
	{ (Il2CppRGCTXDataType)3, 29479 },
	{ (Il2CppRGCTXDataType)3, 29480 },
	{ (Il2CppRGCTXDataType)3, 29481 },
	{ (Il2CppRGCTXDataType)3, 29482 },
	{ (Il2CppRGCTXDataType)3, 29483 },
	{ (Il2CppRGCTXDataType)3, 29484 },
	{ (Il2CppRGCTXDataType)3, 29485 },
	{ (Il2CppRGCTXDataType)3, 29486 },
	{ (Il2CppRGCTXDataType)3, 29487 },
	{ (Il2CppRGCTXDataType)3, 29488 },
	{ (Il2CppRGCTXDataType)3, 29489 },
	{ (Il2CppRGCTXDataType)3, 29490 },
	{ (Il2CppRGCTXDataType)3, 29491 },
	{ (Il2CppRGCTXDataType)3, 29492 },
	{ (Il2CppRGCTXDataType)3, 29493 },
	{ (Il2CppRGCTXDataType)3, 29494 },
	{ (Il2CppRGCTXDataType)3, 29495 },
	{ (Il2CppRGCTXDataType)2, 38077 },
	{ (Il2CppRGCTXDataType)3, 29496 },
	{ (Il2CppRGCTXDataType)3, 29497 },
	{ (Il2CppRGCTXDataType)3, 29498 },
	{ (Il2CppRGCTXDataType)3, 29499 },
	{ (Il2CppRGCTXDataType)3, 29500 },
	{ (Il2CppRGCTXDataType)3, 29501 },
	{ (Il2CppRGCTXDataType)2, 38078 },
	{ (Il2CppRGCTXDataType)3, 29502 },
	{ (Il2CppRGCTXDataType)3, 29503 },
	{ (Il2CppRGCTXDataType)2, 38079 },
	{ (Il2CppRGCTXDataType)3, 29504 },
	{ (Il2CppRGCTXDataType)3, 29505 },
	{ (Il2CppRGCTXDataType)2, 38080 },
	{ (Il2CppRGCTXDataType)3, 29506 },
	{ (Il2CppRGCTXDataType)3, 29507 },
	{ (Il2CppRGCTXDataType)2, 38081 },
	{ (Il2CppRGCTXDataType)3, 29508 },
	{ (Il2CppRGCTXDataType)2, 38082 },
	{ (Il2CppRGCTXDataType)3, 29509 },
	{ (Il2CppRGCTXDataType)3, 29510 },
	{ (Il2CppRGCTXDataType)2, 31095 },
	{ (Il2CppRGCTXDataType)2, 31113 },
	{ (Il2CppRGCTXDataType)3, 29511 },
	{ (Il2CppRGCTXDataType)3, 29512 },
	{ (Il2CppRGCTXDataType)3, 29513 },
	{ (Il2CppRGCTXDataType)3, 29514 },
	{ (Il2CppRGCTXDataType)3, 29515 },
	{ (Il2CppRGCTXDataType)3, 29516 },
	{ (Il2CppRGCTXDataType)3, 29517 },
	{ (Il2CppRGCTXDataType)3, 29518 },
	{ (Il2CppRGCTXDataType)3, 29519 },
	{ (Il2CppRGCTXDataType)3, 29520 },
	{ (Il2CppRGCTXDataType)3, 29521 },
	{ (Il2CppRGCTXDataType)2, 31103 },
	{ (Il2CppRGCTXDataType)3, 29522 },
	{ (Il2CppRGCTXDataType)2, 31109 },
	{ (Il2CppRGCTXDataType)3, 29523 },
	{ (Il2CppRGCTXDataType)1, 31171 },
	{ (Il2CppRGCTXDataType)3, 29524 },
	{ (Il2CppRGCTXDataType)1, 31380 },
	{ (Il2CppRGCTXDataType)2, 31380 },
	{ (Il2CppRGCTXDataType)2, 38083 },
	{ (Il2CppRGCTXDataType)3, 29525 },
	{ (Il2CppRGCTXDataType)3, 29526 },
	{ (Il2CppRGCTXDataType)2, 38084 },
	{ (Il2CppRGCTXDataType)3, 29527 },
	{ (Il2CppRGCTXDataType)3, 29528 },
	{ (Il2CppRGCTXDataType)3, 29529 },
	{ (Il2CppRGCTXDataType)3, 29530 },
	{ (Il2CppRGCTXDataType)3, 29531 },
	{ (Il2CppRGCTXDataType)3, 29532 },
	{ (Il2CppRGCTXDataType)3, 29533 },
};
extern const Il2CppCodeGenModule g_Grpc_CoreCodeGenModule;
const Il2CppCodeGenModule g_Grpc_CoreCodeGenModule = 
{
	"Grpc.Core.dll",
	891,
	s_methodPointers,
	41,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	24,
	s_rgctxIndices,
	130,
	s_rgctxValues,
	NULL,
};
