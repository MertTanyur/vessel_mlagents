#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 Unity.Barracuda.Tensor Unity.Barracuda.IOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
// 0x00000002 Unity.Barracuda.Tensor Unity.Barracuda.IOps::MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
// 0x00000003 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
// 0x00000004 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
// 0x00000005 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Conv3D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
// 0x00000006 Unity.Barracuda.Tensor Unity.Barracuda.IOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
// 0x00000007 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
// 0x00000008 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
// 0x00000009 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Upsample3D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
// 0x0000000A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
// 0x0000000B Unity.Barracuda.Tensor Unity.Barracuda.IOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
// 0x0000000C Unity.Barracuda.Tensor Unity.Barracuda.IOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
// 0x0000000D Unity.Barracuda.Tensor Unity.Barracuda.IOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x0000000E Unity.Barracuda.Tensor Unity.Barracuda.IOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x0000000F Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
// 0x00000010 Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
// 0x00000011 Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
// 0x00000012 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
// 0x00000013 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Border3D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
// 0x00000014 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000015 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000016 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000017 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000018 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
// 0x00000019 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
// 0x0000001A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Dropout(Unity.Barracuda.Tensor,System.Single)
// 0x0000001B Unity.Barracuda.Tensor Unity.Barracuda.IOps::RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
// 0x0000001C Unity.Barracuda.Tensor Unity.Barracuda.IOps::RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
// 0x0000001D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
// 0x0000001E Unity.Barracuda.Tensor Unity.Barracuda.IOps::OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
// 0x0000001F Unity.Barracuda.Tensor Unity.Barracuda.IOps::TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
// 0x00000020 Unity.Barracuda.Tensor Unity.Barracuda.IOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
// 0x00000021 Unity.Barracuda.Tensor Unity.Barracuda.IOps::NonZero(Unity.Barracuda.Tensor)
// 0x00000022 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Relu(Unity.Barracuda.Tensor)
// 0x00000023 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
// 0x00000024 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogSoftmax(Unity.Barracuda.Tensor)
// 0x00000025 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Tanh(Unity.Barracuda.Tensor)
// 0x00000026 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Softplus(Unity.Barracuda.Tensor)
// 0x00000027 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sigmoid(Unity.Barracuda.Tensor)
// 0x00000028 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Elu(Unity.Barracuda.Tensor,System.Single)
// 0x00000029 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Relu6(Unity.Barracuda.Tensor)
// 0x0000002A Unity.Barracuda.Tensor Unity.Barracuda.IOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
// 0x0000002B Unity.Barracuda.Tensor Unity.Barracuda.IOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
// 0x0000002C Unity.Barracuda.Tensor Unity.Barracuda.IOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000002D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Swish(Unity.Barracuda.Tensor)
// 0x0000002E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Abs(Unity.Barracuda.Tensor)
// 0x0000002F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Neg(Unity.Barracuda.Tensor)
// 0x00000030 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Ceil(Unity.Barracuda.Tensor)
// 0x00000031 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
// 0x00000032 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Floor(Unity.Barracuda.Tensor)
// 0x00000033 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Reciprocal(Unity.Barracuda.Tensor)
// 0x00000034 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pow(Unity.Barracuda.Tensor,System.Single)
// 0x00000035 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Exp(Unity.Barracuda.Tensor)
// 0x00000036 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Log(Unity.Barracuda.Tensor)
// 0x00000037 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sqrt(Unity.Barracuda.Tensor)
// 0x00000038 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Acos(Unity.Barracuda.Tensor)
// 0x00000039 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Acosh(Unity.Barracuda.Tensor)
// 0x0000003A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Asin(Unity.Barracuda.Tensor)
// 0x0000003B Unity.Barracuda.Tensor Unity.Barracuda.IOps::Asinh(Unity.Barracuda.Tensor)
// 0x0000003C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Atan(Unity.Barracuda.Tensor)
// 0x0000003D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Atanh(Unity.Barracuda.Tensor)
// 0x0000003E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Cos(Unity.Barracuda.Tensor)
// 0x0000003F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Cosh(Unity.Barracuda.Tensor)
// 0x00000040 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sin(Unity.Barracuda.Tensor)
// 0x00000041 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sinh(Unity.Barracuda.Tensor)
// 0x00000042 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Tan(Unity.Barracuda.Tensor)
// 0x00000043 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Add(Unity.Barracuda.Tensor[])
// 0x00000044 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sub(Unity.Barracuda.Tensor[])
// 0x00000045 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Mul(Unity.Barracuda.Tensor[])
// 0x00000046 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Div(Unity.Barracuda.Tensor[])
// 0x00000047 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pow(Unity.Barracuda.Tensor[])
// 0x00000048 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Min(Unity.Barracuda.Tensor[])
// 0x00000049 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Max(Unity.Barracuda.Tensor[])
// 0x0000004A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Mean(Unity.Barracuda.Tensor[])
// 0x0000004B Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
// 0x0000004C Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
// 0x0000004D Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
// 0x0000004E Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
// 0x0000004F Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
// 0x00000050 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ArgMax(Unity.Barracuda.Tensor,System.Int32)
// 0x00000051 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ArgMin(Unity.Barracuda.Tensor,System.Int32)
// 0x00000052 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000053 Unity.Barracuda.Tensor Unity.Barracuda.IOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000054 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000055 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000056 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000057 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000058 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000059 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000005A Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalNot(Unity.Barracuda.Tensor)
// 0x0000005B Unity.Barracuda.Tensor Unity.Barracuda.IOps::Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000005C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Flatten(Unity.Barracuda.Tensor)
// 0x0000005D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
// 0x0000005E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
// 0x0000005F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Transpose(Unity.Barracuda.Tensor)
// 0x00000060 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Transpose(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000061 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
// 0x00000062 Unity.Barracuda.Tensor Unity.Barracuda.IOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x00000063 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000064 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
// 0x00000065 Unity.Barracuda.Tensor Unity.Barracuda.IOps::NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
// 0x00000066 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Shape(Unity.Barracuda.Tensor,System.Int32)
// 0x00000067 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Copy(Unity.Barracuda.Tensor)
// 0x00000068 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Prepare(Unity.Barracuda.Tensor)
// 0x00000069 System.Void Unity.Barracuda.IOps::ResetAllocator(System.Boolean)
// 0x0000006A System.Void Unity.Barracuda.IModelCompiler::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x0000006B System.Void Unity.Barracuda.IModelCompiler::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
// 0x0000006C System.Void Unity.Barracuda.IVars::SetInput(System.String,Unity.Barracuda.Tensor)
// 0x0000006D System.Void Unity.Barracuda.IVars::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x0000006E Unity.Barracuda.Tensor[] Unity.Barracuda.IVars::GatherInputs(Unity.Barracuda.Layer)
// 0x0000006F System.Void Unity.Barracuda.IVars::PrepareStorage(Unity.Barracuda.Layer)
// 0x00000070 System.Void Unity.Barracuda.IVars::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
// 0x00000071 Unity.Barracuda.Tensor Unity.Barracuda.IVars::PeekOutput(System.String)
// 0x00000072 Unity.Barracuda.Tensor[] Unity.Barracuda.IVars::PeekConstants(System.String)
// 0x00000073 Unity.Barracuda.ITensorAllocator Unity.Barracuda.IVars::GetAllocator()
// 0x00000074 Unity.Barracuda.Tensor Unity.Barracuda.ITensorAllocator::Alloc(Unity.Barracuda.TensorShape)
// 0x00000075 Unity.Barracuda.Tensor Unity.Barracuda.ITensorAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
// 0x00000076 System.Void Unity.Barracuda.ITensorAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
// 0x00000077 System.Void Unity.Barracuda.ITensorAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
// 0x00000078 System.Void Unity.Barracuda.ITensorAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
// 0x00000079 System.Void Unity.Barracuda.ITensorAllocator::Reset(System.Boolean)
// 0x0000007A Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.BarracudaBackendsFactory::ResolveAutoType(Unity.Barracuda.WorkerFactory/Type)
extern void BarracudaBackendsFactory_ResolveAutoType_m853F03BEAACEB532E0E948AE05792559DD8CD051 (void);
// 0x0000007B Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.BarracudaBackendsFactory::GetBestTypeForDevice(Unity.Barracuda.WorkerFactory/Device)
extern void BarracudaBackendsFactory_GetBestTypeForDevice_m4AF7F38F8F6CD8868591C644741A7259CD0EF8D1 (void);
// 0x0000007C Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.BarracudaBackendsFactory::ValidateType(Unity.Barracuda.WorkerFactory/Type)
extern void BarracudaBackendsFactory_ValidateType_m997DD7A8ECA61B1F5B0A81B974EEA6E1E4EF5DC0 (void);
// 0x0000007D Unity.Barracuda.IOps Unity.Barracuda.BarracudaBackendsFactory::CreateOps(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void BarracudaBackendsFactory_CreateOps_m841C41742F539FC1EA7EE1C1482F5287BE57A5B0 (void);
// 0x0000007E Unity.Barracuda.IWorker Unity.Barracuda.BarracudaBackendsFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/WorkerConfiguration)
extern void BarracudaBackendsFactory_CreateWorker_m4D42432A7172C76EB550D2FDB3A3AF4B894A23EB (void);
// 0x0000007F Unity.Barracuda.Model Unity.Barracuda.BarracudaBackendsFactory::PatchModel(Unity.Barracuda.Model,System.String[],System.String[])
extern void BarracudaBackendsFactory_PatchModel_m23801D5CAE7C230714EB71B1537FB01ECE7D6035 (void);
// 0x00000080 Unity.Barracuda.Model Unity.Barracuda.BarracudaBackendsFactory::ValidateModel(Unity.Barracuda.Model)
extern void BarracudaBackendsFactory_ValidateModel_m484D7A6C8E60571C4B30E4FC2822F461ADFA4366 (void);
// 0x00000081 System.Void Unity.Barracuda.BarracudaBackendsFactory::.ctor()
extern void BarracudaBackendsFactory__ctor_m042DF0946A55FE26224323D016D125D9B2659CDF (void);
// 0x00000082 Unity.Jobs.JobHandle Unity.Barracuda.BurstTensorData::get_fence()
extern void BurstTensorData_get_fence_mF8CE37AA23E903D9F6FDD160E08CE5C621D196D2 (void);
// 0x00000083 System.Void Unity.Barracuda.BurstTensorData::set_fence(Unity.Jobs.JobHandle)
extern void BurstTensorData_set_fence_mC333FA6BF0AB07A387460A16144B9B2209EAF994 (void);
// 0x00000084 Unity.Jobs.JobHandle Unity.Barracuda.BurstTensorData::get_reuse()
extern void BurstTensorData_get_reuse_m29C6C502FB53EBF89F956D915A0575C7DEA841C7 (void);
// 0x00000085 System.Void Unity.Barracuda.BurstTensorData::set_reuse(Unity.Jobs.JobHandle)
extern void BurstTensorData_set_reuse_mCC278EF95B1CAA209A46C406DD4C840192C636FE (void);
// 0x00000086 System.Void Unity.Barracuda.BurstTensorData::.ctor(System.Int32)
extern void BurstTensorData__ctor_mFA11E2ABDBCA7FC771A0CE131BE54C46915DBD7E (void);
// 0x00000087 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void BurstTensorData__ctor_m6A0B72CA918C5F45CD4AFD465827D85F3294B776 (void);
// 0x00000088 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.ArrayTensorData)
extern void BurstTensorData__ctor_mCE023BDD6792EE7A32A3C2E6D2D62B4B97F5797C (void);
// 0x00000089 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.SharedArrayTensorData)
extern void BurstTensorData__ctor_mB6A0A636DA12B5B051835F503B2EF2C6822E826B (void);
// 0x0000008A System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.UnsafeArrayTensorData)
extern void BurstTensorData__ctor_m0DEF4B4264723B0B331E734D315303E85EC2390E (void);
// 0x0000008B System.Void Unity.Barracuda.BurstTensorData::Finalize()
extern void BurstTensorData_Finalize_m605BFAEC3FB71924292DE8396299FD410E6A8932 (void);
// 0x0000008C System.Void Unity.Barracuda.BurstTensorData::Dispose()
extern void BurstTensorData_Dispose_mCBA83CBEAA990E2FEAFF8D78B74340687E7BBF73 (void);
// 0x0000008D System.Void Unity.Barracuda.BurstTensorData::CompleteAllPendingOperations()
extern void BurstTensorData_CompleteAllPendingOperations_m25486BD289A772BFA4A5CABCD10EF552D56B9D9D (void);
// 0x0000008E System.Void Unity.Barracuda.BurstTensorData::Reserve(System.Int32)
extern void BurstTensorData_Reserve_mD32A7292F934F24B1F87CDE4FA56BB5F0BB607F9 (void);
// 0x0000008F System.Void Unity.Barracuda.BurstTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void BurstTensorData_Upload_m24F076C7A410D7D6B08DB2E3611FE431AF3848F8 (void);
// 0x00000090 System.Single[] Unity.Barracuda.BurstTensorData::Download(Unity.Barracuda.TensorShape)
extern void BurstTensorData_Download_mEC5D10BA992D15A7D15C544F6626650DD1804B08 (void);
// 0x00000091 System.Single[] Unity.Barracuda.BurstTensorData::SharedAccess(System.Int32&)
extern void BurstTensorData_SharedAccess_m4F2BCE7D4B1BAB4EA5B36BE81A144A35783828B9 (void);
// 0x00000092 System.Boolean Unity.Barracuda.BurstTensorData::ScheduleAsyncDownload(System.Int32)
extern void BurstTensorData_ScheduleAsyncDownload_m31F8EBE577718BCE5C041424F469FD9F194690F0 (void);
// 0x00000093 System.String Unity.Barracuda.BurstTensorData::ToString()
extern void BurstTensorData_ToString_m7B426BE0C58D59FC0C82074BB61A357340ACE2BC (void);
// 0x00000094 System.Void Unity.Barracuda.BurstCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void BurstCPUOps__ctor_m4924B7F9FBA101BB5A8F7944D8FFAC1432062C83 (void);
// 0x00000095 Unity.Barracuda.BurstTensorData Unity.Barracuda.BurstCPUOps::Pin(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Pin_m218B71CB6AF610268768B0CEFF70E30C8471AA0F (void);
// 0x00000096 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Prepare_m4C5B3F10F8B1D7BD1DEDCD958A8F569C33467F21 (void);
// 0x00000097 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps::Dependencies(Unity.Jobs.JobHandle,Unity.Jobs.JobHandle)
extern void BurstCPUOps_Dependencies_m09F6B8366A37F40502F448F7EB020DD5CFD43CD6 (void);
// 0x00000098 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps::Dependencies(Unity.Jobs.JobHandle,Unity.Jobs.JobHandle,Unity.Jobs.JobHandle)
extern void BurstCPUOps_Dependencies_m445E09FCDF33093575B64849EF100644CE275078 (void);
// 0x00000099 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps::Dependencies(Unity.Jobs.JobHandle,Unity.Jobs.JobHandle,Unity.Jobs.JobHandle,Unity.Jobs.JobHandle)
extern void BurstCPUOps_Dependencies_m686ADF5875BA7C5F86F34912A1CACE535598A2B8 (void);
// 0x0000009A Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void BurstCPUOps_MatMul_m67F0E5A3E8AF917E8807A0F251B233D25CF54A7C (void);
// 0x0000009B Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
extern void BurstCPUOps_MatMul_m5F38154DCC771C91007EE0C3622ABD03D07B41A0 (void);
// 0x0000009C Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MatMul3x2(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_MatMul3x2_m3B7B1D8DCB36FBD32A3C65AE68566FF2CC4BA6F5 (void);
// 0x0000009D Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MatMul4x4(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_MatMul4x4_m8A77CD3D9A776961E85CB482EA0043F23E5819A5 (void);
// 0x0000009E Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void BurstCPUOps_Dense_m8949ED8E2A0F83F3AE1115515441D1CDCC904B93 (void);
// 0x0000009F Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void BurstCPUOps_Conv2D_mC5E5977D24EF0848C15D93279C9A90AEC2D2A574 (void);
// 0x000000A0 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Conv2DUsingIm2ColSliced(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void BurstCPUOps_Conv2DUsingIm2ColSliced_m5E11706B1F0C997C705257A4DBD78AF198D717EC (void);
// 0x000000A1 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void BurstCPUOps_MaxPool2D_m3BC0FA07898D324F94824C7C582899E89A973E8B (void);
// 0x000000A2 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void BurstCPUOps_AvgPool2D_m5519B20C3364424254BD9E8FFFFBF721E096D2B9 (void);
// 0x000000A3 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void BurstCPUOps_GlobalMaxPool2D_m2B163496D04849117C0F09569D4632AE71D446C0 (void);
// 0x000000A4 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void BurstCPUOps_GlobalAvgPool2D_m271FFAA72F38CCB4066743D597C0EF6AB67B84D4 (void);
// 0x000000A5 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void BurstCPUOps_DepthwiseConv2D_m2B2BADA4B5354D79BCF8D582B3BF48651EA79C6D (void);
// 0x000000A6 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_ScaleBias_mEFD2D3216A1000CA9FF90C2081871B01FB598AF9 (void);
// 0x000000A7 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Relu(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Relu_mDB9E72264DBB4ED1EE50A7E191A5AFAB549DBB6B (void);
// 0x000000A8 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Relu6_m22157E3A700A80E93C41D9136A6AD42DE5D87542 (void);
// 0x000000A9 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_LeakyRelu_m9AB16A1325AE523E3FF67D1DD1D720A6B4C65336 (void);
// 0x000000AA Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Tanh_m3F0CB24B4BDA833D6028E7A10C1B0AF9F717EEC6 (void);
// 0x000000AB Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Softplus(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Softplus_m9470D55495D54A20881DCED03C15339795862D24 (void);
// 0x000000AC Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sigmoid_mCD08F89930DBEB1867237D20466D5532C4AACD04 (void);
// 0x000000AD Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_Elu_mE8E18F1B1903AD88B0BA43380C3AAD563874218B (void);
// 0x000000AE Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void BurstCPUOps_Selu_m7B5E268A979EC3C469A5CD933B5665ECDB969CBE (void);
// 0x000000AF Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Swish(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Swish_m63CF7698380BF41E93CAA2C565470B5290D9336E (void);
// 0x000000B0 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_PRelu_m5D087F97CFE0C4BBDC16D2C57F035007BFB8D43C (void);
// 0x000000B1 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void BurstCPUOps_Softmax_m9BD2465F2A9790D7EF5049E6682F4225A5FD106C (void);
// 0x000000B2 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void BurstCPUOps_LogSoftmax_m92D60202EE990A32FB05591D493975DD711DB823 (void);
// 0x000000B3 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Abs(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Abs_mB8614F655943112C0EAF707CD421872D1D388B02 (void);
// 0x000000B4 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Neg(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Neg_mA07EB4C372BF9A1D3D5D8DE127532E688DFFA7D0 (void);
// 0x000000B5 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Ceil(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Ceil_m1A84286D9D26E9369834BD543C65542601CBBA1B (void);
// 0x000000B6 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void BurstCPUOps_Clip_m1C72B11A7FA3B803ECDDB5ADAB3A54F1DCE45DD5 (void);
// 0x000000B7 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Floor(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Floor_mD2B4E34AB8D3F18F9663B66C8A9CA0652701BD09 (void);
// 0x000000B8 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Reciprocal(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Reciprocal_m023A09BFE7170F42D6DEC336D174D694F0F7FA24 (void);
// 0x000000B9 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_Pow_mF6839291857CA3DC43D88D833441C31552A82C6A (void);
// 0x000000BA Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Exp(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Exp_mE4AB2B77D6C06EDEFDE7A5999026AA65BD9EFC14 (void);
// 0x000000BB Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Log(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Log_m2EB7D6961D086F12F5F9E907999DC0F2EE88B034 (void);
// 0x000000BC Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sqrt_m2265ACD8FE967112A866449F9E1F30821EE35294 (void);
// 0x000000BD Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Acos(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Acos_mBD03A76B8E0DA9363CC33DB965A3333F272ADCEB (void);
// 0x000000BE Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Acosh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Acosh_mA219F8B2DCAE728A8B548D3ECC21FB77660DCCA7 (void);
// 0x000000BF Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Asin(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Asin_m554E057AF309B297CF93A6929B859009AE090312 (void);
// 0x000000C0 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Asinh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Asinh_m53CA3138F1F8FA0117E351ACFECA6D03308DC6C9 (void);
// 0x000000C1 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Atan(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Atan_m3449C808EF8171B8A692010EFEB591AF01691E68 (void);
// 0x000000C2 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Atanh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Atanh_mF7670F6B8A57E820DE3DB51CC67622A46C2AB038 (void);
// 0x000000C3 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Cos(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Cos_mF6A20D73B2071B70E82207ECD5F8AF8586D5EDD2 (void);
// 0x000000C4 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Cosh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Cosh_m1334425B1966BE7FED1148622353E2F54A38F450 (void);
// 0x000000C5 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sin(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sin_m89C55BA0BEA1A407B8817C4A28D1BAFBD10FB3E5 (void);
// 0x000000C6 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sinh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sinh_m702EDAA95A5EFDA4938D3ADC3D22902E9836AB4F (void);
// 0x000000C7 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Tan(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Tan_m32340F896A0C8E2D407791715C32579022C5E257 (void);
// 0x000000C8 System.Void Unity.Barracuda.BurstCPUOps::AssignTensorStrides8D(Unity.Barracuda.Tensor,System.Int32*)
extern void BurstCPUOps_AssignTensorStrides8D_m03CF677E61324F37C342EA42DB6F12DF6A7FFBF3 (void);
// 0x000000C9 System.Void Unity.Barracuda.BurstCPUOps::AssignTensorStrides4D(Unity.Barracuda.Tensor,System.Int32*)
extern void BurstCPUOps_AssignTensorStrides4D_m045EF7EDBD926DA46254F2EAF343F5B3B1FD49F2 (void);
// 0x000000CA Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::GenericBroadcast(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void BurstCPUOps_GenericBroadcast_mA8F92CDEB11A5A6836D334E2100EBAEADAE28F4B (void);
// 0x000000CB System.Void Unity.Barracuda.BurstCPUOps::BroadcastAdd(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_BroadcastAdd_m2B17E8977FD5EC2D8800A4C574306621386AB2BE (void);
// 0x000000CC System.Void Unity.Barracuda.BurstCPUOps::BroadcastSub(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastSub_mF670B271E383F313E0AFFCE13B3AC916C174B812 (void);
// 0x000000CD System.Void Unity.Barracuda.BurstCPUOps::BroadcastMul(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMul_mAF3968F7CEE77BF61425556E4512E92A67273B23 (void);
// 0x000000CE System.Void Unity.Barracuda.BurstCPUOps::BroadcastDiv(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastDiv_m1F681836AEA8884C38CBA4439F05672AF8322080 (void);
// 0x000000CF System.Void Unity.Barracuda.BurstCPUOps::BroadcastPow(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastPow_m58A5810C83320960B6409D886BABE483BA9B3F63 (void);
// 0x000000D0 System.Void Unity.Barracuda.BurstCPUOps::BroadcastMin(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMin_mC06F4F6E349FDB5AEB263BA7B1E25C84BC6D8275 (void);
// 0x000000D1 System.Void Unity.Barracuda.BurstCPUOps::BroadcastMax(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMax_mF93ABA47807397D25EF12690F2A3B8EDA24103FF (void);
// 0x000000D2 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Add(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Add_mC03F1C56C4757740695CC12B0D7654317CE6655C (void);
// 0x000000D3 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Sub_m74EFE5153BD10EE942C02D1AACFC331D14B6BD98 (void);
// 0x000000D4 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Mul_m3A116CC2DC57A3343A704A360164736430CA8C28 (void);
// 0x000000D5 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Div(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Div_mB827375AA2C05CB0282E51B9BDCB6D4B20BE9D09 (void);
// 0x000000D6 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Pow(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Pow_m00C21C3F93CB6A83A3091F6581C9C99008F9AC77 (void);
// 0x000000D7 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Min(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Min_m8FDFB8C19D7653C9B337B5332200BD6EBC5A62AA (void);
// 0x000000D8 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Max(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Max_m702BF1E38A83F7A4005FC6FDD8581D6083A197E4 (void);
// 0x000000D9 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void BurstCPUOps_CopyAndReshape_m9193C598EA2E29FFD067392EAC3C69C35907FCA5 (void);
// 0x000000DA Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void BurstCPUOps_Concat_mA9CDFE44061E1F4E44156E04831FBDD1D4FDEB5B (void);
// 0x000000DB Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void BurstCPUOps_StridedSlice_mD5B2424A12C4C74D2C4B45E0834F2530B3C179C8 (void);
// 0x000000DC Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::ApplyBorderPadding(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void BurstCPUOps_ApplyBorderPadding_mED368EE086CE201A1AD2557CB9FE9D18E986FD12 (void);
// 0x000000DD Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void BurstCPUOps_Border2D_m7D26EACD34E1C6D05D9E91500F64D0671D674B81 (void);
// 0x000000DE Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void BurstCPUOps_Transpose_m3D90C856A7C0CB974C113AE5418710DCA8A89F59 (void);
// 0x000000DF Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void BurstCPUOps_ReduceMean_m934DE4F6A81ECF395ACE82DD574E49C611EA0515 (void);
// 0x000000E0 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void BurstCPUOps_ReduceSum_m8E353C991E391CDD369771C5BA8C515D82F4EE08 (void);
// 0x000000E1 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Dense(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32)
extern void ComputeKernelLibrary_Dense_mCA5E29A0F61973679BFBED3DD95AFBA093CBF7AA (void);
// 0x000000E2 System.Boolean Unity.Barracuda.ComputeKernelLibrary::IsT8x8_R8x8KernelValid(Unity.Barracuda.ComputeKernelLibrary/ChannelMode,Unity.Barracuda.ComputeKernelLibrary/KernelMode,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_IsT8x8_R8x8KernelValid_m80F0DB65A0626FCACF1BC9F11B0B127BD06E37C5 (void);
// 0x000000E3 System.Boolean Unity.Barracuda.ComputeKernelLibrary::IsT2x32_R8x8KernelValid(Unity.Barracuda.ComputeKernelLibrary/ChannelMode,Unity.Barracuda.ComputeKernelLibrary/KernelMode,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_IsT2x32_R8x8KernelValid_mB7CE8FA5B1C93AEB333FA35CC36D5D744D15023A (void);
// 0x000000E4 System.Boolean Unity.Barracuda.ComputeKernelLibrary::IsWinograd16x16_R4x4KernelValid(Unity.Barracuda.ComputeKernelLibrary/ChannelMode,Unity.Barracuda.ComputeKernelLibrary/KernelMode,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_IsWinograd16x16_R4x4KernelValid_m363F734E59B922325656FB70F6EB2B37B5D06B3D (void);
// 0x000000E5 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Conv3D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void ComputeKernelLibrary_Conv3D_m5E73FE52FE3AA5640173971A7FA4881B0620E00F (void);
// 0x000000E6 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Conv2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void ComputeKernelLibrary_Conv2D_mE2F8F01BCE96FCF5EC430168983290FB38434EFE (void);
// 0x000000E7 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::DepthwiseConv2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_DepthwiseConv2D_mD70063750728550EB0528D6D30AEE085F3E6B428 (void);
// 0x000000E8 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Conv2DTrans(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Conv2DTrans_mCE6D62B805DD74AA8EC0E435AAB9E59CCC448757 (void);
// 0x000000E9 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Activation(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Activation_m6979A538FEA651BBC376509E8EB79400C87E6EDD (void);
// 0x000000EA System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::PRelu(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_PRelu_m7819DAC91E37C49BC3DFDFAF75D53252B6C80222 (void);
// 0x000000EB System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Softmax(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Softmax_m39DB6376ABF43654A94BDCDD6D23647FAE5B302F (void);
// 0x000000EC System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::LogSoftmax(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_LogSoftmax_m7C680FE598559CF1D743B8D9F9CB966ECD60F149 (void);
// 0x000000ED System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::ScaleBias(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_ScaleBias_m49EA4054451B8B9C38F3EB236B9A16C81573F357 (void);
// 0x000000EE System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Upsample2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Boolean)
extern void ComputeKernelLibrary_Upsample2D_m4C8ABDEFF35E740EFB80B7C8BF7A06E0C666BF9A (void);
// 0x000000EF System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Pool2DReduce(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Pool2DReduce_m3890255F63E2C9218D3E45CF5963F7A826A8B0C2 (void);
// 0x000000F0 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Pool2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Pool2D_m7DE1C3E769B4F1A1F621AE6F6E870F02157FA1F8 (void);
// 0x000000F1 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::PoolAvgVar2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_PoolAvgVar2D_mA460BCE8D893652D12BDCE5279E43DA9283B9B2D (void);
// 0x000000F2 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::GlobalPool2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_GlobalPool2D_m55DE035F7399BB8A9DB106BD883D3B6771A4779D (void);
// 0x000000F3 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::NormalizationTail(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_NormalizationTail_m45AAE71BE8E0216505C2B11BB490546CACF632B0 (void);
// 0x000000F4 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Copy(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Copy_mC302CF668D27D96B3BF58886A885D5D347451C8D (void);
// 0x000000F5 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::TransposeToChannelFirst(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_TransposeToChannelFirst_mDC686F3FD22F5AC486A94C9E7AD875E3F2DA3DED (void);
// 0x000000F6 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::ReshapeFromNHWCModel(Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_ReshapeFromNHWCModel_m389094A5FD4043313840C5DD5EC56D2BB5D3D860 (void);
// 0x000000F7 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Padding(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Padding_m09A47175525A23F4391951DC851B1F9BD2844329 (void);
// 0x000000F8 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry> Unity.Barracuda.ComputeKernelLibrary::Broadcast(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Broadcast_m0A4F02A11A4466C19F98072FD3B6A6A7E8349BDB (void);
// 0x000000F9 System.ValueTuple`3<System.Int32,System.Int32,System.Int32> Unity.Barracuda.ComputeKernelLibrary::Int3(System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_Int3_m7084C1976E135B1E1B11157ABDBB8350A5CD56F9 (void);
// 0x000000FA System.Single Unity.Barracuda.ComputeKernelLibrary::BigO(System.Int32)
extern void ComputeKernelLibrary_BigO_m557521263905BE812DF88BCA8DCD7C369B741708 (void);
// 0x000000FB Unity.Barracuda.ComputeKernelLibrary/StrictDimensions Unity.Barracuda.ComputeKernelLibrary::StrictAnd(System.Boolean)
extern void ComputeKernelLibrary_StrictAnd_m25F6419487B760E39F9F0F7188C38BC592C73475 (void);
// 0x000000FC Unity.Barracuda.ComputeKernelLibrary/StrictDimensions Unity.Barracuda.ComputeKernelLibrary::Strict()
extern void ComputeKernelLibrary_Strict_mA419AD15F9D40483B0E06A6757786467294C1C00 (void);
// 0x000000FD System.Void Unity.Barracuda.ComputeKernelLibrary::.ctor()
extern void ComputeKernelLibrary__ctor_mA0CB65377911FD7660AB7371436E26023A5EFAEF (void);
// 0x000000FE System.Void Unity.Barracuda.ComputeKernelLibrary::.cctor()
extern void ComputeKernelLibrary__cctor_m0A13FBCFB88BD6EB2E72839A441F07CF131F5593 (void);
// 0x000000FF UnityEngine.ComputeShader Unity.Barracuda.ComputeKernel::get_shader()
extern void ComputeKernel_get_shader_m858E808F13E3BB4CA58B22D59903E79F6990BDBA (void);
// 0x00000100 System.Void Unity.Barracuda.ComputeKernel::.ctor(Unity.Barracuda.ComputeFunc,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>)
extern void ComputeKernel__ctor_m8F4CF6B7E53BD72E61C571737C878E940F12AB8A (void);
// 0x00000101 System.Void Unity.Barracuda.ComputeKernel::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeKernel_SetTensor_m017C6FAE3AF781EA621D0B7F42C03C70D479ED82 (void);
// 0x00000102 System.Void Unity.Barracuda.ComputeKernel::SetTensor(Unity.Barracuda.ComputeFunc/TensorDecl,System.Int32,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeKernel_SetTensor_m04E53D63119C9B0B1536C7BE274301066D521BD5 (void);
// 0x00000103 System.Void Unity.Barracuda.ComputeKernel::SetTensorDecl(System.String,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeKernel_SetTensorDecl_mF6580DF0B65DCA1DEBDA3DF94903DDC1E0DA2471 (void);
// 0x00000104 System.Void Unity.Barracuda.ComputeKernel::SetTensorDecl(Unity.Barracuda.ComputeFunc/TensorDecl,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeKernel_SetTensorDecl_m85FD625BA73062D6A451C5B8B10B79B7C108104E (void);
// 0x00000105 System.Void Unity.Barracuda.ComputeKernel::SetTensorBuffer(System.String,UnityEngine.ComputeBuffer)
extern void ComputeKernel_SetTensorBuffer_m4F693999943C4E616C3265019ED84538D6337052 (void);
// 0x00000106 System.Void Unity.Barracuda.ComputeKernel::SetTensorBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern void ComputeKernel_SetTensorBuffer_m64AC02FA48C4AB628F323AC16CE0217C33B128B0 (void);
// 0x00000107 System.Void Unity.Barracuda.ComputeKernel::Dispatch()
extern void ComputeKernel_Dispatch_m0BD65DEC5A63D57F1C8A7F75F2175B3183905B50 (void);
// 0x00000108 System.Int64 Unity.Barracuda.ComputeKernel::CalculateEntryScore(Unity.Barracuda.ComputeShaderContext,Unity.Barracuda.ComputeKernelLibrary/Entry,System.Boolean)
extern void ComputeKernel_CalculateEntryScore_m1031D71A6A46C72AA2883ED4D807C1627CA4519C (void);
// 0x00000109 Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeKernel::BestKernel(Unity.Barracuda.ComputeShaderContext,System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry>,System.Boolean)
extern void ComputeKernel_BestKernel_mC37CA1F5854D196B2774103AE5BCE3FBDCB6A5D7 (void);
// 0x0000010A System.Void Unity.Barracuda.ComputeOps::.ctor(Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void ComputeOps__ctor_mD3B5129B8DF8801057940581E5017FA004A179A2 (void);
// 0x0000010B Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeOps::BestKernel(System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary/Entry>)
extern void ComputeOps_BestKernel_m67A5DA66F67CE5EACA801AE7AD4AE0229A2D048C (void);
// 0x0000010C Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeOps::CompileKernel(Unity.Barracuda.ComputeKernelLibrary/Entry)
extern void ComputeOps_CompileKernel_mFC4EA78CB0E4894E44BB73039B7FA80F5536EF51 (void);
// 0x0000010D Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ComputeOps_MatMul_m08A5DF0F5B3A3CADFDB9C5DE71E190C232357929 (void);
// 0x0000010E Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_Dense_m33FC6E2D7DE5912C19B3CE037B4364F8AC77C309 (void);
// 0x0000010F Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2DWinograd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation,Unity.Barracuda.ComputeKernel)
extern void ComputeOps_Conv2DWinograd_m9301AFA0E89D05309573D2D6F2C8C7DAB52AD90A (void);
// 0x00000110 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv3D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_Conv3D_mA73E196CF586E536F0A9C688C7D8E9602151B95D (void);
// 0x00000111 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_Conv2D_mB02068849D8961888EFF455405C6923B80B454AA (void);
// 0x00000112 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_DepthwiseConv2D_m31829E1FF2710DA59C20D9C25807152E98B2F199 (void);
// 0x00000113 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_Conv2DTrans_mDBD43CA639EAE8155C5964AAF627D0763BFD1E48 (void);
// 0x00000114 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ComputeOps_Upsample2D_m1D22FC11155F55F32DA3FCF5EE3679D8FCAD1406 (void);
// 0x00000115 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ComputeOps_Pool2D_m4AA1B4E184264D8A5F7A68EC3B3EEDD6BBD9FC6B (void);
// 0x00000116 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalMaxPool2D_m36E4E09E18092AB410FECEF32B89BCA690A0C2C3 (void);
// 0x00000117 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalAvgPool2D_m8F724E89097ECE71DAA738DAA62C14E3572D0978 (void);
// 0x00000118 System.Tuple`2<Unity.Barracuda.Tensor,Unity.Barracuda.Tensor> Unity.Barracuda.ComputeOps::GlobalAvgVariancePool2DReduce(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Boolean)
extern void ComputeOps_GlobalAvgVariancePool2DReduce_mC840BA7073FD87A8C1C9955D5C04651DC5538698 (void);
// 0x00000119 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalAvgVariancePool2D_m33513D697F003064C0FB92C093F0508A3606FF3C (void);
// 0x0000011A Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalPool2DReduce(System.String,Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalPool2DReduce_m4DF65D308E059AB8A9DAB1D2B3B036648497955F (void);
// 0x0000011B Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalPool2D(System.String,System.String,Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalPool2D_m0A5ECD250EABA897DD7C4108071F41CC8148D4AE (void);
// 0x0000011C Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ComputeOps_ScaleBias_m94720789339CE0B37207888093972C656AF6FCCE (void);
// 0x0000011D Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void ComputeOps_Normalization_m1FEEB6300BC87488B63F400A63BEBA9740CA6DBD (void);
// 0x0000011E Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Reduce(System.String,Unity.Barracuda.Tensor,System.Int32)
extern void ComputeOps_Reduce_m6BC644DBD6AD5919BA6C881CCAC749904DA73348 (void);
// 0x0000011F Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ComputeOps_Activation_m33F1332AA80046C65D5C261673F9B8943AC21DF4 (void);
// 0x00000120 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ComputeOps_PRelu_m35E6FF32DCF3DAE3EE988C2813B783B5E1D0D5E0 (void);
// 0x00000121 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void ComputeOps_Softmax_m31810B48A7E4552C452F066CE1F73125F8910BCA (void);
// 0x00000122 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ComputeOps_LogSoftmax_m6F87E30213969A1FB8B978F5857649B53DC63476 (void);
// 0x00000123 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::TransposeToChannelFirst(Unity.Barracuda.Tensor)
extern void ComputeOps_TransposeToChannelFirst_m60DFF947684FC35174EC8ED25387C203647893EC (void);
// 0x00000124 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ComputeOps_Concat_m7C7E13A9F87FDA055D1A88F5C36D602013B8FA76 (void);
// 0x00000125 System.Int32[] Unity.Barracuda.ComputeOps::GetInputTensorStridesOnDevice(Unity.Barracuda.TensorShape,Unity.Barracuda.ComputeInfo/ChannelsOrder,System.Int32[])
extern void ComputeOps_GetInputTensorStridesOnDevice_mB7DAB69CBFC20C6E5E992B9FD649C96032E7D293 (void);
// 0x00000126 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void ComputeOps_ElementwiseWithBroadcast_m27871E192EBE7FABF902F1B2E6E242F3AC1DF035 (void);
// 0x00000127 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.String,System.Single)
extern void ComputeOps_ApplyPadding_m82033A5CD06083E2535AA0E9BB7FAAB92710180F (void);
// 0x00000128 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ComputeOps_LogicalNot_mDD1A1F24AD0CF4F2F9221790D57CE585859DEDCA (void);
// 0x00000129 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ComputeOps_Where_m86999B060BA89E00D4E76C0FA048FCEF5180059C (void);
// 0x0000012A Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::CopyAndReshape_NCHW(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ComputeOps_CopyAndReshape_NCHW_mA71D5D768C99168B8CB8F41066ED25AEDB3FDA69 (void);
// 0x0000012B Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ComputeOps_CopyAndReshape_mB917C3718373F5C52EF7CBC6C8EAB92BEC455856 (void);
// 0x0000012C System.Void Unity.Barracuda.ComputeOps::.cctor()
extern void ComputeOps__cctor_mD8169DE21D30B32D866A00BF94E956DB14459882 (void);
// 0x0000012D System.Void Unity.Barracuda.ComputeVarsWithSharedModel::Dispose()
extern void ComputeVarsWithSharedModel_Dispose_m7F830ECA8A8D0BA7986E30BE0503A3099A3F6F74 (void);
// 0x0000012E Unity.Barracuda.Tensor[] Unity.Barracuda.ComputeVarsWithSharedModel::PrepareLayerInputTensors(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.IOps)
extern void ComputeVarsWithSharedModel_PrepareLayerInputTensors_mA52404C3EA6FB19A720549FD211B631BD8D04023 (void);
// 0x0000012F UnityEngine.ComputeBuffer Unity.Barracuda.ComputeVarsWithSharedModel::CreateComputeBufferForModelTensors(Unity.Barracuda.Layer,System.Int64&)
extern void ComputeVarsWithSharedModel_CreateComputeBufferForModelTensors_mF3B2A99F92622B14CEF2F1B4DD62707E40CD00F5 (void);
// 0x00000130 System.Void Unity.Barracuda.ComputeVarsWithSharedModel::.ctor()
extern void ComputeVarsWithSharedModel__ctor_m42A1193647C503583686C028FC4D6DE4058C9BF5 (void);
// 0x00000131 System.Void Unity.Barracuda.ComputeDebugUtils::.cctor()
extern void ComputeDebugUtils__cctor_m2F7454AEDEC9399D29033B8280760AD09E094E55 (void);
// 0x00000132 System.Void Unity.Barracuda.ComputeDebugUtils::LogAssertion(Unity.Barracuda.ComputeDebugUtils/KernelAssertInfo,System.String)
extern void ComputeDebugUtils_LogAssertion_m77CAAB76B26B0EED2B52E12BA20EF612D8089931 (void);
// 0x00000133 System.Void Unity.Barracuda.ComputeDebugUtils::PrepareDispatch()
extern void ComputeDebugUtils_PrepareDispatch_m1174A1B9B3A6196280B0094BC483B80C689CB781 (void);
// 0x00000134 System.Void Unity.Barracuda.ComputeDebugUtils::VerifyDispatch(System.String)
extern void ComputeDebugUtils_VerifyDispatch_mE992E8047597A85175FB99E5B56868562C433419 (void);
// 0x00000135 System.Void Unity.Barracuda.ComputeDebugUtils::.ctor()
extern void ComputeDebugUtils__ctor_m6E47467223277B3CE0E9472AA28986DED468088B (void);
// 0x00000136 System.Void Unity.Barracuda.PrecompiledComputeOps::.ctor(Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void PrecompiledComputeOps__ctor_m3129D9E030B288314FCEFFAAFF126F07A112506F (void);
// 0x00000137 UnityEngine.ComputeBuffer Unity.Barracuda.PrecompiledComputeOps::NewComputeBuffer(System.String,System.Int32,System.Int32)
extern void PrecompiledComputeOps_NewComputeBuffer_mB8D77DC0D0DAA7B4BF10CF565F31CC32EB92446D (void);
// 0x00000138 System.Void Unity.Barracuda.PrecompiledComputeOps::ResetAllocator(System.Boolean)
extern void PrecompiledComputeOps_ResetAllocator_mD4E3E3262659CF894AF2B3B7C122C81C7A58F712 (void);
// 0x00000139 System.Int32 Unity.Barracuda.PrecompiledComputeOps::CalcModelWithInputsHashCode(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void PrecompiledComputeOps_CalcModelWithInputsHashCode_mC10BF895D492F6F1A7B20161307489BEC49497E5 (void);
// 0x0000013A Unity.Barracuda.Tensor[] Unity.Barracuda.PrecompiledComputeOps::PrepareConv2dWinograd(Unity.Barracuda.Model,Unity.Barracuda.Layer)
extern void PrecompiledComputeOps_PrepareConv2dWinograd_mDC29CA7402EB1C098142350B4A165E206D5D663D (void);
// 0x0000013B Unity.Barracuda.Tensor[] Unity.Barracuda.PrecompiledComputeOps::PrepareConv2DTrans(Unity.Barracuda.Model,Unity.Barracuda.Layer)
extern void PrecompiledComputeOps_PrepareConv2DTrans_m205FCF130F1451227F2F00868CA933F8314DF6F0 (void);
// 0x0000013C System.Void Unity.Barracuda.PrecompiledComputeOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void PrecompiledComputeOps_PrepareModel_m6B798EC760BF45CD4DF31DEA593A58D76C6917BC (void);
// 0x0000013D System.Void Unity.Barracuda.PrecompiledComputeOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void PrecompiledComputeOps_PreExecuteLayer_m4ACC5B9D08074C0AAD4D00FA5F7F6852006894B8 (void);
// 0x0000013E Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ApplyUnsupportedFusedActivationIfNeeded(Unity.Barracuda.Layer/FusedActivation,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_ApplyUnsupportedFusedActivationIfNeeded_m3D12EAA28128E08CA1B4C9472DA6FE4B0AB5329D (void);
// 0x0000013F Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_Dense_mB4C86DFF507C1E24AB4A5CD989A507A67E0F3041 (void);
// 0x00000140 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_Conv2D_m5D76BA7FF0E50C7C656F8839F1D407EB4A1158C2 (void);
// 0x00000141 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_DepthwiseConv2D_m5217E4F59B33DFCE9E20A21901F3E73AB4CE86D3 (void);
// 0x00000142 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_Conv2DTrans_m9F1DD17BCB0A9B44368DC3B47230567D7E456A0A (void);
// 0x00000143 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void PrecompiledComputeOps_Upsample2D_mCC7EBA0237B6B2F3816DED066A1FF6579C530A3C (void);
// 0x00000144 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void PrecompiledComputeOps_Pool2D_m9D10598C8ED336AC189A32108D111015015CF3BD (void);
// 0x00000145 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_ScaleBias_m41835929303D4769735EA8C5861A965DE78BE559 (void);
// 0x00000146 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalPool2D_mBF8A0273EF371CA113199399CC599B23C4D03759 (void);
// 0x00000147 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalMaxPool2D_mBE97A3FB5471272BC316CBE453CF73F231C84F72 (void);
// 0x00000148 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalAvgPool2D_mB3DE26E7894B41232D52E55686116CB608838442 (void);
// 0x00000149 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void PrecompiledComputeOps_Normalization_m152E2F48812AF511D362DEBD5D0BFF329950F484 (void);
// 0x0000014A Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void PrecompiledComputeOps_Activation_mD95F0436DE7C0D2D4D98D1D63B97043642243B91 (void);
// 0x0000014B Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_PRelu_mCAA06185B56288E15E35438310042C8B3D9F9AB0 (void);
// 0x0000014C Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void PrecompiledComputeOps_Softmax_m836F9EB5AB3D55317FD2E9A85EE245FFFB27A1F3 (void);
// 0x0000014D Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_LogSoftmax_m280C76B07E83201CE6FBA494710786B50E9BB1B4 (void);
// 0x0000014E Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void PrecompiledComputeOps_ElementwiseWithBroadcast_mBDCA8009E02E21C7C380BA1EB1543044AD65E4BF (void);
// 0x0000014F Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void PrecompiledComputeOps_Concat_m2510981F2D1B035D9E815FEB1760DE4B383076BC (void);
// 0x00000150 System.Void Unity.Barracuda.PrecompiledComputeOps::.cctor()
extern void PrecompiledComputeOps__cctor_mA4A42FF7E8A8BE6AD62B7843B8C95A189D3FD5B2 (void);
// 0x00000151 System.Single[] Unity.Barracuda.ArrayTensorData::get_array()
extern void ArrayTensorData_get_array_mB6108E940CA5D89C01FF79905B543B5FBF4566D8 (void);
// 0x00000152 System.Void Unity.Barracuda.ArrayTensorData::.ctor(System.Int32)
extern void ArrayTensorData__ctor_m53A608AC16434A9068C96C092339F665049DE483 (void);
// 0x00000153 System.Void Unity.Barracuda.ArrayTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void ArrayTensorData__ctor_mC512495E0476B052DAC482C1D30BF257E21B55F5 (void);
// 0x00000154 System.Void Unity.Barracuda.ArrayTensorData::Finalize()
extern void ArrayTensorData_Finalize_mBD0EE8075ECE328DC54ABC90292256A56F95910F (void);
// 0x00000155 System.Void Unity.Barracuda.ArrayTensorData::Dispose()
extern void ArrayTensorData_Dispose_m227E6A130724D7A9937A4172EB1299BA632B4265 (void);
// 0x00000156 System.Void Unity.Barracuda.ArrayTensorData::Reserve(System.Int32)
extern void ArrayTensorData_Reserve_m2D5D7578D29CEA147F6DCC404216409D7C02F25A (void);
// 0x00000157 System.Void Unity.Barracuda.ArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void ArrayTensorData_Upload_mAEDB483954354F5C6B3C845F7ECA9DE6ADF049FE (void);
// 0x00000158 System.Boolean Unity.Barracuda.ArrayTensorData::ScheduleAsyncDownload(System.Int32)
extern void ArrayTensorData_ScheduleAsyncDownload_m879B4A3AD2E81FE485C243BB7606C4E4D2915E69 (void);
// 0x00000159 System.Single[] Unity.Barracuda.ArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void ArrayTensorData_Download_mED75950F12BB50CD323CE420A4F0AEE57E0980AD (void);
// 0x0000015A System.Single[] Unity.Barracuda.ArrayTensorData::SharedAccess(System.Int32&)
extern void ArrayTensorData_SharedAccess_m7F5F71AE1528AF0E6BDEBCD42EC7EEC426A11DC1 (void);
// 0x0000015B System.Int32 Unity.Barracuda.ArrayTensorData::get_maxCapacity()
extern void ArrayTensorData_get_maxCapacity_m364A15CCB379243CB1FECECB4D074150BFA269F8 (void);
// 0x0000015C System.String Unity.Barracuda.ArrayTensorData::ToString()
extern void ArrayTensorData_ToString_m61A20386B632EEA8A2FD35308B4AE3276C1B371C (void);
// 0x0000015D System.Single[] Unity.Barracuda.SharedArrayTensorData::get_array()
extern void SharedArrayTensorData_get_array_m80E46AE6E6BE17297D57DCC467F73B986CF27ED1 (void);
// 0x0000015E System.Int32 Unity.Barracuda.SharedArrayTensorData::get_offset()
extern void SharedArrayTensorData_get_offset_m6CFBEC01EA4CD96C370C783815FCBD844B56B94C (void);
// 0x0000015F System.Int32 Unity.Barracuda.SharedArrayTensorData::get_count()
extern void SharedArrayTensorData_get_count_m0D96ECE699C74C929142C7546AC488379785D838 (void);
// 0x00000160 System.Void Unity.Barracuda.SharedArrayTensorData::.ctor(System.Single[],System.Int32,System.Int32)
extern void SharedArrayTensorData__ctor_m97627918D633A73270A1B2DD2C74FB8816C753DD (void);
// 0x00000161 System.Void Unity.Barracuda.SharedArrayTensorData::Finalize()
extern void SharedArrayTensorData_Finalize_mA788A85A1AC979AEF208AE004235814C875648B1 (void);
// 0x00000162 System.Void Unity.Barracuda.SharedArrayTensorData::Dispose()
extern void SharedArrayTensorData_Dispose_m2148FDA695889F7B256D83FE77746554D9CB4A77 (void);
// 0x00000163 System.Void Unity.Barracuda.SharedArrayTensorData::Reserve(System.Int32)
extern void SharedArrayTensorData_Reserve_m0CC438EE61BE44DD1571E51887F1A96F21B293D3 (void);
// 0x00000164 System.Void Unity.Barracuda.SharedArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void SharedArrayTensorData_Upload_m39C1C239E761D3D6520170BAC68E935FB9114439 (void);
// 0x00000165 System.Boolean Unity.Barracuda.SharedArrayTensorData::ScheduleAsyncDownload(System.Int32)
extern void SharedArrayTensorData_ScheduleAsyncDownload_mEF61B1302D1F34D448BC9E665C8F4A5FC94022B1 (void);
// 0x00000166 System.Single[] Unity.Barracuda.SharedArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void SharedArrayTensorData_Download_m6D3671BCC28C4CDAA8BE3E7596A46790372799ED (void);
// 0x00000167 System.Single[] Unity.Barracuda.SharedArrayTensorData::SharedAccess(System.Int32&)
extern void SharedArrayTensorData_SharedAccess_m8E29C08FB58FC469DEEF6A82C95B0F9ED2122002 (void);
// 0x00000168 System.Int32 Unity.Barracuda.SharedArrayTensorData::get_maxCapacity()
extern void SharedArrayTensorData_get_maxCapacity_mFB38FE9DC0179A48B713C60942DFFD4D11208379 (void);
// 0x00000169 System.String Unity.Barracuda.SharedArrayTensorData::ToString()
extern void SharedArrayTensorData_ToString_mCA602A3D857D95209B0CEE65F75BBB0946DF650E (void);
// 0x0000016A System.Void Unity.Barracuda.ReferenceCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void ReferenceCPUOps__ctor_mE377AA615F7788C476AC4427834B0CE1F389E0A0 (void);
// 0x0000016B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(Unity.Barracuda.TensorShape,System.String)
extern void ReferenceCPUOps_NewTensor_m2860FF33913FF4DB5A7A3819EE7B49212C18DE15 (void);
// 0x0000016C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensorLike(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_NewTensorLike_m24A1300AAF4C4ADA155A437EBC0D3EE68B2A0E89 (void);
// 0x0000016D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensorLike(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_NewTensorLike_m152E41744307AA4D941BE7A8110CA0A34EB2167B (void);
// 0x0000016E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(System.Int32,System.Int32,System.String)
extern void ReferenceCPUOps_NewTensor_mC23EB4D2750FE2A426C4E8D48569EB584629F58B (void);
// 0x0000016F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(System.Int32,System.Int32,System.Int32,System.Int32,System.String)
extern void ReferenceCPUOps_NewTensor_mC1D7E0CC8EF49F3F93B16294089392EA410956D1 (void);
// 0x00000170 System.Void Unity.Barracuda.ReferenceCPUOps::ResetAllocator(System.Boolean)
extern void ReferenceCPUOps_ResetAllocator_m7E4E615D6D9F36971794885FA439CAB733C1442F (void);
// 0x00000171 System.Single Unity.Barracuda.ReferenceCPUOps::ApplyFusedActivation(System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_ApplyFusedActivation_mE86F81E62A98133E30982C792C7389DCA34F554D (void);
// 0x00000172 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_MatMul_mA98972A6C596D383E0DA855D39F170AAF8205FE6 (void);
// 0x00000173 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ReferenceCPUOps_MatMul_m49A618ECCED3199A6D6D8FE3A3D23E20402E3A6A (void);
// 0x00000174 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_Dense_m8C00891EB2B066F7E0F1FD79D7402CE2C9AE36D8 (void);
// 0x00000175 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_Conv2D_mEB6B08E973F277EE9195BFD8FC2E1BB4176D2162 (void);
// 0x00000176 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Conv3D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_Conv3D_m4C52D9162FD3D3F3A038411D4510E52600B31DE7 (void);
// 0x00000177 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_DepthwiseConv2D_m003840534E6A0B2F5FFC70E8C8E9AA3F419D44A6 (void);
// 0x00000178 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_Conv2DTrans_mA90C2C3DDADE110C8B9C009EF652AD604A1C82F4 (void);
// 0x00000179 System.Single Unity.Barracuda.ReferenceCPUOps::BilinearInterpolation(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern void ReferenceCPUOps_BilinearInterpolation_m49E472641CA885627489E3A424A4FFCC5FAB6262 (void);
// 0x0000017A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Upsample3D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceCPUOps_Upsample3D_mEE3456A1BAF785497C161D7F1D610C29D255B2EC (void);
// 0x0000017B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceCPUOps_Upsample2D_mD4E2933B710E8A6F92BA82696ED3C93F2FFEB034 (void);
// 0x0000017C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceCPUOps_Resample2D_mD385422AA1457940CFD97F82462F616656EA5A7F (void);
// 0x0000017D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void ReferenceCPUOps_DepthToSpace_m14AC40C75EE60EF3C423F2BE7CC6E99C3EF6E5DC (void);
// 0x0000017E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_SpaceToDepth_m2DA708F4F2382AEC5852FFC7CCF97EB42001EE46 (void);
// 0x0000017F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_MaxPool2D_mE233BEA5A8B6166E8172E581A4B5AB922133A1A7 (void);
// 0x00000180 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_AvgPool2D_m570B838F09921A337A84A16C2244C771BF02C7A5 (void);
// 0x00000181 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalMaxPool2D_m347BECF502ED0EF765D03E30E919ABFF6515EC4D (void);
// 0x00000182 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalAvgPool2D_m13EFD2CAD5418836A06F5D6835D4E61D9736FE7A (void);
// 0x00000183 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalAvgVariancePool2D_m265B0C90661000D41CD221E40BE3E076D776E527 (void);
// 0x00000184 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.Func`7<Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single>)
extern void ReferenceCPUOps_ApplyPadding_mC7F6B828D40BF3311C06433F5C0B967C9133657B (void);
// 0x00000185 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void ReferenceCPUOps_Border2D_m16DABFD77CABEA97E27873306752F5BCF97EE1D9 (void);
// 0x00000186 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Border3D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void ReferenceCPUOps_Border3D_m827ED989C5C05C56BE9875CCE6B6C8FC7EA49ECB (void);
// 0x00000187 System.Void Unity.Barracuda.ReferenceCPUOps::ClampHWToTensorShape(Unity.Barracuda.TensorShape,System.Int32&,System.Int32&)
extern void ReferenceCPUOps_ClampHWToTensorShape_m4972BEAE0D18D075DE8D8357D1D6CCD86452784A (void);
// 0x00000188 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DReflect_m92AA80D38C824BF55EABFEF895BF220725160ADA (void);
// 0x00000189 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DSymmetric_m4F2DF18A78FF95742878C3FA95118029AFD3D590 (void);
// 0x0000018A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DEdge_m614B33134ADBD647FA543DCC54168F52EACAE25A (void);
// 0x0000018B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_ScaleBias_m783F68C83AA331C728B507DE4A7EE6808CB41BE6 (void);
// 0x0000018C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_LRN_m4A1DADA0B4394E37B72282B459C44ACD786DEC52 (void);
// 0x0000018D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceCPUOps_Normalization_m9815B95689EBA80129E7E54F0CFECAE83387A213 (void);
// 0x0000018E System.Single Unity.Barracuda.ReferenceCPUOps::Bernoulli(System.Single)
extern void ReferenceCPUOps_Bernoulli_mCB95FF8728813DF5702F81E5F6242BFC889EF558 (void);
// 0x0000018F System.Single Unity.Barracuda.ReferenceCPUOps::Gaussian(System.Single,System.Single)
extern void ReferenceCPUOps_Gaussian_mE45907B4DC2AF14FDBEE87D077E93FE453C93C03 (void);
// 0x00000190 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Dropout(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Dropout_m72C2541CA158751F6AF4CE58267433C6C92625F7 (void);
// 0x00000191 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_RandomNormal_m27BF9AA53E84E3C4A98ED19E357DF2C864A5FE7E (void);
// 0x00000192 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_RandomUniform_mDC4536309BEE6AA865D494A5507BC1C74A58F0B3 (void);
// 0x00000193 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void ReferenceCPUOps_Multinomial_m3B394C748610F9ECCAEDF706493A710BFDDACD50 (void);
// 0x00000194 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void ReferenceCPUOps_OneHot_m1054C19E73EBDE87ABB3709EDFB94E485C599E1D (void);
// 0x00000195 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void ReferenceCPUOps_TopKIndices_m36F21493A1891B8750EFA8DE323E6A149625E8BC (void);
// 0x00000196 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NonZero(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_NonZero_mA8428E7EA626C34D8C5B7FD657EC69A9BEAF2F60 (void);
// 0x00000197 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_TopKValues_m1EB38FC671164100398908DE5EC5AC0D09C3DC01 (void);
// 0x00000198 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Relu(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Relu_m2FB856F64118D83AAAAEA1620C2F21FDCFDA6193 (void);
// 0x00000199 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_PRelu_mAE8EC37B337FD16322FB419773343279222AE2ED (void);
// 0x0000019A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_Softmax_mDD21D5F9DC57C15B48C66F68D5E929E71B99AEC3 (void);
// 0x0000019B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogSoftmax_m764E1443C168EC7EE111E33E83B7A05EDE1EB2B5 (void);
// 0x0000019C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Tanh_mCA3D1DA226A56C634B86F4CA68CD6AB9C0E3F144 (void);
// 0x0000019D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Softplus(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Softplus_m53E323434E2BB46BE6A54191B6560E3089F6B49F (void);
// 0x0000019E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sigmoid_m80FE17A7B03F7294579FB22CC50625A6E5325686 (void);
// 0x0000019F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Relu6_mBE988992984E6121D3D241C68A0B5A12F893A4BC (void);
// 0x000001A0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Elu_m11C2FD13D39B9530314166FD47A8FF47CFC85BB2 (void);
// 0x000001A1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_LeakyRelu_m100DC6818675E1F66AE64E03703F1978AD4339F9 (void);
// 0x000001A2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceCPUOps_Selu_m488C9C4AAD6974BBB7FA74F639B8DD897FD5BFA4 (void);
// 0x000001A3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Swish(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Swish_m6E5FE3B3CF7FED3F521D3854D0D2C84558962A6A (void);
// 0x000001A4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Abs(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Abs_mD1512E40CBD8938173AFAB531870350186326527 (void);
// 0x000001A5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Neg(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Neg_m8797D7F0319BDD273C453B3143D078A246747857 (void);
// 0x000001A6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Ceil(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Ceil_mB655C9815BF099187DE53527A0C3164C2B67669F (void);
// 0x000001A7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceCPUOps_Clip_mA0536C26E0E76922DE88DF6B2C3C01E99F58F2D6 (void);
// 0x000001A8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Floor(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Floor_mE078F4DF2EEC1768D396970855D33521A435E043 (void);
// 0x000001A9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Reciprocal(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Reciprocal_m9CCBBFDF1DFDE81785C6C91D6FD86D978CBE5796 (void);
// 0x000001AA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Pow_m2E1366150F52C7FB70F377785D096BE40EB4B83B (void);
// 0x000001AB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Exp(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Exp_mE58DDE32C25E1AC3DC6C991ACFAD38B4E7C9DA98 (void);
// 0x000001AC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Log(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Log_mCA83B3184F99989CB1B545BE87B6F6752912CD88 (void);
// 0x000001AD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sqrt_mF9047358A6220DE6806AA8CDF6F31AC03C5CF80D (void);
// 0x000001AE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Acos(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Acos_m4A2E4648536BDDC9DCBB21D1603AA385A4109B65 (void);
// 0x000001AF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Acosh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Acosh_mB0073E51293F8C1BE2B9B1E08FB7635DD70C4B07 (void);
// 0x000001B0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Asin(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Asin_m0F745C1FBD70972AAFEAC6439F5BE32516F2F053 (void);
// 0x000001B1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Asinh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Asinh_mB10325CD255B8914ECB9C9BBCD7E8731C81F9DA0 (void);
// 0x000001B2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Atan(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Atan_m6B2E9AE84DC288F2E3322BB5B2D52CAF74E1C7B6 (void);
// 0x000001B3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Atanh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Atanh_mD0502C311F007CA44E07F9ADF8FA95B9E77869D4 (void);
// 0x000001B4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Cos(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Cos_m75301BD2687BE4169E0237762713EDF8882A99B3 (void);
// 0x000001B5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Cosh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Cosh_mBFC470D38A7F9AE71679BF91D55ADA1E5E4C71FD (void);
// 0x000001B6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sin(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sin_mE19403F7318AEE79699DD1A583575D2EAE5DC924 (void);
// 0x000001B7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sinh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sinh_m343AE23A674DEDCB30AEAE24A4F4DC401F581C2D (void);
// 0x000001B8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Tan(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Tan_mAAB4E4F4DD55A54D844F783802A01AEB76E980DA (void);
// 0x000001B9 System.Int64 Unity.Barracuda.ReferenceCPUOps::GetAggregatedDimLength(Unity.Barracuda.TensorShape,System.Int32,System.Int32)
extern void ReferenceCPUOps_GetAggregatedDimLength_mE4D78212A05BC3E71C611F3DB415D01BA85F5271 (void);
// 0x000001BA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceCPUOps_Concat_m8DA39BE39123D5DB3EB6B024138F58DA014E193B (void);
// 0x000001BB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_StridedSlice_m0598C3B1E16F0B354631E7F2F205D27BE066E39A (void);
// 0x000001BC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Tile_m52E6011814ED458759D96C526EFA4321FFDD3EB7 (void);
// 0x000001BD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Shape(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_Shape_mBA3949D2B71A33C7D04E9E7700D7EDAF26BBFD31 (void);
// 0x000001BE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyElementwiseWithBroadcast(Unity.Barracuda.Tensor[],System.Func`3<System.Single,System.Single,System.Single>)
extern void ReferenceCPUOps_ApplyElementwiseWithBroadcast_m0F5EE484ECDDC5D6479228A3C9A1B38E3CCFAC4D (void);
// 0x000001BF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Add(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Add_m63ED36B05DC991BC0BB6EDD1BCD05850EF91DB98 (void);
// 0x000001C0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Sub_mD479548B7C3E957949098444B8261CB1EA44181D (void);
// 0x000001C1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Mul_m65B183B8CB34AB810979D6E3951E9311936ADB41 (void);
// 0x000001C2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Div(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Div_m4D28D8F674072329AB6BA7E91C392CC72093EA40 (void);
// 0x000001C3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pow(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Pow_m0F7261757DD3F539FCB0A9D0D22A01473B80008E (void);
// 0x000001C4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Min(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Min_m2B1A37ADDEDF884A9BA62750E16E059A3866B9CE (void);
// 0x000001C5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Max(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Max_m1B4CBB966B74FBEDB08A56E44B421604C62EFE3A (void);
// 0x000001C6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Mean(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Mean_mE8B95FE9561898FCF45EDD93C3681BCC1B37C70E (void);
// 0x000001C7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMin_m53C7E0BE9D2A1E3143DF1E6F1269D6B475BB8204 (void);
// 0x000001C8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMax_mB34D3A0E1885901802741CBB755E91C644C6CC8F (void);
// 0x000001C9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ArgMax_mCD9097CEC607A756D4AECA6B7C600D786D1B8B14 (void);
// 0x000001CA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ArgMin_mBAE0A0A67DB2EEE679F7909F1E80E137883B8315 (void);
// 0x000001CB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceSum_m3E086C9AFB9899D6036822CBD859102C9A561ED2 (void);
// 0x000001CC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMean_mD77687F3057E2FCE3CE33980E63242146783AE7F (void);
// 0x000001CD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceProd_mDE7F6576BF6FBF6722D463B45C5BC646C055CC16 (void);
// 0x000001CE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyLogicalOperator(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Func`3<System.Single,System.Single,System.Single>)
extern void ReferenceCPUOps_ApplyLogicalOperator_m6FD7A10CFF4EB21ED78BD776319B7F690F219DEF (void);
// 0x000001CF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Greater_mC8308501B5C0EB8C61BE5DAA561A9A2563E9188F (void);
// 0x000001D0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GreaterEqual_m54CCEA3667E3F185E618A2DED29426EF76812E00 (void);
// 0x000001D1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Less_m271540ABD450ECB05D8EA179B1AF0648898874D0 (void);
// 0x000001D2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LessEqual_m8EDF39FEECA708F12917581746B2C8CD6E1269EF (void);
// 0x000001D3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Equal_m08EE8A9058CAC7F13ED40AD204AA888DE62AC170 (void);
// 0x000001D4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalOr_mDEC73F171E93CB1935C49CC0911E0BBCF70207A3 (void);
// 0x000001D5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalAnd_mA71BE7FFB1E4CCE5D811C7AAA26BF1A2D8050BAA (void);
// 0x000001D6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalXor_m0E5AED52523BBDFE2B5D03E8850C2D095674E741 (void);
// 0x000001D7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalNot_m4529FF7131AADE1C315DF03835BD241E2D650292 (void);
// 0x000001D8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Where_mC2C31B37886B7A7D5EB2109C5E72D539C87B65FB (void);
// 0x000001D9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_CopyAndReshape_m98435E631A2A721E26EF58F7C126E29F7D02E90F (void);
// 0x000001DA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Copy(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Copy_mD9ECB5503B6D102D937474422CF643CA0A90858C (void);
// 0x000001DB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Flatten(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Flatten_mDA1681412BE99BEFFEE455F5BB069D67FD87EFF2 (void);
// 0x000001DC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_Reshape_mD1694A216A7CF841468450B483DC6892450FA72B (void);
// 0x000001DD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_Expand_m1686268997DA6EC7BFD823FE76BC9DAACEB3159B (void);
// 0x000001DE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceCPUOps_Gather_m4D796A070CE0BF215EB5A0A60000B2AA31E42A1E (void);
// 0x000001DF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_NonMaxSuppression_mA93FD96FA676A0DA4052898E63C7852CFED51FAD (void);
// 0x000001E0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Transpose(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Transpose_m9E58F8882FB492708F2AD2F625EFB0CF55780BA4 (void);
// 0x000001E1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Transpose_m0B4F80210186A6BE242CE55C965DE5D79FC1E7C5 (void);
// 0x000001E2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Prepare_mAB938BFBE077EECE53537D2A791A19D70B3120C7 (void);
// 0x000001E3 System.Single Unity.Barracuda.ReferenceCPUOps::<NonMaxSuppression>g__GetIntersectionOverUnionArea|124_0(UnityEngine.Rect,UnityEngine.Rect)
extern void ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetIntersectionOverUnionAreaU7C124_0_m17182491B5D9B3B5405468D2F17CAA383FEA5E02 (void);
// 0x000001E4 System.Single Unity.Barracuda.ReferenceCPUOps::<NonMaxSuppression>g__GetIntersectionArea|124_1(UnityEngine.Rect,UnityEngine.Rect)
extern void ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetIntersectionAreaU7C124_1_mB581CF12174B3F064766853E79BE35328BAD1A93 (void);
// 0x000001E5 UnityEngine.Rect Unity.Barracuda.ReferenceCPUOps::<NonMaxSuppression>g__GetRect|124_2(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetRectU7C124_2_m1511FFFB38B8B1D3D4EA800824CCB7FCFFD3116E (void);
// 0x000001E6 UnityEngine.Rect Unity.Barracuda.ReferenceCPUOps::<NonMaxSuppression>g__GetRectFromCenter|124_3(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetRectFromCenterU7C124_3_m985B1557A6D8DC85D7FC74C2F51E16991D5F5443 (void);
// 0x000001E7 System.Single Unity.Barracuda.MathfEx::Tanh(System.Single)
extern void MathfEx_Tanh_mEBA36AAC5E554FE849A4D7D0D3033A9434F54CCF (void);
// 0x000001E8 System.Void Unity.Barracuda.MathfEx::.ctor()
extern void MathfEx__ctor_m38CDBD96567F5F5AA2534CBCDB62B6159BAFE315 (void);
// 0x000001E9 System.Int32 Unity.Barracuda.ComputeHelper::IDivC(System.Int32,System.Int32)
extern void ComputeHelper_IDivC_m375F957F1CAD64510177F60DDC9AED819CD32AE8 (void);
// 0x000001EA UnityEngine.ComputeBuffer Unity.Barracuda.ComputeTensorData::get_buffer()
extern void ComputeTensorData_get_buffer_mFCECEA9F48FDA3ED441F4E029693C8307B4211CD (void);
// 0x000001EB System.Int32 Unity.Barracuda.ComputeTensorData::get_offset()
extern void ComputeTensorData_get_offset_m469608B30A2C1A999BAED9F1F0F4C1FDE9EB6683 (void);
// 0x000001EC Unity.Barracuda.ComputeInfo/ChannelsOrder Unity.Barracuda.ComputeTensorData::get_channelsOrder()
extern void ComputeTensorData_get_channelsOrder_m9A5E81CBAE8D38EA47120F67EC12560AAA2006D8 (void);
// 0x000001ED System.Void Unity.Barracuda.ComputeTensorData::.ctor(Unity.Barracuda.TensorShape,System.String,Unity.Barracuda.ComputeInfo/ChannelsOrder,System.Boolean)
extern void ComputeTensorData__ctor_m414F6F31B3CB48445BAEA3703EE0C08BB823F305 (void);
// 0x000001EE System.Void Unity.Barracuda.ComputeTensorData::.ctor(UnityEngine.ComputeBuffer,Unity.Barracuda.TensorShape,System.Int32,System.String,Unity.Barracuda.ComputeInfo/ChannelsOrder)
extern void ComputeTensorData__ctor_m79A40B613AC3FFA70B4245C2D3551FDABF335AAC (void);
// 0x000001EF System.Void Unity.Barracuda.ComputeTensorData::Finalize()
extern void ComputeTensorData_Finalize_mD5783E25E4CDF0E6FF227A076A20DB35A919536F (void);
// 0x000001F0 System.Void Unity.Barracuda.ComputeTensorData::Dispose()
extern void ComputeTensorData_Dispose_mA66A3359575DA99025F604EB41926D819CF04131 (void);
// 0x000001F1 System.Void Unity.Barracuda.ComputeTensorData::Reserve(System.Int32)
extern void ComputeTensorData_Reserve_m3187AB6FA283210E78A6BAE273A5DAF6CDB3C8B6 (void);
// 0x000001F2 System.Void Unity.Barracuda.ComputeTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void ComputeTensorData_Upload_m498B45FE1DFB7184F6708E544F85B26DFD73AE6A (void);
// 0x000001F3 System.Boolean Unity.Barracuda.ComputeTensorData::ScheduleAsyncDownload(System.Int32)
extern void ComputeTensorData_ScheduleAsyncDownload_m9104788086296D61DF9DA68CB2E688A18BF36A1D (void);
// 0x000001F4 System.Boolean Unity.Barracuda.ComputeTensorData::WaitFor3Frames(System.Int32)
extern void ComputeTensorData_WaitFor3Frames_mFE632DB1F920CF77B136AAC2279B709E6E22B1A8 (void);
// 0x000001F5 System.Boolean Unity.Barracuda.ComputeTensorData::WaitForAsyncReadback(System.Int32)
extern void ComputeTensorData_WaitForAsyncReadback_m28F25038FA54ECB844FA1E39B7D679137878946A (void);
// 0x000001F6 System.Single[] Unity.Barracuda.ComputeTensorData::ConvertFromOnDeviceFormat(Unity.Barracuda.TensorShape,System.Single[])
extern void ComputeTensorData_ConvertFromOnDeviceFormat_mBE93EF58E109700411D59533A4EB4B06E43429A2 (void);
// 0x000001F7 System.Single[] Unity.Barracuda.ComputeTensorData::Download(Unity.Barracuda.TensorShape)
extern void ComputeTensorData_Download_m07F9478A9989BCBB9BDDFAD6B8BF641032B3173E (void);
// 0x000001F8 System.Single[] Unity.Barracuda.ComputeTensorData::SharedAccess(System.Int32&)
extern void ComputeTensorData_SharedAccess_m29A5E26D1675D3D408B65395093577E8E7A3F871 (void);
// 0x000001F9 System.Int32 Unity.Barracuda.ComputeTensorData::get_maxCapacity()
extern void ComputeTensorData_get_maxCapacity_m4B88E991CFB8F7B647E7E153701E5751A79A3395 (void);
// 0x000001FA System.String Unity.Barracuda.ComputeTensorData::ToString()
extern void ComputeTensorData_ToString_m6008AC65DB335B1D6AC108D82721AEB1913BB958 (void);
// 0x000001FB System.Void Unity.Barracuda.SharedComputeTensorData::.ctor(UnityEngine.ComputeBuffer,Unity.Barracuda.TensorShape,System.Int32,System.String,Unity.Barracuda.ComputeInfo/ChannelsOrder)
extern void SharedComputeTensorData__ctor_m35B413066978EA53EF2A89CF39D7F5E60728B8E7 (void);
// 0x000001FC System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedOnly_mF73D7E03E0DB405EAD6F9B3E0B3A544257A522D2 (void);
// 0x000001FD System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedOnly_mC81078AB0A34006C2D9C2569F91839706C8F47BB (void);
// 0x000001FE System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedGreen_m571F085C4D86A459BE8CF3937B407882EEBA6864 (void);
// 0x000001FF System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedGreen_m2945D0FE6E2FC6DD739FB2241BDE9C24C5A39890 (void);
// 0x00000200 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedGreenBlue_mFA2918EE6BCD955962A44AD3B6280F6F9F16DC98 (void);
// 0x00000201 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedGreenBlue_m83478181FF50EC0A71B1CC907B3343F79618034A (void);
// 0x00000202 System.Boolean Unity.Barracuda.TextureFormatUtils::IsAlphaOnly(UnityEngine.Texture)
extern void TextureFormatUtils_IsAlphaOnly_m0A8E8BA50DFCAD632852EED4859EAF624E1BDC50 (void);
// 0x00000203 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedOnly_mEE09F706C4C7405D0BC71DCA270A2C48372E12CC (void);
// 0x00000204 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedGreen_m1569341B7E85AF3EF45335577CD015D253052CCC (void);
// 0x00000205 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedGreenBlue_m3FEE5C525A44D8476BD9B298B1AC8FF1A7773D8D (void);
// 0x00000206 System.Int32 Unity.Barracuda.TextureFormatUtils::FormatToChannelCount(UnityEngine.Texture)
extern void TextureFormatUtils_FormatToChannelCount_m041DFCDFB5891CD73C285468333683AD7F96568A (void);
// 0x00000207 UnityEngine.Color Unity.Barracuda.TextureFormatUtils::FormatToChannelMask(UnityEngine.Texture,System.Int32)
extern void TextureFormatUtils_FormatToChannelMask_m7D519C1E3E83B2201D8DE5A704C0EA4B75D02F18 (void);
// 0x00000208 UnityEngine.Color Unity.Barracuda.TextureFormatUtils::FormatToChannelMask(UnityEngine.Texture)
extern void TextureFormatUtils_FormatToChannelMask_m3F45A447C678764EF432F715924D302D32A20F9A (void);
// 0x00000209 System.Void Unity.Barracuda.TextureFormatUtils::.ctor()
extern void TextureFormatUtils__ctor_m54DB66E57A94DF4A1631A0E306C6BA0904B6EEDB (void);
// 0x0000020A Unity.Barracuda.TensorShape Unity.Barracuda.TextureAsTensorData::get_shape()
extern void TextureAsTensorData_get_shape_mABDD786D12F7C997BC46C31C158993537565C169 (void);
// 0x0000020B UnityEngine.Texture[] Unity.Barracuda.TextureAsTensorData::get_textures()
extern void TextureAsTensorData_get_textures_mDD91652F41A96A463170018A89C77BED60B5EB91 (void);
// 0x0000020C System.Int32 Unity.Barracuda.TextureAsTensorData::get_interpretPixelAsChannels()
extern void TextureAsTensorData_get_interpretPixelAsChannels_mCF4B349DF303B9E1303940027B4EE409C7F6E9C5 (void);
// 0x0000020D Unity.Barracuda.TextureAsTensorData/InterpretDepthAs Unity.Barracuda.TextureAsTensorData::get_interpretDepthAs()
extern void TextureAsTensorData_get_interpretDepthAs_m444DFE60DE7E1BE0557232E579C9D41DF7E00B27 (void);
// 0x0000020E Unity.Barracuda.TextureAsTensorData/InterpretColorAs Unity.Barracuda.TextureAsTensorData::get_interpretColorAs()
extern void TextureAsTensorData_get_interpretColorAs_mA95C1BE3338CF99B6C1E849E2A708E3698CE2138 (void);
// 0x0000020F Unity.Barracuda.TextureAsTensorData/Flip Unity.Barracuda.TextureAsTensorData::get_flip()
extern void TextureAsTensorData_get_flip_mF7E272166D7866E3A44F4E233ADF71B4ED608B29 (void);
// 0x00000210 System.Void Unity.Barracuda.TextureAsTensorData::.ctor(UnityEngine.Texture[],System.Int32,Unity.Barracuda.TextureAsTensorData/Flip,Unity.Barracuda.TextureAsTensorData/InterpretDepthAs,Unity.Barracuda.TextureAsTensorData/InterpretColorAs)
extern void TextureAsTensorData__ctor_mB3679ADA66679A129ECC4C13D6962CA4082C1779 (void);
// 0x00000211 System.Void Unity.Barracuda.TextureAsTensorData::.ctor(UnityEngine.Texture,System.Int32,Unity.Barracuda.TextureAsTensorData/Flip,Unity.Barracuda.TextureAsTensorData/InterpretDepthAs,Unity.Barracuda.TextureAsTensorData/InterpretColorAs)
extern void TextureAsTensorData__ctor_m4900B4A73A94BA432E929049DFD1D53B997EC071 (void);
// 0x00000212 System.Void Unity.Barracuda.TextureAsTensorData::Reserve(System.Int32)
extern void TextureAsTensorData_Reserve_m271FF4C4C7E634AD1FE7FF28AB575CF0F445657A (void);
// 0x00000213 System.Void Unity.Barracuda.TextureAsTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void TextureAsTensorData_Upload_mE6600480DD53EB4B6E397A9734EECE2E61AB67DF (void);
// 0x00000214 System.Boolean Unity.Barracuda.TextureAsTensorData::ScheduleAsyncDownload(System.Int32)
extern void TextureAsTensorData_ScheduleAsyncDownload_mB2EE16F7836DD715F560C987BA8656E4562249F2 (void);
// 0x00000215 System.Single[] Unity.Barracuda.TextureAsTensorData::Download(Unity.Barracuda.TensorShape)
extern void TextureAsTensorData_Download_m045326DFC1301E118E4AB0990B0F975EBE889BE8 (void);
// 0x00000216 System.Single[] Unity.Barracuda.TextureAsTensorData::SharedAccess(System.Int32&)
extern void TextureAsTensorData_SharedAccess_m314C1EC5360C26B093254353CFE3522343149852 (void);
// 0x00000217 System.Int32 Unity.Barracuda.TextureAsTensorData::get_maxCapacity()
extern void TextureAsTensorData_get_maxCapacity_m1244EBA8C11842538A33452E737A531E9BA0C36B (void);
// 0x00000218 System.Void Unity.Barracuda.TextureAsTensorData::Dispose()
extern void TextureAsTensorData_Dispose_m5DD3B43305EFAE8F56BECE4BEB6612ABA68D6744 (void);
// 0x00000219 System.Void Unity.Barracuda.ReferenceComputeOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void ReferenceComputeOps__ctor_m916AA7908F22D7DA35B20CD9292F7D4D652C1F69 (void);
// 0x0000021A Unity.Barracuda.ComputeTensorData Unity.Barracuda.ReferenceComputeOps::Pin(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Pin_mF9BB38E5EA06083BA3C13AAB784AC7B3FC7514A6 (void);
// 0x0000021B System.Void Unity.Barracuda.ReferenceComputeOps::SetTensor(Unity.Barracuda.ComputeFunc,System.String,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_SetTensor_mF8836799A315E5914453AE3F50FAE0C78658742E (void);
// 0x0000021C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::NewTensor(Unity.Barracuda.ComputeFunc,System.String,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_NewTensor_m1C7FD0C296AB1A6B25089DEBB4F43E322E7A3A96 (void);
// 0x0000021D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dispatch(Unity.Barracuda.ComputeFunc,Unity.Barracuda.TensorShape,System.Int32,System.Int32,System.Int32,System.String)
extern void ReferenceComputeOps_Dispatch_m901709E44D5FE5C751B1F68107F09A2528E57B97 (void);
// 0x0000021E Unity.Barracuda.ITensorData Unity.Barracuda.ReferenceComputeOps::TextureToTensorData(Unity.Barracuda.TextureAsTensorData,System.String)
extern void ReferenceComputeOps_TextureToTensorData_m1B0868FD3A8621E064F43C5DC21308390D71601B (void);
// 0x0000021F System.Void Unity.Barracuda.ReferenceComputeOps::TensorToRenderTexture(Unity.Barracuda.Tensor,UnityEngine.RenderTexture,System.Int32,System.Int32,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Texture3D)
extern void ReferenceComputeOps_TensorToRenderTexture_m8DD3CA0B8697EF1E12D9F641308670A86E311D30 (void);
// 0x00000220 System.Boolean Unity.Barracuda.ReferenceComputeOps::ShouldFlattenInputForDenseLayer(Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_ShouldFlattenInputForDenseLayer_mEBDAD74AA46849353FD44826D3BA899EC6383AA6 (void);
// 0x00000221 System.Boolean Unity.Barracuda.ReferenceComputeOps::IsFusedActivationSupported(Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_IsFusedActivationSupported_m42645DC95B6EA73ED0DC59A4620DE613EBC6EFDF (void);
// 0x00000222 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_MatMul_mBEE584FDE2BBB52146314E7F203AABF0C80FDC23 (void);
// 0x00000223 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ReferenceComputeOps_MatMul_m3BBB954BBFEC2796FA420EEDD5662451CDAB6471 (void);
// 0x00000224 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Dense_mAC017EFBC298967A8D79A3E6DDA413FC291467D5 (void);
// 0x00000225 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2DWinograd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Conv2DWinograd_m549A95B1D2A3381B79B344411185A9B0A64A0596 (void);
// 0x00000226 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv3D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Conv3D_m5F9608AA514582139DB405F2E66E484DC183F8A3 (void);
// 0x00000227 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Conv2D_m24F455385FC2B83D0FE90C9B7E073008A8F79FE3 (void);
// 0x00000228 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_DepthwiseConv2D_mA1EE8004E64B7B3AF2EB45B503FE9C8722239A14 (void);
// 0x00000229 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Conv2DTrans_m20E201FF74F71973122B8E530535FE027616C708 (void);
// 0x0000022A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceComputeOps_Upsample2D_mCB05572A7EA8EB1396C6DCF0494A9F4DDA8A2413 (void);
// 0x0000022B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Upsample3D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceComputeOps_Upsample3D_m08754D76E4E94B5F4E17621D3800F7FFAD2F4591 (void);
// 0x0000022C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceComputeOps_Resample2D_mDE74683A114A615537D275E92995BFF223391DA2 (void);
// 0x0000022D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void ReferenceComputeOps_DepthToSpace_mF8F70E2839C90B2CB60C902862C1F8609F3E40B4 (void);
// 0x0000022E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_SpaceToDepth_m239EF399D902E39FEA0173E65B586E5287A74B65 (void);
// 0x0000022F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_Pool2D_mDC0E1AC687F850097AB9B1C056490A8A9DFECFCD (void);
// 0x00000230 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_MaxPool2D_m65CF33A70D6969195EE1C8154AC755FD2A722271 (void);
// 0x00000231 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_AvgPool2D_m9EA7C10678392AD2EC7E43A8A6339CA9D53125BD (void);
// 0x00000232 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalPool2D(System.String,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalPool2D_mF08A61004446242655C9BE33FFF2A09136573046 (void);
// 0x00000233 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalMaxPool2D_m89FC136C6E3562C92673FB207731AB1139E0102F (void);
// 0x00000234 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalAvgPool2D_m95C1C4018F102890D703F66848AE262D5200828C (void);
// 0x00000235 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalAvgVariancePool2D_mB9A61FF371C416702B862B746D4EF437242D558C (void);
// 0x00000236 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.String,System.Single)
extern void ReferenceComputeOps_ApplyPadding_m2E833D089E2318DE95E1917012A582CFFD9642E2 (void);
// 0x00000237 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ApplyPadding3D(Unity.Barracuda.Tensor,System.Int32[],System.String,System.Single)
extern void ReferenceComputeOps_ApplyPadding3D_m07F268392804DF44B2CC0C671AD528C379D84749 (void);
// 0x00000238 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void ReferenceComputeOps_Border2D_mF17A1925BC19EF4A7A716C2483AC3B054CEB38B3 (void);
// 0x00000239 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Border3D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void ReferenceComputeOps_Border3D_mAFEB94612054296998F1F09EBEB686F9CA1F2091 (void);
// 0x0000023A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DReflect_mB81EFA2FB5AA78D16ABF80CEEE1B82E4C0F0BD6C (void);
// 0x0000023B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DSymmetric_mDC0DED001FC79C8CD1B3E89E17D62802AB56189F (void);
// 0x0000023C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DEdge_m22CDA0D85A051736B16005A9F445358B02B5B272 (void);
// 0x0000023D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_ScaleBias_mB02988734279CD087F61EDA9F86A7AD71ACF16A8 (void);
// 0x0000023E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void ReferenceComputeOps_Normalization_m9B07374E5D8F0C536DD495A9222675165F790C11 (void);
// 0x0000023F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void ReferenceComputeOps_LRN_m444EA30C864E8CE519F88A740D37B9D17516BCEF (void);
// 0x00000240 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dropout(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Dropout_mF1F3EEA655A9A69D3B4BEFE364A1D8468B750691 (void);
// 0x00000241 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Activation_m8054C9CE40002672D919E5256A1DC7F82853E23E (void);
// 0x00000242 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Relu(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Relu_m81E8FED38B77F077BE2EB79C410064680C6F7164 (void);
// 0x00000243 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_PRelu_m3BF59AE5BC2CBEAB5D502AAD66F0A1A7106F078D (void);
// 0x00000244 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_Softmax_m4C6985B9D0C0D8C9C52FCB72854A0ED3AE32EF98 (void);
// 0x00000245 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogSoftmax_mB6A3D256CF636C40282105201B4FC56391517F10 (void);
// 0x00000246 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Tanh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Tanh_m1A880DEC2D27927CCE3D0781D6D55E34D8C41DB7 (void);
// 0x00000247 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Softplus(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Softplus_m9B79E4BF45FDF00A6DA4F004A750D79D14D6F0E9 (void);
// 0x00000248 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sigmoid(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sigmoid_m7F8D1E4E5FC91E9D68D15BAF788C4BA3D435605D (void);
// 0x00000249 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Relu6(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Relu6_m33DB9388D4D95C9EBF576166652D4949494D79CF (void);
// 0x0000024A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Elu_m7E461FDB65B609776879C9CA96D73F6B2098ED85 (void);
// 0x0000024B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_LeakyRelu_mD881E418673DB4764A6FE4A209F27E3FE0428283 (void);
// 0x0000024C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Selu_m1FAEA0AE19D80EB7924B67541F417722E788E1A6 (void);
// 0x0000024D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Swish(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Swish_mB5DFA9AEB08D1CA41D346FF10560CB69C33C8CE5 (void);
// 0x0000024E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Abs(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Abs_mA9BD6E66D05A1195703AEFE303EB4EBE7D2ED794 (void);
// 0x0000024F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Neg(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Neg_m72B10561EAFE00155424BAD6FFF621362D7D851C (void);
// 0x00000250 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Ceil(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Ceil_mA2A77113A5F66641231F8848B3F8D5F988A2A030 (void);
// 0x00000251 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Clip_m402B54CE32E6CC93D6EC21E13E9EE167388B0A32 (void);
// 0x00000252 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Floor(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Floor_mB9ED62304FC56238E25B7F1D025BB5E629C49F67 (void);
// 0x00000253 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reciprocal(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Reciprocal_m2641E5CC09DA5EAC887AA81C3F82AF7B38F240BF (void);
// 0x00000254 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Pow_m7BF9FC75940BB67491DD00E5AA49BFFA191886E5 (void);
// 0x00000255 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Exp(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Exp_mA6294E5D218B9FFDE5E4ABAAD45FCAAA674A18D2 (void);
// 0x00000256 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Log(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Log_mA7DA53AA5E6F4F2727C0DE8ECB484A08A4F62792 (void);
// 0x00000257 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sqrt(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sqrt_m05EB1BE16FA3896BE71F7E94D1906FEFB54F481E (void);
// 0x00000258 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Acos(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Acos_m9BA87BEFA4C0964383A1F89422E954B91A8B20B7 (void);
// 0x00000259 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Acosh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Acosh_m15BFF8E386C495C637720E1E5408C2D3E494E627 (void);
// 0x0000025A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Asin(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Asin_m30EAB4B091778BEACFA93642301D0286AF43D511 (void);
// 0x0000025B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Asinh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Asinh_m21C946168080CDECC5623D8668C98AACCB57276B (void);
// 0x0000025C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Atan(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Atan_m59A9C91DF6D05B1850AEF0E8722194F1359E431C (void);
// 0x0000025D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Atanh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Atanh_mD3BA3C812BEB278758DED6D705394DCB4E198AA0 (void);
// 0x0000025E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Cos(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Cos_m106E43E09EF48EF079FFC0256078AE7211AA4050 (void);
// 0x0000025F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Cosh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Cosh_mB69E31FABE029D3E6D57A84CD15D6FE1ACA527EA (void);
// 0x00000260 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sin(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sin_mC0015F869D27D57A89D8F8334FCF9E17D6604BA2 (void);
// 0x00000261 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sinh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sinh_m1C0CA5824A5040889276A68BCD6A1B3CD44E9D1E (void);
// 0x00000262 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Tan(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Tan_m985A0A8AD6D28DC0EBF3B6EC5FECE96160A1F7F1 (void);
// 0x00000263 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_Expand_m26B082B364A49DE95AEFF899E7A0E1F5FFBAAE91 (void);
// 0x00000264 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_ElementwiseWithBroadcast_m2126028359C1E6947F86266D3FA7F570D6E7793E (void);
// 0x00000265 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Add(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Add_m7A16F42F42100759013FEAED8068A74F10A80986 (void);
// 0x00000266 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sub(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Sub_mC70C2004C32E38673BC0A90D9E9FBD3041CF71BB (void);
// 0x00000267 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Mul(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Mul_mA68CD6D2211C68B387DFA73080053EC3E2A25F86 (void);
// 0x00000268 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Div(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Div_mF8E6D9B6C5BE85350EC90639582B12EED2AB74EB (void);
// 0x00000269 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pow(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Pow_m40D40F518E820CA30E0B0BD46DA5AA42DDE285EF (void);
// 0x0000026A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Min(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Min_m13BF5BD020114C46E4357890124BD9EB1E956C07 (void);
// 0x0000026B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Max(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Max_mA491424D377357851B94BB12CC50AE6177BAC0B0 (void);
// 0x0000026C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Mean(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Mean_m4FDAAA598C10CF5AFA19CE176C3F5E377C91C7A7 (void);
// 0x0000026D System.Void Unity.Barracuda.ReferenceComputeOps::FillReducePermute(System.Int32)
extern void ReferenceComputeOps_FillReducePermute_m75A116152ABB9E05954FBD81171FB2A6DE6D3C6C (void);
// 0x0000026E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reduce(System.String,Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_Reduce_m8A378777BBB3239AC94A7808FA49D3B1F5F759C0 (void);
// 0x0000026F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ArgMax_m5F474C81C255A86D059FAEEE07874E69EE528853 (void);
// 0x00000270 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ArgMin_m6616AE7EA93800BDE0C8DA64341567B567C5D813 (void);
// 0x00000271 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMin_mEB84DAF349F7C524C73FF846BB79283EF32857A5 (void);
// 0x00000272 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMax_m3B166D14890C1C3C5E5D90BBFCC72CB126853E1F (void);
// 0x00000273 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceSum_m07799A86A6659BD5F012A0B4ED2DBED493743BA9 (void);
// 0x00000274 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMean_m640999F985C93220915EF55D9D49FFDD33CA62E5 (void);
// 0x00000275 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceProd_mAC8616D3F105CC92AB919990D8DE74D125E4F31F (void);
// 0x00000276 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Greater_m73D04E8F8C76410BD063976A5E353751F64E5496 (void);
// 0x00000277 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GreaterEqual_mFECBB27BA1956EA81386F47136448129CD828266 (void);
// 0x00000278 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Less_m6FD7B7908354A85B68C7EEDF025BD0F70636B1C6 (void);
// 0x00000279 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LessEqual_m83050F87982CE81D05ACBBC02D520CAF19E71D49 (void);
// 0x0000027A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Equal_mA720D0AD20A4F571D013ACE84380C51E33A0CF40 (void);
// 0x0000027B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalOr_mEFA86D5E491859105D1FC81E09011A0F22F7A2C3 (void);
// 0x0000027C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalAnd_mC3197E0AECD575CD1805C8CF177A1B944822C6BC (void);
// 0x0000027D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalXor_mA2CB122E9AEBE03F718043A0AF5D06C5CBA6BB44 (void);
// 0x0000027E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalNot_m1CF7FF46DBB046845A524E7795BFA2A32F398519 (void);
// 0x0000027F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Where_mE20D0ACB2D90F52C715F7E458C27666FBDF8ABCA (void);
// 0x00000280 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::CopyAndReshape_NCHW(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_CopyAndReshape_NCHW_m9FCE632340CEF79B2FFADDDCC7194E507F50E656 (void);
// 0x00000281 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_CopyAndReshape_m9A599250B4A37E819737AB0EE758898CDF57B8A0 (void);
// 0x00000282 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Flatten(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Flatten_m8F706BBEAA07990EC81E91E81ACACA7C188A512B (void);
// 0x00000283 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_Reshape_mF379C8E24AD9D7371A1E73399DA900E17BAF5869 (void);
// 0x00000284 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Transpose(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Transpose_mD27600CDB4C25FDE174E7774EB1BB91587780A69 (void);
// 0x00000285 System.Int32[] Unity.Barracuda.ReferenceComputeOps::GetOnDeviceShape(Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_GetOnDeviceShape_m0530D50D9388D922939477B25BCAF045FC99E92F (void);
// 0x00000286 System.Int32[] Unity.Barracuda.ReferenceComputeOps::ConvertPermutationToDeviceLayout(System.Int32[])
extern void ReferenceComputeOps_ConvertPermutationToDeviceLayout_mEBDA5F808EAECC2CA6F98B7A58E707B25E3CEFF2 (void);
// 0x00000287 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Transpose8D(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Transpose8D_m67205BD7D9AB16F7CDBFE0ACDFBCCB556DD4F7DC (void);
// 0x00000288 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Transpose_mB40DDE4C8A4947B96CE9D1ED00BEEC3C919EDEB7 (void);
// 0x00000289 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GetTensorInCurrentMemoryLayout(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GetTensorInCurrentMemoryLayout_m60BC71505BC058EE42BFFA2D405680D48E8A37DB (void);
// 0x0000028A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::TransposeToChannelFirst(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_TransposeToChannelFirst_m87E2BE299436694227DD1BA0EA0F27EA990B7A33 (void);
// 0x0000028B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceComputeOps_Concat_m61F74EAF3456A972005AD14051C2B00D94584BF9 (void);
// 0x0000028C System.Void Unity.Barracuda.ReferenceComputeOps::Set8DParamsForShader(System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_Set8DParamsForShader_m10DDF5D040FF7DF0E2C29B90DCD75D5F33BA0DA7 (void);
// 0x0000028D System.Void Unity.Barracuda.ReferenceComputeOps::Set8DParamsForShader(System.Int32*,System.Int32[],System.Int32[])
extern void ReferenceComputeOps_Set8DParamsForShader_m129A8EB87FA983113EB3BE05737869F48E73BF18 (void);
// 0x0000028E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_StridedSlice_m4FA7EF60AFE58768BC36E2C979382C5E754D1A5D (void);
// 0x0000028F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Tile_m7C1BBAE10002004A3F5408B6FA0223CA164DA4E1 (void);
// 0x00000290 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceComputeOps_Gather_mD60993B9A62704468CAB0A73C1413B0320577649 (void);
// 0x00000291 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Copy(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Copy_m39996EBF066CBD0C184900F4923577F3E0FBC869 (void);
// 0x00000292 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Prepare(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Prepare_m429D208FB517993E5C5D3859C895A130686351F8 (void);
// 0x00000293 System.Void Unity.Barracuda.ReferenceComputeOps::.cctor()
extern void ReferenceComputeOps__cctor_m9DBC01DDD22B8D8DEB89D5C94752FA9A97976500 (void);
// 0x00000294 System.UInt32 Unity.Barracuda.ComputeFunc::get_threadGroupSize()
extern void ComputeFunc_get_threadGroupSize_mE3DE69C387947294F6E182F5CF192AB1743CAD02 (void);
// 0x00000295 System.Int32 Unity.Barracuda.ComputeFunc::get_width()
extern void ComputeFunc_get_width_mBA6206CEFC80FFCBA3414BE6F7CEA0641CDE3DF8 (void);
// 0x00000296 System.Int32 Unity.Barracuda.ComputeFunc::get_height()
extern void ComputeFunc_get_height_mFB459F6394921EC4889E0BB564D6BA7FC7F76A9B (void);
// 0x00000297 System.Int32 Unity.Barracuda.ComputeFunc::get_depth()
extern void ComputeFunc_get_depth_m83A02D39C34F91C72BB75817A137C9CDC696F356 (void);
// 0x00000298 Unity.Barracuda.ComputeFunc/TensorDecl Unity.Barracuda.ComputeFunc::GetTensorDecl(System.String)
extern void ComputeFunc_GetTensorDecl_m8FC0461E0495EEFE927AE900F62C1ED00F37E3ED (void);
// 0x00000299 System.Int32 Unity.Barracuda.ComputeFunc::GetTensorData(System.String)
extern void ComputeFunc_GetTensorData_m3C56B29B2FA62A99B3440BCC12AC2E26AAFCC845 (void);
// 0x0000029A UnityEngine.Texture2D Unity.Barracuda.ComputeFunc::get_dummyTexture2D()
extern void ComputeFunc_get_dummyTexture2D_m986AA067257C1AA4AB7C2407B214874CC48B9DFF (void);
// 0x0000029B UnityEngine.Texture3D Unity.Barracuda.ComputeFunc::get_dummyTexture3D()
extern void ComputeFunc_get_dummyTexture3D_m5849AB5C6C23E3493A7A59DBBAAD173879754718 (void);
// 0x0000029C UnityEngine.Texture2DArray Unity.Barracuda.ComputeFunc::get_dummyTexture2DArray()
extern void ComputeFunc_get_dummyTexture2DArray_m25CE0F7D46D081F616E2A0B1CD7415D426B872DA (void);
// 0x0000029D System.Void Unity.Barracuda.ComputeFunc::.ctor(Unity.Barracuda.ComputeShaderContext,System.String[],System.Int32,System.Int32,System.Int32)
extern void ComputeFunc__ctor_m46CF8C060BD8F5F955170A47A85D74D332E6F1ED (void);
// 0x0000029E System.Void Unity.Barracuda.ComputeFunc::.ctor(Unity.Barracuda.ComputeShaderContext,System.String)
extern void ComputeFunc__ctor_m33103EF3B9A9F2B3B9122F18CE1516F1C8E5B1B4 (void);
// 0x0000029F System.Void Unity.Barracuda.ComputeFunc::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeFunc_SetTensor_mD745ADFBA3A56ADCCE1CC26C29CE75A3F5B20FB4 (void);
// 0x000002A0 System.Void Unity.Barracuda.ComputeFunc::SetTensor(Unity.Barracuda.ComputeFunc/TensorDecl,System.Int32,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeFunc_SetTensor_m09D9F7BD2B81B08C75286084958422FE1BD33FF2 (void);
// 0x000002A1 System.Void Unity.Barracuda.ComputeFunc::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.Texture,System.Int64)
extern void ComputeFunc_SetTensor_m80D7EB2769E2A10FECA9E69BFC1577C9995A9A82 (void);
// 0x000002A2 System.Void Unity.Barracuda.ComputeFunc::SetTensorDecl(System.String,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeFunc_SetTensorDecl_m0841B57C96E6E2367E32537827F419E2456CFB7C (void);
// 0x000002A3 System.Void Unity.Barracuda.ComputeFunc::SetTensorDecl(Unity.Barracuda.ComputeFunc/TensorDecl,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeFunc_SetTensorDecl_m8F91FAB9ECD7ACDA4E60B19546EAF036C2D76A76 (void);
// 0x000002A4 System.Void Unity.Barracuda.ComputeFunc::SetTensorBuffer(System.String,UnityEngine.ComputeBuffer)
extern void ComputeFunc_SetTensorBuffer_m2598B41597A03BA8080236613FFDC03FD2B9C806 (void);
// 0x000002A5 System.Void Unity.Barracuda.ComputeFunc::SetTensorBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern void ComputeFunc_SetTensorBuffer_mFD5F3C63C24E1C88BE5B9306191FAD41CD95F08E (void);
// 0x000002A6 System.Void Unity.Barracuda.ComputeFunc::SetTexture(System.String,UnityEngine.Texture)
extern void ComputeFunc_SetTexture_m70D07EC55E965B600C9712236C66E5E41B443795 (void);
// 0x000002A7 System.Void Unity.Barracuda.ComputeFunc::Dispatch(System.ValueTuple`3<System.Int32,System.Int32,System.Int32>)
extern void ComputeFunc_Dispatch_m17A2B947A3F8911B112FD8761FF185879C90C17A (void);
// 0x000002A8 System.Void Unity.Barracuda.ComputeFunc::Dispatch(System.Int32,System.Int32,System.Int32)
extern void ComputeFunc_Dispatch_m94BB3E7429F97ADCC2F7E40228FEF9662D5798A9 (void);
// 0x000002A9 System.Int32 Unity.Barracuda.ComputeFunc::IntDivCeil(System.Int32,System.Int32)
extern void ComputeFunc_IntDivCeil_mA1EE4351A2A0C6B57B92046EBA4C0250CB79B4F3 (void);
// 0x000002AA System.String Unity.Barracuda.ComputeFunc::FindBestKernelMatchingDimensions(Unity.Barracuda.ComputeShaderContext,System.String[],System.Int32,System.Int32,System.Int32)
extern void ComputeFunc_FindBestKernelMatchingDimensions_m7D1213A415D9CC49315241D9AF5871BEA6786302 (void);
// 0x000002AB System.Void Unity.Barracuda.ComputeFunc::.cctor()
extern void ComputeFunc__cctor_m69D33D53CD9ADB109960B4A6D142507319D2F981 (void);
// 0x000002AC System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(System.Int32)
extern void UnsafeArrayTensorData__ctor_m8E619CB9AE81AD32A8516C1A02EFD7060483EA0D (void);
// 0x000002AD System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void UnsafeArrayTensorData__ctor_m5E64C82A6868C144480D5EDD8DB60AD2F6A3B84A (void);
// 0x000002AE System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.ArrayTensorData)
extern void UnsafeArrayTensorData__ctor_mA91F490F7E602EC6AAD3F9BED881751C72B3EEAE (void);
// 0x000002AF System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.SharedArrayTensorData)
extern void UnsafeArrayTensorData__ctor_mF316ADD313EDB7AFD3AE9C4EF29FD21E3DCF8C4C (void);
// 0x000002B0 System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(System.Single[],System.Int32,System.Int32,System.Boolean)
extern void UnsafeArrayTensorData__ctor_mBEB3525DD06BCA64DBA2ACA79F91EB28B6F46007 (void);
// 0x000002B1 System.Void Unity.Barracuda.UnsafeArrayTensorData::Finalize()
extern void UnsafeArrayTensorData_Finalize_m897CCCAB67892A1829B1DD23A8E883700A25D6AD (void);
// 0x000002B2 System.Void Unity.Barracuda.UnsafeArrayTensorData::Dispose()
extern void UnsafeArrayTensorData_Dispose_m0D447D1C47FA7BDFCD766AD8A9D5722C77F407A8 (void);
// 0x000002B3 System.Void Unity.Barracuda.UnsafeArrayTensorData::Reserve(System.Int32)
extern void UnsafeArrayTensorData_Reserve_mD80F6D9ECC1F4A09A5F609D234754137654B91DF (void);
// 0x000002B4 System.Void Unity.Barracuda.UnsafeArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void UnsafeArrayTensorData_Upload_mB963AFE7CF6FC38775EEB9F3076BFE2329A64728 (void);
// 0x000002B5 System.Single[] Unity.Barracuda.UnsafeArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void UnsafeArrayTensorData_Download_m81CC6A93EE1CE73EF9FB0EFFD249D621F6DA557C (void);
// 0x000002B6 System.String Unity.Barracuda.UnsafeArrayTensorData::ToString()
extern void UnsafeArrayTensorData_ToString_m4B113CBDE4E59267BE90680AD3101519F4028183 (void);
// 0x000002B7 Unity.Barracuda.BLASPlugin Unity.Barracuda.UnsafeArrayCPUOps::get_blas()
extern void UnsafeArrayCPUOps_get_blas_mDB2A14144A4016F0A7AF5713E91B8C6979D25269 (void);
// 0x000002B8 System.Void Unity.Barracuda.UnsafeArrayCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void UnsafeArrayCPUOps__ctor_mD710D3078F3922781D8BDEA8D5DE507A38E0B398 (void);
// 0x000002B9 Unity.Barracuda.UnsafeArrayTensorData Unity.Barracuda.UnsafeArrayCPUOps::Pin(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Pin_m543C3FE3F66DAD3740AA00240ECC76228C10CE77 (void);
// 0x000002BA System.Void Unity.Barracuda.UnsafeArrayCPUOps::Parallel_For(System.Int64,System.Int64,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_Parallel_For_m84B4D0894CCB708C430007DAABE5D0389B3F8F7B (void);
// 0x000002BB Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Neg(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Neg_mD5FF144DFCD10B3454DF0442E729EC82940F989A (void);
// 0x000002BC System.Void Unity.Barracuda.UnsafeArrayCPUOps::NegInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_NegInnerLoop_m6C1788DA3E7BF7A415D46E70B5D409AA5B93E4E1 (void);
// 0x000002BD Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Relu(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Relu_m49100959684DA93B5D9D3E3930E4462E9F375C46 (void);
// 0x000002BE System.Void Unity.Barracuda.UnsafeArrayCPUOps::ReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_ReluInnerLoop_m6B45FCC4D76C2C6210578C4FE3316D07B0DF799B (void);
// 0x000002BF Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Relu6_m58B14675AE2C5801147BB47B880E407AA3853834 (void);
// 0x000002C0 System.Void Unity.Barracuda.UnsafeArrayCPUOps::Relu6InnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_Relu6InnerLoop_mB3FBCA71CE94E384AD6BD89FA84BD428F6E18AAD (void);
// 0x000002C1 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void UnsafeArrayCPUOps_LeakyRelu_mE4A8360129A4FB8427E81B3CC13DD57BDAF3E9A2 (void);
// 0x000002C2 System.Void Unity.Barracuda.UnsafeArrayCPUOps::LeakyReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*,System.Single)
extern void UnsafeArrayCPUOps_LeakyReluInnerLoop_m0D0B3F88BE67889D238D83560A817BCE3879E2B3 (void);
// 0x000002C3 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void UnsafeArrayCPUOps_Elu_m929FD08AE0C95C2854BEE5025C242EDF1A5001AA (void);
// 0x000002C4 System.Void Unity.Barracuda.UnsafeArrayCPUOps::EluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*,System.Single)
extern void UnsafeArrayCPUOps_EluInnerLoop_mE8B136B8B36B17DA3F2D862FF91A0BD4B4DD7E1F (void);
// 0x000002C5 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_PRelu_mA25725FED08ECD40733208ED397DE894A65B84B7 (void);
// 0x000002C6 System.Void Unity.Barracuda.UnsafeArrayCPUOps::PReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Int32,System.Single*,System.Single*,System.Int32)
extern void UnsafeArrayCPUOps_PReluInnerLoop_m61AF43C44A28E2899A4544D824EF5D54F9419F8F (void);
// 0x000002C7 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Softplus(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Softplus_m95200838ADB109043691978F9F4056ACA3D9EB1E (void);
// 0x000002C8 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SoftplusInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SoftplusInnerLoop_mE279CE2E6081BBB4990FD5217EB0FA9666780274 (void);
// 0x000002C9 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sigmoid_m8C8734F461206D0A2A5F65DE4179DAFB09A74C5D (void);
// 0x000002CA System.Void Unity.Barracuda.UnsafeArrayCPUOps::SigmoidInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SigmoidInnerLoop_mD4A67752FB567DDFDBB14371C18611042BE1C348 (void);
// 0x000002CB Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Swish(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Swish_m45828B553276FAC8AA1E13B263AD16DC3FD23163 (void);
// 0x000002CC System.Void Unity.Barracuda.UnsafeArrayCPUOps::SwishInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SwishInnerLoop_m9CDC66486D491FD4618C76047C9154C208EC9CB4 (void);
// 0x000002CD Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Exp(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Exp_m739D2C97D32D906D1998B6FF96542716F00B8908 (void);
// 0x000002CE System.Void Unity.Barracuda.UnsafeArrayCPUOps::ExpInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_ExpInnerLoop_m37D40A4FAC59A468730044DC6773A5DC7629CD9C (void);
// 0x000002CF Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sqrt_mA8B0FB9E5ED29890FD156501487C391F3040A6CA (void);
// 0x000002D0 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SqrtInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SqrtInnerLoop_m2CEBFE05B848755EB12C48DFD396E7205CDC5ACB (void);
// 0x000002D1 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Tanh_m4839A4CADB03CC46AB419D73D746B92FAB9C246E (void);
// 0x000002D2 System.Void Unity.Barracuda.UnsafeArrayCPUOps::TanhInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_TanhInnerLoop_m7B8D7C56227F9BCC3B1C187F5EF6A5A5247E61EF (void);
// 0x000002D3 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Acos(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Acos_m9239E73248620D97B944437C7993CEECA6574A2F (void);
// 0x000002D4 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AcosInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AcosInnerLoop_mE0CDB9533E38CE347087B0E0F8B1AE8A61E360AC (void);
// 0x000002D5 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Acosh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Acosh_mCF2238FFF3A11F70A87ED578C5B72CEBFEE0D02C (void);
// 0x000002D6 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AcoshInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AcoshInnerLoop_mBF74D6DC185508C952F8FE0FFB8B977E41DE31FB (void);
// 0x000002D7 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Asin(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Asin_mD5CF4C69E4137EE88A0567333CC4DD8E415A6099 (void);
// 0x000002D8 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AsinInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AsinInnerLoop_m8F9908EF7781D8B81A9D2E2BBD04744B4C287163 (void);
// 0x000002D9 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Asinh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Asinh_m0594B5D29C43DB289ACB181C12B217A27A416CFA (void);
// 0x000002DA System.Void Unity.Barracuda.UnsafeArrayCPUOps::AsinhInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AsinhInnerLoop_m2E11971A02E5568D9DC1D8C5CF43E03F87FAB85D (void);
// 0x000002DB Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Atan(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Atan_mCF62F81B42FBCA14683CC2FB7432D0FCA601F2C5 (void);
// 0x000002DC System.Void Unity.Barracuda.UnsafeArrayCPUOps::AtanInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AtanInnerLoop_mCCF9BF362D8F16D679E09C6ED37BF2B973233B76 (void);
// 0x000002DD Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Atanh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Atanh_mAE1DD6C8996379DFCD1B019273B79BCC997211E1 (void);
// 0x000002DE System.Void Unity.Barracuda.UnsafeArrayCPUOps::AtanhInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_AtanhInnerLoop_m6C0A851D520C3C7E458E1FB2BA174E3C347C5CE7 (void);
// 0x000002DF Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Cos(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Cos_m4E2C40E23180BB6C3A874BE43F6C1D97C6F1ED17 (void);
// 0x000002E0 System.Void Unity.Barracuda.UnsafeArrayCPUOps::CosInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_CosInnerLoop_mEDBB5106B465450488B7D9EEA14C748F6384B286 (void);
// 0x000002E1 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Cosh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Cosh_m1D3FF6F22379C6AF40C50267D2FC7975619FBF70 (void);
// 0x000002E2 System.Void Unity.Barracuda.UnsafeArrayCPUOps::CoshInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_CoshInnerLoop_m045132C78F55E6A21EE62651978E115214DBCE4B (void);
// 0x000002E3 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sin(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sin_mE660CC77C4E724A3F57735B2476271D31B6D317D (void);
// 0x000002E4 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SinInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SinInnerLoop_m4B813A12085521B210614AEE1815AF4C812B454A (void);
// 0x000002E5 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sinh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sinh_m2E69651C85D97C23FBBE3C710BC391F7D6C9E0CF (void);
// 0x000002E6 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SinhInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SinhInnerLoop_mD7CB993437D3EC507767389E3299C6E62E71509E (void);
// 0x000002E7 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Tan(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Tan_mC4D0579956E1CCBF4D5361BBB7BD7F339119EFCA (void);
// 0x000002E8 System.Void Unity.Barracuda.UnsafeArrayCPUOps::TanInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_TanInnerLoop_mF8F134BA41A43B6763E2E67F8DF1E408C8285207 (void);
// 0x000002E9 System.Boolean Unity.Barracuda.UnsafeArrayCPUOps::CanUseModuloForBroadcasting(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CanUseModuloForBroadcasting_mA631704C465418A3C65625697D4A83AA9B5FC750 (void);
// 0x000002EA System.Boolean Unity.Barracuda.UnsafeArrayCPUOps::CanUseModuloForBroadcasting(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CanUseModuloForBroadcasting_m52789FD469A00F327F9A33DCD6EE87F8593E866B (void);
// 0x000002EB Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyElementwiseWithBroadcast(Unity.Barracuda.Tensor[],System.Func`3<System.Single,System.Single,System.Single>,System.Action`1<System.Int64>,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyElementwiseWithBroadcast_m3F67AB2A8083C68017436FEADA413193023523F2 (void);
// 0x000002EC Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Add(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Add_mFF29FC5E3DBFFECBDC69D9CB63924BD6F7871521 (void);
// 0x000002ED Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Sub_m254F351273DD7E01AB671ECF895209EFEBAD0F86 (void);
// 0x000002EE Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Mul_mB49582B098178F0E9859C9661F646E3C71AD9393 (void);
// 0x000002EF Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Div(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Div_m1584059267DA73385E2623B4A53B0F15A154C829 (void);
// 0x000002F0 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Min(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Min_mECAA12FB4B7646A97E974EDEAE4E3F61B58C8447 (void);
// 0x000002F1 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Max(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Max_m1303B54425BEB44BE573BD9AA6EE4A351D2E3759 (void);
// 0x000002F2 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Greater_m0A9D94460B3D953A951E41275EC0E6EDF877A999 (void);
// 0x000002F3 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GreaterEqual_m827505ADB854939C3F817041A3B9E83292CF0C31 (void);
// 0x000002F4 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Less_m15D91F721F99E8D406D265F053FA325EA2631313 (void);
// 0x000002F5 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LessEqual_mBA4C63652464E00F3C8300DE52B0C6026674276F (void);
// 0x000002F6 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Equal_m5810881556FD33D8460C266A7F510C72B50BE811 (void);
// 0x000002F7 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalOr_mEE059B8D31AC527A9E52A7E755C4E0523A4DC3BB (void);
// 0x000002F8 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalAnd_m621F950E215381A3883524CA891ADC2EB775FF44 (void);
// 0x000002F9 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalXor_m062B2B157887FB3AC9A3FD1E6A5A220D8585A6C9 (void);
// 0x000002FA Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalNot(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalNot_m241B2A794188DCD9168CA82F2128FCAAC3DEDC1E (void);
// 0x000002FB Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Where_mDB5C471809783CBEAFB2F64920E94AC812712C13 (void);
// 0x000002FC Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyLogicalOperator(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Func`3<System.Single,System.Single,System.Single>,System.Action`1<System.Int64>,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyLogicalOperator_m31E13BD7C342F42E44E05EAE8EEF88B5F9ACAC58 (void);
// 0x000002FD Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void UnsafeArrayCPUOps_MatMul_mFD4848A30D62D0AE2E7900EAA20AA19579063D2A (void);
// 0x000002FE Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void UnsafeArrayCPUOps_Dense_m0D226015D8D23F586F7CBA77D157E58DFDE4C134 (void);
// 0x000002FF Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyFusedActivation(Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void UnsafeArrayCPUOps_ApplyFusedActivation_m5B6C3F39AC831C5B62E5B42EF05D711599A9AEB2 (void);
// 0x00000300 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_MaxPool2D_m27318A53DC198658F943D9941234F032C58C7765 (void);
// 0x00000301 System.Void Unity.Barracuda.UnsafeArrayCPUOps::MaxPool2DInnerLoop(System.Int32[],System.Int32[],System.Int32[],System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_MaxPool2DInnerLoop_m7B7CAC4479616AF48C9AFC9BBABD3ECCB2E115D8 (void);
// 0x00000302 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_AvgPool2D_m54F88520A6DDC51061848E12B759F85B08E30957 (void);
// 0x00000303 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AvgPool2DInnerLoop(System.Int32[],System.Int32[],System.Int32[],System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_AvgPool2DInnerLoop_m8105F575CB387754B10111733BAD3ACD024B4C54 (void);
// 0x00000304 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GlobalMaxPool2D_m22AF46566B85116E24E7FC417FD350A6AF096113 (void);
// 0x00000305 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GlobalAvgPool2D_m91133928115BE52CA9C93B18FC8447692E77C94B (void);
// 0x00000306 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void UnsafeArrayCPUOps_Conv2D_mA97AE69DA9CFAAAA42288417A0960558D64CB853 (void);
// 0x00000307 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2DUsingIm2Col(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_Conv2DUsingIm2Col_m9530E732DDC8AD83AE175402F1C3F6EE9104E195 (void);
// 0x00000308 System.Void Unity.Barracuda.UnsafeArrayCPUOps::Im2ColInnerLoop(System.Int32[],System.Int32[],System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_Im2ColInnerLoop_m019B137F18A6DCABB363FA02043D122FEC55DA85 (void);
// 0x00000309 System.Int32 Unity.Barracuda.UnsafeArrayCPUOps::SafeIntDivCeil(System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_SafeIntDivCeil_mEC907DE1E20A65FA1E14E8FB94EEEAE36FEB2C6B (void);
// 0x0000030A Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2DUsingIm2ColSliced(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_Conv2DUsingIm2ColSliced_m2A48DAF0341D2D5C711DA383FF987B71F5239A96 (void);
// 0x0000030B Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void UnsafeArrayCPUOps_DepthwiseConv2D_mFA59ED343AF9959D1B8283B6BB9EAC83DD946948 (void);
// 0x0000030C System.Void Unity.Barracuda.UnsafeArrayCPUOps::DepthwiseConv2DInnerLoop(System.Int32[],System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_DepthwiseConv2DInnerLoop_mEB2AC0AD65754AA6915649F6FF9F01271F753647 (void);
// 0x0000030D Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.Single,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyPadding_m98494260DC9A6DDA3B78517BDD281BE12E7008C5 (void);
// 0x0000030E Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void UnsafeArrayCPUOps_Border2D_m059FAE78F926A4739137504B4A6F8C579A8DB783 (void);
// 0x0000030F Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DEdge_m0D8D2827435A3672FB8CC834C8E17B008818B4ED (void);
// 0x00000310 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DReflect_m8619A3A0376C1419F5BBA5987B5868A42C26397E (void);
// 0x00000311 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DSymmetric_m5131C93A5C8C41F44C8316A9ED8D547025F102D8 (void);
// 0x00000312 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CopyAndReshape_m2B196DBCDC78DEADDAEB4D2BC2EC62E5C7AFA8B8 (void);
// 0x00000313 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_ScaleBias_mBF7394FF1DA69F5189F6EACA4A26F0777DA0A3F4 (void);
// 0x00000314 System.Void Unity.Barracuda.UnsafeArrayCPUOps::ScaleBiasInnerLoop(System.Int32,System.Int32,System.Single*,System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32)
extern void UnsafeArrayCPUOps_ScaleBiasInnerLoop_mA6C6D4AFC6B356C7D61D09B7B9FCC98C0FD3280F (void);
// 0x00000315 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Prepare_m6A2A980F58731B008484B81849BF4D80A97E3E5D (void);
// 0x00000316 System.Void Unity.Barracuda.InnerLoop::.ctor()
extern void InnerLoop__ctor_m90AA8AAE1B929E3139213504B0AF58FF692CA5EC (void);
// 0x00000317 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void InnerLoop_SetState_m5A8D6C900B8A7DA550536CA0675C6D3B611B1F72 (void);
// 0x00000318 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void InnerLoop_SetState_mF2DD4BEAB7006E6058277C99069192A48F1CC76B (void);
// 0x00000319 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32,System.Single*,System.Int32)
extern void InnerLoop_SetState_m375B856F5658F5DC6029669F2C1384B4B51669E6 (void);
// 0x0000031A System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32)
extern void InnerLoop_SetState_m1ACF53DED6FA7457A345DD2E02DF6AA1C4A1E686 (void);
// 0x0000031B System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*)
extern void InnerLoop_SetState_m4BE1BCD59DF1A45950CF139531AAE3E24E6A609B (void);
// 0x0000031C System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,System.Single*)
extern void InnerLoop_SetState_m0024C8971FECDEE3F3872861CD38CC34C950717D (void);
// 0x0000031D System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*)
extern void InnerLoop_SetState_m90A0A7FCABA34854BC9EC1D19CF6887CAA6779B8 (void);
// 0x0000031E System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single)
extern void InnerLoop_SetState_m30D2B210D89D7ABB90DB487B2689DAC46D9225C5 (void);
// 0x0000031F System.Void Unity.Barracuda.InnerLoop::SetState(System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Single,System.Int32,System.Int32)
extern void InnerLoop_SetState_mE02250E3E1F5CB3252C599A783C1DC755DB0082D (void);
// 0x00000320 System.Void Unity.Barracuda.InnerLoop::NegInnerLoop(System.Int64)
extern void InnerLoop_NegInnerLoop_m99E7DAF422FEB3E37EC22B9CBEB4A600B85A3D2B (void);
// 0x00000321 System.Void Unity.Barracuda.InnerLoop::ReluInnerLoop(System.Int64)
extern void InnerLoop_ReluInnerLoop_mAE8BA0F5E0F3EF884FDF893055D6E32F17E1259F (void);
// 0x00000322 System.Void Unity.Barracuda.InnerLoop::Relu6InnerLoop(System.Int64)
extern void InnerLoop_Relu6InnerLoop_m4B8257239DF0C791704820401930E5BFC90E107E (void);
// 0x00000323 System.Void Unity.Barracuda.InnerLoop::LeakyReluInnerLoop(System.Int64)
extern void InnerLoop_LeakyReluInnerLoop_m55D92177CFFFF94845F730F2B155AA22D1323AD3 (void);
// 0x00000324 System.Void Unity.Barracuda.InnerLoop::EluInnerLoop(System.Int64)
extern void InnerLoop_EluInnerLoop_m1671C512CF9B16DF4DC1B4686535744AA255E614 (void);
// 0x00000325 System.Void Unity.Barracuda.InnerLoop::PReluInnerLoop(System.Int64)
extern void InnerLoop_PReluInnerLoop_m72B4650872C5D1697A1D59CECF1AF29B6FD83402 (void);
// 0x00000326 System.Void Unity.Barracuda.InnerLoop::SoftplusInnerLoop(System.Int64)
extern void InnerLoop_SoftplusInnerLoop_m44895086D58C8B70DDB1BA03E7AD18B33532BAFB (void);
// 0x00000327 System.Void Unity.Barracuda.InnerLoop::SigmoidInnerLoop(System.Int64)
extern void InnerLoop_SigmoidInnerLoop_mABCBE499F46FF611D86286ACD505739370D7C2E1 (void);
// 0x00000328 System.Void Unity.Barracuda.InnerLoop::SwishInnerLoop(System.Int64)
extern void InnerLoop_SwishInnerLoop_mFAEBBCE3707039F5F2FF62EC2C88C0877451FE77 (void);
// 0x00000329 System.Void Unity.Barracuda.InnerLoop::ExpInnerLoop(System.Int64)
extern void InnerLoop_ExpInnerLoop_m9D39A61F14DA9472DB7712F0CF843D511C0D7D99 (void);
// 0x0000032A System.Void Unity.Barracuda.InnerLoop::SqrtInnerLoop(System.Int64)
extern void InnerLoop_SqrtInnerLoop_m05C41F4A145C5ECCE4341F6772597B0A6295C184 (void);
// 0x0000032B System.Void Unity.Barracuda.InnerLoop::TanhInnerLoop(System.Int64)
extern void InnerLoop_TanhInnerLoop_m98C8873738F3DB44C292841456F17BAE73F93B23 (void);
// 0x0000032C System.Void Unity.Barracuda.InnerLoop::AcosInnerLoop(System.Int64)
extern void InnerLoop_AcosInnerLoop_m2705B7098B1D774695F0C72EC89DD59601FAE4FE (void);
// 0x0000032D System.Void Unity.Barracuda.InnerLoop::AcoshInnerLoop(System.Int64)
extern void InnerLoop_AcoshInnerLoop_m27FB1B3A76B4A5FAA622DBACEE149DAF22027DCD (void);
// 0x0000032E System.Void Unity.Barracuda.InnerLoop::AsinInnerLoop(System.Int64)
extern void InnerLoop_AsinInnerLoop_m39D2D500A3A52F2634DC8D2DF4ADF2ED75B028A3 (void);
// 0x0000032F System.Void Unity.Barracuda.InnerLoop::AsinhInnerLoop(System.Int64)
extern void InnerLoop_AsinhInnerLoop_mC264F526724B906B3B8594DF522E950E70D92E44 (void);
// 0x00000330 System.Void Unity.Barracuda.InnerLoop::AtanInnerLoop(System.Int64)
extern void InnerLoop_AtanInnerLoop_mDE0401415498D9A7F587E570D01C64A2665C65F3 (void);
// 0x00000331 System.Void Unity.Barracuda.InnerLoop::AtanhInnerLoop(System.Int64)
extern void InnerLoop_AtanhInnerLoop_mF4F3B234691E96729D183EA166D7A8B724980ABD (void);
// 0x00000332 System.Void Unity.Barracuda.InnerLoop::CosInnerLoop(System.Int64)
extern void InnerLoop_CosInnerLoop_m7B41C8B2AA3BC55EAA86B28884E96770A4CEA0A2 (void);
// 0x00000333 System.Void Unity.Barracuda.InnerLoop::CoshInnerLoop(System.Int64)
extern void InnerLoop_CoshInnerLoop_mD6EB5F15324C9B7734EDAB5EB621CF331DE431DD (void);
// 0x00000334 System.Void Unity.Barracuda.InnerLoop::SinInnerLoop(System.Int64)
extern void InnerLoop_SinInnerLoop_m989C8680D5EFC0DC632C1EE94368EE3A558F6BCF (void);
// 0x00000335 System.Void Unity.Barracuda.InnerLoop::SinhInnerLoop(System.Int64)
extern void InnerLoop_SinhInnerLoop_mC52F602C70BEB213E9E4854C1EE8778B7C1CB06B (void);
// 0x00000336 System.Void Unity.Barracuda.InnerLoop::TanInnerLoop(System.Int64)
extern void InnerLoop_TanInnerLoop_mE083E008BF14AEFACDC70EBE0321D15216802D3E (void);
// 0x00000337 System.Void Unity.Barracuda.InnerLoop::AddInnerLoop(System.Int64)
extern void InnerLoop_AddInnerLoop_m4B87635A55FA222A786C5054F921E1BD62832874 (void);
// 0x00000338 System.Void Unity.Barracuda.InnerLoop::SubInnerLoop(System.Int64)
extern void InnerLoop_SubInnerLoop_mD9BAF08AAED8C375866C235A8634C8113C0F0B5F (void);
// 0x00000339 System.Void Unity.Barracuda.InnerLoop::MulInnerLoop(System.Int64)
extern void InnerLoop_MulInnerLoop_mE1E163129F2CF2D77A68D4ED293525A0C09B0E54 (void);
// 0x0000033A System.Void Unity.Barracuda.InnerLoop::DivInnerLoop(System.Int64)
extern void InnerLoop_DivInnerLoop_mB0D76BDAC01FF9231574DB06F0AC0AAB2927E046 (void);
// 0x0000033B System.Void Unity.Barracuda.InnerLoop::MinInnerLoop(System.Int64)
extern void InnerLoop_MinInnerLoop_mB9D104A2AF99E8638EE3702ED426180666FCFDDF (void);
// 0x0000033C System.Void Unity.Barracuda.InnerLoop::MaxInnerLoop(System.Int64)
extern void InnerLoop_MaxInnerLoop_mF425DBC8C292F7D379E6DC880A1863E093E5D49C (void);
// 0x0000033D System.Void Unity.Barracuda.InnerLoop::GreaterInnerLoop(System.Int64)
extern void InnerLoop_GreaterInnerLoop_mC478C5583C0A63F5DCAF9C5050B64B1BBF7FD08D (void);
// 0x0000033E System.Void Unity.Barracuda.InnerLoop::GreaterEqualInnerLoop(System.Int64)
extern void InnerLoop_GreaterEqualInnerLoop_mE7F004EC55A03ABD46B461A7E2B375F261F7589B (void);
// 0x0000033F System.Void Unity.Barracuda.InnerLoop::LessInnerLoop(System.Int64)
extern void InnerLoop_LessInnerLoop_m15A352D8320140FC6964C560BB7193DF5A5FDB07 (void);
// 0x00000340 System.Void Unity.Barracuda.InnerLoop::LessEqualInnerLoop(System.Int64)
extern void InnerLoop_LessEqualInnerLoop_m09EF4C324FCD38D9391D4EB4851E64EB3805730F (void);
// 0x00000341 System.Void Unity.Barracuda.InnerLoop::EqualInnerLoop(System.Int64)
extern void InnerLoop_EqualInnerLoop_m62448FED1822C9FC3B8157FFFC40CF5D6F9E50E3 (void);
// 0x00000342 System.Void Unity.Barracuda.InnerLoop::LogicalOrInnerLoop(System.Int64)
extern void InnerLoop_LogicalOrInnerLoop_mB01FD048B38C17288557C758056454B7FDAE7903 (void);
// 0x00000343 System.Void Unity.Barracuda.InnerLoop::LogicalAndInnerLoop(System.Int64)
extern void InnerLoop_LogicalAndInnerLoop_m26727D5025664C97A276F3B1C4695A4B0251036E (void);
// 0x00000344 System.Void Unity.Barracuda.InnerLoop::LogicalXorInnerLoop(System.Int64)
extern void InnerLoop_LogicalXorInnerLoop_m0027F654F7FDFE0401C414BAC2AFA6F748A2B3EF (void);
// 0x00000345 System.Void Unity.Barracuda.InnerLoop::WhereInnerLoop(System.Int64)
extern void InnerLoop_WhereInnerLoop_m207F368F0C629C539BDED0A4123E60174BBC3027 (void);
// 0x00000346 System.Void Unity.Barracuda.InnerLoop::AddInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_AddInnerLoopNoBroadcast_m3D9FCEDBCEA35BE33834785E61E0D63B96435D8F (void);
// 0x00000347 System.Void Unity.Barracuda.InnerLoop::SubInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_SubInnerLoopNoBroadcast_mF91FCB6073CB6C61CA653FE87E14D5AB3ADEB109 (void);
// 0x00000348 System.Void Unity.Barracuda.InnerLoop::MulInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MulInnerLoopNoBroadcast_mC3CCD66DC9AAC253B03151A740DFF8E165AEA556 (void);
// 0x00000349 System.Void Unity.Barracuda.InnerLoop::DivInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_DivInnerLoopNoBroadcast_mBCAF96DC9493A6A34DD32D9C74118464ABB5384D (void);
// 0x0000034A System.Void Unity.Barracuda.InnerLoop::MinInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MinInnerLoopNoBroadcast_mA0BBD67D8FD543A39415E40EE2ED8CCC82A61263 (void);
// 0x0000034B System.Void Unity.Barracuda.InnerLoop::MaxInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MaxInnerLoopNoBroadcast_m96AE447E19018F7E70DD4F6F8C005E95D89399C5 (void);
// 0x0000034C System.Void Unity.Barracuda.InnerLoop::GreaterInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_GreaterInnerLoopNoBroadcast_m90F21C8F48432CB90DA44A2E4BF5DCEC2A19FFF5 (void);
// 0x0000034D System.Void Unity.Barracuda.InnerLoop::GreaterEqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_GreaterEqualInnerLoopNoBroadcast_mD0637D406AE9B54ABADD3A1202A47FD67D1EF35D (void);
// 0x0000034E System.Void Unity.Barracuda.InnerLoop::LessInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LessInnerLoopNoBroadcast_m4EF971DEBC22532E3B1B1600AC5A1E7E916A8B28 (void);
// 0x0000034F System.Void Unity.Barracuda.InnerLoop::LessEqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LessEqualInnerLoopNoBroadcast_m98A5421F8D02937277D371CFD90772AA158C7B07 (void);
// 0x00000350 System.Void Unity.Barracuda.InnerLoop::EqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_EqualInnerLoopNoBroadcast_mF87FDC22BBB33916D2ECF46EFA915D86CA228416 (void);
// 0x00000351 System.Void Unity.Barracuda.InnerLoop::LogicalOrInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalOrInnerLoopNoBroadcast_m24A7D03DE7B08275983AB0D92B626E307E349F90 (void);
// 0x00000352 System.Void Unity.Barracuda.InnerLoop::LogicalAndInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalAndInnerLoopNoBroadcast_m62D0D6AE0CB9A421A3348E21F2CB2EB0EACF04F5 (void);
// 0x00000353 System.Void Unity.Barracuda.InnerLoop::LogicalXorInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalXorInnerLoopNoBroadcast_mA3D78F9C5F40CD20E0E2B9DB856E15FC8FE4301C (void);
// 0x00000354 System.Void Unity.Barracuda.InnerLoop::LogicalNotInnerLoop(System.Int64)
extern void InnerLoop_LogicalNotInnerLoop_mE4198B63C58DB77033288AF4EA89F2A26B98316A (void);
// 0x00000355 System.Void Unity.Barracuda.InnerLoop::WhereInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_WhereInnerLoopNoBroadcast_mFF3A30F1DD1ECC9AEFA6CA5511EBFD9460200E21 (void);
// 0x00000356 System.Void Unity.Barracuda.InnerLoop::ClampHWToTensorShape(Unity.Barracuda.TensorShape,System.Int32&,System.Int32&)
extern void InnerLoop_ClampHWToTensorShape_m01D6B38AD0344A35F000D4375B76A51A9848D13E (void);
// 0x00000357 System.Void Unity.Barracuda.InnerLoop::Border2DInnerLoop(System.Int64)
extern void InnerLoop_Border2DInnerLoop_m6005DEDAC6E30A0798BE8207467DCD79E015429F (void);
// 0x00000358 System.Void Unity.Barracuda.InnerLoop::Pad2DEdgeInnerLoop(System.Int64)
extern void InnerLoop_Pad2DEdgeInnerLoop_mD8180A9E50681037FE5E9EF7C51B160BC133303A (void);
// 0x00000359 System.Void Unity.Barracuda.InnerLoop::Pad2DReflectInnerLoop(System.Int64)
extern void InnerLoop_Pad2DReflectInnerLoop_m89AE17EE73F82B55C4F98C3020C3ACAE6E2D199E (void);
// 0x0000035A System.Void Unity.Barracuda.InnerLoop::Pad2DSymmetricInnerLoop(System.Int64)
extern void InnerLoop_Pad2DSymmetricInnerLoop_mE56C881AD0F1298E82456BF1256F53131D63ECAF (void);
// 0x0000035B System.Void Unity.Barracuda.InnerLoop::ScaleBiasInnerLoop(System.Int64)
extern void InnerLoop_ScaleBiasInnerLoop_mF6F1AA45F7403B99C3196E271157DB271C7C430D (void);
// 0x0000035C System.Single Unity.Barracuda.InnerLoop::Add(System.Single,System.Single)
extern void InnerLoop_Add_mB579CAD1F4EB5BED80BFBCC078B56C8BEF605DA3 (void);
// 0x0000035D System.Single Unity.Barracuda.InnerLoop::Sub(System.Single,System.Single)
extern void InnerLoop_Sub_mF1D806C3357D5681F080DC9E6C763A9102EE0800 (void);
// 0x0000035E System.Single Unity.Barracuda.InnerLoop::Mul(System.Single,System.Single)
extern void InnerLoop_Mul_m2829964732800D56D74532BC16C3932B85CDD2D4 (void);
// 0x0000035F System.Single Unity.Barracuda.InnerLoop::Div(System.Single,System.Single)
extern void InnerLoop_Div_mB50D78CBDC8FB8D31ABE4778E4C544605F1C6CE2 (void);
// 0x00000360 System.Single Unity.Barracuda.InnerLoop::Min(System.Single,System.Single)
extern void InnerLoop_Min_mBA61FE26C30AF9CE2F4DA357B119B71D1EA7EBDE (void);
// 0x00000361 System.Single Unity.Barracuda.InnerLoop::Max(System.Single,System.Single)
extern void InnerLoop_Max_mBD7A3391E2C8A1FF8BA5549007FD82C8EEF0866D (void);
// 0x00000362 System.Single Unity.Barracuda.InnerLoop::Greater(System.Single,System.Single)
extern void InnerLoop_Greater_m7D09A04069FF5B18E5CF01E198BCF6FFA6D82C57 (void);
// 0x00000363 System.Single Unity.Barracuda.InnerLoop::GreaterEqual(System.Single,System.Single)
extern void InnerLoop_GreaterEqual_m57726CF3DDC275AD4E0F1E41D55C8C3A7ABC1BAF (void);
// 0x00000364 System.Single Unity.Barracuda.InnerLoop::Less(System.Single,System.Single)
extern void InnerLoop_Less_mBBA88912C8E84E691BF6526F52B8F9283586D6D1 (void);
// 0x00000365 System.Single Unity.Barracuda.InnerLoop::LessEqual(System.Single,System.Single)
extern void InnerLoop_LessEqual_m0D9A07697D76E3EBD9B1B4CEBD259968A2FC3F9F (void);
// 0x00000366 System.Single Unity.Barracuda.InnerLoop::Equal(System.Single,System.Single)
extern void InnerLoop_Equal_m3254D9F7F097AA120AEBEE133F00804D4D558BD0 (void);
// 0x00000367 System.Single Unity.Barracuda.InnerLoop::LogicalOr(System.Single,System.Single)
extern void InnerLoop_LogicalOr_m805022A7735B812959439FFC05B106E6A8635591 (void);
// 0x00000368 System.Single Unity.Barracuda.InnerLoop::LogicalAnd(System.Single,System.Single)
extern void InnerLoop_LogicalAnd_m12AFD5CBC8A071C51121F5D0A9177532E64B2635 (void);
// 0x00000369 System.Single Unity.Barracuda.InnerLoop::LogicalXor(System.Single,System.Single)
extern void InnerLoop_LogicalXor_m72BA620BEA66D6801567EFCC7A960A71DAF98680 (void);
// 0x0000036A System.Single Unity.Barracuda.InnerLoop::LogicalNot(System.Single)
extern void InnerLoop_LogicalNot_mC467DE3D1833E3ECF7B395F65CA4F87EFB76F4AF (void);
// 0x0000036B System.Single Unity.Barracuda.InnerLoop::Where(System.Single,System.Single,System.Single)
extern void InnerLoop_Where_m4D568DB64BE8E78F91DF9FD5766F0B959B891B7B (void);
// 0x0000036C System.Void Unity.Barracuda.CompareOps::.ctor(Unity.Barracuda.IOps,Unity.Barracuda.IOps,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single)
extern void CompareOps__ctor_mD0513A39E93C08BF8A7870174C860F18ADFC3287 (void);
// 0x0000036D System.Void Unity.Barracuda.CompareOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void CompareOps_PrepareModel_mEEF4F3B7A88621BF70B80FB62A5EA1948876B386 (void);
// 0x0000036E System.Void Unity.Barracuda.CompareOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void CompareOps_PreExecuteLayer_m0059124D01F1DF5B803E36816EC9FF796A93210C (void);
// 0x0000036F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_MatMul_m47D4A7B36FB6F94E7F3BE295ADFDE1E385CA2097 (void);
// 0x00000370 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_MatMul_m6769B4266AC5265D93EACF6FEECDF7463B7905FD (void);
// 0x00000371 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Dense_mCD559B544E8AD5CD5E9088DBF235FC9008004971 (void);
// 0x00000372 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Conv2D_m706901DE9D1BB8E0E1CCECF7F442B995E3E43A88 (void);
// 0x00000373 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Conv3D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Conv3D_mA1D3BA83888440B3BED9DB5C1B357F83A786269C (void);
// 0x00000374 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_DepthwiseConv2D_m64071064DB035DF81DBEB3B2FCDC967501D62411 (void);
// 0x00000375 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Conv2DTrans_mA013A9C72C875E949DE757FE28822396311E0EC8 (void);
// 0x00000376 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_Upsample2D_mC01573EC2E4883ADB7B9F60F6415BCBCE4D228FD (void);
// 0x00000377 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Upsample3D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_Upsample3D_m11F7B9CF46EC84B4C64AAB727E3624739C86F8BF (void);
// 0x00000378 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_Resample2D_mDB9A51D8A3C20D4327B26AF32377C55713EC1D8B (void);
// 0x00000379 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void CompareOps_Unity_Barracuda_IOps_DepthToSpace_m6F58B10AA91B3E4FC5A50BCDE0FD791227B43FC9 (void);
// 0x0000037A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_SpaceToDepth_m16C621B6ECF7A0227E75C4F8FC7BD1E9DD13DC25 (void);
// 0x0000037B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_MaxPool2D_m33860BBA6C8E43D0B12EE2F02F7E5B6F6368B228 (void);
// 0x0000037C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_AvgPool2D_m50876AB22BA85E9B97891E6AD4989D1DA8F82118 (void);
// 0x0000037D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalMaxPool2D_mC61CB69F06E816DC8F4399D9E6F5D75C04C41666 (void);
// 0x0000037E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m0DAD3906B8FA7D4A5AC298962879BFCE5AFFA106 (void);
// 0x0000037F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_mEAA8327BC027C091A93ADFEF1B0B15C0178425D6 (void);
// 0x00000380 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Border2D_mE293736FC4E548F76B31EF3169F1C8638FF940DA (void);
// 0x00000381 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Border3D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Border3D_m31DE398337D47BCE7DCA28DC814854DE07662DDE (void);
// 0x00000382 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DReflect_m982A1951BC5816943AC54BC8C4FEBD2CBE9A3377 (void);
// 0x00000383 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DSymmetric_mD5A2E1FDE1474E9B6AC8FF2EE2A55CA2D9FDED69 (void);
// 0x00000384 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DEdge_mA2ABC4A69778FDD8053477C59ED2D3F642299450 (void);
// 0x00000385 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_ScaleBias_m9FB9BAC991FB6EC42CA94448359327DFD2F2C4F4 (void);
// 0x00000386 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Normalization_m83CE3C6C0D96D6B380794A77CD86DF82C372B952 (void);
// 0x00000387 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_LRN_mF6700A8BF4105FFA61A51752B9D999FFBC689840 (void);
// 0x00000388 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Dropout_mE8E64BB419441CFDC463A8B6BC2C1ADA35E2E327 (void);
// 0x00000389 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_RandomNormal_mDB3231D58D838BB64CC39B929CFA22086C12F48F (void);
// 0x0000038A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_RandomUniform_mB7743AEC902935278DE56ECE52E938B3636BC4F3 (void);
// 0x0000038B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Multinomial_m47F445DB46D8F6CD121137C2CAB3E0EB77170037 (void);
// 0x0000038C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_OneHot_m6969468DC09304D6FE236D6600A56F2001E0383C (void);
// 0x0000038D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_TopKIndices_mF465CDB4434A265398E577839225FF4DEAD045CC (void);
// 0x0000038E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_TopKValues_m8A13CFD4BA53E348BA39437770F859A462367D1A (void);
// 0x0000038F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::NonZero(Unity.Barracuda.Tensor)
extern void CompareOps_NonZero_m7B22C8BE58F0D5D7918D830BB688C0BB56BF3779 (void);
// 0x00000390 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Relu_m0E6B0B10FEB41E6E25F5A868BA40B1F2BCA89306 (void);
// 0x00000391 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Softmax_m17E16D8589A876B0E71F9CCDCE0DB334627EBA64 (void);
// 0x00000392 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogSoftmax_mA926ADF06D7BA77067C368C7C535FA52CDD6EC20 (void);
// 0x00000393 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Tanh_m8E023B22FEC3C3CFF95516D7F8C34A6D63D9F9DC (void);
// 0x00000394 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Softplus(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Softplus_m2B4E6537CB1855E483590028595D64C51B945DD4 (void);
// 0x00000395 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sigmoid_m02FAFB0EDCB45F83EB2935C7EFFC01287FBC50CF (void);
// 0x00000396 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Elu_m82856E3B4F5FDC8C6A3B36A28C02FEB071D273DE (void);
// 0x00000397 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Relu6_m59E438532B106D0D80429F6E086B6BB6AD809AFE (void);
// 0x00000398 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_LeakyRelu_m6D748EC797C437392A9829AC64DB861980AD1C3D (void);
// 0x00000399 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Selu_mC39C86D9BF1509383F099B2C08A271199A65F02A (void);
// 0x0000039A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_PRelu_m70A51D51ED5B118CDD38D0697F9B8FB3F1D135FB (void);
// 0x0000039B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Swish_m8662040F0FAB487B081C01A0EC488B8A26A833F3 (void);
// 0x0000039C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Abs_m703D3BCACCA0F14A8F4CBDB4C9CE3C0252E27E21 (void);
// 0x0000039D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Neg_mC36E0D21A7405C96B0F13D37B92F3896900352C6 (void);
// 0x0000039E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Ceil_mBF6ED3C73FFD42229B338DCE593F04ABE4487917 (void);
// 0x0000039F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Clip_m23B24083040B38CCD464FFFA49A592289336D44D (void);
// 0x000003A0 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Floor_mE1C043A9D88D9C27034ED370F6C9F01366166EF3 (void);
// 0x000003A1 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Reciprocal_m5BABCBAF1237EBA0CDB53DC1DA27CFA620D49131 (void);
// 0x000003A2 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Pow_mAAEDAFB799C7EBFF2011BF4C896610749F6469B5 (void);
// 0x000003A3 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Exp_m53B4614C3C577AC3D17A9178F51886453B5148B9 (void);
// 0x000003A4 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Log_m3BD7BC31AF4017F67EDA65DF45710678F29B920C (void);
// 0x000003A5 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sqrt_m765B1DC1E503628DC197F3EDC8E9CEDFC9C825D2 (void);
// 0x000003A6 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Acos(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Acos_mC37AF9D4354D1E09CCEC52C5CC5859DBA282843B (void);
// 0x000003A7 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Acosh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Acosh_m7FB4A46C45AFB7F151826D3C81DA3A022DAB752B (void);
// 0x000003A8 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Asin(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Asin_mF7A07F17B723CDEE80A157738B4BF766AB28420D (void);
// 0x000003A9 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Asinh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Asinh_mC346B56287770876F5BCB89B20FF6D3C29B3C5CD (void);
// 0x000003AA Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Atan(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Atan_m3649EA87065EDC14C3BDB2E409DD05AAFAE75988 (void);
// 0x000003AB Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Atanh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Atanh_m69BBE77A59F1DE8D324ED632D789048232836C76 (void);
// 0x000003AC Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Cos(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Cos_m4F9DAD24A1BD9B3BC826F2F038F3A660858B37A2 (void);
// 0x000003AD Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Cosh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Cosh_mF6FECE5B8BAC3B4789649BDFACAEB79BE9EFC778 (void);
// 0x000003AE Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sin(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sin_mAA8C2348C84AF0BF6DF08790F5AA7112407F883F (void);
// 0x000003AF Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sinh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sinh_mE93F003179D67BC2637B840C5188060FD3620ED4 (void);
// 0x000003B0 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Tan(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Tan_m170BB3234A71F91E339D4B9026F2291428518F4E (void);
// 0x000003B1 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Add_mF7027E415E1998B50D01CD8346BA26B29A7E5F06 (void);
// 0x000003B2 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Sub_m2434F35B3FEE8B76CBAD5BCED0299ABF39CCA9B1 (void);
// 0x000003B3 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Mul_m87D53C9A570F3C004A8AA6384098CC7D32DAB620 (void);
// 0x000003B4 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Div_m3ECC9ABA6DD163DF0BBD80D887F73A7EC409BF7E (void);
// 0x000003B5 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Pow_m96920E0597BD96A5973587D4F9C3660F233B5A66 (void);
// 0x000003B6 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Min_m3250C3B4439456084A97509D9D8D4FEE6ED7DD6B (void);
// 0x000003B7 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Max_mE9BB6573A8C63535F12DD41575C69269D33B61F0 (void);
// 0x000003B8 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Mean_m8AE25DA5AEDDB493B32FACF1855D6CE7B2B54CDB (void);
// 0x000003B9 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ArgMax_mA1F977C04F06027185984BB490C93F6347D62363 (void);
// 0x000003BA Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ArgMin_m0972F86A2DE29B4C5E716BA70428652D341BFF55 (void);
// 0x000003BB Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMax_m55883E0F8B920E06E1CAB3C96985A145248DA653 (void);
// 0x000003BC Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMean_m0859EA456F573C3C1F931DB880D3703BCB966425 (void);
// 0x000003BD Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMin_m52CB6DA1DB46F5F3697E28BF4CEC90652F209321 (void);
// 0x000003BE Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceProd_m64F7651625021FAF5DF9EC42C5F035F294CBA080 (void);
// 0x000003BF Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceSum_mEECF93F75011033F7DB858862ADB38B16D0E036D (void);
// 0x000003C0 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Greater_mEB64A94D711BE36DF15CAA58824968B015A795F3 (void);
// 0x000003C1 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GreaterEqual_m97D24E43675F3B03FD7FC5A091256B92C37F9163 (void);
// 0x000003C2 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Less_m7D6728A8CA44A3FB62659311259C3028CEC9D62D (void);
// 0x000003C3 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LessEqual_m28B55BFB405F6184564A7CD3EDC9AAE6BBAD79FD (void);
// 0x000003C4 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Equal_mDF85287F1297A74CBDF7E3C8B7FFC916A063A8D1 (void);
// 0x000003C5 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalOr_m22FD4218F4CF2F19AFD0C3951EC00CC44F94F3D0 (void);
// 0x000003C6 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalAnd_mCA126628BFFCC7E7B3BDE86A4918EFC5F69F5DC2 (void);
// 0x000003C7 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalXor_mC874A52DAB261AF2102F4E3130C529B0CCE4473E (void);
// 0x000003C8 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalNot_m66D2F2E52E9F518F572C7822CC8FC62342B49A88 (void);
// 0x000003C9 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Where_m5EB05CF60248D7848FAE00602F3FE042D1169A57 (void);
// 0x000003CA Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Flatten_m450142D087C416E9067A356016826688B67B2097 (void);
// 0x000003CB Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void CompareOps_Unity_Barracuda_IOps_Reshape_mD49954DB82A6D8169089399C0FD67CD326E810E4 (void);
// 0x000003CC Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void CompareOps_Unity_Barracuda_IOps_Expand_mF44A9939F7721C2C138577D3A5749B1AC6E9C776 (void);
// 0x000003CD Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Transpose_m3FA0D366A522AC3FAD6FF56B156392D7AD3B2016 (void);
// 0x000003CE Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Transpose_m6F30CB80D74A5FDB2CCD3649FB48FCF87A1421D1 (void);
// 0x000003CF Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Gather_m0D5C497B21DE3F19EC857DBEFD09722D01FC9C30 (void);
// 0x000003D0 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_NonMaxSuppression_mCBD4658D27C60933CFDA33E3B1EF00B6F28F8EA7 (void);
// 0x000003D1 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Concat_m22B578B3616BFAF2F2ACBF9E28BED00836FE22E0 (void);
// 0x000003D2 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_StridedSlice_m637922AA84F6ED274CD0BA776B2EEB6D5A599953 (void);
// 0x000003D3 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Tile_m3B0CB3DCAB3EF34D7DA2F659A7F845672BEAD438 (void);
// 0x000003D4 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Shape(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Shape_mC9BB759CB49117FB173BCB030C671F3BB41DBF04 (void);
// 0x000003D5 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Copy_mCFC118D3954CCFE25B121896FA2180348EF39886 (void);
// 0x000003D6 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Prepare_m5FAF2D5F69E2A43DFCD094003ECB58882E984B65 (void);
// 0x000003D7 System.Void Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_ResetAllocator_m649F05811E37C18F7103ED068539E73E499A65DC (void);
// 0x000003D8 System.Void Unity.Barracuda.CompareOps::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/Type,Unity.Barracuda.Tensor[])
extern void CompareOps_CheckSame_mA3B8EF60555E2B1FF7C66B61ECD19476E0389C70 (void);
// 0x000003D9 System.Void Unity.Barracuda.CompareOps::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.String,Unity.Barracuda.Tensor[])
extern void CompareOps_CheckSame_m5846EB93FE01C84A12B84D60CF70774B00B91758 (void);
// 0x000003DA System.Void Unity.Barracuda.CompareOpsUtils::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/Type,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single,Unity.Barracuda.Tensor[])
extern void CompareOpsUtils_CheckSame_mC9BC762D12A94CBBD33AF68467C677ADF1D67813 (void);
// 0x000003DB System.Void Unity.Barracuda.CompareOpsUtils::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.String,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single,Unity.Barracuda.Tensor[])
extern void CompareOpsUtils_CheckSame_m440802C01C815891368E881C93EEB1DA139B1914 (void);
// 0x000003DC System.Void Unity.Barracuda.CompareOpsUtils::CheckApproximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Single,Unity.Barracuda.Layer/Type,Unity.Barracuda.CompareOpsUtils/LogLevel)
extern void CompareOpsUtils_CheckApproximately_m2D51F505EC91B5E2E9283A5E8097B35726570D16 (void);
// 0x000003DD System.Void Unity.Barracuda.CompareOpsUtils::CheckApproximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Single,System.String,Unity.Barracuda.CompareOpsUtils/LogLevel)
extern void CompareOpsUtils_CheckApproximately_m1A40B51039FDE82DED4FA2731958090BBEB2BF76 (void);
// 0x000003DE System.Void Unity.Barracuda.CompareOpsUtils::.ctor()
extern void CompareOpsUtils__ctor_mCE4346B33A4C48544D5E7E5D7003A6EA22573810 (void);
// 0x000003DF System.Void Unity.Barracuda.ComputeInfo::.cctor()
extern void ComputeInfo__cctor_m6F7974504A0DC467C8048204A79A622961616874 (void);
// 0x000003E0 System.Void Unity.Barracuda.ComputeInfo::.ctor()
extern void ComputeInfo__ctor_mDA2CA76100396AA8B165A2489AD4BADE53322DD9 (void);
// 0x000003E1 System.Void Unity.Barracuda.ComputeShaderSingleton::.ctor()
extern void ComputeShaderSingleton__ctor_mB9105DD9B03946C98D967E42AD551AA351DA177E (void);
// 0x000003E2 System.Void Unity.Barracuda.ComputeShaderSingleton::RegisterKernels(System.String,System.String[])
extern void ComputeShaderSingleton_RegisterKernels_m27C3C699952D5E5090B31EDE88B8500E4981A524 (void);
// 0x000003E3 UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::FindComputeShader(Unity.Barracuda.ComputeShaderContext,System.String)
extern void ComputeShaderSingleton_FindComputeShader_m06887DA5CE64BDBFFDA82FAE4E2DE98E04B6CAC4 (void);
// 0x000003E4 UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::FindReferenceComputeShader(System.String)
extern void ComputeShaderSingleton_FindReferenceComputeShader_m2293D0ACFB7B2D47CF16E59CC479B1312193CFF6 (void);
// 0x000003E5 UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::FindOptimizedComputeShader(System.String)
extern void ComputeShaderSingleton_FindOptimizedComputeShader_mBA83695176DD3FEA1A308BF35E9BB73508511D64 (void);
// 0x000003E6 UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::FindComputeShader(System.String)
extern void ComputeShaderSingleton_FindComputeShader_mBD994F8F77ACEBC963AADFDD832194A116EF295E (void);
// 0x000003E7 System.Collections.IEnumerator Unity.Barracuda.ComputeShaderSingleton::WarmupReferenceKernels(System.Collections.Generic.List`1<System.String>)
extern void ComputeShaderSingleton_WarmupReferenceKernels_m400C8F0B2BE0F9369789772066D2BFD37B1717DE (void);
// 0x000003E8 System.Collections.IEnumerator Unity.Barracuda.ComputeShaderSingleton::WarmupOptimizedKernels(System.Collections.Generic.List`1<System.String>)
extern void ComputeShaderSingleton_WarmupOptimizedKernels_m503BFC32E2B46B8E765C90AC077BDED9E713A1B9 (void);
// 0x000003E9 System.Collections.Generic.List`1<System.String> Unity.Barracuda.ComputeShaderSingleton::GetUsedReferenceKernels()
extern void ComputeShaderSingleton_GetUsedReferenceKernels_m74F3CD1BC994B53440B4D398C204B8AE630208E7 (void);
// 0x000003EA System.Collections.Generic.List`1<System.String> Unity.Barracuda.ComputeShaderSingleton::GetUsedOptimizedKernels()
extern void ComputeShaderSingleton_GetUsedOptimizedKernels_m8498206E2713FA109B5E33444854D03731F86F75 (void);
// 0x000003EB Unity.Barracuda.ComputeShaderSingleton Unity.Barracuda.ComputeShaderSingleton::get_Instance()
extern void ComputeShaderSingleton_get_Instance_mCF4C10CCF9C8C2AE9D5D248737EEF6446B64A3BD (void);
// 0x000003EC System.Boolean Unity.Barracuda.ComputeShaderSingleton::get_supported()
extern void ComputeShaderSingleton_get_supported_mF695B79F7E8B139EEA22A486C8ECCDA7EAEE3C0A (void);
// 0x000003ED System.Void Unity.Barracuda.ComputeShaderSingleton::.cctor()
extern void ComputeShaderSingleton__cctor_mE90EE7084687151E0709C509FE2C55C4F5710722 (void);
// 0x000003EE System.Void Unity.Barracuda.GenericWorker::.ctor(Unity.Barracuda.Model,Unity.Barracuda.IOps,Unity.Barracuda.IVars,System.Boolean)
extern void GenericWorker__ctor_mAE4C63C351CFBDE990E6D04E9B1B7066B5999EB8 (void);
// 0x000003EF System.Void Unity.Barracuda.GenericWorker::Finalize()
extern void GenericWorker_Finalize_m195C157916479BF383619A4C04D964ABFD8AC3F3 (void);
// 0x000003F0 System.Void Unity.Barracuda.GenericWorker::OccupyAllocator()
extern void GenericWorker_OccupyAllocator_m53B2467B323D7AF4E39610BBC3543C185F30DF0B (void);
// 0x000003F1 System.Void Unity.Barracuda.GenericWorker::ResetAllocatorIfStale()
extern void GenericWorker_ResetAllocatorIfStale_m3E741519E2ACCAFE60F1BF73C4A62EBFE2835A6E (void);
// 0x000003F2 System.Void Unity.Barracuda.GenericWorker::ResetAllocatorIfStaleAndNotOccupied()
extern void GenericWorker_ResetAllocatorIfStaleAndNotOccupied_mDEE5670676FE6F34073138D588B5FA7B26129979 (void);
// 0x000003F3 System.Void Unity.Barracuda.GenericWorker::Dispose()
extern void GenericWorker_Dispose_m513708C181C4A6545625F59662D300312D585D80 (void);
// 0x000003F4 System.Void Unity.Barracuda.GenericWorker::PrepareForInput(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericWorker_PrepareForInput_m80A13C3C7216E19DF808CB5389E7D2ED4291FE66 (void);
// 0x000003F5 System.Void Unity.Barracuda.GenericWorker::SetInput(System.String,Unity.Barracuda.Tensor)
extern void GenericWorker_SetInput_m628F255E6F75AD21D69AE6E5AE0E558226DC6A5D (void);
// 0x000003F6 System.Void Unity.Barracuda.GenericWorker::SetInput(Unity.Barracuda.Tensor)
extern void GenericWorker_SetInput_mF88CD88AA1607D927EA9FF49D008DF4848A3D6C8 (void);
// 0x000003F7 Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void GenericWorker_Execute_m6881C3957CE3B062C5BC485BB370BE8F3D80B5DD (void);
// 0x000003F8 Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute(Unity.Barracuda.Tensor)
extern void GenericWorker_Execute_mA61C50DEAAE2C317638EE43769F5AAACBAC2AC19 (void);
// 0x000003F9 Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute()
extern void GenericWorker_Execute_m3763E5033851A6CB9FE1E1DAD8316EF104152827 (void);
// 0x000003FA System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void GenericWorker_StartManualSchedule_m81DACB1579E600E49D733A7D660565A8B5C81036 (void);
// 0x000003FB System.Void Unity.Barracuda.GenericWorker::FlushSchedule(System.Boolean)
extern void GenericWorker_FlushSchedule_m63FE5F051F0C1267105598CBD09C56D8DA354B5C (void);
// 0x000003FC System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule(Unity.Barracuda.Tensor)
extern void GenericWorker_StartManualSchedule_m11CE506533572F9E99F36E4D3BEA44BDA989B1B7 (void);
// 0x000003FD System.Single Unity.Barracuda.GenericWorker::get_scheduleProgress()
extern void GenericWorker_get_scheduleProgress_m775143C4BD46C43605C4099FB3B4B9F3A6EE84C0 (void);
// 0x000003FE Unity.Barracuda.Layer/FusedActivation Unity.Barracuda.GenericWorker::GetAndVerifyFusedActivation(Unity.Barracuda.Layer)
extern void GenericWorker_GetAndVerifyFusedActivation_mC99FD7A30DEA43E0A2F53DC50BF15393CD0995F0 (void);
// 0x000003FF System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule()
extern void GenericWorker_StartManualSchedule_m3068003B8498A3F1F060A44345BCC14509931510 (void);
// 0x00000400 Unity.Barracuda.Tensor Unity.Barracuda.GenericWorker::PeekOutput()
extern void GenericWorker_PeekOutput_m27159586CFF69D64B2366A80C16E8382535E7A23 (void);
// 0x00000401 Unity.Barracuda.Tensor Unity.Barracuda.GenericWorker::PeekOutput(System.String)
extern void GenericWorker_PeekOutput_m4FE75A79A5FCF1810C9A4AD91F7D8DF8CB9FEAB3 (void);
// 0x00000402 Unity.Barracuda.Tensor[] Unity.Barracuda.GenericWorker::PeekConstants(System.String)
extern void GenericWorker_PeekConstants_m7A08BFF2AFBE98A4BFE0A7972C18B80D3D9A81DC (void);
// 0x00000403 System.String Unity.Barracuda.GenericWorker::Summary()
extern void GenericWorker_Summary_m5202B56232DE1A6E46EAF6F5CBA723677EAAFEA8 (void);
// 0x00000404 System.Void Unity.Barracuda.GenericVars::.ctor()
extern void GenericVars__ctor_mC0FFCDAEAE2D010B4429037E9033E7AD070AFF29 (void);
// 0x00000405 System.Void Unity.Barracuda.GenericVars::Finalize()
extern void GenericVars_Finalize_m3448E82C9777E7FC1AC12EEACF5D004FB7A37412 (void);
// 0x00000406 System.Void Unity.Barracuda.GenericVars::Dispose()
extern void GenericVars_Dispose_m547257F57864B6EAED0F99AA1CF679DC92E7FFD2 (void);
// 0x00000407 Unity.Barracuda.ITensorAllocator Unity.Barracuda.GenericVars::GetAllocator()
extern void GenericVars_GetAllocator_m0CA00F22EEEF26D203A686FB21574C7DBDA50C79 (void);
// 0x00000408 System.Boolean Unity.Barracuda.GenericVars::IsTensorOwnedByInternalAllocator(Unity.Barracuda.Tensor)
extern void GenericVars_IsTensorOwnedByInternalAllocator_m95ADAEB5829C7494BFD0D28072E9329AA2328642 (void);
// 0x00000409 System.Boolean Unity.Barracuda.GenericVars::ValidateGlobalInputs(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVars_ValidateGlobalInputs_m61228CDB387CCD612514F179C2EA911AB31B5C8C (void);
// 0x0000040A Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::PrepareLayerInputTensors(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.IOps)
extern void GenericVars_PrepareLayerInputTensors_mC4B28F0EEEB38D8E1100241A330F0B77C2AFEE17 (void);
// 0x0000040B System.Void Unity.Barracuda.GenericVars::SetInput(System.String,Unity.Barracuda.Tensor)
extern void GenericVars_SetInput_m845AF12E7DB21F82898575DBA43EE7E4D97F85A2 (void);
// 0x0000040C System.Void Unity.Barracuda.GenericVars::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVars_PrepareStorage_m57923219920605659B3E840AF1BCA5099ACD6246 (void);
// 0x0000040D Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::GatherInputs(Unity.Barracuda.Layer)
extern void GenericVars_GatherInputs_m3D2207E7AC71A104558ACEE2B31DD6E1D709620F (void);
// 0x0000040E System.Void Unity.Barracuda.GenericVars::PrepareStorage(Unity.Barracuda.Layer)
extern void GenericVars_PrepareStorage_mF11110D37C1E915F60A5216A5C594234BEB6523B (void);
// 0x0000040F System.Void Unity.Barracuda.GenericVars::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
extern void GenericVars_Store_m63074D8BA8EE4908779B9F6EBBED5F66CE6C0F3F (void);
// 0x00000410 Unity.Barracuda.Tensor Unity.Barracuda.GenericVars::PeekOutput(System.String)
extern void GenericVars_PeekOutput_mB25DCDE87F683ABB131ADBDED6FE77C557B033AA (void);
// 0x00000411 Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::PeekConstants(System.String)
extern void GenericVars_PeekConstants_m057AF55DA79C1615EB8661B17FDB0C9CBE86E35E (void);
// 0x00000412 System.Boolean Unity.Barracuda.GenericVarsWithReuse::get_layerRequiresStorage()
extern void GenericVarsWithReuse_get_layerRequiresStorage_m5AA99F24DDD58CD897542A77A5D33415A954E048 (void);
// 0x00000413 Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithReuse::get_temporary()
extern void GenericVarsWithReuse_get_temporary_m7065B52374C5FD7BD6DCA162D033AB8F0843B17D (void);
// 0x00000414 System.Void Unity.Barracuda.GenericVarsWithReuse::ReleaseTemporary()
extern void GenericVarsWithReuse_ReleaseTemporary_m22C528CB8CF55707DE079EAC70243737767A2630 (void);
// 0x00000415 System.Void Unity.Barracuda.GenericVarsWithReuse::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVarsWithReuse_PrepareStorage_m31AE3007F39C2B424B3045E3C244E3C8A2F50650 (void);
// 0x00000416 System.Void Unity.Barracuda.GenericVarsWithReuse::PrepareStorage(Unity.Barracuda.Layer)
extern void GenericVarsWithReuse_PrepareStorage_m21562AFC2C651FCAEBA15BFC7AA96AB1D29E54EC (void);
// 0x00000417 System.Void Unity.Barracuda.GenericVarsWithReuse::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
extern void GenericVarsWithReuse_Store_m11CFF862CFF641507E2681A8A748E35280E7186B (void);
// 0x00000418 Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithReuse::PeekOutput(System.String)
extern void GenericVarsWithReuse_PeekOutput_m71E880AB5535B0659640DC15C730B0FCD059E424 (void);
// 0x00000419 System.Void Unity.Barracuda.GenericVarsWithReuse::.ctor()
extern void GenericVarsWithReuse__ctor_m672CE05934227AFDBBB7B49727E6C459C519153B (void);
// 0x0000041A System.Void Unity.Barracuda.GenericVarsWithPreallocation::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVarsWithPreallocation_PrepareStorage_m46147904D4A958F3E2CD7E6CA14CF0CF8C8A91F3 (void);
// 0x0000041B Unity.Barracuda.ITensorAllocator Unity.Barracuda.GenericVarsWithPreallocation::GetAllocator()
extern void GenericVarsWithPreallocation_GetAllocator_mCFE6550D3317BE552703A85CB5C20B42FF1935C1 (void);
// 0x0000041C System.Boolean Unity.Barracuda.GenericVarsWithPreallocation::IsTensorOwnedByInternalAllocator(Unity.Barracuda.Tensor)
extern void GenericVarsWithPreallocation_IsTensorOwnedByInternalAllocator_mDFCD3B0CA7EA67D157D2A1C63765A6C5EB2F666E (void);
// 0x0000041D Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithPreallocation::Alloc(Unity.Barracuda.TensorShape)
extern void GenericVarsWithPreallocation_Alloc_mA36B9462425332266D29A35674C1F0A71B8F3D61 (void);
// 0x0000041E Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithPreallocation::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void GenericVarsWithPreallocation_Alloc_m3B2A19018BE8F2E57918A088D5FD4127521F3DA2 (void);
// 0x0000041F System.Void Unity.Barracuda.GenericVarsWithPreallocation::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void GenericVarsWithPreallocation_MoveToDevice_m716C4BDFC61AE18190066935E5D8C4AA45759DFE (void);
// 0x00000420 System.Void Unity.Barracuda.GenericVarsWithPreallocation::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void GenericVarsWithPreallocation_Release_m6AADC313CF4BA4C21E73630CD926D2D835D305AC (void);
// 0x00000421 System.Void Unity.Barracuda.GenericVarsWithPreallocation::WaiveOwnership(Unity.Barracuda.Tensor)
extern void GenericVarsWithPreallocation_WaiveOwnership_m8D123E79C7A7DE6DE5EA699A4BAC27640CD3CA40 (void);
// 0x00000422 System.Void Unity.Barracuda.GenericVarsWithPreallocation::Reset(System.Boolean)
extern void GenericVarsWithPreallocation_Reset_m6DF8BA5CD839E70619B1091F57F9F7202A1401B5 (void);
// 0x00000423 System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_busyBytes()
extern void GenericVarsWithPreallocation_get_busyBytes_mA04C2A7C73194294548CEA928D9A2C2E37D12D23 (void);
// 0x00000424 System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_freeBytes()
extern void GenericVarsWithPreallocation_get_freeBytes_mA034834F197E0B87B3D9447A7E3FB5BF60B83337 (void);
// 0x00000425 System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_totalBytes()
extern void GenericVarsWithPreallocation_get_totalBytes_m57A5513482F2B420E4B92C82D688BD5FFAB788FE (void);
// 0x00000426 System.String Unity.Barracuda.GenericVarsWithPreallocation::ToString()
extern void GenericVarsWithPreallocation_ToString_mA619F33B2E98D4899C564B64B07C72A1BF147711 (void);
// 0x00000427 System.Void Unity.Barracuda.GenericVarsWithPreallocation::.ctor()
extern void GenericVarsWithPreallocation__ctor_m2B74D5AAA60B1953C9E75DF8E3C53A4691FC604F (void);
// 0x00000428 System.Void Unity.Barracuda.DefaultTensorAllocator::.ctor()
extern void DefaultTensorAllocator__ctor_m92A7D86A505F3851A3ECD71EF50A9A4C578BC842 (void);
// 0x00000429 System.Void Unity.Barracuda.DefaultVars::.ctor()
extern void DefaultVars__ctor_mCB9E0CF391F15994D294D1F672E42AA4A4EE05A8 (void);
// 0x0000042A System.Boolean Unity.Barracuda.LinearLayerFusing::IsLayerLinear(Unity.Barracuda.Layer,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>)
extern void LinearLayerFusing_IsLayerLinear_m5BC88DAC5161F464F08D6B5EB60B49CB17CBEBAE (void);
// 0x0000042B System.Boolean Unity.Barracuda.LinearLayerFusing::IsLayerLinearMathOp(Unity.Barracuda.Layer)
extern void LinearLayerFusing_IsLayerLinearMathOp_mEA474199FA4F8BABA7C3B8C4942A4F363BAB3049 (void);
// 0x0000042C System.Boolean Unity.Barracuda.LinearLayerFusing::AreLayersFusable(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_AreLayersFusable_mB82B26CE638512FCAF0BFA3C33FCA25F06CBFF27 (void);
// 0x0000042D System.Void Unity.Barracuda.LinearLayerFusing::Add(System.ValueTuple`2<Unity.Barracuda.Layer/Type,Unity.Barracuda.Layer/Type>,System.Func`3<Unity.Barracuda.Layer,Unity.Barracuda.Layer,Unity.Barracuda.Layer>)
extern void LinearLayerFusing_Add_m8199CB92A56D5CB0C746242FDB59674A70B1F2D7 (void);
// 0x0000042E System.Void Unity.Barracuda.LinearLayerFusing::.ctor()
extern void LinearLayerFusing__ctor_m0F1951E2278E305DE1B5E06D789AB0FF6B2413B7 (void);
// 0x0000042F Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::FuseLayers(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_FuseLayers_m68F54D8B61A959B7BA3CAF99B046E62F21EF30CF (void);
// 0x00000430 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_0(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_0_mDA46F1B1031B3FC52045DCB4B8B7F6D4D98288AB (void);
// 0x00000431 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_1(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_1_m4654EAC356A07D2038381637D7110EC10F735D71 (void);
// 0x00000432 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_2(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_2_m543A65B35D31CA1D5199FCF5FA375C988CB05913 (void);
// 0x00000433 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_3(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_3_m232F2509296547D5594F7B4BF399CBAAB2E15F08 (void);
// 0x00000434 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_4(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_4_m67A89CFD6663559566951F1CB65ED87566A1DFED (void);
// 0x00000435 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_6(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_6_mAFA9BADEEE60976F82E954B05B08F2E1B2856332 (void);
// 0x00000436 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_8(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_8_m4314831DE65064E1A12C8E20CA4D490E78EA43E3 (void);
// 0x00000437 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_9(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_9_m06330F3740B500ED4967D4B4EDB40CB9214EAE31 (void);
// 0x00000438 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_11(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_11_mDBA588855B800B18E1A7E964DDAFBF0FEEAFE531 (void);
// 0x00000439 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_13(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_13_m0EE0F4F09D73C87D57F7C117D9D1114EBED5C622 (void);
// 0x0000043A Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing::<.ctor>b__6_14(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void LinearLayerFusing_U3C_ctorU3Eb__6_14_m72BE4842B656352A2D1C58B03BFBC3E3951AFB6D (void);
// 0x0000043B System.Boolean Unity.Barracuda.CSharpBLAS::IsNative()
extern void CSharpBLAS_IsNative_mE8BEF8DA98F5ADF72765D7317AF7C5588C026378 (void);
// 0x0000043C System.Boolean Unity.Barracuda.CSharpBLAS::IsCurrentPlatformSupported()
extern void CSharpBLAS_IsCurrentPlatformSupported_mC2063121522AFA221DE17E0E084AFFFDB9C83EC4 (void);
// 0x0000043D System.Void Unity.Barracuda.CSharpBLAS::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void CSharpBLAS_SGEMM_mE0456EB9F29FBDC3CB3018512B6E345D19651BDC (void);
// 0x0000043E Unity.Jobs.JobHandle Unity.Barracuda.CSharpBLAS::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void CSharpBLAS_ScheduleSGEMM_m091160289526C96644E13FD81518E5D0B1238C37 (void);
// 0x0000043F System.Void Unity.Barracuda.CSharpBLAS::.ctor()
extern void CSharpBLAS__ctor_m0C242A391BDF27ADBD0AE8A4BAA9566C50CA5BD6 (void);
// 0x00000440 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Single[],System.Int32,System.Boolean)
extern void MatrixUtils_CopyBlockWithPadding_mD354682BE43DA15A535E5EABDA4F774A4D88DFF3 (void);
// 0x00000441 System.Void Unity.Barracuda.MatrixUtils::ClearFloatArray(System.Single*,System.Single,System.Int32)
extern void MatrixUtils_ClearFloatArray_mAE6A95ACC75A24EB2CDC75C55142DA2109231E6F (void);
// 0x00000442 System.Void Unity.Barracuda.MatrixUtils::CopyFloatArray(System.Single*,System.Single*,System.Int32)
extern void MatrixUtils_CopyFloatArray_m7B5AD269A879C4278B7686768F7865CA034E6CD4 (void);
// 0x00000443 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Boolean)
extern void MatrixUtils_CopyBlockWithPadding_m0BFC8E056BFE8E0F63D052EDDC3A4572257C87A6 (void);
// 0x00000444 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single[],System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void MatrixUtils_CopyBlockWithPadding_m2C89C2C946B15B58865FCEDE51A4CC7F69D6FED4 (void);
// 0x00000445 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void MatrixUtils_CopyBlockWithPadding_mF19C6BCF0EF81A60B543B27CA0D1970B9236A24D (void);
// 0x00000446 System.Void Unity.Barracuda.MatrixUtils::MultiplyBlockUnroll8xhPadded(System.Single*,System.Single*,System.Single*,System.Int32)
extern void MatrixUtils_MultiplyBlockUnroll8xhPadded_m0A0D58EA11370D512A7374B322D1E761C1D20B10 (void);
// 0x00000447 System.Void Unity.Barracuda.MatrixUtils::MultiplyBlockUnroll8xhParallelWithPadding(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void MatrixUtils_MultiplyBlockUnroll8xhParallelWithPadding_m52E34C4FB991347BCF47DADED2D464610645799D (void);
// 0x00000448 System.Void Unity.Barracuda.MatrixUtils::.ctor()
extern void MatrixUtils__ctor_m54258F6FB099658491445F077F1D1A67F8ECF0FB (void);
// 0x00000449 System.String Unity.Barracuda.ModelAnalyzer::GetDefaultInputName(Unity.Barracuda.Model)
extern void ModelAnalyzer_GetDefaultInputName_m6AA28FDAF3F121A03A4024B1E6EC9060D37282E3 (void);
// 0x0000044A System.String Unity.Barracuda.ModelAnalyzer::GetDefaultOutputName(Unity.Barracuda.Model)
extern void ModelAnalyzer_GetDefaultOutputName_m12859C0CC9B27BD142BE668352B3E803293F1FC5 (void);
// 0x0000044B System.Nullable`1<Unity.Barracuda.TensorShape>[] Unity.Barracuda.ModelAnalyzer::ListTemporaryTensorShapes(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void ModelAnalyzer_ListTemporaryTensorShapes_mA3E952C1CFF5BF6295866BE14FC35BFAE046DFAF (void);
// 0x0000044C System.Nullable`1<Unity.Barracuda.TensorShape>[] Unity.Barracuda.ModelAnalyzer::ListTemporaryTensorShapes(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>&)
extern void ModelAnalyzer_ListTemporaryTensorShapes_mA29237F20ADF996CA2ACB575760E7F4B21B6DF6E (void);
// 0x0000044D System.Void Unity.Barracuda.ModelAnalyzer::LegacyGetXYRanks(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32&,System.Int32&)
extern void ModelAnalyzer_LegacyGetXYRanks_mF003AD7C83ECA7824F341B1E46BED1F8E8DF5CB7 (void);
// 0x0000044E System.Boolean Unity.Barracuda.ModelAnalyzer::TryGetOutputTensorShape(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>,System.String,Unity.Barracuda.TensorShape&)
extern void ModelAnalyzer_TryGetOutputTensorShape_mACC5D85FD0ADBA115BE71827305434995EBDDA24 (void);
// 0x0000044F System.Boolean Unity.Barracuda.ModelAnalyzer::TryGetOutputTensorShape(Unity.Barracuda.Model,System.String,Unity.Barracuda.TensorShape&)
extern void ModelAnalyzer_TryGetOutputTensorShape_mF92A198E6041EF54425D9F5BC49BA8BDBEC7D62C (void);
// 0x00000450 System.Boolean Unity.Barracuda.ModelAnalyzer::FindLayerByName(Unity.Barracuda.Model,System.String,Unity.Barracuda.Layer&)
extern void ModelAnalyzer_FindLayerByName_m284E5E018890143CF61D55474C0BAB18140A3DC7 (void);
// 0x00000451 System.Collections.Generic.HashSet`1<Unity.Barracuda.Layer> Unity.Barracuda.ModelAnalyzer::FindLayersThatRequireStorage(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindLayersThatRequireStorage_m94296631F60D61E0FDF7DA9FD21DECC3767218D4 (void);
// 0x00000452 System.Collections.Generic.HashSet`1<Unity.Barracuda.Layer> Unity.Barracuda.ModelAnalyzer::FindUpstreamLayers(Unity.Barracuda.Model,System.String[])
extern void ModelAnalyzer_FindUpstreamLayers_m9DF3AD2DFE84C6B3C1D78DCDAC6B934BC29E68A4 (void);
// 0x00000453 Unity.Barracuda.TensorShape Unity.Barracuda.ModelAnalyzer::FindLargestNecessaryTensorShape(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void ModelAnalyzer_FindLargestNecessaryTensorShape_mD7942ECB78B1D3DC80C1F0922079C3823BFC7867 (void);
// 0x00000454 Unity.Barracuda.TensorShape Unity.Barracuda.ModelAnalyzer::FindLargestArgumentTensorShape(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindLargestArgumentTensorShape_mAB70B531AA0B38A4F9A96450C547E96589BF96D3 (void);
// 0x00000455 System.String[] Unity.Barracuda.ModelAnalyzer::FindUnusedLayers(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnusedLayers_mF2E59C9EEBBCCB6D6A1958B98BE58362F88B072F (void);
// 0x00000456 System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelAnalyzer_FindBrokenLinks_m9E3EE48110E605A68BAC3F71D49372D81F5D1BE7 (void);
// 0x00000457 System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model,System.String[])
extern void ModelAnalyzer_FindBrokenLinks_m5F19B9C5160C5BCFD98A5BFC55578896DCCF833A (void);
// 0x00000458 System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindBrokenLinks_m2F65B82531A860655637DE2EDC6C1E5370451D86 (void);
// 0x00000459 System.String[] Unity.Barracuda.ModelAnalyzer::FindUnconnectedInputs(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnconnectedInputs_m571AA1EF0A8EFFFA687133A4B25ACCD19C0380F0 (void);
// 0x0000045A System.String[] Unity.Barracuda.ModelAnalyzer::FindUnconnectedOutputs(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnconnectedOutputs_m41B779735EB080B5025002E303A0E66907215FBA (void);
// 0x0000045B System.Boolean Unity.Barracuda.ModelAnalyzer::IsLayerBroacastable(Unity.Barracuda.Layer)
extern void ModelAnalyzer_IsLayerBroacastable_m9172CC18D870F4D28FF44D60481D6C0273E014DC (void);
// 0x0000045C System.Boolean Unity.Barracuda.ModelAnalyzer::IsInputShapeAcceptablyKnowForShapeInference(Unity.Barracuda.Model/Input)
extern void ModelAnalyzer_IsInputShapeAcceptablyKnowForShapeInference_m1F45CA1E9F7F8B6F03B5BED2970DCECBFEAC503F (void);
// 0x0000045D System.Void Unity.Barracuda.ModelAnalyzer::.ctor()
extern void ModelAnalyzer__ctor_m11A4E5DC70D73C90C233C6DF26E567D2E0B25479 (void);
// 0x0000045E Unity.Barracuda.Model Unity.Barracuda.ModelOptimizer::Optimize(Unity.Barracuda.Model,System.Boolean,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelOptimizer_Optimize_m7546FB27FBC5940754016A31CF3594F996B5C345 (void);
// 0x0000045F System.Void Unity.Barracuda.ModelOptimizer::RemoveUnused(Unity.Barracuda.Model,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelOptimizer_RemoveUnused_mF3F3B2A9139D3C560681A04CD38B3EA0AFB2CEA3 (void);
// 0x00000460 System.Boolean Unity.Barracuda.ModelOptimizer::IsLayerSupportingActivationFusing(Unity.Barracuda.Layer/Type)
extern void ModelOptimizer_IsLayerSupportingActivationFusing_m01B687CD33A453967F7348A9B3A6F6781F20903D (void);
// 0x00000461 System.Boolean Unity.Barracuda.ModelOptimizer::IsActivationFusable(Unity.Barracuda.Layer/Activation)
extern void ModelOptimizer_IsActivationFusable_m8AED95AD1C0EDF641B5CF331AF770E4565B8B328 (void);
// 0x00000462 System.Void Unity.Barracuda.ModelOptimizer::FuseActivation(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void ModelOptimizer_FuseActivation_m501A51F53DF5AB1D1319FEBFC7DC5F716F14595D (void);
// 0x00000463 System.Void Unity.Barracuda.ModelOptimizer::FuseActivations(Unity.Barracuda.Model)
extern void ModelOptimizer_FuseActivations_mFCF536AF8F97C104984D3256D59C2B5426DCA218 (void);
// 0x00000464 System.Boolean Unity.Barracuda.ModelOptimizer::IsPermutationNoop(System.Int32[])
extern void ModelOptimizer_IsPermutationNoop_mF4D93B9088715F4C7C02A4284112FCB60D6A7003 (void);
// 0x00000465 System.Boolean Unity.Barracuda.ModelOptimizer::IsLayerNoop(Unity.Barracuda.Layer)
extern void ModelOptimizer_IsLayerNoop_m9E2108E393B43CDA6E738DB526ADF096DD6FCA78 (void);
// 0x00000466 Unity.Barracuda.Model Unity.Barracuda.ModelOptimizer::RemoveNoop(Unity.Barracuda.Model)
extern void ModelOptimizer_RemoveNoop_mAF391887DAC3628E58458373779F82558AE5E7AD (void);
// 0x00000467 System.Boolean Unity.Barracuda.ModelOptimizer::IsLayerConstant(Unity.Barracuda.Layer)
extern void ModelOptimizer_IsLayerConstant_m7275D101312410014D60E6F91D782F1103BAE580 (void);
// 0x00000468 System.Boolean Unity.Barracuda.ModelOptimizer::IsLayerFusedActivation(Unity.Barracuda.Layer)
extern void ModelOptimizer_IsLayerFusedActivation_m44D4309A91AEE8BD138F7E57983B9423731B527B (void);
// 0x00000469 System.Int64 Unity.Barracuda.ModelOptimizer::LayerComplextity(Unity.Barracuda.Layer)
extern void ModelOptimizer_LayerComplextity_mC22F6CC14FCF0C175A9C6388B9228FA84E8C6C09 (void);
// 0x0000046A Unity.Barracuda.Layer Unity.Barracuda.ModelOptimizer::FuseConsecutiveLayers(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void ModelOptimizer_FuseConsecutiveLayers_mB6DB1BFAC0DA51AD46B7DCFF278B41AFE47BFC63 (void);
// 0x0000046B System.Boolean Unity.Barracuda.ModelOptimizer::AreLayersFusable(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void ModelOptimizer_AreLayersFusable_m1FF705896BC2988ADE9CF6E0AFF4485198FC27D6 (void);
// 0x0000046C System.Void Unity.Barracuda.ModelOptimizer::PackConstants(Unity.Barracuda.Model,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>)
extern void ModelOptimizer_PackConstants_m00E4D212B20A4DBCBA5A4C7551D1CBF6DE4C1EA4 (void);
// 0x0000046D System.Void Unity.Barracuda.ModelOptimizer::UnpackConstants(Unity.Barracuda.Model)
extern void ModelOptimizer_UnpackConstants_mEA0ECDCD7A83B4B0EF6E6249D7B1E5C7BAA44837 (void);
// 0x0000046E System.Void Unity.Barracuda.ModelOptimizer::FuseLinear(Unity.Barracuda.Model,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelOptimizer_FuseLinear_m682E25B1671D356073C279C17A6C90ECBD72736D (void);
// 0x0000046F System.Void Unity.Barracuda.ModelOptimizer::.ctor()
extern void ModelOptimizer__ctor_mBC3769C5A96F60507F7B494604472F6496111B1B (void);
// 0x00000470 System.Void Unity.Barracuda.ModelOptimizer::.cctor()
extern void ModelOptimizer__cctor_mA48C224FD80E7A2A1031878052C3ECB7BED74FD2 (void);
// 0x00000471 System.Void Unity.Barracuda.StaticLayerOppComplexity::Add(Unity.Barracuda.Layer/Type,System.Func`2<Unity.Barracuda.Layer,System.Int64>)
extern void StaticLayerOppComplexity_Add_m403524DA67DD1C3EE51345F3AA57E5B47D127E4E (void);
// 0x00000472 System.Void Unity.Barracuda.StaticLayerOppComplexity::.ctor()
extern void StaticLayerOppComplexity__ctor_m98137C7F2485948B1642D37677CC2413C76D9F5E (void);
// 0x00000473 System.Int64 Unity.Barracuda.StaticLayerOppComplexity::LayerComplextity(Unity.Barracuda.Layer)
extern void StaticLayerOppComplexity_LayerComplextity_m1DB445ECF9FE8914591EFBE1C0515BC8B37F372A (void);
// 0x00000474 System.Void Unity.Barracuda.StatsOps::.ctor(Unity.Barracuda.IOps)
extern void StatsOps__ctor_m1600AA752BB02A01D800AD9BF70729A62BCE6CB6 (void);
// 0x00000475 System.Void Unity.Barracuda.StatsOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void StatsOps_PrepareModel_m092080295A864E7F6137A5CB428ABF69EA9E3358 (void);
// 0x00000476 System.Void Unity.Barracuda.StatsOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void StatsOps_PreExecuteLayer_m025914AE18ACC2AAC374E459F022E0AE8930F56A (void);
// 0x00000477 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_MatMul_mE34B343507D5927DE18ECBEADDA3804A8FB50834 (void);
// 0x00000478 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_MatMul_m7982C3746C7D66D1922106734565D68800401AFA (void);
// 0x00000479 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Dense_mE83127DBB7AEDAF2D381FA338E688DD2BDB933E1 (void);
// 0x0000047A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Conv2D_m61F56604B01E60E651BBF05116030F44CDAC5EED (void);
// 0x0000047B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Conv3D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Conv3D_m489816163403C3D82640C1ABEA495B60A4C92492 (void);
// 0x0000047C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_DepthwiseConv2D_m731FB36D634FF78F3AE2CD94AD369960FFF37B6E (void);
// 0x0000047D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Conv2DTrans_mBB8377EEDA9A6EC8E4E8C01DADF0BD1717A6BD97 (void);
// 0x0000047E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_Upsample2D_mFAD3D3AC56F4658D8B7D7C16E274C09BEC3C46CC (void);
// 0x0000047F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Upsample3D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_Upsample3D_m203E74B1B317F5844D0CA51BE8BB61AC61929E53 (void);
// 0x00000480 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_Resample2D_mABE919E511FE41D4C3D75477939F71C130191708 (void);
// 0x00000481 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void StatsOps_Unity_Barracuda_IOps_DepthToSpace_mD79F988DD4E7F3AD9A23A1B7C70573E8FB4DF41D (void);
// 0x00000482 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_SpaceToDepth_m722C43EFB6700D499E89822411F3E25DBDC852EE (void);
// 0x00000483 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_MaxPool2D_m80D5DE5C22D6A5CA61B75A6279F79E52F14E8775 (void);
// 0x00000484 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_AvgPool2D_m703A940928AEB196FF81B352582DFE4C7CDCFF18 (void);
// 0x00000485 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalMaxPool2D_mA383A5933B4E8FE3A59DA6E3709006C23684B76A (void);
// 0x00000486 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m9062F33B98308E6C8EF5D287160FBF33B3016DB2 (void);
// 0x00000487 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m4E6DA745ED47F7226D4884A6D3CE31252FC611ED (void);
// 0x00000488 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Border2D_m4B94FCB323CDC395593901B1E0290AAB8AF0DDCB (void);
// 0x00000489 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Border3D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Border3D_m70C9D0A57394DD857C244DBA20F05F6A935B5AFD (void);
// 0x0000048A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DReflect_m3337D857B056C402B7AA82695212AE61275529E6 (void);
// 0x0000048B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DSymmetric_m86BA6C899874F7DBB05EA9DA2BDB73759A49D1F6 (void);
// 0x0000048C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DEdge_m8DB4E59D347E3E00F1E41531C596B12C5F7FC495 (void);
// 0x0000048D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_ScaleBias_m44564B30237696006762FCD63B63B1A47F9F3C0E (void);
// 0x0000048E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Normalization_m1A1EBE4388B567C1C35E7DE80B2AA4E9BDE523A4 (void);
// 0x0000048F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_LRN_mDAF4998BD7ECFE978404E7F3150609D2C470184A (void);
// 0x00000490 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Dropout_m9EB1513B0F21B0065840E4361B74E97ACEFDCEE9 (void);
// 0x00000491 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_RandomNormal_m21FFF48CF6A7B5B1EDF14AEF6062B6D05F7E2770 (void);
// 0x00000492 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_RandomUniform_m7591AAE6BD8C0285E0564AD5500290F5DA538671 (void);
// 0x00000493 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Multinomial_m7A855F511FD6456B6F0D64D01A6B21887DC6E1B2 (void);
// 0x00000494 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_OneHot_m905E3B1FDFD1958841AFBA67A9D12393DC0858C1 (void);
// 0x00000495 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_TopKIndices_mFAC6CB9E59477918684A8A3EB2027D660554FBB2 (void);
// 0x00000496 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_TopKValues_m1CA20375337ED372C9452235501D208B81062ECB (void);
// 0x00000497 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::NonZero(Unity.Barracuda.Tensor)
extern void StatsOps_NonZero_m79BD5196E12493DAC7EB6566E9B24BBA930311CA (void);
// 0x00000498 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Relu_m7970A7AC063B0E5B0C2487DF5B10CCC9C0610AE2 (void);
// 0x00000499 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Softmax_m57E026043E92F7D9D8324898AE819A899C73477C (void);
// 0x0000049A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogSoftmax_m8623173E38616B5321CA61B823221B7CCE8037ED (void);
// 0x0000049B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Tanh_m0839187CF54F6C16C2A44509C48BEFFAFD79B308 (void);
// 0x0000049C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Softplus(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Softplus_m5D532E57DDE2AEBC59BDA0CF10AAB284CCF1A6C5 (void);
// 0x0000049D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sigmoid_m9D8942797A459C1E8071AD23B95082936398654E (void);
// 0x0000049E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Relu6_mBA894BFDA458E063F59EA1A4FA7CE663234298E2 (void);
// 0x0000049F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Elu_m4B08BB2341802725948B85B2412A9231EEBED588 (void);
// 0x000004A0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_LeakyRelu_mB4F61DB8D23F17C1347939E7C1B6B3AA88337417 (void);
// 0x000004A1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Selu_m44D34A848363F2E346235F36C9BA6C5D59108342 (void);
// 0x000004A2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_PRelu_mFFDCD3192F2ED0C60C70E97675B460130F960F62 (void);
// 0x000004A3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Swish_m333DBBBC24FD7C44858CE614FF67765E59E9A5CA (void);
// 0x000004A4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Abs_m3A8009062D4A437A05168E08C6ECF9154CBB10C9 (void);
// 0x000004A5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Neg_m3783871DE5345FC08C5A9FF53A634764EC7A2AA1 (void);
// 0x000004A6 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Ceil_m66BF5AB262253A6E6190BB61B51943839282F4E5 (void);
// 0x000004A7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Clip_m3665311842AA4C9CF56E7D1F9BDB7B296B9168C3 (void);
// 0x000004A8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Floor_m2CA137EB7D9859CD2E0F9DF5FE4221DFF5039388 (void);
// 0x000004A9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Reciprocal_m01A7D50B293B9248BA3BDDD53CA69F3505C8F369 (void);
// 0x000004AA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Pow_m4579B9CB01510C01C70785DEB99F98DC18773A28 (void);
// 0x000004AB Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Exp_mA0D61B681D00817A6340B5133BCD74E1808CB371 (void);
// 0x000004AC Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Log_m9F3C460A7783D042100C871CFEC8941D77980396 (void);
// 0x000004AD Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sqrt_m80D6D94AD76851FE8E87FCE3401FEE8D788976F9 (void);
// 0x000004AE Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Acos(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Acos_mB00C92977CE2CD0FD25555C0A09638EE458E0E5D (void);
// 0x000004AF Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Acosh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Acosh_m7B1B8E9675268F26E646AD6D31FC673E85855490 (void);
// 0x000004B0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Asin(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Asin_mA8A41429A4AEA59BACE613108BF1171ED6170E70 (void);
// 0x000004B1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Asinh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Asinh_mF26A4F1679969A79F67E735BAD2EA015810B7412 (void);
// 0x000004B2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Atan(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Atan_m38A629706CF20AE4F5061D46153B7D9FE21F9399 (void);
// 0x000004B3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Atanh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Atanh_m0E4A4E78F56584D7FCE88D98D3ED3273C1379EAC (void);
// 0x000004B4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Cos(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Cos_m1BE19BF0891CBF14BC1AA38F69A3B3A8AC6934AD (void);
// 0x000004B5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Cosh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Cosh_m179D24D01028AC8BE672AA67980617B8C0E6AE9D (void);
// 0x000004B6 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sin(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sin_m35BC5E52DAECCC093FE7701C6968D735F74A4F4D (void);
// 0x000004B7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sinh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sinh_m03B663872304CCC60F35CBF6E0F46FC0A3ECDDDF (void);
// 0x000004B8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Tan(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Tan_m80353146B4CC286A47B5F09D7C47128F6A0CFAC6 (void);
// 0x000004B9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Add_m91B33DFE08C623DF8F86B6F750C72E9429D04101 (void);
// 0x000004BA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Sub_m92F692B15EACEC9B2CD15B85467A3EBADE2B6876 (void);
// 0x000004BB Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Mul_m2A53D2F4F675B185ADE1140E6182421C6BD4F225 (void);
// 0x000004BC Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Div_m918827A728009FEC2DC79AF25CD226A65B0D1673 (void);
// 0x000004BD Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Pow_m90E8ED125765C0714BE7DB0E2068B064DDCCB460 (void);
// 0x000004BE Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Min_m8D830F0D4C796050D6D9CA618F0AC02AF991274C (void);
// 0x000004BF Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Max_mA179FCC3FBE5DB99351366823474A5EC82E278AB (void);
// 0x000004C0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Mean_m36D301A1464DE7522B4B9CB067244C1AF8E0C31A (void);
// 0x000004C1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ArgMax_m5293D7A769C13F0EF64E2A2FAABB011CE33895C1 (void);
// 0x000004C2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ArgMin_m6CC4361341EBAEC4BC7811CD8F653A69E3087580 (void);
// 0x000004C3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMax_m87422EC6444EF41DB5624BA1468015F10702F626 (void);
// 0x000004C4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMean_m779A2B7A913C82723E26BD9B111391F2FB7D474D (void);
// 0x000004C5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMin_m6F0DF808A1571695A0418936C012F8C14505B73D (void);
// 0x000004C6 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceProd_m42D30C07917C00CED882D6071F82AFA0CF69666B (void);
// 0x000004C7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceSum_m09CBF1C5158F78720C429D6C57293A1EBE4A60DD (void);
// 0x000004C8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Greater_mF0429F6F9C1CBDE40E942D087EA096EC1DFDDDD6 (void);
// 0x000004C9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GreaterEqual_m1773C85674B095DFFC733433F952F2907E551BEB (void);
// 0x000004CA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Less_mEF9A62810C243403695570012C80B950A7F45890 (void);
// 0x000004CB Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LessEqual_m6D31049807263FDE1B80BB5A9A6EF63ED932878D (void);
// 0x000004CC Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Equal_m753446CA30A6CFEAFA7DE746F77984091E84829E (void);
// 0x000004CD Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalOr_m5AABD93C199989FE9725B71082BD2FB5467DDDAB (void);
// 0x000004CE Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalAnd_m2D385DD57FB568949BD3532BF81BEF012F3C28CC (void);
// 0x000004CF Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalXor_mEA61AE1C0FDE5917A9F36D0AC07D855131DA9D8D (void);
// 0x000004D0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalNot_mB706F36DE7CCACBC4B86FDB46EC92971E70B1E2F (void);
// 0x000004D1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Where_m6DDB145E23C7B915513032E414E18C1848389F69 (void);
// 0x000004D2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Flatten_mD9B9079975E37EE3B0145D54DF6C08E3B9EDD1AF (void);
// 0x000004D3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void StatsOps_Unity_Barracuda_IOps_Reshape_mB29C0C1EF1768DC1C220DA8CC969746215A062F7 (void);
// 0x000004D4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void StatsOps_Unity_Barracuda_IOps_Expand_mCBBD5EC6770E9718CE7AD57E548B83F1252EFB2C (void);
// 0x000004D5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Transpose_m4BED7F5AAA790CD61C2187E6C2AD488801BA2F05 (void);
// 0x000004D6 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Transpose_mE962381919AC1D747A04F3EECB88B436FCCB89EB (void);
// 0x000004D7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Gather_mBA60666AC6A9024E0FECBFC9172F68E4B1FCB5C3 (void);
// 0x000004D8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_NonMaxSuppression_m457BF934929BFC96E9F29D551F792388FFD49CFD (void);
// 0x000004D9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Concat_mB8D561425A184D6D470E000A1244C002E98165AB (void);
// 0x000004DA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_StridedSlice_mBBD0FC70F13D0CB7E171D473CB90889225055FE2 (void);
// 0x000004DB Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Tile_m5BC4C87F8CF9E47D74A700C57CA9DF9580308CFA (void);
// 0x000004DC Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Shape(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Shape_m9D8CEF83CE222B99A57E0EE29DA5B3D56DC32FB2 (void);
// 0x000004DD Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Copy_m3B247C608996628FF21B3CD42073E788B888CF3D (void);
// 0x000004DE Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Prepare_m471415DA1B0C91E6F9BD2432469A89314B021A82 (void);
// 0x000004DF System.Void Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_ResetAllocator_m609FC4BC727C114664BDDAD3218D5278542C8C56 (void);
// 0x000004E0 System.String Unity.Barracuda.StatsOps::ToString()
extern void StatsOps_ToString_m4B788C9312C3DDBA3CA7240525A85C5A616C4B95 (void);
// 0x000004E1 System.Void Unity.Barracuda.StatsOps::Elementwise(Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_Elementwise_m99C82ED26F10ED033692916F8B74F832692C3A0A (void);
// 0x000004E2 System.Void Unity.Barracuda.StatsOps::ElementwiseBroadcast(Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_ElementwiseBroadcast_m2DCDD384AA57A8BE44C0522A3EA43E6A8043AA40 (void);
// 0x000004E3 System.Void Unity.Barracuda.StatsOps::Reduce(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_Reduce_m2A83142A824A8E20B31566CEEC1A081899F5B23B (void);
// 0x000004E4 System.Void Unity.Barracuda.TensorOperatorNewAllocator::.ctor()
extern void TensorOperatorNewAllocator__ctor_m1D9A50A0C27BEA7B9479514E34958270EDC68721 (void);
// 0x000004E5 System.Void Unity.Barracuda.TensorOperatorNewAllocator::Finalize()
extern void TensorOperatorNewAllocator_Finalize_m8C747CE31966DC7E5D53E82E983987D53085F99F (void);
// 0x000004E6 Unity.Barracuda.Tensor Unity.Barracuda.TensorOperatorNewAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorOperatorNewAllocator_Alloc_m8E91AA813DA8A4FA74E3F26760ED91A6970A6333 (void);
// 0x000004E7 Unity.Barracuda.Tensor Unity.Barracuda.TensorOperatorNewAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorOperatorNewAllocator_Alloc_mCCF48282B3075D756E6BC2AB1754C2402E86EAAC (void);
// 0x000004E8 System.Void Unity.Barracuda.TensorOperatorNewAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorOperatorNewAllocator_Release_m03EFF8990BD205CED76F47AEE16899DD1597DEC3 (void);
// 0x000004E9 System.Void Unity.Barracuda.TensorOperatorNewAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorOperatorNewAllocator_MoveToDevice_m7C596D4A9A69B59325F5532CCCE79152EA877238 (void);
// 0x000004EA System.Void Unity.Barracuda.TensorOperatorNewAllocator::Reset(System.Boolean)
extern void TensorOperatorNewAllocator_Reset_m8FB18FEB534D329A93D6345F0A55564B64FC2AAA (void);
// 0x000004EB System.Void Unity.Barracuda.TensorOperatorNewAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorOperatorNewAllocator_WaiveOwnership_mA79E7CA9D9905B6F3D5E54BDBEFB4CD48E262392 (void);
// 0x000004EC System.Void Unity.Barracuda.TensorOperatorNewAllocator::Dispose()
extern void TensorOperatorNewAllocator_Dispose_m7941B5F09E8776BAF25A804C669A4414DEF0341D (void);
// 0x000004ED System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_busyBytes()
extern void TensorOperatorNewAllocator_get_busyBytes_mE2740EF2D0E59B8CAC6C3451ACAFBE8D63352EA4 (void);
// 0x000004EE System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_freeBytes()
extern void TensorOperatorNewAllocator_get_freeBytes_m3551E743150B8B90BAAEDD067B3DFA14787B1F52 (void);
// 0x000004EF System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_totalBytes()
extern void TensorOperatorNewAllocator_get_totalBytes_m2E9E2275020DD62469C1F842A1467B9070F85A14 (void);
// 0x000004F0 System.String Unity.Barracuda.TensorOperatorNewAllocator::ToString()
extern void TensorOperatorNewAllocator_ToString_m29D4A1ED54A190989FDF0AEA68CDADA1AC2440A2 (void);
// 0x000004F1 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::.ctor()
extern void TensorCachingByShapeAllocator__ctor_mC9B41EED5CD9AFCC9B163AA12AB2697892E1F905 (void);
// 0x000004F2 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Finalize()
extern void TensorCachingByShapeAllocator_Finalize_m5E12B58F0B2A896EECADF38795A76F1533CAF12C (void);
// 0x000004F3 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::AddRef(Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_AddRef_m98E36C8076FE6B92E9D64A739C9F167FE16D6C9D (void);
// 0x000004F4 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::DecRef(Unity.Barracuda.ITensorData,System.Action`1<Unity.Barracuda.ITensorData>)
extern void TensorCachingByShapeAllocator_DecRef_m25C1AEC070268A13AAA0BBD4D5A536D9835C8AEC (void);
// 0x000004F5 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::AdoptFreeBuffer(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_AdoptFreeBuffer_m53BAC9EF87EEE4031F90D67256B929803D803D46 (void);
// 0x000004F6 Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingByShapeAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorCachingByShapeAllocator_Alloc_mFAEA1FC25B2729064CC6849854192302DEF383D0 (void);
// 0x000004F7 Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingByShapeAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_Alloc_m8A266602343BDAA433D665D5AAB95A566FC2FA31 (void);
// 0x000004F8 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorCachingByShapeAllocator_Release_mD89E732E29C24714637F498EB94CE444A4A326AA (void);
// 0x000004F9 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorCachingByShapeAllocator_MoveToDevice_m8C00925CE74363340F98A3920CC4D3A74A9A18AC (void);
// 0x000004FA System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Cast(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_Cast_m7FEF851C01724257392ECB16BC33645BC02B8C8D (void);
// 0x000004FB System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Reset(System.Boolean)
extern void TensorCachingByShapeAllocator_Reset_m1B770518097B355C680C32E60578545D8A0382E1 (void);
// 0x000004FC System.Void Unity.Barracuda.TensorCachingByShapeAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorCachingByShapeAllocator_WaiveOwnership_mA93B09D1C9884B7B7851379F92CF51AFB56E53E5 (void);
// 0x000004FD System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Dispose()
extern void TensorCachingByShapeAllocator_Dispose_m34D2689784DF2FE1B1E9F910C64659399F187F66 (void);
// 0x000004FE System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_busyBytes()
extern void TensorCachingByShapeAllocator_get_busyBytes_m70EDAF72DE120A864A619DCAC09CEB3F3CA82185 (void);
// 0x000004FF System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_freeBytes()
extern void TensorCachingByShapeAllocator_get_freeBytes_m9C4D63B3645E789E5D9F806D9C051F35B34CE57A (void);
// 0x00000500 System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_totalBytes()
extern void TensorCachingByShapeAllocator_get_totalBytes_m9D8645D7C0C55779EE78598F9CA016EAC7DAEA63 (void);
// 0x00000501 System.String Unity.Barracuda.TensorCachingByShapeAllocator::ToString()
extern void TensorCachingByShapeAllocator_ToString_mEC5680E0D8DE1068AC8A920BC09A206736A89B7F (void);
// 0x00000502 System.Void Unity.Barracuda.TensorCachingAllocator::.ctor()
extern void TensorCachingAllocator__ctor_mC79852E4372ADAA07D65730B8FCDEB704A8FCF66 (void);
// 0x00000503 System.Void Unity.Barracuda.TensorCachingAllocator::Finalize()
extern void TensorCachingAllocator_Finalize_mB6A9B52FFB6B642CFE25E0DF7305E47FFA67E22C (void);
// 0x00000504 System.Int32 Unity.Barracuda.TensorCachingAllocator::GetAllocationMaxCount(Unity.Barracuda.Tensor)
extern void TensorCachingAllocator_GetAllocationMaxCount_m5FE2F6D0CF57275E919BE68CA88D554B7BFF9942 (void);
// 0x00000505 System.Void Unity.Barracuda.TensorCachingAllocator::AddRef(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_AddRef_mB1CB04919F102C6A8D6DA7F455263E9EC4880242 (void);
// 0x00000506 System.Void Unity.Barracuda.TensorCachingAllocator::DecRef(Unity.Barracuda.ITensorData,System.Action`1<Unity.Barracuda.ITensorData>)
extern void TensorCachingAllocator_DecRef_m6E548D0DAA7A8869799A12A89BF00E1EE577C055 (void);
// 0x00000507 System.Void Unity.Barracuda.TensorCachingAllocator::AdoptFreeBuffer(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_AdoptFreeBuffer_mDF1C9671586746AD6886632FD014771C5E45EA30 (void);
// 0x00000508 System.Void Unity.Barracuda.TensorCachingAllocator::DisposeAllocatedBuffer(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_DisposeAllocatedBuffer_m5F761C2F36827F37A1148DEE82AC6CE76E6E4245 (void);
// 0x00000509 Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorCachingAllocator_Alloc_mDDB8E02001EE8310F0893892DA8BB43ABE6CCDEB (void);
// 0x0000050A Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_Alloc_m6820AAB2BECBF35711EECD83B192389FEA166B0B (void);
// 0x0000050B System.Void Unity.Barracuda.TensorCachingAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorCachingAllocator_Release_mDA6B332DC51091F308A1FC8C35B828549AD137E7 (void);
// 0x0000050C System.Void Unity.Barracuda.TensorCachingAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorCachingAllocator_MoveToDevice_mA9D414234DA409E262F741A6DEAF900405289FD6 (void);
// 0x0000050D System.Void Unity.Barracuda.TensorCachingAllocator::Cast(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_Cast_m9481EEB8809952D45091A95002AAB6A62311A588 (void);
// 0x0000050E System.Void Unity.Barracuda.TensorCachingAllocator::Reset(System.Boolean)
extern void TensorCachingAllocator_Reset_mE1F7DDD14FE0D64BB13E545D081B260096BCAC0A (void);
// 0x0000050F System.Void Unity.Barracuda.TensorCachingAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorCachingAllocator_WaiveOwnership_m525AA5D6E789A4E8451C31177B21F162BC8F9570 (void);
// 0x00000510 System.Void Unity.Barracuda.TensorCachingAllocator::Dispose()
extern void TensorCachingAllocator_Dispose_m6B2AF38FCF5DF72AAC571AA3513FEBFEB6E52496 (void);
// 0x00000511 System.Int64 Unity.Barracuda.TensorCachingAllocator::get_busyBytes()
extern void TensorCachingAllocator_get_busyBytes_m83D632CEAC516F138A244355415911B54A54D8B1 (void);
// 0x00000512 System.Int64 Unity.Barracuda.TensorCachingAllocator::get_freeBytes()
extern void TensorCachingAllocator_get_freeBytes_m924E624F594E77BEA862BD4D0B446AFF6CAFAAC9 (void);
// 0x00000513 System.Int64 Unity.Barracuda.TensorCachingAllocator::get_totalBytes()
extern void TensorCachingAllocator_get_totalBytes_mD9E5E61D22783762F241863213E96C19F57F4F79 (void);
// 0x00000514 System.String Unity.Barracuda.TensorCachingAllocator::ToString()
extern void TensorCachingAllocator_ToString_mE099DDEF9DB856153786A25B584E6AF395BD46DF (void);
// 0x00000515 System.Void Unity.Barracuda.VerboseOps::.ctor(Unity.Barracuda.IOps)
extern void VerboseOps__ctor_m32B10759BE95AA87D0BCFF54A8FC6C49B7FB34AF (void);
// 0x00000516 System.Void Unity.Barracuda.VerboseOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void VerboseOps_PrepareModel_m9F30D68AA9046659C4A0E6B2B4A9FA32F377EA55 (void);
// 0x00000517 System.Void Unity.Barracuda.VerboseOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void VerboseOps_PreExecuteLayer_mBB0D010E31550D28F759D161C7AB2DA6F5F50328 (void);
// 0x00000518 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Int32,Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_MatMul_mB1FE8FE43982AB6B4BCEEE17F7DFFDF262872ACD (void);
// 0x00000519 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_MatMul_mA7C116377497B3345D55556CDF43DD18115A337A (void);
// 0x0000051A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Dense_mD2A359E87674B1FFF8B8D9D86C835160A5C0EDA1 (void);
// 0x0000051B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Conv2D_mCBAA5ED02D81262659E5BF534B36AB39720BEFC6 (void);
// 0x0000051C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Conv3D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Conv3D_mC751B3757E3896FE0CB54152399F4BEFABF06C71 (void);
// 0x0000051D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_DepthwiseConv2D_m1B06724216C3B90D344616481F771319CDFCA189 (void);
// 0x0000051E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Conv2DTrans_mB741309D707F5F1F1ED88671101622FD3D648640 (void);
// 0x0000051F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_Upsample2D_mBD1A303F094D649E171FFD0D4B5B88E5212A5E2D (void);
// 0x00000520 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Upsample3D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_Upsample3D_mF74E2CCBD8C9A24B33630598D03D931DA20E3824 (void);
// 0x00000521 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_Resample2D_mEC2526113C2C3894D78640E96396526983275ECD (void);
// 0x00000522 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer/DepthToSpaceMode)
extern void VerboseOps_Unity_Barracuda_IOps_DepthToSpace_m31E6873A2A8FD2BC52BA73C5631A23EAA3C49841 (void);
// 0x00000523 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_SpaceToDepth_mF40C9CEDCBBE7387A16B8A981F96D2E18073618A (void);
// 0x00000524 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_MaxPool2D_mB0C2695508535B6AF699BF2FDD486CAE037FAD7A (void);
// 0x00000525 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_AvgPool2D_m6F6F932423DE92D08F5F2F4D61B01D0E94B20BE9 (void);
// 0x00000526 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m760FB861BD5A2E60C01A4713CC434D225F83CEFD (void);
// 0x00000527 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m121F9B2A78E128264A824F0A953AF99CF09421BC (void);
// 0x00000528 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m36967F3037608E0B7114C66F50A2D343A3A81C6C (void);
// 0x00000529 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Border2D_m3C0E38510A353E1AF9B6E1502C6C65BD94B7111E (void);
// 0x0000052A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Border3D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Border3D_mDC0E4AC51B3C2AB54F609B0C8B79B1CA9FD30E8D (void);
// 0x0000052B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DReflect_m04D795C99072874A6DCE319E75A87939C70F56E0 (void);
// 0x0000052C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DSymmetric_m677901B429903DF917EC10E18812A4A8C60E3F47 (void);
// 0x0000052D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DEdge_m0A90812FCFD6562E34C45903E8F0B79DF9B75223 (void);
// 0x0000052E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_ScaleBias_m0FE2664751209BE0B12D1BFA79DC70EA1EA047A4 (void);
// 0x0000052F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer/FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Normalization_m510CE0011B88687B571D2721BD7C79A99EA36C9B (void);
// 0x00000530 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_LRN_m360FBB0682334FC1026C7CCD150DEAE673403F9B (void);
// 0x00000531 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Dropout_mC9E5BD4B27FA2E5F53C1117F2A58352FE8885D25 (void);
// 0x00000532 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_RandomNormal_mF6CAFFBA32E0327D9963BE26B014ED4085BDE067 (void);
// 0x00000533 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_RandomUniform_mD60B5A8361456FB16A8B88969BE9752E46CA095C (void);
// 0x00000534 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Multinomial_m685A0661E991611DBB83101C9038A11DB3BB2AC6 (void);
// 0x00000535 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_OneHot_m1C29964BA66C56D96F46DD18C79EFE3BDB0B596E (void);
// 0x00000536 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.TopKIndices(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_TopKIndices_mF67AF318F192A2090C44E760DECFC163D8601F9B (void);
// 0x00000537 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::TopKValues(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_TopKValues_m692E1CF9EE11ADC0973A96FF33108CEA0B126B71 (void);
// 0x00000538 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::NonZero(Unity.Barracuda.Tensor)
extern void VerboseOps_NonZero_m3B57B645C33F553E83D421CAA282195DB8D284F6 (void);
// 0x00000539 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Relu_m5568251675BAE1F781A1070B72CEDEFD81F2DA48 (void);
// 0x0000053A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Softmax_m8F15C9E0715B946DD537F34B2CCB607A431EB41C (void);
// 0x0000053B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogSoftmax_m662377046DEC7A6F3275A7C12305EDDEBF32A603 (void);
// 0x0000053C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Tanh_m10BA2778AC9B4ACABED35F0600816CE25F3EFF9C (void);
// 0x0000053D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Softplus(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Softplus_m5E87CE939E99DE07188B373A30B93641759BB8A0 (void);
// 0x0000053E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sigmoid_m0DE4B0E3F70569076CA758A498628E43120E591D (void);
// 0x0000053F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Relu6_m8A42425FCDFC375B5447D066152D61146ECE7ACD (void);
// 0x00000540 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Elu_m39758F7BE7552782D53AEF3556DEFC28FE543D52 (void);
// 0x00000541 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_LeakyRelu_m4E2079C6A195D4D819EB62D285F6CEF4FBC48B3F (void);
// 0x00000542 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Selu_m645A2A6EEE157D024F694EE3FF96F62882F400D8 (void);
// 0x00000543 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_PRelu_mD6417A4D85E1B754FF7B931C7341D95173C5EAD9 (void);
// 0x00000544 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Swish_m6B0C4ED0E1845D68A3653D0CFB79823D2CC6F445 (void);
// 0x00000545 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Abs_m088BE47928071D8AE474A890DCBE092397255D9D (void);
// 0x00000546 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Neg_m0768B591B901485057A4AED576780F335395DBEA (void);
// 0x00000547 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Ceil_mBAB3E6976C15E2277C7F81504A344904B263339D (void);
// 0x00000548 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Clip_m0F9C4DF7BC017A55A9F05B8A03E0DF20935B42E0 (void);
// 0x00000549 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Floor_mA7FC391185C8606F05180D572144FCDC9BC4DCBC (void);
// 0x0000054A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Reciprocal_m6DCF40E8E81A5D89362C8F93A5B65237FBB1250B (void);
// 0x0000054B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Pow_m6C91743338BD2B0A037CB155F929ADBB9C8577CD (void);
// 0x0000054C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Exp_m390C513CD00062ED84B22C51280AD65F1FD32AE3 (void);
// 0x0000054D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Log_m82202DBA0B60508034B84A6C74A541AADF6F79B4 (void);
// 0x0000054E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sqrt_m8F3D98AD73D0D9DCCBC7EF231AB252451586E9B0 (void);
// 0x0000054F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Acos(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Acos_m0925A3F778A62FEFE5B7ED65173C66CB9636EFFE (void);
// 0x00000550 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Acosh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Acosh_mC366F95FBB757A0BA5EF948572BE8D90E9F31858 (void);
// 0x00000551 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Asin(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Asin_mAD2C89E0A7640FADAFBD7E0400DC4C2F18091F01 (void);
// 0x00000552 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Asinh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Asinh_mC20F808C02F98E1C8619764FFE3E58ED86059EE3 (void);
// 0x00000553 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Atan(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Atan_m35259A43F0A14FD366025D67555CFDB5DBFEECB7 (void);
// 0x00000554 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Atanh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Atanh_m7DB427B2E963C07C5964D781D9F5A894ED43D092 (void);
// 0x00000555 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Cos(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Cos_mC6B4B2C37A94EBA8D1D140EA61809AFAD405F1D1 (void);
// 0x00000556 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Cosh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Cosh_m49F75860C8649F15FFD8EFFDD2A6A0A0EECF9501 (void);
// 0x00000557 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sin(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sin_mEB6CD8DA83E4E5651EE850A3BDA1AD9EA169FDCF (void);
// 0x00000558 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sinh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sinh_m50C0B698A4C62F60222F0F33C35007342182840F (void);
// 0x00000559 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Tan(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Tan_mB726372EB3C7B14B47BD503CD3E6ED310F5535E6 (void);
// 0x0000055A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Add_m4D9477DBD03373BA1DB6D981D097A1EC7B0DF3A4 (void);
// 0x0000055B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Sub_m885B60F6592BD536C727F9C8E5DA4EDA58F79C71 (void);
// 0x0000055C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Mul_m2E679B4B0811AD7414CDB84C59926E5FA8FE9CA9 (void);
// 0x0000055D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Div_m42559B4353DC8975B105D38370D51BE17C2A7A95 (void);
// 0x0000055E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Pow_mA6758AD3B0FC1F36D258971295A63BBA6275DB47 (void);
// 0x0000055F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Min_m5A4536214FA9B340A71A88B175A83E736D466450 (void);
// 0x00000560 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Max_mCA5F9C1A05F8E22E01B2FDFBA474712A0EA2FE9B (void);
// 0x00000561 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Mean_m33DE60C413F4668AEE7D67E266FBB86A99D6DF66 (void);
// 0x00000562 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMax_mEAD6BB73428796B24FD17DE4E42FE2757A51355D (void);
// 0x00000563 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMean_m3EA466D5E87BC6EEFE9C50CC03C0B3D1793B514E (void);
// 0x00000564 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMin_m9B046D5F70AE5E43017BDE9EC0DC1E4EB7CCFCE6 (void);
// 0x00000565 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceProd_m7783CC02F42E6AE6A7DBE17B3EB243A7054C9EA1 (void);
// 0x00000566 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceSum_m322517FBB08C151235F46B322C8E87E704256C3E (void);
// 0x00000567 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ArgMax(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ArgMax_m1FE4DA1BE9D61FC8CB7B5F126B87E4DCFBFF45D9 (void);
// 0x00000568 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ArgMin(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ArgMin_m1A40A036B36F68553CAE66EA343AA7B20AF8E584 (void);
// 0x00000569 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Greater_m879FE55392618DBA6000A3F30593730403CD4F88 (void);
// 0x0000056A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GreaterEqual_mB16C48CE37DB038E34D8C91D587A3BF396D404FC (void);
// 0x0000056B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Less_mDB073A5469A7A840D86D3915780EADE7A8346780 (void);
// 0x0000056C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LessEqual_m6921F3314CC990BE597C482FDCE9D7B7ED4E67B2 (void);
// 0x0000056D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Equal_mB8E8EBE24BBAFAF60660E2E1A09A2631851DC2FC (void);
// 0x0000056E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalOr_m64947FE9B4A733E8E5D95E421D1C621D94924C2D (void);
// 0x0000056F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalAnd_mED21678AC5C8892CC864F146BE01BBB8D8F7193A (void);
// 0x00000570 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalXor_m077F6B3DCA7BC0324AAD0D69D2AB5F0C8346903D (void);
// 0x00000571 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalNot_mFF5DD5F14CD230CEADE2F4C843D5CE0B21DD6B1D (void);
// 0x00000572 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Where(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Where_m1752CC15F2B06A02CBA13D45387FCABE43109A67 (void);
// 0x00000573 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Flatten_m96474D808F0962B4B48C77C714886B67CFB9696F (void);
// 0x00000574 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void VerboseOps_Unity_Barracuda_IOps_Reshape_mCB77FD446D0E4F8F45EEC3ABC3D089A2EDF9CD09 (void);
// 0x00000575 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void VerboseOps_Unity_Barracuda_IOps_Expand_m30A77194C779BDF79C7911E362A852D4E387AEC6 (void);
// 0x00000576 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Transpose_mB4EC1F169FB4EB1ED31698E2DA6FB301F9736D4C (void);
// 0x00000577 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Transpose_m12E6ABEDA11117E1FE04F5DE19F9100D26541004 (void);
// 0x00000578 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Gather_mC7E16D9A04D10FCAFEA54B379BEF155B3E253D48 (void);
// 0x00000579 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.NonMaxSuppression(Unity.Barracuda.Tensor[],System.Int32,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_NonMaxSuppression_mA688D4609F383A01A5799769A9460CF8F83B7C1C (void);
// 0x0000057A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Concat_m45159247F0104C6DDD73A3AB13921B0647E1A750 (void);
// 0x0000057B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_StridedSlice_m1D95C4BDF372498FFDDBF0C5F288C83AD2926965 (void);
// 0x0000057C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Tile_mDC9A30C335D83F0E854A476D35FE8280C2AD4EEA (void);
// 0x0000057D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Shape(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Shape_mE41FE000D4DAFF89F93E5D1BAAAEFD51E843A61A (void);
// 0x0000057E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Copy_m652FB876E4F5E8EBEFC8C8A63778813CF9B8F055 (void);
// 0x0000057F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Prepare_mD6405C1CE13E1D2322736DDF68E095A136505AC8 (void);
// 0x00000580 System.Void Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_ResetAllocator_m5D959B455A1E52572787A48A29508FC0A1749E27 (void);
// 0x00000581 System.Int32[] Unity.Barracuda.DeprecatedTensorExtensions::AdjustPadToPool(Unity.Barracuda.Tensor,System.ValueTuple`2<System.Int32,System.Int32>,System.Int32[],System.Int32[])
extern void DeprecatedTensorExtensions_AdjustPadToPool_m7BC1EE082A00B7714630ACE9AA3ACF2F92D878FA (void);
// 0x00000582 System.Int32[] Unity.Barracuda.DeprecatedTensorExtensions::AdjustPadToPool(Unity.Barracuda.TensorShape,System.ValueTuple`2<System.Int32,System.Int32>,System.Int32[],System.Int32[])
extern void DeprecatedTensorExtensions_AdjustPadToPool_m8E4BEFC5249239FA59EBB4F8D2544EEB1B6293C5 (void);
// 0x00000583 System.Void Unity.Barracuda.DeprecatedTensorExtensions::PinToDeviceAndUploadToIt(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,System.Boolean)
extern void DeprecatedTensorExtensions_PinToDeviceAndUploadToIt_m51B7BA5DB2F54AC820F69F01EA6F3D64DB3ACE18 (void);
// 0x00000584 System.Void Unity.Barracuda.DeprecatedTensorExtensions::PinToDeviceAndDownloadFromIt(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData)
extern void DeprecatedTensorExtensions_PinToDeviceAndDownloadFromIt_mE9728DF613692B97842A657C20E266E64A189230 (void);
// 0x00000585 Unity.Barracuda.ITensorData Unity.Barracuda.DeprecatedTensorExtensions::Unpin(Unity.Barracuda.Tensor,System.Boolean)
extern void DeprecatedTensorExtensions_Unpin_m702DD747E1DCF80ACF1A7F8C19F5506E6E359444 (void);
// 0x00000586 System.Void Unity.Barracuda.DeprecatedTensorExtensions::CastOnDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData)
extern void DeprecatedTensorExtensions_CastOnDevice_m994EA8B829EF947D97F9761F004354E888553C96 (void);
// 0x00000587 System.Int32[] Unity.Barracuda.DeprecatedTestSetExtensions::GetInputShape(Unity.Barracuda.TestSet,System.Int32)
extern void DeprecatedTestSetExtensions_GetInputShape_m48C33239E65F3F3669D428F80A9B71D3F6C1EF5B (void);
// 0x00000588 System.Int32[] Unity.Barracuda.DeprecatedTestSetExtensions::GetOutputShape(Unity.Barracuda.TestSet,System.Int32)
extern void DeprecatedTestSetExtensions_GetOutputShape_mA361FBB31A2BA26F52B0FF823700FD514576A90B (void);
// 0x00000589 System.Int32 Unity.Barracuda.DeprecatedTensorDataExtensions::GetMaxCount(Unity.Barracuda.ITensorData)
extern void DeprecatedTensorDataExtensions_GetMaxCount_m54E9985D98D8C2F04D0B8920BFADEAD892EA10AF (void);
// 0x0000058A System.Void Unity.Barracuda.DeprecatedWorkerExtensions::AddInput(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_AddInput_mACF2C7DE8FA59DC5495E4FE2EAE0844A311128EC (void);
// 0x0000058B System.Void Unity.Barracuda.DeprecatedWorkerExtensions::AddInput(Unity.Barracuda.IWorker,System.String,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_AddInput_m8BC1A18741CEB9D0712D17D9256C1297F6C5039E (void);
// 0x0000058C Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Peek(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_Peek_m189F90DD18A08FC8192B1F3BDB765AF022BC50A5 (void);
// 0x0000058D Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Peek(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_Peek_m8C02EE5C811C23B305CFB781C7478261399D75DE (void);
// 0x0000058E System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_ExecuteAsync_mFBAA4C7D1DA96748AE3E616F4FE4461518E27A06 (void);
// 0x0000058F System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_ExecuteAsync_mA3620CD270895BE773F9A5B7C0F0B800789799FE (void);
// 0x00000590 System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void DeprecatedWorkerExtensions_ExecuteAsync_m11E32D3554C0EB621FF0487CA5861280834FF1C4 (void);
// 0x00000591 System.Void Unity.Barracuda.DeprecatedWorkerExtensions::WaitForCompletion(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_WaitForCompletion_mAAAEC3CB5D68544213AB3FF7ABF41B25A24894F7 (void);
// 0x00000592 System.Single Unity.Barracuda.DeprecatedWorkerExtensions::GetAsyncProgress(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_GetAsyncProgress_m337B776061E3B6FA2144DC4E327A07228F1BE0C7 (void);
// 0x00000593 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAndWaitForCompletion(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_mB95926DA314412A5CAA922214841ECB29D89AFC1 (void);
// 0x00000594 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAndWaitForCompletion(Unity.Barracuda.IWorker,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m6F67585D9A432E8A35168FECC76433267AB7A11D (void);
// 0x00000595 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::FetchAndTakeOwnership(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_FetchAndTakeOwnership_m105D98DECA9A2686E365D5C005F2F74931F18F61 (void);
// 0x00000596 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::FetchAndTakeOwnership(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_FetchAndTakeOwnership_m1AA814468525FA5BADB112564DC83064E9AA14CF (void);
// 0x00000597 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Fetch(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_Fetch_m60E7DD939C94B48C5B47DE92AB9FB52BCE792716 (void);
// 0x00000598 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Fetch(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_Fetch_m354E3CFF11600C0D87D69BBAE98F0D406E9B5F7D (void);
// 0x00000599 System.Boolean Unity.Barracuda.BarracudaWorkerFactory::IsType(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.BarracudaWorkerFactory/Flags)
extern void BarracudaWorkerFactory_IsType_m8EACFB75B44FA60612E9728E9A2AB9C5F954BB56 (void);
// 0x0000059A System.Void Unity.Barracuda.BarracudaWorkerFactory::.ctor()
extern void BarracudaWorkerFactory__ctor_m08E7DDDE3B8C2D2E3CFDE4CF6293CCED076759BD (void);
// 0x0000059B System.Void Unity.Barracuda.BarracudaTextureUtils::TensorToRenderTexture(Unity.Barracuda.Tensor,UnityEngine.RenderTexture,System.Int32,System.Int32,System.Single,System.Single)
extern void BarracudaTextureUtils_TensorToRenderTexture_m721A21CAC2B86FA1E5E9DAD041F7F49C467F7F91 (void);
// 0x0000059C UnityEngine.RenderTexture Unity.Barracuda.BarracudaTextureUtils::TensorToRenderTexture(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,System.Single)
extern void BarracudaTextureUtils_TensorToRenderTexture_mB1E9B76E8DB30F76239EEE4BDF83090A292B2E3A (void);
// 0x0000059D System.Void Unity.Barracuda.BarracudaTextureUtils::.ctor()
extern void BarracudaTextureUtils__ctor_mAF56D9677DE5246BB5AB4F141E14F29BB70AC908 (void);
// 0x0000059E System.Void Unity.Barracuda.IWorker::PrepareForInput(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x0000059F System.Void Unity.Barracuda.IWorker::SetInput(Unity.Barracuda.Tensor)
// 0x000005A0 System.Void Unity.Barracuda.IWorker::SetInput(System.String,Unity.Barracuda.Tensor)
// 0x000005A1 Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute()
// 0x000005A2 Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute(Unity.Barracuda.Tensor)
// 0x000005A3 Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
// 0x000005A4 System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule()
// 0x000005A5 System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule(Unity.Barracuda.Tensor)
// 0x000005A6 System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
// 0x000005A7 System.Void Unity.Barracuda.IWorker::FlushSchedule(System.Boolean)
// 0x000005A8 System.Single Unity.Barracuda.IWorker::get_scheduleProgress()
// 0x000005A9 Unity.Barracuda.Tensor Unity.Barracuda.IWorker::PeekOutput()
// 0x000005AA Unity.Barracuda.Tensor Unity.Barracuda.IWorker::PeekOutput(System.String)
// 0x000005AB Unity.Barracuda.Tensor[] Unity.Barracuda.IWorker::PeekConstants(System.String)
// 0x000005AC System.String Unity.Barracuda.IWorker::Summary()
// 0x000005AD Unity.Barracuda.Tensor Unity.Barracuda.WorkerExtensions::CopyOutput(Unity.Barracuda.IWorker)
extern void WorkerExtensions_CopyOutput_m1BB942A06E5B376D149ECA7C69ED07AF48B19B79 (void);
// 0x000005AE Unity.Barracuda.Tensor Unity.Barracuda.WorkerExtensions::CopyOutput(Unity.Barracuda.IWorker,System.String)
extern void WorkerExtensions_CopyOutput_m3E1A11FFCE1AF32454AD78A3B1B7114BBB894055 (void);
// 0x000005AF System.Void Unity.Barracuda.ITensorData::Reserve(System.Int32)
// 0x000005B0 System.Void Unity.Barracuda.ITensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
// 0x000005B1 System.Boolean Unity.Barracuda.ITensorData::ScheduleAsyncDownload(System.Int32)
// 0x000005B2 System.Single[] Unity.Barracuda.ITensorData::Download(Unity.Barracuda.TensorShape)
// 0x000005B3 System.Single[] Unity.Barracuda.ITensorData::SharedAccess(System.Int32&)
// 0x000005B4 System.Int32 Unity.Barracuda.ITensorData::get_maxCapacity()
// 0x000005B5 Unity.Jobs.JobHandle Unity.Barracuda.IDependableTensorData::get_fence()
// 0x000005B6 System.Int32 Unity.Barracuda.RecurrentState::InferBatchSize(System.Int32,System.Int32,System.String)
extern void RecurrentState_InferBatchSize_mE84512BCE4ED2BF854CBFF11117CE70A848DACDA (void);
// 0x000005B7 System.Void Unity.Barracuda.RecurrentState::.ctor(Unity.Barracuda.Model,System.Int32,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void RecurrentState__ctor_mBE6670277FF6CD98CC1F69567EC6A4FD8BED155C (void);
// 0x000005B8 System.Void Unity.Barracuda.RecurrentState::Finalize()
extern void RecurrentState_Finalize_m8C59DD6BA2ED7A9857E1369978CD1565FECDB1C9 (void);
// 0x000005B9 System.Void Unity.Barracuda.RecurrentState::Dispose()
extern void RecurrentState_Dispose_m665E6096461807C5B5B6803A89A4F9E005CBB5B7 (void);
// 0x000005BA System.Int32 Unity.Barracuda.RecurrentState::GetBatchSize()
extern void RecurrentState_GetBatchSize_m702D923ECA76DA60BF2518BBF5EC62F4A6439109 (void);
// 0x000005BB System.Void Unity.Barracuda.RecurrentState::BeforeExecution(Unity.Barracuda.IWorker)
extern void RecurrentState_BeforeExecution_m5999B2B92D6CE4210E3D7B262900E26240215C19 (void);
// 0x000005BC System.Void Unity.Barracuda.RecurrentState::AfterExecution(Unity.Barracuda.IWorker)
extern void RecurrentState_AfterExecution_m426154FCB68B59481F03F00A0EFC122760E3A417 (void);
// 0x000005BD Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.String[],System.Boolean,Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.CompareOpsUtils/LogLevel)
extern void WorkerFactory_CreateWorker_mA4247E1449D2BB06CFB277A8CE5E938D1E1EE60F (void);
// 0x000005BE Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/WorkerConfiguration)
extern void WorkerFactory_CreateWorker_mE262964DEC21BB7DE26D9A5C4D04206271F87C2D (void);
// 0x000005BF Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void WorkerFactory_CreateWorker_mD1AC855EFACEF53C784EF8861D00A75CCA32DE36 (void);
// 0x000005C0 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateWorker_mD69251A13B5CD9B12B236FD64247A829E34182C1 (void);
// 0x000005C1 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.Boolean)
extern void WorkerFactory_CreateWorker_m3E0675291B7849956D1CB190E34AE36579CC566D (void);
// 0x000005C2 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.String[],System.Boolean)
extern void WorkerFactory_CreateWorker_m2EB999E23F4FD412758FD0B58D17B837EB1FB1DE (void);
// 0x000005C3 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.Boolean,Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.CompareOpsUtils/LogLevel)
extern void WorkerFactory_CreateWorker_m69FAEED9E860FCD0C942CA85E39997B106D452FB (void);
// 0x000005C4 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory/WorkerConfiguration)
extern void WorkerFactory_CreateWorker_m82C7EB3F5729FA34039DE14C07DD74FAD82AB209 (void);
// 0x000005C5 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateWorker_m636739AB73B7E47CF83B1BF1FBEA10AF00350D0D (void);
// 0x000005C6 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void WorkerFactory_CreateWorker_m98F7C73AC49C00A99223236735EB049ED4850F23 (void);
// 0x000005C7 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.String[],Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void WorkerFactory_CreateWorker_mB8005FB118FCA9A564217A53215081D762E4197F (void);
// 0x000005C8 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateReferenceCPUWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateReferenceCPUWorker_m4D0914F49F79A86A05C284338B43E805D62502CF (void);
// 0x000005C9 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateReferenceComputeWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateReferenceComputeWorker_m5124DED8194772BD4F2C3BA6B0B458C3D0B2C920 (void);
// 0x000005CA Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateComputeWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateComputeWorker_mECA870D914A9DD7ED32A84092E2FAE2764F8C0EF (void);
// 0x000005CB System.Boolean Unity.Barracuda.WorkerFactory::IsType(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.WorkerFactory/Device)
extern void WorkerFactory_IsType_m8F4D31530C672D8D9625D573BEE2A78AC4229EA0 (void);
// 0x000005CC Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.WorkerFactory::GetBestTypeForDevice(Unity.Barracuda.WorkerFactory/Device)
extern void WorkerFactory_GetBestTypeForDevice_mDF129930630298FB7E3AA917A0D3520DF6151858 (void);
// 0x000005CD Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.WorkerFactory::ValidateType(Unity.Barracuda.WorkerFactory/Type)
extern void WorkerFactory_ValidateType_m71410F073F49E3356AEA665C7DCDED70E9A7F789 (void);
// 0x000005CE System.Void Unity.Barracuda.WorkerFactory::.ctor()
extern void WorkerFactory__ctor_mC06CED66F8E802E233FA021E070C0568B275BBA0 (void);
// 0x000005CF System.Boolean Unity.Barracuda.WaitForCompletion::get_keepWaiting()
extern void WaitForCompletion_get_keepWaiting_m6502954DB0BA89F4DD75286FA116B349A306A7CA (void);
// 0x000005D0 System.Void Unity.Barracuda.WaitForCompletion::.ctor(Unity.Barracuda.Tensor)
extern void WaitForCompletion__ctor_mBDB079CD536F90603854259089CF5436BAC96EF3 (void);
// 0x000005D1 Unity.Barracuda.IWorker Unity.Barracuda.ModelExtensions::CreateWorker(Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void ModelExtensions_CreateWorker_m2D0D67F6AD0F297B5ACDA80748118675BB8F9ECB (void);
// 0x000005D2 Unity.Barracuda.IWorker Unity.Barracuda.ModelExtensions::CreateWorker(Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void ModelExtensions_CreateWorker_m9E7C10A8D86E6EC19E3E2751AD99145EADB5FC60 (void);
// 0x000005D3 Unity.Barracuda.IWorker Unity.Barracuda.NNModelExtensions::CreateWorker(Unity.Barracuda.NNModel,Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void NNModelExtensions_CreateWorker_mCCD96CC858EF4535BCFE7A65AD9DE42EDA0E4C69 (void);
// 0x000005D4 Unity.Barracuda.IWorker Unity.Barracuda.NNModelExtensions::CreateWorker(Unity.Barracuda.NNModel,System.String[],System.String[],Unity.Barracuda.WorkerFactory/Device,System.Boolean)
extern void NNModelExtensions_CreateWorker_mFD6641BAEA096F1B3A01EE134D4286E7DDDEB853 (void);
// 0x000005D5 System.Void Unity.Barracuda.D::LogWarning(System.Object)
extern void D_LogWarning_mC1E5DEA04FAA6132805F8BD6449195E03461CBBE (void);
// 0x000005D6 System.Void Unity.Barracuda.D::LogWarning(System.Object,UnityEngine.Object)
extern void D_LogWarning_mD1325BAA80ECB0EE6B9797A1D8153C58D25BACD2 (void);
// 0x000005D7 System.Void Unity.Barracuda.D::LogError(System.Object)
extern void D_LogError_m9745FBF51A76D6FFC9F7E52C8F72E4626F99CA30 (void);
// 0x000005D8 System.Void Unity.Barracuda.D::LogError(System.Object,UnityEngine.Object)
extern void D_LogError_m7466D89488C6552AF6DB4076C7D5C208875A5AD1 (void);
// 0x000005D9 System.Void Unity.Barracuda.D::Log(System.Object)
extern void D_Log_mFC944A27CB9A3607B1A6EC68A50266DC5F2C9E27 (void);
// 0x000005DA System.Void Unity.Barracuda.D::Log(System.Object,UnityEngine.Object)
extern void D_Log_mE6C7BB5FF12F34D9488253DD0B1890834F3F9A7B (void);
// 0x000005DB System.Void Unity.Barracuda.D::.ctor()
extern void D__ctor_m38C0B30D647B7BF53C5D3005191B247409AB72E4 (void);
// 0x000005DC System.Void Unity.Barracuda.D::.cctor()
extern void D__cctor_m4EA0720261D6784A58599FE0936A27CF229C647E (void);
// 0x000005DD System.Void Unity.Barracuda.Debug::.ctor()
extern void Debug__ctor_m7818C7EBF898B85A6ADBA266B8BA4C4C845B1E79 (void);
// 0x000005DE System.Void Unity.Barracuda.NNModel::.ctor()
extern void NNModel__ctor_m64A20F457D008BCA54D60B9EA690388595E44688 (void);
// 0x000005DF System.Void Unity.Barracuda.NNModelData::.ctor()
extern void NNModelData__ctor_m40EF90455D03A267F23CE7CEAB9B60D785575248 (void);
// 0x000005E0 System.Boolean Unity.Barracuda.StringStringPair::Equals(Unity.Barracuda.StringStringPair)
extern void StringStringPair_Equals_mA2A3D5A7DA30BBF27F26BFCD476F549EF60F5D94 (void);
// 0x000005E1 System.Boolean Unity.Barracuda.StringStringPair::Equals(System.Object)
extern void StringStringPair_Equals_m84C1DD09E1C9DE03645F6A3B98707B4690107AE0 (void);
// 0x000005E2 System.Int32 Unity.Barracuda.StringStringPair::GetHashCode()
extern void StringStringPair_GetHashCode_mA3CB1D5E72B000614D9D71FD7EDB6E399BDE7866 (void);
// 0x000005E3 System.Int32 Unity.Barracuda.StringStringLongTriplet::GetHashCode()
extern void StringStringLongTriplet_GetHashCode_m22DD6193AA0700F9FF079B844017A6BFE0F842B0 (void);
// 0x000005E4 System.Boolean Unity.Barracuda.StringStringLongTriplet::Equals(Unity.Barracuda.StringStringLongTriplet)
extern void StringStringLongTriplet_Equals_mDC26A56AF98A76ED562B1E0E722914F142A14726 (void);
// 0x000005E5 System.Boolean Unity.Barracuda.StringStringLongTriplet::Equals(System.Object)
extern void StringStringLongTriplet_Equals_m89BD8DE2D352694DB9B12979CFF4EB40A0E09602 (void);
// 0x000005E6 System.String Unity.Barracuda.StringCache::Lookup(System.String,System.String)
extern void StringCache_Lookup_m4405B6FBA30CA8612BD296CA10E5946D06799238 (void);
// 0x000005E7 System.String Unity.Barracuda.StringCache::Lookup(System.String,System.String,System.Int64)
extern void StringCache_Lookup_m5E430EA744A912C0DC170458175EC07969A80CD9 (void);
// 0x000005E8 System.Void Unity.Barracuda.StringCache::Clear()
extern void StringCache_Clear_m647175ADE183F44333A43AF329120071A3F69726 (void);
// 0x000005E9 System.Void Unity.Barracuda.StringCache::.ctor()
extern void StringCache__ctor_mBB8A343710F659E2AD3055EB4CFC7C96268D0AB9 (void);
// 0x000005EA System.Void Unity.Barracuda.TestSet::.ctor(Unity.Barracuda.RawTestSet)
extern void TestSet__ctor_mAE48AA7E397E16D499EB20B83BC4FED195F552B7 (void);
// 0x000005EB System.Void Unity.Barracuda.TestSet::.ctor(Unity.Barracuda.JSONTestSet)
extern void TestSet__ctor_mC3DA30A91E0619F69243BD0A6EEAE99718432FC3 (void);
// 0x000005EC System.Void Unity.Barracuda.TestSet::.ctor()
extern void TestSet__ctor_m4C4EEF1A7D10D20E4AF46109E7CE64E09B86BF33 (void);
// 0x000005ED System.Boolean Unity.Barracuda.TestSet::SupportsNames()
extern void TestSet_SupportsNames_m1414F067D9C70A51DDA507164EBA63E583D17B1C (void);
// 0x000005EE System.Int32 Unity.Barracuda.TestSet::GetOutputCount()
extern void TestSet_GetOutputCount_mDC81B7F7E539DB77475AD88225BAECC67B06ED73 (void);
// 0x000005EF System.Single[] Unity.Barracuda.TestSet::GetOutputData(System.Int32)
extern void TestSet_GetOutputData_m4A591AEAB7A8967E6A3883CEB5BFEBFEDD12D8D4 (void);
// 0x000005F0 System.String Unity.Barracuda.TestSet::GetOutputName(System.Int32)
extern void TestSet_GetOutputName_m44E229137DBB586FE5033977F0BFB58231D1AFD0 (void);
// 0x000005F1 System.Int32 Unity.Barracuda.TestSet::GetInputCount()
extern void TestSet_GetInputCount_m6CF241EEDFA1E7F68C730D5C981D447ED7706F25 (void);
// 0x000005F2 System.String Unity.Barracuda.TestSet::GetInputName(System.Int32)
extern void TestSet_GetInputName_m1B132CF17FEB95B9023FD949563DA0B450017254 (void);
// 0x000005F3 System.Single[] Unity.Barracuda.TestSet::GetInputData(System.Int32)
extern void TestSet_GetInputData_m9ED44ED66AA3E7B1D61F4BBF4303D73963D849F9 (void);
// 0x000005F4 Unity.Barracuda.TensorShape Unity.Barracuda.TestSet::GetInputShape(System.Int32)
extern void TestSet_GetInputShape_m39AB84E5C27AD0366E42C907F3DF9C315D2A9A5E (void);
// 0x000005F5 Unity.Barracuda.TensorShape Unity.Barracuda.TestSet::GetOutputShape(System.Int32)
extern void TestSet_GetOutputShape_m254934E9DE6A7200A07E34E2FF6CDA190C803BFD (void);
// 0x000005F6 System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor> Unity.Barracuda.TestSet::GetInputsAsTensorDictionary(System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>,System.Int32,System.Int32)
extern void TestSet_GetInputsAsTensorDictionary_mD4D05873C892B567CE45DB7A8ED091FBE0984D9D (void);
// 0x000005F7 System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor> Unity.Barracuda.TestSet::GetOutputsAsTensorDictionary(System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>,System.Int32,System.Int32)
extern void TestSet_GetOutputsAsTensorDictionary_m79D99F90B60D948582113F1C4B6ABBCB01DCE184 (void);
// 0x000005F8 Unity.Barracuda.Tensor Unity.Barracuda.TestSet::GetInputAsTensor(System.Int32,System.Int32,System.Int32)
extern void TestSet_GetInputAsTensor_m2F8FB3CC34084D7E17913A860F9C41E36EC7AA3A (void);
// 0x000005F9 Unity.Barracuda.Tensor Unity.Barracuda.TestSet::GetOutputAsTensor(System.Int32,System.Int32,System.Int32)
extern void TestSet_GetOutputAsTensor_m626F65EC5A2741192EBDA6B40E5136F6D64080C5 (void);
// 0x000005FA System.Void Unity.Barracuda.RawTestSet::.ctor()
extern void RawTestSet__ctor_m9911E3BE12E0A4B02E54CCA5F9A54EA39ACCC9AC (void);
// 0x000005FB System.Void Unity.Barracuda.JSONTestSet::.ctor()
extern void JSONTestSet__ctor_m6E33922CD71D0BA0716FBF98AEDC9AA1B86E109B (void);
// 0x000005FC System.Void Unity.Barracuda.JSONTensorShape::.ctor()
extern void JSONTensorShape__ctor_m3DD64A3A32DA81D61095A30A841783A44BFCF3EA (void);
// 0x000005FD System.Void Unity.Barracuda.JSONTensor::.ctor()
extern void JSONTensor__ctor_mB62E892AEEBF27722941C04F10815AB0B00BF217 (void);
// 0x000005FE Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::Load(System.String)
extern void TestSetLoader_Load_mA2EABB824DC64699562885CBAC82698D84A2E4DC (void);
// 0x000005FF Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::LoadGZ(System.String)
extern void TestSetLoader_LoadGZ_mB3F51B78F754A741C0D5AF98EBF02BFA9539913A (void);
// 0x00000600 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::LoadJSON(System.String)
extern void TestSetLoader_LoadJSON_m70FE361959E941FA9BF55CB4119302FBC27C5249 (void);
// 0x00000601 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::LoadRaw(System.String)
extern void TestSetLoader_LoadRaw_m4DAA0CFB90ACD9D7365F7688374221CF39FCC3DB (void);
// 0x00000602 UnityEngine.Texture Unity.Barracuda.TestSetLoader::LoadImage(System.String)
extern void TestSetLoader_LoadImage_mB5CFA56D010A86AA2AF30739953C76EAA2E69D5F (void);
// 0x00000603 System.Single[] Unity.Barracuda.TestSetLoader::LoadFloatArray(System.IO.BinaryReader)
extern void TestSetLoader_LoadFloatArray_m1FAACC3352D267B0ED419FA1BD588115E606D25D (void);
// 0x00000604 System.IO.BinaryReader Unity.Barracuda.TestSetLoader::Open(System.String)
extern void TestSetLoader_Open_mA6798E6ABE1543210A358F57D41E759630F4F919 (void);
// 0x00000605 System.Void Unity.Barracuda.TestSetLoader::.ctor()
extern void TestSetLoader__ctor_m0BF317DD569444C30D3CD70C02D5B8FDC0CA2311 (void);
// 0x00000606 System.Void Unity.Barracuda.Layer::.ctor(System.String)
extern void Layer__ctor_m98F75B8668E7E0F4D0D86603D0385A64F92C161D (void);
// 0x00000607 System.Void Unity.Barracuda.Layer::.ctor(System.String,Unity.Barracuda.Layer/Type,Unity.Barracuda.Layer/Activation)
extern void Layer__ctor_mECB559E4EDAC6963DFA8E92219059DDA59DE41AB (void);
// 0x00000608 System.Void Unity.Barracuda.Layer::.ctor(System.String,Unity.Barracuda.Layer/Activation)
extern void Layer__ctor_mA7C8008AB7F913CD3630EE4D003DB1FF396EF141 (void);
// 0x00000609 System.String Unity.Barracuda.Layer::ToString()
extern void Layer_ToString_m3C51C93D7549CECA12D544A65506E5C53531A9B1 (void);
// 0x0000060A Unity.Barracuda.Tensor Unity.Barracuda.Layer::DataSetToTensor(System.Int32)
extern void Layer_DataSetToTensor_mF4161369797512CF4C8838C50D209A2334D56D8C (void);
// 0x0000060B System.Void Unity.Barracuda.Layer::ApplyTensorToDataSet(Unity.Barracuda.Tensor,System.Int32)
extern void Layer_ApplyTensorToDataSet_mECDCD2297EDC3D0CFE6AD019642E881EB0B90CB5 (void);
// 0x0000060C System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning> Unity.Barracuda.Model::get_Warnings()
extern void Model_get_Warnings_m90942E6445F1A582D9A0C00DC4C9CDCD21E05CE1 (void);
// 0x0000060D Unity.Barracuda.Model Unity.Barracuda.Model::ShallowCopy()
extern void Model_ShallowCopy_mE5E744E30B1B6B59E728064C02905D64E07D2AC7 (void);
// 0x0000060E System.String Unity.Barracuda.Model::ToString()
extern void Model_ToString_mA8E93183150B8D99C22185C52B8CB68A333BDC31 (void);
// 0x0000060F System.Void Unity.Barracuda.Model::Compile()
extern void Model_Compile_mC9D33FAE64E6AC312EFC292A5A869603E65C56D1 (void);
// 0x00000610 System.Void Unity.Barracuda.Model::.ctor()
extern void Model__ctor_mBA6C30F23DE242ED36321D508586E994B91F3DB7 (void);
// 0x00000611 Unity.Barracuda.Tensor Unity.Barracuda.ModelMetadataExtensions::GetTensorByName(Unity.Barracuda.Model,System.String)
extern void ModelMetadataExtensions_GetTensorByName_m5AAFE6ACC4356D9D754883979B9E28624F00895B (void);
// 0x00000612 System.Nullable`1<Unity.Barracuda.TensorShape> Unity.Barracuda.ModelMetadataExtensions::GetShapeByName(Unity.Barracuda.Model,System.String)
extern void ModelMetadataExtensions_GetShapeByName_m799D1C48E21FC184C8879FD8D95E2359EB2D6801 (void);
// 0x00000613 System.Int32 Unity.Barracuda.ModelMetadataExtensions::GetDownStreamLayersCount(Unity.Barracuda.Model,System.String)
extern void ModelMetadataExtensions_GetDownStreamLayersCount_m28843DEA128BFF930FCFDD412856A4A24CF77E0A (void);
// 0x00000614 Unity.Barracuda.Model Unity.Barracuda.ModelBuilder::get_model()
extern void ModelBuilder_get_model_mBC4D25624DBB9F715D6EC71D9B97197A6DBF5BA5 (void);
// 0x00000615 System.Void Unity.Barracuda.ModelBuilder::.ctor(Unity.Barracuda.Model)
extern void ModelBuilder__ctor_m1E645F07C99EDAAEDB77906B792E4D9095B3D19B (void);
// 0x00000616 Unity.Barracuda.Model/Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32[],System.Int32)
extern void ModelBuilder_Input_m08E6260E00BE4E0426023E3E3B87D1EE559D0636 (void);
// 0x00000617 Unity.Barracuda.Model/Input Unity.Barracuda.ModelBuilder::Input(System.String,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Input_m68AB39788E61FCA32C59859D54CED42C16752FC8 (void);
// 0x00000618 Unity.Barracuda.Model/Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32,System.Int32)
extern void ModelBuilder_Input_mBE78FACAD56BE6E817C4E4934E5C847E309791C2 (void);
// 0x00000619 Unity.Barracuda.Model/Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ModelBuilder_Input_m55AD560DB0A9DEE5E94BA07055A161BD7FE06BBF (void);
// 0x0000061A System.String Unity.Barracuda.ModelBuilder::Output(System.Object)
extern void ModelBuilder_Output_m4609CB77EA3ABCD632006497A592B785EA6F152B (void);
// 0x0000061B Unity.Barracuda.Model/Memory Unity.Barracuda.ModelBuilder::Memory(System.Object,System.Object,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Memory_m90A9A290418E41FF5D658087648D9D1B08DE5528 (void);
// 0x0000061C System.String Unity.Barracuda.ModelBuilder::ResolveInput(System.Object)
extern void ModelBuilder_ResolveInput_mCAEEABEA0E4F51A55D555ED1CA740262F70D1C92 (void);
// 0x0000061D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Const(System.String,Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void ModelBuilder_Const_mBDB7F78DDDDFC6D2821C933145440F33AABACABB (void);
// 0x0000061E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::ScaleBias(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_ScaleBias_m67BB710600A343DE671A41B5D58A7633B2664993 (void);
// 0x0000061F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LRN(System.String,System.Object,System.Single,System.Single,System.Single,System.Int32)
extern void ModelBuilder_LRN_mDB1E6D72AFC4BFE6624BC569F6B1FE536B0D49E5 (void);
// 0x00000620 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Shape(System.String,System.Object,System.Int32)
extern void ModelBuilder_Shape_m5185C5ACFBF8EEF28BE3073FEEF4D53909AA4FF8 (void);
// 0x00000621 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Normalization(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single)
extern void ModelBuilder_Normalization_m6D0076F4E0A95C9B440127169AB75FC8B823937E (void);
// 0x00000622 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Dense(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Dense_m0D50B1D0A2A2C201A6A00A9B1B80FD000535AA47 (void);
// 0x00000623 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::MatMul(System.String,System.Object,System.Object)
extern void ModelBuilder_MatMul_m2AF70E76D8C24A1310E74E1159AC0E12D743E1FC (void);
// 0x00000624 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv(System.String,Unity.Barracuda.Layer/Type,System.Object,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv_m786CFCA3BFE497D3E5B360B277A7DF1DD112201A (void);
// 0x00000625 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv2D(System.String,System.Object,System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv2D_mAF05158B746401BB4DD9AD90CB3953EAE416D748 (void);
// 0x00000626 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv3D(System.String,System.Object,System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv3D_m34600E8E31662E8134C133AD0187B542F005E72F (void);
// 0x00000627 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::DepthwiseConv2D(System.String,System.Object,System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_DepthwiseConv2D_m4268DFCD654D6867F97EAB8C9748EE40563DE03E (void);
// 0x00000628 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv2DTrans(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv2DTrans_m94354EE71EE6909AAC41B4015B24B99F7A09E365 (void);
// 0x00000629 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pool(Unity.Barracuda.Layer/Type,System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_Pool_m0CE7779FDFD0A0BB2FEE743012C214D4E449CC47 (void);
// 0x0000062A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::AvgPool2D(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_AvgPool2D_m8A376BA63275EBFF93394F1D7A875518B7442EE9 (void);
// 0x0000062B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::MaxPool2D(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_MaxPool2D_m2098CDA02E3F09D56A424605AF47A9B4073B432C (void);
// 0x0000062C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GlobalAvgPool2D(System.String,System.Object)
extern void ModelBuilder_GlobalAvgPool2D_m97F6B024DE92898E3F122D5DE25D7AF94E3BB5E3 (void);
// 0x0000062D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GlobalMaxPool2D(System.String,System.Object)
extern void ModelBuilder_GlobalMaxPool2D_m21DA87538B886EA478B89E53F4DEFD2C9719D8EB (void);
// 0x0000062E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Upsample2D(System.String,System.Object,System.Int32[],System.Boolean)
extern void ModelBuilder_Upsample2D_m1AA1D4585DC09B1674FE3DB56FCF7EA14873616B (void);
// 0x0000062F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Upsample2D(System.String,System.Object,System.Object,System.Boolean)
extern void ModelBuilder_Upsample2D_m8BACC0AAF5B164D07DD01833D323E021B44266AB (void);
// 0x00000630 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Upsample3D(System.String,System.Object,System.Int32[],System.Boolean)
extern void ModelBuilder_Upsample3D_m1B9657001FF7AD17D97689BCA690953DF6D9ACF3 (void);
// 0x00000631 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Upsample3D(System.String,System.Object,System.Object,System.Boolean)
extern void ModelBuilder_Upsample3D_mE3D5E487CBF91A19914B1232921DDD4F07D9335D (void);
// 0x00000632 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Resample2D(System.String,System.Object,System.Int32[],System.Boolean)
extern void ModelBuilder_Resample2D_mF409BACDD435154B8C13619F9CF0B90E1D60B1C5 (void);
// 0x00000633 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Resample2D(System.String,System.Object,System.Object,System.Boolean)
extern void ModelBuilder_Resample2D_mFF6C9ED45FA0588C0330FC377271757B2BFDE6CF (void);
// 0x00000634 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::DepthToSpace(System.String,System.Object,System.Int32,System.String)
extern void ModelBuilder_DepthToSpace_mB11C87A0460115907136AAF98894EACCBFA35C0E (void);
// 0x00000635 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::SpaceToDepth(System.String,System.Object,System.Int32)
extern void ModelBuilder_SpaceToDepth_m50AA5794F43A9398BA95B372BB3B0867BFF70551 (void);
// 0x00000636 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,System.Int32[],System.Int32)
extern void ModelBuilder_Reshape_m64DF2F89BB017C516B21C08848A6919654A35500 (void);
// 0x00000637 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::ConstantOfShape(System.String,System.Object,System.Single)
extern void ModelBuilder_ConstantOfShape_mC9C249DDD3BC243AAC42A88B557C2F22ABA60365 (void);
// 0x00000638 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Reshape_m398D09FE293CF098A60B1667877668F236C5C168 (void);
// 0x00000639 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,System.Object)
extern void ModelBuilder_Reshape_m1CAFE347F492CE807DDB26C2730D5CAB11A4C622 (void);
// 0x0000063A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Expand(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Expand_m43D23F21CC06D18613DE0920A5771600B9AD16C7 (void);
// 0x0000063B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Expand(System.String,System.Object,System.Object)
extern void ModelBuilder_Expand_m83D0A1AEA841F61629E6468FD4D5D55F7A698533 (void);
// 0x0000063C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Flatten(System.String,System.Object)
extern void ModelBuilder_Flatten_m9BCD3ECADFB7E7843991AF9221F44BB5D5A613A8 (void);
// 0x0000063D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Concat(System.String,System.Object[],System.Int32,System.Boolean)
extern void ModelBuilder_Concat_mBFF64E2041C3601B3B6072C60F30C897820B6771 (void);
// 0x0000063E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::StridedSlice(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_StridedSlice_m671F18D539F448E4784E65301795E2E7D421365C (void);
// 0x0000063F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::StridedSlice(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_StridedSlice_mE75081CBEEA273A04D1264BA21332AE98DE9FAB9 (void);
// 0x00000640 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Tile(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Tile_m0D8121817BBA71FF0C24C14D2F26A06F68461CA0 (void);
// 0x00000641 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Tile(System.String,System.Object,System.Object)
extern void ModelBuilder_Tile_mCC5FD5968B567047CD7307FB48BFB57D84DBD3AA (void);
// 0x00000642 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Copy(System.String,System.Object)
extern void ModelBuilder_Copy_m4E03B2D17B2DBB440FAF65D94AA3A49FDC390945 (void);
// 0x00000643 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::OneHot(System.String,System.Object,System.Int32,System.Int32,System.Int32)
extern void ModelBuilder_OneHot_m9F36AD12368067CF3DFA80D6CA10BB4FEFCDFC63 (void);
// 0x00000644 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::TopKIndices(System.String,System.Object,System.Object,System.Int32,System.Boolean,System.Boolean)
extern void ModelBuilder_TopKIndices_m3C04286DFB8BD180ABFC9265AC07C2B1400DA8DF (void);
// 0x00000645 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::TopKValues(System.String,System.Object,System.Object,System.Int32)
extern void ModelBuilder_TopKValues_mEB0DCD80D7899F15886798AECB5582B004624567 (void);
// 0x00000646 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::NonZero(System.String,System.Object)
extern void ModelBuilder_NonZero_mC8770C98D522AD736DF4F4F2B40D0B989093DF51 (void);
// 0x00000647 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Transpose(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Transpose_m6217DF8C49B42165BAD34E1E4B78A58786C9AE1A (void);
// 0x00000648 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Squeeze(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Squeeze_mF36890E0C5E57CB31254D24A886DF6DA39F1514C (void);
// 0x00000649 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Unsqueeze(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Unsqueeze_mD583EC4796648EC35E682C72E7254AD088B1A47D (void);
// 0x0000064A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Activation(Unity.Barracuda.Layer/Activation,System.String,System.Object)
extern void ModelBuilder_Activation_mFC079F005F3C23700FA3BB0F7E43FA3A3FACD55E (void);
// 0x0000064B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Identity(System.String,System.Object,System.Int32)
extern void ModelBuilder_Identity_m2A093F7F8248AA7F04A7A7EA665E96CEC76E789F (void);
// 0x0000064C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Relu(System.String,System.Object)
extern void ModelBuilder_Relu_mF06C5AA5B861E626581AE5EB73D8FA13BC649C4B (void);
// 0x0000064D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Softmax(System.String,System.Object,System.Int32,System.Boolean)
extern void ModelBuilder_Softmax_mA3711A2D73FA1338DDC0679FE0123D201070FBED (void);
// 0x0000064E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogSoftmax(System.String,System.Object)
extern void ModelBuilder_LogSoftmax_m9035B4DC5C72688B15BC62A792764A7F6408C300 (void);
// 0x0000064F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sqrt(System.String,System.Object)
extern void ModelBuilder_Sqrt_m8A33169D72840F9B8367372593A1661B31FC87D3 (void);
// 0x00000650 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Tanh(System.String,System.Object)
extern void ModelBuilder_Tanh_mDE12860BD10C6AFB8514D12BBDF931A3B255A041 (void);
// 0x00000651 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Softplus(System.String,System.Object)
extern void ModelBuilder_Softplus_mC5D4FE4B044FAB122212AC28532CDBE813BB800C (void);
// 0x00000652 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sigmoid(System.String,System.Object)
extern void ModelBuilder_Sigmoid_m22A8D65CAA417C34D89BDF0D396EA98549899260 (void);
// 0x00000653 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Elu(System.String,System.Object,System.Single)
extern void ModelBuilder_Elu_m78A63CBB5D5F9A7E960251518DB9280B78A8A75F (void);
// 0x00000654 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Relu6(System.String,System.Object)
extern void ModelBuilder_Relu6_m29CECFCFD5D78B54549F19166D858437195AFDEC (void);
// 0x00000655 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LeakyRelu(System.String,System.Object,System.Single)
extern void ModelBuilder_LeakyRelu_m8EF14F850A81E4FBE0676A06E79EE09A4F7D7983 (void);
// 0x00000656 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Selu(System.String,System.Object,System.Single,System.Single)
extern void ModelBuilder_Selu_m146071F53F772FA3717E26E52387478B56362540 (void);
// 0x00000657 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::PRelu(System.String,System.Object,System.Object)
extern void ModelBuilder_PRelu_m092E585C827AD94F8659A36B6B4E3EE785931E97 (void);
// 0x00000658 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Swish(System.String,System.Object)
extern void ModelBuilder_Swish_m6B2D92B83AB673979A0F08CB6255598D407FCF04 (void);
// 0x00000659 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Clip(System.String,System.Object,System.Single,System.Single)
extern void ModelBuilder_Clip_m4BB31E8002B8E3DE56C54DBA0E32BF93275D6426 (void);
// 0x0000065A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Exp(System.String,System.Object)
extern void ModelBuilder_Exp_m694342338B419DC84D39B0499072176943976C18 (void);
// 0x0000065B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Log(System.String,System.Object)
extern void ModelBuilder_Log_m7D34CD470975EE1D4A16DB910D37D2876963EBBC (void);
// 0x0000065C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Neg(System.String,System.Object)
extern void ModelBuilder_Neg_m24F23CD7CDD17399403EB1314C81B2456FD3CA8C (void);
// 0x0000065D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reciprocal(System.String,System.Object)
extern void ModelBuilder_Reciprocal_m4607C997173368762344B87D32AB84B78305AE82 (void);
// 0x0000065E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Abs(System.String,System.Object)
extern void ModelBuilder_Abs_mCB54C37B5CF85614C4CA1676BD6E3608D5C170A9 (void);
// 0x0000065F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Ceil(System.String,System.Object)
extern void ModelBuilder_Ceil_mD2197BC47FA783FF11F957DF2D4934EB6BE02B1D (void);
// 0x00000660 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Floor(System.String,System.Object)
extern void ModelBuilder_Floor_mFBE84B880211CFC1EC2C0F3802F0B89071033D45 (void);
// 0x00000661 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Round(System.String,System.Object)
extern void ModelBuilder_Round_m8D26099E8B33A3CFC091A6E732D3748D8C6B8FF3 (void);
// 0x00000662 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Acos(System.String,System.Object)
extern void ModelBuilder_Acos_m6C6E6223FB20A05C8AEE425146A78ABF47090F20 (void);
// 0x00000663 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Acosh(System.String,System.Object)
extern void ModelBuilder_Acosh_mBFECF3AD480590B15BEFF468DCC50CC14CD83C05 (void);
// 0x00000664 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Asin(System.String,System.Object)
extern void ModelBuilder_Asin_mC62A8DFBDCCD9D754F4751A0C1A2F49F693A5040 (void);
// 0x00000665 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Asinh(System.String,System.Object)
extern void ModelBuilder_Asinh_m9901633C9BA713AB56D382238C03D6F71D78B313 (void);
// 0x00000666 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Atan(System.String,System.Object)
extern void ModelBuilder_Atan_m77983E0F6867528DFFCB99B8395D0BE7CEDE360F (void);
// 0x00000667 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Atanh(System.String,System.Object)
extern void ModelBuilder_Atanh_m690A321C5A3C4E39C7EC3BE86C6F6705967AFE80 (void);
// 0x00000668 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Cos(System.String,System.Object)
extern void ModelBuilder_Cos_mF26958DD83A6F45EFC442B356F9785CD2C76EA7F (void);
// 0x00000669 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Cosh(System.String,System.Object)
extern void ModelBuilder_Cosh_mEA9F06AA5E53EC48F4D1893364ED2AA29E542A18 (void);
// 0x0000066A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sin(System.String,System.Object)
extern void ModelBuilder_Sin_m200DC167D96D97CE3E77CD9942E0E39D6AD82CB2 (void);
// 0x0000066B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sinh(System.String,System.Object)
extern void ModelBuilder_Sinh_mC0D56FF51BA927645388DC5A7253F134F933177A (void);
// 0x0000066C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Tan(System.String,System.Object)
extern void ModelBuilder_Tan_m4BED0C12809C0D692369EA83FD25C9474D54EA30 (void);
// 0x0000066D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Broadcast(Unity.Barracuda.Layer/Type,System.String,System.Object[])
extern void ModelBuilder_Broadcast_m96D0DD93E249E38C1E95AFA4A7B86498BEF6416F (void);
// 0x0000066E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Add(System.String,System.Object[])
extern void ModelBuilder_Add_m4CD289C4AA2ADB7FB1DE70925561BEC58929384F (void);
// 0x0000066F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sub(System.String,System.Object[])
extern void ModelBuilder_Sub_m8F3B4C97C0270EA288CBE8044394B3BD0CE4C679 (void);
// 0x00000670 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Mul(System.String,System.Object[])
extern void ModelBuilder_Mul_m676C9BBE6A089CDB8A4904741D94AAF0DE1359A2 (void);
// 0x00000671 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Div(System.String,System.Object[])
extern void ModelBuilder_Div_m42B365CBA409DD9918ADCA0049C390584457E328 (void);
// 0x00000672 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pow(System.String,System.Object[])
extern void ModelBuilder_Pow_m416864059938921634B8FB9C1F6E919A0A5E7586 (void);
// 0x00000673 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Min(System.String,System.Object[])
extern void ModelBuilder_Min_mBC48D73CF8DE866CFAD7B63ADAC3054749F12E8C (void);
// 0x00000674 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Max(System.String,System.Object[])
extern void ModelBuilder_Max_m3C9D1B5686740F780030C5B3CE3B4F5AF2A71DEB (void);
// 0x00000675 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Mean(System.String,System.Object[])
extern void ModelBuilder_Mean_m5F0332622209C826F99A167AD548D35BA63AD448 (void);
// 0x00000676 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Greater(System.String,System.Object,System.Object)
extern void ModelBuilder_Greater_mDD2DDC392DBCD92C459D47E01FBC1E06A89F3F1E (void);
// 0x00000677 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GreaterEqual(System.String,System.Object,System.Object)
extern void ModelBuilder_GreaterEqual_m097FE159BAF73DF2594852D9AE2125CEC1918104 (void);
// 0x00000678 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Less(System.String,System.Object,System.Object)
extern void ModelBuilder_Less_m16327823C713BB1EA9D1E1CB7909B2097A8DF8D5 (void);
// 0x00000679 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LessEqual(System.String,System.Object,System.Object)
extern void ModelBuilder_LessEqual_m49DBE984C9A368A63CA3FB1C37E0F3E00AD750BA (void);
// 0x0000067A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Equal(System.String,System.Object,System.Object)
extern void ModelBuilder_Equal_m95F4EC55F798DDA5FC90F8D2699EBB69CFCFA463 (void);
// 0x0000067B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalAnd(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalAnd_m07BAE5E21791EC8D9D02B40B23AA7BB9ABF29DF9 (void);
// 0x0000067C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalOr(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalOr_mDD38485BC954895162F9351FEE521928F7E0030E (void);
// 0x0000067D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalXor(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalXor_m97491B5A669E9301CFCC3E7921A7200920F3A651 (void);
// 0x0000067E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalNot(System.String,System.Object)
extern void ModelBuilder_LogicalNot_m2E648BE4DC991F9800B2051BC23688C9165968F6 (void);
// 0x0000067F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Where(System.String,System.Object,System.Object,System.Object)
extern void ModelBuilder_Where_m32764B54189EE0D2108D16E6F9CFA78479685263 (void);
// 0x00000680 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad(Unity.Barracuda.Layer/Type,System.String,System.Object,System.Int32[],System.Single)
extern void ModelBuilder_Pad_mD18ECA5D7432EFDA78CE90CDB48D7B655C8BF551 (void);
// 0x00000681 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Border2D(System.String,System.Object,System.Int32[],System.Single)
extern void ModelBuilder_Border2D_mC11EBD6FD37156A661631172BBFF7CD3474B875D (void);
// 0x00000682 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Border3D(System.String,System.Object,System.Int32[],System.Single)
extern void ModelBuilder_Border3D_m73F9899C885CD202A42CDFCDC6218962FFD0304B (void);
// 0x00000683 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2DEdge(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2DEdge_mE5EBA5C11B9B2AC1CC03802EF1E0CB8F85EF82A3 (void);
// 0x00000684 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2DReflect(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2DReflect_mEFEE08AF869DF07588234C46ACBD990F66D71D9C (void);
// 0x00000685 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2Symmetric(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2Symmetric_m72723F04062B229A537BEF07C6B463F03EBA78CC (void);
// 0x00000686 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomNormal(System.String,System.Object,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomNormal_mA36C69E48F7C7B1D1F647E71D55F479349ED1A86 (void);
// 0x00000687 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomNormal(System.String,Unity.Barracuda.TensorShape,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomNormal_m59726391E325B9767C0AA5E199B318ADB6661B5E (void);
// 0x00000688 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomUniform(System.String,System.Object,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomUniform_mAC32D7DFD1C2545BA5D9EFB27B6FA37C9C79569C (void);
// 0x00000689 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomUniform(System.String,Unity.Barracuda.TensorShape,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomUniform_m98FAAC8A14A2E63BE29E9400510A55BADFCB4ECD (void);
// 0x0000068A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Multinomial(System.String,System.Object,System.Int32,System.Single)
extern void ModelBuilder_Multinomial_m450305B8344BD320519D95ECABA490F97C6540A9 (void);
// 0x0000068B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reduce(Unity.Barracuda.Layer/Type,System.String,System.Object,System.Int32,System.Boolean,System.Int32)
extern void ModelBuilder_Reduce_mD44650E9FB3EC8AF080C7CFD184EF25D075DA6E0 (void);
// 0x0000068C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Gather(System.String,System.Object,System.Object,System.Int32,System.Boolean)
extern void ModelBuilder_Gather_m43BD72111D79E708BFE1D0FEE25A7E768DFB8733 (void);
// 0x0000068D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::NonMaxSuppression(System.String,System.Object,System.Object,System.Object,System.Object,System.Object,System.Int32)
extern void ModelBuilder_NonMaxSuppression_m0939C2419B46F1D51D978B9957129A358619483B (void);
// 0x0000068E Unity.Barracuda.Layer[] Unity.Barracuda.ModelBuilder::LSTM(System.String,System.Object,System.String[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32)
extern void ModelBuilder_LSTM_mE6FE31B23CA67C10DC189723A144CAFC920AAF1B (void);
// 0x0000068F System.String Unity.Barracuda.ModelBuilder::<MatMul>b__17_0(System.Object)
extern void ModelBuilder_U3CMatMulU3Eb__17_0_mE3E719B1810960DB4E154461F4F8A984F3CD94AD (void);
// 0x00000690 System.String Unity.Barracuda.ModelBuilder::<Concat>b__43_0(System.Object)
extern void ModelBuilder_U3CConcatU3Eb__43_0_mBA8CF3623523DF74DC8C3E4864CCB8920FA47B5D (void);
// 0x00000691 System.String Unity.Barracuda.ModelBuilder::<PRelu>b__69_0(System.Object)
extern void ModelBuilder_U3CPReluU3Eb__69_0_m0CA28778BC76F744C3BB8704C666D84E6023FA68 (void);
// 0x00000692 System.String Unity.Barracuda.ModelBuilder::<Broadcast>b__91_0(System.Object)
extern void ModelBuilder_U3CBroadcastU3Eb__91_0_m294EF014A59FBBFEA5BDCD3BF8F76376751B62D5 (void);
// 0x00000693 System.String Unity.Barracuda.ModelBuilder::<Gather>b__122_0(System.Object)
extern void ModelBuilder_U3CGatherU3Eb__122_0_mDADF2F12DD276E102CD0D58E409738F54D598E27 (void);
// 0x00000694 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(Unity.Barracuda.NNModel,System.Boolean,System.Boolean)
extern void ModelLoader_Load_m3D5EFBAD1BC5C7FCD2C930635635FE8D5E3ACF8E (void);
// 0x00000695 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::LoadFromStreamingAssets(System.String,System.Boolean,System.Boolean)
extern void ModelLoader_LoadFromStreamingAssets_mF626A67D25785658E14B79E28D2E0E5C108E4C64 (void);
// 0x00000696 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.String,System.Boolean,System.Boolean)
extern void ModelLoader_Load_m4F1F7CDFCB2D852A7E2C0A90B2117FF3524D0A68 (void);
// 0x00000697 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.Byte[],System.Boolean,System.Boolean)
extern void ModelLoader_Load_m593ECD60F3036862EC613C46EADA33137065D3AD (void);
// 0x00000698 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.Byte[],System.Boolean,System.Boolean,System.Boolean)
extern void ModelLoader_Load_m91942742C79C8B4467B37C55223983269A008739 (void);
// 0x00000699 System.Int32 Unity.Barracuda.ModelLoader::ConvertLayerAxisFor8DShapeSupportIfNeeded(System.Int32,System.Int64,Unity.Barracuda.Layer/Type)
extern void ModelLoader_ConvertLayerAxisFor8DShapeSupportIfNeeded_mA73384FF0BBE85EF4847F2A7BBC0EA5C6F1D06D5 (void);
// 0x0000069A Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.IO.BinaryReader,System.Boolean,System.Boolean,System.Boolean)
extern void ModelLoader_Load_m6102F41356744821445BADBAF7FC8BE022123542 (void);
// 0x0000069B System.Void Unity.Barracuda.ModelLoader::PatchLayer(System.Collections.Generic.List`1<Unity.Barracuda.Layer>,Unity.Barracuda.Layer)
extern void ModelLoader_PatchLayer_mFB097442176E33BC3F2C0C90F2E9D23112C01B30 (void);
// 0x0000069C System.Void Unity.Barracuda.ModelLoader::SkipLargeFloatArray(System.IO.BinaryReader,System.Int64)
extern void ModelLoader_SkipLargeFloatArray_mB0CB8F99E0A702B52A06A4024C0289B1DA2432AD (void);
// 0x0000069D System.Single[] Unity.Barracuda.ModelLoader::ReadLargeFloatArray(System.IO.BinaryReader,System.Int64)
extern void ModelLoader_ReadLargeFloatArray_mFA358CF3E143348477E749867E7D55A63246BF21 (void);
// 0x0000069E System.Int32[] Unity.Barracuda.ModelLoader::ReadInt32Array(System.IO.BinaryReader)
extern void ModelLoader_ReadInt32Array_mB8DAB94928F1EFC0D7A552BC4CD038F75D5D2502 (void);
// 0x0000069F System.String Unity.Barracuda.ModelLoader::ReadString(System.IO.BinaryReader)
extern void ModelLoader_ReadString_m96868F5B8D43B393D6E49CC45EFE5D051C769F2F (void);
// 0x000006A0 System.String[] Unity.Barracuda.ModelLoader::ReadStringArray(System.IO.BinaryReader)
extern void ModelLoader_ReadStringArray_m2C19B01926F9D755617CFB779EDC9352A0945564 (void);
// 0x000006A1 System.IO.BinaryReader Unity.Barracuda.ModelLoader::Open(System.String)
extern void ModelLoader_Open_m112726E37566596288CADC4526B8F43C5D45B3AE (void);
// 0x000006A2 System.IO.BinaryReader Unity.Barracuda.ModelLoader::Open(System.Byte[])
extern void ModelLoader_Open_m9F672F1EFAB2DD4FDEB8D32899A18BEC1B27F5F4 (void);
// 0x000006A3 System.Void Unity.Barracuda.ModelWriter::Save(System.String,Unity.Barracuda.Model,System.Boolean)
extern void ModelWriter_Save_m61D2AE2694C7FA5AFC9E5C80F7EF373A6F499F1D (void);
// 0x000006A4 System.Void Unity.Barracuda.ModelWriter::Save(System.IO.BinaryWriter,Unity.Barracuda.Model,System.Boolean)
extern void ModelWriter_Save_m5BED1A904006F102E233B350A469A6ABE1A82E70 (void);
// 0x000006A5 System.Void Unity.Barracuda.ModelWriter::WriteInt32Array(System.IO.BinaryWriter,System.Int32[])
extern void ModelWriter_WriteInt32Array_mB4F92FB6CBA442267257809A9AFD24D85457133F (void);
// 0x000006A6 System.Void Unity.Barracuda.ModelWriter::WriteString(System.IO.BinaryWriter,System.String)
extern void ModelWriter_WriteString_m9F7FEBB40F0F9ECD714A4688E76C45FC2288FA72 (void);
// 0x000006A7 System.Void Unity.Barracuda.ModelWriter::WriteStringArray(System.IO.BinaryWriter,System.String[])
extern void ModelWriter_WriteStringArray_mE887BBF5FC8C7F3C0AAEF07D691486A85560D9A6 (void);
// 0x000006A8 System.Void Unity.Barracuda.ModelWriter::WriteStringArray(System.IO.BinaryWriter,System.Collections.Generic.List`1<System.String>)
extern void ModelWriter_WriteStringArray_m99DFA07AED098D3FE1D38D717004CDCD5C767284 (void);
// 0x000006A9 System.Void Unity.Barracuda.ModelWriter::.ctor()
extern void ModelWriter__ctor_m3FEB092294BF3E9D908EB6E15F46E995C39DC003 (void);
// 0x000006AA System.Boolean Unity.Barracuda.BLASPlugin::IsNative()
// 0x000006AB System.Boolean Unity.Barracuda.BLASPlugin::IsCurrentPlatformSupported()
// 0x000006AC System.Void Unity.Barracuda.BLASPlugin::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
// 0x000006AD Unity.Jobs.JobHandle Unity.Barracuda.BLASPlugin::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
// 0x000006AE Unity.Barracuda.BLASPlugin Unity.Barracuda.BLASPluginFactory::CreateBLASPlugin()
extern void BLASPluginFactory_CreateBLASPlugin_m549B6591299DB5A9BDE12A42B293A639D74CE9EF (void);
// 0x000006AF System.Void Unity.Barracuda.BLASPluginFactory::.ctor()
extern void BLASPluginFactory__ctor_m1AD3F17C7D8CC5752AED1CB20B6973B8E9E515EC (void);
// 0x000006B0 System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape__ctor_m1A3103428162CEBD04A3BF4A9D66C8D23BEE43F5 (void);
// 0x000006B1 System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape__ctor_mEF7D25C7FDB0C070C4F71619F7CD89FFDB9FE20E (void);
// 0x000006B2 System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape__ctor_mCAA028082267E3D75CE97AD2A9F0387D5E0EEEE3 (void);
// 0x000006B3 System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32,System.Int32)
extern void TensorShape__ctor_mF3CDE30A296206E6BEB2B6E57AEA3F52DA790159 (void);
// 0x000006B4 System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32)
extern void TensorShape__ctor_m61ED9407C90A40296A222FEAC3FFEF4BB82C7108 (void);
// 0x000006B5 System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32)
extern void TensorShape__ctor_mBF7950F4D0B7B44B4030971BF85F8563FCDB60F2 (void);
// 0x000006B6 System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32[])
extern void TensorShape__ctor_m6691CB4250B956DC507AE2A8453083548090DF46 (void);
// 0x000006B7 System.Int32 Unity.Barracuda.TensorShape::get_kernelSpatialDepth()
extern void TensorShape_get_kernelSpatialDepth_m202062E96206B04057D433145767E5C0FAC57E86 (void);
// 0x000006B8 System.Int32 Unity.Barracuda.TensorShape::get_kernelHeight()
extern void TensorShape_get_kernelHeight_m5CCF3625A0AD960D281CDCEF87A6AE533A2D08C6 (void);
// 0x000006B9 System.Int32 Unity.Barracuda.TensorShape::get_kernelWidth()
extern void TensorShape_get_kernelWidth_m48078B2180BD5CBF66FDC88601F184ED24C323FD (void);
// 0x000006BA System.Int32 Unity.Barracuda.TensorShape::get_kernelDepth()
extern void TensorShape_get_kernelDepth_m61294864CDD2CA95BDF4FE5A3E241EAE9228D2D7 (void);
// 0x000006BB System.Int32 Unity.Barracuda.TensorShape::get_kernelCount()
extern void TensorShape_get_kernelCount_m7CE4ED13EB42CFCEE11E68711E4D3BB65B59F84C (void);
// 0x000006BC System.Int32 Unity.Barracuda.TensorShape::get_flatHeight()
extern void TensorShape_get_flatHeight_mDE1B9FF77BA77BFFBB84F92D2DD9FF24525F9DD2 (void);
// 0x000006BD System.Int32 Unity.Barracuda.TensorShape::get_flatWidth()
extern void TensorShape_get_flatWidth_m8F935FBE9F859E9DEE0A4AF6AE1B070C392C5E5B (void);
// 0x000006BE System.Int32 Unity.Barracuda.TensorShape::get_length()
extern void TensorShape_get_length_mED64FFCECD0B5464DEA299CD1D533D4B43F24E09 (void);
// 0x000006BF System.Int32 Unity.Barracuda.TensorShape::get_rank()
extern void TensorShape_get_rank_mA4452B0A98BF4D1B443625037F11E81600513651 (void);
// 0x000006C0 System.Int32 Unity.Barracuda.TensorShape::get_dimensions()
extern void TensorShape_get_dimensions_m87D565722AEEE691398CD191B8D68AC2AD3D7605 (void);
// 0x000006C1 System.Int32 Unity.Barracuda.TensorShape::Axis(System.Int32)
extern void TensorShape_Axis_m97699C7AE730ED8E1DC40F0985062EBFC803D1C8 (void);
// 0x000006C2 System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndex(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndex_mAE3753C61B106647C09D4AAA67A88572550C0282 (void);
// 0x000006C3 System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndex(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndex_m647D341DF3DDA6CAA37399643E1AE9F6147D9EE8 (void);
// 0x000006C4 System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndexChannelFirst(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndexChannelFirst_m4C286440DE355A775166184318B3C4D3C6858EEB (void);
// 0x000006C5 System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndexChannelFirst(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndexChannelFirst_mB9013101E47558300C3AF18BBBF8DD86BADE4C7F (void);
// 0x000006C6 System.Int32 Unity.Barracuda.TensorShape::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithBroadcast_m31962EC2A7B51CFC39AF0F31B62CE4A41471C822 (void);
// 0x000006C7 System.Int32 Unity.Barracuda.TensorShape::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithBroadcast_m69A70761FFBF905A9052B0D57A9D3BEBEA924C15 (void);
// 0x000006C8 System.Int32 Unity.Barracuda.TensorShape::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithClamp_m7F18051CDD5F638580BE527D6EE4CB6A55AEE2F4 (void);
// 0x000006C9 System.Int32 Unity.Barracuda.TensorShape::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithClamp_m53A095649338AE4FE2CB5F2117B61BCB0C4F7519 (void);
// 0x000006CA System.Int32 Unity.Barracuda.TensorShape::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithClamp_m3D4F3C0B287546627533815E5D28F45161620E33 (void);
// 0x000006CB System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_Index_m964C0073F93B6F7FE0A97F6FC04D6A545237E07A (void);
// 0x000006CC System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_Index_m203E076155FA395F8C4D7442E710DDFFDAE25821 (void);
// 0x000006CD System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_Index_m9DA9DD57B8B03E6A9AFBE09666F374E6A4D274F7 (void);
// 0x000006CE System.Int32 Unity.Barracuda.TensorShape::IndexChannelFirst(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexChannelFirst_mD0899AA4F6E8961CDF09814CE85DA762B13BE601 (void);
// 0x000006CF System.Int32 Unity.Barracuda.TensorShape::IndexChannelFirst(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexChannelFirst_m0B7364A72558BECE039D2C45411BD36F2414AAE3 (void);
// 0x000006D0 System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32)
extern void TensorShape_Index_m14D6AFBF8E29338F0FF58EA2125A385873DE5BFC (void);
// 0x000006D1 System.Int32 Unity.Barracuda.TensorShape::get_Item(System.Int32)
extern void TensorShape_get_Item_m1E3FBF3C3F58B973F7AC4F5787A7DFF1D150D93F (void);
// 0x000006D2 System.Void Unity.Barracuda.TensorShape::set_Item(System.Int32,System.Int32)
extern void TensorShape_set_Item_mAA763122A18EE53DD211B1E885C30A7CF003D477 (void);
// 0x000006D3 System.Int32[] Unity.Barracuda.TensorShape::ToArray()
extern void TensorShape_ToArray_mACE433AC64B15C2D5920C90FCDB4C9CFE0200171 (void);
// 0x000006D4 Unity.Barracuda.TensorShape Unity.Barracuda.TensorShape::Squeeze()
extern void TensorShape_Squeeze_mB33A377A0EDACF622DA40A1E1ABAC865B9359853 (void);
// 0x000006D5 Unity.Barracuda.TensorShape Unity.Barracuda.TensorShape::Flatten()
extern void TensorShape_Flatten_m8694D8ADE85AD35AE94409F6BBD3497F35D5B301 (void);
// 0x000006D6 System.Boolean Unity.Barracuda.TensorShape::op_Equality(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorShape_op_Equality_m1582842A5431530C36811518B053B2000D8E0AB3 (void);
// 0x000006D7 System.Boolean Unity.Barracuda.TensorShape::op_Inequality(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorShape_op_Inequality_mE92430C828D4342A9C26FEE943DCBFCFDA4F2661 (void);
// 0x000006D8 System.Boolean Unity.Barracuda.TensorShape::Equals(System.Object)
extern void TensorShape_Equals_m9763D26E41D558B1711398FE946924911A9B53AC (void);
// 0x000006D9 System.Int32 Unity.Barracuda.TensorShape::GetHashCode()
extern void TensorShape_GetHashCode_m54B49CAEC6E97B75B4059E0BE420988C5555F976 (void);
// 0x000006DA System.String Unity.Barracuda.TensorShape::ToString()
extern void TensorShape_ToString_m4450E8AA6FD6FAC21501E1B6660925377CF78D28 (void);
// 0x000006DB System.Void Unity.Barracuda.TensorShape::.cctor()
extern void TensorShape__cctor_m0F72B38174D98E7BEA7EC4E76A848842B7A7659F (void);
// 0x000006DC System.Void Unity.Barracuda.TensorIterator::.ctor(Unity.Barracuda.TensorShape,System.Int32)
extern void TensorIterator__ctor_mDB76F7045F7F7C7DDC0ADF480DBCE4B9747A043F (void);
// 0x000006DD System.Void Unity.Barracuda.TensorIterator::.ctor(Unity.Barracuda.Tensor,System.Int32)
extern void TensorIterator__ctor_m60971732A224AEB1066BD27948E1DF3190F5D115 (void);
// 0x000006DE System.Void Unity.Barracuda.TensorIterator::AssignIndexAndInvalidateDimensions(System.Int32)
extern void TensorIterator_AssignIndexAndInvalidateDimensions_m2477CB381776D0DBC4D7F233A8ACC43E35A8BDF5 (void);
// 0x000006DF System.Void Unity.Barracuda.TensorIterator::Next()
extern void TensorIterator_Next_m25ED528A2372C028D54CCC947F2A66C705D4F933 (void);
// 0x000006E0 System.Void Unity.Barracuda.TensorIterator::Advance(System.Int32)
extern void TensorIterator_Advance_m6830EA527CA7C40D7FE69B6AE5D19F483C9FC7CF (void);
// 0x000006E1 System.Boolean Unity.Barracuda.TensorIterator::IsValid()
extern void TensorIterator_IsValid_mC711BE08F5309CE85C3227C37EC1B8213D1F5A5F (void);
// 0x000006E2 System.Int32 Unity.Barracuda.TensorIterator::IndexInReducedShape(Unity.Barracuda.TensorShape)
extern void TensorIterator_IndexInReducedShape_m8C34CD99740CF5E70BE91925E489531005136454 (void);
// 0x000006E3 System.Int32 Unity.Barracuda.TensorIterator::IndexWithReplacedAxis(System.Int32,System.Int32)
extern void TensorIterator_IndexWithReplacedAxis_mFFDDE0D25A388F08FD4456CDDDEA1F10CDD947C1 (void);
// 0x000006E4 System.Int32 Unity.Barracuda.TensorIterator::get_Item(System.Int32)
extern void TensorIterator_get_Item_m75B242D75B7F86B4A55B68500EBAFD6F7AD9BC9F (void);
// 0x000006E5 System.Boolean Unity.Barracuda.Tensor::get_disposed()
extern void Tensor_get_disposed_m2BDC15CFE6B3786CCA05D1A5B4A7B8CC9EFC38B1 (void);
// 0x000006E6 Unity.Barracuda.ITensorAllocator Unity.Barracuda.Tensor::get_allocator()
extern void Tensor_get_allocator_mB8B499234D5A2EBEA8A923BB3F1BBC86EA78B2A4 (void);
// 0x000006E7 System.Int32 Unity.Barracuda.Tensor::get_sequenceLength()
extern void Tensor_get_sequenceLength_m3989934DA39D36BEE987086E135F50BFEB6BFE38 (void);
// 0x000006E8 System.Int32 Unity.Barracuda.Tensor::get_numberOfDirections()
extern void Tensor_get_numberOfDirections_m89F049B1A54ACA8F9C5E0F19B1161B08FC6891E8 (void);
// 0x000006E9 System.Int32 Unity.Barracuda.Tensor::get_batch()
extern void Tensor_get_batch_mF9B5F150A39E245A15B9430A5507F71F0EDAAD9E (void);
// 0x000006EA System.Int32 Unity.Barracuda.Tensor::get_extraDimension()
extern void Tensor_get_extraDimension_mC7501177DF64CBEDB6288D080C80CEBB2693DDDB (void);
// 0x000006EB System.Int32 Unity.Barracuda.Tensor::get_depth()
extern void Tensor_get_depth_mF8F780CD0E97EE4D28BFD832B941AB1F94E6C04C (void);
// 0x000006EC System.Int32 Unity.Barracuda.Tensor::get_height()
extern void Tensor_get_height_m54DF2A2D9EF3C167574BF3136371F75E574DB624 (void);
// 0x000006ED System.Int32 Unity.Barracuda.Tensor::get_width()
extern void Tensor_get_width_m396CC6C4BE79806879A9945EFE580922B6092E42 (void);
// 0x000006EE System.Int32 Unity.Barracuda.Tensor::get_channels()
extern void Tensor_get_channels_mC7C531E604E3E707BF0B6291F09C779065489C6A (void);
// 0x000006EF System.Int32 Unity.Barracuda.Tensor::get_kernelSpatialDepth()
extern void Tensor_get_kernelSpatialDepth_m94392259FB495F58C7913585FC803B667CFAD2C5 (void);
// 0x000006F0 System.Int32 Unity.Barracuda.Tensor::get_kernelWidth()
extern void Tensor_get_kernelWidth_mCAB2EA1B8D930369FA03FFCA2C9DB4779789B9CB (void);
// 0x000006F1 System.Int32 Unity.Barracuda.Tensor::get_kernelHeight()
extern void Tensor_get_kernelHeight_mFB8DB8C23D249AAE0DC4B731CD86D9320229EEA3 (void);
// 0x000006F2 System.Int32 Unity.Barracuda.Tensor::get_kernelDepth()
extern void Tensor_get_kernelDepth_m37E5257C1B32867EB19596ACAB599946C30AA92F (void);
// 0x000006F3 System.Int32 Unity.Barracuda.Tensor::get_kernelCount()
extern void Tensor_get_kernelCount_mFE3D0FB80F7AFB478F0CAE439759EFA0A8584A32 (void);
// 0x000006F4 System.Int32 Unity.Barracuda.Tensor::get_flatHeight()
extern void Tensor_get_flatHeight_m62E4BADE732077FD6A602F12E2F32C297B5D9D92 (void);
// 0x000006F5 System.Int32 Unity.Barracuda.Tensor::get_flatWidth()
extern void Tensor_get_flatWidth_m2216455685D58316C5C8322A962723660394A300 (void);
// 0x000006F6 System.Int32 Unity.Barracuda.Tensor::get_length()
extern void Tensor_get_length_m5A9D003FBBD9F32DFFE1796AC85121407F69D45A (void);
// 0x000006F7 System.Int32 Unity.Barracuda.Tensor::get_dimensions()
extern void Tensor_get_dimensions_m6ACF58E6DB2BE5138E358257B5DAB557C2BDFEAF (void);
// 0x000006F8 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[],System.String)
extern void Tensor__ctor_mC2155DCB9E3B11BD640C65078EDB1D4D2056F7D9 (void);
// 0x000006F9 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[],System.String)
extern void Tensor__ctor_mFBDB9FED375AFB92E1A13F4A8527C79DA811E11B (void);
// 0x000006FA System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Single[],System.String)
extern void Tensor__ctor_m8A7C73DD069766DAE32053957676A932BEE746BC (void);
// 0x000006FB System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[],System.String)
extern void Tensor__ctor_m8A87A5B636DB946F5A966485E7E4C600A6ED0C8C (void);
// 0x000006FC System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[][],System.String)
extern void Tensor__ctor_m42E8C7F43E64ED3ED83DFE7AD505887F78029329 (void);
// 0x000006FD System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[][],System.String)
extern void Tensor__ctor_mA965A8D0E557B24651D7505B8F2F463E9CDA993B (void);
// 0x000006FE System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Single[][],System.String)
extern void Tensor__ctor_mD7F948BC008C2627F7EC67244356AFF709CE0564 (void);
// 0x000006FF System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[][],System.String)
extern void Tensor__ctor_m9C504B245586C2524C706853A6A033C080AE8F32 (void);
// 0x00000700 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[0...,0...],System.String)
extern void Tensor__ctor_mDEFE6A5D64BEC02BFD653F3191EE12619CE5D0BE (void);
// 0x00000701 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Single[0...,0...],System.String)
extern void Tensor__ctor_m2DAC359107AF7259C83D75564843A01EF929EFB4 (void);
// 0x00000702 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[0...,0...],System.String)
extern void Tensor__ctor_mD30F0845C93D4DBF92AF2233884134F5E972B088 (void);
// 0x00000703 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Array,System.String)
extern void Tensor__ctor_mD9D6565EBA4C922D97DEEBD0BC2B93CC877FF257 (void);
// 0x00000704 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[0...,0...,0...,0...],System.String)
extern void Tensor__ctor_mC9FE419D3FD2E2FD94AE0BA00E0690D012B9518B (void);
// 0x00000705 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[0...,0...,0...,0...],System.String)
extern void Tensor__ctor_mB1616425AF7935E3FB07728836389B4C62682F1E (void);
// 0x00000706 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[0...,0...,0...,0...],System.String)
extern void Tensor__ctor_m6F08B624A98E71662232F3E3606D70B272347182 (void);
// 0x00000707 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_mAAC9C135DC284358ED2174F4F152367F8C2566A1 (void);
// 0x00000708 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_mF7D511E2D0B3685AF461F8148AB62E5B70BF4B02 (void);
// 0x00000709 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_mC0EFD5370B9FACCD88AC1A772A9817B9E709D765 (void);
// 0x0000070A System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_m3B6649B779DE3D846064A53A38F3AD705A3FFDF8 (void);
// 0x0000070B System.Void Unity.Barracuda.Tensor::.ctor(UnityEngine.Texture,System.Int32,System.String)
extern void Tensor__ctor_m72B78131E0164CD3D523E08FAF3A6424832299DB (void);
// 0x0000070C System.Void Unity.Barracuda.Tensor::.ctor(UnityEngine.Texture[],System.Int32,System.String)
extern void Tensor__ctor_m21225D1517FDFE9E8775888D06399DCD2E93C4D1 (void);
// 0x0000070D System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_mFF4EBD710C074997DCA97B14E599C54763C446D1 (void);
// 0x0000070E System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_m1C96A51C5F63E4D9ACBAA1F4988EBD8FB99E41AD (void);
// 0x0000070F System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_m67BC3772BCE3D2E537D892E649508D9A39E63A62 (void);
// 0x00000710 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_m9254E3BD9778118AC32E98DC4D5AAE8E3DB651E8 (void);
// 0x00000711 System.Void Unity.Barracuda.Tensor::.ctor(System.String)
extern void Tensor__ctor_m770939DE51A67CD0D3258D2EE6C74C29A1096506 (void);
// 0x00000712 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.String)
extern void Tensor__ctor_m0C8ACD539A8B3837D6F1430FF7AE59D2AAA3704C (void);
// 0x00000713 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.String)
extern void Tensor__ctor_m760E38105197514DCA6F7F87BA358368ACB15054 (void);
// 0x00000714 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.String)
extern void Tensor__ctor_m194BAB21F869D2B250DA82AA5C06F2175794C25F (void);
// 0x00000715 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.String)
extern void Tensor__ctor_mD08FCD119532403D72124370EBBC5EAF66F0AA38 (void);
// 0x00000716 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mCE04D39D3B21139D7EB1897F86288AFF9F94C63E (void);
// 0x00000717 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mF22E41D56819881BD9449CF80D6B36C895E92C3F (void);
// 0x00000718 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m8B2150451C6B9FFEDBB975F35C4CEF0FCF8D197D (void);
// 0x00000719 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mF9C885EC9C18A1BC13D4950AF4F80D5B68CFEDB3 (void);
// 0x0000071A System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m0323759D32B3F41E866AF745F496DDBE729A3C09 (void);
// 0x0000071B System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mA68575E3C4FB22706A0DE33B12D5E6387FF8559F (void);
// 0x0000071C System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m88AC301332A16F1FD45A55AD1E1BE3C70B4AB809 (void);
// 0x0000071D System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m17F10667A7C397C251186943331D377939FCB00B (void);
// 0x0000071E System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mB8B01FB1EB445E95E9D94D040003041B9A400579 (void);
// 0x0000071F System.Void Unity.Barracuda.Tensor::Finalize()
extern void Tensor_Finalize_m0967C1BC87736230D3EB0D7AC2E59663F228B132 (void);
// 0x00000720 System.Void Unity.Barracuda.Tensor::PinToDevice(Unity.Barracuda.ITensorData,System.Boolean)
extern void Tensor_PinToDevice_m67951A1EC55FD6E1F4F35DCA66626DD3873540A1 (void);
// 0x00000721 System.Void Unity.Barracuda.Tensor::UploadToDevice(Unity.Barracuda.ITensorData,System.Boolean)
extern void Tensor_UploadToDevice_mF8865A19C1E1D070DE3B06B51A55718075C5D89F (void);
// 0x00000722 System.Void Unity.Barracuda.Tensor::AttachToDevice(Unity.Barracuda.ITensorData)
extern void Tensor_AttachToDevice_m23B09DE633C5239360B2DA8513D03E2D2C02CD5C (void);
// 0x00000723 Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::DetachFromDevice(System.Boolean)
extern void Tensor_DetachFromDevice_mC6BFC2D218B68AA5011DDC91E6B96E28973D3139 (void);
// 0x00000724 System.Void Unity.Barracuda.Tensor::UploadIfDirty()
extern void Tensor_UploadIfDirty_mEB45F88C46EB9660A9704BBDAD4BF33AB8D06F62 (void);
// 0x00000725 System.Void Unity.Barracuda.Tensor::UploadAndInvalidateCache()
extern void Tensor_UploadAndInvalidateCache_mFE9B85BAD77E537060872036BB3773021E998A42 (void);
// 0x00000726 System.Boolean Unity.Barracuda.Tensor::PrepareCacheForAccess(System.Boolean)
extern void Tensor_PrepareCacheForAccess_m1818D1AF5A60C5A13456826F8E1B5B29956DE5AA (void);
// 0x00000727 System.Void Unity.Barracuda.Tensor::FlushCache()
extern void Tensor_FlushCache_mB42591251EEAC98EB2E9BD7C28D677D1B279F4AD (void);
// 0x00000728 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::ShallowCopy(Unity.Barracuda.TensorShape,System.String)
extern void Tensor_ShallowCopy_mDCF79A294F169DF0B7E05885F747DF4F83523F51 (void);
// 0x00000729 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::ShallowCopy(System.String)
extern void Tensor_ShallowCopy_m3511728F74E71D60A89D45CBED37EF128E53484F (void);
// 0x0000072A Unity.Barracuda.Tensor Unity.Barracuda.Tensor::Flatten(System.String)
extern void Tensor_Flatten_m2FE1BDB9E5894596DFDBB1C4DA023C9B4A0C9497 (void);
// 0x0000072B Unity.Barracuda.Tensor Unity.Barracuda.Tensor::Reshape(Unity.Barracuda.TensorShape,System.String)
extern void Tensor_Reshape_mB714087E97EEEFD7EA071E7CA21D36A84B7F6843 (void);
// 0x0000072C Unity.Barracuda.Tensor Unity.Barracuda.Tensor::DeepCopy()
extern void Tensor_DeepCopy_m099548B2C179C263E3AB9D4A12CA99338376A790 (void);
// 0x0000072D System.Void Unity.Barracuda.Tensor::TakeOwnership()
extern void Tensor_TakeOwnership_mC3E615BE23B230A903656E6AF23CDD88E60239F2 (void);
// 0x0000072E Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::Invalidate()
extern void Tensor_Invalidate_m1874588A09CDC7E301EC88814E9D7C11BC2758CB (void);
// 0x0000072F System.Void Unity.Barracuda.Tensor::Dispose()
extern void Tensor_Dispose_m7C0B7E09711DD757F40C6B08E1E735D7199D391B (void);
// 0x00000730 System.Void Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTexture,System.Int32,System.Int32,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_mCEF111B9491E2AC8D689F325E8E193EFFE1A57B7 (void);
// 0x00000731 System.Void Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTexture,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_m4A91F7014B4E23A35B76449675C26C7F406EF0CD (void);
// 0x00000732 UnityEngine.RenderTexture Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTextureFormat,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_m5D9DCC7240F74DC02CCFED19BB22E1D5F9351C6C (void);
// 0x00000733 UnityEngine.RenderTexture Unity.Barracuda.Tensor::ToRenderTexture(System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_m2E6D2F7705250C6E42AD5B5C16151BC26EABD97C (void);
// 0x00000734 System.Int32 Unity.Barracuda.Tensor::Axis(System.Int32)
extern void Tensor_Axis_m445DEEA5293ED98054C863477D2A962E8EB34E7A (void);
// 0x00000735 System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_Index_m44EDECD54683B029B604D6259DB4D90333FDD2C4 (void);
// 0x00000736 System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_Index_mA54ADEADD26977FCD294F4FB6C2469FA89449D8B (void);
// 0x00000737 System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_Index_mDC33330A41C1ED958EE16C2B8724369C82FC5116 (void);
// 0x00000738 System.Int32 Unity.Barracuda.Tensor::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_IndexWithClamp_mF342FF9043507C3333569741E6F32E83EAE57AB1 (void);
// 0x00000739 System.Int32 Unity.Barracuda.Tensor::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_IndexWithClamp_m1AB62044540339E5EC24C4287A0CB34E7F9298BC (void);
// 0x0000073A System.Int32 Unity.Barracuda.Tensor::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_IndexWithBroadcast_m53E2D3ACFB629BE0B8BD9B89E076F359731935E9 (void);
// 0x0000073B System.Int32 Unity.Barracuda.Tensor::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_IndexWithBroadcast_m50F8EDE59AEBA22768D4E6889AAAE07D5C5C956E (void);
// 0x0000073C System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32)
extern void Tensor_Index_m3AC339FD6AB212AA158536683914CBAF394C17FE (void);
// 0x0000073D System.Single Unity.Barracuda.Tensor::get_Item(System.Int32)
extern void Tensor_get_Item_m29DE568512DD29B4F00A62CBCE954808A1ABEA01 (void);
// 0x0000073E System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Single)
extern void Tensor_set_Item_m53CEABAC7B32A02213835BE81D80A7D91D044AD7 (void);
// 0x0000073F System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32)
extern void Tensor_get_Item_mEDD48D3B9D7F0A6D9EF937160D25DC60050D74EF (void);
// 0x00000740 System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_mE167D7E8FE594699CEE7DF40F54898E380DF8CC0 (void);
// 0x00000741 System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_get_Item_m415DED230817BCB69CB765433C303E7C088EB799 (void);
// 0x00000742 System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_mC30AC77051A8A2517E7D476A3924D02630549CF8 (void);
// 0x00000743 System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_get_Item_m03D8B6D09FC2F2FFE550A00E4CE4BAFA65A7B13E (void);
// 0x00000744 System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_mE663CECF84EA193D2F2A8AF23BFF1AF63363BBC6 (void);
// 0x00000745 System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_get_Item_mCDD07C5DA72F629675C213599008B8F5B8E266AF (void);
// 0x00000746 System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_m7C74F6AB37103A52DDD581EBAEE88F614764B04D (void);
// 0x00000747 System.Single[] Unity.Barracuda.Tensor::ToReadOnlyArray()
extern void Tensor_ToReadOnlyArray_mD4E8F9752105B7FD080AF6230A660CE6B8BF62E4 (void);
// 0x00000748 Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::get_tensorOnDevice()
extern void Tensor_get_tensorOnDevice_m0C7C9717F15D2B7D3FD92335317D23A58D278FC2 (void);
// 0x00000749 Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::get_data()
extern void Tensor_get_data_mB428B2DD50236506ABF293EB2A9B7ECEF1082A12 (void);
// 0x0000074A System.String Unity.Barracuda.Tensor::ToString()
extern void Tensor_ToString_m144E94E117E9BB48BA2AFE17FA01A9518AD747B1 (void);
// 0x0000074B Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::UnpinAndDisposeTensor()
extern void Tensor_UnpinAndDisposeTensor_m29650179C454912523E6B174E2F972397E646C76 (void);
// 0x0000074C System.Single[] Unity.Barracuda.Tensor::get_readonlyArray()
extern void Tensor_get_readonlyArray_mCD61C28205F1E157E455FF06733FB4C251841A32 (void);
// 0x0000074D System.Int32 Unity.Barracuda.Tensor::get_readonlyArrayOffset()
extern void Tensor_get_readonlyArrayOffset_m8A25CFE770B24773E3C44457E405A7ACD210166C (void);
// 0x0000074E System.Void Unity.Barracuda.TensorExtensions::TestInit(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void TensorExtensions_TestInit_mD90607A663302F998D6AE6E834B3BF60010B371D (void);
// 0x0000074F System.Void Unity.Barracuda.TensorExtensions::TestInitCos(Unity.Barracuda.Tensor,System.Int32,System.Single)
extern void TensorExtensions_TestInitCos_mDAB5414E99DEE155B75626559D1188AA538C5438 (void);
// 0x00000750 System.Void Unity.Barracuda.TensorExtensions::TestInitValue(Unity.Barracuda.Tensor,System.Single,System.Int32)
extern void TensorExtensions_TestInitValue_m915009ACBBCB71D00E9F08625C6E87D7B7FFAFBC (void);
// 0x00000751 System.Single[] Unity.Barracuda.TensorExtensions::AsFloats(Unity.Barracuda.Tensor)
extern void TensorExtensions_AsFloats_m0BAFC6C4FC90DC4CE4873709FCBE5748B49E3464 (void);
// 0x00000752 System.Int32[] Unity.Barracuda.TensorExtensions::AsInts(Unity.Barracuda.Tensor)
extern void TensorExtensions_AsInts_m48D2D679278C05D5DF6D6B2F2B23EF82D5B0769E (void);
// 0x00000753 System.String Unity.Barracuda.TensorExtensions::DataToString(Unity.Barracuda.Tensor,System.Int32)
extern void TensorExtensions_DataToString_m9E4C5C9F575396843B0F79808166F0D82DD30060 (void);
// 0x00000754 System.Void Unity.Barracuda.TensorExtensions::Print(Unity.Barracuda.Tensor,System.String)
extern void TensorExtensions_Print_m82C313A6BB11F8723BA1F57F3AEE15CF8287C8DA (void);
// 0x00000755 System.Void Unity.Barracuda.TensorExtensions::PrintDataPart(Unity.Barracuda.Tensor,System.Int32,System.String)
extern void TensorExtensions_PrintDataPart_m544CF6D03751FFD5B82007B180411726AA6651E3 (void);
// 0x00000756 System.Boolean Unity.Barracuda.TensorExtensions::Equals(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void TensorExtensions_Equals_mDD06265A4F84477A28FF3D3F0EB78E36ECB55FA3 (void);
// 0x00000757 System.Boolean Unity.Barracuda.TensorExtensions::Approximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single,System.Int32)
extern void TensorExtensions_Approximately_mE1E1EDC3084043E0807741CC259A1ADFB493B270 (void);
// 0x00000758 System.Single Unity.Barracuda.TensorExtensions::MaxDifference(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void TensorExtensions_MaxDifference_mDB7F8115FC0EDD6ECFF82652C5AB6E84566B6782 (void);
// 0x00000759 Unity.Barracuda.Tensor Unity.Barracuda.TensorExtensions::Reshape(Unity.Barracuda.Tensor,System.Int32[])
extern void TensorExtensions_Reshape_m658DD88C62AE214C7814EAC4554CA8DD15D4E931 (void);
// 0x0000075A System.Int32[] Unity.Barracuda.TensorExtensions::ArgMax(Unity.Barracuda.Tensor)
extern void TensorExtensions_ArgMax_m62C97DEF2B73E857DB1CCE33798AB0E2E467CFA9 (void);
// 0x0000075B System.Int32[][] Unity.Barracuda.TensorExtensions::ArgSort(Unity.Barracuda.Tensor)
extern void TensorExtensions_ArgSort_m89381340ECD9BD00D9DCB58F23D9341FF4874156 (void);
// 0x0000075C System.Void Unity.Barracuda.TensorExtensions::Fill(Unity.Barracuda.Tensor,System.Single)
extern void TensorExtensions_Fill_m51F9B875680BE40DCEB0F2A878009F788D53FA14 (void);
// 0x0000075D Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Gather(Unity.Barracuda.TensorShape[],System.Int32)
extern void TensorExtensions_Gather_m2708C6799C4A6574AB5763E08AA361BF49E6BD3F (void);
// 0x0000075E Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void TensorExtensions_Concat_mC911DF6196CD870F0226D8A1DD7722D32CC53C71 (void);
// 0x0000075F Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Concat(Unity.Barracuda.TensorShape[],System.Int32)
extern void TensorExtensions_Concat_mDEDEAC0BA0F3515A467C23A2EF04191247B1C3E8 (void);
// 0x00000760 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Max(Unity.Barracuda.TensorShape[])
extern void TensorExtensions_Max_m3CBE2324CF6DD0869A92ECDD2E0CCFC81E6E1548 (void);
// 0x00000761 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::MaxShape(Unity.Barracuda.Tensor[])
extern void TensorExtensions_MaxShape_m41681B16BF20940E2236C89BB4EB743C9A1310E7 (void);
// 0x00000762 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Scale(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorExtensions_Scale_mE00004B2C1CDD6FC7635EB8C4C62BBD3D263843F (void);
// 0x00000763 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Scale(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Scale_m32ACA450FF4BDA579811132F501413320CDC4A78 (void);
// 0x00000764 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Reduce(Unity.Barracuda.TensorShape,System.Int32)
extern void TensorExtensions_Reduce_mDC12E8643BF5AD5A217A154E3D00DE1FBF4579CA (void);
// 0x00000765 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Reshape(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Reshape_m6537A04C92A4AFDD66AAC55BD91D1969EEE60D4E (void);
// 0x00000766 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyBorder(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_ApplyBorder_m25B90A990920CF327669D7C7E1EFBCA48A87C964 (void);
// 0x00000767 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToKernel(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToKernel_m0799918B7DE50162B26FEAFE4641A2AD57459FF0 (void);
// 0x00000768 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToKernel(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToKernel_mCD51D8A2DB06BDFAB41A2E527FB952A19E67E892 (void);
// 0x00000769 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_mFBF4FAAF19E8537829A525E4A6036EFC353A04BA (void);
// 0x0000076A System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.Tensor,System.Int32*,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_mF9E193CE7DBAFAB8C698AF5B41540C87772E17D2 (void);
// 0x0000076B System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_mB41DA0DEA1EA3C8C0B7C5939FC572BD7478A4807 (void);
// 0x0000076C System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.TensorShape,System.Int32*,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_m6F75D36A29D3AE276CA86C2077572852223AA13B (void);
// 0x0000076D Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyPool(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[],System.Boolean)
extern void TensorExtensions_ApplyPool_mCDA54BC32A3187A9D32977501604686B0ACA65AC (void);
// 0x0000076E Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyPool(Unity.Barracuda.TensorShape,System.Int32*,System.Int32[],System.Int32[],System.Boolean)
extern void TensorExtensions_ApplyPool_m0115093FFDBB087F846CC2A9389AECA4D5928F76 (void);
// 0x0000076F Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyKernel(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyKernel_m9BF2905887C1D5FDC812742A73E7FC049287DEC7 (void);
// 0x00000770 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyKernelInverse(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyKernelInverse_m7BA0C13E73BABE2E35FAFE3786353BE126735D37 (void);
// 0x00000771 System.Int32 Unity.Barracuda.TensorExtensions::WrapIndex(System.Int32,System.Int32)
extern void TensorExtensions_WrapIndex_mC94938C2AF414BF123D518B2B863982134505838 (void);
// 0x00000772 System.Boolean Unity.Barracuda.TensorExtensions::IsNDHWC(Unity.Barracuda.TensorShape)
extern void TensorExtensions_IsNDHWC_m718669E28424F2BEBCF40F2AB84466689B3D11CF (void);
// 0x00000773 System.Boolean Unity.Barracuda.TensorExtensions::Is4D(Unity.Barracuda.TensorShape)
extern void TensorExtensions_Is4D_mBF9D164750644E2018D11571BB490BF7745E2FFE (void);
// 0x00000774 System.Int32 Unity.Barracuda.TensorExtensions::Convert4DTo8DAxis(System.Int32)
extern void TensorExtensions_Convert4DTo8DAxis_m13BA5F00D94D3C014791C3385EFC40FAF8D68844 (void);
// 0x00000775 System.Int32 Unity.Barracuda.TensorExtensions::FirstNotIdentityFeatureDimensionIndex(Unity.Barracuda.TensorShape)
extern void TensorExtensions_FirstNotIdentityFeatureDimensionIndex_mCB908E34808F62BF82272754C902EF90774E306B (void);
// 0x00000776 System.Boolean Unity.Barracuda.TensorExtensions::Is8DAxisConvertibleTo4D(System.Int32)
extern void TensorExtensions_Is8DAxisConvertibleTo4D_m026F1F65B3ADB1A2AF435C19D5F3B9AE56025D55 (void);
// 0x00000777 System.Boolean Unity.Barracuda.TensorExtensions::AreAllTensorsConvertibleTo4D(Unity.Barracuda.Tensor[])
extern void TensorExtensions_AreAllTensorsConvertibleTo4D_mC4F081B40412F79D0A3612AF1AE2F10498CE4EE0 (void);
// 0x00000778 System.Int32 Unity.Barracuda.TensorExtensions::Convert8DAxisTo4D(System.Int32)
extern void TensorExtensions_Convert8DAxisTo4D_mE37849EC5D4DFCE988EDBA2518023382C029C157 (void);
// 0x00000779 System.Void Unity.Barracuda.TensorExtensions::Get8DParametersNoAlloc(Unity.Barracuda.TensorShape,System.Int32[],System.Int32*,System.Int32)
extern void TensorExtensions_Get8DParametersNoAlloc_mCD7D695FA3419463C8623C9B3EB039885D6BB63D (void);
// 0x0000077A System.Int32[] Unity.Barracuda.TensorExtensions::Get8DPermutationsForNHWCPermutationsAndShape(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Get8DPermutationsForNHWCPermutationsAndShape_m2AFA46BF1699C78DC7ACD7DC4C3A9EE1D5B5DE20 (void);
// 0x0000077B System.Int32[] Unity.Barracuda.TensorExtensions::Get8DPermutationsForNCHWPermutationsAndShape(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Get8DPermutationsForNCHWPermutationsAndShape_mBA2317A68CAEDA5DF764693E2822CB78D8760D15 (void);
// 0x0000077C Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyStridedSlice8DUnsafeNoAlloc(Unity.Barracuda.TensorShape,System.Int32*,System.Int32*,System.Int32*)
extern void TensorExtensions_ApplyStridedSlice8DUnsafeNoAlloc_mF2999DFEA89781862977B64ECC930F48E5935778 (void);
// 0x0000077D Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyStridedSlice(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyStridedSlice_m80755A717C2466FA000429114F0913B15F1D00FE (void);
// 0x0000077E System.Int32[] Unity.Barracuda.TensorExtensions::Permute(System.Int32[],System.Int32[])
extern void TensorExtensions_Permute_m4ACA80E441837E00BA7DC2335B53DD0E81D28ED2 (void);
// 0x0000077F Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Permute(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Permute_mB3DF1833B04B25A5FADC022F378FDA8FE6427380 (void);
// 0x00000780 Unity.Barracuda.ITensorData Unity.Barracuda.TensorExtensions::CreateFromTexture(UnityEngine.Texture,Unity.Barracuda.TensorShape)
extern void TensorExtensions_CreateFromTexture_m9EFA3C1CE28203D3C7D85CBF03061DED79FF4E57 (void);
// 0x00000781 System.Nullable`1<System.Int32> Unity.Barracuda.Compiler.IRShapeInferenceHelper.RankInference::InferOutputRank(Unity.Barracuda.Layer,System.Int32[])
extern void RankInference_InferOutputRank_m7FBA4E5232691AF4B5D03ABCA9F652E64CFDF33E (void);
// 0x00000782 System.Void Unity.Barracuda.Compiler.IRShapeInferenceHelper.RankInference::UpdateKnownTensorRanks(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>)
extern void RankInference_UpdateKnownTensorRanks_m5E63DF8DC6A9F141B314A8E465C6E9E4F0E2E53C (void);
// 0x00000783 System.Nullable`1<System.Int32>[] Unity.Barracuda.Compiler.IRShapeInferenceHelper.RankInference::ListTemporaryTensorRanks(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>&)
extern void RankInference_ListTemporaryTensorRanks_mCB6C8746BD2D84627F9239973734EF060DEB7CBE (void);
// 0x00000784 System.Void Unity.Barracuda.Compiler.IRShapeInferenceHelper.RankInference::.ctor()
extern void RankInference__ctor_m5FC11797645F3B11EB4358D516EFFF0307B05C07 (void);
// 0x00000785 System.Int32[] Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::BarracudaLayoutToTensorShapeLayout(System.Int32[])
extern void ShapeInference_BarracudaLayoutToTensorShapeLayout_mD34DDEE9AEFDBF92A1C8BD62CD826619D2344014 (void);
// 0x00000786 System.Collections.Generic.List`1<System.Int32> Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::BarracudaShapeToOnnxLayout(Unity.Barracuda.TensorShape,System.Int32)
extern void ShapeInference_BarracudaShapeToOnnxLayout_m859843281157A3E356DB4316E0E3068A9C4B0362 (void);
// 0x00000787 System.Collections.Generic.List`1<System.Int32> Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::ShapeToOnnxLayout(Unity.Barracuda.TensorShape,System.Int32)
extern void ShapeInference_ShapeToOnnxLayout_m4738E51D99761806CF31A97669300D694CFB032B (void);
// 0x00000788 System.Int32[] Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::OnnxLayoutToTensorShapeLayout(System.Int32[])
extern void ShapeInference_OnnxLayoutToTensorShapeLayout_m256EDEB6CDC608F99487F6A5B878060A69669BA9 (void);
// 0x00000789 Unity.Barracuda.TensorShape Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::OnnxLayoutToTensorShape(System.Int32[])
extern void ShapeInference_OnnxLayoutToTensorShape_m643B6954C3D8042FC6CD1EC0622016BF838A3F7C (void);
// 0x0000078A System.Nullable`1<Unity.Barracuda.TensorShape> Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::InferOutputShapeNCHW(Unity.Barracuda.Layer,System.Int32[],Unity.Barracuda.TensorShape[])
extern void ShapeInference_InferOutputShapeNCHW_m84CABD1B74914ED273F176741FD4FAD2829C7020 (void);
// 0x0000078B System.Void Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::UpdateKnownTensorShapesNCHW(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>&)
extern void ShapeInference_UpdateKnownTensorShapesNCHW_m7ADE204FB6F7D028B831C84AB06528E587C0FEF6 (void);
// 0x0000078C System.Nullable`1<Unity.Barracuda.TensorShape>[] Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::ListTemporaryTensorShapesNCHW(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>&)
extern void ShapeInference_ListTemporaryTensorShapesNCHW_mEDA24AB933AE45BEFCC100654F42480B994FAD5F (void);
// 0x0000078D System.Void Unity.Barracuda.Compiler.IRShapeInferenceHelper.ShapeInference::.ctor()
extern void ShapeInference__ctor_m1EEBEB3602D67DED7A7E48F67159BD38BA360C6A (void);
// 0x0000078E System.Void Unity.Barracuda.Compiler.Passes.ExpandOpsPass::Run(Unity.Barracuda.Model&)
extern void ExpandOpsPass_Run_m20D6633C8C86DB974930C3AC87BA3746E60E4FC1 (void);
// 0x0000078F System.Boolean Unity.Barracuda.Compiler.Passes.ExpandOpsPass::ConvertLSTM(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void ExpandOpsPass_ConvertLSTM_m65F4FF9BC3F641C6D8E33090401B37CCB9E17900 (void);
// 0x00000790 System.Boolean Unity.Barracuda.Compiler.Passes.ExpandOpsPass::ConvertLSTM(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder,Unity.Barracuda.IOps)
extern void ExpandOpsPass_ConvertLSTM_m84DB860A88EBC55B46D65395C3472CF44899D838 (void);
// 0x00000791 System.Void Unity.Barracuda.Compiler.Passes.ExpandOpsPass::.ctor()
extern void ExpandOpsPass__ctor_m6F2330863A8897F0FFCCAD6F434696330045BC8D (void);
// 0x00000792 System.Void Unity.Barracuda.Compiler.Passes.IModelPass::Run(Unity.Barracuda.Model&)
// 0x00000793 System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing::Run(Unity.Barracuda.Model&)
extern void IRShapeInferenceAndConstantFusing_Run_m5CA19151A22894B338B9444074D8FC52C04B7CD2 (void);
// 0x00000794 Unity.Barracuda.Tensor Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing::ShapeToNCHWTensor(Unity.Barracuda.TensorShape,System.Int32)
extern void IRShapeInferenceAndConstantFusing_ShapeToNCHWTensor_mF9D22C91340F0BC1C2665F81E00A4A62587102C0 (void);
// 0x00000795 System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing::FuseShapesIntoConstants(Unity.Barracuda.Model&,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>)
extern void IRShapeInferenceAndConstantFusing_FuseShapesIntoConstants_mB3E561CEDBD9327BD45BA96DC1C814D51D714948 (void);
// 0x00000796 System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing::InferAllShapes(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>&,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>&)
extern void IRShapeInferenceAndConstantFusing_InferAllShapes_m9FFA4584FED88A3312591F3794E42A024518007A (void);
// 0x00000797 System.Boolean Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing::IsLayerKnown(System.String,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void IRShapeInferenceAndConstantFusing_IsLayerKnown_m9053651912C47C9D448CEA3A2CA02852FD49C2E0 (void);
// 0x00000798 System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing::FuseInputsIntoLayer(Unity.Barracuda.Layer&,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void IRShapeInferenceAndConstantFusing_FuseInputsIntoLayer_mCAFE14DCDD10A762982B0DFAEFFB40A557C69A7F (void);
// 0x00000799 System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing::.ctor()
extern void IRShapeInferenceAndConstantFusing__ctor_m88F3E4394B3E13EC28A1FE53783F377DDC15E6E9 (void);
// 0x0000079A System.Void Unity.Barracuda.Compiler.Passes.IValidateModelPass::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
// 0x0000079B System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::Run(Unity.Barracuda.Model&)
extern void IntermediateToRunnableNCHWPass_Run_m87A018F867F240FC61320EB31EE43598215AB3FC (void);
// 0x0000079C System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::AxisToBarracuda(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_AxisToBarracuda_m9F80C25FCBBF5717BBE65F0FC04C0464900AE837 (void);
// 0x0000079D System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::StridedSlice(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_StridedSlice_mCD898356B5647597DC7565BA2AACFDECD96D16BA (void);
// 0x0000079E System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::Transpose0UsingRank(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_Transpose0UsingRank_m75AB21630EEE6F4B5C92F1FCD64B59A928BBE62B (void);
// 0x0000079F System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::TransposeInput01(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_TransposeInput01_m1891C0332BE70A51F446C4FE1DFC309220C94A77 (void);
// 0x000007A0 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::TransposeInput0(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_TransposeInput0_m6F0F7049C18B53D8BBE7AD5A9C100B1D7EC64E4F (void);
// 0x000007A1 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::.ctor()
extern void IntermediateToRunnableNCHWPass__ctor_mD634D7D80B5AD958B01F137DAAFA398BBA8DDC0C (void);
// 0x000007A2 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::<Run>b__5_0(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_U3CRunU3Eb__5_0_m4F788068A29109EB4D37B4ADC992223250722A94 (void);
// 0x000007A3 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::<Run>b__5_1(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_U3CRunU3Eb__5_1_m103A35242B7046E46D8C5BBADAAED527B88B6207 (void);
// 0x000007A4 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass::<Run>b__5_2(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void IntermediateToRunnableNCHWPass_U3CRunU3Eb__5_2_m4B0A2A067513AF0C6C0BEB2199CAF0FD71817536 (void);
// 0x000007A5 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNHWCPass::Run(Unity.Barracuda.Model&)
extern void IntermediateToRunnableNHWCPass_Run_mBF5AF3F29A10A9131389562C910B6138EE20583F (void);
// 0x000007A6 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNHWCPass::.ctor()
extern void IntermediateToRunnableNHWCPass__ctor_m416F1E6B63B09875E3B92E80C5F2889EE34FB57B (void);
// 0x000007A7 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsImporterLikelyNHWCLayout(System.String)
extern void LayoutTransposeRemovalHelper_IsImporterLikelyNHWCLayout_mAC890CAB1A3F1B18205CC0A1D458A89D03A44A29 (void);
// 0x000007A8 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerTransposeCommutative(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerTransposeCommutative_m8474C7394CFE8FB3490F12F19BC4AC9A2B3B5C00 (void);
// 0x000007A9 System.Int32[] Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::PermuteShape(System.Int32[],System.Int32[])
extern void LayoutTransposeRemovalHelper_PermuteShape_m9F453F7849D78BCB0944C5E49F548FCE417FEADD (void);
// 0x000007AA System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerTranpose(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerTranpose_m5F3E27F195CF157F9E91154F1FDFFBDDD0B75E53 (void);
// 0x000007AB System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerConv(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerConv_m22DA8B597ED4104013DAEC23DFF5D43A9E451194 (void);
// 0x000007AC System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerReshape(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerReshape_m6230508A083C8B009E85E2CAEC287F913328EE21 (void);
// 0x000007AD System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerSqueeze(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerSqueeze_m24294A9CA3FE55AA91ACE3649F8A4C7C75B2AB32 (void);
// 0x000007AE System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerFlatten(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerFlatten_m497C7ACED0A55E27E6DBA0105C546BC35BA7EA83 (void);
// 0x000007AF System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerConst(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerConst_m3E753F4AC73E06D82FA10E2C11064C9B8917915F (void);
// 0x000007B0 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerRandom(Unity.Barracuda.Layer)
extern void LayoutTransposeRemovalHelper_IsLayerRandom_mA630E51B7081E093742E0F22B649A4E498E03294 (void);
// 0x000007B1 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsReshapeTransposeToNCHW(Unity.Barracuda.Layer,Unity.Barracuda.TensorShape)
extern void LayoutTransposeRemovalHelper_IsReshapeTransposeToNCHW_m47ADC8973D159ADA383B85321C1645F3BE97DBAC (void);
// 0x000007B2 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsReshapeTransposeToNHWC(Unity.Barracuda.Layer,Unity.Barracuda.TensorShape)
extern void LayoutTransposeRemovalHelper_IsReshapeTransposeToNHWC_m0122DF6C7E663A32EA0CBDAE3E212AEA3C87B886 (void);
// 0x000007B3 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsSqueezeTransposeToNHWC(Unity.Barracuda.Layer,System.Int32)
extern void LayoutTransposeRemovalHelper_IsSqueezeTransposeToNHWC_m55FDF2EEC9B6CE8F68E52AE840AD6E1F2F381312 (void);
// 0x000007B4 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsFlattenTransposeToNHWC(Unity.Barracuda.Layer,System.Int32)
extern void LayoutTransposeRemovalHelper_IsFlattenTransposeToNHWC_m425CCCDEB3A646B1E67645AF5092F1092BBC6D2B (void);
// 0x000007B5 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::IsLayerInput(Unity.Barracuda.Model,System.String)
extern void LayoutTransposeRemovalHelper_IsLayerInput_mBB364EDC944439FA6C7B78AAD9D3FE83541E70A1 (void);
// 0x000007B6 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::InferAllLayersChannelOrder(Unity.Barracuda.Model,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper/ChannelsOrder>&)
extern void LayoutTransposeRemovalHelper_InferAllLayersChannelOrder_mC4FEB7E471C124DCC154FAA1AFB073CD7689CCF4 (void);
// 0x000007B7 System.Void Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::RemoveAllChannelLayoutTransposes(Unity.Barracuda.Model&,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper/ChannelsOrder>)
extern void LayoutTransposeRemovalHelper_RemoveAllChannelLayoutTransposes_mBDA6164759EF16F4EA2560B456BF7D5C2D7542B2 (void);
// 0x000007B8 System.Void Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper::.ctor()
extern void LayoutTransposeRemovalHelper__ctor_m1507D04582A94EBB02F9DAD32242F68EFE1C5995 (void);
// 0x000007B9 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::CorrectConstantsForBroadCast(Unity.Barracuda.Model&)
extern void NCHWToNHWCPass_CorrectConstantsForBroadCast_m095E4F031B0DB91CF8F5608BA71A8BC9994AB06B (void);
// 0x000007BA System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::CorrectOutputLayoutToMatchNHWCLayout(Unity.Barracuda.Model&)
extern void NCHWToNHWCPass_CorrectOutputLayoutToMatchNHWCLayout_mAEFBD10E5EF7BEAE4B419B2CE240A567C38638EC (void);
// 0x000007BB System.Collections.Generic.Dictionary`2<Unity.Barracuda.Layer/Type,System.Func`3<Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder,System.Boolean>> Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::InstantiateRewriterNCHWToNHWC()
extern void NCHWToNHWCPass_InstantiateRewriterNCHWToNHWC_mFA36E9D6E6159A38195206DB6DAB4E8B3F032281 (void);
// 0x000007BC System.Int32[] Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::GetChannelsLastPermutationsFromRank(System.Int32)
extern void NCHWToNHWCPass_GetChannelsLastPermutationsFromRank_mC53A4FE3AA6F056CCD877BBD6C35A756EDAB307B (void);
// 0x000007BD System.Int32 Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::GetApproximateRankFromTensorShape(Unity.Barracuda.TensorShape)
extern void NCHWToNHWCPass_GetApproximateRankFromTensorShape_m6FEB446533124D39A91D9BED8A8D8184174E56F2 (void);
// 0x000007BE System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::ConvertDatasets(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_ConvertDatasets_m4F721087A3C73812A4EFF1E894B4E7AD1BA8BB09 (void);
// 0x000007BF System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::ConvertActivation(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_ConvertActivation_m3FC50C5B9FF777E5FA95152B3C486C552E26CE38 (void);
// 0x000007C0 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::ConvertNormal(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_ConvertNormal_m61D7322DE8328C89DB4F64179EEE969B1A4C6D77 (void);
// 0x000007C1 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::ConvertShape(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_ConvertShape_mE802D3BE0809D14E715999E0C2C7DF3C0BE96DCD (void);
// 0x000007C2 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::ConvertAxis(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_ConvertAxis_m4271E7FC814A32F0175945D993F9B360424C908B (void);
// 0x000007C3 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::Upsample(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_Upsample_mAB0D4940E6CD27FB7E104A32AEA6B8875CA6B4A2 (void);
// 0x000007C4 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::Reduce(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_Reduce_mE992C86029EED8808707D7C21E72DDBF48CC2B02 (void);
// 0x000007C5 System.Int32[] Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::AxisPermutationsForMappingNCHWLayoutToBarracuda(System.Int32)
extern void NCHWToNHWCPass_AxisPermutationsForMappingNCHWLayoutToBarracuda_m93C322EAF66BEE7D3AC92520B2A9F9260CE17B40 (void);
// 0x000007C6 System.Int32[] Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::PermuteToBarracuda(System.Int32[],System.Int32,System.Int32)
extern void NCHWToNHWCPass_PermuteToBarracuda_mFFE64A8967E76174C82BBFE065F82B6E69102DA2 (void);
// 0x000007C7 System.Int32[] Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::UnSqueezeAxisPermutationForMappingNCHWLayoutToBarracuda(System.Int32,System.Int32)
extern void NCHWToNHWCPass_UnSqueezeAxisPermutationForMappingNCHWLayoutToBarracuda_m6BC6BC2D7D9AF57B6BF089FB7534CDE560C0E64F (void);
// 0x000007C8 System.Int32[] Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::SqueezeAxisPermutationForMappingNCHWLayoutToBarracuda(System.Int32,System.Int32)
extern void NCHWToNHWCPass_SqueezeAxisPermutationForMappingNCHWLayoutToBarracuda_mB4D6315A51CD89A881B8AF5395A114B5DFE050BE (void);
// 0x000007C9 System.Int32[] Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::GetPermutationToMatchReduceWithDroppedDimensionsFromONNX(System.Int32[],System.Int32)
extern void NCHWToNHWCPass_GetPermutationToMatchReduceWithDroppedDimensionsFromONNX_m9D47720B0AAA4D2915AE87640E1E472AA141FD82 (void);
// 0x000007CA System.Collections.Generic.Dictionary`2<Unity.Barracuda.Layer/Type,System.Action`2<Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder>> Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::InstantiateRewriterNHWCToNHWC()
extern void NCHWToNHWCPass_InstantiateRewriterNHWCToNHWC_m665C77D6BC3B892408096A3120E924DE6136BACD (void);
// 0x000007CB System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::ConvertAxisNHWC(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_ConvertAxisNHWC_mB122D0CD5593509D49BB40D7B01C699EEEF43AA3 (void);
// 0x000007CC System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::Run(Unity.Barracuda.Model&)
extern void NCHWToNHWCPass_Run_mCEA02446B006AB55C6F62300158EA85AFCE3688A (void);
// 0x000007CD System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::Rewrite(Unity.Barracuda.Model&)
extern void NCHWToNHWCPass_Rewrite_m33C2F287364FAE3929FC04B8D56A10B1FEA6638C (void);
// 0x000007CE System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::.ctor()
extern void NCHWToNHWCPass__ctor_m40E659AFCBEBBBEB820AEBEBC8F6414440F26CA6 (void);
// 0x000007CF System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::.cctor()
extern void NCHWToNHWCPass__cctor_mE2548DE9BEBB3313859FA98F5543558F24DE90F1 (void);
// 0x000007D0 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__2_0(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_0_m42E4474C15152D839347A69CFDDE5014124A1654 (void);
// 0x000007D1 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__2_1(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_1_mC42910E64C307B3F6BAB40BB76D0FAB46C2D509B (void);
// 0x000007D2 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__2_3(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_3_m7728FB334DC06D70DD1D349017A796973BF242C8 (void);
// 0x000007D3 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__2_4(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_4_mF78F0024AC5452430AD93A29761813141BB362E0 (void);
// 0x000007D4 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__2_5(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_5_mB3F85D53BE5FB2F38A1D2CD34CE5EB46B33C3C6C (void);
// 0x000007D5 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__2_6(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_6_m61C34AFD4BD6FF6E4E216A97234D71913EE69EF0 (void);
// 0x000007D6 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__2_8(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_8_m40A8BB83A02582C7E2908D4039DB88042CB5D171 (void);
// 0x000007D7 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNCHWToNHWC>b__2_9(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_9_m6DEBC1ECAF3864A22B81669FA530B070063A2206 (void);
// 0x000007D8 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNHWCToNHWC>b__17_1(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNHWCToNHWCU3Eb__17_1_mDDE75F49F03B1106F60859AB5BC84477B5F3DD23 (void);
// 0x000007D9 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass::<InstantiateRewriterNHWCToNHWC>b__17_3(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void NCHWToNHWCPass_U3CInstantiateRewriterNHWCToNHWCU3Eb__17_3_mA37A260E53F2E58B2DBD6799F69150F2663F7A53 (void);
// 0x000007DA System.Void Unity.Barracuda.Compiler.Passes.PreserveLayersPass::Run(Unity.Barracuda.Model&)
extern void PreserveLayersPass_Run_mA7F042C1F2C8D0209236A5A5739A438A5018BA43 (void);
// 0x000007DB System.Void Unity.Barracuda.Compiler.Passes.PreserveLayersPass::.ctor()
extern void PreserveLayersPass__ctor_m183DCFDF4BF132DF4B56E874F647188F71EEA5D2 (void);
// 0x000007DC System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherContractionPass::Run(Unity.Barracuda.Model&)
extern void ShapeGatherContractionPass_Run_m1BCBB2A9616A1C9A52450A1B1CEBFB8C773744E1 (void);
// 0x000007DD System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherContractionPass::.ctor()
extern void ShapeGatherContractionPass__ctor_m49E376749DBAAB1BFAC4469930B1A989D3BB3054 (void);
// 0x000007DE System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass::Run(Unity.Barracuda.Model&)
extern void ShapeGatherReshapeToNHWCRemovePass_Run_m751CF57B5D34D45864F5E38561B3EA598E77D655 (void);
// 0x000007DF System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass::IsGather1DAndConvertingToChannelLast(Unity.Barracuda.Layer,Unity.Barracuda.Model)
extern void ShapeGatherReshapeToNHWCRemovePass_IsGather1DAndConvertingToChannelLast_mE8DBB4FB2B95D06BC8ED56BDED52EC1794B6C17D (void);
// 0x000007E0 System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass::CanLayerBeRemoved(Unity.Barracuda.Layer,Unity.Barracuda.Layer,Unity.Barracuda.Model)
extern void ShapeGatherReshapeToNHWCRemovePass_CanLayerBeRemoved_mFCCB3701313CE3CBBA37797CBDEEFAD375C67FA2 (void);
// 0x000007E1 System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass::.ctor()
extern void ShapeGatherReshapeToNHWCRemovePass__ctor_m105DFBD553D71F53337B0655DCF24609E428FEDD (void);
// 0x000007E2 System.Void Unity.Barracuda.Compiler.Passes.ValidationHelper::AppendWarning(System.Boolean,System.String,System.String,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&,Unity.Barracuda.Compiler.Passes.MessageType)
extern void ValidationHelper_AppendWarning_m42D706F966186DE9F44FB2719274EB2103084E11 (void);
// 0x000007E3 System.Void Unity.Barracuda.Compiler.Passes.ValidationHelper::.ctor()
extern void ValidationHelper__ctor_mB436B9CECA20778EF97F22A4838B1D560661D05D (void);
// 0x000007E4 System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
extern void ValidateNCHWShapesPass_Run_m43FC49040DD8E543ACC01C5F4272EC98D6A0E9ED (void);
// 0x000007E5 System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass::.ctor()
extern void ValidateNCHWShapesPass__ctor_mD51D03C8A887317BB7B48659A9315FF1CAFDEE60 (void);
// 0x000007E6 System.Void Unity.Barracuda.Compiler.Passes.ValidateIntermediateNCHWModelLayers::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
extern void ValidateIntermediateNCHWModelLayers_Run_mC60B194ADC6E9F5D13ED1A45201DDBE517A5CA0F (void);
// 0x000007E7 System.Void Unity.Barracuda.Compiler.Passes.ValidateIntermediateNCHWModelLayers::.ctor()
extern void ValidateIntermediateNCHWModelLayers__ctor_m8B7861F63FD9367E2FCE3515FD0D717DA19B708B (void);
// 0x000007E8 System.String[] Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass::FindBrokenLinks(Unity.Barracuda.Model,System.Collections.Generic.HashSet`1<System.String>)
extern void ValidateBrokenLinksPass_FindBrokenLinks_m809F56E0352F1488100EFBF7419A9AE192576605 (void);
// 0x000007E9 System.String[] Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass::FindBrokenLinks(Unity.Barracuda.Model,System.String[])
extern void ValidateBrokenLinksPass_FindBrokenLinks_m3DF800B6352F755655E92584CCF034DAA202B62E (void);
// 0x000007EA System.String[] Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass::FindBrokenLinks(Unity.Barracuda.Model)
extern void ValidateBrokenLinksPass_FindBrokenLinks_mD57BFB181B3CCC5F44698FDD651B61A58F503FCB (void);
// 0x000007EB System.Void Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
extern void ValidateBrokenLinksPass_Run_m49C344462D38C30D043EA0440CDC022FF1319C45 (void);
// 0x000007EC System.Void Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass::.ctor()
extern void ValidateBrokenLinksPass__ctor_m219423B4302E2A3937D45EB8D1794A00D6BF4A87 (void);
// 0x000007ED System.Void Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
extern void ValidateUniqueOutputsPass_Run_m5231C790BF3A13335C9CCF6A3FC968BC9B9E2474 (void);
// 0x000007EE System.Void Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass::.ctor()
extern void ValidateUniqueOutputsPass__ctor_m6249AC72F045E36629FD311683119E410919EAB7 (void);
// 0x000007EF System.Void Unity.Barracuda.Compiler.Passes.ValidateUnconectedLayersPass::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
extern void ValidateUnconectedLayersPass_Run_m5A856747A281586C8B1E8CC0F86E33040A01FC78 (void);
// 0x000007F0 System.Void Unity.Barracuda.Compiler.Passes.ValidateUnconectedLayersPass::.ctor()
extern void ValidateUnconectedLayersPass__ctor_m6FFA2D57154CFA2F26B7436E0858485A7657E47F (void);
// 0x000007F1 System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWPass::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
extern void ValidateNCHWPass_Run_mE43ACE2D015146EEB76CE5BADB48D7D6201739D5 (void);
// 0x000007F2 System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWPass::.ctor()
extern void ValidateNCHWPass__ctor_m9D18D114148330765D0FEA721212F38429AF100B (void);
// 0x000007F3 System.Void Unity.Barracuda.Compiler.Passes.ValidateNHWCPass::Run(Unity.Barracuda.Model,System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>&)
extern void ValidateNHWCPass_Run_m49DDBB8DC364621825051E58AE35235C2BC87EF4 (void);
// 0x000007F4 System.Void Unity.Barracuda.Compiler.Passes.ValidateNHWCPass::.ctor()
extern void ValidateNHWCPass__ctor_m39EB4B0C75FEF0D5549BE3BC1F98192F25DDA225 (void);
// 0x000007F5 System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass::Run(Unity.Barracuda.Model&)
extern void RemoveNoOpsPass_Run_m5257634451CAEB2964407186C2A9B45C52349EE7 (void);
// 0x000007F6 System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass::IsPermutationNoop(System.Int32[])
extern void RemoveNoOpsPass_IsPermutationNoop_m7F08ED84D5E0E468E0B82EAE4E76B01F7A456D9B (void);
// 0x000007F7 System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass::IsLayerNoop(Unity.Barracuda.Layer)
extern void RemoveNoOpsPass_IsLayerNoop_m921468F8F7BC75254EFC4CACC1F596FECAED493F (void);
// 0x000007F8 System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass::.ctor()
extern void RemoveNoOpsPass__ctor_m638993AD49F282F8405449BB88093E7BCF7BE43C (void);
// 0x000007F9 System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveUnusedLayersPass::Run(Unity.Barracuda.Model&)
extern void RemoveUnusedLayersPass_Run_m3F31BF8D0B74EBC26C009666733FE91F4D387761 (void);
// 0x000007FA System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveUnusedLayersPass::.ctor()
extern void RemoveUnusedLayersPass__ctor_m1C24B10979CD948F7987DDED2921DACCC316C9DE (void);
// 0x000007FB System.Void Unity.Barracuda.Compiler.Passes.Optimization.ConcatenateTransposesPass::Run(Unity.Barracuda.Model&)
extern void ConcatenateTransposesPass_Run_mD30B1395F07CFACB1A22B1F9F153CF1C9F18D5E6 (void);
// 0x000007FC System.Void Unity.Barracuda.Compiler.Passes.Optimization.ConcatenateTransposesPass::ConcatenateTransposes(Unity.Barracuda.Model&)
extern void ConcatenateTransposesPass_ConcatenateTransposes_m1D086F30E427BA66EC7F61651B00D663F582E27A (void);
// 0x000007FD System.Void Unity.Barracuda.Compiler.Passes.Optimization.ConcatenateTransposesPass::.ctor()
extern void ConcatenateTransposesPass__ctor_mEFA7B44EDA522CD574F47020B56B06EFDE9BB9D9 (void);
// 0x000007FE System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass::Run(Unity.Barracuda.Model&)
extern void FuseActivationPass_Run_mE00131E88A813E9BB3E6FABC4FB268604A6861AC (void);
// 0x000007FF System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass::IsLayerSupportingActivationFusing(Unity.Barracuda.Layer/Type)
extern void FuseActivationPass_IsLayerSupportingActivationFusing_mDAAD7ABAF74ED22A32C9FE2EA70EC772BFF2C12E (void);
// 0x00000800 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass::IsActivationFusable(Unity.Barracuda.Layer/Activation)
extern void FuseActivationPass_IsActivationFusable_mEFE1D657E165D3972FD926E20F532CA5A3380026 (void);
// 0x00000801 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass::FuseActivation(Unity.Barracuda.Model&,Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void FuseActivationPass_FuseActivation_m7A9D085B6CDF2B0B24BE2FE7AEEA25F761E69452 (void);
// 0x00000802 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass::.ctor()
extern void FuseActivationPass__ctor_m6DD8631A14D0B3F1A6780DAFEB57E3BE17C58FB0 (void);
// 0x00000803 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseConstantsPass::Run(Unity.Barracuda.Model&)
extern void FuseConstantsPass_Run_m4ADBC762D20F30461893FB2DCA8D8A7BB08C51A4 (void);
// 0x00000804 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseConstantsPass::FuseConstants(Unity.Barracuda.Model&)
extern void FuseConstantsPass_FuseConstants_m28BA03BE1E4655BBB065E621FD1BC32A5A23DD28 (void);
// 0x00000805 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseConstantsPass::.ctor()
extern void FuseConstantsPass__ctor_m3BDCFC966BD529FB430C20B3B290F5D053B842BF (void);
// 0x00000806 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::Run(Unity.Barracuda.Model&)
extern void FuseLinearLayersPass_Run_m2F5081A666FA966ED5F756D404F90BF46163E8A3 (void);
// 0x00000807 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::IsLayerConstant(Unity.Barracuda.Layer)
extern void FuseLinearLayersPass_IsLayerConstant_m9F02E12D9255588F0F208945FE9D88E5F5D44243 (void);
// 0x00000808 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::IsLayerFusedActivation(Unity.Barracuda.Layer)
extern void FuseLinearLayersPass_IsLayerFusedActivation_m9E78EEF63F8E96FF98D4F233CBE3D68724A1370A (void);
// 0x00000809 System.Int64 Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::LayerComplextity(Unity.Barracuda.Layer)
extern void FuseLinearLayersPass_LayerComplextity_mCD93C62B9DC2D26B6F0534310881333A6EADCD9C (void);
// 0x0000080A Unity.Barracuda.Layer Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::FuseConsecutiveLayers(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void FuseLinearLayersPass_FuseConsecutiveLayers_mFB019BA1D4883181D3E2BF6E419E2070DB5EEF50 (void);
// 0x0000080B System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::AreLayersFusable(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void FuseLinearLayersPass_AreLayersFusable_m91264B1B84892B63EF07F712B76E1607DA20A829 (void);
// 0x0000080C System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::PackConstantsForMathOps(Unity.Barracuda.Model,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>)
extern void FuseLinearLayersPass_PackConstantsForMathOps_m116C1594CE7072C20FDB356846A6B4A4E0C4A285 (void);
// 0x0000080D System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::UnpackConstantsForMathOps(Unity.Barracuda.Model)
extern void FuseLinearLayersPass_UnpackConstantsForMathOps_m37E3C057C091A03F861C459F3571385CE2BDB72F (void);
// 0x0000080E System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::.ctor()
extern void FuseLinearLayersPass__ctor_m22FDA4DB8958954B74CC989F365EFBDA3DB7A0F4 (void);
// 0x0000080F System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass::.cctor()
extern void FuseLinearLayersPass__cctor_mB1DDDADA30B78E94E8017AF6581367890A51B7FD (void);
// 0x00000810 System.Void Unity.Barracuda.BarracudaBackendsFactory/<>c::.cctor()
extern void U3CU3Ec__cctor_m964AFD4CB51FFB3A1537D709C47E9F0004ADD481 (void);
// 0x00000811 System.Void Unity.Barracuda.BarracudaBackendsFactory/<>c::.ctor()
extern void U3CU3Ec__ctor_m7A259799055559E7C09693D008CEFE92BC8330D5 (void);
// 0x00000812 System.String Unity.Barracuda.BarracudaBackendsFactory/<>c::<PatchModel>b__5_1(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CPatchModelU3Eb__5_1_m336013E7023D18899335E7F9B81183BADCB413AE (void);
// 0x00000813 System.String Unity.Barracuda.BarracudaBackendsFactory/<>c::<PatchModel>b__5_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CPatchModelU3Eb__5_0_m8C1530ED6B11ED927143D40E014019CADD75988C (void);
// 0x00000814 System.String Unity.Barracuda.BarracudaBackendsFactory/<>c::<ValidateModel>b__6_0(System.String)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_0_m2EBC8C512C6C5543CB5088A57EA5113F1DF8F318 (void);
// 0x00000815 System.Boolean Unity.Barracuda.BarracudaBackendsFactory/<>c::<ValidateModel>b__6_1(System.Linq.IGrouping`2<System.String,System.String>)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_1_mE1D18674B15A36E13483B6960EC2C87BF0DF9D2A (void);
// 0x00000816 System.String Unity.Barracuda.BarracudaBackendsFactory/<>c::<ValidateModel>b__6_2(System.Linq.IGrouping`2<System.String,System.String>)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_2_m94FE2AABE23B72EAA32B117B13B626DEBD59BCCB (void);
// 0x00000817 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::Schedule(Unity.Jobs.JobHandle)
extern void MatrixMultiplyJob_Schedule_m27CCAA5322216A7272A04DC6B6F68A1F26E58E05 (void);
// 0x00000818 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::Schedule(System.Int32,Unity.Jobs.JobHandle)
extern void MatrixMultiplyJob_Schedule_mF6F6026AAFB6CCB88D0E8308FCD0F78CC864F6FF (void);
// 0x00000819 System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::Execute(System.Int32)
extern void MatrixMultiplyJob_Execute_mEE36B8FBE0AC0A21A4748BDD3BB91C00246C0569 (void);
// 0x0000081A System.Single* Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::AllocBlock()
extern void MatrixMultiplyJob_AllocBlock_m9F4C46DE9E8C17D0404759362E72CAC03BF82EE9 (void);
// 0x0000081B System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::FreeBlock(System.Single*)
extern void MatrixMultiplyJob_FreeBlock_mFBDCFC3881996C067430E8EE95DEE05E2288C2BF (void);
// 0x0000081C System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiplyJob::MultiplyBlockUnroll16xh(System.Single*,System.Int32,System.Single*,System.Int32,System.Single*,System.Int32)
extern void MatrixMultiplyJob_MultiplyBlockUnroll16xh_m4D501CC1E04567DCE7FD38CEDD13AFCF62B2A351 (void);
// 0x0000081D Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/MatrixMultiply3x2Job::Schedule(Unity.Jobs.JobHandle)
extern void MatrixMultiply3x2Job_Schedule_m1BB802DBA082569EFA3BF1B1FACD03D290AD3DCD (void);
// 0x0000081E Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/MatrixMultiply3x2Job::Schedule(System.Int32,Unity.Jobs.JobHandle)
extern void MatrixMultiply3x2Job_Schedule_m13FF3708320CECAA12A203A91EFA1319B8A664D3 (void);
// 0x0000081F System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiply3x2Job::Execute(System.Int32)
extern void MatrixMultiply3x2Job_Execute_mDD41419CDF94F35CCB538D2A6038C8F4D0FC1F78 (void);
// 0x00000820 System.Single* Unity.Barracuda.BurstCPUOps/MatrixMultiply3x2Job::AllocBlock()
extern void MatrixMultiply3x2Job_AllocBlock_mE1D56B937803CB0282738FDA47A06685F4E79612 (void);
// 0x00000821 System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiply3x2Job::FreeBlock(System.Single*)
extern void MatrixMultiply3x2Job_FreeBlock_m15179C2C213113852BFFBA9694736B2B997A8EBD (void);
// 0x00000822 System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiply3x2Job::MultiplyBlockUnroll16xh(System.Single*,System.Int32,System.Single*,System.Int32,System.Single*,System.Int32)
extern void MatrixMultiply3x2Job_MultiplyBlockUnroll16xh_m87069355404F52C75566F5D615243D1E37002327 (void);
// 0x00000823 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/MatrixMultiply4x4Job::Schedule(Unity.Jobs.JobHandle)
extern void MatrixMultiply4x4Job_Schedule_m11EFC9C7116199F85DF51401F7F9CF688740715A (void);
// 0x00000824 Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps/MatrixMultiply4x4Job::Schedule(System.Int32,Unity.Jobs.JobHandle)
extern void MatrixMultiply4x4Job_Schedule_mB37E7A635A37F89617136611FD58CFA168734719 (void);
// 0x00000825 System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiply4x4Job::Execute(System.Int32)
extern void MatrixMultiply4x4Job_Execute_m97BF410D73026D9E2AF25493D8CAEC3C25599190 (void);
// 0x00000826 System.Single* Unity.Barracuda.BurstCPUOps/MatrixMultiply4x4Job::AllocBlock()
extern void MatrixMultiply4x4Job_AllocBlock_m641795095EEAE3A212902E53EE107CE365F47732 (void);
// 0x00000827 System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiply4x4Job::FreeBlock(System.Single*)
extern void MatrixMultiply4x4Job_FreeBlock_mF9C3A653B7A0759C98C7CC34CF34EEEF119AE215 (void);
// 0x00000828 System.Void Unity.Barracuda.BurstCPUOps/MatrixMultiply4x4Job::MultiplyBlockUnroll16xh(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32)
extern void MatrixMultiply4x4Job_MultiplyBlockUnroll16xh_m93F5A9BD076206AE9F8CB07D5C4BA9390521B8AB (void);
// 0x00000829 System.Void Unity.Barracuda.BurstCPUOps/Im2ColSliceJob::Execute(System.Int32)
extern void Im2ColSliceJob_Execute_m773B17C48DEA2007E285D0ED6C6315D0DB947F31 (void);
// 0x0000082A System.Void Unity.Barracuda.BurstCPUOps/MaxPool2DJob::Execute(System.Int32)
extern void MaxPool2DJob_Execute_m9BF185A23B461039C7CD646FF7AB338777A1C942 (void);
// 0x0000082B System.Void Unity.Barracuda.BurstCPUOps/AvgPool2DJob::Execute(System.Int32)
extern void AvgPool2DJob_Execute_m57F0211D2BAF4A65096649E20E2D1997217BAA56 (void);
// 0x0000082C System.Void Unity.Barracuda.BurstCPUOps/DepthwiseConv2DJob::Execute(System.Int32)
extern void DepthwiseConv2DJob_Execute_mB44D7B11C489577A08D8BF7BA80DC53E3F51AF9F (void);
// 0x0000082D System.Void Unity.Barracuda.BurstCPUOps/PReluJob::Execute(System.Int32)
extern void PReluJob_Execute_m6204897FA9E3B444FAC4E5BBDDA72E34B0F85420 (void);
// 0x0000082E System.Single Unity.Barracuda.BurstCPUOps/PReluJob::PRelu(System.Single,System.Single)
extern void PReluJob_PRelu_m9B8928FD9CCA194EE2DF4E1E667B707F15359C50 (void);
// 0x0000082F System.Void Unity.Barracuda.BurstCPUOps/ReluJob::Execute(System.Int32)
extern void ReluJob_Execute_m72912A14F95D8D03DD1CFEDD85A07CB6EC5913CB (void);
// 0x00000830 System.Void Unity.Barracuda.BurstCPUOps/Relu6Job::Execute(System.Int32)
extern void Relu6Job_Execute_m79600547CEC3A1940B6EE6A3BC4DE708E36AB614 (void);
// 0x00000831 System.Single Unity.Barracuda.BurstCPUOps/LeakyReluJob::get_alpha()
extern void LeakyReluJob_get_alpha_m886442C6EE80302AA6BCC5CC223E15D39E272710 (void);
// 0x00000832 System.Void Unity.Barracuda.BurstCPUOps/LeakyReluJob::set_alpha(System.Single)
extern void LeakyReluJob_set_alpha_mB2924217DAEA5ABC22E1840AF95496D08751BB22 (void);
// 0x00000833 System.Void Unity.Barracuda.BurstCPUOps/LeakyReluJob::Execute(System.Int32)
extern void LeakyReluJob_Execute_m9FCB64D1CB749B6D36F343DC311D75FBECAD952B (void);
// 0x00000834 System.Void Unity.Barracuda.BurstCPUOps/TanhJob::Execute(System.Int32)
extern void TanhJob_Execute_m158F898A267797CC2588F8130723BB353E486DC2 (void);
// 0x00000835 System.Void Unity.Barracuda.BurstCPUOps/SoftplusJob::Execute(System.Int32)
extern void SoftplusJob_Execute_mFE7AA25DB056FCDD8F617BE1CC7F936DC3DBF54E (void);
// 0x00000836 System.Void Unity.Barracuda.BurstCPUOps/SigmoidJob::Execute(System.Int32)
extern void SigmoidJob_Execute_mC5F893C95A8A00FFF4B4A9C6BDFD6EB3643B07FC (void);
// 0x00000837 System.Void Unity.Barracuda.BurstCPUOps/EluJob::Execute(System.Int32)
extern void EluJob_Execute_mAE936B9401BFD74C2F0312092E9616B70BA8B8FC (void);
// 0x00000838 System.Void Unity.Barracuda.BurstCPUOps/SeluJob::Execute(System.Int32)
extern void SeluJob_Execute_m745E156A7B4BDD719F958BC72A9BBB8E71853B9C (void);
// 0x00000839 System.Void Unity.Barracuda.BurstCPUOps/SwishJob::Execute(System.Int32)
extern void SwishJob_Execute_mF21A1B36747DDF9BEBAE661BFEC0A6ECD2713C2E (void);
// 0x0000083A System.Void Unity.Barracuda.BurstCPUOps/ExpBiasReduceJob::Execute(System.Int32)
extern void ExpBiasReduceJob_Execute_m74E098A135ECB4D17908822823F82DECD91FAB8E (void);
// 0x0000083B System.Void Unity.Barracuda.BurstCPUOps/SoftmaxEndJob::Execute(System.Int32)
extern void SoftmaxEndJob_Execute_mD34E259483671D7B38EF12856EEAED7F4B1B6B88 (void);
// 0x0000083C System.Void Unity.Barracuda.BurstCPUOps/LogSoftmaxEndJob::Execute(System.Int32)
extern void LogSoftmaxEndJob_Execute_m08B2FC3E3D5865AE0E5334C14E1663333EDBAD7A (void);
// 0x0000083D System.Void Unity.Barracuda.BurstCPUOps/AbsJob::Execute(System.Int32)
extern void AbsJob_Execute_m82E634F7930C308464776E772F40B784A852F840 (void);
// 0x0000083E System.Void Unity.Barracuda.BurstCPUOps/NegJob::Execute(System.Int32)
extern void NegJob_Execute_m3B9EF9DC20B88FBD2CFE5A635CA993A15C019F10 (void);
// 0x0000083F System.Void Unity.Barracuda.BurstCPUOps/CeilJob::Execute(System.Int32)
extern void CeilJob_Execute_m2450A5601242A6CE3DB9774EC46734D39440F2D7 (void);
// 0x00000840 System.Void Unity.Barracuda.BurstCPUOps/ClipJob::Execute(System.Int32)
extern void ClipJob_Execute_m9388037D9CA0E67D09808A3D2F0926EE242EC4CA (void);
// 0x00000841 System.Void Unity.Barracuda.BurstCPUOps/FloorJob::Execute(System.Int32)
extern void FloorJob_Execute_m0DEAFF731774B5DDF430CED756631A4EB9B822D2 (void);
// 0x00000842 System.Void Unity.Barracuda.BurstCPUOps/ReciprocalJob::Execute(System.Int32)
extern void ReciprocalJob_Execute_m73878A023826CACDBD77A153DDBB6CA9934B9805 (void);
// 0x00000843 System.Void Unity.Barracuda.BurstCPUOps/PowJob::Execute(System.Int32)
extern void PowJob_Execute_mD8D0C447DD0A54E397AC304C72CD4BADC959CEA1 (void);
// 0x00000844 System.Void Unity.Barracuda.BurstCPUOps/ExpJob::Execute(System.Int32)
extern void ExpJob_Execute_m0E5BBBB70A12ECD6AA54E83BCCC534E7B34F4AC6 (void);
// 0x00000845 System.Void Unity.Barracuda.BurstCPUOps/LogJob::Execute(System.Int32)
extern void LogJob_Execute_mD0C0D680DB6A510485738030ECDC459CF46CDF0A (void);
// 0x00000846 System.Void Unity.Barracuda.BurstCPUOps/SqrtJob::Execute(System.Int32)
extern void SqrtJob_Execute_mA93818E207938E825564285740F3C7B56D590B63 (void);
// 0x00000847 System.Void Unity.Barracuda.BurstCPUOps/AcosJob::Execute(System.Int32)
extern void AcosJob_Execute_mCA702020750F4ADE2D2D7892534691DF73E3D5FC (void);
// 0x00000848 System.Void Unity.Barracuda.BurstCPUOps/AcoshJob::Execute(System.Int32)
extern void AcoshJob_Execute_m68DBEA7F51712DBB27EFECBE0F1D01DEC34BBAB7 (void);
// 0x00000849 System.Void Unity.Barracuda.BurstCPUOps/AsinJob::Execute(System.Int32)
extern void AsinJob_Execute_mB57217836C705AB952A9173A60D0C7D2AD91C029 (void);
// 0x0000084A System.Void Unity.Barracuda.BurstCPUOps/AsinhJob::Execute(System.Int32)
extern void AsinhJob_Execute_m4AFF19D044E0E8F5804C860E15073EA063CE4643 (void);
// 0x0000084B System.Void Unity.Barracuda.BurstCPUOps/AtanJob::Execute(System.Int32)
extern void AtanJob_Execute_m4AB2D86FB4A0EDCAD5FF466E31439D141C2365A7 (void);
// 0x0000084C System.Void Unity.Barracuda.BurstCPUOps/AtanhJob::Execute(System.Int32)
extern void AtanhJob_Execute_m4844DA6B2C0B579D3C293DF91CE31299794BA0BA (void);
// 0x0000084D System.Void Unity.Barracuda.BurstCPUOps/CosJob::Execute(System.Int32)
extern void CosJob_Execute_m445A94BB767F848108A8E650DA901D60DC15BDD4 (void);
// 0x0000084E System.Void Unity.Barracuda.BurstCPUOps/CoshJob::Execute(System.Int32)
extern void CoshJob_Execute_mB9DD9DD2D959896FBF384675D8FB35EB64DD8BDA (void);
// 0x0000084F System.Void Unity.Barracuda.BurstCPUOps/SinJob::Execute(System.Int32)
extern void SinJob_Execute_m0CD61E5C990221E7DE15F72AC9405947652FABA4 (void);
// 0x00000850 System.Void Unity.Barracuda.BurstCPUOps/SinhJob::Execute(System.Int32)
extern void SinhJob_Execute_mDEF3CBF65CBCCF4E98C481D985D643007DD160D8 (void);
// 0x00000851 System.Void Unity.Barracuda.BurstCPUOps/TanJob::Execute(System.Int32)
extern void TanJob_Execute_m2CA241B80D795FCA9AD8E50D6C2E9A3A2B12F552 (void);
// 0x00000852 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseAddJob::Execute(System.Int32)
extern void ElementwiseAddJob_Execute_m83D82FE92C96EF846A9115063487BFEFD7E83913 (void);
// 0x00000853 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMulJob::Execute(System.Int32)
extern void ElementwiseMulJob_Execute_m21EF8876CE60DF524B3461B0A81EC52CEB782200 (void);
// 0x00000854 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseDivJob::Execute(System.Int32)
extern void ElementwiseDivJob_Execute_mBEBBBCDBCBF27F768BE420397A9FE8EDCB076CE7 (void);
// 0x00000855 System.Void Unity.Barracuda.BurstCPUOps/ElementwisePowJob::Execute(System.Int32)
extern void ElementwisePowJob_Execute_mE4329F018D1AAF548AEFFDEDE596CADFABA8420C (void);
// 0x00000856 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMaxJob::Execute(System.Int32)
extern void ElementwiseMaxJob_Execute_m62CFBA776A48F922B664281FCE82B75ACB82F717 (void);
// 0x00000857 System.Void Unity.Barracuda.BurstCPUOps/ElementwiseMinJob::Execute(System.Int32)
extern void ElementwiseMinJob_Execute_mEF3E6BA3A011DFEE0F259144AAECE21F0C4D35E0 (void);
// 0x00000858 System.Void Unity.Barracuda.BurstCPUOps/SetConstantPaddingJob::Execute(System.Int32)
extern void SetConstantPaddingJob_Execute_m0FBF8D6271F2D92AE14299C1A2F8CE34CAADDCCE (void);
// 0x00000859 System.Void Unity.Barracuda.BurstCPUOps/SetConstantPaddingWithStrideJob::Execute(System.Int32)
extern void SetConstantPaddingWithStrideJob_Execute_m8C1FC3C5213A3AD734C081AC588AE52912EFDEDD (void);
// 0x0000085A System.Void Unity.Barracuda.BurstCPUOps/ZeroBroadcastJob::Execute()
extern void ZeroBroadcastJob_Execute_m3372F65507303FF078F11487BC5DC566905BED68 (void);
// 0x0000085B System.Void Unity.Barracuda.BurstCPUOps/CopyJob::Execute()
extern void CopyJob_Execute_m096190F05069634457887E53821A06F93F12E607 (void);
// 0x0000085C System.Void Unity.Barracuda.BurstCPUOps/CopyStrideJob::Execute()
extern void CopyStrideJob_Execute_mA2411005CB9292781DE2CBBBD83F4509FF728109 (void);
// 0x0000085D System.Void Unity.Barracuda.BurstCPUOps/VectorBroadcastJob::Execute()
extern void VectorBroadcastJob_Execute_mC0BE1647C5A7C65D922BADE90971AE3E679086FE (void);
// 0x0000085E System.Void Unity.Barracuda.BurstCPUOps/GenericSliceJob::Execute(System.Int32)
extern void GenericSliceJob_Execute_mF66997D1B935D075B5D1B01D8FC183398898665C (void);
// 0x0000085F System.Void Unity.Barracuda.BurstCPUOps/GenericStridedSliceJob::Execute(System.Int32)
extern void GenericStridedSliceJob_Execute_m672E35E9E80405D06CCF9122C08F02BD2C1E281B (void);
// 0x00000860 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastAddJob::Execute(System.Int32)
extern void ScalarBroadcastAddJob_Execute_m264B5F8D68692E7771BC5FC5E9A66E9BE2532B68 (void);
// 0x00000861 System.Void Unity.Barracuda.BurstCPUOps/BroadcastAddJob::Execute(System.Int32)
extern void BroadcastAddJob_Execute_m5953A50C960895D0590372FC6DA015FAEBD9A9BF (void);
// 0x00000862 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMulJob::Execute(System.Int32)
extern void ScalarBroadcastMulJob_Execute_mDC4CA259CD93648DAB327AE29BC5055FDCAAE94D (void);
// 0x00000863 System.Void Unity.Barracuda.BurstCPUOps/BroadcastMulJob::Execute(System.Int32)
extern void BroadcastMulJob_Execute_m62B76899EA06312D974CDAB7B4FE4FAE63C20D01 (void);
// 0x00000864 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastDivJob::Execute(System.Int32)
extern void ScalarBroadcastDivJob_Execute_m21386BC4D50BA041794CD2E0DA753E0F3F40DCAF (void);
// 0x00000865 System.Void Unity.Barracuda.BurstCPUOps/BroadcastDivJob::Execute(System.Int32)
extern void BroadcastDivJob_Execute_mAA2C6EACB6EA2FF8BE02084A59CDD09C1767A274 (void);
// 0x00000866 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMinJob::Execute(System.Int32)
extern void ScalarBroadcastMinJob_Execute_m02CB1A5717E66BD1778AB0E1B919AABFBED94333 (void);
// 0x00000867 System.Void Unity.Barracuda.BurstCPUOps/BroadcastMinJob::Execute(System.Int32)
extern void BroadcastMinJob_Execute_mB6C6D7ED28AB573384F1F71590E5A292BC684DCA (void);
// 0x00000868 System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastMaxJob::Execute(System.Int32)
extern void ScalarBroadcastMaxJob_Execute_m30F19AFF0DDB99D1394C6CDCBD69E1FAB6C9F6BA (void);
// 0x00000869 System.Void Unity.Barracuda.BurstCPUOps/BroadcastMaxJob::Execute(System.Int32)
extern void BroadcastMaxJob_Execute_m7260CB723604DE2803339B7BDD30D512BF72668F (void);
// 0x0000086A System.Void Unity.Barracuda.BurstCPUOps/ScalarBroadcastPowJob::Execute(System.Int32)
extern void ScalarBroadcastPowJob_Execute_m976281FE3C2E8BDC9ED5D2830FBDDAC96E87B484 (void);
// 0x0000086B System.Void Unity.Barracuda.BurstCPUOps/BroadcastPowJob::Execute(System.Int32)
extern void BroadcastPowJob_Execute_mA374941F51AEE0633836F9CF5E80CBDB6BA3BA39 (void);
// 0x0000086C System.Void Unity.Barracuda.BurstCPUOps/GenericBroadcastJob::Execute(System.Int32)
extern void GenericBroadcastJob_Execute_mB5089F15ABD18BF03FF4F9056ED7D52AE7239547 (void);
// 0x0000086D System.Void Unity.Barracuda.BurstCPUOps/VectorBroadcastScaleBiasJob::Execute(System.Int32)
extern void VectorBroadcastScaleBiasJob_Execute_m3386A2F452399A839465DCB309A34064BC5D8A6B (void);
// 0x0000086E System.Void Unity.Barracuda.BurstCPUOps/ReduceMeanJob::Execute(System.Int32)
extern void ReduceMeanJob_Execute_mA69FE22E4422FA3A59DEF76E747C06C30C1A2F0B (void);
// 0x0000086F System.Void Unity.Barracuda.BurstCPUOps/ReduceSumJob::Execute(System.Int32)
extern void ReduceSumJob_Execute_m78610E8A3BBCDE7421B61B49EDD8D799E858BF6E (void);
// 0x00000870 System.Void Unity.Barracuda.BurstCPUOps/ReduceMaxJob::Execute(System.Int32)
extern void ReduceMaxJob_Execute_m17C81237FB727857F50C63E81A7B3757C7AD060A (void);
// 0x00000871 System.Void Unity.Barracuda.BurstCPUOps/TransposeJob::Execute(System.Int32)
extern void TransposeJob_Execute_m77538C9A6D0CE8B842F115ADCA8A49CF1F67CAD0 (void);
// 0x00000872 System.Void Unity.Barracuda.BurstCPUOps/MemFreeJob::Execute()
extern void MemFreeJob_Execute_mD68AED70903F88722B4D9F29976AFB9981167C04 (void);
// 0x00000873 System.Void Unity.Barracuda.ComputeKernelLibrary/Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,System.Boolean,System.Boolean)
extern void Entry__ctor_mFBDE9EBA6A2A22B6FAE824639160BB49929DFB8D (void);
// 0x00000874 System.Void Unity.Barracuda.ComputeKernelLibrary/Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,System.UInt32)
extern void Entry__ctor_m54A9CCBE9BBB6E0CB4C1B0F1166CEF3F48809792 (void);
// 0x00000875 System.Void Unity.Barracuda.ComputeKernelLibrary/Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,Unity.Barracuda.ComputeKernelLibrary/StrictDimensions)
extern void Entry__ctor_m6F6A950E84E11362A7C5CE42063FE9C7FEA8683D (void);
// 0x00000876 System.Void Unity.Barracuda.ComputeKernelLibrary/Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,Unity.Barracuda.ComputeKernelLibrary/StrictDimensions,System.Boolean)
extern void Entry__ctor_mA0D6FC31396814355C6BD16857DA2467C9277913 (void);
// 0x00000877 System.Void Unity.Barracuda.ComputeDebugUtils/KernelAssertInfo::.ctor(System.UInt32[])
extern void KernelAssertInfo__ctor_mD56DC894C510657645B4B18EF011A0AC774478E4 (void);
// 0x00000878 Unity.Barracuda.ComputeKernel Unity.Barracuda.PrecompiledComputeOps/CompiledLayer::get_kernel()
extern void CompiledLayer_get_kernel_mA831B770A79E21F8CBFFB0C0B44268C203A593F2 (void);
// 0x00000879 System.Void Unity.Barracuda.ReferenceCPUOps/Seed::.ctor(UnityEngine.Random/State[]&,System.Int32)
extern void Seed__ctor_m5B44FBEDE56A64B216185D4206EF9A0ED370A78F (void);
// 0x0000087A System.Void Unity.Barracuda.ReferenceCPUOps/Seed::Dispose()
extern void Seed_Dispose_m964720BA7F7FF547828D714CF1699FDC7E0F35B3 (void);
// 0x0000087B System.Void Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass29_0::.ctor()
extern void U3CU3Ec__DisplayClass29_0__ctor_mEE02DEE71C123C23FB8F709D753978FAF8BAF58D (void);
// 0x0000087C System.Single Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass29_0::<Border2D>b__0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec__DisplayClass29_0_U3CBorder2DU3Eb__0_m478BFA1ED3735BE0A9E9184191C53CC201201501 (void);
// 0x0000087D System.Void Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass30_0::.ctor()
extern void U3CU3Ec__DisplayClass30_0__ctor_m0EF4D32F42E15D349CAC232019D7195AC2A626C0 (void);
// 0x0000087E System.Single Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass30_0::<Border3D>b__0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec__DisplayClass30_0_U3CBorder3DU3Eb__0_m663AC7B7FC031C073887C63D3A3E1DAD5426E05C (void);
// 0x0000087F System.Void Unity.Barracuda.ReferenceCPUOps/<>c::.cctor()
extern void U3CU3Ec__cctor_m7F929074A3FB62B3E4045F9F36E936BB99FEEA7E (void);
// 0x00000880 System.Void Unity.Barracuda.ReferenceCPUOps/<>c::.ctor()
extern void U3CU3Ec__ctor_mDFE44306CC04E6429AE630BC38519927B7CC73EA (void);
// 0x00000881 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Pad2DReflect>g__GetReflectPadding|32_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec_U3CPad2DReflectU3Eg__GetReflectPaddingU7C32_0_m9C638BB66CED7BE9D6911772D35462F2C0AD222C (void);
// 0x00000882 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Pad2DSymmetric>g__GetSymmetricPadding|33_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec_U3CPad2DSymmetricU3Eg__GetSymmetricPaddingU7C33_0_m5ADBE22D7DE7DDE1129D37A126A23A210138993B (void);
// 0x00000883 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Pad2DEdge>g__GetEdgePadding|34_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec_U3CPad2DEdgeU3Eg__GetEdgePaddingU7C34_0_mE461C1BF5DAF409F1F0C1DAAFC92B202E7A5A1F1 (void);
// 0x00000884 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Add>b__92_0(System.Single,System.Single)
extern void U3CU3Ec_U3CAddU3Eb__92_0_m03FB7AAF3816F01F8815BAC0F1693DB16285C144 (void);
// 0x00000885 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Sub>b__93_0(System.Single,System.Single)
extern void U3CU3Ec_U3CSubU3Eb__93_0_m4095B766D33E94774A6FEF50B655D36B5C0D8567 (void);
// 0x00000886 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Mul>b__94_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMulU3Eb__94_0_m4AD3923BAACAE62EBA92DA32F5F7A2B185E97C78 (void);
// 0x00000887 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Div>b__95_0(System.Single,System.Single)
extern void U3CU3Ec_U3CDivU3Eb__95_0_mA73A06B4BC03CF1EAE7327534FCA30DCF2ED66B2 (void);
// 0x00000888 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Pow>b__96_0(System.Single,System.Single)
extern void U3CU3Ec_U3CPowU3Eb__96_0_m7A0D3A90722AA57E10D48AE27A40FC8532222518 (void);
// 0x00000889 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Min>b__97_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMinU3Eb__97_0_m45F9E550842AF84555E34543E4758069E4394717 (void);
// 0x0000088A System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Max>b__98_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMaxU3Eb__98_0_mC3E6F1E0325A6B0ED33C521E38849E340C503432 (void);
// 0x0000088B System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Mean>b__99_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMeanU3Eb__99_0_m97D2BFB37E0DD831DB01AF846964B5A591647B02 (void);
// 0x0000088C System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Greater>b__108_0(System.Single,System.Single)
extern void U3CU3Ec_U3CGreaterU3Eb__108_0_mF589B338D00CA6B899080F9EB2FBD5FD4B8E61DD (void);
// 0x0000088D System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<GreaterEqual>b__109_0(System.Single,System.Single)
extern void U3CU3Ec_U3CGreaterEqualU3Eb__109_0_m161B87704D3D9063D8C9375AB626868CA1BB81B8 (void);
// 0x0000088E System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Less>b__110_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLessU3Eb__110_0_m677EE58786DC79E3D9AF7E45B1E9C90C1A46F760 (void);
// 0x0000088F System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LessEqual>b__111_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLessEqualU3Eb__111_0_m191F83D710824871F04002B958B023684B4559A5 (void);
// 0x00000890 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Equal>b__112_0(System.Single,System.Single)
extern void U3CU3Ec_U3CEqualU3Eb__112_0_mBEA0F844435585327F2FC58ABF2541F0BC4CA208 (void);
// 0x00000891 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LogicalOr>b__113_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalOrU3Eb__113_0_m1724B24801B382B3F37A43C6F491E04F463CE677 (void);
// 0x00000892 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LogicalAnd>b__114_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalAndU3Eb__114_0_mB66A87F195CC0DB3527DB8CE9C32F26F396D2884 (void);
// 0x00000893 System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LogicalXor>b__115_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalXorU3Eb__115_0_mF366441BEAEC0356969ABA3E25B08D229DA98F8E (void);
// 0x00000894 System.Void Unity.Barracuda.ComputeTensorData/ConvertFromOnDeviceFormatHelper::.ctor()
extern void ConvertFromOnDeviceFormatHelper__ctor_m2709A71045C0165D6898B1DABA02F7443DF61F4E (void);
// 0x00000895 System.Single[] Unity.Barracuda.ComputeTensorData/ConvertFromOnDeviceFormatHelper::GetNHWCData(Unity.Barracuda.TensorShape,System.Single[],Unity.Barracuda.ComputeInfo/ChannelsOrder,System.Boolean)
extern void ConvertFromOnDeviceFormatHelper_GetNHWCData_mBD47D978C28D8C0EEEFC4B3AE85D6B08115FE4DF (void);
// 0x00000896 System.Void Unity.Barracuda.ComputeTensorData/ConvertFromOnDeviceFormatHelper::ApplyConversion()
extern void ConvertFromOnDeviceFormatHelper_ApplyConversion_m5347A7C8B19F907B89B5F637F83B2DEE5A483256 (void);
// 0x00000897 System.Void Unity.Barracuda.ComputeTensorData/ConvertFromOnDeviceFormatHelper::UnrolledInnerLoop(System.Int64)
extern void ConvertFromOnDeviceFormatHelper_UnrolledInnerLoop_mB1A01940660684CF77F8E4635DB82893AD3E180F (void);
// 0x00000898 System.Int32 Unity.Barracuda.ComputeFunc/TensorDecl::get_ShapeId()
extern void TensorDecl_get_ShapeId_mD2EE349CD8B7A2AABCE7AF5B09C28588FDF25873 (void);
// 0x00000899 System.Int32 Unity.Barracuda.ComputeFunc/TensorDecl::get_ShapeId8D()
extern void TensorDecl_get_ShapeId8D_m84D9B25B0595F08CCD9749C2E5685BD094020347 (void);
// 0x0000089A System.Int32 Unity.Barracuda.ComputeFunc/TensorDecl::get_InfoId()
extern void TensorDecl_get_InfoId_m08ADFE209B22EEA180E561810F54BA9673330361 (void);
// 0x0000089B System.Void Unity.Barracuda.ComputeFunc/TensorDecl::.ctor(System.Int32,System.Int32,System.Int32)
extern void TensorDecl__ctor_mC20A1AA25171E3FCC7A86D19543109C3E871E99F (void);
// 0x0000089C System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass77_0::.ctor()
extern void U3CU3Ec__DisplayClass77_0__ctor_m836169A20E4CF1C4ACEFCCD3D9F0F3E376BD5517 (void);
// 0x0000089D System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass77_0::<MaxPool2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass77_0_U3CMaxPool2DInnerLoopU3Eb__0_m9DD3D5A767713A43A74BFBF2E240668DF43D7C71 (void);
// 0x0000089E System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass79_0::.ctor()
extern void U3CU3Ec__DisplayClass79_0__ctor_mEB6A233AB0AFB363400F363E8656EBE6C795D127 (void);
// 0x0000089F System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass79_0::<AvgPool2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass79_0_U3CAvgPool2DInnerLoopU3Eb__0_m13CADDFF268194C61A83476B431D2E25E246B307 (void);
// 0x000008A0 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass84_0::.ctor()
extern void U3CU3Ec__DisplayClass84_0__ctor_m4C44C59AB9531F69320485B98230B5A272C101A7 (void);
// 0x000008A1 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass84_0::<Im2ColInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass84_0_U3CIm2ColInnerLoopU3Eb__0_m4FA6332D72A3430A0267F84750BD9A797072B859 (void);
// 0x000008A2 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass88_0::.ctor()
extern void U3CU3Ec__DisplayClass88_0__ctor_m8532322B9BF920742FA770033B9E9ACF7CE613FA (void);
// 0x000008A3 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass88_0::<DepthwiseConv2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass88_0_U3CDepthwiseConv2DInnerLoopU3Eb__0_mD9F8C94B0B551F71E2956839A6695B3B02DD0064 (void);
// 0x000008A4 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::.ctor()
extern void U3CU3Ec__DisplayClass89_0__ctor_m930FA609DF5F28509EF02D4D2B2D13B82B672AA2 (void);
// 0x000008A5 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_1::.ctor()
extern void U3CU3Ec__DisplayClass89_1__ctor_m3D2A36B878C04B5634916959D909E228F8973838 (void);
// 0x000008A6 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_2::.ctor()
extern void U3CU3Ec__DisplayClass89_2__ctor_mD205AABC6481EB500F7BD386DF87C2A9A3EDAC4B (void);
// 0x000008A7 System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_2::<ApplyPadding>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass89_2_U3CApplyPaddingU3Eb__0_m1149049BD19ED46184AE6D3873B16C4A1F689FB4 (void);
// 0x000008A8 System.Void Unity.Barracuda.ComputeShaderSingleton/<WarmupReferenceKernels>d__12::.ctor(System.Int32)
extern void U3CWarmupReferenceKernelsU3Ed__12__ctor_m1A9897F4CE5B1974AECFA3F0488C811D8259CBAE (void);
// 0x000008A9 System.Void Unity.Barracuda.ComputeShaderSingleton/<WarmupReferenceKernels>d__12::System.IDisposable.Dispose()
extern void U3CWarmupReferenceKernelsU3Ed__12_System_IDisposable_Dispose_m9C75A73D5746A8331AB8DA3F8D17B57AEFB1ED1C (void);
// 0x000008AA System.Boolean Unity.Barracuda.ComputeShaderSingleton/<WarmupReferenceKernels>d__12::MoveNext()
extern void U3CWarmupReferenceKernelsU3Ed__12_MoveNext_m74732167080A3F3CF653C306010621AE5E36C582 (void);
// 0x000008AB System.Object Unity.Barracuda.ComputeShaderSingleton/<WarmupReferenceKernels>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CWarmupReferenceKernelsU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4EE23533D2A14F8EB03094FAF197093ED19A902B (void);
// 0x000008AC System.Void Unity.Barracuda.ComputeShaderSingleton/<WarmupReferenceKernels>d__12::System.Collections.IEnumerator.Reset()
extern void U3CWarmupReferenceKernelsU3Ed__12_System_Collections_IEnumerator_Reset_m1C3DF8B172D5D7D2AF78DD8CBDBA812567E6A76A (void);
// 0x000008AD System.Object Unity.Barracuda.ComputeShaderSingleton/<WarmupReferenceKernels>d__12::System.Collections.IEnumerator.get_Current()
extern void U3CWarmupReferenceKernelsU3Ed__12_System_Collections_IEnumerator_get_Current_mAD14FBAE10E74753D8821600A5DA9B00C0C699FE (void);
// 0x000008AE System.Void Unity.Barracuda.ComputeShaderSingleton/<WarmupOptimizedKernels>d__13::.ctor(System.Int32)
extern void U3CWarmupOptimizedKernelsU3Ed__13__ctor_m68AE0FBE1E3CB1FA95A86ED58F563750399AE905 (void);
// 0x000008AF System.Void Unity.Barracuda.ComputeShaderSingleton/<WarmupOptimizedKernels>d__13::System.IDisposable.Dispose()
extern void U3CWarmupOptimizedKernelsU3Ed__13_System_IDisposable_Dispose_m78B85B23B7417FDE1572F02706FF87763D22FA6B (void);
// 0x000008B0 System.Boolean Unity.Barracuda.ComputeShaderSingleton/<WarmupOptimizedKernels>d__13::MoveNext()
extern void U3CWarmupOptimizedKernelsU3Ed__13_MoveNext_m168409ABF40AE15B38081F2B6715EFE619FB7E94 (void);
// 0x000008B1 System.Void Unity.Barracuda.ComputeShaderSingleton/<WarmupOptimizedKernels>d__13::<>m__Finally1()
extern void U3CWarmupOptimizedKernelsU3Ed__13_U3CU3Em__Finally1_m761ADEA6239F5B479F124B39597DD5B35A45D017 (void);
// 0x000008B2 System.Object Unity.Barracuda.ComputeShaderSingleton/<WarmupOptimizedKernels>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CWarmupOptimizedKernelsU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m16FA34EEA088D3ADE9689585ED37C1ACDDB6AB58 (void);
// 0x000008B3 System.Void Unity.Barracuda.ComputeShaderSingleton/<WarmupOptimizedKernels>d__13::System.Collections.IEnumerator.Reset()
extern void U3CWarmupOptimizedKernelsU3Ed__13_System_Collections_IEnumerator_Reset_mC5E170AA654441C57876963D3047C0A77106C1A8 (void);
// 0x000008B4 System.Object Unity.Barracuda.ComputeShaderSingleton/<WarmupOptimizedKernels>d__13::System.Collections.IEnumerator.get_Current()
extern void U3CWarmupOptimizedKernelsU3Ed__13_System_Collections_IEnumerator_get_Current_mEEEE606C5066D16BDFA1F6C87831C72265BEB5A8 (void);
// 0x000008B5 System.Void Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::.ctor(System.Int32)
extern void U3CStartManualScheduleU3Ed__33__ctor_m5F848ADF53CE9D4118DBA1BF3475AA81C6DCE3E5 (void);
// 0x000008B6 System.Void Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::System.IDisposable.Dispose()
extern void U3CStartManualScheduleU3Ed__33_System_IDisposable_Dispose_m357FE9444EA0271E7C803E505C51227F1B368588 (void);
// 0x000008B7 System.Boolean Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::MoveNext()
extern void U3CStartManualScheduleU3Ed__33_MoveNext_m9373C77D9286CC35AAB930C73A3D60AA6DD119C4 (void);
// 0x000008B8 System.Void Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::<>m__Finally1()
extern void U3CStartManualScheduleU3Ed__33_U3CU3Em__Finally1_mBB95E0FBCB814BD5DC60A3CD659CEBC63FF110E9 (void);
// 0x000008B9 System.Object Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CStartManualScheduleU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFE8965F3220164D8C24A0DE21EC2208192DCCAA1 (void);
// 0x000008BA System.Void Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::System.Collections.IEnumerator.Reset()
extern void U3CStartManualScheduleU3Ed__33_System_Collections_IEnumerator_Reset_mCE419455F15D9B00AB6931FF70795C920CED8E2C (void);
// 0x000008BB System.Object Unity.Barracuda.GenericWorker/<StartManualSchedule>d__33::System.Collections.IEnumerator.get_Current()
extern void U3CStartManualScheduleU3Ed__33_System_Collections_IEnumerator_get_Current_mF7D99AAE547A90F8409C83F5540F8C664D6EC08F (void);
// 0x000008BC System.Void Unity.Barracuda.LinearLayerFusing/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mB4C5830EF980ECC0964BBD1533ED2E6A6FB355EE (void);
// 0x000008BD System.Boolean Unity.Barracuda.LinearLayerFusing/<>c__DisplayClass0_0::<IsLayerLinear>b__0(System.String)
extern void U3CU3Ec__DisplayClass0_0_U3CIsLayerLinearU3Eb__0_m65838DF36788BBD3913B2A88698F1EC0B7CD17B9 (void);
// 0x000008BE System.Void Unity.Barracuda.LinearLayerFusing/<>c::.cctor()
extern void U3CU3Ec__cctor_m641E1B753E558DE9EA24DA9A8B1C91ECA058F290 (void);
// 0x000008BF System.Void Unity.Barracuda.LinearLayerFusing/<>c::.ctor()
extern void U3CU3Ec__ctor_m332F34890D7490F9CAF1A8B8A993D01DF7B022BB (void);
// 0x000008C0 System.Boolean Unity.Barracuda.LinearLayerFusing/<>c::<AreLayersFusable>b__2_0(System.Int32)
extern void U3CU3Ec_U3CAreLayersFusableU3Eb__2_0_m1FF69EEB50C6897A812F9313C606211F086CC33B (void);
// 0x000008C1 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing/<>c::<.ctor>b__6_5(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__6_5_m1DAB3C4B87EA990F6F09BAC94FEED4D83558769A (void);
// 0x000008C2 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing/<>c::<.ctor>b__6_7(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__6_7_m780DFB317551AE7D4DEDF9C960D4104C3CEC9CD2 (void);
// 0x000008C3 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing/<>c::<.ctor>b__6_10(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__6_10_m14A0BB9EC726F5F4E20CABF73F38A8E1E7B5DD84 (void);
// 0x000008C4 Unity.Barracuda.Layer Unity.Barracuda.LinearLayerFusing/<>c::<.ctor>b__6_12(Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__6_12_m398D7476F0A7DE75F1BE806F6457FDB6C8CE7997 (void);
// 0x000008C5 System.Void Unity.Barracuda.CSharpBLAS/SGEMMJob::Execute()
extern void SGEMMJob_Execute_m4F5DDDCFFAC52FF96DCFD50689372CECCF46736A (void);
// 0x000008C6 System.Void Unity.Barracuda.MatrixUtils/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_mB66221997DE0B8A62A7CC66BC69FCF84E8AF9C3C (void);
// 0x000008C7 System.Void Unity.Barracuda.MatrixUtils/<>c__DisplayClass7_0::<MultiplyBlockUnroll8xhParallelWithPadding>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass7_0_U3CMultiplyBlockUnroll8xhParallelWithPaddingU3Eb__0_mE26653C59DB24E2F4435B1DE5A2D8D282CE03DBF (void);
// 0x000008C8 System.Void Unity.Barracuda.ModelAnalyzer/<>c::.cctor()
extern void U3CU3Ec__cctor_m3BCD49930280FD4A5B61538BD083E625C1174643 (void);
// 0x000008C9 System.Void Unity.Barracuda.ModelAnalyzer/<>c::.ctor()
extern void U3CU3Ec__ctor_mF680FC757A20CB9F3BCEB88F669269F0B3F933DA (void);
// 0x000008CA System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__12_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__12_0_m639E3757A4A64D646EDEE259E6D3B74A20AB7201 (void);
// 0x000008CB System.Boolean Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__12_1(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__12_1_m90F83F49FBAF0C8184A0FC4A6CDD65683E66C8E2 (void);
// 0x000008CC System.Boolean Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__12_2(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__12_2_m8F4317F0EC7E2DD7FECAA6B1433CCC7255964A09 (void);
// 0x000008CD System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__12_3(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__12_3_m1CEC3CE45A97FC3C476BDFE90F30FF2F975C38BA (void);
// 0x000008CE System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindBrokenLinks>b__13_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__13_0_m62E8CAEC955B99E6DB75A1FE5216EF2A5F3F9968 (void);
// 0x000008CF System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindBrokenLinks>b__13_1(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__13_1_m3BB591639DC24AB7915294C49AA262A332D64CED (void);
// 0x000008D0 System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindBrokenLinks>b__13_2(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__13_2_mB2C76322F8BAD4DBB2D8F448F8D02F75F45CE6A5 (void);
// 0x000008D1 System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindUnconnectedInputs>b__16_0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CFindUnconnectedInputsU3Eb__16_0_m7CBE14FD8296A167EF42405AC95AF1E7FF79DAEF (void);
// 0x000008D2 System.Boolean Unity.Barracuda.ModelAnalyzer/<>c::<FindUnconnectedInputs>b__16_1(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CFindUnconnectedInputsU3Eb__16_1_mE5109822A1867679A4C5542EA0A5062AFCC36BD9 (void);
// 0x000008D3 System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_mA80CDEB1A2C604158DAAAC387579E96EFBD84630 (void);
// 0x000008D4 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass1_0::<RemoveUnused>b__2(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass1_0_U3CRemoveUnusedU3Eb__2_mD9904C23F4F85D6E062D013197C07E238D1DF675 (void);
// 0x000008D5 System.Void Unity.Barracuda.ModelOptimizer/<>c::.cctor()
extern void U3CU3Ec__cctor_m9AE9F1E7AEC90733182606A554D395E36E801C82 (void);
// 0x000008D6 System.Void Unity.Barracuda.ModelOptimizer/<>c::.ctor()
extern void U3CU3Ec__ctor_m10450DFBC1386FEE1CCD246EE09F9C58F500DF97 (void);
// 0x000008D7 System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveUnused>b__1_0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRemoveUnusedU3Eb__1_0_mA77493A268E94E3C306F8D78C0804700D2EA931E (void);
// 0x000008D8 System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveUnused>b__1_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRemoveUnusedU3Eb__1_1_mFEC946754EBA1511D8D9487A6EE084D5F90A53C7 (void);
// 0x000008D9 System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<FuseActivations>b__5_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFuseActivationsU3Eb__5_0_mA4BF5904D3967F1312E986E154137378A08AF994 (void);
// 0x000008DA System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<IsLayerNoop>b__7_0(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__7_0_m5FD9CEB6B6A10169E337887590179446755E1972 (void);
// 0x000008DB System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<IsLayerNoop>b__7_1(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__7_1_m31FF8145E7AA3B09E37F1E534A69297EFCD84E68 (void);
// 0x000008DC System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<IsLayerNoop>b__7_2(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__7_2_mE7B880FBFE71883337E2372538DD77FD315CDC21 (void);
// 0x000008DD System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveNoop>b__8_0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRemoveNoopU3Eb__8_0_mD47EF5F798B29D4591C0F6CAF6690D85222C7EC4 (void);
// 0x000008DE System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveNoop>b__8_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRemoveNoopU3Eb__8_1_m99E21AA3279EC0CDC2AF6025C8BF32A65D684D95 (void);
// 0x000008DF System.String Unity.Barracuda.ModelOptimizer/<>c::<FuseLinear>b__18_0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CFuseLinearU3Eb__18_0_m3452168EB3D350EEFB2CF38B5B1492D8A0C8DB30 (void);
// 0x000008E0 System.String Unity.Barracuda.ModelOptimizer/<>c::<FuseLinear>b__18_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CFuseLinearU3Eb__18_1_m071F66879BC898BFF9DBD4781379DCF5049A1FF5 (void);
// 0x000008E1 System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m83BBF4560C08E214244FEAD1BC8624B8DBCE3C1E (void);
// 0x000008E2 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass4_0::<FuseActivation>b__0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec__DisplayClass4_0_U3CFuseActivationU3Eb__0_mAE85FC73F26A03933682F5CAA53489FC0C4D547D (void);
// 0x000008E3 System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m3C5549B17D61CB6E47E12C63159F4784322ECEE6 (void);
// 0x000008E4 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_0::<FuseActivations>b__1(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass5_0_U3CFuseActivationsU3Eb__1_mDA647092FCB5A36240C1CDA855D10EB6995152CD (void);
// 0x000008E5 System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1::.ctor()
extern void U3CU3Ec__DisplayClass5_1__ctor_mC67F3C85A03FEAC4E53A8EFEA2D79E0B03EB3003 (void);
// 0x000008E6 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1::<FuseActivations>b__2(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec__DisplayClass5_1_U3CFuseActivationsU3Eb__2_mD52809DBCADF884D7C6B322024D2719832233F71 (void);
// 0x000008E7 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1::<FuseActivations>b__3(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass5_1_U3CFuseActivationsU3Eb__3_m9FA6DF699A608292DE2E1DCADE0A7361209BBC80 (void);
// 0x000008E8 System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::.ctor()
extern void U3CU3Ec__DisplayClass16_0__ctor_m7285A45DFCC18F91450C48F4EABBF6F353FF76E4 (void);
// 0x000008E9 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::<PackConstants>b__0(System.String)
extern void U3CU3Ec__DisplayClass16_0_U3CPackConstantsU3Eb__0_m04415E3BEF8FE1F99C34F6898D4DA8B92B315E53 (void);
// 0x000008EA System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::<PackConstants>b__1(System.String)
extern void U3CU3Ec__DisplayClass16_0_U3CPackConstantsU3Eb__1_m93FBB2152835058B9F6DC02DE454EE37D00CEE40 (void);
// 0x000008EB System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_1::.ctor()
extern void U3CU3Ec__DisplayClass16_1__ctor_m858D5E32DF1EF126AFD860908D11472452970C81 (void);
// 0x000008EC System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_1::<PackConstants>b__2(System.String)
extern void U3CU3Ec__DisplayClass16_1_U3CPackConstantsU3Eb__2_m641E13C44272F60F85AE3FE74C522715224AE1DA (void);
// 0x000008ED System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::.ctor()
extern void U3CU3Ec__DisplayClass18_0__ctor_m48A04A48A4B15507D40607F1186CAB9825EBDF92 (void);
// 0x000008EE System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__4(System.String)
extern void U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__4_m75ECF6176CCDE82113B43E55D3BAC7FB17077EB0 (void);
// 0x000008EF System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__5(System.String)
extern void U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__5_m67C9F7F94F732E759885389337B3E9E7613E5A95 (void);
// 0x000008F0 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__2(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__2_mE3D54A3B94BDA1AB5508C584E128C3BE919DD394 (void);
// 0x000008F1 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__3(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__3_m143C8106B579D7A1E0778397DD8E2A7F28B17645 (void);
// 0x000008F2 System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_1::.ctor()
extern void U3CU3Ec__DisplayClass18_1__ctor_m0FF6823EDFD9E10FC334A5964CF248FFCBDE3E7C (void);
// 0x000008F3 System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_1::<FuseLinear>b__6(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass18_1_U3CFuseLinearU3Eb__6_m689337DA81FC4BCEE78CFA5937E08D542F12D72D (void);
// 0x000008F4 System.Void Unity.Barracuda.StaticLayerOppComplexity/<>c::.cctor()
extern void U3CU3Ec__cctor_mAC1E43A9CB37E4027006269ABCFDCA3D613029E3 (void);
// 0x000008F5 System.Void Unity.Barracuda.StaticLayerOppComplexity/<>c::.ctor()
extern void U3CU3Ec__ctor_m9EAF8554A23AA6B08B030E2E48A3D2AA4C107508 (void);
// 0x000008F6 System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_0_mD8430C32134B0888390BDA5234897EBDAD091799 (void);
// 0x000008F7 System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_1(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_1_m123F1422082531AB32EEF8302C0D14BEC6062332 (void);
// 0x000008F8 System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_2(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_2_m1125975B01A78E85B6740C907B8A64D04B18DDD0 (void);
// 0x000008F9 System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_3(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_3_m7B424A4CEF1F1996E57760CC45B5F352D74176F4 (void);
// 0x000008FA System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_4(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_4_mB2DE951DEC23B137A3E4FE0CD5BB446E7CC9DA8E (void);
// 0x000008FB System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_5(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_5_m13909B8C9E591A890F414744268BEC8EFDAA0E42 (void);
// 0x000008FC System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_6(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3C_ctorU3Eb__2_6_m6BF82EDFD8A0742BC4DFC6FB11E5631198A9C2EC (void);
// 0x000008FD System.Void Unity.Barracuda.StatsOps/Transcendental::.ctor()
extern void Transcendental__ctor_m026CDC2775977E09F44854F036339608C0171D83 (void);
// 0x000008FE System.Void Unity.Barracuda.TensorCachingByShapeAllocator/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m0D475C23A7E2A177335484AC4BBB3C4EF0D706A1 (void);
// 0x000008FF System.Void Unity.Barracuda.TensorCachingByShapeAllocator/<>c__DisplayClass13_0::<MoveToDevice>b__0(Unity.Barracuda.ITensorData)
extern void U3CU3Ec__DisplayClass13_0_U3CMoveToDeviceU3Eb__0_m627EAAA69DA5AF2356705BA8C3730E70ADC0724B (void);
// 0x00000900 System.Void Unity.Barracuda.VerboseOps/<>c::.cctor()
extern void U3CU3Ec__cctor_mEAD93CBF823782E6C7F7453401AEB85F28054468 (void);
// 0x00000901 System.Void Unity.Barracuda.VerboseOps/<>c::.ctor()
extern void U3CU3Ec__ctor_mF7330FB7F32DF66A2EF7AC2EA5B0B883EB2B7B0C (void);
// 0x00000902 System.String Unity.Barracuda.VerboseOps/<>c::<Unity.Barracuda.IOps.NonMaxSuppression>b__102_0(Unity.Barracuda.Tensor)
extern void U3CU3Ec_U3CUnity_Barracuda_IOps_NonMaxSuppressionU3Eb__102_0_m25313DAF73F85A8002A473168228D2979A16CA30 (void);
// 0x00000903 System.Void Unity.Barracuda.WorkerFactory/WorkerConfiguration::.ctor(Unity.Barracuda.WorkerFactory/Type,System.Boolean,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single)
extern void WorkerConfiguration__ctor_m39B522369814F774A2DB09BD4431150CDFCB97D9 (void);
// 0x00000904 System.Void Unity.Barracuda.Layer/<>c::.cctor()
extern void U3CU3Ec__cctor_m842AF0A327D4DE3A89055CBFDD5AABED02CD59A5 (void);
// 0x00000905 System.Void Unity.Barracuda.Layer/<>c::.ctor()
extern void U3CU3Ec__ctor_mA74D790B335E91FDC37627F8DBAF27E14533D5B4 (void);
// 0x00000906 System.String Unity.Barracuda.Layer/<>c::<ToString>b__25_0(Unity.Barracuda.Layer/DataSet)
extern void U3CU3Ec_U3CToStringU3Eb__25_0_mCFF1DE63AF8899C2B018FA038A242D5021F99753 (void);
// 0x00000907 Unity.Barracuda.Model/Input Unity.Barracuda.Model/Input::WithName(System.String)
extern void Input_WithName_mABCBC1785058A9B268E159D0F967C631F8E96B67 (void);
// 0x00000908 System.String Unity.Barracuda.Model/ImporterWarning::get_Message()
extern void ImporterWarning_get_Message_m8D9849FC15F689DD7A2AB1687040B04E7EDB2830 (void);
// 0x00000909 System.String Unity.Barracuda.Model/ImporterWarning::get_LayerName()
extern void ImporterWarning_get_LayerName_mEB3E381A0C6FF3F3B85E423C36E34DB21B1D94CD (void);
// 0x0000090A System.Void Unity.Barracuda.Model/ImporterWarning::.ctor(System.String,System.String)
extern void ImporterWarning__ctor_mA45E151BD5021023C15198216C8951DA8C398806 (void);
// 0x0000090B System.Void Unity.Barracuda.Model/<>c::.cctor()
extern void U3CU3Ec__cctor_mD8F38748AE3E4342B15B78222AAC74B77A4BBC02 (void);
// 0x0000090C System.Void Unity.Barracuda.Model/<>c::.ctor()
extern void U3CU3Ec__ctor_mEF27F298FA84689214A581A7FB21E3A4160C2B82 (void);
// 0x0000090D System.String Unity.Barracuda.Model/<>c::<ToString>b__19_0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CToStringU3Eb__19_0_m57D0CA5638790FAB6F2FF515CCB87C82769BC179 (void);
// 0x0000090E System.String Unity.Barracuda.Model/<>c::<ToString>b__19_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CToStringU3Eb__19_1_m8EEB9735BED3AA1BF6DEE0B56D863DDA606C7F02 (void);
// 0x0000090F System.String Unity.Barracuda.Model/<>c::<ToString>b__19_2(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CToStringU3Eb__19_2_m25BA7D500914167F8C3AE38C72682FA3ADAAF530 (void);
// 0x00000910 System.Void Unity.Barracuda.ModelMetadataExtensions/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m84B463E2729EBF6EB37D39C11CAF8B4A133AABA5 (void);
// 0x00000911 System.Boolean Unity.Barracuda.ModelMetadataExtensions/<>c__DisplayClass2_0::<GetDownStreamLayersCount>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass2_0_U3CGetDownStreamLayersCountU3Eb__0_m0FDFA7808E979773F6C0D176B5D85973D59A46FD (void);
// 0x00000912 System.Void Unity.Barracuda.TensorExtensions/<>c::.cctor()
extern void U3CU3Ec__cctor_m30675866A3695CFAB17644EC8A1046812F314353 (void);
// 0x00000913 System.Void Unity.Barracuda.TensorExtensions/<>c::.ctor()
extern void U3CU3Ec__ctor_m1CB1BEFCD26A3C4B3D17391B67D3D2D1DD7F2DBE (void);
// 0x00000914 System.Int32 Unity.Barracuda.TensorExtensions/<>c::<AsInts>b__4_0(System.Single)
extern void U3CU3Ec_U3CAsIntsU3Eb__4_0_m75B12A6E083CEA1AB15B76B506221168B6C04DBD (void);
// 0x00000915 System.Void Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_mE0A455DF490B02455E6DD3739FD918AF7B33EFEE (void);
// 0x00000916 System.Void Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_1::.ctor()
extern void U3CU3Ec__DisplayClass13_1__ctor_mB31AE60072CC385D86999290830B05A58D8B46EB (void);
// 0x00000917 System.Int32 Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_1::<ArgSort>b__0(System.Int32,System.Int32)
extern void U3CU3Ec__DisplayClass13_1_U3CArgSortU3Eb__0_mA9415087B19F40AE4403B4B7E44630B861CAE357 (void);
// 0x00000918 System.Void Unity.Barracuda.Compiler.Passes.ExpandOpsPass/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_mD9EC5C4B7879D426C3B5D7E9D1661F3C37007A01 (void);
// 0x00000919 System.Boolean Unity.Barracuda.Compiler.Passes.ExpandOpsPass/<>c__DisplayClass1_0::<Run>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass1_0_U3CRunU3Eb__0_m9B5995DDB43E1BFC7D05F03758AC806F5733BA0E (void);
// 0x0000091A System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_mE36295791976BDDC10C2C63A673F441332FD3E77 (void);
// 0x0000091B System.Boolean Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c__DisplayClass2_0::<FuseShapesIntoConstants>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass2_0_U3CFuseShapesIntoConstantsU3Eb__0_m450B2B3523BABF0E0DB9BFE2173135C7701F4B17 (void);
// 0x0000091C System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::.cctor()
extern void U3CU3Ec__cctor_m8A77E7CDD2858B85AFED2063681AE24C2D36EE68 (void);
// 0x0000091D System.Void Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::.ctor()
extern void U3CU3Ec__ctor_m9A2DF668F73BC941087349AF8A82A95F52097FD2 (void);
// 0x0000091E System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_1(System.Single)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_1_mD9A004B6CEFB8059FFD8D9F16FE53C7656871EEC (void);
// 0x0000091F System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_0(System.Single)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_0_mDA1E2AA58D6D7A6F5199633A4D7C049A0FDB6C77 (void);
// 0x00000920 System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_2(System.Single)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_2_mF00BFDA3F0D56220B2AC23AE1CAF28B3DB54BD10 (void);
// 0x00000921 System.Int32 Unity.Barracuda.Compiler.Passes.IRShapeInferenceAndConstantFusing/<>c::<FuseInputsIntoLayer>b__5_3(System.Single)
extern void U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_3_mAC5C7153D9737C0B472BF90456A6440D123589AF (void);
// 0x00000922 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m316EE36F7342C37240B2DEF7196B272D1FB92804 (void);
// 0x00000923 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass6_0::<AxisToBarracuda>b__0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec__DisplayClass6_0_U3CAxisToBarracudaU3Eb__0_m8C30AEF5D868DCA50AF05E9F517174482E3FB706 (void);
// 0x00000924 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m12A6681051A7513A4A513CA2777D6BB0FDA0503F (void);
// 0x00000925 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass7_0::<StridedSlice>b__0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec__DisplayClass7_0_U3CStridedSliceU3Eb__0_m4D9235EDA66C747EAFD0AC932044600FC3334FCF (void);
// 0x00000926 System.Void Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m7796BB31B741465F7645CFE2BBFD0FC7E3BAA5DF (void);
// 0x00000927 System.Boolean Unity.Barracuda.Compiler.Passes.IntermediateToRunnableNCHWPass/<>c__DisplayClass8_0::<Transpose0UsingRank>b__0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec__DisplayClass8_0_U3CTranspose0UsingRankU3Eb__0_mC4257757A3C767C05A601687B1E6A6C95972108E (void);
// 0x00000928 System.Void Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m2422B852629732094F52B6121E54F6C854D53107 (void);
// 0x00000929 System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper/<>c__DisplayClass1_0::<IsImporterLikelyNHWCLayout>b__0(System.String)
extern void U3CU3Ec__DisplayClass1_0_U3CIsImporterLikelyNHWCLayoutU3Eb__0_mFAD5653EA6DD89AD0B35E3CF1F419A6291DD933F (void);
// 0x0000092A System.Void Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper/<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_m2F1C3888D6A8D05B31668DB9C16733255776825E (void);
// 0x0000092B System.Boolean Unity.Barracuda.Compiler.Passes.LayoutTransposeRemovalHelper/<>c__DisplayClass15_0::<IsLayerInput>b__0(Unity.Barracuda.Model/Input)
extern void U3CU3Ec__DisplayClass15_0_U3CIsLayerInputU3Eb__0_m8A55B0138DE7B790BD3E651C004406F2D795DC39 (void);
// 0x0000092C System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::.cctor()
extern void U3CU3Ec__cctor_m53B34640132F963C0B761618E3283DC2033CE9FA (void);
// 0x0000092D System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::.ctor()
extern void U3CU3Ec__ctor_m0036569863520CCD054BDF7F55FDF50568012C33 (void);
// 0x0000092E System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNCHWToNHWC>b__2_2(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_2_mA073E7F337F3F172AE5667B99A770910C0AC70D1 (void);
// 0x0000092F System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNCHWToNHWC>b__2_7(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_7_m2F6500D1DFA80885AA64FE171683371C24BBBB68 (void);
// 0x00000930 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNHWCToNHWC>b__17_0(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__17_0_m5E7FAD026077B05F606B1F8F860A8F2566E6819F (void);
// 0x00000931 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNHWCToNHWC>b__17_2(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
extern void U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__17_2_m86219180BB7B342F179EBEEDA3B81D00E8228561 (void);
// 0x00000932 System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c__DisplayClass29_0::.ctor()
extern void U3CU3Ec__DisplayClass29_0__ctor_m7894B19453DABB6ABD6ECD848B1F5286C9164E1A (void);
// 0x00000933 System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c__DisplayClass29_0::<Rewrite>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass29_0_U3CRewriteU3Eb__0_m4988C108BAD9CB0EFD0B6B22CD73DF7EA77289AD (void);
// 0x00000934 System.Void Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::.cctor()
extern void U3CU3Ec__cctor_m0D61ADD94D50849BFFB113BB44A465935624578D (void);
// 0x00000935 System.Void Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::.ctor()
extern void U3CU3Ec__ctor_m5E889B5CE41237EBBE26E0596E309AA3896815C9 (void);
// 0x00000936 System.String Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::<Run>b__0_0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRunU3Eb__0_0_m2609524FF129084E6B0E02338CFD5F38570D9AC0 (void);
// 0x00000937 System.String Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::<Run>b__0_1(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CRunU3Eb__0_1_m69CDEEFB3D95A659F503F901D51B8214AD5ACB45 (void);
// 0x00000938 System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherContractionPass/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m9FB2ACA13A4B8BB48CB140114BC963D61CAB3A30 (void);
// 0x00000939 System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherContractionPass/<>c__DisplayClass0_0::<Run>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m89B5CAC8171CF344FAAEA3150FB30DE60FB7E33F (void);
// 0x0000093A System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherContractionPass/<>c__DisplayClass0_1::.ctor()
extern void U3CU3Ec__DisplayClass0_1__ctor_m0EDF60950C459DF9F86470938600F3C0F995888B (void);
// 0x0000093B System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherContractionPass/<>c__DisplayClass0_1::<Run>b__1(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__1_m5AB4C10829DED1CE234DDD56CABFE274FC1A98C8 (void);
// 0x0000093C System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m1BD0A302271DB4DF124A0016FDE08C9FEFB3742D (void);
// 0x0000093D System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass0_0::<Run>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m03A00EB55A95F7EDAAD19F1F7D5C3C9B22DF9FD4 (void);
// 0x0000093E System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m28E69CE3D66A092718FEC56AEFE749AB27BA81C4 (void);
// 0x0000093F System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass1_0::<IsGather1DAndConvertingToChannelLast>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass1_0_U3CIsGather1DAndConvertingToChannelLastU3Eb__0_mE41C3AD8EBED1A6EDC4B353B81A9F46842E15E4E (void);
// 0x00000940 System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_mCA23D2BDEBA7163F66B8C37E0BF53649E4EF9129 (void);
// 0x00000941 System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass2_0::<CanLayerBeRemoved>b__0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec__DisplayClass2_0_U3CCanLayerBeRemovedU3Eb__0_mBB64992B22EA4531901B02D9A1C98FDD05375C1C (void);
// 0x00000942 System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass2_0::<CanLayerBeRemoved>b__1(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass2_0_U3CCanLayerBeRemovedU3Eb__1_m9167C4A76C8D0ABB8622C5725ADA8BB99E9BBAF7 (void);
// 0x00000943 System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::.cctor()
extern void U3CU3Ec__cctor_m38947884479EAE048CD395AAFBFFF12FE2A6C89F (void);
// 0x00000944 System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::.ctor()
extern void U3CU3Ec__ctor_m8AF101D329A05C30700445CC13C1D9D583E511BA (void);
// 0x00000945 System.Boolean Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::<Run>b__0_0(System.Nullable`1<System.Int32>)
extern void U3CU3Ec_U3CRunU3Eb__0_0_mFFB5BE5CFE6590AD6E67C8FE0984CD0D661F98B4 (void);
// 0x00000946 System.Boolean Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::<Run>b__0_1(System.Collections.Generic.KeyValuePair`2<System.String,System.Nullable`1<System.Int32>>)
extern void U3CU3Ec_U3CRunU3Eb__0_1_mE32AD51C45331C741DFAD83CFCE89F370C4A173C (void);
// 0x00000947 System.Boolean Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::<Run>b__0_2(System.Collections.Generic.KeyValuePair`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>)
extern void U3CU3Ec_U3CRunU3Eb__0_2_mDCD044E7F672FE191D8BC65F985E2E15226DA0D4 (void);
// 0x00000948 System.Void Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::.cctor()
extern void U3CU3Ec__cctor_m902E4406A4332FCB745ED05F2EB455AD6F1CFB87 (void);
// 0x00000949 System.Void Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::.ctor()
extern void U3CU3Ec__ctor_mD672A533176A8DDEA7AEBE25794FB7596D2BE3A2 (void);
// 0x0000094A System.String Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::<FindBrokenLinks>b__0_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__0_0_m787D2902E34A74F6B35C37F6E526D91678E0BC31 (void);
// 0x0000094B System.String Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::<FindBrokenLinks>b__0_1(Unity.Barracuda.Model/Input)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__0_1_m18F2D2266419D8D3241FC4FE3B2925FEF6C62663 (void);
// 0x0000094C System.String Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::<FindBrokenLinks>b__0_2(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__0_2_m118883ED6454582E0E9D03786668A94460EEE004 (void);
// 0x0000094D System.Void Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::.cctor()
extern void U3CU3Ec__cctor_m600BAC2503B840A696713F0F865AE233E12A6C81 (void);
// 0x0000094E System.Void Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::.ctor()
extern void U3CU3Ec__ctor_mA85EC7833722040DF46B8AFA941494D9F1A12F83 (void);
// 0x0000094F System.String Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::<Run>b__0_0(System.String)
extern void U3CU3Ec_U3CRunU3Eb__0_0_m7E31362C3208CD098B5AB56B76ABFCC40EDF68C6 (void);
// 0x00000950 System.Boolean Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::<Run>b__0_1(System.Linq.IGrouping`2<System.String,System.String>)
extern void U3CU3Ec_U3CRunU3Eb__0_1_mBEAE3FA51ACCAB311B3C82B09017BF92F0F8A01C (void);
// 0x00000951 System.String Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::<Run>b__0_2(System.Linq.IGrouping`2<System.String,System.String>)
extern void U3CU3Ec_U3CRunU3Eb__0_2_mCE5E85D1FF1B06AE7214D7C585975D20DDE7EC3B (void);
// 0x00000952 System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::.cctor()
extern void U3CU3Ec__cctor_mED33E7EBA62DD947458A08F98E60088A99E5B0D2 (void);
// 0x00000953 System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::.ctor()
extern void U3CU3Ec__ctor_m105B1795856909BA7084049BCDF6AB657BA3BB90 (void);
// 0x00000954 System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<IsLayerNoop>b__2_0(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__2_0_mD987A56D2584357D12414FE89AE735D896D1DE0A (void);
// 0x00000955 System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<IsLayerNoop>b__2_1(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__2_1_m5D446A1300D231142AE2B8ABEFCD44537EE77E3D (void);
// 0x00000956 System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<IsLayerNoop>b__2_2(System.Int32)
extern void U3CU3Ec_U3CIsLayerNoopU3Eb__2_2_m782A696A1EEB7B6446D6D5D0E9C52FF1D45C4B0B (void);
// 0x00000957 System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveUnusedLayersPass/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m77945FBACC9D618B164758876D8C13C7438A1E23 (void);
// 0x00000958 System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveUnusedLayersPass/<>c__DisplayClass0_0::<Run>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_mF9537B988FC19082B90130FA7340508C0F8FA616 (void);
// 0x00000959 System.Void Unity.Barracuda.Compiler.Passes.Optimization.ConcatenateTransposesPass/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m67C33FEF5A123657AB4A645DC3F7F3DD29992CF9 (void);
// 0x0000095A System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.ConcatenateTransposesPass/<>c__DisplayClass1_0::<ConcatenateTransposes>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass1_0_U3CConcatenateTransposesU3Eb__0_mA91C6CD0AF38DDAAC7E918F6EDD0004F7EE3F671 (void);
// 0x0000095B System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m207A5A799FF1B88B3835446AABB89EEDDBB6A460 (void);
// 0x0000095C System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c__DisplayClass0_0::<Run>b__1(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__1_m5EB61AD442B1C2602CA3C7FD8B3ACEA05CABED7B (void);
// 0x0000095D System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c__DisplayClass0_1::.ctor()
extern void U3CU3Ec__DisplayClass0_1__ctor_m5FF67DD8B781466BB68C57CF9A260C7BB84C6EBC (void);
// 0x0000095E System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c__DisplayClass0_1::<Run>b__2(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__2_m5540C0277896C4F2B93B93DCC1CDE04836FE20FA (void);
// 0x0000095F System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c__DisplayClass0_1::<Run>b__3(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__3_m87C58B303854BC291F93B4E6532C00787896D2C7 (void);
// 0x00000960 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c::.cctor()
extern void U3CU3Ec__cctor_m7CD5604F234E548AD2806B79F57BCE42A1203DA3 (void);
// 0x00000961 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c::.ctor()
extern void U3CU3Ec__ctor_m2849076D7F99E0940F5D6E1B53E391D69C1C63E5 (void);
// 0x00000962 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c::<Run>b__0_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CRunU3Eb__0_0_m167CF748DF0D2346B4E69B9ECC058164C7E38755 (void);
// 0x00000963 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m60969EDF23FD2E934A0EE99242F6346C8988915B (void);
// 0x00000964 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseActivationPass/<>c__DisplayClass3_0::<FuseActivation>b__0(Unity.Barracuda.Model/Memory)
extern void U3CU3Ec__DisplayClass3_0_U3CFuseActivationU3Eb__0_m24D6E33522152E88ED722B71E2127A88E7A6EA7F (void);
// 0x00000965 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseConstantsPass/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m049A0CE8C521321C7DDBD9E8C1C9963113E790EF (void);
// 0x00000966 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseConstantsPass/<>c__DisplayClass1_0::<FuseConstants>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass1_0_U3CFuseConstantsU3Eb__0_mBA3940A664A1D08E496658FD9DCFFC1171BAF6FE (void);
// 0x00000967 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mFBE06E89F96D066EA44DD02B0075EAE1014E4FBC (void);
// 0x00000968 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_0::<Run>b__2(System.String)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__2_m3296B7B7A11F0D3F2E98F470D3B535DDF81FCDA1 (void);
// 0x00000969 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_0::<Run>b__3(System.String)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__3_mC0ED2E390F634A31C2F5DFFE3828115E52D85A5C (void);
// 0x0000096A System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_0::<Run>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_mA5A4CB40C2E8A49CF6641BB78B8BB16AA68333B5 (void);
// 0x0000096B System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_0::<Run>b__1(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__1_m51DACB080E53980B15EECFD8598C2C367FF0BE85 (void);
// 0x0000096C System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_1::.ctor()
extern void U3CU3Ec__DisplayClass0_1__ctor_mD3CA41054A95C546A24AFF34157C442359E69445 (void);
// 0x0000096D System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_1::<Run>b__4(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__4_mA76754C377A1E7BA8D286AABFF876BB54DAE43D3 (void);
// 0x0000096E System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass0_1::<Run>b__5(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__5_mFC35974E5C042798E01DDA2FA2208B7ACC020460 (void);
// 0x0000096F System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_mC43461F29BE6D13A28ABBB8B721B7AE859F6E147 (void);
// 0x00000970 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_0::<PackConstantsForMathOps>b__0(System.String)
extern void U3CU3Ec__DisplayClass8_0_U3CPackConstantsForMathOpsU3Eb__0_m8A2F2F888342337749789787C676177DD45A414F (void);
// 0x00000971 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_0::<PackConstantsForMathOps>b__1(System.String)
extern void U3CU3Ec__DisplayClass8_0_U3CPackConstantsForMathOpsU3Eb__1_mA8C279BA0624DF7CCFF8A0A7C01FAB2AA610A84A (void);
// 0x00000972 System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_1::.ctor()
extern void U3CU3Ec__DisplayClass8_1__ctor_mBD4B1B889DD912C0F5C1DDE292EEA1E99DFF7649 (void);
// 0x00000973 System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_1::<PackConstantsForMathOps>b__2(System.String)
extern void U3CU3Ec__DisplayClass8_1_U3CPackConstantsForMathOpsU3Eb__2_mAB366C2B3A368E0955CEE552D9ADCC2611D1C63A (void);
static Il2CppMethodPointer s_methodPointers[2419] = 
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
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BarracudaBackendsFactory_ResolveAutoType_m853F03BEAACEB532E0E948AE05792559DD8CD051,
	BarracudaBackendsFactory_GetBestTypeForDevice_m4AF7F38F8F6CD8868591C644741A7259CD0EF8D1,
	BarracudaBackendsFactory_ValidateType_m997DD7A8ECA61B1F5B0A81B974EEA6E1E4EF5DC0,
	BarracudaBackendsFactory_CreateOps_m841C41742F539FC1EA7EE1C1482F5287BE57A5B0,
	BarracudaBackendsFactory_CreateWorker_m4D42432A7172C76EB550D2FDB3A3AF4B894A23EB,
	BarracudaBackendsFactory_PatchModel_m23801D5CAE7C230714EB71B1537FB01ECE7D6035,
	BarracudaBackendsFactory_ValidateModel_m484D7A6C8E60571C4B30E4FC2822F461ADFA4366,
	BarracudaBackendsFactory__ctor_m042DF0946A55FE26224323D016D125D9B2659CDF,
	BurstTensorData_get_fence_mF8CE37AA23E903D9F6FDD160E08CE5C621D196D2,
	BurstTensorData_set_fence_mC333FA6BF0AB07A387460A16144B9B2209EAF994,
	BurstTensorData_get_reuse_m29C6C502FB53EBF89F956D915A0575C7DEA841C7,
	BurstTensorData_set_reuse_mCC278EF95B1CAA209A46C406DD4C840192C636FE,
	BurstTensorData__ctor_mFA11E2ABDBCA7FC771A0CE131BE54C46915DBD7E,
	BurstTensorData__ctor_m6A0B72CA918C5F45CD4AFD465827D85F3294B776,
	BurstTensorData__ctor_mCE023BDD6792EE7A32A3C2E6D2D62B4B97F5797C,
	BurstTensorData__ctor_mB6A0A636DA12B5B051835F503B2EF2C6822E826B,
	BurstTensorData__ctor_m0DEF4B4264723B0B331E734D315303E85EC2390E,
	BurstTensorData_Finalize_m605BFAEC3FB71924292DE8396299FD410E6A8932,
	BurstTensorData_Dispose_mCBA83CBEAA990E2FEAFF8D78B74340687E7BBF73,
	BurstTensorData_CompleteAllPendingOperations_m25486BD289A772BFA4A5CABCD10EF552D56B9D9D,
	BurstTensorData_Reserve_mD32A7292F934F24B1F87CDE4FA56BB5F0BB607F9,
	BurstTensorData_Upload_m24F076C7A410D7D6B08DB2E3611FE431AF3848F8,
	BurstTensorData_Download_mEC5D10BA992D15A7D15C544F6626650DD1804B08,
	BurstTensorData_SharedAccess_m4F2BCE7D4B1BAB4EA5B36BE81A144A35783828B9,
	BurstTensorData_ScheduleAsyncDownload_m31F8EBE577718BCE5C041424F469FD9F194690F0,
	BurstTensorData_ToString_m7B426BE0C58D59FC0C82074BB61A357340ACE2BC,
	BurstCPUOps__ctor_m4924B7F9FBA101BB5A8F7944D8FFAC1432062C83,
	BurstCPUOps_Pin_m218B71CB6AF610268768B0CEFF70E30C8471AA0F,
	BurstCPUOps_Prepare_m4C5B3F10F8B1D7BD1DEDCD958A8F569C33467F21,
	BurstCPUOps_Dependencies_m09F6B8366A37F40502F448F7EB020DD5CFD43CD6,
	BurstCPUOps_Dependencies_m445E09FCDF33093575B64849EF100644CE275078,
	BurstCPUOps_Dependencies_m686ADF5875BA7C5F86F34912A1CACE535598A2B8,
	BurstCPUOps_MatMul_m67F0E5A3E8AF917E8807A0F251B233D25CF54A7C,
	BurstCPUOps_MatMul_m5F38154DCC771C91007EE0C3622ABD03D07B41A0,
	BurstCPUOps_MatMul3x2_m3B7B1D8DCB36FBD32A3C65AE68566FF2CC4BA6F5,
	BurstCPUOps_MatMul4x4_m8A77CD3D9A776961E85CB482EA0043F23E5819A5,
	BurstCPUOps_Dense_m8949ED8E2A0F83F3AE1115515441D1CDCC904B93,
	BurstCPUOps_Conv2D_mC5E5977D24EF0848C15D93279C9A90AEC2D2A574,
	BurstCPUOps_Conv2DUsingIm2ColSliced_m5E11706B1F0C997C705257A4DBD78AF198D717EC,
	BurstCPUOps_MaxPool2D_m3BC0FA07898D324F94824C7C582899E89A973E8B,
	BurstCPUOps_AvgPool2D_m5519B20C3364424254BD9E8FFFFBF721E096D2B9,
	BurstCPUOps_GlobalMaxPool2D_m2B163496D04849117C0F09569D4632AE71D446C0,
	BurstCPUOps_GlobalAvgPool2D_m271FFAA72F38CCB4066743D597C0EF6AB67B84D4,
	BurstCPUOps_DepthwiseConv2D_m2B2BADA4B5354D79BCF8D582B3BF48651EA79C6D,
	BurstCPUOps_ScaleBias_mEFD2D3216A1000CA9FF90C2081871B01FB598AF9,
	BurstCPUOps_Relu_mDB9E72264DBB4ED1EE50A7E191A5AFAB549DBB6B,
	BurstCPUOps_Relu6_m22157E3A700A80E93C41D9136A6AD42DE5D87542,
	BurstCPUOps_LeakyRelu_m9AB16A1325AE523E3FF67D1DD1D720A6B4C65336,
	BurstCPUOps_Tanh_m3F0CB24B4BDA833D6028E7A10C1B0AF9F717EEC6,
	BurstCPUOps_Softplus_m9470D55495D54A20881DCED03C15339795862D24,
	BurstCPUOps_Sigmoid_mCD08F89930DBEB1867237D20466D5532C4AACD04,
	BurstCPUOps_Elu_mE8E18F1B1903AD88B0BA43380C3AAD563874218B,
	BurstCPUOps_Selu_m7B5E268A979EC3C469A5CD933B5665ECDB969CBE,
	BurstCPUOps_Swish_m63CF7698380BF41E93CAA2C565470B5290D9336E,
	BurstCPUOps_PRelu_m5D087F97CFE0C4BBDC16D2C57F035007BFB8D43C,
	BurstCPUOps_Softmax_m9BD2465F2A9790D7EF5049E6682F4225A5FD106C,
	BurstCPUOps_LogSoftmax_m92D60202EE990A32FB05591D493975DD711DB823,
	BurstCPUOps_Abs_mB8614F655943112C0EAF707CD421872D1D388B02,
	BurstCPUOps_Neg_mA07EB4C372BF9A1D3D5D8DE127532E688DFFA7D0,
	BurstCPUOps_Ceil_m1A84286D9D26E9369834BD543C65542601CBBA1B,
	BurstCPUOps_Clip_m1C72B11A7FA3B803ECDDB5ADAB3A54F1DCE45DD5,
	BurstCPUOps_Floor_mD2B4E34AB8D3F18F9663B66C8A9CA0652701BD09,
	BurstCPUOps_Reciprocal_m023A09BFE7170F42D6DEC336D174D694F0F7FA24,
	BurstCPUOps_Pow_mF6839291857CA3DC43D88D833441C31552A82C6A,
	BurstCPUOps_Exp_mE4AB2B77D6C06EDEFDE7A5999026AA65BD9EFC14,
	BurstCPUOps_Log_m2EB7D6961D086F12F5F9E907999DC0F2EE88B034,
	BurstCPUOps_Sqrt_m2265ACD8FE967112A866449F9E1F30821EE35294,
	BurstCPUOps_Acos_mBD03A76B8E0DA9363CC33DB965A3333F272ADCEB,
	BurstCPUOps_Acosh_mA219F8B2DCAE728A8B548D3ECC21FB77660DCCA7,
	BurstCPUOps_Asin_m554E057AF309B297CF93A6929B859009AE090312,
	BurstCPUOps_Asinh_m53CA3138F1F8FA0117E351ACFECA6D03308DC6C9,
	BurstCPUOps_Atan_m3449C808EF8171B8A692010EFEB591AF01691E68,
	BurstCPUOps_Atanh_mF7670F6B8A57E820DE3DB51CC67622A46C2AB038,
	BurstCPUOps_Cos_mF6A20D73B2071B70E82207ECD5F8AF8586D5EDD2,
	BurstCPUOps_Cosh_m1334425B1966BE7FED1148622353E2F54A38F450,
	BurstCPUOps_Sin_m89C55BA0BEA1A407B8817C4A28D1BAFBD10FB3E5,
	BurstCPUOps_Sinh_m702EDAA95A5EFDA4938D3ADC3D22902E9836AB4F,
	BurstCPUOps_Tan_m32340F896A0C8E2D407791715C32579022C5E257,
	BurstCPUOps_AssignTensorStrides8D_m03CF677E61324F37C342EA42DB6F12DF6A7FFBF3,
	BurstCPUOps_AssignTensorStrides4D_m045EF7EDBD926DA46254F2EAF343F5B3B1FD49F2,
	BurstCPUOps_GenericBroadcast_mA8F92CDEB11A5A6836D334E2100EBAEADAE28F4B,
	BurstCPUOps_BroadcastAdd_m2B17E8977FD5EC2D8800A4C574306621386AB2BE,
	BurstCPUOps_BroadcastSub_mF670B271E383F313E0AFFCE13B3AC916C174B812,
	BurstCPUOps_BroadcastMul_mAF3968F7CEE77BF61425556E4512E92A67273B23,
	BurstCPUOps_BroadcastDiv_m1F681836AEA8884C38CBA4439F05672AF8322080,
	BurstCPUOps_BroadcastPow_m58A5810C83320960B6409D886BABE483BA9B3F63,
	BurstCPUOps_BroadcastMin_mC06F4F6E349FDB5AEB263BA7B1E25C84BC6D8275,
	BurstCPUOps_BroadcastMax_mF93ABA47807397D25EF12690F2A3B8EDA24103FF,
	BurstCPUOps_Add_mC03F1C56C4757740695CC12B0D7654317CE6655C,
	BurstCPUOps_Sub_m74EFE5153BD10EE942C02D1AACFC331D14B6BD98,
	BurstCPUOps_Mul_m3A116CC2DC57A3343A704A360164736430CA8C28,
	BurstCPUOps_Div_mB827375AA2C05CB0282E51B9BDCB6D4B20BE9D09,
	BurstCPUOps_Pow_m00C21C3F93CB6A83A3091F6581C9C99008F9AC77,
	BurstCPUOps_Min_m8FDFB8C19D7653C9B337B5332200BD6EBC5A62AA,
	BurstCPUOps_Max_m702BF1E38A83F7A4005FC6FDD8581D6083A197E4,
	BurstCPUOps_CopyAndReshape_m9193C598EA2E29FFD067392EAC3C69C35907FCA5,
	BurstCPUOps_Concat_mA9CDFE44061E1F4E44156E04831FBDD1D4FDEB5B,
	BurstCPUOps_StridedSlice_mD5B2424A12C4C74D2C4B45E0834F2530B3C179C8,
	BurstCPUOps_ApplyBorderPadding_mED368EE086CE201A1AD2557CB9FE9D18E986FD12,
	BurstCPUOps_Border2D_m7D26EACD34E1C6D05D9E91500F64D0671D674B81,
	BurstCPUOps_Transpose_m3D90C856A7C0CB974C113AE5418710DCA8A89F59,
	BurstCPUOps_ReduceMean_m934DE4F6A81ECF395ACE82DD574E49C611EA0515,
	BurstCPUOps_ReduceSum_m8E353C991E391CDD369771C5BA8C515D82F4EE08,
	ComputeKernelLibrary_Dense_mCA5E29A0F61973679BFBED3DD95AFBA093CBF7AA,
	ComputeKernelLibrary_IsT8x8_R8x8KernelValid_m80F0DB65A0626FCACF1BC9F11B0B127BD06E37C5,
	ComputeKernelLibrary_IsT2x32_R8x8KernelValid_mB7CE8FA5B1C93AEB333FA35CC36D5D744D15023A,
	ComputeKernelLibrary_IsWinograd16x16_R4x4KernelValid_m363F734E59B922325656FB70F6EB2B37B5D06B3D,
	ComputeKernelLibrary_Conv3D_m5E73FE52FE3AA5640173971A7FA4881B0620E00F,
	ComputeKernelLibrary_Conv2D_mE2F8F01BCE96FCF5EC430168983290FB38434EFE,
	ComputeKernelLibrary_DepthwiseConv2D_mD70063750728550EB0528D6D30AEE085F3E6B428,
	ComputeKernelLibrary_Conv2DTrans_mCE6D62B805DD74AA8EC0E435AAB9E59CCC448757,
	ComputeKernelLibrary_Activation_m6979A538FEA651BBC376509E8EB79400C87E6EDD,
	ComputeKernelLibrary_PRelu_m7819DAC91E37C49BC3DFDFAF75D53252B6C80222,
	ComputeKernelLibrary_Softmax_m39DB6376ABF43654A94BDCDD6D23647FAE5B302F,
	ComputeKernelLibrary_LogSoftmax_m7C680FE598559CF1D743B8D9F9CB966ECD60F149,
	ComputeKernelLibrary_ScaleBias_m49EA4054451B8B9C38F3EB236B9A16C81573F357,
	ComputeKernelLibrary_Upsample2D_m4C8ABDEFF35E740EFB80B7C8BF7A06E0C666BF9A,
	ComputeKernelLibrary_Pool2DReduce_m3890255F63E2C9218D3E45CF5963F7A826A8B0C2,
	ComputeKernelLibrary_Pool2D_m7DE1C3E769B4F1A1F621AE6F6E870F02157FA1F8,
	ComputeKernelLibrary_PoolAvgVar2D_mA460BCE8D893652D12BDCE5279E43DA9283B9B2D,
	ComputeKernelLibrary_GlobalPool2D_m55DE035F7399BB8A9DB106BD883D3B6771A4779D,
	ComputeKernelLibrary_NormalizationTail_m45AAE71BE8E0216505C2B11BB490546CACF632B0,
	ComputeKernelLibrary_Copy_mC302CF668D27D96B3BF58886A885D5D347451C8D,
	ComputeKernelLibrary_TransposeToChannelFirst_mDC686F3FD22F5AC486A94C9E7AD875E3F2DA3DED,
	ComputeKernelLibrary_ReshapeFromNHWCModel_m389094A5FD4043313840C5DD5EC56D2BB5D3D860,
	ComputeKernelLibrary_Padding_m09A47175525A23F4391951DC851B1F9BD2844329,
	ComputeKernelLibrary_Broadcast_m0A4F02A11A4466C19F98072FD3B6A6A7E8349BDB,
	ComputeKernelLibrary_Int3_m7084C1976E135B1E1B11157ABDBB8350A5CD56F9,
	ComputeKernelLibrary_BigO_m557521263905BE812DF88BCA8DCD7C369B741708,
	ComputeKernelLibrary_StrictAnd_m25F6419487B760E39F9F0F7188C38BC592C73475,
	ComputeKernelLibrary_Strict_mA419AD15F9D40483B0E06A6757786467294C1C00,
	ComputeKernelLibrary__ctor_mA0CB65377911FD7660AB7371436E26023A5EFAEF,
	ComputeKernelLibrary__cctor_m0A13FBCFB88BD6EB2E72839A441F07CF131F5593,
	ComputeKernel_get_shader_m858E808F13E3BB4CA58B22D59903E79F6990BDBA,
	ComputeKernel__ctor_m8F4CF6B7E53BD72E61C571737C878E940F12AB8A,
	ComputeKernel_SetTensor_m017C6FAE3AF781EA621D0B7F42C03C70D479ED82,
	ComputeKernel_SetTensor_m04E53D63119C9B0B1536C7BE274301066D521BD5,
	ComputeKernel_SetTensorDecl_mF6580DF0B65DCA1DEBDA3DF94903DDC1E0DA2471,
	ComputeKernel_SetTensorDecl_m85FD625BA73062D6A451C5B8B10B79B7C108104E,
	ComputeKernel_SetTensorBuffer_m4F693999943C4E616C3265019ED84538D6337052,
	ComputeKernel_SetTensorBuffer_m64AC02FA48C4AB628F323AC16CE0217C33B128B0,
	ComputeKernel_Dispatch_m0BD65DEC5A63D57F1C8A7F75F2175B3183905B50,
	ComputeKernel_CalculateEntryScore_m1031D71A6A46C72AA2883ED4D807C1627CA4519C,
	ComputeKernel_BestKernel_mC37CA1F5854D196B2774103AE5BCE3FBDCB6A5D7,
	ComputeOps__ctor_mD3B5129B8DF8801057940581E5017FA004A179A2,
	ComputeOps_BestKernel_m67A5DA66F67CE5EACA801AE7AD4AE0229A2D048C,
	ComputeOps_CompileKernel_mFC4EA78CB0E4894E44BB73039B7FA80F5536EF51,
	ComputeOps_MatMul_m08A5DF0F5B3A3CADFDB9C5DE71E190C232357929,
	ComputeOps_Dense_m33FC6E2D7DE5912C19B3CE037B4364F8AC77C309,
	ComputeOps_Conv2DWinograd_m9301AFA0E89D05309573D2D6F2C8C7DAB52AD90A,
	ComputeOps_Conv3D_mA73E196CF586E536F0A9C688C7D8E9602151B95D,
	ComputeOps_Conv2D_mB02068849D8961888EFF455405C6923B80B454AA,
	ComputeOps_DepthwiseConv2D_m31829E1FF2710DA59C20D9C25807152E98B2F199,
	ComputeOps_Conv2DTrans_mDBD43CA639EAE8155C5964AAF627D0763BFD1E48,
	ComputeOps_Upsample2D_m1D22FC11155F55F32DA3FCF5EE3679D8FCAD1406,
	ComputeOps_Pool2D_m4AA1B4E184264D8A5F7A68EC3B3EEDD6BBD9FC6B,
	ComputeOps_GlobalMaxPool2D_m36E4E09E18092AB410FECEF32B89BCA690A0C2C3,
	ComputeOps_GlobalAvgPool2D_m8F724E89097ECE71DAA738DAA62C14E3572D0978,
	ComputeOps_GlobalAvgVariancePool2DReduce_mC840BA7073FD87A8C1C9955D5C04651DC5538698,
	ComputeOps_GlobalAvgVariancePool2D_m33513D697F003064C0FB92C093F0508A3606FF3C,
	ComputeOps_GlobalPool2DReduce_m4DF65D308E059AB8A9DAB1D2B3B036648497955F,
	ComputeOps_GlobalPool2D_m0A5ECD250EABA897DD7C4108071F41CC8148D4AE,
	ComputeOps_ScaleBias_m94720789339CE0B37207888093972C656AF6FCCE,
	ComputeOps_Normalization_m1FEEB6300BC87488B63F400A63BEBA9740CA6DBD,
	ComputeOps_Reduce_m6BC644DBD6AD5919BA6C881CCAC749904DA73348,
	ComputeOps_Activation_m33F1332AA80046C65D5C261673F9B8943AC21DF4,
	ComputeOps_PRelu_m35E6FF32DCF3DAE3EE988C2813B783B5E1D0D5E0,
	ComputeOps_Softmax_m31810B48A7E4552C452F066CE1F73125F8910BCA,
	ComputeOps_LogSoftmax_m6F87E30213969A1FB8B978F5857649B53DC63476,
	ComputeOps_TransposeToChannelFirst_m60DFF947684FC35174EC8ED25387C203647893EC,
	ComputeOps_Concat_m7C7E13A9F87FDA055D1A88F5C36D602013B8FA76,
	ComputeOps_GetInputTensorStridesOnDevice_mB7DAB69CBFC20C6E5E992B9FD649C96032E7D293,
	ComputeOps_ElementwiseWithBroadcast_m27871E192EBE7FABF902F1B2E6E242F3AC1DF035,
	ComputeOps_ApplyPadding_m82033A5CD06083E2535AA0E9BB7FAAB92710180F,
	ComputeOps_LogicalNot_mDD1A1F24AD0CF4F2F9221790D57CE585859DEDCA,
	ComputeOps_Where_m86999B060BA89E00D4E76C0FA048FCEF5180059C,
	ComputeOps_CopyAndReshape_NCHW_mA71D5D768C99168B8CB8F41066ED25AEDB3FDA69,
	ComputeOps_CopyAndReshape_mB917C3718373F5C52EF7CBC6C8EAB92BEC455856,
	ComputeOps__cctor_mD8169DE21D30B32D866A00BF94E956DB14459882,
	ComputeVarsWithSharedModel_Dispose_m7F830ECA8A8D0BA7986E30BE0503A3099A3F6F74,
	ComputeVarsWithSharedModel_PrepareLayerInputTensors_mA52404C3EA6FB19A720549FD211B631BD8D04023,
	ComputeVarsWithSharedModel_CreateComputeBufferForModelTensors_mF3B2A99F92622B14CEF2F1B4DD62707E40CD00F5,
	ComputeVarsWithSharedModel__ctor_m42A1193647C503583686C028FC4D6DE4058C9BF5,
	ComputeDebugUtils__cctor_m2F7454AEDEC9399D29033B8280760AD09E094E55,
	ComputeDebugUtils_LogAssertion_m77CAAB76B26B0EED2B52E12BA20EF612D8089931,
	ComputeDebugUtils_PrepareDispatch_m1174A1B9B3A6196280B0094BC483B80C689CB781,
	ComputeDebugUtils_VerifyDispatch_mE992E8047597A85175FB99E5B56868562C433419,
	ComputeDebugUtils__ctor_m6E47467223277B3CE0E9472AA28986DED468088B,
	PrecompiledComputeOps__ctor_m3129D9E030B288314FCEFFAAFF126F07A112506F,
	PrecompiledComputeOps_NewComputeBuffer_mB8D77DC0D0DAA7B4BF10CF565F31CC32EB92446D,
	PrecompiledComputeOps_ResetAllocator_mD4E3E3262659CF894AF2B3B7C122C81C7A58F712,
	PrecompiledComputeOps_CalcModelWithInputsHashCode_mC10BF895D492F6F1A7B20161307489BEC49497E5,
	PrecompiledComputeOps_PrepareConv2dWinograd_mDC29CA7402EB1C098142350B4A165E206D5D663D,
	PrecompiledComputeOps_PrepareConv2DTrans_m205FCF130F1451227F2F00868CA933F8314DF6F0,
	PrecompiledComputeOps_PrepareModel_m6B798EC760BF45CD4DF31DEA593A58D76C6917BC,
	PrecompiledComputeOps_PreExecuteLayer_m4ACC5B9D08074C0AAD4D00FA5F7F6852006894B8,
	PrecompiledComputeOps_ApplyUnsupportedFusedActivationIfNeeded_m3D12EAA28128E08CA1B4C9472DA6FE4B0AB5329D,
	PrecompiledComputeOps_Dense_mB4C86DFF507C1E24AB4A5CD989A507A67E0F3041,
	PrecompiledComputeOps_Conv2D_m5D76BA7FF0E50C7C656F8839F1D407EB4A1158C2,
	PrecompiledComputeOps_DepthwiseConv2D_m5217E4F59B33DFCE9E20A21901F3E73AB4CE86D3,
	PrecompiledComputeOps_Conv2DTrans_m9F1DD17BCB0A9B44368DC3B47230567D7E456A0A,
	PrecompiledComputeOps_Upsample2D_mCC7EBA0237B6B2F3816DED066A1FF6579C530A3C,
	PrecompiledComputeOps_Pool2D_m9D10598C8ED336AC189A32108D111015015CF3BD,
	PrecompiledComputeOps_ScaleBias_m41835929303D4769735EA8C5861A965DE78BE559,
	PrecompiledComputeOps_GlobalPool2D_mBF8A0273EF371CA113199399CC599B23C4D03759,
	PrecompiledComputeOps_GlobalMaxPool2D_mBE97A3FB5471272BC316CBE453CF73F231C84F72,
	PrecompiledComputeOps_GlobalAvgPool2D_mB3DE26E7894B41232D52E55686116CB608838442,
	PrecompiledComputeOps_Normalization_m152E2F48812AF511D362DEBD5D0BFF329950F484,
	PrecompiledComputeOps_Activation_mD95F0436DE7C0D2D4D98D1D63B97043642243B91,
	PrecompiledComputeOps_PRelu_mCAA06185B56288E15E35438310042C8B3D9F9AB0,
	PrecompiledComputeOps_Softmax_m836F9EB5AB3D55317FD2E9A85EE245FFFB27A1F3,
	PrecompiledComputeOps_LogSoftmax_m280C76B07E83201CE6FBA494710786B50E9BB1B4,
	PrecompiledComputeOps_ElementwiseWithBroadcast_mBDCA8009E02E21C7C380BA1EB1543044AD65E4BF,
	PrecompiledComputeOps_Concat_m2510981F2D1B035D9E815FEB1760DE4B383076BC,
	PrecompiledComputeOps__cctor_mA4A42FF7E8A8BE6AD62B7843B8C95A189D3FD5B2,
	ArrayTensorData_get_array_mB6108E940CA5D89C01FF79905B543B5FBF4566D8,
	ArrayTensorData__ctor_m53A608AC16434A9068C96C092339F665049DE483,
	ArrayTensorData__ctor_mC512495E0476B052DAC482C1D30BF257E21B55F5,
	ArrayTensorData_Finalize_mBD0EE8075ECE328DC54ABC90292256A56F95910F,
	ArrayTensorData_Dispose_m227E6A130724D7A9937A4172EB1299BA632B4265,
	ArrayTensorData_Reserve_m2D5D7578D29CEA147F6DCC404216409D7C02F25A,
	ArrayTensorData_Upload_mAEDB483954354F5C6B3C845F7ECA9DE6ADF049FE,
	ArrayTensorData_ScheduleAsyncDownload_m879B4A3AD2E81FE485C243BB7606C4E4D2915E69,
	ArrayTensorData_Download_mED75950F12BB50CD323CE420A4F0AEE57E0980AD,
	ArrayTensorData_SharedAccess_m7F5F71AE1528AF0E6BDEBCD42EC7EEC426A11DC1,
	ArrayTensorData_get_maxCapacity_m364A15CCB379243CB1FECECB4D074150BFA269F8,
	ArrayTensorData_ToString_m61A20386B632EEA8A2FD35308B4AE3276C1B371C,
	SharedArrayTensorData_get_array_m80E46AE6E6BE17297D57DCC467F73B986CF27ED1,
	SharedArrayTensorData_get_offset_m6CFBEC01EA4CD96C370C783815FCBD844B56B94C,
	SharedArrayTensorData_get_count_m0D96ECE699C74C929142C7546AC488379785D838,
	SharedArrayTensorData__ctor_m97627918D633A73270A1B2DD2C74FB8816C753DD,
	SharedArrayTensorData_Finalize_mA788A85A1AC979AEF208AE004235814C875648B1,
	SharedArrayTensorData_Dispose_m2148FDA695889F7B256D83FE77746554D9CB4A77,
	SharedArrayTensorData_Reserve_m0CC438EE61BE44DD1571E51887F1A96F21B293D3,
	SharedArrayTensorData_Upload_m39C1C239E761D3D6520170BAC68E935FB9114439,
	SharedArrayTensorData_ScheduleAsyncDownload_mEF61B1302D1F34D448BC9E665C8F4A5FC94022B1,
	SharedArrayTensorData_Download_m6D3671BCC28C4CDAA8BE3E7596A46790372799ED,
	SharedArrayTensorData_SharedAccess_m8E29C08FB58FC469DEEF6A82C95B0F9ED2122002,
	SharedArrayTensorData_get_maxCapacity_mFB38FE9DC0179A48B713C60942DFFD4D11208379,
	SharedArrayTensorData_ToString_mCA602A3D857D95209B0CEE65F75BBB0946DF650E,
	ReferenceCPUOps__ctor_mE377AA615F7788C476AC4427834B0CE1F389E0A0,
	ReferenceCPUOps_NewTensor_m2860FF33913FF4DB5A7A3819EE7B49212C18DE15,
	ReferenceCPUOps_NewTensorLike_m24A1300AAF4C4ADA155A437EBC0D3EE68B2A0E89,
	ReferenceCPUOps_NewTensorLike_m152E41744307AA4D941BE7A8110CA0A34EB2167B,
	ReferenceCPUOps_NewTensor_mC23EB4D2750FE2A426C4E8D48569EB584629F58B,
	ReferenceCPUOps_NewTensor_mC1D7E0CC8EF49F3F93B16294089392EA410956D1,
	ReferenceCPUOps_ResetAllocator_m7E4E615D6D9F36971794885FA439CAB733C1442F,
	ReferenceCPUOps_ApplyFusedActivation_mE86F81E62A98133E30982C792C7389DCA34F554D,
	ReferenceCPUOps_MatMul_mA98972A6C596D383E0DA855D39F170AAF8205FE6,
	ReferenceCPUOps_MatMul_m49A618ECCED3199A6D6D8FE3A3D23E20402E3A6A,
	ReferenceCPUOps_Dense_m8C00891EB2B066F7E0F1FD79D7402CE2C9AE36D8,
	ReferenceCPUOps_Conv2D_mEB6B08E973F277EE9195BFD8FC2E1BB4176D2162,
	ReferenceCPUOps_Conv3D_m4C52D9162FD3D3F3A038411D4510E52600B31DE7,
	ReferenceCPUOps_DepthwiseConv2D_m003840534E6A0B2F5FFC70E8C8E9AA3F419D44A6,
	ReferenceCPUOps_Conv2DTrans_mA90C2C3DDADE110C8B9C009EF652AD604A1C82F4,
	ReferenceCPUOps_BilinearInterpolation_m49E472641CA885627489E3A424A4FFCC5FAB6262,
	ReferenceCPUOps_Upsample3D_mEE3456A1BAF785497C161D7F1D610C29D255B2EC,
	ReferenceCPUOps_Upsample2D_mD4E2933B710E8A6F92BA82696ED3C93F2FFEB034,
	ReferenceCPUOps_Resample2D_mD385422AA1457940CFD97F82462F616656EA5A7F,
	ReferenceCPUOps_DepthToSpace_m14AC40C75EE60EF3C423F2BE7CC6E99C3EF6E5DC,
	ReferenceCPUOps_SpaceToDepth_m2DA708F4F2382AEC5852FFC7CCF97EB42001EE46,
	ReferenceCPUOps_MaxPool2D_mE233BEA5A8B6166E8172E581A4B5AB922133A1A7,
	ReferenceCPUOps_AvgPool2D_m570B838F09921A337A84A16C2244C771BF02C7A5,
	ReferenceCPUOps_GlobalMaxPool2D_m347BECF502ED0EF765D03E30E919ABFF6515EC4D,
	ReferenceCPUOps_GlobalAvgPool2D_m13EFD2CAD5418836A06F5D6835D4E61D9736FE7A,
	ReferenceCPUOps_GlobalAvgVariancePool2D_m265B0C90661000D41CD221E40BE3E076D776E527,
	ReferenceCPUOps_ApplyPadding_mC7F6B828D40BF3311C06433F5C0B967C9133657B,
	ReferenceCPUOps_Border2D_m16DABFD77CABEA97E27873306752F5BCF97EE1D9,
	ReferenceCPUOps_Border3D_m827ED989C5C05C56BE9875CCE6B6C8FC7EA49ECB,
	ReferenceCPUOps_ClampHWToTensorShape_m4972BEAE0D18D075DE8D8357D1D6CCD86452784A,
	ReferenceCPUOps_Pad2DReflect_m92AA80D38C824BF55EABFEF895BF220725160ADA,
	ReferenceCPUOps_Pad2DSymmetric_m4F2DF18A78FF95742878C3FA95118029AFD3D590,
	ReferenceCPUOps_Pad2DEdge_m614B33134ADBD647FA543DCC54168F52EACAE25A,
	ReferenceCPUOps_ScaleBias_m783F68C83AA331C728B507DE4A7EE6808CB41BE6,
	ReferenceCPUOps_LRN_m4A1DADA0B4394E37B72282B459C44ACD786DEC52,
	ReferenceCPUOps_Normalization_m9815B95689EBA80129E7E54F0CFECAE83387A213,
	ReferenceCPUOps_Bernoulli_mCB95FF8728813DF5702F81E5F6242BFC889EF558,
	ReferenceCPUOps_Gaussian_mE45907B4DC2AF14FDBEE87D077E93FE453C93C03,
	ReferenceCPUOps_Dropout_m72C2541CA158751F6AF4CE58267433C6C92625F7,
	ReferenceCPUOps_RandomNormal_m27BF9AA53E84E3C4A98ED19E357DF2C864A5FE7E,
	ReferenceCPUOps_RandomUniform_mDC4536309BEE6AA865D494A5507BC1C74A58F0B3,
	ReferenceCPUOps_Multinomial_m3B394C748610F9ECCAEDF706493A710BFDDACD50,
	ReferenceCPUOps_OneHot_m1054C19E73EBDE87ABB3709EDFB94E485C599E1D,
	ReferenceCPUOps_TopKIndices_m36F21493A1891B8750EFA8DE323E6A149625E8BC,
	ReferenceCPUOps_NonZero_mA8428E7EA626C34D8C5B7FD657EC69A9BEAF2F60,
	ReferenceCPUOps_TopKValues_m1EB38FC671164100398908DE5EC5AC0D09C3DC01,
	ReferenceCPUOps_Relu_m2FB856F64118D83AAAAEA1620C2F21FDCFDA6193,
	ReferenceCPUOps_PRelu_mAE8EC37B337FD16322FB419773343279222AE2ED,
	ReferenceCPUOps_Softmax_mDD21D5F9DC57C15B48C66F68D5E929E71B99AEC3,
	ReferenceCPUOps_LogSoftmax_m764E1443C168EC7EE111E33E83B7A05EDE1EB2B5,
	ReferenceCPUOps_Tanh_mCA3D1DA226A56C634B86F4CA68CD6AB9C0E3F144,
	ReferenceCPUOps_Softplus_m53E323434E2BB46BE6A54191B6560E3089F6B49F,
	ReferenceCPUOps_Sigmoid_m80FE17A7B03F7294579FB22CC50625A6E5325686,
	ReferenceCPUOps_Relu6_mBE988992984E6121D3D241C68A0B5A12F893A4BC,
	ReferenceCPUOps_Elu_m11C2FD13D39B9530314166FD47A8FF47CFC85BB2,
	ReferenceCPUOps_LeakyRelu_m100DC6818675E1F66AE64E03703F1978AD4339F9,
	ReferenceCPUOps_Selu_m488C9C4AAD6974BBB7FA74F639B8DD897FD5BFA4,
	ReferenceCPUOps_Swish_m6E5FE3B3CF7FED3F521D3854D0D2C84558962A6A,
	ReferenceCPUOps_Abs_mD1512E40CBD8938173AFAB531870350186326527,
	ReferenceCPUOps_Neg_m8797D7F0319BDD273C453B3143D078A246747857,
	ReferenceCPUOps_Ceil_mB655C9815BF099187DE53527A0C3164C2B67669F,
	ReferenceCPUOps_Clip_mA0536C26E0E76922DE88DF6B2C3C01E99F58F2D6,
	ReferenceCPUOps_Floor_mE078F4DF2EEC1768D396970855D33521A435E043,
	ReferenceCPUOps_Reciprocal_m9CCBBFDF1DFDE81785C6C91D6FD86D978CBE5796,
	ReferenceCPUOps_Pow_m2E1366150F52C7FB70F377785D096BE40EB4B83B,
	ReferenceCPUOps_Exp_mE58DDE32C25E1AC3DC6C991ACFAD38B4E7C9DA98,
	ReferenceCPUOps_Log_mCA83B3184F99989CB1B545BE87B6F6752912CD88,
	ReferenceCPUOps_Sqrt_mF9047358A6220DE6806AA8CDF6F31AC03C5CF80D,
	ReferenceCPUOps_Acos_m4A2E4648536BDDC9DCBB21D1603AA385A4109B65,
	ReferenceCPUOps_Acosh_mB0073E51293F8C1BE2B9B1E08FB7635DD70C4B07,
	ReferenceCPUOps_Asin_m0F745C1FBD70972AAFEAC6439F5BE32516F2F053,
	ReferenceCPUOps_Asinh_mB10325CD255B8914ECB9C9BBCD7E8731C81F9DA0,
	ReferenceCPUOps_Atan_m6B2E9AE84DC288F2E3322BB5B2D52CAF74E1C7B6,
	ReferenceCPUOps_Atanh_mD0502C311F007CA44E07F9ADF8FA95B9E77869D4,
	ReferenceCPUOps_Cos_m75301BD2687BE4169E0237762713EDF8882A99B3,
	ReferenceCPUOps_Cosh_mBFC470D38A7F9AE71679BF91D55ADA1E5E4C71FD,
	ReferenceCPUOps_Sin_mE19403F7318AEE79699DD1A583575D2EAE5DC924,
	ReferenceCPUOps_Sinh_m343AE23A674DEDCB30AEAE24A4F4DC401F581C2D,
	ReferenceCPUOps_Tan_mAAB4E4F4DD55A54D844F783802A01AEB76E980DA,
	ReferenceCPUOps_GetAggregatedDimLength_mE4D78212A05BC3E71C611F3DB415D01BA85F5271,
	ReferenceCPUOps_Concat_m8DA39BE39123D5DB3EB6B024138F58DA014E193B,
	ReferenceCPUOps_StridedSlice_m0598C3B1E16F0B354631E7F2F205D27BE066E39A,
	ReferenceCPUOps_Tile_m52E6011814ED458759D96C526EFA4321FFDD3EB7,
	ReferenceCPUOps_Shape_mBA3949D2B71A33C7D04E9E7700D7EDAF26BBFD31,
	ReferenceCPUOps_ApplyElementwiseWithBroadcast_m0F5EE484ECDDC5D6479228A3C9A1B38E3CCFAC4D,
	ReferenceCPUOps_Add_m63ED36B05DC991BC0BB6EDD1BCD05850EF91DB98,
	ReferenceCPUOps_Sub_mD479548B7C3E957949098444B8261CB1EA44181D,
	ReferenceCPUOps_Mul_m65B183B8CB34AB810979D6E3951E9311936ADB41,
	ReferenceCPUOps_Div_m4D28D8F674072329AB6BA7E91C392CC72093EA40,
	ReferenceCPUOps_Pow_m0F7261757DD3F539FCB0A9D0D22A01473B80008E,
	ReferenceCPUOps_Min_m2B1A37ADDEDF884A9BA62750E16E059A3866B9CE,
	ReferenceCPUOps_Max_m1B4CBB966B74FBEDB08A56E44B421604C62EFE3A,
	ReferenceCPUOps_Mean_mE8B95FE9561898FCF45EDD93C3681BCC1B37C70E,
	ReferenceCPUOps_ReduceMin_m53C7E0BE9D2A1E3143DF1E6F1269D6B475BB8204,
	ReferenceCPUOps_ReduceMax_mB34D3A0E1885901802741CBB755E91C644C6CC8F,
	ReferenceCPUOps_ArgMax_mCD9097CEC607A756D4AECA6B7C600D786D1B8B14,
	ReferenceCPUOps_ArgMin_mBAE0A0A67DB2EEE679F7909F1E80E137883B8315,
	ReferenceCPUOps_ReduceSum_m3E086C9AFB9899D6036822CBD859102C9A561ED2,
	ReferenceCPUOps_ReduceMean_mD77687F3057E2FCE3CE33980E63242146783AE7F,
	ReferenceCPUOps_ReduceProd_mDE7F6576BF6FBF6722D463B45C5BC646C055CC16,
	ReferenceCPUOps_ApplyLogicalOperator_m6FD7A10CFF4EB21ED78BD776319B7F690F219DEF,
	ReferenceCPUOps_Greater_mC8308501B5C0EB8C61BE5DAA561A9A2563E9188F,
	ReferenceCPUOps_GreaterEqual_m54CCEA3667E3F185E618A2DED29426EF76812E00,
	ReferenceCPUOps_Less_m271540ABD450ECB05D8EA179B1AF0648898874D0,
	ReferenceCPUOps_LessEqual_m8EDF39FEECA708F12917581746B2C8CD6E1269EF,
	ReferenceCPUOps_Equal_m08EE8A9058CAC7F13ED40AD204AA888DE62AC170,
	ReferenceCPUOps_LogicalOr_mDEC73F171E93CB1935C49CC0911E0BBCF70207A3,
	ReferenceCPUOps_LogicalAnd_mA71BE7FFB1E4CCE5D811C7AAA26BF1A2D8050BAA,
	ReferenceCPUOps_LogicalXor_m0E5AED52523BBDFE2B5D03E8850C2D095674E741,
	ReferenceCPUOps_LogicalNot_m4529FF7131AADE1C315DF03835BD241E2D650292,
	ReferenceCPUOps_Where_mC2C31B37886B7A7D5EB2109C5E72D539C87B65FB,
	ReferenceCPUOps_CopyAndReshape_m98435E631A2A721E26EF58F7C126E29F7D02E90F,
	ReferenceCPUOps_Copy_mD9ECB5503B6D102D937474422CF643CA0A90858C,
	ReferenceCPUOps_Flatten_mDA1681412BE99BEFFEE455F5BB069D67FD87EFF2,
	ReferenceCPUOps_Reshape_mD1694A216A7CF841468450B483DC6892450FA72B,
	ReferenceCPUOps_Expand_m1686268997DA6EC7BFD823FE76BC9DAACEB3159B,
	ReferenceCPUOps_Gather_m4D796A070CE0BF215EB5A0A60000B2AA31E42A1E,
	ReferenceCPUOps_NonMaxSuppression_mA93FD96FA676A0DA4052898E63C7852CFED51FAD,
	ReferenceCPUOps_Transpose_m9E58F8882FB492708F2AD2F625EFB0CF55780BA4,
	ReferenceCPUOps_Transpose_m0B4F80210186A6BE242CE55C965DE5D79FC1E7C5,
	ReferenceCPUOps_Prepare_mAB938BFBE077EECE53537D2A791A19D70B3120C7,
	ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetIntersectionOverUnionAreaU7C124_0_m17182491B5D9B3B5405468D2F17CAA383FEA5E02,
	ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetIntersectionAreaU7C124_1_mB581CF12174B3F064766853E79BE35328BAD1A93,
	ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetRectU7C124_2_m1511FFFB38B8B1D3D4EA800824CCB7FCFFD3116E,
	ReferenceCPUOps_U3CNonMaxSuppressionU3Eg__GetRectFromCenterU7C124_3_m985B1557A6D8DC85D7FC74C2F51E16991D5F5443,
	MathfEx_Tanh_mEBA36AAC5E554FE849A4D7D0D3033A9434F54CCF,
	MathfEx__ctor_m38CDBD96567F5F5AA2534CBCDB62B6159BAFE315,
	ComputeHelper_IDivC_m375F957F1CAD64510177F60DDC9AED819CD32AE8,
	ComputeTensorData_get_buffer_mFCECEA9F48FDA3ED441F4E029693C8307B4211CD,
	ComputeTensorData_get_offset_m469608B30A2C1A999BAED9F1F0F4C1FDE9EB6683,
	ComputeTensorData_get_channelsOrder_m9A5E81CBAE8D38EA47120F67EC12560AAA2006D8,
	ComputeTensorData__ctor_m414F6F31B3CB48445BAEA3703EE0C08BB823F305,
	ComputeTensorData__ctor_m79A40B613AC3FFA70B4245C2D3551FDABF335AAC,
	ComputeTensorData_Finalize_mD5783E25E4CDF0E6FF227A076A20DB35A919536F,
	ComputeTensorData_Dispose_mA66A3359575DA99025F604EB41926D819CF04131,
	ComputeTensorData_Reserve_m3187AB6FA283210E78A6BAE273A5DAF6CDB3C8B6,
	ComputeTensorData_Upload_m498B45FE1DFB7184F6708E544F85B26DFD73AE6A,
	ComputeTensorData_ScheduleAsyncDownload_m9104788086296D61DF9DA68CB2E688A18BF36A1D,
	ComputeTensorData_WaitFor3Frames_mFE632DB1F920CF77B136AAC2279B709E6E22B1A8,
	ComputeTensorData_WaitForAsyncReadback_m28F25038FA54ECB844FA1E39B7D679137878946A,
	ComputeTensorData_ConvertFromOnDeviceFormat_mBE93EF58E109700411D59533A4EB4B06E43429A2,
	ComputeTensorData_Download_m07F9478A9989BCBB9BDDFAD6B8BF641032B3173E,
	ComputeTensorData_SharedAccess_m29A5E26D1675D3D408B65395093577E8E7A3F871,
	ComputeTensorData_get_maxCapacity_m4B88E991CFB8F7B647E7E153701E5751A79A3395,
	ComputeTensorData_ToString_m6008AC65DB335B1D6AC108D82721AEB1913BB958,
	SharedComputeTensorData__ctor_m35B413066978EA53EF2A89CF39D7F5E60728B8E7,
	TextureFormatUtils_IsRedOnly_mF73D7E03E0DB405EAD6F9B3E0B3A544257A522D2,
	TextureFormatUtils_IsRedOnly_mC81078AB0A34006C2D9C2569F91839706C8F47BB,
	TextureFormatUtils_IsRedGreen_m571F085C4D86A459BE8CF3937B407882EEBA6864,
	TextureFormatUtils_IsRedGreen_m2945D0FE6E2FC6DD739FB2241BDE9C24C5A39890,
	TextureFormatUtils_IsRedGreenBlue_mFA2918EE6BCD955962A44AD3B6280F6F9F16DC98,
	TextureFormatUtils_IsRedGreenBlue_m83478181FF50EC0A71B1CC907B3343F79618034A,
	TextureFormatUtils_IsAlphaOnly_m0A8E8BA50DFCAD632852EED4859EAF624E1BDC50,
	TextureFormatUtils_IsRedOnly_mEE09F706C4C7405D0BC71DCA270A2C48372E12CC,
	TextureFormatUtils_IsRedGreen_m1569341B7E85AF3EF45335577CD015D253052CCC,
	TextureFormatUtils_IsRedGreenBlue_m3FEE5C525A44D8476BD9B298B1AC8FF1A7773D8D,
	TextureFormatUtils_FormatToChannelCount_m041DFCDFB5891CD73C285468333683AD7F96568A,
	TextureFormatUtils_FormatToChannelMask_m7D519C1E3E83B2201D8DE5A704C0EA4B75D02F18,
	TextureFormatUtils_FormatToChannelMask_m3F45A447C678764EF432F715924D302D32A20F9A,
	TextureFormatUtils__ctor_m54DB66E57A94DF4A1631A0E306C6BA0904B6EEDB,
	TextureAsTensorData_get_shape_mABDD786D12F7C997BC46C31C158993537565C169,
	TextureAsTensorData_get_textures_mDD91652F41A96A463170018A89C77BED60B5EB91,
	TextureAsTensorData_get_interpretPixelAsChannels_mCF4B349DF303B9E1303940027B4EE409C7F6E9C5,
	TextureAsTensorData_get_interpretDepthAs_m444DFE60DE7E1BE0557232E579C9D41DF7E00B27,
	TextureAsTensorData_get_interpretColorAs_mA95C1BE3338CF99B6C1E849E2A708E3698CE2138,
	TextureAsTensorData_get_flip_mF7E272166D7866E3A44F4E233ADF71B4ED608B29,
	TextureAsTensorData__ctor_mB3679ADA66679A129ECC4C13D6962CA4082C1779,
	TextureAsTensorData__ctor_m4900B4A73A94BA432E929049DFD1D53B997EC071,
	TextureAsTensorData_Reserve_m271FF4C4C7E634AD1FE7FF28AB575CF0F445657A,
	TextureAsTensorData_Upload_mE6600480DD53EB4B6E397A9734EECE2E61AB67DF,
	TextureAsTensorData_ScheduleAsyncDownload_mB2EE16F7836DD715F560C987BA8656E4562249F2,
	TextureAsTensorData_Download_m045326DFC1301E118E4AB0990B0F975EBE889BE8,
	TextureAsTensorData_SharedAccess_m314C1EC5360C26B093254353CFE3522343149852,
	TextureAsTensorData_get_maxCapacity_m1244EBA8C11842538A33452E737A531E9BA0C36B,
	TextureAsTensorData_Dispose_m5DD3B43305EFAE8F56BECE4BEB6612ABA68D6744,
	ReferenceComputeOps__ctor_m916AA7908F22D7DA35B20CD9292F7D4D652C1F69,
	ReferenceComputeOps_Pin_mF9BB38E5EA06083BA3C13AAB784AC7B3FC7514A6,
	ReferenceComputeOps_SetTensor_mF8836799A315E5914453AE3F50FAE0C78658742E,
	ReferenceComputeOps_NewTensor_m1C7FD0C296AB1A6B25089DEBB4F43E322E7A3A96,
	ReferenceComputeOps_Dispatch_m901709E44D5FE5C751B1F68107F09A2528E57B97,
	ReferenceComputeOps_TextureToTensorData_m1B0868FD3A8621E064F43C5DC21308390D71601B,
	ReferenceComputeOps_TensorToRenderTexture_m8DD3CA0B8697EF1E12D9F641308670A86E311D30,
	ReferenceComputeOps_ShouldFlattenInputForDenseLayer_mEBDAD74AA46849353FD44826D3BA899EC6383AA6,
	ReferenceComputeOps_IsFusedActivationSupported_m42645DC95B6EA73ED0DC59A4620DE613EBC6EFDF,
	ReferenceComputeOps_MatMul_mBEE584FDE2BBB52146314E7F203AABF0C80FDC23,
	ReferenceComputeOps_MatMul_m3BBB954BBFEC2796FA420EEDD5662451CDAB6471,
	ReferenceComputeOps_Dense_mAC017EFBC298967A8D79A3E6DDA413FC291467D5,
	ReferenceComputeOps_Conv2DWinograd_m549A95B1D2A3381B79B344411185A9B0A64A0596,
	ReferenceComputeOps_Conv3D_m5F9608AA514582139DB405F2E66E484DC183F8A3,
	ReferenceComputeOps_Conv2D_m24F455385FC2B83D0FE90C9B7E073008A8F79FE3,
	ReferenceComputeOps_DepthwiseConv2D_mA1EE8004E64B7B3AF2EB45B503FE9C8722239A14,
	ReferenceComputeOps_Conv2DTrans_m20E201FF74F71973122B8E530535FE027616C708,
	ReferenceComputeOps_Upsample2D_mCB05572A7EA8EB1396C6DCF0494A9F4DDA8A2413,
	ReferenceComputeOps_Upsample3D_m08754D76E4E94B5F4E17621D3800F7FFAD2F4591,
	ReferenceComputeOps_Resample2D_mDE74683A114A615537D275E92995BFF223391DA2,
	ReferenceComputeOps_DepthToSpace_mF8F70E2839C90B2CB60C902862C1F8609F3E40B4,
	ReferenceComputeOps_SpaceToDepth_m239EF399D902E39FEA0173E65B586E5287A74B65,
	ReferenceComputeOps_Pool2D_mDC0E1AC687F850097AB9B1C056490A8A9DFECFCD,
	ReferenceComputeOps_MaxPool2D_m65CF33A70D6969195EE1C8154AC755FD2A722271,
	ReferenceComputeOps_AvgPool2D_m9EA7C10678392AD2EC7E43A8A6339CA9D53125BD,
	ReferenceComputeOps_GlobalPool2D_mF08A61004446242655C9BE33FFF2A09136573046,
	ReferenceComputeOps_GlobalMaxPool2D_m89FC136C6E3562C92673FB207731AB1139E0102F,
	ReferenceComputeOps_GlobalAvgPool2D_m95C1C4018F102890D703F66848AE262D5200828C,
	ReferenceComputeOps_GlobalAvgVariancePool2D_mB9A61FF371C416702B862B746D4EF437242D558C,
	ReferenceComputeOps_ApplyPadding_m2E833D089E2318DE95E1917012A582CFFD9642E2,
	ReferenceComputeOps_ApplyPadding3D_m07F268392804DF44B2CC0C671AD528C379D84749,
	ReferenceComputeOps_Border2D_mF17A1925BC19EF4A7A716C2483AC3B054CEB38B3,
	ReferenceComputeOps_Border3D_mAFEB94612054296998F1F09EBEB686F9CA1F2091,
	ReferenceComputeOps_Pad2DReflect_mB81EFA2FB5AA78D16ABF80CEEE1B82E4C0F0BD6C,
	ReferenceComputeOps_Pad2DSymmetric_mDC0DED001FC79C8CD1B3E89E17D62802AB56189F,
	ReferenceComputeOps_Pad2DEdge_m22CDA0D85A051736B16005A9F445358B02B5B272,
	ReferenceComputeOps_ScaleBias_mB02988734279CD087F61EDA9F86A7AD71ACF16A8,
	ReferenceComputeOps_Normalization_m9B07374E5D8F0C536DD495A9222675165F790C11,
	ReferenceComputeOps_LRN_m444EA30C864E8CE519F88A740D37B9D17516BCEF,
	ReferenceComputeOps_Dropout_mF1F3EEA655A9A69D3B4BEFE364A1D8468B750691,
	ReferenceComputeOps_Activation_m8054C9CE40002672D919E5256A1DC7F82853E23E,
	ReferenceComputeOps_Relu_m81E8FED38B77F077BE2EB79C410064680C6F7164,
	ReferenceComputeOps_PRelu_m3BF59AE5BC2CBEAB5D502AAD66F0A1A7106F078D,
	ReferenceComputeOps_Softmax_m4C6985B9D0C0D8C9C52FCB72854A0ED3AE32EF98,
	ReferenceComputeOps_LogSoftmax_mB6A3D256CF636C40282105201B4FC56391517F10,
	ReferenceComputeOps_Tanh_m1A880DEC2D27927CCE3D0781D6D55E34D8C41DB7,
	ReferenceComputeOps_Softplus_m9B79E4BF45FDF00A6DA4F004A750D79D14D6F0E9,
	ReferenceComputeOps_Sigmoid_m7F8D1E4E5FC91E9D68D15BAF788C4BA3D435605D,
	ReferenceComputeOps_Relu6_m33DB9388D4D95C9EBF576166652D4949494D79CF,
	ReferenceComputeOps_Elu_m7E461FDB65B609776879C9CA96D73F6B2098ED85,
	ReferenceComputeOps_LeakyRelu_mD881E418673DB4764A6FE4A209F27E3FE0428283,
	ReferenceComputeOps_Selu_m1FAEA0AE19D80EB7924B67541F417722E788E1A6,
	ReferenceComputeOps_Swish_mB5DFA9AEB08D1CA41D346FF10560CB69C33C8CE5,
	ReferenceComputeOps_Abs_mA9BD6E66D05A1195703AEFE303EB4EBE7D2ED794,
	ReferenceComputeOps_Neg_m72B10561EAFE00155424BAD6FFF621362D7D851C,
	ReferenceComputeOps_Ceil_mA2A77113A5F66641231F8848B3F8D5F988A2A030,
	ReferenceComputeOps_Clip_m402B54CE32E6CC93D6EC21E13E9EE167388B0A32,
	ReferenceComputeOps_Floor_mB9ED62304FC56238E25B7F1D025BB5E629C49F67,
	ReferenceComputeOps_Reciprocal_m2641E5CC09DA5EAC887AA81C3F82AF7B38F240BF,
	ReferenceComputeOps_Pow_m7BF9FC75940BB67491DD00E5AA49BFFA191886E5,
	ReferenceComputeOps_Exp_mA6294E5D218B9FFDE5E4ABAAD45FCAAA674A18D2,
	ReferenceComputeOps_Log_mA7DA53AA5E6F4F2727C0DE8ECB484A08A4F62792,
	ReferenceComputeOps_Sqrt_m05EB1BE16FA3896BE71F7E94D1906FEFB54F481E,
	ReferenceComputeOps_Acos_m9BA87BEFA4C0964383A1F89422E954B91A8B20B7,
	ReferenceComputeOps_Acosh_m15BFF8E386C495C637720E1E5408C2D3E494E627,
	ReferenceComputeOps_Asin_m30EAB4B091778BEACFA93642301D0286AF43D511,
	ReferenceComputeOps_Asinh_m21C946168080CDECC5623D8668C98AACCB57276B,
	ReferenceComputeOps_Atan_m59A9C91DF6D05B1850AEF0E8722194F1359E431C,
	ReferenceComputeOps_Atanh_mD3BA3C812BEB278758DED6D705394DCB4E198AA0,
	ReferenceComputeOps_Cos_m106E43E09EF48EF079FFC0256078AE7211AA4050,
	ReferenceComputeOps_Cosh_mB69E31FABE029D3E6D57A84CD15D6FE1ACA527EA,
	ReferenceComputeOps_Sin_mC0015F869D27D57A89D8F8334FCF9E17D6604BA2,
	ReferenceComputeOps_Sinh_m1C0CA5824A5040889276A68BCD6A1B3CD44E9D1E,
	ReferenceComputeOps_Tan_m985A0A8AD6D28DC0EBF3B6EC5FECE96160A1F7F1,
	ReferenceComputeOps_Expand_m26B082B364A49DE95AEFF899E7A0E1F5FFBAAE91,
	ReferenceComputeOps_ElementwiseWithBroadcast_m2126028359C1E6947F86266D3FA7F570D6E7793E,
	ReferenceComputeOps_Add_m7A16F42F42100759013FEAED8068A74F10A80986,
	ReferenceComputeOps_Sub_mC70C2004C32E38673BC0A90D9E9FBD3041CF71BB,
	ReferenceComputeOps_Mul_mA68CD6D2211C68B387DFA73080053EC3E2A25F86,
	ReferenceComputeOps_Div_mF8E6D9B6C5BE85350EC90639582B12EED2AB74EB,
	ReferenceComputeOps_Pow_m40D40F518E820CA30E0B0BD46DA5AA42DDE285EF,
	ReferenceComputeOps_Min_m13BF5BD020114C46E4357890124BD9EB1E956C07,
	ReferenceComputeOps_Max_mA491424D377357851B94BB12CC50AE6177BAC0B0,
	ReferenceComputeOps_Mean_m4FDAAA598C10CF5AFA19CE176C3F5E377C91C7A7,
	ReferenceComputeOps_FillReducePermute_m75A116152ABB9E05954FBD81171FB2A6DE6D3C6C,
	ReferenceComputeOps_Reduce_m8A378777BBB3239AC94A7808FA49D3B1F5F759C0,
	ReferenceComputeOps_ArgMax_m5F474C81C255A86D059FAEEE07874E69EE528853,
	ReferenceComputeOps_ArgMin_m6616AE7EA93800BDE0C8DA64341567B567C5D813,
	ReferenceComputeOps_ReduceMin_mEB84DAF349F7C524C73FF846BB79283EF32857A5,
	ReferenceComputeOps_ReduceMax_m3B166D14890C1C3C5E5D90BBFCC72CB126853E1F,
	ReferenceComputeOps_ReduceSum_m07799A86A6659BD5F012A0B4ED2DBED493743BA9,
	ReferenceComputeOps_ReduceMean_m640999F985C93220915EF55D9D49FFDD33CA62E5,
	ReferenceComputeOps_ReduceProd_mAC8616D3F105CC92AB919990D8DE74D125E4F31F,
	ReferenceComputeOps_Greater_m73D04E8F8C76410BD063976A5E353751F64E5496,
	ReferenceComputeOps_GreaterEqual_mFECBB27BA1956EA81386F47136448129CD828266,
	ReferenceComputeOps_Less_m6FD7B7908354A85B68C7EEDF025BD0F70636B1C6,
	ReferenceComputeOps_LessEqual_m83050F87982CE81D05ACBBC02D520CAF19E71D49,
	ReferenceComputeOps_Equal_mA720D0AD20A4F571D013ACE84380C51E33A0CF40,
	ReferenceComputeOps_LogicalOr_mEFA86D5E491859105D1FC81E09011A0F22F7A2C3,
	ReferenceComputeOps_LogicalAnd_mC3197E0AECD575CD1805C8CF177A1B944822C6BC,
	ReferenceComputeOps_LogicalXor_mA2CB122E9AEBE03F718043A0AF5D06C5CBA6BB44,
	ReferenceComputeOps_LogicalNot_m1CF7FF46DBB046845A524E7795BFA2A32F398519,
	ReferenceComputeOps_Where_mE20D0ACB2D90F52C715F7E458C27666FBDF8ABCA,
	ReferenceComputeOps_CopyAndReshape_NCHW_m9FCE632340CEF79B2FFADDDCC7194E507F50E656,
	ReferenceComputeOps_CopyAndReshape_m9A599250B4A37E819737AB0EE758898CDF57B8A0,
	ReferenceComputeOps_Flatten_m8F706BBEAA07990EC81E91E81ACACA7C188A512B,
	ReferenceComputeOps_Reshape_mF379C8E24AD9D7371A1E73399DA900E17BAF5869,
	ReferenceComputeOps_Transpose_mD27600CDB4C25FDE174E7774EB1BB91587780A69,
	ReferenceComputeOps_GetOnDeviceShape_m0530D50D9388D922939477B25BCAF045FC99E92F,
	ReferenceComputeOps_ConvertPermutationToDeviceLayout_mEBDA5F808EAECC2CA6F98B7A58E707B25E3CEFF2,
	ReferenceComputeOps_Transpose8D_m67205BD7D9AB16F7CDBFE0ACDFBCCB556DD4F7DC,
	ReferenceComputeOps_Transpose_mB40DDE4C8A4947B96CE9D1ED00BEEC3C919EDEB7,
	ReferenceComputeOps_GetTensorInCurrentMemoryLayout_m60BC71505BC058EE42BFFA2D405680D48E8A37DB,
	ReferenceComputeOps_TransposeToChannelFirst_m87E2BE299436694227DD1BA0EA0F27EA990B7A33,
	ReferenceComputeOps_Concat_m61F74EAF3456A972005AD14051C2B00D94584BF9,
	ReferenceComputeOps_Set8DParamsForShader_m10DDF5D040FF7DF0E2C29B90DCD75D5F33BA0DA7,
	ReferenceComputeOps_Set8DParamsForShader_m129A8EB87FA983113EB3BE05737869F48E73BF18,
	ReferenceComputeOps_StridedSlice_m4FA7EF60AFE58768BC36E2C979382C5E754D1A5D,
	ReferenceComputeOps_Tile_m7C1BBAE10002004A3F5408B6FA0223CA164DA4E1,
	ReferenceComputeOps_Gather_mD60993B9A62704468CAB0A73C1413B0320577649,
	ReferenceComputeOps_Copy_m39996EBF066CBD0C184900F4923577F3E0FBC869,
	ReferenceComputeOps_Prepare_m429D208FB517993E5C5D3859C895A130686351F8,
	ReferenceComputeOps__cctor_m9DBC01DDD22B8D8DEB89D5C94752FA9A97976500,
	ComputeFunc_get_threadGroupSize_mE3DE69C387947294F6E182F5CF192AB1743CAD02,
	ComputeFunc_get_width_mBA6206CEFC80FFCBA3414BE6F7CEA0641CDE3DF8,
	ComputeFunc_get_height_mFB459F6394921EC4889E0BB564D6BA7FC7F76A9B,
	ComputeFunc_get_depth_m83A02D39C34F91C72BB75817A137C9CDC696F356,
	ComputeFunc_GetTensorDecl_m8FC0461E0495EEFE927AE900F62C1ED00F37E3ED,
	ComputeFunc_GetTensorData_m3C56B29B2FA62A99B3440BCC12AC2E26AAFCC845,
	ComputeFunc_get_dummyTexture2D_m986AA067257C1AA4AB7C2407B214874CC48B9DFF,
	ComputeFunc_get_dummyTexture3D_m5849AB5C6C23E3493A7A59DBBAAD173879754718,
	ComputeFunc_get_dummyTexture2DArray_m25CE0F7D46D081F616E2A0B1CD7415D426B872DA,
	ComputeFunc__ctor_m46CF8C060BD8F5F955170A47A85D74D332E6F1ED,
	ComputeFunc__ctor_m33103EF3B9A9F2B3B9122F18CE1516F1C8E5B1B4,
	ComputeFunc_SetTensor_mD745ADFBA3A56ADCCE1CC26C29CE75A3F5B20FB4,
	ComputeFunc_SetTensor_m09D9F7BD2B81B08C75286084958422FE1BD33FF2,
	ComputeFunc_SetTensor_m80D7EB2769E2A10FECA9E69BFC1577C9995A9A82,
	ComputeFunc_SetTensorDecl_m0841B57C96E6E2367E32537827F419E2456CFB7C,
	ComputeFunc_SetTensorDecl_m8F91FAB9ECD7ACDA4E60B19546EAF036C2D76A76,
	ComputeFunc_SetTensorBuffer_m2598B41597A03BA8080236613FFDC03FD2B9C806,
	ComputeFunc_SetTensorBuffer_mFD5F3C63C24E1C88BE5B9306191FAD41CD95F08E,
	ComputeFunc_SetTexture_m70D07EC55E965B600C9712236C66E5E41B443795,
	ComputeFunc_Dispatch_m17A2B947A3F8911B112FD8761FF185879C90C17A,
	ComputeFunc_Dispatch_m94BB3E7429F97ADCC2F7E40228FEF9662D5798A9,
	ComputeFunc_IntDivCeil_mA1EE4351A2A0C6B57B92046EBA4C0250CB79B4F3,
	ComputeFunc_FindBestKernelMatchingDimensions_m7D1213A415D9CC49315241D9AF5871BEA6786302,
	ComputeFunc__cctor_m69D33D53CD9ADB109960B4A6D142507319D2F981,
	UnsafeArrayTensorData__ctor_m8E619CB9AE81AD32A8516C1A02EFD7060483EA0D,
	UnsafeArrayTensorData__ctor_m5E64C82A6868C144480D5EDD8DB60AD2F6A3B84A,
	UnsafeArrayTensorData__ctor_mA91F490F7E602EC6AAD3F9BED881751C72B3EEAE,
	UnsafeArrayTensorData__ctor_mF316ADD313EDB7AFD3AE9C4EF29FD21E3DCF8C4C,
	UnsafeArrayTensorData__ctor_mBEB3525DD06BCA64DBA2ACA79F91EB28B6F46007,
	UnsafeArrayTensorData_Finalize_m897CCCAB67892A1829B1DD23A8E883700A25D6AD,
	UnsafeArrayTensorData_Dispose_m0D447D1C47FA7BDFCD766AD8A9D5722C77F407A8,
	UnsafeArrayTensorData_Reserve_mD80F6D9ECC1F4A09A5F609D234754137654B91DF,
	UnsafeArrayTensorData_Upload_mB963AFE7CF6FC38775EEB9F3076BFE2329A64728,
	UnsafeArrayTensorData_Download_m81CC6A93EE1CE73EF9FB0EFFD249D621F6DA557C,
	UnsafeArrayTensorData_ToString_m4B113CBDE4E59267BE90680AD3101519F4028183,
	UnsafeArrayCPUOps_get_blas_mDB2A14144A4016F0A7AF5713E91B8C6979D25269,
	UnsafeArrayCPUOps__ctor_mD710D3078F3922781D8BDEA8D5DE507A38E0B398,
	UnsafeArrayCPUOps_Pin_m543C3FE3F66DAD3740AA00240ECC76228C10CE77,
	UnsafeArrayCPUOps_Parallel_For_m84B4D0894CCB708C430007DAABE5D0389B3F8F7B,
	UnsafeArrayCPUOps_Neg_mD5FF144DFCD10B3454DF0442E729EC82940F989A,
	UnsafeArrayCPUOps_NegInnerLoop_m6C1788DA3E7BF7A415D46E70B5D409AA5B93E4E1,
	UnsafeArrayCPUOps_Relu_m49100959684DA93B5D9D3E3930E4462E9F375C46,
	UnsafeArrayCPUOps_ReluInnerLoop_m6B45FCC4D76C2C6210578C4FE3316D07B0DF799B,
	UnsafeArrayCPUOps_Relu6_m58B14675AE2C5801147BB47B880E407AA3853834,
	UnsafeArrayCPUOps_Relu6InnerLoop_mB3FBCA71CE94E384AD6BD89FA84BD428F6E18AAD,
	UnsafeArrayCPUOps_LeakyRelu_mE4A8360129A4FB8427E81B3CC13DD57BDAF3E9A2,
	UnsafeArrayCPUOps_LeakyReluInnerLoop_m0D0B3F88BE67889D238D83560A817BCE3879E2B3,
	UnsafeArrayCPUOps_Elu_m929FD08AE0C95C2854BEE5025C242EDF1A5001AA,
	UnsafeArrayCPUOps_EluInnerLoop_mE8B136B8B36B17DA3F2D862FF91A0BD4B4DD7E1F,
	UnsafeArrayCPUOps_PRelu_mA25725FED08ECD40733208ED397DE894A65B84B7,
	UnsafeArrayCPUOps_PReluInnerLoop_m61AF43C44A28E2899A4544D824EF5D54F9419F8F,
	UnsafeArrayCPUOps_Softplus_m95200838ADB109043691978F9F4056ACA3D9EB1E,
	UnsafeArrayCPUOps_SoftplusInnerLoop_mE279CE2E6081BBB4990FD5217EB0FA9666780274,
	UnsafeArrayCPUOps_Sigmoid_m8C8734F461206D0A2A5F65DE4179DAFB09A74C5D,
	UnsafeArrayCPUOps_SigmoidInnerLoop_mD4A67752FB567DDFDBB14371C18611042BE1C348,
	UnsafeArrayCPUOps_Swish_m45828B553276FAC8AA1E13B263AD16DC3FD23163,
	UnsafeArrayCPUOps_SwishInnerLoop_m9CDC66486D491FD4618C76047C9154C208EC9CB4,
	UnsafeArrayCPUOps_Exp_m739D2C97D32D906D1998B6FF96542716F00B8908,
	UnsafeArrayCPUOps_ExpInnerLoop_m37D40A4FAC59A468730044DC6773A5DC7629CD9C,
	UnsafeArrayCPUOps_Sqrt_mA8B0FB9E5ED29890FD156501487C391F3040A6CA,
	UnsafeArrayCPUOps_SqrtInnerLoop_m2CEBFE05B848755EB12C48DFD396E7205CDC5ACB,
	UnsafeArrayCPUOps_Tanh_m4839A4CADB03CC46AB419D73D746B92FAB9C246E,
	UnsafeArrayCPUOps_TanhInnerLoop_m7B8D7C56227F9BCC3B1C187F5EF6A5A5247E61EF,
	UnsafeArrayCPUOps_Acos_m9239E73248620D97B944437C7993CEECA6574A2F,
	UnsafeArrayCPUOps_AcosInnerLoop_mE0CDB9533E38CE347087B0E0F8B1AE8A61E360AC,
	UnsafeArrayCPUOps_Acosh_mCF2238FFF3A11F70A87ED578C5B72CEBFEE0D02C,
	UnsafeArrayCPUOps_AcoshInnerLoop_mBF74D6DC185508C952F8FE0FFB8B977E41DE31FB,
	UnsafeArrayCPUOps_Asin_mD5CF4C69E4137EE88A0567333CC4DD8E415A6099,
	UnsafeArrayCPUOps_AsinInnerLoop_m8F9908EF7781D8B81A9D2E2BBD04744B4C287163,
	UnsafeArrayCPUOps_Asinh_m0594B5D29C43DB289ACB181C12B217A27A416CFA,
	UnsafeArrayCPUOps_AsinhInnerLoop_m2E11971A02E5568D9DC1D8C5CF43E03F87FAB85D,
	UnsafeArrayCPUOps_Atan_mCF62F81B42FBCA14683CC2FB7432D0FCA601F2C5,
	UnsafeArrayCPUOps_AtanInnerLoop_mCCF9BF362D8F16D679E09C6ED37BF2B973233B76,
	UnsafeArrayCPUOps_Atanh_mAE1DD6C8996379DFCD1B019273B79BCC997211E1,
	UnsafeArrayCPUOps_AtanhInnerLoop_m6C0A851D520C3C7E458E1FB2BA174E3C347C5CE7,
	UnsafeArrayCPUOps_Cos_m4E2C40E23180BB6C3A874BE43F6C1D97C6F1ED17,
	UnsafeArrayCPUOps_CosInnerLoop_mEDBB5106B465450488B7D9EEA14C748F6384B286,
	UnsafeArrayCPUOps_Cosh_m1D3FF6F22379C6AF40C50267D2FC7975619FBF70,
	UnsafeArrayCPUOps_CoshInnerLoop_m045132C78F55E6A21EE62651978E115214DBCE4B,
	UnsafeArrayCPUOps_Sin_mE660CC77C4E724A3F57735B2476271D31B6D317D,
	UnsafeArrayCPUOps_SinInnerLoop_m4B813A12085521B210614AEE1815AF4C812B454A,
	UnsafeArrayCPUOps_Sinh_m2E69651C85D97C23FBBE3C710BC391F7D6C9E0CF,
	UnsafeArrayCPUOps_SinhInnerLoop_mD7CB993437D3EC507767389E3299C6E62E71509E,
	UnsafeArrayCPUOps_Tan_mC4D0579956E1CCBF4D5361BBB7BD7F339119EFCA,
	UnsafeArrayCPUOps_TanInnerLoop_mF8F134BA41A43B6763E2E67F8DF1E408C8285207,
	UnsafeArrayCPUOps_CanUseModuloForBroadcasting_mA631704C465418A3C65625697D4A83AA9B5FC750,
	UnsafeArrayCPUOps_CanUseModuloForBroadcasting_m52789FD469A00F327F9A33DCD6EE87F8593E866B,
	UnsafeArrayCPUOps_ApplyElementwiseWithBroadcast_m3F67AB2A8083C68017436FEADA413193023523F2,
	UnsafeArrayCPUOps_Add_mFF29FC5E3DBFFECBDC69D9CB63924BD6F7871521,
	UnsafeArrayCPUOps_Sub_m254F351273DD7E01AB671ECF895209EFEBAD0F86,
	UnsafeArrayCPUOps_Mul_mB49582B098178F0E9859C9661F646E3C71AD9393,
	UnsafeArrayCPUOps_Div_m1584059267DA73385E2623B4A53B0F15A154C829,
	UnsafeArrayCPUOps_Min_mECAA12FB4B7646A97E974EDEAE4E3F61B58C8447,
	UnsafeArrayCPUOps_Max_m1303B54425BEB44BE573BD9AA6EE4A351D2E3759,
	UnsafeArrayCPUOps_Greater_m0A9D94460B3D953A951E41275EC0E6EDF877A999,
	UnsafeArrayCPUOps_GreaterEqual_m827505ADB854939C3F817041A3B9E83292CF0C31,
	UnsafeArrayCPUOps_Less_m15D91F721F99E8D406D265F053FA325EA2631313,
	UnsafeArrayCPUOps_LessEqual_mBA4C63652464E00F3C8300DE52B0C6026674276F,
	UnsafeArrayCPUOps_Equal_m5810881556FD33D8460C266A7F510C72B50BE811,
	UnsafeArrayCPUOps_LogicalOr_mEE059B8D31AC527A9E52A7E755C4E0523A4DC3BB,
	UnsafeArrayCPUOps_LogicalAnd_m621F950E215381A3883524CA891ADC2EB775FF44,
	UnsafeArrayCPUOps_LogicalXor_m062B2B157887FB3AC9A3FD1E6A5A220D8585A6C9,
	UnsafeArrayCPUOps_LogicalNot_m241B2A794188DCD9168CA82F2128FCAAC3DEDC1E,
	UnsafeArrayCPUOps_Where_mDB5C471809783CBEAFB2F64920E94AC812712C13,
	UnsafeArrayCPUOps_ApplyLogicalOperator_m31E13BD7C342F42E44E05EAE8EEF88B5F9ACAC58,
	UnsafeArrayCPUOps_MatMul_mFD4848A30D62D0AE2E7900EAA20AA19579063D2A,
	UnsafeArrayCPUOps_Dense_m0D226015D8D23F586F7CBA77D157E58DFDE4C134,
	UnsafeArrayCPUOps_ApplyFusedActivation_m5B6C3F39AC831C5B62E5B42EF05D711599A9AEB2,
	UnsafeArrayCPUOps_MaxPool2D_m27318A53DC198658F943D9941234F032C58C7765,
	UnsafeArrayCPUOps_MaxPool2DInnerLoop_m7B7CAC4479616AF48C9AFC9BBABD3ECCB2E115D8,
	UnsafeArrayCPUOps_AvgPool2D_m54F88520A6DDC51061848E12B759F85B08E30957,
	UnsafeArrayCPUOps_AvgPool2DInnerLoop_m8105F575CB387754B10111733BAD3ACD024B4C54,
	UnsafeArrayCPUOps_GlobalMaxPool2D_m22AF46566B85116E24E7FC417FD350A6AF096113,
	UnsafeArrayCPUOps_GlobalAvgPool2D_m91133928115BE52CA9C93B18FC8447692E77C94B,
	UnsafeArrayCPUOps_Conv2D_mA97AE69DA9CFAAAA42288417A0960558D64CB853,
	UnsafeArrayCPUOps_Conv2DUsingIm2Col_m9530E732DDC8AD83AE175402F1C3F6EE9104E195,
	UnsafeArrayCPUOps_Im2ColInnerLoop_m019B137F18A6DCABB363FA02043D122FEC55DA85,
	UnsafeArrayCPUOps_SafeIntDivCeil_mEC907DE1E20A65FA1E14E8FB94EEEAE36FEB2C6B,
	UnsafeArrayCPUOps_Conv2DUsingIm2ColSliced_m2A48DAF0341D2D5C711DA383FF987B71F5239A96,
	UnsafeArrayCPUOps_DepthwiseConv2D_mFA59ED343AF9959D1B8283B6BB9EAC83DD946948,
	UnsafeArrayCPUOps_DepthwiseConv2DInnerLoop_mEB2AC0AD65754AA6915649F6FF9F01271F753647,
	UnsafeArrayCPUOps_ApplyPadding_m98494260DC9A6DDA3B78517BDD281BE12E7008C5,
	UnsafeArrayCPUOps_Border2D_m059FAE78F926A4739137504B4A6F8C579A8DB783,
	UnsafeArrayCPUOps_Pad2DEdge_m0D8D2827435A3672FB8CC834C8E17B008818B4ED,
	UnsafeArrayCPUOps_Pad2DReflect_m8619A3A0376C1419F5BBA5987B5868A42C26397E,
	UnsafeArrayCPUOps_Pad2DSymmetric_m5131C93A5C8C41F44C8316A9ED8D547025F102D8,
	UnsafeArrayCPUOps_CopyAndReshape_m2B196DBCDC78DEADDAEB4D2BC2EC62E5C7AFA8B8,
	UnsafeArrayCPUOps_ScaleBias_mBF7394FF1DA69F5189F6EACA4A26F0777DA0A3F4,
	UnsafeArrayCPUOps_ScaleBiasInnerLoop_mA6C6D4AFC6B356C7D61D09B7B9FCC98C0FD3280F,
	UnsafeArrayCPUOps_Prepare_m6A2A980F58731B008484B81849BF4D80A97E3E5D,
	InnerLoop__ctor_m90AA8AAE1B929E3139213504B0AF58FF692CA5EC,
	InnerLoop_SetState_m5A8D6C900B8A7DA550536CA0675C6D3B611B1F72,
	InnerLoop_SetState_mF2DD4BEAB7006E6058277C99069192A48F1CC76B,
	InnerLoop_SetState_m375B856F5658F5DC6029669F2C1384B4B51669E6,
	InnerLoop_SetState_m1ACF53DED6FA7457A345DD2E02DF6AA1C4A1E686,
	InnerLoop_SetState_m4BE1BCD59DF1A45950CF139531AAE3E24E6A609B,
	InnerLoop_SetState_m0024C8971FECDEE3F3872861CD38CC34C950717D,
	InnerLoop_SetState_m90A0A7FCABA34854BC9EC1D19CF6887CAA6779B8,
	InnerLoop_SetState_m30D2B210D89D7ABB90DB487B2689DAC46D9225C5,
	InnerLoop_SetState_mE02250E3E1F5CB3252C599A783C1DC755DB0082D,
	InnerLoop_NegInnerLoop_m99E7DAF422FEB3E37EC22B9CBEB4A600B85A3D2B,
	InnerLoop_ReluInnerLoop_mAE8BA0F5E0F3EF884FDF893055D6E32F17E1259F,
	InnerLoop_Relu6InnerLoop_m4B8257239DF0C791704820401930E5BFC90E107E,
	InnerLoop_LeakyReluInnerLoop_m55D92177CFFFF94845F730F2B155AA22D1323AD3,
	InnerLoop_EluInnerLoop_m1671C512CF9B16DF4DC1B4686535744AA255E614,
	InnerLoop_PReluInnerLoop_m72B4650872C5D1697A1D59CECF1AF29B6FD83402,
	InnerLoop_SoftplusInnerLoop_m44895086D58C8B70DDB1BA03E7AD18B33532BAFB,
	InnerLoop_SigmoidInnerLoop_mABCBE499F46FF611D86286ACD505739370D7C2E1,
	InnerLoop_SwishInnerLoop_mFAEBBCE3707039F5F2FF62EC2C88C0877451FE77,
	InnerLoop_ExpInnerLoop_m9D39A61F14DA9472DB7712F0CF843D511C0D7D99,
	InnerLoop_SqrtInnerLoop_m05C41F4A145C5ECCE4341F6772597B0A6295C184,
	InnerLoop_TanhInnerLoop_m98C8873738F3DB44C292841456F17BAE73F93B23,
	InnerLoop_AcosInnerLoop_m2705B7098B1D774695F0C72EC89DD59601FAE4FE,
	InnerLoop_AcoshInnerLoop_m27FB1B3A76B4A5FAA622DBACEE149DAF22027DCD,
	InnerLoop_AsinInnerLoop_m39D2D500A3A52F2634DC8D2DF4ADF2ED75B028A3,
	InnerLoop_AsinhInnerLoop_mC264F526724B906B3B8594DF522E950E70D92E44,
	InnerLoop_AtanInnerLoop_mDE0401415498D9A7F587E570D01C64A2665C65F3,
	InnerLoop_AtanhInnerLoop_mF4F3B234691E96729D183EA166D7A8B724980ABD,
	InnerLoop_CosInnerLoop_m7B41C8B2AA3BC55EAA86B28884E96770A4CEA0A2,
	InnerLoop_CoshInnerLoop_mD6EB5F15324C9B7734EDAB5EB621CF331DE431DD,
	InnerLoop_SinInnerLoop_m989C8680D5EFC0DC632C1EE94368EE3A558F6BCF,
	InnerLoop_SinhInnerLoop_mC52F602C70BEB213E9E4854C1EE8778B7C1CB06B,
	InnerLoop_TanInnerLoop_mE083E008BF14AEFACDC70EBE0321D15216802D3E,
	InnerLoop_AddInnerLoop_m4B87635A55FA222A786C5054F921E1BD62832874,
	InnerLoop_SubInnerLoop_mD9BAF08AAED8C375866C235A8634C8113C0F0B5F,
	InnerLoop_MulInnerLoop_mE1E163129F2CF2D77A68D4ED293525A0C09B0E54,
	InnerLoop_DivInnerLoop_mB0D76BDAC01FF9231574DB06F0AC0AAB2927E046,
	InnerLoop_MinInnerLoop_mB9D104A2AF99E8638EE3702ED426180666FCFDDF,
	InnerLoop_MaxInnerLoop_mF425DBC8C292F7D379E6DC880A1863E093E5D49C,
	InnerLoop_GreaterInnerLoop_mC478C5583C0A63F5DCAF9C5050B64B1BBF7FD08D,
	InnerLoop_GreaterEqualInnerLoop_mE7F004EC55A03ABD46B461A7E2B375F261F7589B,
	InnerLoop_LessInnerLoop_m15A352D8320140FC6964C560BB7193DF5A5FDB07,
	InnerLoop_LessEqualInnerLoop_m09EF4C324FCD38D9391D4EB4851E64EB3805730F,
	InnerLoop_EqualInnerLoop_m62448FED1822C9FC3B8157FFFC40CF5D6F9E50E3,
	InnerLoop_LogicalOrInnerLoop_mB01FD048B38C17288557C758056454B7FDAE7903,
	InnerLoop_LogicalAndInnerLoop_m26727D5025664C97A276F3B1C4695A4B0251036E,
	InnerLoop_LogicalXorInnerLoop_m0027F654F7FDFE0401C414BAC2AFA6F748A2B3EF,
	InnerLoop_WhereInnerLoop_m207F368F0C629C539BDED0A4123E60174BBC3027,
	InnerLoop_AddInnerLoopNoBroadcast_m3D9FCEDBCEA35BE33834785E61E0D63B96435D8F,
	InnerLoop_SubInnerLoopNoBroadcast_mF91FCB6073CB6C61CA653FE87E14D5AB3ADEB109,
	InnerLoop_MulInnerLoopNoBroadcast_mC3CCD66DC9AAC253B03151A740DFF8E165AEA556,
	InnerLoop_DivInnerLoopNoBroadcast_mBCAF96DC9493A6A34DD32D9C74118464ABB5384D,
	InnerLoop_MinInnerLoopNoBroadcast_mA0BBD67D8FD543A39415E40EE2ED8CCC82A61263,
	InnerLoop_MaxInnerLoopNoBroadcast_m96AE447E19018F7E70DD4F6F8C005E95D89399C5,
	InnerLoop_GreaterInnerLoopNoBroadcast_m90F21C8F48432CB90DA44A2E4BF5DCEC2A19FFF5,
	InnerLoop_GreaterEqualInnerLoopNoBroadcast_mD0637D406AE9B54ABADD3A1202A47FD67D1EF35D,
	InnerLoop_LessInnerLoopNoBroadcast_m4EF971DEBC22532E3B1B1600AC5A1E7E916A8B28,
	InnerLoop_LessEqualInnerLoopNoBroadcast_m98A5421F8D02937277D371CFD90772AA158C7B07,
	InnerLoop_EqualInnerLoopNoBroadcast_mF87FDC22BBB33916D2ECF46EFA915D86CA228416,
	InnerLoop_LogicalOrInnerLoopNoBroadcast_m24A7D03DE7B08275983AB0D92B626E307E349F90,
	InnerLoop_LogicalAndInnerLoopNoBroadcast_m62D0D6AE0CB9A421A3348E21F2CB2EB0EACF04F5,
	InnerLoop_LogicalXorInnerLoopNoBroadcast_mA3D78F9C5F40CD20E0E2B9DB856E15FC8FE4301C,
	InnerLoop_LogicalNotInnerLoop_mE4198B63C58DB77033288AF4EA89F2A26B98316A,
	InnerLoop_WhereInnerLoopNoBroadcast_mFF3A30F1DD1ECC9AEFA6CA5511EBFD9460200E21,
	InnerLoop_ClampHWToTensorShape_m01D6B38AD0344A35F000D4375B76A51A9848D13E,
	InnerLoop_Border2DInnerLoop_m6005DEDAC6E30A0798BE8207467DCD79E015429F,
	InnerLoop_Pad2DEdgeInnerLoop_mD8180A9E50681037FE5E9EF7C51B160BC133303A,
	InnerLoop_Pad2DReflectInnerLoop_m89AE17EE73F82B55C4F98C3020C3ACAE6E2D199E,
	InnerLoop_Pad2DSymmetricInnerLoop_mE56C881AD0F1298E82456BF1256F53131D63ECAF,
	InnerLoop_ScaleBiasInnerLoop_mF6F1AA45F7403B99C3196E271157DB271C7C430D,
	InnerLoop_Add_mB579CAD1F4EB5BED80BFBCC078B56C8BEF605DA3,
	InnerLoop_Sub_mF1D806C3357D5681F080DC9E6C763A9102EE0800,
	InnerLoop_Mul_m2829964732800D56D74532BC16C3932B85CDD2D4,
	InnerLoop_Div_mB50D78CBDC8FB8D31ABE4778E4C544605F1C6CE2,
	InnerLoop_Min_mBA61FE26C30AF9CE2F4DA357B119B71D1EA7EBDE,
	InnerLoop_Max_mBD7A3391E2C8A1FF8BA5549007FD82C8EEF0866D,
	InnerLoop_Greater_m7D09A04069FF5B18E5CF01E198BCF6FFA6D82C57,
	InnerLoop_GreaterEqual_m57726CF3DDC275AD4E0F1E41D55C8C3A7ABC1BAF,
	InnerLoop_Less_mBBA88912C8E84E691BF6526F52B8F9283586D6D1,
	InnerLoop_LessEqual_m0D9A07697D76E3EBD9B1B4CEBD259968A2FC3F9F,
	InnerLoop_Equal_m3254D9F7F097AA120AEBEE133F00804D4D558BD0,
	InnerLoop_LogicalOr_m805022A7735B812959439FFC05B106E6A8635591,
	InnerLoop_LogicalAnd_m12AFD5CBC8A071C51121F5D0A9177532E64B2635,
	InnerLoop_LogicalXor_m72BA620BEA66D6801567EFCC7A960A71DAF98680,
	InnerLoop_LogicalNot_mC467DE3D1833E3ECF7B395F65CA4F87EFB76F4AF,
	InnerLoop_Where_m4D568DB64BE8E78F91DF9FD5766F0B959B891B7B,
	CompareOps__ctor_mD0513A39E93C08BF8A7870174C860F18ADFC3287,
	CompareOps_PrepareModel_mEEF4F3B7A88621BF70B80FB62A5EA1948876B386,
	CompareOps_PreExecuteLayer_m0059124D01F1DF5B803E36816EC9FF796A93210C,
	CompareOps_Unity_Barracuda_IOps_MatMul_m47D4A7B36FB6F94E7F3BE295ADFDE1E385CA2097,
	CompareOps_Unity_Barracuda_IOps_MatMul_m6769B4266AC5265D93EACF6FEECDF7463B7905FD,
	CompareOps_Unity_Barracuda_IOps_Dense_mCD559B544E8AD5CD5E9088DBF235FC9008004971,
	CompareOps_Unity_Barracuda_IOps_Conv2D_m706901DE9D1BB8E0E1CCECF7F442B995E3E43A88,
	CompareOps_Unity_Barracuda_IOps_Conv3D_mA1D3BA83888440B3BED9DB5C1B357F83A786269C,
	CompareOps_Unity_Barracuda_IOps_DepthwiseConv2D_m64071064DB035DF81DBEB3B2FCDC967501D62411,
	CompareOps_Unity_Barracuda_IOps_Conv2DTrans_mA013A9C72C875E949DE757FE28822396311E0EC8,
	CompareOps_Unity_Barracuda_IOps_Upsample2D_mC01573EC2E4883ADB7B9F60F6415BCBCE4D228FD,
	CompareOps_Unity_Barracuda_IOps_Upsample3D_m11F7B9CF46EC84B4C64AAB727E3624739C86F8BF,
	CompareOps_Unity_Barracuda_IOps_Resample2D_mDB9A51D8A3C20D4327B26AF32377C55713EC1D8B,
	CompareOps_Unity_Barracuda_IOps_DepthToSpace_m6F58B10AA91B3E4FC5A50BCDE0FD791227B43FC9,
	CompareOps_Unity_Barracuda_IOps_SpaceToDepth_m16C621B6ECF7A0227E75C4F8FC7BD1E9DD13DC25,
	CompareOps_Unity_Barracuda_IOps_MaxPool2D_m33860BBA6C8E43D0B12EE2F02F7E5B6F6368B228,
	CompareOps_Unity_Barracuda_IOps_AvgPool2D_m50876AB22BA85E9B97891E6AD4989D1DA8F82118,
	CompareOps_Unity_Barracuda_IOps_GlobalMaxPool2D_mC61CB69F06E816DC8F4399D9E6F5D75C04C41666,
	CompareOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m0DAD3906B8FA7D4A5AC298962879BFCE5AFFA106,
	CompareOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_mEAA8327BC027C091A93ADFEF1B0B15C0178425D6,
	CompareOps_Unity_Barracuda_IOps_Border2D_mE293736FC4E548F76B31EF3169F1C8638FF940DA,
	CompareOps_Unity_Barracuda_IOps_Border3D_m31DE398337D47BCE7DCA28DC814854DE07662DDE,
	CompareOps_Unity_Barracuda_IOps_Pad2DReflect_m982A1951BC5816943AC54BC8C4FEBD2CBE9A3377,
	CompareOps_Unity_Barracuda_IOps_Pad2DSymmetric_mD5A2E1FDE1474E9B6AC8FF2EE2A55CA2D9FDED69,
	CompareOps_Unity_Barracuda_IOps_Pad2DEdge_mA2ABC4A69778FDD8053477C59ED2D3F642299450,
	CompareOps_Unity_Barracuda_IOps_ScaleBias_m9FB9BAC991FB6EC42CA94448359327DFD2F2C4F4,
	CompareOps_Unity_Barracuda_IOps_Normalization_m83CE3C6C0D96D6B380794A77CD86DF82C372B952,
	CompareOps_Unity_Barracuda_IOps_LRN_mF6700A8BF4105FFA61A51752B9D999FFBC689840,
	CompareOps_Unity_Barracuda_IOps_Dropout_mE8E64BB419441CFDC463A8B6BC2C1ADA35E2E327,
	CompareOps_Unity_Barracuda_IOps_RandomNormal_mDB3231D58D838BB64CC39B929CFA22086C12F48F,
	CompareOps_Unity_Barracuda_IOps_RandomUniform_mB7743AEC902935278DE56ECE52E938B3636BC4F3,
	CompareOps_Unity_Barracuda_IOps_Multinomial_m47F445DB46D8F6CD121137C2CAB3E0EB77170037,
	CompareOps_Unity_Barracuda_IOps_OneHot_m6969468DC09304D6FE236D6600A56F2001E0383C,
	CompareOps_Unity_Barracuda_IOps_TopKIndices_mF465CDB4434A265398E577839225FF4DEAD045CC,
	CompareOps_TopKValues_m8A13CFD4BA53E348BA39437770F859A462367D1A,
	CompareOps_NonZero_m7B22C8BE58F0D5D7918D830BB688C0BB56BF3779,
	CompareOps_Unity_Barracuda_IOps_Relu_m0E6B0B10FEB41E6E25F5A868BA40B1F2BCA89306,
	CompareOps_Unity_Barracuda_IOps_Softmax_m17E16D8589A876B0E71F9CCDCE0DB334627EBA64,
	CompareOps_Unity_Barracuda_IOps_LogSoftmax_mA926ADF06D7BA77067C368C7C535FA52CDD6EC20,
	CompareOps_Unity_Barracuda_IOps_Tanh_m8E023B22FEC3C3CFF95516D7F8C34A6D63D9F9DC,
	CompareOps_Unity_Barracuda_IOps_Softplus_m2B4E6537CB1855E483590028595D64C51B945DD4,
	CompareOps_Unity_Barracuda_IOps_Sigmoid_m02FAFB0EDCB45F83EB2935C7EFFC01287FBC50CF,
	CompareOps_Unity_Barracuda_IOps_Elu_m82856E3B4F5FDC8C6A3B36A28C02FEB071D273DE,
	CompareOps_Unity_Barracuda_IOps_Relu6_m59E438532B106D0D80429F6E086B6BB6AD809AFE,
	CompareOps_Unity_Barracuda_IOps_LeakyRelu_m6D748EC797C437392A9829AC64DB861980AD1C3D,
	CompareOps_Unity_Barracuda_IOps_Selu_mC39C86D9BF1509383F099B2C08A271199A65F02A,
	CompareOps_Unity_Barracuda_IOps_PRelu_m70A51D51ED5B118CDD38D0697F9B8FB3F1D135FB,
	CompareOps_Unity_Barracuda_IOps_Swish_m8662040F0FAB487B081C01A0EC488B8A26A833F3,
	CompareOps_Unity_Barracuda_IOps_Abs_m703D3BCACCA0F14A8F4CBDB4C9CE3C0252E27E21,
	CompareOps_Unity_Barracuda_IOps_Neg_mC36E0D21A7405C96B0F13D37B92F3896900352C6,
	CompareOps_Unity_Barracuda_IOps_Ceil_mBF6ED3C73FFD42229B338DCE593F04ABE4487917,
	CompareOps_Unity_Barracuda_IOps_Clip_m23B24083040B38CCD464FFFA49A592289336D44D,
	CompareOps_Unity_Barracuda_IOps_Floor_mE1C043A9D88D9C27034ED370F6C9F01366166EF3,
	CompareOps_Unity_Barracuda_IOps_Reciprocal_m5BABCBAF1237EBA0CDB53DC1DA27CFA620D49131,
	CompareOps_Unity_Barracuda_IOps_Pow_mAAEDAFB799C7EBFF2011BF4C896610749F6469B5,
	CompareOps_Unity_Barracuda_IOps_Exp_m53B4614C3C577AC3D17A9178F51886453B5148B9,
	CompareOps_Unity_Barracuda_IOps_Log_m3BD7BC31AF4017F67EDA65DF45710678F29B920C,
	CompareOps_Unity_Barracuda_IOps_Sqrt_m765B1DC1E503628DC197F3EDC8E9CEDFC9C825D2,
	CompareOps_Unity_Barracuda_IOps_Acos_mC37AF9D4354D1E09CCEC52C5CC5859DBA282843B,
	CompareOps_Unity_Barracuda_IOps_Acosh_m7FB4A46C45AFB7F151826D3C81DA3A022DAB752B,
	CompareOps_Unity_Barracuda_IOps_Asin_mF7A07F17B723CDEE80A157738B4BF766AB28420D,
	CompareOps_Unity_Barracuda_IOps_Asinh_mC346B56287770876F5BCB89B20FF6D3C29B3C5CD,
	CompareOps_Unity_Barracuda_IOps_Atan_m3649EA87065EDC14C3BDB2E409DD05AAFAE75988,
	CompareOps_Unity_Barracuda_IOps_Atanh_m69BBE77A59F1DE8D324ED632D789048232836C76,
	CompareOps_Unity_Barracuda_IOps_Cos_m4F9DAD24A1BD9B3BC826F2F038F3A660858B37A2,
	CompareOps_Unity_Barracuda_IOps_Cosh_mF6FECE5B8BAC3B4789649BDFACAEB79BE9EFC778,
	CompareOps_Unity_Barracuda_IOps_Sin_mAA8C2348C84AF0BF6DF08790F5AA7112407F883F,
	CompareOps_Unity_Barracuda_IOps_Sinh_mE93F003179D67BC2637B840C5188060FD3620ED4,
	CompareOps_Unity_Barracuda_IOps_Tan_m170BB3234A71F91E339D4B9026F2291428518F4E,
	CompareOps_Unity_Barracuda_IOps_Add_mF7027E415E1998B50D01CD8346BA26B29A7E5F06,
	CompareOps_Unity_Barracuda_IOps_Sub_m2434F35B3FEE8B76CBAD5BCED0299ABF39CCA9B1,
	CompareOps_Unity_Barracuda_IOps_Mul_m87D53C9A570F3C004A8AA6384098CC7D32DAB620,
	CompareOps_Unity_Barracuda_IOps_Div_m3ECC9ABA6DD163DF0BBD80D887F73A7EC409BF7E,
	CompareOps_Unity_Barracuda_IOps_Pow_m96920E0597BD96A5973587D4F9C3660F233B5A66,
	CompareOps_Unity_Barracuda_IOps_Min_m3250C3B4439456084A97509D9D8D4FEE6ED7DD6B,
	CompareOps_Unity_Barracuda_IOps_Max_mE9BB6573A8C63535F12DD41575C69269D33B61F0,
	CompareOps_Unity_Barracuda_IOps_Mean_m8AE25DA5AEDDB493B32FACF1855D6CE7B2B54CDB,
	CompareOps_Unity_Barracuda_IOps_ArgMax_mA1F977C04F06027185984BB490C93F6347D62363,
	CompareOps_Unity_Barracuda_IOps_ArgMin_m0972F86A2DE29B4C5E716BA70428652D341BFF55,
	CompareOps_Unity_Barracuda_IOps_ReduceMax_m55883E0F8B920E06E1CAB3C96985A145248DA653,
	CompareOps_Unity_Barracuda_IOps_ReduceMean_m0859EA456F573C3C1F931DB880D3703BCB966425,
	CompareOps_Unity_Barracuda_IOps_ReduceMin_m52CB6DA1DB46F5F3697E28BF4CEC90652F209321,
	CompareOps_Unity_Barracuda_IOps_ReduceProd_m64F7651625021FAF5DF9EC42C5F035F294CBA080,
	CompareOps_Unity_Barracuda_IOps_ReduceSum_mEECF93F75011033F7DB858862ADB38B16D0E036D,
	CompareOps_Unity_Barracuda_IOps_Greater_mEB64A94D711BE36DF15CAA58824968B015A795F3,
	CompareOps_Unity_Barracuda_IOps_GreaterEqual_m97D24E43675F3B03FD7FC5A091256B92C37F9163,
	CompareOps_Unity_Barracuda_IOps_Less_m7D6728A8CA44A3FB62659311259C3028CEC9D62D,
	CompareOps_Unity_Barracuda_IOps_LessEqual_m28B55BFB405F6184564A7CD3EDC9AAE6BBAD79FD,
	CompareOps_Unity_Barracuda_IOps_Equal_mDF85287F1297A74CBDF7E3C8B7FFC916A063A8D1,
	CompareOps_Unity_Barracuda_IOps_LogicalOr_m22FD4218F4CF2F19AFD0C3951EC00CC44F94F3D0,
	CompareOps_Unity_Barracuda_IOps_LogicalAnd_mCA126628BFFCC7E7B3BDE86A4918EFC5F69F5DC2,
	CompareOps_Unity_Barracuda_IOps_LogicalXor_mC874A52DAB261AF2102F4E3130C529B0CCE4473E,
	CompareOps_Unity_Barracuda_IOps_LogicalNot_m66D2F2E52E9F518F572C7822CC8FC62342B49A88,
	CompareOps_Unity_Barracuda_IOps_Where_m5EB05CF60248D7848FAE00602F3FE042D1169A57,
	CompareOps_Unity_Barracuda_IOps_Flatten_m450142D087C416E9067A356016826688B67B2097,
	CompareOps_Unity_Barracuda_IOps_Reshape_mD49954DB82A6D8169089399C0FD67CD326E810E4,
	CompareOps_Unity_Barracuda_IOps_Expand_mF44A9939F7721C2C138577D3A5749B1AC6E9C776,
	CompareOps_Unity_Barracuda_IOps_Transpose_m3FA0D366A522AC3FAD6FF56B156392D7AD3B2016,
	CompareOps_Unity_Barracuda_IOps_Transpose_m6F30CB80D74A5FDB2CCD3649FB48FCF87A1421D1,
	CompareOps_Unity_Barracuda_IOps_Gather_m0D5C497B21DE3F19EC857DBEFD09722D01FC9C30,
	CompareOps_Unity_Barracuda_IOps_NonMaxSuppression_mCBD4658D27C60933CFDA33E3B1EF00B6F28F8EA7,
	CompareOps_Unity_Barracuda_IOps_Concat_m22B578B3616BFAF2F2ACBF9E28BED00836FE22E0,
	CompareOps_Unity_Barracuda_IOps_StridedSlice_m637922AA84F6ED274CD0BA776B2EEB6D5A599953,
	CompareOps_Unity_Barracuda_IOps_Tile_m3B0CB3DCAB3EF34D7DA2F659A7F845672BEAD438,
	CompareOps_Unity_Barracuda_IOps_Shape_mC9BB759CB49117FB173BCB030C671F3BB41DBF04,
	CompareOps_Unity_Barracuda_IOps_Copy_mCFC118D3954CCFE25B121896FA2180348EF39886,
	CompareOps_Unity_Barracuda_IOps_Prepare_m5FAF2D5F69E2A43DFCD094003ECB58882E984B65,
	CompareOps_Unity_Barracuda_IOps_ResetAllocator_m649F05811E37C18F7103ED068539E73E499A65DC,
	CompareOps_CheckSame_mA3B8EF60555E2B1FF7C66B61ECD19476E0389C70,
	CompareOps_CheckSame_m5846EB93FE01C84A12B84D60CF70774B00B91758,
	CompareOpsUtils_CheckSame_mC9BC762D12A94CBBD33AF68467C677ADF1D67813,
	CompareOpsUtils_CheckSame_m440802C01C815891368E881C93EEB1DA139B1914,
	CompareOpsUtils_CheckApproximately_m2D51F505EC91B5E2E9283A5E8097B35726570D16,
	CompareOpsUtils_CheckApproximately_m1A40B51039FDE82DED4FA2731958090BBEB2BF76,
	CompareOpsUtils__ctor_mCE4346B33A4C48544D5E7E5D7003A6EA22573810,
	ComputeInfo__cctor_m6F7974504A0DC467C8048204A79A622961616874,
	ComputeInfo__ctor_mDA2CA76100396AA8B165A2489AD4BADE53322DD9,
	ComputeShaderSingleton__ctor_mB9105DD9B03946C98D967E42AD551AA351DA177E,
	ComputeShaderSingleton_RegisterKernels_m27C3C699952D5E5090B31EDE88B8500E4981A524,
	ComputeShaderSingleton_FindComputeShader_m06887DA5CE64BDBFFDA82FAE4E2DE98E04B6CAC4,
	ComputeShaderSingleton_FindReferenceComputeShader_m2293D0ACFB7B2D47CF16E59CC479B1312193CFF6,
	ComputeShaderSingleton_FindOptimizedComputeShader_mBA83695176DD3FEA1A308BF35E9BB73508511D64,
	ComputeShaderSingleton_FindComputeShader_mBD994F8F77ACEBC963AADFDD832194A116EF295E,
	ComputeShaderSingleton_WarmupReferenceKernels_m400C8F0B2BE0F9369789772066D2BFD37B1717DE,
	ComputeShaderSingleton_WarmupOptimizedKernels_m503BFC32E2B46B8E765C90AC077BDED9E713A1B9,
	ComputeShaderSingleton_GetUsedReferenceKernels_m74F3CD1BC994B53440B4D398C204B8AE630208E7,
	ComputeShaderSingleton_GetUsedOptimizedKernels_m8498206E2713FA109B5E33444854D03731F86F75,
	ComputeShaderSingleton_get_Instance_mCF4C10CCF9C8C2AE9D5D248737EEF6446B64A3BD,
	ComputeShaderSingleton_get_supported_mF695B79F7E8B139EEA22A486C8ECCDA7EAEE3C0A,
	ComputeShaderSingleton__cctor_mE90EE7084687151E0709C509FE2C55C4F5710722,
	GenericWorker__ctor_mAE4C63C351CFBDE990E6D04E9B1B7066B5999EB8,
	GenericWorker_Finalize_m195C157916479BF383619A4C04D964ABFD8AC3F3,
	GenericWorker_OccupyAllocator_m53B2467B323D7AF4E39610BBC3543C185F30DF0B,
	GenericWorker_ResetAllocatorIfStale_m3E741519E2ACCAFE60F1BF73C4A62EBFE2835A6E,
	GenericWorker_ResetAllocatorIfStaleAndNotOccupied_mDEE5670676FE6F34073138D588B5FA7B26129979,
	GenericWorker_Dispose_m513708C181C4A6545625F59662D300312D585D80,
	GenericWorker_PrepareForInput_m80A13C3C7216E19DF808CB5389E7D2ED4291FE66,
	GenericWorker_SetInput_m628F255E6F75AD21D69AE6E5AE0E558226DC6A5D,
	GenericWorker_SetInput_mF88CD88AA1607D927EA9FF49D008DF4848A3D6C8,
	GenericWorker_Execute_m6881C3957CE3B062C5BC485BB370BE8F3D80B5DD,
	GenericWorker_Execute_mA61C50DEAAE2C317638EE43769F5AAACBAC2AC19,
	GenericWorker_Execute_m3763E5033851A6CB9FE1E1DAD8316EF104152827,
	GenericWorker_StartManualSchedule_m81DACB1579E600E49D733A7D660565A8B5C81036,
	GenericWorker_FlushSchedule_m63FE5F051F0C1267105598CBD09C56D8DA354B5C,
	GenericWorker_StartManualSchedule_m11CE506533572F9E99F36E4D3BEA44BDA989B1B7,
	GenericWorker_get_scheduleProgress_m775143C4BD46C43605C4099FB3B4B9F3A6EE84C0,
	GenericWorker_GetAndVerifyFusedActivation_mC99FD7A30DEA43E0A2F53DC50BF15393CD0995F0,
	GenericWorker_StartManualSchedule_m3068003B8498A3F1F060A44345BCC14509931510,
	GenericWorker_PeekOutput_m27159586CFF69D64B2366A80C16E8382535E7A23,
	GenericWorker_PeekOutput_m4FE75A79A5FCF1810C9A4AD91F7D8DF8CB9FEAB3,
	GenericWorker_PeekConstants_m7A08BFF2AFBE98A4BFE0A7972C18B80D3D9A81DC,
	GenericWorker_Summary_m5202B56232DE1A6E46EAF6F5CBA723677EAAFEA8,
	GenericVars__ctor_mC0FFCDAEAE2D010B4429037E9033E7AD070AFF29,
	GenericVars_Finalize_m3448E82C9777E7FC1AC12EEACF5D004FB7A37412,
	GenericVars_Dispose_m547257F57864B6EAED0F99AA1CF679DC92E7FFD2,
	GenericVars_GetAllocator_m0CA00F22EEEF26D203A686FB21574C7DBDA50C79,
	GenericVars_IsTensorOwnedByInternalAllocator_m95ADAEB5829C7494BFD0D28072E9329AA2328642,
	GenericVars_ValidateGlobalInputs_m61228CDB387CCD612514F179C2EA911AB31B5C8C,
	GenericVars_PrepareLayerInputTensors_mC4B28F0EEEB38D8E1100241A330F0B77C2AFEE17,
	GenericVars_SetInput_m845AF12E7DB21F82898575DBA43EE7E4D97F85A2,
	GenericVars_PrepareStorage_m57923219920605659B3E840AF1BCA5099ACD6246,
	GenericVars_GatherInputs_m3D2207E7AC71A104558ACEE2B31DD6E1D709620F,
	GenericVars_PrepareStorage_mF11110D37C1E915F60A5216A5C594234BEB6523B,
	GenericVars_Store_m63074D8BA8EE4908779B9F6EBBED5F66CE6C0F3F,
	GenericVars_PeekOutput_mB25DCDE87F683ABB131ADBDED6FE77C557B033AA,
	GenericVars_PeekConstants_m057AF55DA79C1615EB8661B17FDB0C9CBE86E35E,
	GenericVarsWithReuse_get_layerRequiresStorage_m5AA99F24DDD58CD897542A77A5D33415A954E048,
	GenericVarsWithReuse_get_temporary_m7065B52374C5FD7BD6DCA162D033AB8F0843B17D,
	GenericVarsWithReuse_ReleaseTemporary_m22C528CB8CF55707DE079EAC70243737767A2630,
	GenericVarsWithReuse_PrepareStorage_m31AE3007F39C2B424B3045E3C244E3C8A2F50650,
	GenericVarsWithReuse_PrepareStorage_m21562AFC2C651FCAEBA15BFC7AA96AB1D29E54EC,
	GenericVarsWithReuse_Store_m11CFF862CFF641507E2681A8A748E35280E7186B,
	GenericVarsWithReuse_PeekOutput_m71E880AB5535B0659640DC15C730B0FCD059E424,
	GenericVarsWithReuse__ctor_m672CE05934227AFDBBB7B49727E6C459C519153B,
	GenericVarsWithPreallocation_PrepareStorage_m46147904D4A958F3E2CD7E6CA14CF0CF8C8A91F3,
	GenericVarsWithPreallocation_GetAllocator_mCFE6550D3317BE552703A85CB5C20B42FF1935C1,
	GenericVarsWithPreallocation_IsTensorOwnedByInternalAllocator_mDFCD3B0CA7EA67D157D2A1C63765A6C5EB2F666E,
	GenericVarsWithPreallocation_Alloc_mA36B9462425332266D29A35674C1F0A71B8F3D61,
	GenericVarsWithPreallocation_Alloc_m3B2A19018BE8F2E57918A088D5FD4127521F3DA2,
	GenericVarsWithPreallocation_MoveToDevice_m716C4BDFC61AE18190066935E5D8C4AA45759DFE,
	GenericVarsWithPreallocation_Release_m6AADC313CF4BA4C21E73630CD926D2D835D305AC,
	GenericVarsWithPreallocation_WaiveOwnership_m8D123E79C7A7DE6DE5EA699A4BAC27640CD3CA40,
	GenericVarsWithPreallocation_Reset_m6DF8BA5CD839E70619B1091F57F9F7202A1401B5,
	GenericVarsWithPreallocation_get_busyBytes_mA04C2A7C73194294548CEA928D9A2C2E37D12D23,
	GenericVarsWithPreallocation_get_freeBytes_mA034834F197E0B87B3D9447A7E3FB5BF60B83337,
	GenericVarsWithPreallocation_get_totalBytes_m57A5513482F2B420E4B92C82D688BD5FFAB788FE,
	GenericVarsWithPreallocation_ToString_mA619F33B2E98D4899C564B64B07C72A1BF147711,
	GenericVarsWithPreallocation__ctor_m2B74D5AAA60B1953C9E75DF8E3C53A4691FC604F,
	DefaultTensorAllocator__ctor_m92A7D86A505F3851A3ECD71EF50A9A4C578BC842,
	DefaultVars__ctor_mCB9E0CF391F15994D294D1F672E42AA4A4EE05A8,
	LinearLayerFusing_IsLayerLinear_m5BC88DAC5161F464F08D6B5EB60B49CB17CBEBAE,
	LinearLayerFusing_IsLayerLinearMathOp_mEA474199FA4F8BABA7C3B8C4942A4F363BAB3049,
	LinearLayerFusing_AreLayersFusable_mB82B26CE638512FCAF0BFA3C33FCA25F06CBFF27,
	LinearLayerFusing_Add_m8199CB92A56D5CB0C746242FDB59674A70B1F2D7,
	LinearLayerFusing__ctor_m0F1951E2278E305DE1B5E06D789AB0FF6B2413B7,
	LinearLayerFusing_FuseLayers_m68F54D8B61A959B7BA3CAF99B046E62F21EF30CF,
	LinearLayerFusing_U3C_ctorU3Eb__6_0_mDA46F1B1031B3FC52045DCB4B8B7F6D4D98288AB,
	LinearLayerFusing_U3C_ctorU3Eb__6_1_m4654EAC356A07D2038381637D7110EC10F735D71,
	LinearLayerFusing_U3C_ctorU3Eb__6_2_m543A65B35D31CA1D5199FCF5FA375C988CB05913,
	LinearLayerFusing_U3C_ctorU3Eb__6_3_m232F2509296547D5594F7B4BF399CBAAB2E15F08,
	LinearLayerFusing_U3C_ctorU3Eb__6_4_m67A89CFD6663559566951F1CB65ED87566A1DFED,
	LinearLayerFusing_U3C_ctorU3Eb__6_6_mAFA9BADEEE60976F82E954B05B08F2E1B2856332,
	LinearLayerFusing_U3C_ctorU3Eb__6_8_m4314831DE65064E1A12C8E20CA4D490E78EA43E3,
	LinearLayerFusing_U3C_ctorU3Eb__6_9_m06330F3740B500ED4967D4B4EDB40CB9214EAE31,
	LinearLayerFusing_U3C_ctorU3Eb__6_11_mDBA588855B800B18E1A7E964DDAFBF0FEEAFE531,
	LinearLayerFusing_U3C_ctorU3Eb__6_13_m0EE0F4F09D73C87D57F7C117D9D1114EBED5C622,
	LinearLayerFusing_U3C_ctorU3Eb__6_14_m72BE4842B656352A2D1C58B03BFBC3E3951AFB6D,
	CSharpBLAS_IsNative_mE8BEF8DA98F5ADF72765D7317AF7C5588C026378,
	CSharpBLAS_IsCurrentPlatformSupported_mC2063121522AFA221DE17E0E084AFFFDB9C83EC4,
	CSharpBLAS_SGEMM_mE0456EB9F29FBDC3CB3018512B6E345D19651BDC,
	CSharpBLAS_ScheduleSGEMM_m091160289526C96644E13FD81518E5D0B1238C37,
	CSharpBLAS__ctor_m0C242A391BDF27ADBD0AE8A4BAA9566C50CA5BD6,
	MatrixUtils_CopyBlockWithPadding_mD354682BE43DA15A535E5EABDA4F774A4D88DFF3,
	MatrixUtils_ClearFloatArray_mAE6A95ACC75A24EB2CDC75C55142DA2109231E6F,
	MatrixUtils_CopyFloatArray_m7B5AD269A879C4278B7686768F7865CA034E6CD4,
	MatrixUtils_CopyBlockWithPadding_m0BFC8E056BFE8E0F63D052EDDC3A4572257C87A6,
	MatrixUtils_CopyBlockWithPadding_m2C89C2C946B15B58865FCEDE51A4CC7F69D6FED4,
	MatrixUtils_CopyBlockWithPadding_mF19C6BCF0EF81A60B543B27CA0D1970B9236A24D,
	MatrixUtils_MultiplyBlockUnroll8xhPadded_m0A0D58EA11370D512A7374B322D1E761C1D20B10,
	MatrixUtils_MultiplyBlockUnroll8xhParallelWithPadding_m52E34C4FB991347BCF47DADED2D464610645799D,
	MatrixUtils__ctor_m54258F6FB099658491445F077F1D1A67F8ECF0FB,
	ModelAnalyzer_GetDefaultInputName_m6AA28FDAF3F121A03A4024B1E6EC9060D37282E3,
	ModelAnalyzer_GetDefaultOutputName_m12859C0CC9B27BD142BE668352B3E803293F1FC5,
	ModelAnalyzer_ListTemporaryTensorShapes_mA3E952C1CFF5BF6295866BE14FC35BFAE046DFAF,
	ModelAnalyzer_ListTemporaryTensorShapes_mA29237F20ADF996CA2ACB575760E7F4B21B6DF6E,
	ModelAnalyzer_LegacyGetXYRanks_mF003AD7C83ECA7824F341B1E46BED1F8E8DF5CB7,
	ModelAnalyzer_TryGetOutputTensorShape_mACC5D85FD0ADBA115BE71827305434995EBDDA24,
	ModelAnalyzer_TryGetOutputTensorShape_mF92A198E6041EF54425D9F5BC49BA8BDBEC7D62C,
	ModelAnalyzer_FindLayerByName_m284E5E018890143CF61D55474C0BAB18140A3DC7,
	ModelAnalyzer_FindLayersThatRequireStorage_m94296631F60D61E0FDF7DA9FD21DECC3767218D4,
	ModelAnalyzer_FindUpstreamLayers_m9DF3AD2DFE84C6B3C1D78DCDAC6B934BC29E68A4,
	ModelAnalyzer_FindLargestNecessaryTensorShape_mD7942ECB78B1D3DC80C1F0922079C3823BFC7867,
	ModelAnalyzer_FindLargestArgumentTensorShape_mAB70B531AA0B38A4F9A96450C547E96589BF96D3,
	ModelAnalyzer_FindUnusedLayers_mF2E59C9EEBBCCB6D6A1958B98BE58362F88B072F,
	ModelAnalyzer_FindBrokenLinks_m9E3EE48110E605A68BAC3F71D49372D81F5D1BE7,
	ModelAnalyzer_FindBrokenLinks_m5F19B9C5160C5BCFD98A5BFC55578896DCCF833A,
	ModelAnalyzer_FindBrokenLinks_m2F65B82531A860655637DE2EDC6C1E5370451D86,
	ModelAnalyzer_FindUnconnectedInputs_m571AA1EF0A8EFFFA687133A4B25ACCD19C0380F0,
	ModelAnalyzer_FindUnconnectedOutputs_m41B779735EB080B5025002E303A0E66907215FBA,
	ModelAnalyzer_IsLayerBroacastable_m9172CC18D870F4D28FF44D60481D6C0273E014DC,
	ModelAnalyzer_IsInputShapeAcceptablyKnowForShapeInference_m1F45CA1E9F7F8B6F03B5BED2970DCECBFEAC503F,
	ModelAnalyzer__ctor_m11A4E5DC70D73C90C233C6DF26E567D2E0B25479,
	ModelOptimizer_Optimize_m7546FB27FBC5940754016A31CF3594F996B5C345,
	ModelOptimizer_RemoveUnused_mF3F3B2A9139D3C560681A04CD38B3EA0AFB2CEA3,
	ModelOptimizer_IsLayerSupportingActivationFusing_m01B687CD33A453967F7348A9B3A6F6781F20903D,
	ModelOptimizer_IsActivationFusable_m8AED95AD1C0EDF641B5CF331AF770E4565B8B328,
	ModelOptimizer_FuseActivation_m501A51F53DF5AB1D1319FEBFC7DC5F716F14595D,
	ModelOptimizer_FuseActivations_mFCF536AF8F97C104984D3256D59C2B5426DCA218,
	ModelOptimizer_IsPermutationNoop_mF4D93B9088715F4C7C02A4284112FCB60D6A7003,
	ModelOptimizer_IsLayerNoop_m9E2108E393B43CDA6E738DB526ADF096DD6FCA78,
	ModelOptimizer_RemoveNoop_mAF391887DAC3628E58458373779F82558AE5E7AD,
	ModelOptimizer_IsLayerConstant_m7275D101312410014D60E6F91D782F1103BAE580,
	ModelOptimizer_IsLayerFusedActivation_m44D4309A91AEE8BD138F7E57983B9423731B527B,
	ModelOptimizer_LayerComplextity_mC22F6CC14FCF0C175A9C6388B9228FA84E8C6C09,
	ModelOptimizer_FuseConsecutiveLayers_mB6DB1BFAC0DA51AD46B7DCFF278B41AFE47BFC63,
	ModelOptimizer_AreLayersFusable_m1FF705896BC2988ADE9CF6E0AFF4485198FC27D6,
	ModelOptimizer_PackConstants_m00E4D212B20A4DBCBA5A4C7551D1CBF6DE4C1EA4,
	ModelOptimizer_UnpackConstants_mEA0ECDCD7A83B4B0EF6E6249D7B1E5C7BAA44837,
	ModelOptimizer_FuseLinear_m682E25B1671D356073C279C17A6C90ECBD72736D,
	ModelOptimizer__ctor_mBC3769C5A96F60507F7B494604472F6496111B1B,
	ModelOptimizer__cctor_mA48C224FD80E7A2A1031878052C3ECB7BED74FD2,
	StaticLayerOppComplexity_Add_m403524DA67DD1C3EE51345F3AA57E5B47D127E4E,
	StaticLayerOppComplexity__ctor_m98137C7F2485948B1642D37677CC2413C76D9F5E,
	StaticLayerOppComplexity_LayerComplextity_m1DB445ECF9FE8914591EFBE1C0515BC8B37F372A,
	StatsOps__ctor_m1600AA752BB02A01D800AD9BF70729A62BCE6CB6,
	StatsOps_PrepareModel_m092080295A864E7F6137A5CB428ABF69EA9E3358,
	StatsOps_PreExecuteLayer_m025914AE18ACC2AAC374E459F022E0AE8930F56A,
	StatsOps_Unity_Barracuda_IOps_MatMul_mE34B343507D5927DE18ECBEADDA3804A8FB50834,
	StatsOps_Unity_Barracuda_IOps_MatMul_m7982C3746C7D66D1922106734565D68800401AFA,
	StatsOps_Unity_Barracuda_IOps_Dense_mE83127DBB7AEDAF2D381FA338E688DD2BDB933E1,
	StatsOps_Unity_Barracuda_IOps_Conv2D_m61F56604B01E60E651BBF05116030F44CDAC5EED,
	StatsOps_Unity_Barracuda_IOps_Conv3D_m489816163403C3D82640C1ABEA495B60A4C92492,
	StatsOps_Unity_Barracuda_IOps_DepthwiseConv2D_m731FB36D634FF78F3AE2CD94AD369960FFF37B6E,
	StatsOps_Unity_Barracuda_IOps_Conv2DTrans_mBB8377EEDA9A6EC8E4E8C01DADF0BD1717A6BD97,
	StatsOps_Unity_Barracuda_IOps_Upsample2D_mFAD3D3AC56F4658D8B7D7C16E274C09BEC3C46CC,
	StatsOps_Unity_Barracuda_IOps_Upsample3D_m203E74B1B317F5844D0CA51BE8BB61AC61929E53,
	StatsOps_Unity_Barracuda_IOps_Resample2D_mABE919E511FE41D4C3D75477939F71C130191708,
	StatsOps_Unity_Barracuda_IOps_DepthToSpace_mD79F988DD4E7F3AD9A23A1B7C70573E8FB4DF41D,
	StatsOps_Unity_Barracuda_IOps_SpaceToDepth_m722C43EFB6700D499E89822411F3E25DBDC852EE,
	StatsOps_Unity_Barracuda_IOps_MaxPool2D_m80D5DE5C22D6A5CA61B75A6279F79E52F14E8775,
	StatsOps_Unity_Barracuda_IOps_AvgPool2D_m703A940928AEB196FF81B352582DFE4C7CDCFF18,
	StatsOps_Unity_Barracuda_IOps_GlobalMaxPool2D_mA383A5933B4E8FE3A59DA6E3709006C23684B76A,
	StatsOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m9062F33B98308E6C8EF5D287160FBF33B3016DB2,
	StatsOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m4E6DA745ED47F7226D4884A6D3CE31252FC611ED,
	StatsOps_Unity_Barracuda_IOps_Border2D_m4B94FCB323CDC395593901B1E0290AAB8AF0DDCB,
	StatsOps_Unity_Barracuda_IOps_Border3D_m70C9D0A57394DD857C244DBA20F05F6A935B5AFD,
	StatsOps_Unity_Barracuda_IOps_Pad2DReflect_m3337D857B056C402B7AA82695212AE61275529E6,
	StatsOps_Unity_Barracuda_IOps_Pad2DSymmetric_m86BA6C899874F7DBB05EA9DA2BDB73759A49D1F6,
	StatsOps_Unity_Barracuda_IOps_Pad2DEdge_m8DB4E59D347E3E00F1E41531C596B12C5F7FC495,
	StatsOps_Unity_Barracuda_IOps_ScaleBias_m44564B30237696006762FCD63B63B1A47F9F3C0E,
	StatsOps_Unity_Barracuda_IOps_Normalization_m1A1EBE4388B567C1C35E7DE80B2AA4E9BDE523A4,
	StatsOps_Unity_Barracuda_IOps_LRN_mDAF4998BD7ECFE978404E7F3150609D2C470184A,
	StatsOps_Unity_Barracuda_IOps_Dropout_m9EB1513B0F21B0065840E4361B74E97ACEFDCEE9,
	StatsOps_Unity_Barracuda_IOps_RandomNormal_m21FFF48CF6A7B5B1EDF14AEF6062B6D05F7E2770,
	StatsOps_Unity_Barracuda_IOps_RandomUniform_m7591AAE6BD8C0285E0564AD5500290F5DA538671,
	StatsOps_Unity_Barracuda_IOps_Multinomial_m7A855F511FD6456B6F0D64D01A6B21887DC6E1B2,
	StatsOps_Unity_Barracuda_IOps_OneHot_m905E3B1FDFD1958841AFBA67A9D12393DC0858C1,
	StatsOps_Unity_Barracuda_IOps_TopKIndices_mFAC6CB9E59477918684A8A3EB2027D660554FBB2,
	StatsOps_TopKValues_m1CA20375337ED372C9452235501D208B81062ECB,
	StatsOps_NonZero_m79BD5196E12493DAC7EB6566E9B24BBA930311CA,
	StatsOps_Unity_Barracuda_IOps_Relu_m7970A7AC063B0E5B0C2487DF5B10CCC9C0610AE2,
	StatsOps_Unity_Barracuda_IOps_Softmax_m57E026043E92F7D9D8324898AE819A899C73477C,
	StatsOps_Unity_Barracuda_IOps_LogSoftmax_m8623173E38616B5321CA61B823221B7CCE8037ED,
	StatsOps_Unity_Barracuda_IOps_Tanh_m0839187CF54F6C16C2A44509C48BEFFAFD79B308,
	StatsOps_Unity_Barracuda_IOps_Softplus_m5D532E57DDE2AEBC59BDA0CF10AAB284CCF1A6C5,
	StatsOps_Unity_Barracuda_IOps_Sigmoid_m9D8942797A459C1E8071AD23B95082936398654E,
	StatsOps_Unity_Barracuda_IOps_Relu6_mBA894BFDA458E063F59EA1A4FA7CE663234298E2,
	StatsOps_Unity_Barracuda_IOps_Elu_m4B08BB2341802725948B85B2412A9231EEBED588,
	StatsOps_Unity_Barracuda_IOps_LeakyRelu_mB4F61DB8D23F17C1347939E7C1B6B3AA88337417,
	StatsOps_Unity_Barracuda_IOps_Selu_m44D34A848363F2E346235F36C9BA6C5D59108342,
	StatsOps_Unity_Barracuda_IOps_PRelu_mFFDCD3192F2ED0C60C70E97675B460130F960F62,
	StatsOps_Unity_Barracuda_IOps_Swish_m333DBBBC24FD7C44858CE614FF67765E59E9A5CA,
	StatsOps_Unity_Barracuda_IOps_Abs_m3A8009062D4A437A05168E08C6ECF9154CBB10C9,
	StatsOps_Unity_Barracuda_IOps_Neg_m3783871DE5345FC08C5A9FF53A634764EC7A2AA1,
	StatsOps_Unity_Barracuda_IOps_Ceil_m66BF5AB262253A6E6190BB61B51943839282F4E5,
	StatsOps_Unity_Barracuda_IOps_Clip_m3665311842AA4C9CF56E7D1F9BDB7B296B9168C3,
	StatsOps_Unity_Barracuda_IOps_Floor_m2CA137EB7D9859CD2E0F9DF5FE4221DFF5039388,
	StatsOps_Unity_Barracuda_IOps_Reciprocal_m01A7D50B293B9248BA3BDDD53CA69F3505C8F369,
	StatsOps_Unity_Barracuda_IOps_Pow_m4579B9CB01510C01C70785DEB99F98DC18773A28,
	StatsOps_Unity_Barracuda_IOps_Exp_mA0D61B681D00817A6340B5133BCD74E1808CB371,
	StatsOps_Unity_Barracuda_IOps_Log_m9F3C460A7783D042100C871CFEC8941D77980396,
	StatsOps_Unity_Barracuda_IOps_Sqrt_m80D6D94AD76851FE8E87FCE3401FEE8D788976F9,
	StatsOps_Unity_Barracuda_IOps_Acos_mB00C92977CE2CD0FD25555C0A09638EE458E0E5D,
	StatsOps_Unity_Barracuda_IOps_Acosh_m7B1B8E9675268F26E646AD6D31FC673E85855490,
	StatsOps_Unity_Barracuda_IOps_Asin_mA8A41429A4AEA59BACE613108BF1171ED6170E70,
	StatsOps_Unity_Barracuda_IOps_Asinh_mF26A4F1679969A79F67E735BAD2EA015810B7412,
	StatsOps_Unity_Barracuda_IOps_Atan_m38A629706CF20AE4F5061D46153B7D9FE21F9399,
	StatsOps_Unity_Barracuda_IOps_Atanh_m0E4A4E78F56584D7FCE88D98D3ED3273C1379EAC,
	StatsOps_Unity_Barracuda_IOps_Cos_m1BE19BF0891CBF14BC1AA38F69A3B3A8AC6934AD,
	StatsOps_Unity_Barracuda_IOps_Cosh_m179D24D01028AC8BE672AA67980617B8C0E6AE9D,
	StatsOps_Unity_Barracuda_IOps_Sin_m35BC5E52DAECCC093FE7701C6968D735F74A4F4D,
	StatsOps_Unity_Barracuda_IOps_Sinh_m03B663872304CCC60F35CBF6E0F46FC0A3ECDDDF,
	StatsOps_Unity_Barracuda_IOps_Tan_m80353146B4CC286A47B5F09D7C47128F6A0CFAC6,
	StatsOps_Unity_Barracuda_IOps_Add_m91B33DFE08C623DF8F86B6F750C72E9429D04101,
	StatsOps_Unity_Barracuda_IOps_Sub_m92F692B15EACEC9B2CD15B85467A3EBADE2B6876,
	StatsOps_Unity_Barracuda_IOps_Mul_m2A53D2F4F675B185ADE1140E6182421C6BD4F225,
	StatsOps_Unity_Barracuda_IOps_Div_m918827A728009FEC2DC79AF25CD226A65B0D1673,
	StatsOps_Unity_Barracuda_IOps_Pow_m90E8ED125765C0714BE7DB0E2068B064DDCCB460,
	StatsOps_Unity_Barracuda_IOps_Min_m8D830F0D4C796050D6D9CA618F0AC02AF991274C,
	StatsOps_Unity_Barracuda_IOps_Max_mA179FCC3FBE5DB99351366823474A5EC82E278AB,
	StatsOps_Unity_Barracuda_IOps_Mean_m36D301A1464DE7522B4B9CB067244C1AF8E0C31A,
	StatsOps_Unity_Barracuda_IOps_ArgMax_m5293D7A769C13F0EF64E2A2FAABB011CE33895C1,
	StatsOps_Unity_Barracuda_IOps_ArgMin_m6CC4361341EBAEC4BC7811CD8F653A69E3087580,
	StatsOps_Unity_Barracuda_IOps_ReduceMax_m87422EC6444EF41DB5624BA1468015F10702F626,
	StatsOps_Unity_Barracuda_IOps_ReduceMean_m779A2B7A913C82723E26BD9B111391F2FB7D474D,
	StatsOps_Unity_Barracuda_IOps_ReduceMin_m6F0DF808A1571695A0418936C012F8C14505B73D,
	StatsOps_Unity_Barracuda_IOps_ReduceProd_m42D30C07917C00CED882D6071F82AFA0CF69666B,
	StatsOps_Unity_Barracuda_IOps_ReduceSum_m09CBF1C5158F78720C429D6C57293A1EBE4A60DD,
	StatsOps_Unity_Barracuda_IOps_Greater_mF0429F6F9C1CBDE40E942D087EA096EC1DFDDDD6,
	StatsOps_Unity_Barracuda_IOps_GreaterEqual_m1773C85674B095DFFC733433F952F2907E551BEB,
	StatsOps_Unity_Barracuda_IOps_Less_mEF9A62810C243403695570012C80B950A7F45890,
	StatsOps_Unity_Barracuda_IOps_LessEqual_m6D31049807263FDE1B80BB5A9A6EF63ED932878D,
	StatsOps_Unity_Barracuda_IOps_Equal_m753446CA30A6CFEAFA7DE746F77984091E84829E,
	StatsOps_Unity_Barracuda_IOps_LogicalOr_m5AABD93C199989FE9725B71082BD2FB5467DDDAB,
	StatsOps_Unity_Barracuda_IOps_LogicalAnd_m2D385DD57FB568949BD3532BF81BEF012F3C28CC,
	StatsOps_Unity_Barracuda_IOps_LogicalXor_mEA61AE1C0FDE5917A9F36D0AC07D855131DA9D8D,
	StatsOps_Unity_Barracuda_IOps_LogicalNot_mB706F36DE7CCACBC4B86FDB46EC92971E70B1E2F,
	StatsOps_Unity_Barracuda_IOps_Where_m6DDB145E23C7B915513032E414E18C1848389F69,
	StatsOps_Unity_Barracuda_IOps_Flatten_mD9B9079975E37EE3B0145D54DF6C08E3B9EDD1AF,
	StatsOps_Unity_Barracuda_IOps_Reshape_mB29C0C1EF1768DC1C220DA8CC969746215A062F7,
	StatsOps_Unity_Barracuda_IOps_Expand_mCBBD5EC6770E9718CE7AD57E548B83F1252EFB2C,
	StatsOps_Unity_Barracuda_IOps_Transpose_m4BED7F5AAA790CD61C2187E6C2AD488801BA2F05,
	StatsOps_Unity_Barracuda_IOps_Transpose_mE962381919AC1D747A04F3EECB88B436FCCB89EB,
	StatsOps_Unity_Barracuda_IOps_Gather_mBA60666AC6A9024E0FECBFC9172F68E4B1FCB5C3,
	StatsOps_Unity_Barracuda_IOps_NonMaxSuppression_m457BF934929BFC96E9F29D551F792388FFD49CFD,
	StatsOps_Unity_Barracuda_IOps_Concat_mB8D561425A184D6D470E000A1244C002E98165AB,
	StatsOps_Unity_Barracuda_IOps_StridedSlice_mBBD0FC70F13D0CB7E171D473CB90889225055FE2,
	StatsOps_Unity_Barracuda_IOps_Tile_m5BC4C87F8CF9E47D74A700C57CA9DF9580308CFA,
	StatsOps_Unity_Barracuda_IOps_Shape_m9D8CEF83CE222B99A57E0EE29DA5B3D56DC32FB2,
	StatsOps_Unity_Barracuda_IOps_Copy_m3B247C608996628FF21B3CD42073E788B888CF3D,
	StatsOps_Unity_Barracuda_IOps_Prepare_m471415DA1B0C91E6F9BD2432469A89314B021A82,
	StatsOps_Unity_Barracuda_IOps_ResetAllocator_m609FC4BC727C114664BDDAD3218D5278542C8C56,
	StatsOps_ToString_m4B788C9312C3DDBA3CA7240525A85C5A616C4B95,
	StatsOps_Elementwise_m99C82ED26F10ED033692916F8B74F832692C3A0A,
	StatsOps_ElementwiseBroadcast_m2DCDD384AA57A8BE44C0522A3EA43E6A8043AA40,
	StatsOps_Reduce_m2A83142A824A8E20B31566CEEC1A081899F5B23B,
	TensorOperatorNewAllocator__ctor_m1D9A50A0C27BEA7B9479514E34958270EDC68721,
	TensorOperatorNewAllocator_Finalize_m8C747CE31966DC7E5D53E82E983987D53085F99F,
	TensorOperatorNewAllocator_Alloc_m8E91AA813DA8A4FA74E3F26760ED91A6970A6333,
	TensorOperatorNewAllocator_Alloc_mCCF48282B3075D756E6BC2AB1754C2402E86EAAC,
	TensorOperatorNewAllocator_Release_m03EFF8990BD205CED76F47AEE16899DD1597DEC3,
	TensorOperatorNewAllocator_MoveToDevice_m7C596D4A9A69B59325F5532CCCE79152EA877238,
	TensorOperatorNewAllocator_Reset_m8FB18FEB534D329A93D6345F0A55564B64FC2AAA,
	TensorOperatorNewAllocator_WaiveOwnership_mA79E7CA9D9905B6F3D5E54BDBEFB4CD48E262392,
	TensorOperatorNewAllocator_Dispose_m7941B5F09E8776BAF25A804C669A4414DEF0341D,
	TensorOperatorNewAllocator_get_busyBytes_mE2740EF2D0E59B8CAC6C3451ACAFBE8D63352EA4,
	TensorOperatorNewAllocator_get_freeBytes_m3551E743150B8B90BAAEDD067B3DFA14787B1F52,
	TensorOperatorNewAllocator_get_totalBytes_m2E9E2275020DD62469C1F842A1467B9070F85A14,
	TensorOperatorNewAllocator_ToString_m29D4A1ED54A190989FDF0AEA68CDADA1AC2440A2,
	TensorCachingByShapeAllocator__ctor_mC9B41EED5CD9AFCC9B163AA12AB2697892E1F905,
	TensorCachingByShapeAllocator_Finalize_m5E12B58F0B2A896EECADF38795A76F1533CAF12C,
	TensorCachingByShapeAllocator_AddRef_m98E36C8076FE6B92E9D64A739C9F167FE16D6C9D,
	TensorCachingByShapeAllocator_DecRef_m25C1AEC070268A13AAA0BBD4D5A536D9835C8AEC,
	TensorCachingByShapeAllocator_AdoptFreeBuffer_m53BAC9EF87EEE4031F90D67256B929803D803D46,
	TensorCachingByShapeAllocator_Alloc_mFAEA1FC25B2729064CC6849854192302DEF383D0,
	TensorCachingByShapeAllocator_Alloc_m8A266602343BDAA433D665D5AAB95A566FC2FA31,
	TensorCachingByShapeAllocator_Release_mD89E732E29C24714637F498EB94CE444A4A326AA,
	TensorCachingByShapeAllocator_MoveToDevice_m8C00925CE74363340F98A3920CC4D3A74A9A18AC,
	TensorCachingByShapeAllocator_Cast_m7FEF851C01724257392ECB16BC33645BC02B8C8D,
	TensorCachingByShapeAllocator_Reset_m1B770518097B355C680C32E60578545D8A0382E1,
	TensorCachingByShapeAllocator_WaiveOwnership_mA93B09D1C9884B7B7851379F92CF51AFB56E53E5,
	TensorCachingByShapeAllocator_Dispose_m34D2689784DF2FE1B1E9F910C64659399F187F66,
	TensorCachingByShapeAllocator_get_busyBytes_m70EDAF72DE120A864A619DCAC09CEB3F3CA82185,
	TensorCachingByShapeAllocator_get_freeBytes_m9C4D63B3645E789E5D9F806D9C051F35B34CE57A,
	TensorCachingByShapeAllocator_get_totalBytes_m9D8645D7C0C55779EE78598F9CA016EAC7DAEA63,
	TensorCachingByShapeAllocator_ToString_mEC5680E0D8DE1068AC8A920BC09A206736A89B7F,
	TensorCachingAllocator__ctor_mC79852E4372ADAA07D65730B8FCDEB704A8FCF66,
	TensorCachingAllocator_Finalize_mB6A9B52FFB6B642CFE25E0DF7305E47FFA67E22C,
	TensorCachingAllocator_GetAllocationMaxCount_m5FE2F6D0CF57275E919BE68CA88D554B7BFF9942,
	TensorCachingAllocator_AddRef_mB1CB04919F102C6A8D6DA7F455263E9EC4880242,
	TensorCachingAllocator_DecRef_m6E548D0DAA7A8869799A12A89BF00E1EE577C055,
	TensorCachingAllocator_AdoptFreeBuffer_mDF1C9671586746AD6886632FD014771C5E45EA30,
	TensorCachingAllocator_DisposeAllocatedBuffer_m5F761C2F36827F37A1148DEE82AC6CE76E6E4245,
	TensorCachingAllocator_Alloc_mDDB8E02001EE8310F0893892DA8BB43ABE6CCDEB,
	TensorCachingAllocator_Alloc_m6820AAB2BECBF35711EECD83B192389FEA166B0B,
	TensorCachingAllocator_Release_mDA6B332DC51091F308A1FC8C35B828549AD137E7,
	TensorCachingAllocator_MoveToDevice_mA9D414234DA409E262F741A6DEAF900405289FD6,
	TensorCachingAllocator_Cast_m9481EEB8809952D45091A95002AAB6A62311A588,
	TensorCachingAllocator_Reset_mE1F7DDD14FE0D64BB13E545D081B260096BCAC0A,
	TensorCachingAllocator_WaiveOwnership_m525AA5D6E789A4E8451C31177B21F162BC8F9570,
	TensorCachingAllocator_Dispose_m6B2AF38FCF5DF72AAC571AA3513FEBFEB6E52496,
	TensorCachingAllocator_get_busyBytes_m83D632CEAC516F138A244355415911B54A54D8B1,
	TensorCachingAllocator_get_freeBytes_m924E624F594E77BEA862BD4D0B446AFF6CAFAAC9,
	TensorCachingAllocator_get_totalBytes_mD9E5E61D22783762F241863213E96C19F57F4F79,
	TensorCachingAllocator_ToString_mE099DDEF9DB856153786A25B584E6AF395BD46DF,
	VerboseOps__ctor_m32B10759BE95AA87D0BCFF54A8FC6C49B7FB34AF,
	VerboseOps_PrepareModel_m9F30D68AA9046659C4A0E6B2B4A9FA32F377EA55,
	VerboseOps_PreExecuteLayer_mBB0D010E31550D28F759D161C7AB2DA6F5F50328,
	VerboseOps_Unity_Barracuda_IOps_MatMul_mB1FE8FE43982AB6B4BCEEE17F7DFFDF262872ACD,
	VerboseOps_Unity_Barracuda_IOps_MatMul_mA7C116377497B3345D55556CDF43DD18115A337A,
	VerboseOps_Unity_Barracuda_IOps_Dense_mD2A359E87674B1FFF8B8D9D86C835160A5C0EDA1,
	VerboseOps_Unity_Barracuda_IOps_Conv2D_mCBAA5ED02D81262659E5BF534B36AB39720BEFC6,
	VerboseOps_Unity_Barracuda_IOps_Conv3D_mC751B3757E3896FE0CB54152399F4BEFABF06C71,
	VerboseOps_Unity_Barracuda_IOps_DepthwiseConv2D_m1B06724216C3B90D344616481F771319CDFCA189,
	VerboseOps_Unity_Barracuda_IOps_Conv2DTrans_mB741309D707F5F1F1ED88671101622FD3D648640,
	VerboseOps_Unity_Barracuda_IOps_Upsample2D_mBD1A303F094D649E171FFD0D4B5B88E5212A5E2D,
	VerboseOps_Unity_Barracuda_IOps_Upsample3D_mF74E2CCBD8C9A24B33630598D03D931DA20E3824,
	VerboseOps_Unity_Barracuda_IOps_Resample2D_mEC2526113C2C3894D78640E96396526983275ECD,
	VerboseOps_Unity_Barracuda_IOps_DepthToSpace_m31E6873A2A8FD2BC52BA73C5631A23EAA3C49841,
	VerboseOps_Unity_Barracuda_IOps_SpaceToDepth_mF40C9CEDCBBE7387A16B8A981F96D2E18073618A,
	VerboseOps_Unity_Barracuda_IOps_MaxPool2D_mB0C2695508535B6AF699BF2FDD486CAE037FAD7A,
	VerboseOps_Unity_Barracuda_IOps_AvgPool2D_m6F6F932423DE92D08F5F2F4D61B01D0E94B20BE9,
	VerboseOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m760FB861BD5A2E60C01A4713CC434D225F83CEFD,
	VerboseOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m121F9B2A78E128264A824F0A953AF99CF09421BC,
	VerboseOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m36967F3037608E0B7114C66F50A2D343A3A81C6C,
	VerboseOps_Unity_Barracuda_IOps_Border2D_m3C0E38510A353E1AF9B6E1502C6C65BD94B7111E,
	VerboseOps_Unity_Barracuda_IOps_Border3D_mDC0E4AC51B3C2AB54F609B0C8B79B1CA9FD30E8D,
	VerboseOps_Unity_Barracuda_IOps_Pad2DReflect_m04D795C99072874A6DCE319E75A87939C70F56E0,
	VerboseOps_Unity_Barracuda_IOps_Pad2DSymmetric_m677901B429903DF917EC10E18812A4A8C60E3F47,
	VerboseOps_Unity_Barracuda_IOps_Pad2DEdge_m0A90812FCFD6562E34C45903E8F0B79DF9B75223,
	VerboseOps_Unity_Barracuda_IOps_ScaleBias_m0FE2664751209BE0B12D1BFA79DC70EA1EA047A4,
	VerboseOps_Unity_Barracuda_IOps_Normalization_m510CE0011B88687B571D2721BD7C79A99EA36C9B,
	VerboseOps_Unity_Barracuda_IOps_LRN_m360FBB0682334FC1026C7CCD150DEAE673403F9B,
	VerboseOps_Unity_Barracuda_IOps_Dropout_mC9E5BD4B27FA2E5F53C1117F2A58352FE8885D25,
	VerboseOps_Unity_Barracuda_IOps_RandomNormal_mF6CAFFBA32E0327D9963BE26B014ED4085BDE067,
	VerboseOps_Unity_Barracuda_IOps_RandomUniform_mD60B5A8361456FB16A8B88969BE9752E46CA095C,
	VerboseOps_Unity_Barracuda_IOps_Multinomial_m685A0661E991611DBB83101C9038A11DB3BB2AC6,
	VerboseOps_Unity_Barracuda_IOps_OneHot_m1C29964BA66C56D96F46DD18C79EFE3BDB0B596E,
	VerboseOps_Unity_Barracuda_IOps_TopKIndices_mF67AF318F192A2090C44E760DECFC163D8601F9B,
	VerboseOps_TopKValues_m692E1CF9EE11ADC0973A96FF33108CEA0B126B71,
	VerboseOps_NonZero_m3B57B645C33F553E83D421CAA282195DB8D284F6,
	VerboseOps_Unity_Barracuda_IOps_Relu_m5568251675BAE1F781A1070B72CEDEFD81F2DA48,
	VerboseOps_Unity_Barracuda_IOps_Softmax_m8F15C9E0715B946DD537F34B2CCB607A431EB41C,
	VerboseOps_Unity_Barracuda_IOps_LogSoftmax_m662377046DEC7A6F3275A7C12305EDDEBF32A603,
	VerboseOps_Unity_Barracuda_IOps_Tanh_m10BA2778AC9B4ACABED35F0600816CE25F3EFF9C,
	VerboseOps_Unity_Barracuda_IOps_Softplus_m5E87CE939E99DE07188B373A30B93641759BB8A0,
	VerboseOps_Unity_Barracuda_IOps_Sigmoid_m0DE4B0E3F70569076CA758A498628E43120E591D,
	VerboseOps_Unity_Barracuda_IOps_Relu6_m8A42425FCDFC375B5447D066152D61146ECE7ACD,
	VerboseOps_Unity_Barracuda_IOps_Elu_m39758F7BE7552782D53AEF3556DEFC28FE543D52,
	VerboseOps_Unity_Barracuda_IOps_LeakyRelu_m4E2079C6A195D4D819EB62D285F6CEF4FBC48B3F,
	VerboseOps_Unity_Barracuda_IOps_Selu_m645A2A6EEE157D024F694EE3FF96F62882F400D8,
	VerboseOps_Unity_Barracuda_IOps_PRelu_mD6417A4D85E1B754FF7B931C7341D95173C5EAD9,
	VerboseOps_Unity_Barracuda_IOps_Swish_m6B0C4ED0E1845D68A3653D0CFB79823D2CC6F445,
	VerboseOps_Unity_Barracuda_IOps_Abs_m088BE47928071D8AE474A890DCBE092397255D9D,
	VerboseOps_Unity_Barracuda_IOps_Neg_m0768B591B901485057A4AED576780F335395DBEA,
	VerboseOps_Unity_Barracuda_IOps_Ceil_mBAB3E6976C15E2277C7F81504A344904B263339D,
	VerboseOps_Unity_Barracuda_IOps_Clip_m0F9C4DF7BC017A55A9F05B8A03E0DF20935B42E0,
	VerboseOps_Unity_Barracuda_IOps_Floor_mA7FC391185C8606F05180D572144FCDC9BC4DCBC,
	VerboseOps_Unity_Barracuda_IOps_Reciprocal_m6DCF40E8E81A5D89362C8F93A5B65237FBB1250B,
	VerboseOps_Unity_Barracuda_IOps_Pow_m6C91743338BD2B0A037CB155F929ADBB9C8577CD,
	VerboseOps_Unity_Barracuda_IOps_Exp_m390C513CD00062ED84B22C51280AD65F1FD32AE3,
	VerboseOps_Unity_Barracuda_IOps_Log_m82202DBA0B60508034B84A6C74A541AADF6F79B4,
	VerboseOps_Unity_Barracuda_IOps_Sqrt_m8F3D98AD73D0D9DCCBC7EF231AB252451586E9B0,
	VerboseOps_Unity_Barracuda_IOps_Acos_m0925A3F778A62FEFE5B7ED65173C66CB9636EFFE,
	VerboseOps_Unity_Barracuda_IOps_Acosh_mC366F95FBB757A0BA5EF948572BE8D90E9F31858,
	VerboseOps_Unity_Barracuda_IOps_Asin_mAD2C89E0A7640FADAFBD7E0400DC4C2F18091F01,
	VerboseOps_Unity_Barracuda_IOps_Asinh_mC20F808C02F98E1C8619764FFE3E58ED86059EE3,
	VerboseOps_Unity_Barracuda_IOps_Atan_m35259A43F0A14FD366025D67555CFDB5DBFEECB7,
	VerboseOps_Unity_Barracuda_IOps_Atanh_m7DB427B2E963C07C5964D781D9F5A894ED43D092,
	VerboseOps_Unity_Barracuda_IOps_Cos_mC6B4B2C37A94EBA8D1D140EA61809AFAD405F1D1,
	VerboseOps_Unity_Barracuda_IOps_Cosh_m49F75860C8649F15FFD8EFFDD2A6A0A0EECF9501,
	VerboseOps_Unity_Barracuda_IOps_Sin_mEB6CD8DA83E4E5651EE850A3BDA1AD9EA169FDCF,
	VerboseOps_Unity_Barracuda_IOps_Sinh_m50C0B698A4C62F60222F0F33C35007342182840F,
	VerboseOps_Unity_Barracuda_IOps_Tan_mB726372EB3C7B14B47BD503CD3E6ED310F5535E6,
	VerboseOps_Unity_Barracuda_IOps_Add_m4D9477DBD03373BA1DB6D981D097A1EC7B0DF3A4,
	VerboseOps_Unity_Barracuda_IOps_Sub_m885B60F6592BD536C727F9C8E5DA4EDA58F79C71,
	VerboseOps_Unity_Barracuda_IOps_Mul_m2E679B4B0811AD7414CDB84C59926E5FA8FE9CA9,
	VerboseOps_Unity_Barracuda_IOps_Div_m42559B4353DC8975B105D38370D51BE17C2A7A95,
	VerboseOps_Unity_Barracuda_IOps_Pow_mA6758AD3B0FC1F36D258971295A63BBA6275DB47,
	VerboseOps_Unity_Barracuda_IOps_Min_m5A4536214FA9B340A71A88B175A83E736D466450,
	VerboseOps_Unity_Barracuda_IOps_Max_mCA5F9C1A05F8E22E01B2FDFBA474712A0EA2FE9B,
	VerboseOps_Unity_Barracuda_IOps_Mean_m33DE60C413F4668AEE7D67E266FBB86A99D6DF66,
	VerboseOps_Unity_Barracuda_IOps_ReduceMax_mEAD6BB73428796B24FD17DE4E42FE2757A51355D,
	VerboseOps_Unity_Barracuda_IOps_ReduceMean_m3EA466D5E87BC6EEFE9C50CC03C0B3D1793B514E,
	VerboseOps_Unity_Barracuda_IOps_ReduceMin_m9B046D5F70AE5E43017BDE9EC0DC1E4EB7CCFCE6,
	VerboseOps_Unity_Barracuda_IOps_ReduceProd_m7783CC02F42E6AE6A7DBE17B3EB243A7054C9EA1,
	VerboseOps_Unity_Barracuda_IOps_ReduceSum_m322517FBB08C151235F46B322C8E87E704256C3E,
	VerboseOps_Unity_Barracuda_IOps_ArgMax_m1FE4DA1BE9D61FC8CB7B5F126B87E4DCFBFF45D9,
	VerboseOps_Unity_Barracuda_IOps_ArgMin_m1A40A036B36F68553CAE66EA343AA7B20AF8E584,
	VerboseOps_Unity_Barracuda_IOps_Greater_m879FE55392618DBA6000A3F30593730403CD4F88,
	VerboseOps_Unity_Barracuda_IOps_GreaterEqual_mB16C48CE37DB038E34D8C91D587A3BF396D404FC,
	VerboseOps_Unity_Barracuda_IOps_Less_mDB073A5469A7A840D86D3915780EADE7A8346780,
	VerboseOps_Unity_Barracuda_IOps_LessEqual_m6921F3314CC990BE597C482FDCE9D7B7ED4E67B2,
	VerboseOps_Unity_Barracuda_IOps_Equal_mB8E8EBE24BBAFAF60660E2E1A09A2631851DC2FC,
	VerboseOps_Unity_Barracuda_IOps_LogicalOr_m64947FE9B4A733E8E5D95E421D1C621D94924C2D,
	VerboseOps_Unity_Barracuda_IOps_LogicalAnd_mED21678AC5C8892CC864F146BE01BBB8D8F7193A,
	VerboseOps_Unity_Barracuda_IOps_LogicalXor_m077F6B3DCA7BC0324AAD0D69D2AB5F0C8346903D,
	VerboseOps_Unity_Barracuda_IOps_LogicalNot_mFF5DD5F14CD230CEADE2F4C843D5CE0B21DD6B1D,
	VerboseOps_Unity_Barracuda_IOps_Where_m1752CC15F2B06A02CBA13D45387FCABE43109A67,
	VerboseOps_Unity_Barracuda_IOps_Flatten_m96474D808F0962B4B48C77C714886B67CFB9696F,
	VerboseOps_Unity_Barracuda_IOps_Reshape_mCB77FD446D0E4F8F45EEC3ABC3D089A2EDF9CD09,
	VerboseOps_Unity_Barracuda_IOps_Expand_m30A77194C779BDF79C7911E362A852D4E387AEC6,
	VerboseOps_Unity_Barracuda_IOps_Transpose_mB4EC1F169FB4EB1ED31698E2DA6FB301F9736D4C,
	VerboseOps_Unity_Barracuda_IOps_Transpose_m12E6ABEDA11117E1FE04F5DE19F9100D26541004,
	VerboseOps_Unity_Barracuda_IOps_Gather_mC7E16D9A04D10FCAFEA54B379BEF155B3E253D48,
	VerboseOps_Unity_Barracuda_IOps_NonMaxSuppression_mA688D4609F383A01A5799769A9460CF8F83B7C1C,
	VerboseOps_Unity_Barracuda_IOps_Concat_m45159247F0104C6DDD73A3AB13921B0647E1A750,
	VerboseOps_Unity_Barracuda_IOps_StridedSlice_m1D95C4BDF372498FFDDBF0C5F288C83AD2926965,
	VerboseOps_Unity_Barracuda_IOps_Tile_mDC9A30C335D83F0E854A476D35FE8280C2AD4EEA,
	VerboseOps_Unity_Barracuda_IOps_Shape_mE41FE000D4DAFF89F93E5D1BAAAEFD51E843A61A,
	VerboseOps_Unity_Barracuda_IOps_Copy_m652FB876E4F5E8EBEFC8C8A63778813CF9B8F055,
	VerboseOps_Unity_Barracuda_IOps_Prepare_mD6405C1CE13E1D2322736DDF68E095A136505AC8,
	VerboseOps_Unity_Barracuda_IOps_ResetAllocator_m5D959B455A1E52572787A48A29508FC0A1749E27,
	DeprecatedTensorExtensions_AdjustPadToPool_m7BC1EE082A00B7714630ACE9AA3ACF2F92D878FA,
	DeprecatedTensorExtensions_AdjustPadToPool_m8E4BEFC5249239FA59EBB4F8D2544EEB1B6293C5,
	DeprecatedTensorExtensions_PinToDeviceAndUploadToIt_m51B7BA5DB2F54AC820F69F01EA6F3D64DB3ACE18,
	DeprecatedTensorExtensions_PinToDeviceAndDownloadFromIt_mE9728DF613692B97842A657C20E266E64A189230,
	DeprecatedTensorExtensions_Unpin_m702DD747E1DCF80ACF1A7F8C19F5506E6E359444,
	DeprecatedTensorExtensions_CastOnDevice_m994EA8B829EF947D97F9761F004354E888553C96,
	DeprecatedTestSetExtensions_GetInputShape_m48C33239E65F3F3669D428F80A9B71D3F6C1EF5B,
	DeprecatedTestSetExtensions_GetOutputShape_mA361FBB31A2BA26F52B0FF823700FD514576A90B,
	DeprecatedTensorDataExtensions_GetMaxCount_m54E9985D98D8C2F04D0B8920BFADEAD892EA10AF,
	DeprecatedWorkerExtensions_AddInput_mACF2C7DE8FA59DC5495E4FE2EAE0844A311128EC,
	DeprecatedWorkerExtensions_AddInput_m8BC1A18741CEB9D0712D17D9256C1297F6C5039E,
	DeprecatedWorkerExtensions_Peek_m189F90DD18A08FC8192B1F3BDB765AF022BC50A5,
	DeprecatedWorkerExtensions_Peek_m8C02EE5C811C23B305CFB781C7478261399D75DE,
	DeprecatedWorkerExtensions_ExecuteAsync_mFBAA4C7D1DA96748AE3E616F4FE4461518E27A06,
	DeprecatedWorkerExtensions_ExecuteAsync_mA3620CD270895BE773F9A5B7C0F0B800789799FE,
	DeprecatedWorkerExtensions_ExecuteAsync_m11E32D3554C0EB621FF0487CA5861280834FF1C4,
	DeprecatedWorkerExtensions_WaitForCompletion_mAAAEC3CB5D68544213AB3FF7ABF41B25A24894F7,
	DeprecatedWorkerExtensions_GetAsyncProgress_m337B776061E3B6FA2144DC4E327A07228F1BE0C7,
	DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_mB95926DA314412A5CAA922214841ECB29D89AFC1,
	DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m6F67585D9A432E8A35168FECC76433267AB7A11D,
	DeprecatedWorkerExtensions_FetchAndTakeOwnership_m105D98DECA9A2686E365D5C005F2F74931F18F61,
	DeprecatedWorkerExtensions_FetchAndTakeOwnership_m1AA814468525FA5BADB112564DC83064E9AA14CF,
	DeprecatedWorkerExtensions_Fetch_m60E7DD939C94B48C5B47DE92AB9FB52BCE792716,
	DeprecatedWorkerExtensions_Fetch_m354E3CFF11600C0D87D69BBAE98F0D406E9B5F7D,
	BarracudaWorkerFactory_IsType_m8EACFB75B44FA60612E9728E9A2AB9C5F954BB56,
	BarracudaWorkerFactory__ctor_m08E7DDDE3B8C2D2E3CFDE4CF6293CCED076759BD,
	BarracudaTextureUtils_TensorToRenderTexture_m721A21CAC2B86FA1E5E9DAD041F7F49C467F7F91,
	BarracudaTextureUtils_TensorToRenderTexture_mB1E9B76E8DB30F76239EEE4BDF83090A292B2E3A,
	BarracudaTextureUtils__ctor_mAF56D9677DE5246BB5AB4F141E14F29BB70AC908,
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
	WorkerExtensions_CopyOutput_m1BB942A06E5B376D149ECA7C69ED07AF48B19B79,
	WorkerExtensions_CopyOutput_m3E1A11FFCE1AF32454AD78A3B1B7114BBB894055,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	RecurrentState_InferBatchSize_mE84512BCE4ED2BF854CBFF11117CE70A848DACDA,
	RecurrentState__ctor_mBE6670277FF6CD98CC1F69567EC6A4FD8BED155C,
	RecurrentState_Finalize_m8C59DD6BA2ED7A9857E1369978CD1565FECDB1C9,
	RecurrentState_Dispose_m665E6096461807C5B5B6803A89A4F9E005CBB5B7,
	RecurrentState_GetBatchSize_m702D923ECA76DA60BF2518BBF5EC62F4A6439109,
	RecurrentState_BeforeExecution_m5999B2B92D6CE4210E3D7B262900E26240215C19,
	RecurrentState_AfterExecution_m426154FCB68B59481F03F00A0EFC122760E3A417,
	WorkerFactory_CreateWorker_mA4247E1449D2BB06CFB277A8CE5E938D1E1EE60F,
	WorkerFactory_CreateWorker_mE262964DEC21BB7DE26D9A5C4D04206271F87C2D,
	WorkerFactory_CreateWorker_mD1AC855EFACEF53C784EF8861D00A75CCA32DE36,
	WorkerFactory_CreateWorker_mD69251A13B5CD9B12B236FD64247A829E34182C1,
	WorkerFactory_CreateWorker_m3E0675291B7849956D1CB190E34AE36579CC566D,
	WorkerFactory_CreateWorker_m2EB999E23F4FD412758FD0B58D17B837EB1FB1DE,
	WorkerFactory_CreateWorker_m69FAEED9E860FCD0C942CA85E39997B106D452FB,
	WorkerFactory_CreateWorker_m82C7EB3F5729FA34039DE14C07DD74FAD82AB209,
	WorkerFactory_CreateWorker_m636739AB73B7E47CF83B1BF1FBEA10AF00350D0D,
	WorkerFactory_CreateWorker_m98F7C73AC49C00A99223236735EB049ED4850F23,
	WorkerFactory_CreateWorker_mB8005FB118FCA9A564217A53215081D762E4197F,
	WorkerFactory_CreateReferenceCPUWorker_m4D0914F49F79A86A05C284338B43E805D62502CF,
	WorkerFactory_CreateReferenceComputeWorker_m5124DED8194772BD4F2C3BA6B0B458C3D0B2C920,
	WorkerFactory_CreateComputeWorker_mECA870D914A9DD7ED32A84092E2FAE2764F8C0EF,
	WorkerFactory_IsType_m8F4D31530C672D8D9625D573BEE2A78AC4229EA0,
	WorkerFactory_GetBestTypeForDevice_mDF129930630298FB7E3AA917A0D3520DF6151858,
	WorkerFactory_ValidateType_m71410F073F49E3356AEA665C7DCDED70E9A7F789,
	WorkerFactory__ctor_mC06CED66F8E802E233FA021E070C0568B275BBA0,
	WaitForCompletion_get_keepWaiting_m6502954DB0BA89F4DD75286FA116B349A306A7CA,
	WaitForCompletion__ctor_mBDB079CD536F90603854259089CF5436BAC96EF3,
	ModelExtensions_CreateWorker_m2D0D67F6AD0F297B5ACDA80748118675BB8F9ECB,
	ModelExtensions_CreateWorker_m9E7C10A8D86E6EC19E3E2751AD99145EADB5FC60,
	NNModelExtensions_CreateWorker_mCCD96CC858EF4535BCFE7A65AD9DE42EDA0E4C69,
	NNModelExtensions_CreateWorker_mFD6641BAEA096F1B3A01EE134D4286E7DDDEB853,
	D_LogWarning_mC1E5DEA04FAA6132805F8BD6449195E03461CBBE,
	D_LogWarning_mD1325BAA80ECB0EE6B9797A1D8153C58D25BACD2,
	D_LogError_m9745FBF51A76D6FFC9F7E52C8F72E4626F99CA30,
	D_LogError_m7466D89488C6552AF6DB4076C7D5C208875A5AD1,
	D_Log_mFC944A27CB9A3607B1A6EC68A50266DC5F2C9E27,
	D_Log_mE6C7BB5FF12F34D9488253DD0B1890834F3F9A7B,
	D__ctor_m38C0B30D647B7BF53C5D3005191B247409AB72E4,
	D__cctor_m4EA0720261D6784A58599FE0936A27CF229C647E,
	Debug__ctor_m7818C7EBF898B85A6ADBA266B8BA4C4C845B1E79,
	NNModel__ctor_m64A20F457D008BCA54D60B9EA690388595E44688,
	NNModelData__ctor_m40EF90455D03A267F23CE7CEAB9B60D785575248,
	StringStringPair_Equals_mA2A3D5A7DA30BBF27F26BFCD476F549EF60F5D94,
	StringStringPair_Equals_m84C1DD09E1C9DE03645F6A3B98707B4690107AE0,
	StringStringPair_GetHashCode_mA3CB1D5E72B000614D9D71FD7EDB6E399BDE7866,
	StringStringLongTriplet_GetHashCode_m22DD6193AA0700F9FF079B844017A6BFE0F842B0,
	StringStringLongTriplet_Equals_mDC26A56AF98A76ED562B1E0E722914F142A14726,
	StringStringLongTriplet_Equals_m89BD8DE2D352694DB9B12979CFF4EB40A0E09602,
	StringCache_Lookup_m4405B6FBA30CA8612BD296CA10E5946D06799238,
	StringCache_Lookup_m5E430EA744A912C0DC170458175EC07969A80CD9,
	StringCache_Clear_m647175ADE183F44333A43AF329120071A3F69726,
	StringCache__ctor_mBB8A343710F659E2AD3055EB4CFC7C96268D0AB9,
	TestSet__ctor_mAE48AA7E397E16D499EB20B83BC4FED195F552B7,
	TestSet__ctor_mC3DA30A91E0619F69243BD0A6EEAE99718432FC3,
	TestSet__ctor_m4C4EEF1A7D10D20E4AF46109E7CE64E09B86BF33,
	TestSet_SupportsNames_m1414F067D9C70A51DDA507164EBA63E583D17B1C,
	TestSet_GetOutputCount_mDC81B7F7E539DB77475AD88225BAECC67B06ED73,
	TestSet_GetOutputData_m4A591AEAB7A8967E6A3883CEB5BFEBFEDD12D8D4,
	TestSet_GetOutputName_m44E229137DBB586FE5033977F0BFB58231D1AFD0,
	TestSet_GetInputCount_m6CF241EEDFA1E7F68C730D5C981D447ED7706F25,
	TestSet_GetInputName_m1B132CF17FEB95B9023FD949563DA0B450017254,
	TestSet_GetInputData_m9ED44ED66AA3E7B1D61F4BBF4303D73963D849F9,
	TestSet_GetInputShape_m39AB84E5C27AD0366E42C907F3DF9C315D2A9A5E,
	TestSet_GetOutputShape_m254934E9DE6A7200A07E34E2FF6CDA190C803BFD,
	TestSet_GetInputsAsTensorDictionary_mD4D05873C892B567CE45DB7A8ED091FBE0984D9D,
	TestSet_GetOutputsAsTensorDictionary_m79D99F90B60D948582113F1C4B6ABBCB01DCE184,
	TestSet_GetInputAsTensor_m2F8FB3CC34084D7E17913A860F9C41E36EC7AA3A,
	TestSet_GetOutputAsTensor_m626F65EC5A2741192EBDA6B40E5136F6D64080C5,
	RawTestSet__ctor_m9911E3BE12E0A4B02E54CCA5F9A54EA39ACCC9AC,
	JSONTestSet__ctor_m6E33922CD71D0BA0716FBF98AEDC9AA1B86E109B,
	JSONTensorShape__ctor_m3DD64A3A32DA81D61095A30A841783A44BFCF3EA,
	JSONTensor__ctor_mB62E892AEEBF27722941C04F10815AB0B00BF217,
	TestSetLoader_Load_mA2EABB824DC64699562885CBAC82698D84A2E4DC,
	TestSetLoader_LoadGZ_mB3F51B78F754A741C0D5AF98EBF02BFA9539913A,
	TestSetLoader_LoadJSON_m70FE361959E941FA9BF55CB4119302FBC27C5249,
	TestSetLoader_LoadRaw_m4DAA0CFB90ACD9D7365F7688374221CF39FCC3DB,
	TestSetLoader_LoadImage_mB5CFA56D010A86AA2AF30739953C76EAA2E69D5F,
	TestSetLoader_LoadFloatArray_m1FAACC3352D267B0ED419FA1BD588115E606D25D,
	TestSetLoader_Open_mA6798E6ABE1543210A358F57D41E759630F4F919,
	TestSetLoader__ctor_m0BF317DD569444C30D3CD70C02D5B8FDC0CA2311,
	Layer__ctor_m98F75B8668E7E0F4D0D86603D0385A64F92C161D,
	Layer__ctor_mECB559E4EDAC6963DFA8E92219059DDA59DE41AB,
	Layer__ctor_mA7C8008AB7F913CD3630EE4D003DB1FF396EF141,
	Layer_ToString_m3C51C93D7549CECA12D544A65506E5C53531A9B1,
	Layer_DataSetToTensor_mF4161369797512CF4C8838C50D209A2334D56D8C,
	Layer_ApplyTensorToDataSet_mECDCD2297EDC3D0CFE6AD019642E881EB0B90CB5,
	Model_get_Warnings_m90942E6445F1A582D9A0C00DC4C9CDCD21E05CE1,
	Model_ShallowCopy_mE5E744E30B1B6B59E728064C02905D64E07D2AC7,
	Model_ToString_mA8E93183150B8D99C22185C52B8CB68A333BDC31,
	Model_Compile_mC9D33FAE64E6AC312EFC292A5A869603E65C56D1,
	Model__ctor_mBA6C30F23DE242ED36321D508586E994B91F3DB7,
	ModelMetadataExtensions_GetTensorByName_m5AAFE6ACC4356D9D754883979B9E28624F00895B,
	ModelMetadataExtensions_GetShapeByName_m799D1C48E21FC184C8879FD8D95E2359EB2D6801,
	ModelMetadataExtensions_GetDownStreamLayersCount_m28843DEA128BFF930FCFDD412856A4A24CF77E0A,
	ModelBuilder_get_model_mBC4D25624DBB9F715D6EC71D9B97197A6DBF5BA5,
	ModelBuilder__ctor_m1E645F07C99EDAAEDB77906B792E4D9095B3D19B,
	ModelBuilder_Input_m08E6260E00BE4E0426023E3E3B87D1EE559D0636,
	ModelBuilder_Input_m68AB39788E61FCA32C59859D54CED42C16752FC8,
	ModelBuilder_Input_mBE78FACAD56BE6E817C4E4934E5C847E309791C2,
	ModelBuilder_Input_m55AD560DB0A9DEE5E94BA07055A161BD7FE06BBF,
	ModelBuilder_Output_m4609CB77EA3ABCD632006497A592B785EA6F152B,
	ModelBuilder_Memory_m90A9A290418E41FF5D658087648D9D1B08DE5528,
	ModelBuilder_ResolveInput_mCAEEABEA0E4F51A55D555ED1CA740262F70D1C92,
	ModelBuilder_Const_mBDB7F78DDDDFC6D2821C933145440F33AABACABB,
	ModelBuilder_ScaleBias_m67BB710600A343DE671A41B5D58A7633B2664993,
	ModelBuilder_LRN_mDB1E6D72AFC4BFE6624BC569F6B1FE536B0D49E5,
	ModelBuilder_Shape_m5185C5ACFBF8EEF28BE3073FEEF4D53909AA4FF8,
	ModelBuilder_Normalization_m6D0076F4E0A95C9B440127169AB75FC8B823937E,
	ModelBuilder_Dense_m0D50B1D0A2A2C201A6A00A9B1B80FD000535AA47,
	ModelBuilder_MatMul_m2AF70E76D8C24A1310E74E1159AC0E12D743E1FC,
	ModelBuilder_Conv_m786CFCA3BFE497D3E5B360B277A7DF1DD112201A,
	ModelBuilder_Conv2D_mAF05158B746401BB4DD9AD90CB3953EAE416D748,
	ModelBuilder_Conv3D_m34600E8E31662E8134C133AD0187B542F005E72F,
	ModelBuilder_DepthwiseConv2D_m4268DFCD654D6867F97EAB8C9748EE40563DE03E,
	ModelBuilder_Conv2DTrans_m94354EE71EE6909AAC41B4015B24B99F7A09E365,
	ModelBuilder_Pool_m0CE7779FDFD0A0BB2FEE743012C214D4E449CC47,
	ModelBuilder_AvgPool2D_m8A376BA63275EBFF93394F1D7A875518B7442EE9,
	ModelBuilder_MaxPool2D_m2098CDA02E3F09D56A424605AF47A9B4073B432C,
	ModelBuilder_GlobalAvgPool2D_m97F6B024DE92898E3F122D5DE25D7AF94E3BB5E3,
	ModelBuilder_GlobalMaxPool2D_m21DA87538B886EA478B89E53F4DEFD2C9719D8EB,
	ModelBuilder_Upsample2D_m1AA1D4585DC09B1674FE3DB56FCF7EA14873616B,
	ModelBuilder_Upsample2D_m8BACC0AAF5B164D07DD01833D323E021B44266AB,
	ModelBuilder_Upsample3D_m1B9657001FF7AD17D97689BCA690953DF6D9ACF3,
	ModelBuilder_Upsample3D_mE3D5E487CBF91A19914B1232921DDD4F07D9335D,
	ModelBuilder_Resample2D_mF409BACDD435154B8C13619F9CF0B90E1D60B1C5,
	ModelBuilder_Resample2D_mFF6C9ED45FA0588C0330FC377271757B2BFDE6CF,
	ModelBuilder_DepthToSpace_mB11C87A0460115907136AAF98894EACCBFA35C0E,
	ModelBuilder_SpaceToDepth_m50AA5794F43A9398BA95B372BB3B0867BFF70551,
	ModelBuilder_Reshape_m64DF2F89BB017C516B21C08848A6919654A35500,
	ModelBuilder_ConstantOfShape_mC9C249DDD3BC243AAC42A88B557C2F22ABA60365,
	ModelBuilder_Reshape_m398D09FE293CF098A60B1667877668F236C5C168,
	ModelBuilder_Reshape_m1CAFE347F492CE807DDB26C2730D5CAB11A4C622,
	ModelBuilder_Expand_m43D23F21CC06D18613DE0920A5771600B9AD16C7,
	ModelBuilder_Expand_m83D0A1AEA841F61629E6468FD4D5D55F7A698533,
	ModelBuilder_Flatten_m9BCD3ECADFB7E7843991AF9221F44BB5D5A613A8,
	ModelBuilder_Concat_mBFF64E2041C3601B3B6072C60F30C897820B6771,
	ModelBuilder_StridedSlice_m671F18D539F448E4784E65301795E2E7D421365C,
	ModelBuilder_StridedSlice_mE75081CBEEA273A04D1264BA21332AE98DE9FAB9,
	ModelBuilder_Tile_m0D8121817BBA71FF0C24C14D2F26A06F68461CA0,
	ModelBuilder_Tile_mCC5FD5968B567047CD7307FB48BFB57D84DBD3AA,
	ModelBuilder_Copy_m4E03B2D17B2DBB440FAF65D94AA3A49FDC390945,
	ModelBuilder_OneHot_m9F36AD12368067CF3DFA80D6CA10BB4FEFCDFC63,
	ModelBuilder_TopKIndices_m3C04286DFB8BD180ABFC9265AC07C2B1400DA8DF,
	ModelBuilder_TopKValues_mEB0DCD80D7899F15886798AECB5582B004624567,
	ModelBuilder_NonZero_mC8770C98D522AD736DF4F4F2B40D0B989093DF51,
	ModelBuilder_Transpose_m6217DF8C49B42165BAD34E1E4B78A58786C9AE1A,
	ModelBuilder_Squeeze_mF36890E0C5E57CB31254D24A886DF6DA39F1514C,
	ModelBuilder_Unsqueeze_mD583EC4796648EC35E682C72E7254AD088B1A47D,
	ModelBuilder_Activation_mFC079F005F3C23700FA3BB0F7E43FA3A3FACD55E,
	ModelBuilder_Identity_m2A093F7F8248AA7F04A7A7EA665E96CEC76E789F,
	ModelBuilder_Relu_mF06C5AA5B861E626581AE5EB73D8FA13BC649C4B,
	ModelBuilder_Softmax_mA3711A2D73FA1338DDC0679FE0123D201070FBED,
	ModelBuilder_LogSoftmax_m9035B4DC5C72688B15BC62A792764A7F6408C300,
	ModelBuilder_Sqrt_m8A33169D72840F9B8367372593A1661B31FC87D3,
	ModelBuilder_Tanh_mDE12860BD10C6AFB8514D12BBDF931A3B255A041,
	ModelBuilder_Softplus_mC5D4FE4B044FAB122212AC28532CDBE813BB800C,
	ModelBuilder_Sigmoid_m22A8D65CAA417C34D89BDF0D396EA98549899260,
	ModelBuilder_Elu_m78A63CBB5D5F9A7E960251518DB9280B78A8A75F,
	ModelBuilder_Relu6_m29CECFCFD5D78B54549F19166D858437195AFDEC,
	ModelBuilder_LeakyRelu_m8EF14F850A81E4FBE0676A06E79EE09A4F7D7983,
	ModelBuilder_Selu_m146071F53F772FA3717E26E52387478B56362540,
	ModelBuilder_PRelu_m092E585C827AD94F8659A36B6B4E3EE785931E97,
	ModelBuilder_Swish_m6B2D92B83AB673979A0F08CB6255598D407FCF04,
	ModelBuilder_Clip_m4BB31E8002B8E3DE56C54DBA0E32BF93275D6426,
	ModelBuilder_Exp_m694342338B419DC84D39B0499072176943976C18,
	ModelBuilder_Log_m7D34CD470975EE1D4A16DB910D37D2876963EBBC,
	ModelBuilder_Neg_m24F23CD7CDD17399403EB1314C81B2456FD3CA8C,
	ModelBuilder_Reciprocal_m4607C997173368762344B87D32AB84B78305AE82,
	ModelBuilder_Abs_mCB54C37B5CF85614C4CA1676BD6E3608D5C170A9,
	ModelBuilder_Ceil_mD2197BC47FA783FF11F957DF2D4934EB6BE02B1D,
	ModelBuilder_Floor_mFBE84B880211CFC1EC2C0F3802F0B89071033D45,
	ModelBuilder_Round_m8D26099E8B33A3CFC091A6E732D3748D8C6B8FF3,
	ModelBuilder_Acos_m6C6E6223FB20A05C8AEE425146A78ABF47090F20,
	ModelBuilder_Acosh_mBFECF3AD480590B15BEFF468DCC50CC14CD83C05,
	ModelBuilder_Asin_mC62A8DFBDCCD9D754F4751A0C1A2F49F693A5040,
	ModelBuilder_Asinh_m9901633C9BA713AB56D382238C03D6F71D78B313,
	ModelBuilder_Atan_m77983E0F6867528DFFCB99B8395D0BE7CEDE360F,
	ModelBuilder_Atanh_m690A321C5A3C4E39C7EC3BE86C6F6705967AFE80,
	ModelBuilder_Cos_mF26958DD83A6F45EFC442B356F9785CD2C76EA7F,
	ModelBuilder_Cosh_mEA9F06AA5E53EC48F4D1893364ED2AA29E542A18,
	ModelBuilder_Sin_m200DC167D96D97CE3E77CD9942E0E39D6AD82CB2,
	ModelBuilder_Sinh_mC0D56FF51BA927645388DC5A7253F134F933177A,
	ModelBuilder_Tan_m4BED0C12809C0D692369EA83FD25C9474D54EA30,
	ModelBuilder_Broadcast_m96D0DD93E249E38C1E95AFA4A7B86498BEF6416F,
	ModelBuilder_Add_m4CD289C4AA2ADB7FB1DE70925561BEC58929384F,
	ModelBuilder_Sub_m8F3B4C97C0270EA288CBE8044394B3BD0CE4C679,
	ModelBuilder_Mul_m676C9BBE6A089CDB8A4904741D94AAF0DE1359A2,
	ModelBuilder_Div_m42B365CBA409DD9918ADCA0049C390584457E328,
	ModelBuilder_Pow_m416864059938921634B8FB9C1F6E919A0A5E7586,
	ModelBuilder_Min_mBC48D73CF8DE866CFAD7B63ADAC3054749F12E8C,
	ModelBuilder_Max_m3C9D1B5686740F780030C5B3CE3B4F5AF2A71DEB,
	ModelBuilder_Mean_m5F0332622209C826F99A167AD548D35BA63AD448,
	ModelBuilder_Greater_mDD2DDC392DBCD92C459D47E01FBC1E06A89F3F1E,
	ModelBuilder_GreaterEqual_m097FE159BAF73DF2594852D9AE2125CEC1918104,
	ModelBuilder_Less_m16327823C713BB1EA9D1E1CB7909B2097A8DF8D5,
	ModelBuilder_LessEqual_m49DBE984C9A368A63CA3FB1C37E0F3E00AD750BA,
	ModelBuilder_Equal_m95F4EC55F798DDA5FC90F8D2699EBB69CFCFA463,
	ModelBuilder_LogicalAnd_m07BAE5E21791EC8D9D02B40B23AA7BB9ABF29DF9,
	ModelBuilder_LogicalOr_mDD38485BC954895162F9351FEE521928F7E0030E,
	ModelBuilder_LogicalXor_m97491B5A669E9301CFCC3E7921A7200920F3A651,
	ModelBuilder_LogicalNot_m2E648BE4DC991F9800B2051BC23688C9165968F6,
	ModelBuilder_Where_m32764B54189EE0D2108D16E6F9CFA78479685263,
	ModelBuilder_Pad_mD18ECA5D7432EFDA78CE90CDB48D7B655C8BF551,
	ModelBuilder_Border2D_mC11EBD6FD37156A661631172BBFF7CD3474B875D,
	ModelBuilder_Border3D_m73F9899C885CD202A42CDFCDC6218962FFD0304B,
	ModelBuilder_Pad2DEdge_mE5EBA5C11B9B2AC1CC03802EF1E0CB8F85EF82A3,
	ModelBuilder_Pad2DReflect_mEFEE08AF869DF07588234C46ACBD990F66D71D9C,
	ModelBuilder_Pad2Symmetric_m72723F04062B229A537BEF07C6B463F03EBA78CC,
	ModelBuilder_RandomNormal_mA36C69E48F7C7B1D1F647E71D55F479349ED1A86,
	ModelBuilder_RandomNormal_m59726391E325B9767C0AA5E199B318ADB6661B5E,
	ModelBuilder_RandomUniform_mAC32D7DFD1C2545BA5D9EFB27B6FA37C9C79569C,
	ModelBuilder_RandomUniform_m98FAAC8A14A2E63BE29E9400510A55BADFCB4ECD,
	ModelBuilder_Multinomial_m450305B8344BD320519D95ECABA490F97C6540A9,
	ModelBuilder_Reduce_mD44650E9FB3EC8AF080C7CFD184EF25D075DA6E0,
	ModelBuilder_Gather_m43BD72111D79E708BFE1D0FEE25A7E768DFB8733,
	ModelBuilder_NonMaxSuppression_m0939C2419B46F1D51D978B9957129A358619483B,
	ModelBuilder_LSTM_mE6FE31B23CA67C10DC189723A144CAFC920AAF1B,
	ModelBuilder_U3CMatMulU3Eb__17_0_mE3E719B1810960DB4E154461F4F8A984F3CD94AD,
	ModelBuilder_U3CConcatU3Eb__43_0_mBA8CF3623523DF74DC8C3E4864CCB8920FA47B5D,
	ModelBuilder_U3CPReluU3Eb__69_0_m0CA28778BC76F744C3BB8704C666D84E6023FA68,
	ModelBuilder_U3CBroadcastU3Eb__91_0_m294EF014A59FBBFEA5BDCD3BF8F76376751B62D5,
	ModelBuilder_U3CGatherU3Eb__122_0_mDADF2F12DD276E102CD0D58E409738F54D598E27,
	ModelLoader_Load_m3D5EFBAD1BC5C7FCD2C930635635FE8D5E3ACF8E,
	ModelLoader_LoadFromStreamingAssets_mF626A67D25785658E14B79E28D2E0E5C108E4C64,
	ModelLoader_Load_m4F1F7CDFCB2D852A7E2C0A90B2117FF3524D0A68,
	ModelLoader_Load_m593ECD60F3036862EC613C46EADA33137065D3AD,
	ModelLoader_Load_m91942742C79C8B4467B37C55223983269A008739,
	ModelLoader_ConvertLayerAxisFor8DShapeSupportIfNeeded_mA73384FF0BBE85EF4847F2A7BBC0EA5C6F1D06D5,
	ModelLoader_Load_m6102F41356744821445BADBAF7FC8BE022123542,
	ModelLoader_PatchLayer_mFB097442176E33BC3F2C0C90F2E9D23112C01B30,
	ModelLoader_SkipLargeFloatArray_mB0CB8F99E0A702B52A06A4024C0289B1DA2432AD,
	ModelLoader_ReadLargeFloatArray_mFA358CF3E143348477E749867E7D55A63246BF21,
	ModelLoader_ReadInt32Array_mB8DAB94928F1EFC0D7A552BC4CD038F75D5D2502,
	ModelLoader_ReadString_m96868F5B8D43B393D6E49CC45EFE5D051C769F2F,
	ModelLoader_ReadStringArray_m2C19B01926F9D755617CFB779EDC9352A0945564,
	ModelLoader_Open_m112726E37566596288CADC4526B8F43C5D45B3AE,
	ModelLoader_Open_m9F672F1EFAB2DD4FDEB8D32899A18BEC1B27F5F4,
	ModelWriter_Save_m61D2AE2694C7FA5AFC9E5C80F7EF373A6F499F1D,
	ModelWriter_Save_m5BED1A904006F102E233B350A469A6ABE1A82E70,
	ModelWriter_WriteInt32Array_mB4F92FB6CBA442267257809A9AFD24D85457133F,
	ModelWriter_WriteString_m9F7FEBB40F0F9ECD714A4688E76C45FC2288FA72,
	ModelWriter_WriteStringArray_mE887BBF5FC8C7F3C0AAEF07D691486A85560D9A6,
	ModelWriter_WriteStringArray_m99DFA07AED098D3FE1D38D717004CDCD5C767284,
	ModelWriter__ctor_m3FEB092294BF3E9D908EB6E15F46E995C39DC003,
	NULL,
	NULL,
	NULL,
	NULL,
	BLASPluginFactory_CreateBLASPlugin_m549B6591299DB5A9BDE12A42B293A639D74CE9EF,
	BLASPluginFactory__ctor_m1AD3F17C7D8CC5752AED1CB20B6973B8E9E515EC,
	TensorShape__ctor_m1A3103428162CEBD04A3BF4A9D66C8D23BEE43F5,
	TensorShape__ctor_mEF7D25C7FDB0C070C4F71619F7CD89FFDB9FE20E,
	TensorShape__ctor_mCAA028082267E3D75CE97AD2A9F0387D5E0EEEE3,
	TensorShape__ctor_mF3CDE30A296206E6BEB2B6E57AEA3F52DA790159,
	TensorShape__ctor_m61ED9407C90A40296A222FEAC3FFEF4BB82C7108,
	TensorShape__ctor_mBF7950F4D0B7B44B4030971BF85F8563FCDB60F2,
	TensorShape__ctor_m6691CB4250B956DC507AE2A8453083548090DF46,
	TensorShape_get_kernelSpatialDepth_m202062E96206B04057D433145767E5C0FAC57E86,
	TensorShape_get_kernelHeight_m5CCF3625A0AD960D281CDCEF87A6AE533A2D08C6,
	TensorShape_get_kernelWidth_m48078B2180BD5CBF66FDC88601F184ED24C323FD,
	TensorShape_get_kernelDepth_m61294864CDD2CA95BDF4FE5A3E241EAE9228D2D7,
	TensorShape_get_kernelCount_m7CE4ED13EB42CFCEE11E68711E4D3BB65B59F84C,
	TensorShape_get_flatHeight_mDE1B9FF77BA77BFFBB84F92D2DD9FF24525F9DD2,
	TensorShape_get_flatWidth_m8F935FBE9F859E9DEE0A4AF6AE1B070C392C5E5B,
	TensorShape_get_length_mED64FFCECD0B5464DEA299CD1D533D4B43F24E09,
	TensorShape_get_rank_mA4452B0A98BF4D1B443625037F11E81600513651,
	TensorShape_get_dimensions_m87D565722AEEE691398CD191B8D68AC2AD3D7605,
	TensorShape_Axis_m97699C7AE730ED8E1DC40F0985062EBFC803D1C8,
	TensorShape_GetPositionsFromIndex_mAE3753C61B106647C09D4AAA67A88572550C0282,
	TensorShape_GetPositionsFromIndex_m647D341DF3DDA6CAA37399643E1AE9F6147D9EE8,
	TensorShape_GetPositionsFromIndexChannelFirst_m4C286440DE355A775166184318B3C4D3C6858EEB,
	TensorShape_GetPositionsFromIndexChannelFirst_mB9013101E47558300C3AF18BBBF8DD86BADE4C7F,
	TensorShape_IndexWithBroadcast_m31962EC2A7B51CFC39AF0F31B62CE4A41471C822,
	TensorShape_IndexWithBroadcast_m69A70761FFBF905A9052B0D57A9D3BEBEA924C15,
	TensorShape_IndexWithClamp_m7F18051CDD5F638580BE527D6EE4CB6A55AEE2F4,
	TensorShape_IndexWithClamp_m53A095649338AE4FE2CB5F2117B61BCB0C4F7519,
	TensorShape_IndexWithClamp_m3D4F3C0B287546627533815E5D28F45161620E33,
	TensorShape_Index_m964C0073F93B6F7FE0A97F6FC04D6A545237E07A,
	TensorShape_Index_m203E076155FA395F8C4D7442E710DDFFDAE25821,
	TensorShape_Index_m9DA9DD57B8B03E6A9AFBE09666F374E6A4D274F7,
	TensorShape_IndexChannelFirst_mD0899AA4F6E8961CDF09814CE85DA762B13BE601,
	TensorShape_IndexChannelFirst_m0B7364A72558BECE039D2C45411BD36F2414AAE3,
	TensorShape_Index_m14D6AFBF8E29338F0FF58EA2125A385873DE5BFC,
	TensorShape_get_Item_m1E3FBF3C3F58B973F7AC4F5787A7DFF1D150D93F,
	TensorShape_set_Item_mAA763122A18EE53DD211B1E885C30A7CF003D477,
	TensorShape_ToArray_mACE433AC64B15C2D5920C90FCDB4C9CFE0200171,
	TensorShape_Squeeze_mB33A377A0EDACF622DA40A1E1ABAC865B9359853,
	TensorShape_Flatten_m8694D8ADE85AD35AE94409F6BBD3497F35D5B301,
	TensorShape_op_Equality_m1582842A5431530C36811518B053B2000D8E0AB3,
	TensorShape_op_Inequality_mE92430C828D4342A9C26FEE943DCBFCFDA4F2661,
	TensorShape_Equals_m9763D26E41D558B1711398FE946924911A9B53AC,
	TensorShape_GetHashCode_m54B49CAEC6E97B75B4059E0BE420988C5555F976,
	TensorShape_ToString_m4450E8AA6FD6FAC21501E1B6660925377CF78D28,
	TensorShape__cctor_m0F72B38174D98E7BEA7EC4E76A848842B7A7659F,
	TensorIterator__ctor_mDB76F7045F7F7C7DDC0ADF480DBCE4B9747A043F,
	TensorIterator__ctor_m60971732A224AEB1066BD27948E1DF3190F5D115,
	TensorIterator_AssignIndexAndInvalidateDimensions_m2477CB381776D0DBC4D7F233A8ACC43E35A8BDF5,
	TensorIterator_Next_m25ED528A2372C028D54CCC947F2A66C705D4F933,
	TensorIterator_Advance_m6830EA527CA7C40D7FE69B6AE5D19F483C9FC7CF,
	TensorIterator_IsValid_mC711BE08F5309CE85C3227C37EC1B8213D1F5A5F,
	TensorIterator_IndexInReducedShape_m8C34CD99740CF5E70BE91925E489531005136454,
	TensorIterator_IndexWithReplacedAxis_mFFDDE0D25A388F08FD4456CDDDEA1F10CDD947C1,
	TensorIterator_get_Item_m75B242D75B7F86B4A55B68500EBAFD6F7AD9BC9F,
	Tensor_get_disposed_m2BDC15CFE6B3786CCA05D1A5B4A7B8CC9EFC38B1,
	Tensor_get_allocator_mB8B499234D5A2EBEA8A923BB3F1BBC86EA78B2A4,
	Tensor_get_sequenceLength_m3989934DA39D36BEE987086E135F50BFEB6BFE38,
	Tensor_get_numberOfDirections_m89F049B1A54ACA8F9C5E0F19B1161B08FC6891E8,
	Tensor_get_batch_mF9B5F150A39E245A15B9430A5507F71F0EDAAD9E,
	Tensor_get_extraDimension_mC7501177DF64CBEDB6288D080C80CEBB2693DDDB,
	Tensor_get_depth_mF8F780CD0E97EE4D28BFD832B941AB1F94E6C04C,
	Tensor_get_height_m54DF2A2D9EF3C167574BF3136371F75E574DB624,
	Tensor_get_width_m396CC6C4BE79806879A9945EFE580922B6092E42,
	Tensor_get_channels_mC7C531E604E3E707BF0B6291F09C779065489C6A,
	Tensor_get_kernelSpatialDepth_m94392259FB495F58C7913585FC803B667CFAD2C5,
	Tensor_get_kernelWidth_mCAB2EA1B8D930369FA03FFCA2C9DB4779789B9CB,
	Tensor_get_kernelHeight_mFB8DB8C23D249AAE0DC4B731CD86D9320229EEA3,
	Tensor_get_kernelDepth_m37E5257C1B32867EB19596ACAB599946C30AA92F,
	Tensor_get_kernelCount_mFE3D0FB80F7AFB478F0CAE439759EFA0A8584A32,
	Tensor_get_flatHeight_m62E4BADE732077FD6A602F12E2F32C297B5D9D92,
	Tensor_get_flatWidth_m2216455685D58316C5C8322A962723660394A300,
	Tensor_get_length_m5A9D003FBBD9F32DFFE1796AC85121407F69D45A,
	Tensor_get_dimensions_m6ACF58E6DB2BE5138E358257B5DAB557C2BDFEAF,
	Tensor__ctor_mC2155DCB9E3B11BD640C65078EDB1D4D2056F7D9,
	Tensor__ctor_mFBDB9FED375AFB92E1A13F4A8527C79DA811E11B,
	Tensor__ctor_m8A7C73DD069766DAE32053957676A932BEE746BC,
	Tensor__ctor_m8A87A5B636DB946F5A966485E7E4C600A6ED0C8C,
	Tensor__ctor_m42E8C7F43E64ED3ED83DFE7AD505887F78029329,
	Tensor__ctor_mA965A8D0E557B24651D7505B8F2F463E9CDA993B,
	Tensor__ctor_mD7F948BC008C2627F7EC67244356AFF709CE0564,
	Tensor__ctor_m9C504B245586C2524C706853A6A033C080AE8F32,
	Tensor__ctor_mDEFE6A5D64BEC02BFD653F3191EE12619CE5D0BE,
	Tensor__ctor_m2DAC359107AF7259C83D75564843A01EF929EFB4,
	Tensor__ctor_mD30F0845C93D4DBF92AF2233884134F5E972B088,
	Tensor__ctor_mD9D6565EBA4C922D97DEEBD0BC2B93CC877FF257,
	Tensor__ctor_mC9FE419D3FD2E2FD94AE0BA00E0690D012B9518B,
	Tensor__ctor_mB1616425AF7935E3FB07728836389B4C62682F1E,
	Tensor__ctor_m6F08B624A98E71662232F3E3606D70B272347182,
	Tensor__ctor_mAAC9C135DC284358ED2174F4F152367F8C2566A1,
	Tensor__ctor_mF7D511E2D0B3685AF461F8148AB62E5B70BF4B02,
	Tensor__ctor_mC0EFD5370B9FACCD88AC1A772A9817B9E709D765,
	Tensor__ctor_m3B6649B779DE3D846064A53A38F3AD705A3FFDF8,
	Tensor__ctor_m72B78131E0164CD3D523E08FAF3A6424832299DB,
	Tensor__ctor_m21225D1517FDFE9E8775888D06399DCD2E93C4D1,
	Tensor__ctor_mFF4EBD710C074997DCA97B14E599C54763C446D1,
	Tensor__ctor_m1C96A51C5F63E4D9ACBAA1F4988EBD8FB99E41AD,
	Tensor__ctor_m67BC3772BCE3D2E537D892E649508D9A39E63A62,
	Tensor__ctor_m9254E3BD9778118AC32E98DC4D5AAE8E3DB651E8,
	Tensor__ctor_m770939DE51A67CD0D3258D2EE6C74C29A1096506,
	Tensor__ctor_m0C8ACD539A8B3837D6F1430FF7AE59D2AAA3704C,
	Tensor__ctor_m760E38105197514DCA6F7F87BA358368ACB15054,
	Tensor__ctor_m194BAB21F869D2B250DA82AA5C06F2175794C25F,
	Tensor__ctor_mD08FCD119532403D72124370EBBC5EAF66F0AA38,
	Tensor__ctor_mCE04D39D3B21139D7EB1897F86288AFF9F94C63E,
	Tensor__ctor_mF22E41D56819881BD9449CF80D6B36C895E92C3F,
	Tensor__ctor_m8B2150451C6B9FFEDBB975F35C4CEF0FCF8D197D,
	Tensor__ctor_mF9C885EC9C18A1BC13D4950AF4F80D5B68CFEDB3,
	Tensor__ctor_m0323759D32B3F41E866AF745F496DDBE729A3C09,
	Tensor__ctor_mA68575E3C4FB22706A0DE33B12D5E6387FF8559F,
	Tensor__ctor_m88AC301332A16F1FD45A55AD1E1BE3C70B4AB809,
	Tensor__ctor_m17F10667A7C397C251186943331D377939FCB00B,
	Tensor__ctor_mB8B01FB1EB445E95E9D94D040003041B9A400579,
	Tensor_Finalize_m0967C1BC87736230D3EB0D7AC2E59663F228B132,
	Tensor_PinToDevice_m67951A1EC55FD6E1F4F35DCA66626DD3873540A1,
	Tensor_UploadToDevice_mF8865A19C1E1D070DE3B06B51A55718075C5D89F,
	Tensor_AttachToDevice_m23B09DE633C5239360B2DA8513D03E2D2C02CD5C,
	Tensor_DetachFromDevice_mC6BFC2D218B68AA5011DDC91E6B96E28973D3139,
	Tensor_UploadIfDirty_mEB45F88C46EB9660A9704BBDAD4BF33AB8D06F62,
	Tensor_UploadAndInvalidateCache_mFE9B85BAD77E537060872036BB3773021E998A42,
	Tensor_PrepareCacheForAccess_m1818D1AF5A60C5A13456826F8E1B5B29956DE5AA,
	Tensor_FlushCache_mB42591251EEAC98EB2E9BD7C28D677D1B279F4AD,
	Tensor_ShallowCopy_mDCF79A294F169DF0B7E05885F747DF4F83523F51,
	Tensor_ShallowCopy_m3511728F74E71D60A89D45CBED37EF128E53484F,
	Tensor_Flatten_m2FE1BDB9E5894596DFDBB1C4DA023C9B4A0C9497,
	Tensor_Reshape_mB714087E97EEEFD7EA071E7CA21D36A84B7F6843,
	Tensor_DeepCopy_m099548B2C179C263E3AB9D4A12CA99338376A790,
	Tensor_TakeOwnership_mC3E615BE23B230A903656E6AF23CDD88E60239F2,
	Tensor_Invalidate_m1874588A09CDC7E301EC88814E9D7C11BC2758CB,
	Tensor_Dispose_m7C0B7E09711DD757F40C6B08E1E735D7199D391B,
	Tensor_ToRenderTexture_mCEF111B9491E2AC8D689F325E8E193EFFE1A57B7,
	Tensor_ToRenderTexture_m4A91F7014B4E23A35B76449675C26C7F406EF0CD,
	Tensor_ToRenderTexture_m5D9DCC7240F74DC02CCFED19BB22E1D5F9351C6C,
	Tensor_ToRenderTexture_m2E6D2F7705250C6E42AD5B5C16151BC26EABD97C,
	Tensor_Axis_m445DEEA5293ED98054C863477D2A962E8EB34E7A,
	Tensor_Index_m44EDECD54683B029B604D6259DB4D90333FDD2C4,
	Tensor_Index_mA54ADEADD26977FCD294F4FB6C2469FA89449D8B,
	Tensor_Index_mDC33330A41C1ED958EE16C2B8724369C82FC5116,
	Tensor_IndexWithClamp_mF342FF9043507C3333569741E6F32E83EAE57AB1,
	Tensor_IndexWithClamp_m1AB62044540339E5EC24C4287A0CB34E7F9298BC,
	Tensor_IndexWithBroadcast_m53E2D3ACFB629BE0B8BD9B89E076F359731935E9,
	Tensor_IndexWithBroadcast_m50F8EDE59AEBA22768D4E6889AAAE07D5C5C956E,
	Tensor_Index_m3AC339FD6AB212AA158536683914CBAF394C17FE,
	Tensor_get_Item_m29DE568512DD29B4F00A62CBCE954808A1ABEA01,
	Tensor_set_Item_m53CEABAC7B32A02213835BE81D80A7D91D044AD7,
	Tensor_get_Item_mEDD48D3B9D7F0A6D9EF937160D25DC60050D74EF,
	Tensor_set_Item_mE167D7E8FE594699CEE7DF40F54898E380DF8CC0,
	Tensor_get_Item_m415DED230817BCB69CB765433C303E7C088EB799,
	Tensor_set_Item_mC30AC77051A8A2517E7D476A3924D02630549CF8,
	Tensor_get_Item_m03D8B6D09FC2F2FFE550A00E4CE4BAFA65A7B13E,
	Tensor_set_Item_mE663CECF84EA193D2F2A8AF23BFF1AF63363BBC6,
	Tensor_get_Item_mCDD07C5DA72F629675C213599008B8F5B8E266AF,
	Tensor_set_Item_m7C74F6AB37103A52DDD581EBAEE88F614764B04D,
	Tensor_ToReadOnlyArray_mD4E8F9752105B7FD080AF6230A660CE6B8BF62E4,
	Tensor_get_tensorOnDevice_m0C7C9717F15D2B7D3FD92335317D23A58D278FC2,
	Tensor_get_data_mB428B2DD50236506ABF293EB2A9B7ECEF1082A12,
	Tensor_ToString_m144E94E117E9BB48BA2AFE17FA01A9518AD747B1,
	Tensor_UnpinAndDisposeTensor_m29650179C454912523E6B174E2F972397E646C76,
	Tensor_get_readonlyArray_mCD61C28205F1E157E455FF06733FB4C251841A32,
	Tensor_get_readonlyArrayOffset_m8A25CFE770B24773E3C44457E405A7ACD210166C,
	TensorExtensions_TestInit_mD90607A663302F998D6AE6E834B3BF60010B371D,
	TensorExtensions_TestInitCos_mDAB5414E99DEE155B75626559D1188AA538C5438,
	TensorExtensions_TestInitValue_m915009ACBBCB71D00E9F08625C6E87D7B7FFAFBC,
	TensorExtensions_AsFloats_m0BAFC6C4FC90DC4CE4873709FCBE5748B49E3464,
	TensorExtensions_AsInts_m48D2D679278C05D5DF6D6B2F2B23EF82D5B0769E,
	TensorExtensions_DataToString_m9E4C5C9F575396843B0F79808166F0D82DD30060,
	TensorExtensions_Print_m82C313A6BB11F8723BA1F57F3AEE15CF8287C8DA,
	TensorExtensions_PrintDataPart_m544CF6D03751FFD5B82007B180411726AA6651E3,
	TensorExtensions_Equals_mDD06265A4F84477A28FF3D3F0EB78E36ECB55FA3,
	TensorExtensions_Approximately_mE1E1EDC3084043E0807741CC259A1ADFB493B270,
	TensorExtensions_MaxDifference_mDB7F8115FC0EDD6ECFF82652C5AB6E84566B6782,
	TensorExtensions_Reshape_m658DD88C62AE214C7814EAC4554CA8DD15D4E931,
	TensorExtensions_ArgMax_m62C97DEF2B73E857DB1CCE33798AB0E2E467CFA9,
	TensorExtensions_ArgSort_m89381340ECD9BD00D9DCB58F23D9341FF4874156,
	TensorExtensions_Fill_m51F9B875680BE40DCEB0F2A878009F788D53FA14,
	TensorExtensions_Gather_m2708C6799C4A6574AB5763E08AA361BF49E6BD3F,
	TensorExtensions_Concat_mC911DF6196CD870F0226D8A1DD7722D32CC53C71,
	TensorExtensions_Concat_mDEDEAC0BA0F3515A467C23A2EF04191247B1C3E8,
	TensorExtensions_Max_m3CBE2324CF6DD0869A92ECDD2E0CCFC81E6E1548,
	TensorExtensions_MaxShape_m41681B16BF20940E2236C89BB4EB743C9A1310E7,
	TensorExtensions_Scale_mE00004B2C1CDD6FC7635EB8C4C62BBD3D263843F,
	TensorExtensions_Scale_m32ACA450FF4BDA579811132F501413320CDC4A78,
	TensorExtensions_Reduce_mDC12E8643BF5AD5A217A154E3D00DE1FBF4579CA,
	TensorExtensions_Reshape_m6537A04C92A4AFDD66AAC55BD91D1969EEE60D4E,
	TensorExtensions_ApplyBorder_m25B90A990920CF327669D7C7E1EFBCA48A87C964,
	TensorExtensions_AdjustPadToKernel_m0799918B7DE50162B26FEAFE4641A2AD57459FF0,
	TensorExtensions_AdjustPadToKernel_mCD51D8A2DB06BDFAB41A2E527FB952A19E67E892,
	TensorExtensions_AdjustPadToPool_mFBF4FAAF19E8537829A525E4A6036EFC353A04BA,
	TensorExtensions_AdjustPadToPool_mF9E193CE7DBAFAB8C698AF5B41540C87772E17D2,
	TensorExtensions_AdjustPadToPool_mB41DA0DEA1EA3C8C0B7C5939FC572BD7478A4807,
	TensorExtensions_AdjustPadToPool_m6F75D36A29D3AE276CA86C2077572852223AA13B,
	TensorExtensions_ApplyPool_mCDA54BC32A3187A9D32977501604686B0ACA65AC,
	TensorExtensions_ApplyPool_m0115093FFDBB087F846CC2A9389AECA4D5928F76,
	TensorExtensions_ApplyKernel_m9BF2905887C1D5FDC812742A73E7FC049287DEC7,
	TensorExtensions_ApplyKernelInverse_m7BA0C13E73BABE2E35FAFE3786353BE126735D37,
	TensorExtensions_WrapIndex_mC94938C2AF414BF123D518B2B863982134505838,
	TensorExtensions_IsNDHWC_m718669E28424F2BEBCF40F2AB84466689B3D11CF,
	TensorExtensions_Is4D_mBF9D164750644E2018D11571BB490BF7745E2FFE,
	TensorExtensions_Convert4DTo8DAxis_m13BA5F00D94D3C014791C3385EFC40FAF8D68844,
	TensorExtensions_FirstNotIdentityFeatureDimensionIndex_mCB908E34808F62BF82272754C902EF90774E306B,
	TensorExtensions_Is8DAxisConvertibleTo4D_m026F1F65B3ADB1A2AF435C19D5F3B9AE56025D55,
	TensorExtensions_AreAllTensorsConvertibleTo4D_mC4F081B40412F79D0A3612AF1AE2F10498CE4EE0,
	TensorExtensions_Convert8DAxisTo4D_mE37849EC5D4DFCE988EDBA2518023382C029C157,
	TensorExtensions_Get8DParametersNoAlloc_mCD7D695FA3419463C8623C9B3EB039885D6BB63D,
	TensorExtensions_Get8DPermutationsForNHWCPermutationsAndShape_m2AFA46BF1699C78DC7ACD7DC4C3A9EE1D5B5DE20,
	TensorExtensions_Get8DPermutationsForNCHWPermutationsAndShape_mBA2317A68CAEDA5DF764693E2822CB78D8760D15,
	TensorExtensions_ApplyStridedSlice8DUnsafeNoAlloc_mF2999DFEA89781862977B64ECC930F48E5935778,
	TensorExtensions_ApplyStridedSlice_m80755A717C2466FA000429114F0913B15F1D00FE,
	TensorExtensions_Permute_m4ACA80E441837E00BA7DC2335B53DD0E81D28ED2,
	TensorExtensions_Permute_mB3DF1833B04B25A5FADC022F378FDA8FE6427380,
	TensorExtensions_CreateFromTexture_m9EFA3C1CE28203D3C7D85CBF03061DED79FF4E57,
	RankInference_InferOutputRank_m7FBA4E5232691AF4B5D03ABCA9F652E64CFDF33E,
	RankInference_UpdateKnownTensorRanks_m5E63DF8DC6A9F141B314A8E465C6E9E4F0E2E53C,
	RankInference_ListTemporaryTensorRanks_mCB6C8746BD2D84627F9239973734EF060DEB7CBE,
	RankInference__ctor_m5FC11797645F3B11EB4358D516EFFF0307B05C07,
	ShapeInference_BarracudaLayoutToTensorShapeLayout_mD34DDEE9AEFDBF92A1C8BD62CD826619D2344014,
	ShapeInference_BarracudaShapeToOnnxLayout_m859843281157A3E356DB4316E0E3068A9C4B0362,
	ShapeInference_ShapeToOnnxLayout_m4738E51D99761806CF31A97669300D694CFB032B,
	ShapeInference_OnnxLayoutToTensorShapeLayout_m256EDEB6CDC608F99487F6A5B878060A69669BA9,
	ShapeInference_OnnxLayoutToTensorShape_m643B6954C3D8042FC6CD1EC0622016BF838A3F7C,
	ShapeInference_InferOutputShapeNCHW_m84CABD1B74914ED273F176741FD4FAD2829C7020,
	ShapeInference_UpdateKnownTensorShapesNCHW_m7ADE204FB6F7D028B831C84AB06528E587C0FEF6,
	ShapeInference_ListTemporaryTensorShapesNCHW_mEDA24AB933AE45BEFCC100654F42480B994FAD5F,
	ShapeInference__ctor_m1EEBEB3602D67DED7A7E48F67159BD38BA360C6A,
	ExpandOpsPass_Run_m20D6633C8C86DB974930C3AC87BA3746E60E4FC1,
	ExpandOpsPass_ConvertLSTM_m65F4FF9BC3F641C6D8E33090401B37CCB9E17900,
	ExpandOpsPass_ConvertLSTM_m84DB860A88EBC55B46D65395C3472CF44899D838,
	ExpandOpsPass__ctor_m6F2330863A8897F0FFCCAD6F434696330045BC8D,
	NULL,
	IRShapeInferenceAndConstantFusing_Run_m5CA19151A22894B338B9444074D8FC52C04B7CD2,
	IRShapeInferenceAndConstantFusing_ShapeToNCHWTensor_mF9D22C91340F0BC1C2665F81E00A4A62587102C0,
	IRShapeInferenceAndConstantFusing_FuseShapesIntoConstants_mB3E561CEDBD9327BD45BA96DC1C814D51D714948,
	IRShapeInferenceAndConstantFusing_InferAllShapes_m9FFA4584FED88A3312591F3794E42A024518007A,
	IRShapeInferenceAndConstantFusing_IsLayerKnown_m9053651912C47C9D448CEA3A2CA02852FD49C2E0,
	IRShapeInferenceAndConstantFusing_FuseInputsIntoLayer_mCAFE14DCDD10A762982B0DFAEFFB40A557C69A7F,
	IRShapeInferenceAndConstantFusing__ctor_m88F3E4394B3E13EC28A1FE53783F377DDC15E6E9,
	NULL,
	IntermediateToRunnableNCHWPass_Run_m87A018F867F240FC61320EB31EE43598215AB3FC,
	IntermediateToRunnableNCHWPass_AxisToBarracuda_m9F80C25FCBBF5717BBE65F0FC04C0464900AE837,
	IntermediateToRunnableNCHWPass_StridedSlice_mCD898356B5647597DC7565BA2AACFDECD96D16BA,
	IntermediateToRunnableNCHWPass_Transpose0UsingRank_m75AB21630EEE6F4B5C92F1FCD64B59A928BBE62B,
	IntermediateToRunnableNCHWPass_TransposeInput01_m1891C0332BE70A51F446C4FE1DFC309220C94A77,
	IntermediateToRunnableNCHWPass_TransposeInput0_m6F0F7049C18B53D8BBE7AD5A9C100B1D7EC64E4F,
	IntermediateToRunnableNCHWPass__ctor_mD634D7D80B5AD958B01F137DAAFA398BBA8DDC0C,
	IntermediateToRunnableNCHWPass_U3CRunU3Eb__5_0_m4F788068A29109EB4D37B4ADC992223250722A94,
	IntermediateToRunnableNCHWPass_U3CRunU3Eb__5_1_m103A35242B7046E46D8C5BBADAAED527B88B6207,
	IntermediateToRunnableNCHWPass_U3CRunU3Eb__5_2_m4B0A2A067513AF0C6C0BEB2199CAF0FD71817536,
	IntermediateToRunnableNHWCPass_Run_mBF5AF3F29A10A9131389562C910B6138EE20583F,
	IntermediateToRunnableNHWCPass__ctor_m416F1E6B63B09875E3B92E80C5F2889EE34FB57B,
	LayoutTransposeRemovalHelper_IsImporterLikelyNHWCLayout_mAC890CAB1A3F1B18205CC0A1D458A89D03A44A29,
	LayoutTransposeRemovalHelper_IsLayerTransposeCommutative_m8474C7394CFE8FB3490F12F19BC4AC9A2B3B5C00,
	LayoutTransposeRemovalHelper_PermuteShape_m9F453F7849D78BCB0944C5E49F548FCE417FEADD,
	LayoutTransposeRemovalHelper_IsLayerTranpose_m5F3E27F195CF157F9E91154F1FDFFBDDD0B75E53,
	LayoutTransposeRemovalHelper_IsLayerConv_m22DA8B597ED4104013DAEC23DFF5D43A9E451194,
	LayoutTransposeRemovalHelper_IsLayerReshape_m6230508A083C8B009E85E2CAEC287F913328EE21,
	LayoutTransposeRemovalHelper_IsLayerSqueeze_m24294A9CA3FE55AA91ACE3649F8A4C7C75B2AB32,
	LayoutTransposeRemovalHelper_IsLayerFlatten_m497C7ACED0A55E27E6DBA0105C546BC35BA7EA83,
	LayoutTransposeRemovalHelper_IsLayerConst_m3E753F4AC73E06D82FA10E2C11064C9B8917915F,
	LayoutTransposeRemovalHelper_IsLayerRandom_mA630E51B7081E093742E0F22B649A4E498E03294,
	LayoutTransposeRemovalHelper_IsReshapeTransposeToNCHW_m47ADC8973D159ADA383B85321C1645F3BE97DBAC,
	LayoutTransposeRemovalHelper_IsReshapeTransposeToNHWC_m0122DF6C7E663A32EA0CBDAE3E212AEA3C87B886,
	LayoutTransposeRemovalHelper_IsSqueezeTransposeToNHWC_m55FDF2EEC9B6CE8F68E52AE840AD6E1F2F381312,
	LayoutTransposeRemovalHelper_IsFlattenTransposeToNHWC_m425CCCDEB3A646B1E67645AF5092F1092BBC6D2B,
	LayoutTransposeRemovalHelper_IsLayerInput_mBB364EDC944439FA6C7B78AAD9D3FE83541E70A1,
	LayoutTransposeRemovalHelper_InferAllLayersChannelOrder_mC4FEB7E471C124DCC154FAA1AFB073CD7689CCF4,
	LayoutTransposeRemovalHelper_RemoveAllChannelLayoutTransposes_mBDA6164759EF16F4EA2560B456BF7D5C2D7542B2,
	LayoutTransposeRemovalHelper__ctor_m1507D04582A94EBB02F9DAD32242F68EFE1C5995,
	NCHWToNHWCPass_CorrectConstantsForBroadCast_m095E4F031B0DB91CF8F5608BA71A8BC9994AB06B,
	NCHWToNHWCPass_CorrectOutputLayoutToMatchNHWCLayout_mAEFBD10E5EF7BEAE4B419B2CE240A567C38638EC,
	NCHWToNHWCPass_InstantiateRewriterNCHWToNHWC_mFA36E9D6E6159A38195206DB6DAB4E8B3F032281,
	NCHWToNHWCPass_GetChannelsLastPermutationsFromRank_mC53A4FE3AA6F056CCD877BBD6C35A756EDAB307B,
	NCHWToNHWCPass_GetApproximateRankFromTensorShape_m6FEB446533124D39A91D9BED8A8D8184174E56F2,
	NCHWToNHWCPass_ConvertDatasets_m4F721087A3C73812A4EFF1E894B4E7AD1BA8BB09,
	NCHWToNHWCPass_ConvertActivation_m3FC50C5B9FF777E5FA95152B3C486C552E26CE38,
	NCHWToNHWCPass_ConvertNormal_m61D7322DE8328C89DB4F64179EEE969B1A4C6D77,
	NCHWToNHWCPass_ConvertShape_mE802D3BE0809D14E715999E0C2C7DF3C0BE96DCD,
	NCHWToNHWCPass_ConvertAxis_m4271E7FC814A32F0175945D993F9B360424C908B,
	NCHWToNHWCPass_Upsample_mAB0D4940E6CD27FB7E104A32AEA6B8875CA6B4A2,
	NCHWToNHWCPass_Reduce_mE992C86029EED8808707D7C21E72DDBF48CC2B02,
	NCHWToNHWCPass_AxisPermutationsForMappingNCHWLayoutToBarracuda_m93C322EAF66BEE7D3AC92520B2A9F9260CE17B40,
	NCHWToNHWCPass_PermuteToBarracuda_mFFE64A8967E76174C82BBFE065F82B6E69102DA2,
	NCHWToNHWCPass_UnSqueezeAxisPermutationForMappingNCHWLayoutToBarracuda_m6BC6BC2D7D9AF57B6BF089FB7534CDE560C0E64F,
	NCHWToNHWCPass_SqueezeAxisPermutationForMappingNCHWLayoutToBarracuda_mB4D6315A51CD89A881B8AF5395A114B5DFE050BE,
	NCHWToNHWCPass_GetPermutationToMatchReduceWithDroppedDimensionsFromONNX_m9D47720B0AAA4D2915AE87640E1E472AA141FD82,
	NCHWToNHWCPass_InstantiateRewriterNHWCToNHWC_m665C77D6BC3B892408096A3120E924DE6136BACD,
	NCHWToNHWCPass_ConvertAxisNHWC_mB122D0CD5593509D49BB40D7B01C699EEEF43AA3,
	NCHWToNHWCPass_Run_mCEA02446B006AB55C6F62300158EA85AFCE3688A,
	NCHWToNHWCPass_Rewrite_m33C2F287364FAE3929FC04B8D56A10B1FEA6638C,
	NCHWToNHWCPass__ctor_m40E659AFCBEBBBEB820AEBEBC8F6414440F26CA6,
	NCHWToNHWCPass__cctor_mE2548DE9BEBB3313859FA98F5543558F24DE90F1,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_0_m42E4474C15152D839347A69CFDDE5014124A1654,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_1_mC42910E64C307B3F6BAB40BB76D0FAB46C2D509B,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_3_m7728FB334DC06D70DD1D349017A796973BF242C8,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_4_mF78F0024AC5452430AD93A29761813141BB362E0,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_5_mB3F85D53BE5FB2F38A1D2CD34CE5EB46B33C3C6C,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_6_m61C34AFD4BD6FF6E4E216A97234D71913EE69EF0,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_8_m40A8BB83A02582C7E2908D4039DB88042CB5D171,
	NCHWToNHWCPass_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_9_m6DEBC1ECAF3864A22B81669FA530B070063A2206,
	NCHWToNHWCPass_U3CInstantiateRewriterNHWCToNHWCU3Eb__17_1_mDDE75F49F03B1106F60859AB5BC84477B5F3DD23,
	NCHWToNHWCPass_U3CInstantiateRewriterNHWCToNHWCU3Eb__17_3_mA37A260E53F2E58B2DBD6799F69150F2663F7A53,
	PreserveLayersPass_Run_mA7F042C1F2C8D0209236A5A5739A438A5018BA43,
	PreserveLayersPass__ctor_m183DCFDF4BF132DF4B56E874F647188F71EEA5D2,
	ShapeGatherContractionPass_Run_m1BCBB2A9616A1C9A52450A1B1CEBFB8C773744E1,
	ShapeGatherContractionPass__ctor_m49E376749DBAAB1BFAC4469930B1A989D3BB3054,
	ShapeGatherReshapeToNHWCRemovePass_Run_m751CF57B5D34D45864F5E38561B3EA598E77D655,
	ShapeGatherReshapeToNHWCRemovePass_IsGather1DAndConvertingToChannelLast_mE8DBB4FB2B95D06BC8ED56BDED52EC1794B6C17D,
	ShapeGatherReshapeToNHWCRemovePass_CanLayerBeRemoved_mFCCB3701313CE3CBBA37797CBDEEFAD375C67FA2,
	ShapeGatherReshapeToNHWCRemovePass__ctor_m105DFBD553D71F53337B0655DCF24609E428FEDD,
	ValidationHelper_AppendWarning_m42D706F966186DE9F44FB2719274EB2103084E11,
	ValidationHelper__ctor_mB436B9CECA20778EF97F22A4838B1D560661D05D,
	ValidateNCHWShapesPass_Run_m43FC49040DD8E543ACC01C5F4272EC98D6A0E9ED,
	ValidateNCHWShapesPass__ctor_mD51D03C8A887317BB7B48659A9315FF1CAFDEE60,
	ValidateIntermediateNCHWModelLayers_Run_mC60B194ADC6E9F5D13ED1A45201DDBE517A5CA0F,
	ValidateIntermediateNCHWModelLayers__ctor_m8B7861F63FD9367E2FCE3515FD0D717DA19B708B,
	ValidateBrokenLinksPass_FindBrokenLinks_m809F56E0352F1488100EFBF7419A9AE192576605,
	ValidateBrokenLinksPass_FindBrokenLinks_m3DF800B6352F755655E92584CCF034DAA202B62E,
	ValidateBrokenLinksPass_FindBrokenLinks_mD57BFB181B3CCC5F44698FDD651B61A58F503FCB,
	ValidateBrokenLinksPass_Run_m49C344462D38C30D043EA0440CDC022FF1319C45,
	ValidateBrokenLinksPass__ctor_m219423B4302E2A3937D45EB8D1794A00D6BF4A87,
	ValidateUniqueOutputsPass_Run_m5231C790BF3A13335C9CCF6A3FC968BC9B9E2474,
	ValidateUniqueOutputsPass__ctor_m6249AC72F045E36629FD311683119E410919EAB7,
	ValidateUnconectedLayersPass_Run_m5A856747A281586C8B1E8CC0F86E33040A01FC78,
	ValidateUnconectedLayersPass__ctor_m6FFA2D57154CFA2F26B7436E0858485A7657E47F,
	ValidateNCHWPass_Run_mE43ACE2D015146EEB76CE5BADB48D7D6201739D5,
	ValidateNCHWPass__ctor_m9D18D114148330765D0FEA721212F38429AF100B,
	ValidateNHWCPass_Run_m49DDBB8DC364621825051E58AE35235C2BC87EF4,
	ValidateNHWCPass__ctor_m39EB4B0C75FEF0D5549BE3BC1F98192F25DDA225,
	RemoveNoOpsPass_Run_m5257634451CAEB2964407186C2A9B45C52349EE7,
	RemoveNoOpsPass_IsPermutationNoop_m7F08ED84D5E0E468E0B82EAE4E76B01F7A456D9B,
	RemoveNoOpsPass_IsLayerNoop_m921468F8F7BC75254EFC4CACC1F596FECAED493F,
	RemoveNoOpsPass__ctor_m638993AD49F282F8405449BB88093E7BCF7BE43C,
	RemoveUnusedLayersPass_Run_m3F31BF8D0B74EBC26C009666733FE91F4D387761,
	RemoveUnusedLayersPass__ctor_m1C24B10979CD948F7987DDED2921DACCC316C9DE,
	ConcatenateTransposesPass_Run_mD30B1395F07CFACB1A22B1F9F153CF1C9F18D5E6,
	ConcatenateTransposesPass_ConcatenateTransposes_m1D086F30E427BA66EC7F61651B00D663F582E27A,
	ConcatenateTransposesPass__ctor_mEFA7B44EDA522CD574F47020B56B06EFDE9BB9D9,
	FuseActivationPass_Run_mE00131E88A813E9BB3E6FABC4FB268604A6861AC,
	FuseActivationPass_IsLayerSupportingActivationFusing_mDAAD7ABAF74ED22A32C9FE2EA70EC772BFF2C12E,
	FuseActivationPass_IsActivationFusable_mEFE1D657E165D3972FD926E20F532CA5A3380026,
	FuseActivationPass_FuseActivation_m7A9D085B6CDF2B0B24BE2FE7AEEA25F761E69452,
	FuseActivationPass__ctor_m6DD8631A14D0B3F1A6780DAFEB57E3BE17C58FB0,
	FuseConstantsPass_Run_m4ADBC762D20F30461893FB2DCA8D8A7BB08C51A4,
	FuseConstantsPass_FuseConstants_m28BA03BE1E4655BBB065E621FD1BC32A5A23DD28,
	FuseConstantsPass__ctor_m3BDCFC966BD529FB430C20B3B290F5D053B842BF,
	FuseLinearLayersPass_Run_m2F5081A666FA966ED5F756D404F90BF46163E8A3,
	FuseLinearLayersPass_IsLayerConstant_m9F02E12D9255588F0F208945FE9D88E5F5D44243,
	FuseLinearLayersPass_IsLayerFusedActivation_m9E78EEF63F8E96FF98D4F233CBE3D68724A1370A,
	FuseLinearLayersPass_LayerComplextity_mCD93C62B9DC2D26B6F0534310881333A6EADCD9C,
	FuseLinearLayersPass_FuseConsecutiveLayers_mFB019BA1D4883181D3E2BF6E419E2070DB5EEF50,
	FuseLinearLayersPass_AreLayersFusable_m91264B1B84892B63EF07F712B76E1607DA20A829,
	FuseLinearLayersPass_PackConstantsForMathOps_m116C1594CE7072C20FDB356846A6B4A4E0C4A285,
	FuseLinearLayersPass_UnpackConstantsForMathOps_m37E3C057C091A03F861C459F3571385CE2BDB72F,
	FuseLinearLayersPass__ctor_m22FDA4DB8958954B74CC989F365EFBDA3DB7A0F4,
	FuseLinearLayersPass__cctor_mB1DDDADA30B78E94E8017AF6581367890A51B7FD,
	U3CU3Ec__cctor_m964AFD4CB51FFB3A1537D709C47E9F0004ADD481,
	U3CU3Ec__ctor_m7A259799055559E7C09693D008CEFE92BC8330D5,
	U3CU3Ec_U3CPatchModelU3Eb__5_1_m336013E7023D18899335E7F9B81183BADCB413AE,
	U3CU3Ec_U3CPatchModelU3Eb__5_0_m8C1530ED6B11ED927143D40E014019CADD75988C,
	U3CU3Ec_U3CValidateModelU3Eb__6_0_m2EBC8C512C6C5543CB5088A57EA5113F1DF8F318,
	U3CU3Ec_U3CValidateModelU3Eb__6_1_mE1D18674B15A36E13483B6960EC2C87BF0DF9D2A,
	U3CU3Ec_U3CValidateModelU3Eb__6_2_m94FE2AABE23B72EAA32B117B13B626DEBD59BCCB,
	MatrixMultiplyJob_Schedule_m27CCAA5322216A7272A04DC6B6F68A1F26E58E05,
	MatrixMultiplyJob_Schedule_mF6F6026AAFB6CCB88D0E8308FCD0F78CC864F6FF,
	MatrixMultiplyJob_Execute_mEE36B8FBE0AC0A21A4748BDD3BB91C00246C0569,
	MatrixMultiplyJob_AllocBlock_m9F4C46DE9E8C17D0404759362E72CAC03BF82EE9,
	MatrixMultiplyJob_FreeBlock_mFBDCFC3881996C067430E8EE95DEE05E2288C2BF,
	MatrixMultiplyJob_MultiplyBlockUnroll16xh_m4D501CC1E04567DCE7FD38CEDD13AFCF62B2A351,
	MatrixMultiply3x2Job_Schedule_m1BB802DBA082569EFA3BF1B1FACD03D290AD3DCD,
	MatrixMultiply3x2Job_Schedule_m13FF3708320CECAA12A203A91EFA1319B8A664D3,
	MatrixMultiply3x2Job_Execute_mDD41419CDF94F35CCB538D2A6038C8F4D0FC1F78,
	MatrixMultiply3x2Job_AllocBlock_mE1D56B937803CB0282738FDA47A06685F4E79612,
	MatrixMultiply3x2Job_FreeBlock_m15179C2C213113852BFFBA9694736B2B997A8EBD,
	MatrixMultiply3x2Job_MultiplyBlockUnroll16xh_m87069355404F52C75566F5D615243D1E37002327,
	MatrixMultiply4x4Job_Schedule_m11EFC9C7116199F85DF51401F7F9CF688740715A,
	MatrixMultiply4x4Job_Schedule_mB37E7A635A37F89617136611FD58CFA168734719,
	MatrixMultiply4x4Job_Execute_m97BF410D73026D9E2AF25493D8CAEC3C25599190,
	MatrixMultiply4x4Job_AllocBlock_m641795095EEAE3A212902E53EE107CE365F47732,
	MatrixMultiply4x4Job_FreeBlock_mF9C3A653B7A0759C98C7CC34CF34EEEF119AE215,
	MatrixMultiply4x4Job_MultiplyBlockUnroll16xh_m93F5A9BD076206AE9F8CB07D5C4BA9390521B8AB,
	Im2ColSliceJob_Execute_m773B17C48DEA2007E285D0ED6C6315D0DB947F31,
	MaxPool2DJob_Execute_m9BF185A23B461039C7CD646FF7AB338777A1C942,
	AvgPool2DJob_Execute_m57F0211D2BAF4A65096649E20E2D1997217BAA56,
	DepthwiseConv2DJob_Execute_mB44D7B11C489577A08D8BF7BA80DC53E3F51AF9F,
	PReluJob_Execute_m6204897FA9E3B444FAC4E5BBDDA72E34B0F85420,
	PReluJob_PRelu_m9B8928FD9CCA194EE2DF4E1E667B707F15359C50,
	ReluJob_Execute_m72912A14F95D8D03DD1CFEDD85A07CB6EC5913CB,
	Relu6Job_Execute_m79600547CEC3A1940B6EE6A3BC4DE708E36AB614,
	LeakyReluJob_get_alpha_m886442C6EE80302AA6BCC5CC223E15D39E272710,
	LeakyReluJob_set_alpha_mB2924217DAEA5ABC22E1840AF95496D08751BB22,
	LeakyReluJob_Execute_m9FCB64D1CB749B6D36F343DC311D75FBECAD952B,
	TanhJob_Execute_m158F898A267797CC2588F8130723BB353E486DC2,
	SoftplusJob_Execute_mFE7AA25DB056FCDD8F617BE1CC7F936DC3DBF54E,
	SigmoidJob_Execute_mC5F893C95A8A00FFF4B4A9C6BDFD6EB3643B07FC,
	EluJob_Execute_mAE936B9401BFD74C2F0312092E9616B70BA8B8FC,
	SeluJob_Execute_m745E156A7B4BDD719F958BC72A9BBB8E71853B9C,
	SwishJob_Execute_mF21A1B36747DDF9BEBAE661BFEC0A6ECD2713C2E,
	ExpBiasReduceJob_Execute_m74E098A135ECB4D17908822823F82DECD91FAB8E,
	SoftmaxEndJob_Execute_mD34E259483671D7B38EF12856EEAED7F4B1B6B88,
	LogSoftmaxEndJob_Execute_m08B2FC3E3D5865AE0E5334C14E1663333EDBAD7A,
	AbsJob_Execute_m82E634F7930C308464776E772F40B784A852F840,
	NegJob_Execute_m3B9EF9DC20B88FBD2CFE5A635CA993A15C019F10,
	CeilJob_Execute_m2450A5601242A6CE3DB9774EC46734D39440F2D7,
	ClipJob_Execute_m9388037D9CA0E67D09808A3D2F0926EE242EC4CA,
	FloorJob_Execute_m0DEAFF731774B5DDF430CED756631A4EB9B822D2,
	ReciprocalJob_Execute_m73878A023826CACDBD77A153DDBB6CA9934B9805,
	PowJob_Execute_mD8D0C447DD0A54E397AC304C72CD4BADC959CEA1,
	ExpJob_Execute_m0E5BBBB70A12ECD6AA54E83BCCC534E7B34F4AC6,
	LogJob_Execute_mD0C0D680DB6A510485738030ECDC459CF46CDF0A,
	SqrtJob_Execute_mA93818E207938E825564285740F3C7B56D590B63,
	AcosJob_Execute_mCA702020750F4ADE2D2D7892534691DF73E3D5FC,
	AcoshJob_Execute_m68DBEA7F51712DBB27EFECBE0F1D01DEC34BBAB7,
	AsinJob_Execute_mB57217836C705AB952A9173A60D0C7D2AD91C029,
	AsinhJob_Execute_m4AFF19D044E0E8F5804C860E15073EA063CE4643,
	AtanJob_Execute_m4AB2D86FB4A0EDCAD5FF466E31439D141C2365A7,
	AtanhJob_Execute_m4844DA6B2C0B579D3C293DF91CE31299794BA0BA,
	CosJob_Execute_m445A94BB767F848108A8E650DA901D60DC15BDD4,
	CoshJob_Execute_mB9DD9DD2D959896FBF384675D8FB35EB64DD8BDA,
	SinJob_Execute_m0CD61E5C990221E7DE15F72AC9405947652FABA4,
	SinhJob_Execute_mDEF3CBF65CBCCF4E98C481D985D643007DD160D8,
	TanJob_Execute_m2CA241B80D795FCA9AD8E50D6C2E9A3A2B12F552,
	ElementwiseAddJob_Execute_m83D82FE92C96EF846A9115063487BFEFD7E83913,
	ElementwiseMulJob_Execute_m21EF8876CE60DF524B3461B0A81EC52CEB782200,
	ElementwiseDivJob_Execute_mBEBBBCDBCBF27F768BE420397A9FE8EDCB076CE7,
	ElementwisePowJob_Execute_mE4329F018D1AAF548AEFFDEDE596CADFABA8420C,
	ElementwiseMaxJob_Execute_m62CFBA776A48F922B664281FCE82B75ACB82F717,
	ElementwiseMinJob_Execute_mEF3E6BA3A011DFEE0F259144AAECE21F0C4D35E0,
	SetConstantPaddingJob_Execute_m0FBF8D6271F2D92AE14299C1A2F8CE34CAADDCCE,
	SetConstantPaddingWithStrideJob_Execute_m8C1FC3C5213A3AD734C081AC588AE52912EFDEDD,
	ZeroBroadcastJob_Execute_m3372F65507303FF078F11487BC5DC566905BED68,
	CopyJob_Execute_m096190F05069634457887E53821A06F93F12E607,
	CopyStrideJob_Execute_mA2411005CB9292781DE2CBBBD83F4509FF728109,
	VectorBroadcastJob_Execute_mC0BE1647C5A7C65D922BADE90971AE3E679086FE,
	GenericSliceJob_Execute_mF66997D1B935D075B5D1B01D8FC183398898665C,
	GenericStridedSliceJob_Execute_m672E35E9E80405D06CCF9122C08F02BD2C1E281B,
	ScalarBroadcastAddJob_Execute_m264B5F8D68692E7771BC5FC5E9A66E9BE2532B68,
	BroadcastAddJob_Execute_m5953A50C960895D0590372FC6DA015FAEBD9A9BF,
	ScalarBroadcastMulJob_Execute_mDC4CA259CD93648DAB327AE29BC5055FDCAAE94D,
	BroadcastMulJob_Execute_m62B76899EA06312D974CDAB7B4FE4FAE63C20D01,
	ScalarBroadcastDivJob_Execute_m21386BC4D50BA041794CD2E0DA753E0F3F40DCAF,
	BroadcastDivJob_Execute_mAA2C6EACB6EA2FF8BE02084A59CDD09C1767A274,
	ScalarBroadcastMinJob_Execute_m02CB1A5717E66BD1778AB0E1B919AABFBED94333,
	BroadcastMinJob_Execute_mB6C6D7ED28AB573384F1F71590E5A292BC684DCA,
	ScalarBroadcastMaxJob_Execute_m30F19AFF0DDB99D1394C6CDCBD69E1FAB6C9F6BA,
	BroadcastMaxJob_Execute_m7260CB723604DE2803339B7BDD30D512BF72668F,
	ScalarBroadcastPowJob_Execute_m976281FE3C2E8BDC9ED5D2830FBDDAC96E87B484,
	BroadcastPowJob_Execute_mA374941F51AEE0633836F9CF5E80CBDB6BA3BA39,
	GenericBroadcastJob_Execute_mB5089F15ABD18BF03FF4F9056ED7D52AE7239547,
	VectorBroadcastScaleBiasJob_Execute_m3386A2F452399A839465DCB309A34064BC5D8A6B,
	ReduceMeanJob_Execute_mA69FE22E4422FA3A59DEF76E747C06C30C1A2F0B,
	ReduceSumJob_Execute_m78610E8A3BBCDE7421B61B49EDD8D799E858BF6E,
	ReduceMaxJob_Execute_m17C81237FB727857F50C63E81A7B3757C7AD060A,
	TransposeJob_Execute_m77538C9A6D0CE8B842F115ADCA8A49CF1F67CAD0,
	MemFreeJob_Execute_mD68AED70903F88722B4D9F29976AFB9981167C04,
	Entry__ctor_mFBDE9EBA6A2A22B6FAE824639160BB49929DFB8D,
	Entry__ctor_m54A9CCBE9BBB6E0CB4C1B0F1166CEF3F48809792,
	Entry__ctor_m6F6A950E84E11362A7C5CE42063FE9C7FEA8683D,
	Entry__ctor_mA0D6FC31396814355C6BD16857DA2467C9277913,
	KernelAssertInfo__ctor_mD56DC894C510657645B4B18EF011A0AC774478E4,
	CompiledLayer_get_kernel_mA831B770A79E21F8CBFFB0C0B44268C203A593F2,
	Seed__ctor_m5B44FBEDE56A64B216185D4206EF9A0ED370A78F,
	Seed_Dispose_m964720BA7F7FF547828D714CF1699FDC7E0F35B3,
	U3CU3Ec__DisplayClass29_0__ctor_mEE02DEE71C123C23FB8F709D753978FAF8BAF58D,
	U3CU3Ec__DisplayClass29_0_U3CBorder2DU3Eb__0_m478BFA1ED3735BE0A9E9184191C53CC201201501,
	U3CU3Ec__DisplayClass30_0__ctor_m0EF4D32F42E15D349CAC232019D7195AC2A626C0,
	U3CU3Ec__DisplayClass30_0_U3CBorder3DU3Eb__0_m663AC7B7FC031C073887C63D3A3E1DAD5426E05C,
	U3CU3Ec__cctor_m7F929074A3FB62B3E4045F9F36E936BB99FEEA7E,
	U3CU3Ec__ctor_mDFE44306CC04E6429AE630BC38519927B7CC73EA,
	U3CU3Ec_U3CPad2DReflectU3Eg__GetReflectPaddingU7C32_0_m9C638BB66CED7BE9D6911772D35462F2C0AD222C,
	U3CU3Ec_U3CPad2DSymmetricU3Eg__GetSymmetricPaddingU7C33_0_m5ADBE22D7DE7DDE1129D37A126A23A210138993B,
	U3CU3Ec_U3CPad2DEdgeU3Eg__GetEdgePaddingU7C34_0_mE461C1BF5DAF409F1F0C1DAAFC92B202E7A5A1F1,
	U3CU3Ec_U3CAddU3Eb__92_0_m03FB7AAF3816F01F8815BAC0F1693DB16285C144,
	U3CU3Ec_U3CSubU3Eb__93_0_m4095B766D33E94774A6FEF50B655D36B5C0D8567,
	U3CU3Ec_U3CMulU3Eb__94_0_m4AD3923BAACAE62EBA92DA32F5F7A2B185E97C78,
	U3CU3Ec_U3CDivU3Eb__95_0_mA73A06B4BC03CF1EAE7327534FCA30DCF2ED66B2,
	U3CU3Ec_U3CPowU3Eb__96_0_m7A0D3A90722AA57E10D48AE27A40FC8532222518,
	U3CU3Ec_U3CMinU3Eb__97_0_m45F9E550842AF84555E34543E4758069E4394717,
	U3CU3Ec_U3CMaxU3Eb__98_0_mC3E6F1E0325A6B0ED33C521E38849E340C503432,
	U3CU3Ec_U3CMeanU3Eb__99_0_m97D2BFB37E0DD831DB01AF846964B5A591647B02,
	U3CU3Ec_U3CGreaterU3Eb__108_0_mF589B338D00CA6B899080F9EB2FBD5FD4B8E61DD,
	U3CU3Ec_U3CGreaterEqualU3Eb__109_0_m161B87704D3D9063D8C9375AB626868CA1BB81B8,
	U3CU3Ec_U3CLessU3Eb__110_0_m677EE58786DC79E3D9AF7E45B1E9C90C1A46F760,
	U3CU3Ec_U3CLessEqualU3Eb__111_0_m191F83D710824871F04002B958B023684B4559A5,
	U3CU3Ec_U3CEqualU3Eb__112_0_mBEA0F844435585327F2FC58ABF2541F0BC4CA208,
	U3CU3Ec_U3CLogicalOrU3Eb__113_0_m1724B24801B382B3F37A43C6F491E04F463CE677,
	U3CU3Ec_U3CLogicalAndU3Eb__114_0_mB66A87F195CC0DB3527DB8CE9C32F26F396D2884,
	U3CU3Ec_U3CLogicalXorU3Eb__115_0_mF366441BEAEC0356969ABA3E25B08D229DA98F8E,
	ConvertFromOnDeviceFormatHelper__ctor_m2709A71045C0165D6898B1DABA02F7443DF61F4E,
	ConvertFromOnDeviceFormatHelper_GetNHWCData_mBD47D978C28D8C0EEEFC4B3AE85D6B08115FE4DF,
	ConvertFromOnDeviceFormatHelper_ApplyConversion_m5347A7C8B19F907B89B5F637F83B2DEE5A483256,
	ConvertFromOnDeviceFormatHelper_UnrolledInnerLoop_mB1A01940660684CF77F8E4635DB82893AD3E180F,
	TensorDecl_get_ShapeId_mD2EE349CD8B7A2AABCE7AF5B09C28588FDF25873,
	TensorDecl_get_ShapeId8D_m84D9B25B0595F08CCD9749C2E5685BD094020347,
	TensorDecl_get_InfoId_m08ADFE209B22EEA180E561810F54BA9673330361,
	TensorDecl__ctor_mC20A1AA25171E3FCC7A86D19543109C3E871E99F,
	U3CU3Ec__DisplayClass77_0__ctor_m836169A20E4CF1C4ACEFCCD3D9F0F3E376BD5517,
	U3CU3Ec__DisplayClass77_0_U3CMaxPool2DInnerLoopU3Eb__0_m9DD3D5A767713A43A74BFBF2E240668DF43D7C71,
	U3CU3Ec__DisplayClass79_0__ctor_mEB6A233AB0AFB363400F363E8656EBE6C795D127,
	U3CU3Ec__DisplayClass79_0_U3CAvgPool2DInnerLoopU3Eb__0_m13CADDFF268194C61A83476B431D2E25E246B307,
	U3CU3Ec__DisplayClass84_0__ctor_m4C44C59AB9531F69320485B98230B5A272C101A7,
	U3CU3Ec__DisplayClass84_0_U3CIm2ColInnerLoopU3Eb__0_m4FA6332D72A3430A0267F84750BD9A797072B859,
	U3CU3Ec__DisplayClass88_0__ctor_m8532322B9BF920742FA770033B9E9ACF7CE613FA,
	U3CU3Ec__DisplayClass88_0_U3CDepthwiseConv2DInnerLoopU3Eb__0_mD9F8C94B0B551F71E2956839A6695B3B02DD0064,
	U3CU3Ec__DisplayClass89_0__ctor_m930FA609DF5F28509EF02D4D2B2D13B82B672AA2,
	U3CU3Ec__DisplayClass89_1__ctor_m3D2A36B878C04B5634916959D909E228F8973838,
	U3CU3Ec__DisplayClass89_2__ctor_mD205AABC6481EB500F7BD386DF87C2A9A3EDAC4B,
	U3CU3Ec__DisplayClass89_2_U3CApplyPaddingU3Eb__0_m1149049BD19ED46184AE6D3873B16C4A1F689FB4,
	U3CWarmupReferenceKernelsU3Ed__12__ctor_m1A9897F4CE5B1974AECFA3F0488C811D8259CBAE,
	U3CWarmupReferenceKernelsU3Ed__12_System_IDisposable_Dispose_m9C75A73D5746A8331AB8DA3F8D17B57AEFB1ED1C,
	U3CWarmupReferenceKernelsU3Ed__12_MoveNext_m74732167080A3F3CF653C306010621AE5E36C582,
	U3CWarmupReferenceKernelsU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4EE23533D2A14F8EB03094FAF197093ED19A902B,
	U3CWarmupReferenceKernelsU3Ed__12_System_Collections_IEnumerator_Reset_m1C3DF8B172D5D7D2AF78DD8CBDBA812567E6A76A,
	U3CWarmupReferenceKernelsU3Ed__12_System_Collections_IEnumerator_get_Current_mAD14FBAE10E74753D8821600A5DA9B00C0C699FE,
	U3CWarmupOptimizedKernelsU3Ed__13__ctor_m68AE0FBE1E3CB1FA95A86ED58F563750399AE905,
	U3CWarmupOptimizedKernelsU3Ed__13_System_IDisposable_Dispose_m78B85B23B7417FDE1572F02706FF87763D22FA6B,
	U3CWarmupOptimizedKernelsU3Ed__13_MoveNext_m168409ABF40AE15B38081F2B6715EFE619FB7E94,
	U3CWarmupOptimizedKernelsU3Ed__13_U3CU3Em__Finally1_m761ADEA6239F5B479F124B39597DD5B35A45D017,
	U3CWarmupOptimizedKernelsU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m16FA34EEA088D3ADE9689585ED37C1ACDDB6AB58,
	U3CWarmupOptimizedKernelsU3Ed__13_System_Collections_IEnumerator_Reset_mC5E170AA654441C57876963D3047C0A77106C1A8,
	U3CWarmupOptimizedKernelsU3Ed__13_System_Collections_IEnumerator_get_Current_mEEEE606C5066D16BDFA1F6C87831C72265BEB5A8,
	U3CStartManualScheduleU3Ed__33__ctor_m5F848ADF53CE9D4118DBA1BF3475AA81C6DCE3E5,
	U3CStartManualScheduleU3Ed__33_System_IDisposable_Dispose_m357FE9444EA0271E7C803E505C51227F1B368588,
	U3CStartManualScheduleU3Ed__33_MoveNext_m9373C77D9286CC35AAB930C73A3D60AA6DD119C4,
	U3CStartManualScheduleU3Ed__33_U3CU3Em__Finally1_mBB95E0FBCB814BD5DC60A3CD659CEBC63FF110E9,
	U3CStartManualScheduleU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFE8965F3220164D8C24A0DE21EC2208192DCCAA1,
	U3CStartManualScheduleU3Ed__33_System_Collections_IEnumerator_Reset_mCE419455F15D9B00AB6931FF70795C920CED8E2C,
	U3CStartManualScheduleU3Ed__33_System_Collections_IEnumerator_get_Current_mF7D99AAE547A90F8409C83F5540F8C664D6EC08F,
	U3CU3Ec__DisplayClass0_0__ctor_mB4C5830EF980ECC0964BBD1533ED2E6A6FB355EE,
	U3CU3Ec__DisplayClass0_0_U3CIsLayerLinearU3Eb__0_m65838DF36788BBD3913B2A88698F1EC0B7CD17B9,
	U3CU3Ec__cctor_m641E1B753E558DE9EA24DA9A8B1C91ECA058F290,
	U3CU3Ec__ctor_m332F34890D7490F9CAF1A8B8A993D01DF7B022BB,
	U3CU3Ec_U3CAreLayersFusableU3Eb__2_0_m1FF69EEB50C6897A812F9313C606211F086CC33B,
	U3CU3Ec_U3C_ctorU3Eb__6_5_m1DAB3C4B87EA990F6F09BAC94FEED4D83558769A,
	U3CU3Ec_U3C_ctorU3Eb__6_7_m780DFB317551AE7D4DEDF9C960D4104C3CEC9CD2,
	U3CU3Ec_U3C_ctorU3Eb__6_10_m14A0BB9EC726F5F4E20CABF73F38A8E1E7B5DD84,
	U3CU3Ec_U3C_ctorU3Eb__6_12_m398D7476F0A7DE75F1BE806F6457FDB6C8CE7997,
	SGEMMJob_Execute_m4F5DDDCFFAC52FF96DCFD50689372CECCF46736A,
	U3CU3Ec__DisplayClass7_0__ctor_mB66221997DE0B8A62A7CC66BC69FCF84E8AF9C3C,
	U3CU3Ec__DisplayClass7_0_U3CMultiplyBlockUnroll8xhParallelWithPaddingU3Eb__0_mE26653C59DB24E2F4435B1DE5A2D8D282CE03DBF,
	U3CU3Ec__cctor_m3BCD49930280FD4A5B61538BD083E625C1174643,
	U3CU3Ec__ctor_mF680FC757A20CB9F3BCEB88F669269F0B3F933DA,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__12_0_m639E3757A4A64D646EDEE259E6D3B74A20AB7201,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__12_1_m90F83F49FBAF0C8184A0FC4A6CDD65683E66C8E2,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__12_2_m8F4317F0EC7E2DD7FECAA6B1433CCC7255964A09,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__12_3_m1CEC3CE45A97FC3C476BDFE90F30FF2F975C38BA,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__13_0_m62E8CAEC955B99E6DB75A1FE5216EF2A5F3F9968,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__13_1_m3BB591639DC24AB7915294C49AA262A332D64CED,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__13_2_mB2C76322F8BAD4DBB2D8F448F8D02F75F45CE6A5,
	U3CU3Ec_U3CFindUnconnectedInputsU3Eb__16_0_m7CBE14FD8296A167EF42405AC95AF1E7FF79DAEF,
	U3CU3Ec_U3CFindUnconnectedInputsU3Eb__16_1_mE5109822A1867679A4C5542EA0A5062AFCC36BD9,
	U3CU3Ec__DisplayClass1_0__ctor_mA80CDEB1A2C604158DAAAC387579E96EFBD84630,
	U3CU3Ec__DisplayClass1_0_U3CRemoveUnusedU3Eb__2_mD9904C23F4F85D6E062D013197C07E238D1DF675,
	U3CU3Ec__cctor_m9AE9F1E7AEC90733182606A554D395E36E801C82,
	U3CU3Ec__ctor_m10450DFBC1386FEE1CCD246EE09F9C58F500DF97,
	U3CU3Ec_U3CRemoveUnusedU3Eb__1_0_mA77493A268E94E3C306F8D78C0804700D2EA931E,
	U3CU3Ec_U3CRemoveUnusedU3Eb__1_1_mFEC946754EBA1511D8D9487A6EE084D5F90A53C7,
	U3CU3Ec_U3CFuseActivationsU3Eb__5_0_mA4BF5904D3967F1312E986E154137378A08AF994,
	U3CU3Ec_U3CIsLayerNoopU3Eb__7_0_m5FD9CEB6B6A10169E337887590179446755E1972,
	U3CU3Ec_U3CIsLayerNoopU3Eb__7_1_m31FF8145E7AA3B09E37F1E534A69297EFCD84E68,
	U3CU3Ec_U3CIsLayerNoopU3Eb__7_2_mE7B880FBFE71883337E2372538DD77FD315CDC21,
	U3CU3Ec_U3CRemoveNoopU3Eb__8_0_mD47EF5F798B29D4591C0F6CAF6690D85222C7EC4,
	U3CU3Ec_U3CRemoveNoopU3Eb__8_1_m99E21AA3279EC0CDC2AF6025C8BF32A65D684D95,
	U3CU3Ec_U3CFuseLinearU3Eb__18_0_m3452168EB3D350EEFB2CF38B5B1492D8A0C8DB30,
	U3CU3Ec_U3CFuseLinearU3Eb__18_1_m071F66879BC898BFF9DBD4781379DCF5049A1FF5,
	U3CU3Ec__DisplayClass4_0__ctor_m83BBF4560C08E214244FEAD1BC8624B8DBCE3C1E,
	U3CU3Ec__DisplayClass4_0_U3CFuseActivationU3Eb__0_mAE85FC73F26A03933682F5CAA53489FC0C4D547D,
	U3CU3Ec__DisplayClass5_0__ctor_m3C5549B17D61CB6E47E12C63159F4784322ECEE6,
	U3CU3Ec__DisplayClass5_0_U3CFuseActivationsU3Eb__1_mDA647092FCB5A36240C1CDA855D10EB6995152CD,
	U3CU3Ec__DisplayClass5_1__ctor_mC67F3C85A03FEAC4E53A8EFEA2D79E0B03EB3003,
	U3CU3Ec__DisplayClass5_1_U3CFuseActivationsU3Eb__2_mD52809DBCADF884D7C6B322024D2719832233F71,
	U3CU3Ec__DisplayClass5_1_U3CFuseActivationsU3Eb__3_m9FA6DF699A608292DE2E1DCADE0A7361209BBC80,
	U3CU3Ec__DisplayClass16_0__ctor_m7285A45DFCC18F91450C48F4EABBF6F353FF76E4,
	U3CU3Ec__DisplayClass16_0_U3CPackConstantsU3Eb__0_m04415E3BEF8FE1F99C34F6898D4DA8B92B315E53,
	U3CU3Ec__DisplayClass16_0_U3CPackConstantsU3Eb__1_m93FBB2152835058B9F6DC02DE454EE37D00CEE40,
	U3CU3Ec__DisplayClass16_1__ctor_m858D5E32DF1EF126AFD860908D11472452970C81,
	U3CU3Ec__DisplayClass16_1_U3CPackConstantsU3Eb__2_m641E13C44272F60F85AE3FE74C522715224AE1DA,
	U3CU3Ec__DisplayClass18_0__ctor_m48A04A48A4B15507D40607F1186CAB9825EBDF92,
	U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__4_m75ECF6176CCDE82113B43E55D3BAC7FB17077EB0,
	U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__5_m67C9F7F94F732E759885389337B3E9E7613E5A95,
	U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__2_mE3D54A3B94BDA1AB5508C584E128C3BE919DD394,
	U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__3_m143C8106B579D7A1E0778397DD8E2A7F28B17645,
	U3CU3Ec__DisplayClass18_1__ctor_m0FF6823EDFD9E10FC334A5964CF248FFCBDE3E7C,
	U3CU3Ec__DisplayClass18_1_U3CFuseLinearU3Eb__6_m689337DA81FC4BCEE78CFA5937E08D542F12D72D,
	U3CU3Ec__cctor_mAC1E43A9CB37E4027006269ABCFDCA3D613029E3,
	U3CU3Ec__ctor_m9EAF8554A23AA6B08B030E2E48A3D2AA4C107508,
	U3CU3Ec_U3C_ctorU3Eb__2_0_mD8430C32134B0888390BDA5234897EBDAD091799,
	U3CU3Ec_U3C_ctorU3Eb__2_1_m123F1422082531AB32EEF8302C0D14BEC6062332,
	U3CU3Ec_U3C_ctorU3Eb__2_2_m1125975B01A78E85B6740C907B8A64D04B18DDD0,
	U3CU3Ec_U3C_ctorU3Eb__2_3_m7B424A4CEF1F1996E57760CC45B5F352D74176F4,
	U3CU3Ec_U3C_ctorU3Eb__2_4_mB2DE951DEC23B137A3E4FE0CD5BB446E7CC9DA8E,
	U3CU3Ec_U3C_ctorU3Eb__2_5_m13909B8C9E591A890F414744268BEC8EFDAA0E42,
	U3CU3Ec_U3C_ctorU3Eb__2_6_m6BF82EDFD8A0742BC4DFC6FB11E5631198A9C2EC,
	Transcendental__ctor_m026CDC2775977E09F44854F036339608C0171D83,
	U3CU3Ec__DisplayClass13_0__ctor_m0D475C23A7E2A177335484AC4BBB3C4EF0D706A1,
	U3CU3Ec__DisplayClass13_0_U3CMoveToDeviceU3Eb__0_m627EAAA69DA5AF2356705BA8C3730E70ADC0724B,
	U3CU3Ec__cctor_mEAD93CBF823782E6C7F7453401AEB85F28054468,
	U3CU3Ec__ctor_mF7330FB7F32DF66A2EF7AC2EA5B0B883EB2B7B0C,
	U3CU3Ec_U3CUnity_Barracuda_IOps_NonMaxSuppressionU3Eb__102_0_m25313DAF73F85A8002A473168228D2979A16CA30,
	WorkerConfiguration__ctor_m39B522369814F774A2DB09BD4431150CDFCB97D9,
	U3CU3Ec__cctor_m842AF0A327D4DE3A89055CBFDD5AABED02CD59A5,
	U3CU3Ec__ctor_mA74D790B335E91FDC37627F8DBAF27E14533D5B4,
	U3CU3Ec_U3CToStringU3Eb__25_0_mCFF1DE63AF8899C2B018FA038A242D5021F99753,
	Input_WithName_mABCBC1785058A9B268E159D0F967C631F8E96B67,
	ImporterWarning_get_Message_m8D9849FC15F689DD7A2AB1687040B04E7EDB2830,
	ImporterWarning_get_LayerName_mEB3E381A0C6FF3F3B85E423C36E34DB21B1D94CD,
	ImporterWarning__ctor_mA45E151BD5021023C15198216C8951DA8C398806,
	U3CU3Ec__cctor_mD8F38748AE3E4342B15B78222AAC74B77A4BBC02,
	U3CU3Ec__ctor_mEF27F298FA84689214A581A7FB21E3A4160C2B82,
	U3CU3Ec_U3CToStringU3Eb__19_0_m57D0CA5638790FAB6F2FF515CCB87C82769BC179,
	U3CU3Ec_U3CToStringU3Eb__19_1_m8EEB9735BED3AA1BF6DEE0B56D863DDA606C7F02,
	U3CU3Ec_U3CToStringU3Eb__19_2_m25BA7D500914167F8C3AE38C72682FA3ADAAF530,
	U3CU3Ec__DisplayClass2_0__ctor_m84B463E2729EBF6EB37D39C11CAF8B4A133AABA5,
	U3CU3Ec__DisplayClass2_0_U3CGetDownStreamLayersCountU3Eb__0_m0FDFA7808E979773F6C0D176B5D85973D59A46FD,
	U3CU3Ec__cctor_m30675866A3695CFAB17644EC8A1046812F314353,
	U3CU3Ec__ctor_m1CB1BEFCD26A3C4B3D17391B67D3D2D1DD7F2DBE,
	U3CU3Ec_U3CAsIntsU3Eb__4_0_m75B12A6E083CEA1AB15B76B506221168B6C04DBD,
	U3CU3Ec__DisplayClass13_0__ctor_mE0A455DF490B02455E6DD3739FD918AF7B33EFEE,
	U3CU3Ec__DisplayClass13_1__ctor_mB31AE60072CC385D86999290830B05A58D8B46EB,
	U3CU3Ec__DisplayClass13_1_U3CArgSortU3Eb__0_mA9415087B19F40AE4403B4B7E44630B861CAE357,
	U3CU3Ec__DisplayClass1_0__ctor_mD9EC5C4B7879D426C3B5D7E9D1661F3C37007A01,
	U3CU3Ec__DisplayClass1_0_U3CRunU3Eb__0_m9B5995DDB43E1BFC7D05F03758AC806F5733BA0E,
	U3CU3Ec__DisplayClass2_0__ctor_mE36295791976BDDC10C2C63A673F441332FD3E77,
	U3CU3Ec__DisplayClass2_0_U3CFuseShapesIntoConstantsU3Eb__0_m450B2B3523BABF0E0DB9BFE2173135C7701F4B17,
	U3CU3Ec__cctor_m8A77E7CDD2858B85AFED2063681AE24C2D36EE68,
	U3CU3Ec__ctor_m9A2DF668F73BC941087349AF8A82A95F52097FD2,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_1_mD9A004B6CEFB8059FFD8D9F16FE53C7656871EEC,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_0_mDA1E2AA58D6D7A6F5199633A4D7C049A0FDB6C77,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_2_mF00BFDA3F0D56220B2AC23AE1CAF28B3DB54BD10,
	U3CU3Ec_U3CFuseInputsIntoLayerU3Eb__5_3_mAC5C7153D9737C0B472BF90456A6440D123589AF,
	U3CU3Ec__DisplayClass6_0__ctor_m316EE36F7342C37240B2DEF7196B272D1FB92804,
	U3CU3Ec__DisplayClass6_0_U3CAxisToBarracudaU3Eb__0_m8C30AEF5D868DCA50AF05E9F517174482E3FB706,
	U3CU3Ec__DisplayClass7_0__ctor_m12A6681051A7513A4A513CA2777D6BB0FDA0503F,
	U3CU3Ec__DisplayClass7_0_U3CStridedSliceU3Eb__0_m4D9235EDA66C747EAFD0AC932044600FC3334FCF,
	U3CU3Ec__DisplayClass8_0__ctor_m7796BB31B741465F7645CFE2BBFD0FC7E3BAA5DF,
	U3CU3Ec__DisplayClass8_0_U3CTranspose0UsingRankU3Eb__0_mC4257757A3C767C05A601687B1E6A6C95972108E,
	U3CU3Ec__DisplayClass1_0__ctor_m2422B852629732094F52B6121E54F6C854D53107,
	U3CU3Ec__DisplayClass1_0_U3CIsImporterLikelyNHWCLayoutU3Eb__0_mFAD5653EA6DD89AD0B35E3CF1F419A6291DD933F,
	U3CU3Ec__DisplayClass15_0__ctor_m2F1C3888D6A8D05B31668DB9C16733255776825E,
	U3CU3Ec__DisplayClass15_0_U3CIsLayerInputU3Eb__0_m8A55B0138DE7B790BD3E651C004406F2D795DC39,
	U3CU3Ec__cctor_m53B34640132F963C0B761618E3283DC2033CE9FA,
	U3CU3Ec__ctor_m0036569863520CCD054BDF7F55FDF50568012C33,
	U3CU3Ec_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_2_mA073E7F337F3F172AE5667B99A770910C0AC70D1,
	U3CU3Ec_U3CInstantiateRewriterNCHWToNHWCU3Eb__2_7_m2F6500D1DFA80885AA64FE171683371C24BBBB68,
	U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__17_0_m5E7FAD026077B05F606B1F8F860A8F2566E6819F,
	U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__17_2_m86219180BB7B342F179EBEEDA3B81D00E8228561,
	U3CU3Ec__DisplayClass29_0__ctor_m7894B19453DABB6ABD6ECD848B1F5286C9164E1A,
	U3CU3Ec__DisplayClass29_0_U3CRewriteU3Eb__0_m4988C108BAD9CB0EFD0B6B22CD73DF7EA77289AD,
	U3CU3Ec__cctor_m0D61ADD94D50849BFFB113BB44A465935624578D,
	U3CU3Ec__ctor_m5E889B5CE41237EBBE26E0596E309AA3896815C9,
	U3CU3Ec_U3CRunU3Eb__0_0_m2609524FF129084E6B0E02338CFD5F38570D9AC0,
	U3CU3Ec_U3CRunU3Eb__0_1_m69CDEEFB3D95A659F503F901D51B8214AD5ACB45,
	U3CU3Ec__DisplayClass0_0__ctor_m9FB2ACA13A4B8BB48CB140114BC963D61CAB3A30,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m89B5CAC8171CF344FAAEA3150FB30DE60FB7E33F,
	U3CU3Ec__DisplayClass0_1__ctor_m0EDF60950C459DF9F86470938600F3C0F995888B,
	U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__1_m5AB4C10829DED1CE234DDD56CABFE274FC1A98C8,
	U3CU3Ec__DisplayClass0_0__ctor_m1BD0A302271DB4DF124A0016FDE08C9FEFB3742D,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m03A00EB55A95F7EDAAD19F1F7D5C3C9B22DF9FD4,
	U3CU3Ec__DisplayClass1_0__ctor_m28E69CE3D66A092718FEC56AEFE749AB27BA81C4,
	U3CU3Ec__DisplayClass1_0_U3CIsGather1DAndConvertingToChannelLastU3Eb__0_mE41C3AD8EBED1A6EDC4B353B81A9F46842E15E4E,
	U3CU3Ec__DisplayClass2_0__ctor_mCA23D2BDEBA7163F66B8C37E0BF53649E4EF9129,
	U3CU3Ec__DisplayClass2_0_U3CCanLayerBeRemovedU3Eb__0_mBB64992B22EA4531901B02D9A1C98FDD05375C1C,
	U3CU3Ec__DisplayClass2_0_U3CCanLayerBeRemovedU3Eb__1_m9167C4A76C8D0ABB8622C5725ADA8BB99E9BBAF7,
	U3CU3Ec__cctor_m38947884479EAE048CD395AAFBFFF12FE2A6C89F,
	U3CU3Ec__ctor_m8AF101D329A05C30700445CC13C1D9D583E511BA,
	U3CU3Ec_U3CRunU3Eb__0_0_mFFB5BE5CFE6590AD6E67C8FE0984CD0D661F98B4,
	U3CU3Ec_U3CRunU3Eb__0_1_mE32AD51C45331C741DFAD83CFCE89F370C4A173C,
	U3CU3Ec_U3CRunU3Eb__0_2_mDCD044E7F672FE191D8BC65F985E2E15226DA0D4,
	U3CU3Ec__cctor_m902E4406A4332FCB745ED05F2EB455AD6F1CFB87,
	U3CU3Ec__ctor_mD672A533176A8DDEA7AEBE25794FB7596D2BE3A2,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__0_0_m787D2902E34A74F6B35C37F6E526D91678E0BC31,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__0_1_m18F2D2266419D8D3241FC4FE3B2925FEF6C62663,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__0_2_m118883ED6454582E0E9D03786668A94460EEE004,
	U3CU3Ec__cctor_m600BAC2503B840A696713F0F865AE233E12A6C81,
	U3CU3Ec__ctor_mA85EC7833722040DF46B8AFA941494D9F1A12F83,
	U3CU3Ec_U3CRunU3Eb__0_0_m7E31362C3208CD098B5AB56B76ABFCC40EDF68C6,
	U3CU3Ec_U3CRunU3Eb__0_1_mBEAE3FA51ACCAB311B3C82B09017BF92F0F8A01C,
	U3CU3Ec_U3CRunU3Eb__0_2_mCE5E85D1FF1B06AE7214D7C585975D20DDE7EC3B,
	U3CU3Ec__cctor_mED33E7EBA62DD947458A08F98E60088A99E5B0D2,
	U3CU3Ec__ctor_m105B1795856909BA7084049BCDF6AB657BA3BB90,
	U3CU3Ec_U3CIsLayerNoopU3Eb__2_0_mD987A56D2584357D12414FE89AE735D896D1DE0A,
	U3CU3Ec_U3CIsLayerNoopU3Eb__2_1_m5D446A1300D231142AE2B8ABEFCD44537EE77E3D,
	U3CU3Ec_U3CIsLayerNoopU3Eb__2_2_m782A696A1EEB7B6446D6D5D0E9C52FF1D45C4B0B,
	U3CU3Ec__DisplayClass0_0__ctor_m77945FBACC9D618B164758876D8C13C7438A1E23,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_mF9537B988FC19082B90130FA7340508C0F8FA616,
	U3CU3Ec__DisplayClass1_0__ctor_m67C33FEF5A123657AB4A645DC3F7F3DD29992CF9,
	U3CU3Ec__DisplayClass1_0_U3CConcatenateTransposesU3Eb__0_mA91C6CD0AF38DDAAC7E918F6EDD0004F7EE3F671,
	U3CU3Ec__DisplayClass0_0__ctor_m207A5A799FF1B88B3835446AABB89EEDDBB6A460,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__1_m5EB61AD442B1C2602CA3C7FD8B3ACEA05CABED7B,
	U3CU3Ec__DisplayClass0_1__ctor_m5FF67DD8B781466BB68C57CF9A260C7BB84C6EBC,
	U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__2_m5540C0277896C4F2B93B93DCC1CDE04836FE20FA,
	U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__3_m87C58B303854BC291F93B4E6532C00787896D2C7,
	U3CU3Ec__cctor_m7CD5604F234E548AD2806B79F57BCE42A1203DA3,
	U3CU3Ec__ctor_m2849076D7F99E0940F5D6E1B53E391D69C1C63E5,
	U3CU3Ec_U3CRunU3Eb__0_0_m167CF748DF0D2346B4E69B9ECC058164C7E38755,
	U3CU3Ec__DisplayClass3_0__ctor_m60969EDF23FD2E934A0EE99242F6346C8988915B,
	U3CU3Ec__DisplayClass3_0_U3CFuseActivationU3Eb__0_m24D6E33522152E88ED722B71E2127A88E7A6EA7F,
	U3CU3Ec__DisplayClass1_0__ctor_m049A0CE8C521321C7DDBD9E8C1C9963113E790EF,
	U3CU3Ec__DisplayClass1_0_U3CFuseConstantsU3Eb__0_mBA3940A664A1D08E496658FD9DCFFC1171BAF6FE,
	U3CU3Ec__DisplayClass0_0__ctor_mFBE06E89F96D066EA44DD02B0075EAE1014E4FBC,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__2_m3296B7B7A11F0D3F2E98F470D3B535DDF81FCDA1,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__3_mC0ED2E390F634A31C2F5DFFE3828115E52D85A5C,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_mA5A4CB40C2E8A49CF6641BB78B8BB16AA68333B5,
	U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__1_m51DACB080E53980B15EECFD8598C2C367FF0BE85,
	U3CU3Ec__DisplayClass0_1__ctor_mD3CA41054A95C546A24AFF34157C442359E69445,
	U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__4_mA76754C377A1E7BA8D286AABFF876BB54DAE43D3,
	U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__5_mFC35974E5C042798E01DDA2FA2208B7ACC020460,
	U3CU3Ec__DisplayClass8_0__ctor_mC43461F29BE6D13A28ABBB8B721B7AE859F6E147,
	U3CU3Ec__DisplayClass8_0_U3CPackConstantsForMathOpsU3Eb__0_m8A2F2F888342337749789787C676177DD45A414F,
	U3CU3Ec__DisplayClass8_0_U3CPackConstantsForMathOpsU3Eb__1_mA8C279BA0624DF7CCFF8A0A7C01FAB2AA610A84A,
	U3CU3Ec__DisplayClass8_1__ctor_mBD4B1B889DD912C0F5C1DDE292EEA1E99DFF7649,
	U3CU3Ec__DisplayClass8_1_U3CPackConstantsForMathOpsU3Eb__2_mAB366C2B3A368E0955CEE552D9ADCC2611D1C63A,
};
extern void ComputeKernel_get_shader_m858E808F13E3BB4CA58B22D59903E79F6990BDBA_AdjustorThunk (void);
extern void ComputeKernel__ctor_m8F4CF6B7E53BD72E61C571737C878E940F12AB8A_AdjustorThunk (void);
extern void ComputeKernel_SetTensor_m017C6FAE3AF781EA621D0B7F42C03C70D479ED82_AdjustorThunk (void);
extern void ComputeKernel_SetTensor_m04E53D63119C9B0B1536C7BE274301066D521BD5_AdjustorThunk (void);
extern void ComputeKernel_SetTensorDecl_mF6580DF0B65DCA1DEBDA3DF94903DDC1E0DA2471_AdjustorThunk (void);
extern void ComputeKernel_SetTensorDecl_m85FD625BA73062D6A451C5B8B10B79B7C108104E_AdjustorThunk (void);
extern void ComputeKernel_SetTensorBuffer_m4F693999943C4E616C3265019ED84538D6337052_AdjustorThunk (void);
extern void ComputeKernel_SetTensorBuffer_m64AC02FA48C4AB628F323AC16CE0217C33B128B0_AdjustorThunk (void);
extern void ComputeKernel_Dispatch_m0BD65DEC5A63D57F1C8A7F75F2175B3183905B50_AdjustorThunk (void);
extern void ComputeFunc_get_threadGroupSize_mE3DE69C387947294F6E182F5CF192AB1743CAD02_AdjustorThunk (void);
extern void ComputeFunc_get_width_mBA6206CEFC80FFCBA3414BE6F7CEA0641CDE3DF8_AdjustorThunk (void);
extern void ComputeFunc_get_height_mFB459F6394921EC4889E0BB564D6BA7FC7F76A9B_AdjustorThunk (void);
extern void ComputeFunc_get_depth_m83A02D39C34F91C72BB75817A137C9CDC696F356_AdjustorThunk (void);
extern void ComputeFunc__ctor_m46CF8C060BD8F5F955170A47A85D74D332E6F1ED_AdjustorThunk (void);
extern void ComputeFunc__ctor_m33103EF3B9A9F2B3B9122F18CE1516F1C8E5B1B4_AdjustorThunk (void);
extern void ComputeFunc_SetTensor_mD745ADFBA3A56ADCCE1CC26C29CE75A3F5B20FB4_AdjustorThunk (void);
extern void ComputeFunc_SetTensor_m09D9F7BD2B81B08C75286084958422FE1BD33FF2_AdjustorThunk (void);
extern void ComputeFunc_SetTensor_m80D7EB2769E2A10FECA9E69BFC1577C9995A9A82_AdjustorThunk (void);
extern void ComputeFunc_SetTensorDecl_m0841B57C96E6E2367E32537827F419E2456CFB7C_AdjustorThunk (void);
extern void ComputeFunc_SetTensorDecl_m8F91FAB9ECD7ACDA4E60B19546EAF036C2D76A76_AdjustorThunk (void);
extern void ComputeFunc_SetTensorBuffer_m2598B41597A03BA8080236613FFDC03FD2B9C806_AdjustorThunk (void);
extern void ComputeFunc_SetTensorBuffer_mFD5F3C63C24E1C88BE5B9306191FAD41CD95F08E_AdjustorThunk (void);
extern void ComputeFunc_SetTexture_m70D07EC55E965B600C9712236C66E5E41B443795_AdjustorThunk (void);
extern void ComputeFunc_Dispatch_m17A2B947A3F8911B112FD8761FF185879C90C17A_AdjustorThunk (void);
extern void ComputeFunc_Dispatch_m94BB3E7429F97ADCC2F7E40228FEF9662D5798A9_AdjustorThunk (void);
extern void StringStringPair_Equals_mA2A3D5A7DA30BBF27F26BFCD476F549EF60F5D94_AdjustorThunk (void);
extern void StringStringPair_Equals_m84C1DD09E1C9DE03645F6A3B98707B4690107AE0_AdjustorThunk (void);
extern void StringStringPair_GetHashCode_mA3CB1D5E72B000614D9D71FD7EDB6E399BDE7866_AdjustorThunk (void);
extern void StringStringLongTriplet_GetHashCode_m22DD6193AA0700F9FF079B844017A6BFE0F842B0_AdjustorThunk (void);
extern void StringStringLongTriplet_Equals_mDC26A56AF98A76ED562B1E0E722914F142A14726_AdjustorThunk (void);
extern void StringStringLongTriplet_Equals_m89BD8DE2D352694DB9B12979CFF4EB40A0E09602_AdjustorThunk (void);
extern void TensorShape__ctor_m1A3103428162CEBD04A3BF4A9D66C8D23BEE43F5_AdjustorThunk (void);
extern void TensorShape__ctor_mEF7D25C7FDB0C070C4F71619F7CD89FFDB9FE20E_AdjustorThunk (void);
extern void TensorShape__ctor_mCAA028082267E3D75CE97AD2A9F0387D5E0EEEE3_AdjustorThunk (void);
extern void TensorShape__ctor_mF3CDE30A296206E6BEB2B6E57AEA3F52DA790159_AdjustorThunk (void);
extern void TensorShape__ctor_m61ED9407C90A40296A222FEAC3FFEF4BB82C7108_AdjustorThunk (void);
extern void TensorShape__ctor_mBF7950F4D0B7B44B4030971BF85F8563FCDB60F2_AdjustorThunk (void);
extern void TensorShape__ctor_m6691CB4250B956DC507AE2A8453083548090DF46_AdjustorThunk (void);
extern void TensorShape_get_kernelSpatialDepth_m202062E96206B04057D433145767E5C0FAC57E86_AdjustorThunk (void);
extern void TensorShape_get_kernelHeight_m5CCF3625A0AD960D281CDCEF87A6AE533A2D08C6_AdjustorThunk (void);
extern void TensorShape_get_kernelWidth_m48078B2180BD5CBF66FDC88601F184ED24C323FD_AdjustorThunk (void);
extern void TensorShape_get_kernelDepth_m61294864CDD2CA95BDF4FE5A3E241EAE9228D2D7_AdjustorThunk (void);
extern void TensorShape_get_kernelCount_m7CE4ED13EB42CFCEE11E68711E4D3BB65B59F84C_AdjustorThunk (void);
extern void TensorShape_get_flatHeight_mDE1B9FF77BA77BFFBB84F92D2DD9FF24525F9DD2_AdjustorThunk (void);
extern void TensorShape_get_flatWidth_m8F935FBE9F859E9DEE0A4AF6AE1B070C392C5E5B_AdjustorThunk (void);
extern void TensorShape_get_length_mED64FFCECD0B5464DEA299CD1D533D4B43F24E09_AdjustorThunk (void);
extern void TensorShape_get_rank_mA4452B0A98BF4D1B443625037F11E81600513651_AdjustorThunk (void);
extern void TensorShape_get_dimensions_m87D565722AEEE691398CD191B8D68AC2AD3D7605_AdjustorThunk (void);
extern void TensorShape_Axis_m97699C7AE730ED8E1DC40F0985062EBFC803D1C8_AdjustorThunk (void);
extern void TensorShape_GetPositionsFromIndex_mAE3753C61B106647C09D4AAA67A88572550C0282_AdjustorThunk (void);
extern void TensorShape_GetPositionsFromIndex_m647D341DF3DDA6CAA37399643E1AE9F6147D9EE8_AdjustorThunk (void);
extern void TensorShape_GetPositionsFromIndexChannelFirst_m4C286440DE355A775166184318B3C4D3C6858EEB_AdjustorThunk (void);
extern void TensorShape_GetPositionsFromIndexChannelFirst_mB9013101E47558300C3AF18BBBF8DD86BADE4C7F_AdjustorThunk (void);
extern void TensorShape_IndexWithBroadcast_m31962EC2A7B51CFC39AF0F31B62CE4A41471C822_AdjustorThunk (void);
extern void TensorShape_IndexWithBroadcast_m69A70761FFBF905A9052B0D57A9D3BEBEA924C15_AdjustorThunk (void);
extern void TensorShape_IndexWithClamp_m7F18051CDD5F638580BE527D6EE4CB6A55AEE2F4_AdjustorThunk (void);
extern void TensorShape_IndexWithClamp_m53A095649338AE4FE2CB5F2117B61BCB0C4F7519_AdjustorThunk (void);
extern void TensorShape_IndexWithClamp_m3D4F3C0B287546627533815E5D28F45161620E33_AdjustorThunk (void);
extern void TensorShape_Index_m964C0073F93B6F7FE0A97F6FC04D6A545237E07A_AdjustorThunk (void);
extern void TensorShape_Index_m203E076155FA395F8C4D7442E710DDFFDAE25821_AdjustorThunk (void);
extern void TensorShape_Index_m9DA9DD57B8B03E6A9AFBE09666F374E6A4D274F7_AdjustorThunk (void);
extern void TensorShape_IndexChannelFirst_mD0899AA4F6E8961CDF09814CE85DA762B13BE601_AdjustorThunk (void);
extern void TensorShape_IndexChannelFirst_m0B7364A72558BECE039D2C45411BD36F2414AAE3_AdjustorThunk (void);
extern void TensorShape_Index_m14D6AFBF8E29338F0FF58EA2125A385873DE5BFC_AdjustorThunk (void);
extern void TensorShape_get_Item_m1E3FBF3C3F58B973F7AC4F5787A7DFF1D150D93F_AdjustorThunk (void);
extern void TensorShape_set_Item_mAA763122A18EE53DD211B1E885C30A7CF003D477_AdjustorThunk (void);
extern void TensorShape_ToArray_mACE433AC64B15C2D5920C90FCDB4C9CFE0200171_AdjustorThunk (void);
extern void TensorShape_Squeeze_mB33A377A0EDACF622DA40A1E1ABAC865B9359853_AdjustorThunk (void);
extern void TensorShape_Flatten_m8694D8ADE85AD35AE94409F6BBD3497F35D5B301_AdjustorThunk (void);
extern void TensorShape_Equals_m9763D26E41D558B1711398FE946924911A9B53AC_AdjustorThunk (void);
extern void TensorShape_GetHashCode_m54B49CAEC6E97B75B4059E0BE420988C5555F976_AdjustorThunk (void);
extern void TensorShape_ToString_m4450E8AA6FD6FAC21501E1B6660925377CF78D28_AdjustorThunk (void);
extern void TensorIterator__ctor_mDB76F7045F7F7C7DDC0ADF480DBCE4B9747A043F_AdjustorThunk (void);
extern void TensorIterator__ctor_m60971732A224AEB1066BD27948E1DF3190F5D115_AdjustorThunk (void);
extern void TensorIterator_AssignIndexAndInvalidateDimensions_m2477CB381776D0DBC4D7F233A8ACC43E35A8BDF5_AdjustorThunk (void);
extern void TensorIterator_Next_m25ED528A2372C028D54CCC947F2A66C705D4F933_AdjustorThunk (void);
extern void TensorIterator_Advance_m6830EA527CA7C40D7FE69B6AE5D19F483C9FC7CF_AdjustorThunk (void);
extern void TensorIterator_IsValid_mC711BE08F5309CE85C3227C37EC1B8213D1F5A5F_AdjustorThunk (void);
extern void TensorIterator_IndexInReducedShape_m8C34CD99740CF5E70BE91925E489531005136454_AdjustorThunk (void);
extern void TensorIterator_IndexWithReplacedAxis_mFFDDE0D25A388F08FD4456CDDDEA1F10CDD947C1_AdjustorThunk (void);
extern void TensorIterator_get_Item_m75B242D75B7F86B4A55B68500EBAFD6F7AD9BC9F_AdjustorThunk (void);
extern void MatrixMultiplyJob_Schedule_m27CCAA5322216A7272A04DC6B6F68A1F26E58E05_AdjustorThunk (void);
extern void MatrixMultiplyJob_Schedule_mF6F6026AAFB6CCB88D0E8308FCD0F78CC864F6FF_AdjustorThunk (void);
extern void MatrixMultiplyJob_Execute_mEE36B8FBE0AC0A21A4748BDD3BB91C00246C0569_AdjustorThunk (void);
extern void MatrixMultiply3x2Job_Schedule_m1BB802DBA082569EFA3BF1B1FACD03D290AD3DCD_AdjustorThunk (void);
extern void MatrixMultiply3x2Job_Schedule_m13FF3708320CECAA12A203A91EFA1319B8A664D3_AdjustorThunk (void);
extern void MatrixMultiply3x2Job_Execute_mDD41419CDF94F35CCB538D2A6038C8F4D0FC1F78_AdjustorThunk (void);
extern void MatrixMultiply4x4Job_Schedule_m11EFC9C7116199F85DF51401F7F9CF688740715A_AdjustorThunk (void);
extern void MatrixMultiply4x4Job_Schedule_mB37E7A635A37F89617136611FD58CFA168734719_AdjustorThunk (void);
extern void MatrixMultiply4x4Job_Execute_m97BF410D73026D9E2AF25493D8CAEC3C25599190_AdjustorThunk (void);
extern void Im2ColSliceJob_Execute_m773B17C48DEA2007E285D0ED6C6315D0DB947F31_AdjustorThunk (void);
extern void MaxPool2DJob_Execute_m9BF185A23B461039C7CD646FF7AB338777A1C942_AdjustorThunk (void);
extern void AvgPool2DJob_Execute_m57F0211D2BAF4A65096649E20E2D1997217BAA56_AdjustorThunk (void);
extern void DepthwiseConv2DJob_Execute_mB44D7B11C489577A08D8BF7BA80DC53E3F51AF9F_AdjustorThunk (void);
extern void PReluJob_Execute_m6204897FA9E3B444FAC4E5BBDDA72E34B0F85420_AdjustorThunk (void);
extern void ReluJob_Execute_m72912A14F95D8D03DD1CFEDD85A07CB6EC5913CB_AdjustorThunk (void);
extern void Relu6Job_Execute_m79600547CEC3A1940B6EE6A3BC4DE708E36AB614_AdjustorThunk (void);
extern void LeakyReluJob_get_alpha_m886442C6EE80302AA6BCC5CC223E15D39E272710_AdjustorThunk (void);
extern void LeakyReluJob_set_alpha_mB2924217DAEA5ABC22E1840AF95496D08751BB22_AdjustorThunk (void);
extern void LeakyReluJob_Execute_m9FCB64D1CB749B6D36F343DC311D75FBECAD952B_AdjustorThunk (void);
extern void TanhJob_Execute_m158F898A267797CC2588F8130723BB353E486DC2_AdjustorThunk (void);
extern void SoftplusJob_Execute_mFE7AA25DB056FCDD8F617BE1CC7F936DC3DBF54E_AdjustorThunk (void);
extern void SigmoidJob_Execute_mC5F893C95A8A00FFF4B4A9C6BDFD6EB3643B07FC_AdjustorThunk (void);
extern void EluJob_Execute_mAE936B9401BFD74C2F0312092E9616B70BA8B8FC_AdjustorThunk (void);
extern void SeluJob_Execute_m745E156A7B4BDD719F958BC72A9BBB8E71853B9C_AdjustorThunk (void);
extern void SwishJob_Execute_mF21A1B36747DDF9BEBAE661BFEC0A6ECD2713C2E_AdjustorThunk (void);
extern void ExpBiasReduceJob_Execute_m74E098A135ECB4D17908822823F82DECD91FAB8E_AdjustorThunk (void);
extern void SoftmaxEndJob_Execute_mD34E259483671D7B38EF12856EEAED7F4B1B6B88_AdjustorThunk (void);
extern void LogSoftmaxEndJob_Execute_m08B2FC3E3D5865AE0E5334C14E1663333EDBAD7A_AdjustorThunk (void);
extern void AbsJob_Execute_m82E634F7930C308464776E772F40B784A852F840_AdjustorThunk (void);
extern void NegJob_Execute_m3B9EF9DC20B88FBD2CFE5A635CA993A15C019F10_AdjustorThunk (void);
extern void CeilJob_Execute_m2450A5601242A6CE3DB9774EC46734D39440F2D7_AdjustorThunk (void);
extern void ClipJob_Execute_m9388037D9CA0E67D09808A3D2F0926EE242EC4CA_AdjustorThunk (void);
extern void FloorJob_Execute_m0DEAFF731774B5DDF430CED756631A4EB9B822D2_AdjustorThunk (void);
extern void ReciprocalJob_Execute_m73878A023826CACDBD77A153DDBB6CA9934B9805_AdjustorThunk (void);
extern void PowJob_Execute_mD8D0C447DD0A54E397AC304C72CD4BADC959CEA1_AdjustorThunk (void);
extern void ExpJob_Execute_m0E5BBBB70A12ECD6AA54E83BCCC534E7B34F4AC6_AdjustorThunk (void);
extern void LogJob_Execute_mD0C0D680DB6A510485738030ECDC459CF46CDF0A_AdjustorThunk (void);
extern void SqrtJob_Execute_mA93818E207938E825564285740F3C7B56D590B63_AdjustorThunk (void);
extern void AcosJob_Execute_mCA702020750F4ADE2D2D7892534691DF73E3D5FC_AdjustorThunk (void);
extern void AcoshJob_Execute_m68DBEA7F51712DBB27EFECBE0F1D01DEC34BBAB7_AdjustorThunk (void);
extern void AsinJob_Execute_mB57217836C705AB952A9173A60D0C7D2AD91C029_AdjustorThunk (void);
extern void AsinhJob_Execute_m4AFF19D044E0E8F5804C860E15073EA063CE4643_AdjustorThunk (void);
extern void AtanJob_Execute_m4AB2D86FB4A0EDCAD5FF466E31439D141C2365A7_AdjustorThunk (void);
extern void AtanhJob_Execute_m4844DA6B2C0B579D3C293DF91CE31299794BA0BA_AdjustorThunk (void);
extern void CosJob_Execute_m445A94BB767F848108A8E650DA901D60DC15BDD4_AdjustorThunk (void);
extern void CoshJob_Execute_mB9DD9DD2D959896FBF384675D8FB35EB64DD8BDA_AdjustorThunk (void);
extern void SinJob_Execute_m0CD61E5C990221E7DE15F72AC9405947652FABA4_AdjustorThunk (void);
extern void SinhJob_Execute_mDEF3CBF65CBCCF4E98C481D985D643007DD160D8_AdjustorThunk (void);
extern void TanJob_Execute_m2CA241B80D795FCA9AD8E50D6C2E9A3A2B12F552_AdjustorThunk (void);
extern void ElementwiseAddJob_Execute_m83D82FE92C96EF846A9115063487BFEFD7E83913_AdjustorThunk (void);
extern void ElementwiseMulJob_Execute_m21EF8876CE60DF524B3461B0A81EC52CEB782200_AdjustorThunk (void);
extern void ElementwiseDivJob_Execute_mBEBBBCDBCBF27F768BE420397A9FE8EDCB076CE7_AdjustorThunk (void);
extern void ElementwisePowJob_Execute_mE4329F018D1AAF548AEFFDEDE596CADFABA8420C_AdjustorThunk (void);
extern void ElementwiseMaxJob_Execute_m62CFBA776A48F922B664281FCE82B75ACB82F717_AdjustorThunk (void);
extern void ElementwiseMinJob_Execute_mEF3E6BA3A011DFEE0F259144AAECE21F0C4D35E0_AdjustorThunk (void);
extern void SetConstantPaddingJob_Execute_m0FBF8D6271F2D92AE14299C1A2F8CE34CAADDCCE_AdjustorThunk (void);
extern void SetConstantPaddingWithStrideJob_Execute_m8C1FC3C5213A3AD734C081AC588AE52912EFDEDD_AdjustorThunk (void);
extern void ZeroBroadcastJob_Execute_m3372F65507303FF078F11487BC5DC566905BED68_AdjustorThunk (void);
extern void CopyJob_Execute_m096190F05069634457887E53821A06F93F12E607_AdjustorThunk (void);
extern void CopyStrideJob_Execute_mA2411005CB9292781DE2CBBBD83F4509FF728109_AdjustorThunk (void);
extern void VectorBroadcastJob_Execute_mC0BE1647C5A7C65D922BADE90971AE3E679086FE_AdjustorThunk (void);
extern void GenericSliceJob_Execute_mF66997D1B935D075B5D1B01D8FC183398898665C_AdjustorThunk (void);
extern void GenericStridedSliceJob_Execute_m672E35E9E80405D06CCF9122C08F02BD2C1E281B_AdjustorThunk (void);
extern void ScalarBroadcastAddJob_Execute_m264B5F8D68692E7771BC5FC5E9A66E9BE2532B68_AdjustorThunk (void);
extern void BroadcastAddJob_Execute_m5953A50C960895D0590372FC6DA015FAEBD9A9BF_AdjustorThunk (void);
extern void ScalarBroadcastMulJob_Execute_mDC4CA259CD93648DAB327AE29BC5055FDCAAE94D_AdjustorThunk (void);
extern void BroadcastMulJob_Execute_m62B76899EA06312D974CDAB7B4FE4FAE63C20D01_AdjustorThunk (void);
extern void ScalarBroadcastDivJob_Execute_m21386BC4D50BA041794CD2E0DA753E0F3F40DCAF_AdjustorThunk (void);
extern void BroadcastDivJob_Execute_mAA2C6EACB6EA2FF8BE02084A59CDD09C1767A274_AdjustorThunk (void);
extern void ScalarBroadcastMinJob_Execute_m02CB1A5717E66BD1778AB0E1B919AABFBED94333_AdjustorThunk (void);
extern void BroadcastMinJob_Execute_mB6C6D7ED28AB573384F1F71590E5A292BC684DCA_AdjustorThunk (void);
extern void ScalarBroadcastMaxJob_Execute_m30F19AFF0DDB99D1394C6CDCBD69E1FAB6C9F6BA_AdjustorThunk (void);
extern void BroadcastMaxJob_Execute_m7260CB723604DE2803339B7BDD30D512BF72668F_AdjustorThunk (void);
extern void ScalarBroadcastPowJob_Execute_m976281FE3C2E8BDC9ED5D2830FBDDAC96E87B484_AdjustorThunk (void);
extern void BroadcastPowJob_Execute_mA374941F51AEE0633836F9CF5E80CBDB6BA3BA39_AdjustorThunk (void);
extern void GenericBroadcastJob_Execute_mB5089F15ABD18BF03FF4F9056ED7D52AE7239547_AdjustorThunk (void);
extern void VectorBroadcastScaleBiasJob_Execute_m3386A2F452399A839465DCB309A34064BC5D8A6B_AdjustorThunk (void);
extern void ReduceMeanJob_Execute_mA69FE22E4422FA3A59DEF76E747C06C30C1A2F0B_AdjustorThunk (void);
extern void ReduceSumJob_Execute_m78610E8A3BBCDE7421B61B49EDD8D799E858BF6E_AdjustorThunk (void);
extern void ReduceMaxJob_Execute_m17C81237FB727857F50C63E81A7B3757C7AD060A_AdjustorThunk (void);
extern void TransposeJob_Execute_m77538C9A6D0CE8B842F115ADCA8A49CF1F67CAD0_AdjustorThunk (void);
extern void MemFreeJob_Execute_mD68AED70903F88722B4D9F29976AFB9981167C04_AdjustorThunk (void);
extern void Entry__ctor_mFBDE9EBA6A2A22B6FAE824639160BB49929DFB8D_AdjustorThunk (void);
extern void Entry__ctor_m54A9CCBE9BBB6E0CB4C1B0F1166CEF3F48809792_AdjustorThunk (void);
extern void Entry__ctor_m6F6A950E84E11362A7C5CE42063FE9C7FEA8683D_AdjustorThunk (void);
extern void Entry__ctor_mA0D6FC31396814355C6BD16857DA2467C9277913_AdjustorThunk (void);
extern void KernelAssertInfo__ctor_mD56DC894C510657645B4B18EF011A0AC774478E4_AdjustorThunk (void);
extern void CompiledLayer_get_kernel_mA831B770A79E21F8CBFFB0C0B44268C203A593F2_AdjustorThunk (void);
extern void TensorDecl_get_ShapeId_mD2EE349CD8B7A2AABCE7AF5B09C28588FDF25873_AdjustorThunk (void);
extern void TensorDecl_get_ShapeId8D_m84D9B25B0595F08CCD9749C2E5685BD094020347_AdjustorThunk (void);
extern void TensorDecl_get_InfoId_m08ADFE209B22EEA180E561810F54BA9673330361_AdjustorThunk (void);
extern void TensorDecl__ctor_mC20A1AA25171E3FCC7A86D19543109C3E871E99F_AdjustorThunk (void);
extern void SGEMMJob_Execute_m4F5DDDCFFAC52FF96DCFD50689372CECCF46736A_AdjustorThunk (void);
extern void WorkerConfiguration__ctor_m39B522369814F774A2DB09BD4431150CDFCB97D9_AdjustorThunk (void);
extern void Input_WithName_mABCBC1785058A9B268E159D0F967C631F8E96B67_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[176] = 
{
	{ 0x060000FF, ComputeKernel_get_shader_m858E808F13E3BB4CA58B22D59903E79F6990BDBA_AdjustorThunk },
	{ 0x06000100, ComputeKernel__ctor_m8F4CF6B7E53BD72E61C571737C878E940F12AB8A_AdjustorThunk },
	{ 0x06000101, ComputeKernel_SetTensor_m017C6FAE3AF781EA621D0B7F42C03C70D479ED82_AdjustorThunk },
	{ 0x06000102, ComputeKernel_SetTensor_m04E53D63119C9B0B1536C7BE274301066D521BD5_AdjustorThunk },
	{ 0x06000103, ComputeKernel_SetTensorDecl_mF6580DF0B65DCA1DEBDA3DF94903DDC1E0DA2471_AdjustorThunk },
	{ 0x06000104, ComputeKernel_SetTensorDecl_m85FD625BA73062D6A451C5B8B10B79B7C108104E_AdjustorThunk },
	{ 0x06000105, ComputeKernel_SetTensorBuffer_m4F693999943C4E616C3265019ED84538D6337052_AdjustorThunk },
	{ 0x06000106, ComputeKernel_SetTensorBuffer_m64AC02FA48C4AB628F323AC16CE0217C33B128B0_AdjustorThunk },
	{ 0x06000107, ComputeKernel_Dispatch_m0BD65DEC5A63D57F1C8A7F75F2175B3183905B50_AdjustorThunk },
	{ 0x06000294, ComputeFunc_get_threadGroupSize_mE3DE69C387947294F6E182F5CF192AB1743CAD02_AdjustorThunk },
	{ 0x06000295, ComputeFunc_get_width_mBA6206CEFC80FFCBA3414BE6F7CEA0641CDE3DF8_AdjustorThunk },
	{ 0x06000296, ComputeFunc_get_height_mFB459F6394921EC4889E0BB564D6BA7FC7F76A9B_AdjustorThunk },
	{ 0x06000297, ComputeFunc_get_depth_m83A02D39C34F91C72BB75817A137C9CDC696F356_AdjustorThunk },
	{ 0x0600029D, ComputeFunc__ctor_m46CF8C060BD8F5F955170A47A85D74D332E6F1ED_AdjustorThunk },
	{ 0x0600029E, ComputeFunc__ctor_m33103EF3B9A9F2B3B9122F18CE1516F1C8E5B1B4_AdjustorThunk },
	{ 0x0600029F, ComputeFunc_SetTensor_mD745ADFBA3A56ADCCE1CC26C29CE75A3F5B20FB4_AdjustorThunk },
	{ 0x060002A0, ComputeFunc_SetTensor_m09D9F7BD2B81B08C75286084958422FE1BD33FF2_AdjustorThunk },
	{ 0x060002A1, ComputeFunc_SetTensor_m80D7EB2769E2A10FECA9E69BFC1577C9995A9A82_AdjustorThunk },
	{ 0x060002A2, ComputeFunc_SetTensorDecl_m0841B57C96E6E2367E32537827F419E2456CFB7C_AdjustorThunk },
	{ 0x060002A3, ComputeFunc_SetTensorDecl_m8F91FAB9ECD7ACDA4E60B19546EAF036C2D76A76_AdjustorThunk },
	{ 0x060002A4, ComputeFunc_SetTensorBuffer_m2598B41597A03BA8080236613FFDC03FD2B9C806_AdjustorThunk },
	{ 0x060002A5, ComputeFunc_SetTensorBuffer_mFD5F3C63C24E1C88BE5B9306191FAD41CD95F08E_AdjustorThunk },
	{ 0x060002A6, ComputeFunc_SetTexture_m70D07EC55E965B600C9712236C66E5E41B443795_AdjustorThunk },
	{ 0x060002A7, ComputeFunc_Dispatch_m17A2B947A3F8911B112FD8761FF185879C90C17A_AdjustorThunk },
	{ 0x060002A8, ComputeFunc_Dispatch_m94BB3E7429F97ADCC2F7E40228FEF9662D5798A9_AdjustorThunk },
	{ 0x060005E0, StringStringPair_Equals_mA2A3D5A7DA30BBF27F26BFCD476F549EF60F5D94_AdjustorThunk },
	{ 0x060005E1, StringStringPair_Equals_m84C1DD09E1C9DE03645F6A3B98707B4690107AE0_AdjustorThunk },
	{ 0x060005E2, StringStringPair_GetHashCode_mA3CB1D5E72B000614D9D71FD7EDB6E399BDE7866_AdjustorThunk },
	{ 0x060005E3, StringStringLongTriplet_GetHashCode_m22DD6193AA0700F9FF079B844017A6BFE0F842B0_AdjustorThunk },
	{ 0x060005E4, StringStringLongTriplet_Equals_mDC26A56AF98A76ED562B1E0E722914F142A14726_AdjustorThunk },
	{ 0x060005E5, StringStringLongTriplet_Equals_m89BD8DE2D352694DB9B12979CFF4EB40A0E09602_AdjustorThunk },
	{ 0x060006B0, TensorShape__ctor_m1A3103428162CEBD04A3BF4A9D66C8D23BEE43F5_AdjustorThunk },
	{ 0x060006B1, TensorShape__ctor_mEF7D25C7FDB0C070C4F71619F7CD89FFDB9FE20E_AdjustorThunk },
	{ 0x060006B2, TensorShape__ctor_mCAA028082267E3D75CE97AD2A9F0387D5E0EEEE3_AdjustorThunk },
	{ 0x060006B3, TensorShape__ctor_mF3CDE30A296206E6BEB2B6E57AEA3F52DA790159_AdjustorThunk },
	{ 0x060006B4, TensorShape__ctor_m61ED9407C90A40296A222FEAC3FFEF4BB82C7108_AdjustorThunk },
	{ 0x060006B5, TensorShape__ctor_mBF7950F4D0B7B44B4030971BF85F8563FCDB60F2_AdjustorThunk },
	{ 0x060006B6, TensorShape__ctor_m6691CB4250B956DC507AE2A8453083548090DF46_AdjustorThunk },
	{ 0x060006B7, TensorShape_get_kernelSpatialDepth_m202062E96206B04057D433145767E5C0FAC57E86_AdjustorThunk },
	{ 0x060006B8, TensorShape_get_kernelHeight_m5CCF3625A0AD960D281CDCEF87A6AE533A2D08C6_AdjustorThunk },
	{ 0x060006B9, TensorShape_get_kernelWidth_m48078B2180BD5CBF66FDC88601F184ED24C323FD_AdjustorThunk },
	{ 0x060006BA, TensorShape_get_kernelDepth_m61294864CDD2CA95BDF4FE5A3E241EAE9228D2D7_AdjustorThunk },
	{ 0x060006BB, TensorShape_get_kernelCount_m7CE4ED13EB42CFCEE11E68711E4D3BB65B59F84C_AdjustorThunk },
	{ 0x060006BC, TensorShape_get_flatHeight_mDE1B9FF77BA77BFFBB84F92D2DD9FF24525F9DD2_AdjustorThunk },
	{ 0x060006BD, TensorShape_get_flatWidth_m8F935FBE9F859E9DEE0A4AF6AE1B070C392C5E5B_AdjustorThunk },
	{ 0x060006BE, TensorShape_get_length_mED64FFCECD0B5464DEA299CD1D533D4B43F24E09_AdjustorThunk },
	{ 0x060006BF, TensorShape_get_rank_mA4452B0A98BF4D1B443625037F11E81600513651_AdjustorThunk },
	{ 0x060006C0, TensorShape_get_dimensions_m87D565722AEEE691398CD191B8D68AC2AD3D7605_AdjustorThunk },
	{ 0x060006C1, TensorShape_Axis_m97699C7AE730ED8E1DC40F0985062EBFC803D1C8_AdjustorThunk },
	{ 0x060006C2, TensorShape_GetPositionsFromIndex_mAE3753C61B106647C09D4AAA67A88572550C0282_AdjustorThunk },
	{ 0x060006C3, TensorShape_GetPositionsFromIndex_m647D341DF3DDA6CAA37399643E1AE9F6147D9EE8_AdjustorThunk },
	{ 0x060006C4, TensorShape_GetPositionsFromIndexChannelFirst_m4C286440DE355A775166184318B3C4D3C6858EEB_AdjustorThunk },
	{ 0x060006C5, TensorShape_GetPositionsFromIndexChannelFirst_mB9013101E47558300C3AF18BBBF8DD86BADE4C7F_AdjustorThunk },
	{ 0x060006C6, TensorShape_IndexWithBroadcast_m31962EC2A7B51CFC39AF0F31B62CE4A41471C822_AdjustorThunk },
	{ 0x060006C7, TensorShape_IndexWithBroadcast_m69A70761FFBF905A9052B0D57A9D3BEBEA924C15_AdjustorThunk },
	{ 0x060006C8, TensorShape_IndexWithClamp_m7F18051CDD5F638580BE527D6EE4CB6A55AEE2F4_AdjustorThunk },
	{ 0x060006C9, TensorShape_IndexWithClamp_m53A095649338AE4FE2CB5F2117B61BCB0C4F7519_AdjustorThunk },
	{ 0x060006CA, TensorShape_IndexWithClamp_m3D4F3C0B287546627533815E5D28F45161620E33_AdjustorThunk },
	{ 0x060006CB, TensorShape_Index_m964C0073F93B6F7FE0A97F6FC04D6A545237E07A_AdjustorThunk },
	{ 0x060006CC, TensorShape_Index_m203E076155FA395F8C4D7442E710DDFFDAE25821_AdjustorThunk },
	{ 0x060006CD, TensorShape_Index_m9DA9DD57B8B03E6A9AFBE09666F374E6A4D274F7_AdjustorThunk },
	{ 0x060006CE, TensorShape_IndexChannelFirst_mD0899AA4F6E8961CDF09814CE85DA762B13BE601_AdjustorThunk },
	{ 0x060006CF, TensorShape_IndexChannelFirst_m0B7364A72558BECE039D2C45411BD36F2414AAE3_AdjustorThunk },
	{ 0x060006D0, TensorShape_Index_m14D6AFBF8E29338F0FF58EA2125A385873DE5BFC_AdjustorThunk },
	{ 0x060006D1, TensorShape_get_Item_m1E3FBF3C3F58B973F7AC4F5787A7DFF1D150D93F_AdjustorThunk },
	{ 0x060006D2, TensorShape_set_Item_mAA763122A18EE53DD211B1E885C30A7CF003D477_AdjustorThunk },
	{ 0x060006D3, TensorShape_ToArray_mACE433AC64B15C2D5920C90FCDB4C9CFE0200171_AdjustorThunk },
	{ 0x060006D4, TensorShape_Squeeze_mB33A377A0EDACF622DA40A1E1ABAC865B9359853_AdjustorThunk },
	{ 0x060006D5, TensorShape_Flatten_m8694D8ADE85AD35AE94409F6BBD3497F35D5B301_AdjustorThunk },
	{ 0x060006D8, TensorShape_Equals_m9763D26E41D558B1711398FE946924911A9B53AC_AdjustorThunk },
	{ 0x060006D9, TensorShape_GetHashCode_m54B49CAEC6E97B75B4059E0BE420988C5555F976_AdjustorThunk },
	{ 0x060006DA, TensorShape_ToString_m4450E8AA6FD6FAC21501E1B6660925377CF78D28_AdjustorThunk },
	{ 0x060006DC, TensorIterator__ctor_mDB76F7045F7F7C7DDC0ADF480DBCE4B9747A043F_AdjustorThunk },
	{ 0x060006DD, TensorIterator__ctor_m60971732A224AEB1066BD27948E1DF3190F5D115_AdjustorThunk },
	{ 0x060006DE, TensorIterator_AssignIndexAndInvalidateDimensions_m2477CB381776D0DBC4D7F233A8ACC43E35A8BDF5_AdjustorThunk },
	{ 0x060006DF, TensorIterator_Next_m25ED528A2372C028D54CCC947F2A66C705D4F933_AdjustorThunk },
	{ 0x060006E0, TensorIterator_Advance_m6830EA527CA7C40D7FE69B6AE5D19F483C9FC7CF_AdjustorThunk },
	{ 0x060006E1, TensorIterator_IsValid_mC711BE08F5309CE85C3227C37EC1B8213D1F5A5F_AdjustorThunk },
	{ 0x060006E2, TensorIterator_IndexInReducedShape_m8C34CD99740CF5E70BE91925E489531005136454_AdjustorThunk },
	{ 0x060006E3, TensorIterator_IndexWithReplacedAxis_mFFDDE0D25A388F08FD4456CDDDEA1F10CDD947C1_AdjustorThunk },
	{ 0x060006E4, TensorIterator_get_Item_m75B242D75B7F86B4A55B68500EBAFD6F7AD9BC9F_AdjustorThunk },
	{ 0x06000817, MatrixMultiplyJob_Schedule_m27CCAA5322216A7272A04DC6B6F68A1F26E58E05_AdjustorThunk },
	{ 0x06000818, MatrixMultiplyJob_Schedule_mF6F6026AAFB6CCB88D0E8308FCD0F78CC864F6FF_AdjustorThunk },
	{ 0x06000819, MatrixMultiplyJob_Execute_mEE36B8FBE0AC0A21A4748BDD3BB91C00246C0569_AdjustorThunk },
	{ 0x0600081D, MatrixMultiply3x2Job_Schedule_m1BB802DBA082569EFA3BF1B1FACD03D290AD3DCD_AdjustorThunk },
	{ 0x0600081E, MatrixMultiply3x2Job_Schedule_m13FF3708320CECAA12A203A91EFA1319B8A664D3_AdjustorThunk },
	{ 0x0600081F, MatrixMultiply3x2Job_Execute_mDD41419CDF94F35CCB538D2A6038C8F4D0FC1F78_AdjustorThunk },
	{ 0x06000823, MatrixMultiply4x4Job_Schedule_m11EFC9C7116199F85DF51401F7F9CF688740715A_AdjustorThunk },
	{ 0x06000824, MatrixMultiply4x4Job_Schedule_mB37E7A635A37F89617136611FD58CFA168734719_AdjustorThunk },
	{ 0x06000825, MatrixMultiply4x4Job_Execute_m97BF410D73026D9E2AF25493D8CAEC3C25599190_AdjustorThunk },
	{ 0x06000829, Im2ColSliceJob_Execute_m773B17C48DEA2007E285D0ED6C6315D0DB947F31_AdjustorThunk },
	{ 0x0600082A, MaxPool2DJob_Execute_m9BF185A23B461039C7CD646FF7AB338777A1C942_AdjustorThunk },
	{ 0x0600082B, AvgPool2DJob_Execute_m57F0211D2BAF4A65096649E20E2D1997217BAA56_AdjustorThunk },
	{ 0x0600082C, DepthwiseConv2DJob_Execute_mB44D7B11C489577A08D8BF7BA80DC53E3F51AF9F_AdjustorThunk },
	{ 0x0600082D, PReluJob_Execute_m6204897FA9E3B444FAC4E5BBDDA72E34B0F85420_AdjustorThunk },
	{ 0x0600082F, ReluJob_Execute_m72912A14F95D8D03DD1CFEDD85A07CB6EC5913CB_AdjustorThunk },
	{ 0x06000830, Relu6Job_Execute_m79600547CEC3A1940B6EE6A3BC4DE708E36AB614_AdjustorThunk },
	{ 0x06000831, LeakyReluJob_get_alpha_m886442C6EE80302AA6BCC5CC223E15D39E272710_AdjustorThunk },
	{ 0x06000832, LeakyReluJob_set_alpha_mB2924217DAEA5ABC22E1840AF95496D08751BB22_AdjustorThunk },
	{ 0x06000833, LeakyReluJob_Execute_m9FCB64D1CB749B6D36F343DC311D75FBECAD952B_AdjustorThunk },
	{ 0x06000834, TanhJob_Execute_m158F898A267797CC2588F8130723BB353E486DC2_AdjustorThunk },
	{ 0x06000835, SoftplusJob_Execute_mFE7AA25DB056FCDD8F617BE1CC7F936DC3DBF54E_AdjustorThunk },
	{ 0x06000836, SigmoidJob_Execute_mC5F893C95A8A00FFF4B4A9C6BDFD6EB3643B07FC_AdjustorThunk },
	{ 0x06000837, EluJob_Execute_mAE936B9401BFD74C2F0312092E9616B70BA8B8FC_AdjustorThunk },
	{ 0x06000838, SeluJob_Execute_m745E156A7B4BDD719F958BC72A9BBB8E71853B9C_AdjustorThunk },
	{ 0x06000839, SwishJob_Execute_mF21A1B36747DDF9BEBAE661BFEC0A6ECD2713C2E_AdjustorThunk },
	{ 0x0600083A, ExpBiasReduceJob_Execute_m74E098A135ECB4D17908822823F82DECD91FAB8E_AdjustorThunk },
	{ 0x0600083B, SoftmaxEndJob_Execute_mD34E259483671D7B38EF12856EEAED7F4B1B6B88_AdjustorThunk },
	{ 0x0600083C, LogSoftmaxEndJob_Execute_m08B2FC3E3D5865AE0E5334C14E1663333EDBAD7A_AdjustorThunk },
	{ 0x0600083D, AbsJob_Execute_m82E634F7930C308464776E772F40B784A852F840_AdjustorThunk },
	{ 0x0600083E, NegJob_Execute_m3B9EF9DC20B88FBD2CFE5A635CA993A15C019F10_AdjustorThunk },
	{ 0x0600083F, CeilJob_Execute_m2450A5601242A6CE3DB9774EC46734D39440F2D7_AdjustorThunk },
	{ 0x06000840, ClipJob_Execute_m9388037D9CA0E67D09808A3D2F0926EE242EC4CA_AdjustorThunk },
	{ 0x06000841, FloorJob_Execute_m0DEAFF731774B5DDF430CED756631A4EB9B822D2_AdjustorThunk },
	{ 0x06000842, ReciprocalJob_Execute_m73878A023826CACDBD77A153DDBB6CA9934B9805_AdjustorThunk },
	{ 0x06000843, PowJob_Execute_mD8D0C447DD0A54E397AC304C72CD4BADC959CEA1_AdjustorThunk },
	{ 0x06000844, ExpJob_Execute_m0E5BBBB70A12ECD6AA54E83BCCC534E7B34F4AC6_AdjustorThunk },
	{ 0x06000845, LogJob_Execute_mD0C0D680DB6A510485738030ECDC459CF46CDF0A_AdjustorThunk },
	{ 0x06000846, SqrtJob_Execute_mA93818E207938E825564285740F3C7B56D590B63_AdjustorThunk },
	{ 0x06000847, AcosJob_Execute_mCA702020750F4ADE2D2D7892534691DF73E3D5FC_AdjustorThunk },
	{ 0x06000848, AcoshJob_Execute_m68DBEA7F51712DBB27EFECBE0F1D01DEC34BBAB7_AdjustorThunk },
	{ 0x06000849, AsinJob_Execute_mB57217836C705AB952A9173A60D0C7D2AD91C029_AdjustorThunk },
	{ 0x0600084A, AsinhJob_Execute_m4AFF19D044E0E8F5804C860E15073EA063CE4643_AdjustorThunk },
	{ 0x0600084B, AtanJob_Execute_m4AB2D86FB4A0EDCAD5FF466E31439D141C2365A7_AdjustorThunk },
	{ 0x0600084C, AtanhJob_Execute_m4844DA6B2C0B579D3C293DF91CE31299794BA0BA_AdjustorThunk },
	{ 0x0600084D, CosJob_Execute_m445A94BB767F848108A8E650DA901D60DC15BDD4_AdjustorThunk },
	{ 0x0600084E, CoshJob_Execute_mB9DD9DD2D959896FBF384675D8FB35EB64DD8BDA_AdjustorThunk },
	{ 0x0600084F, SinJob_Execute_m0CD61E5C990221E7DE15F72AC9405947652FABA4_AdjustorThunk },
	{ 0x06000850, SinhJob_Execute_mDEF3CBF65CBCCF4E98C481D985D643007DD160D8_AdjustorThunk },
	{ 0x06000851, TanJob_Execute_m2CA241B80D795FCA9AD8E50D6C2E9A3A2B12F552_AdjustorThunk },
	{ 0x06000852, ElementwiseAddJob_Execute_m83D82FE92C96EF846A9115063487BFEFD7E83913_AdjustorThunk },
	{ 0x06000853, ElementwiseMulJob_Execute_m21EF8876CE60DF524B3461B0A81EC52CEB782200_AdjustorThunk },
	{ 0x06000854, ElementwiseDivJob_Execute_mBEBBBCDBCBF27F768BE420397A9FE8EDCB076CE7_AdjustorThunk },
	{ 0x06000855, ElementwisePowJob_Execute_mE4329F018D1AAF548AEFFDEDE596CADFABA8420C_AdjustorThunk },
	{ 0x06000856, ElementwiseMaxJob_Execute_m62CFBA776A48F922B664281FCE82B75ACB82F717_AdjustorThunk },
	{ 0x06000857, ElementwiseMinJob_Execute_mEF3E6BA3A011DFEE0F259144AAECE21F0C4D35E0_AdjustorThunk },
	{ 0x06000858, SetConstantPaddingJob_Execute_m0FBF8D6271F2D92AE14299C1A2F8CE34CAADDCCE_AdjustorThunk },
	{ 0x06000859, SetConstantPaddingWithStrideJob_Execute_m8C1FC3C5213A3AD734C081AC588AE52912EFDEDD_AdjustorThunk },
	{ 0x0600085A, ZeroBroadcastJob_Execute_m3372F65507303FF078F11487BC5DC566905BED68_AdjustorThunk },
	{ 0x0600085B, CopyJob_Execute_m096190F05069634457887E53821A06F93F12E607_AdjustorThunk },
	{ 0x0600085C, CopyStrideJob_Execute_mA2411005CB9292781DE2CBBBD83F4509FF728109_AdjustorThunk },
	{ 0x0600085D, VectorBroadcastJob_Execute_mC0BE1647C5A7C65D922BADE90971AE3E679086FE_AdjustorThunk },
	{ 0x0600085E, GenericSliceJob_Execute_mF66997D1B935D075B5D1B01D8FC183398898665C_AdjustorThunk },
	{ 0x0600085F, GenericStridedSliceJob_Execute_m672E35E9E80405D06CCF9122C08F02BD2C1E281B_AdjustorThunk },
	{ 0x06000860, ScalarBroadcastAddJob_Execute_m264B5F8D68692E7771BC5FC5E9A66E9BE2532B68_AdjustorThunk },
	{ 0x06000861, BroadcastAddJob_Execute_m5953A50C960895D0590372FC6DA015FAEBD9A9BF_AdjustorThunk },
	{ 0x06000862, ScalarBroadcastMulJob_Execute_mDC4CA259CD93648DAB327AE29BC5055FDCAAE94D_AdjustorThunk },
	{ 0x06000863, BroadcastMulJob_Execute_m62B76899EA06312D974CDAB7B4FE4FAE63C20D01_AdjustorThunk },
	{ 0x06000864, ScalarBroadcastDivJob_Execute_m21386BC4D50BA041794CD2E0DA753E0F3F40DCAF_AdjustorThunk },
	{ 0x06000865, BroadcastDivJob_Execute_mAA2C6EACB6EA2FF8BE02084A59CDD09C1767A274_AdjustorThunk },
	{ 0x06000866, ScalarBroadcastMinJob_Execute_m02CB1A5717E66BD1778AB0E1B919AABFBED94333_AdjustorThunk },
	{ 0x06000867, BroadcastMinJob_Execute_mB6C6D7ED28AB573384F1F71590E5A292BC684DCA_AdjustorThunk },
	{ 0x06000868, ScalarBroadcastMaxJob_Execute_m30F19AFF0DDB99D1394C6CDCBD69E1FAB6C9F6BA_AdjustorThunk },
	{ 0x06000869, BroadcastMaxJob_Execute_m7260CB723604DE2803339B7BDD30D512BF72668F_AdjustorThunk },
	{ 0x0600086A, ScalarBroadcastPowJob_Execute_m976281FE3C2E8BDC9ED5D2830FBDDAC96E87B484_AdjustorThunk },
	{ 0x0600086B, BroadcastPowJob_Execute_mA374941F51AEE0633836F9CF5E80CBDB6BA3BA39_AdjustorThunk },
	{ 0x0600086C, GenericBroadcastJob_Execute_mB5089F15ABD18BF03FF4F9056ED7D52AE7239547_AdjustorThunk },
	{ 0x0600086D, VectorBroadcastScaleBiasJob_Execute_m3386A2F452399A839465DCB309A34064BC5D8A6B_AdjustorThunk },
	{ 0x0600086E, ReduceMeanJob_Execute_mA69FE22E4422FA3A59DEF76E747C06C30C1A2F0B_AdjustorThunk },
	{ 0x0600086F, ReduceSumJob_Execute_m78610E8A3BBCDE7421B61B49EDD8D799E858BF6E_AdjustorThunk },
	{ 0x06000870, ReduceMaxJob_Execute_m17C81237FB727857F50C63E81A7B3757C7AD060A_AdjustorThunk },
	{ 0x06000871, TransposeJob_Execute_m77538C9A6D0CE8B842F115ADCA8A49CF1F67CAD0_AdjustorThunk },
	{ 0x06000872, MemFreeJob_Execute_mD68AED70903F88722B4D9F29976AFB9981167C04_AdjustorThunk },
	{ 0x06000873, Entry__ctor_mFBDE9EBA6A2A22B6FAE824639160BB49929DFB8D_AdjustorThunk },
	{ 0x06000874, Entry__ctor_m54A9CCBE9BBB6E0CB4C1B0F1166CEF3F48809792_AdjustorThunk },
	{ 0x06000875, Entry__ctor_m6F6A950E84E11362A7C5CE42063FE9C7FEA8683D_AdjustorThunk },
	{ 0x06000876, Entry__ctor_mA0D6FC31396814355C6BD16857DA2467C9277913_AdjustorThunk },
	{ 0x06000877, KernelAssertInfo__ctor_mD56DC894C510657645B4B18EF011A0AC774478E4_AdjustorThunk },
	{ 0x06000878, CompiledLayer_get_kernel_mA831B770A79E21F8CBFFB0C0B44268C203A593F2_AdjustorThunk },
	{ 0x06000898, TensorDecl_get_ShapeId_mD2EE349CD8B7A2AABCE7AF5B09C28588FDF25873_AdjustorThunk },
	{ 0x06000899, TensorDecl_get_ShapeId8D_m84D9B25B0595F08CCD9749C2E5685BD094020347_AdjustorThunk },
	{ 0x0600089A, TensorDecl_get_InfoId_m08ADFE209B22EEA180E561810F54BA9673330361_AdjustorThunk },
	{ 0x0600089B, TensorDecl__ctor_mC20A1AA25171E3FCC7A86D19543109C3E871E99F_AdjustorThunk },
	{ 0x060008C5, SGEMMJob_Execute_m4F5DDDCFFAC52FF96DCFD50689372CECCF46736A_AdjustorThunk },
	{ 0x06000903, WorkerConfiguration__ctor_m39B522369814F774A2DB09BD4431150CDFCB97D9_AdjustorThunk },
	{ 0x06000907, Input_WithName_mABCBC1785058A9B268E159D0F967C631F8E96B67_AdjustorThunk },
};
static const int32_t s_InvokerIndices[2419] = 
{
	2284,
	2285,
	144,
	1073,
	1073,
	1073,
	2286,
	143,
	143,
	143,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	2287,
	2287,
	105,
	105,
	105,
	205,
	2288,
	2289,
	2290,
	2291,
	2291,
	54,
	2292,
	2293,
	102,
	28,
	28,
	58,
	28,
	28,
	28,
	28,
	2290,
	28,
	2290,
	2294,
	105,
	28,
	28,
	28,
	28,
	2294,
	28,
	28,
	2290,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	205,
	28,
	2295,
	2295,
	28,
	105,
	58,
	125,
	105,
	58,
	2296,
	58,
	28,
	28,
	31,
	27,
	27,
	27,
	198,
	28,
	26,
	27,
	28,
	28,
	14,
	2297,
	2298,
	962,
	449,
	26,
	31,
	21,
	21,
	21,
	2299,
	2300,
	2,
	0,
	23,
	2301,
	2302,
	2301,
	2302,
	32,
	2303,
	26,
	26,
	26,
	23,
	23,
	23,
	32,
	2304,
	2297,
	491,
	30,
	14,
	26,
	0,
	28,
	2305,
	2306,
	2307,
	2284,
	2285,
	105,
	105,
	144,
	1073,
	2040,
	125,
	125,
	28,
	28,
	1073,
	205,
	28,
	28,
	2290,
	28,
	28,
	28,
	2290,
	2294,
	28,
	105,
	58,
	28,
	28,
	28,
	28,
	2294,
	28,
	28,
	2290,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	627,
	627,
	2295,
	2308,
	2309,
	2309,
	2309,
	2309,
	2309,
	2309,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	2295,
	58,
	125,
	2287,
	2287,
	105,
	58,
	58,
	2315,
	2316,
	2316,
	2316,
	2317,
	2317,
	2318,
	2318,
	2319,
	2320,
	2320,
	2320,
	2320,
	2321,
	2319,
	2319,
	2319,
	2319,
	2320,
	2320,
	2320,
	2322,
	2319,
	2319,
	2323,
	268,
	2324,
	2325,
	23,
	3,
	14,
	2330,
	2331,
	2332,
	2333,
	2334,
	27,
	62,
	23,
	2335,
	2336,
	449,
	2337,
	2338,
	2284,
	144,
	2339,
	1073,
	1073,
	1073,
	2286,
	143,
	2040,
	28,
	28,
	143,
	28,
	105,
	205,
	205,
	2288,
	102,
	2340,
	105,
	58,
	28,
	28,
	58,
	2341,
	105,
	2342,
	28,
	205,
	2295,
	2295,
	3,
	23,
	205,
	474,
	23,
	3,
	2343,
	3,
	154,
	23,
	449,
	54,
	31,
	41,
	105,
	105,
	27,
	27,
	136,
	144,
	1073,
	1073,
	2286,
	143,
	2040,
	205,
	28,
	28,
	28,
	2288,
	2340,
	105,
	58,
	28,
	105,
	58,
	3,
	14,
	32,
	2303,
	23,
	23,
	32,
	2304,
	30,
	2297,
	491,
	10,
	14,
	14,
	10,
	10,
	35,
	23,
	23,
	32,
	2304,
	30,
	2297,
	491,
	10,
	14,
	26,
	2298,
	28,
	28,
	2202,
	2345,
	31,
	2126,
	2285,
	2284,
	144,
	1073,
	1073,
	1073,
	2286,
	2346,
	143,
	143,
	143,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	205,
	2287,
	2287,
	2347,
	105,
	105,
	105,
	205,
	2289,
	2288,
	1411,
	2348,
	2290,
	2291,
	2291,
	54,
	2292,
	2293,
	28,
	102,
	28,
	105,
	58,
	28,
	28,
	28,
	28,
	28,
	2290,
	2290,
	2294,
	28,
	28,
	28,
	28,
	2294,
	28,
	28,
	2290,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	2349,
	58,
	125,
	105,
	58,
	105,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	58,
	58,
	205,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	205,
	2295,
	28,
	28,
	2295,
	2295,
	58,
	2296,
	28,
	105,
	28,
	2350,
	2350,
	2351,
	2351,
	433,
	23,
	168,
	14,
	10,
	10,
	2353,
	2354,
	23,
	23,
	32,
	2304,
	30,
	30,
	30,
	2298,
	2297,
	491,
	10,
	14,
	2354,
	46,
	46,
	46,
	46,
	46,
	46,
	114,
	114,
	114,
	114,
	94,
	2356,
	2357,
	23,
	2358,
	14,
	10,
	10,
	10,
	10,
	750,
	750,
	32,
	2304,
	30,
	2297,
	491,
	10,
	23,
	26,
	28,
	2359,
	2360,
	2361,
	105,
	2362,
	2363,
	30,
	2285,
	2284,
	144,
	1073,
	1073,
	1073,
	1073,
	2286,
	143,
	143,
	143,
	102,
	105,
	2040,
	125,
	125,
	105,
	28,
	28,
	28,
	2342,
	2342,
	2287,
	2287,
	105,
	105,
	105,
	205,
	2288,
	2289,
	2290,
	2340,
	28,
	105,
	58,
	28,
	28,
	28,
	28,
	28,
	2290,
	2290,
	2294,
	28,
	28,
	28,
	28,
	2294,
	28,
	28,
	2290,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	2295,
	105,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	164,
	102,
	58,
	58,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	205,
	2295,
	2295,
	28,
	2295,
	28,
	2297,
	28,
	105,
	105,
	28,
	28,
	58,
	198,
	2309,
	125,
	105,
	58,
	28,
	28,
	3,
	10,
	10,
	10,
	10,
	2364,
	94,
	4,
	4,
	4,
	2365,
	62,
	2331,
	2332,
	2331,
	2333,
	2334,
	27,
	62,
	27,
	2366,
	38,
	168,
	2367,
	3,
	32,
	2303,
	26,
	26,
	1488,
	23,
	23,
	32,
	2304,
	2297,
	14,
	14,
	26,
	0,
	2368,
	28,
	667,
	28,
	667,
	28,
	667,
	2290,
	2369,
	2290,
	2369,
	105,
	2370,
	28,
	667,
	28,
	667,
	28,
	667,
	28,
	667,
	28,
	667,
	28,
	667,
	28,
	667,
	28,
	667,
	28,
	667,
	28,
	667,
	28,
	667,
	28,
	667,
	28,
	667,
	28,
	667,
	28,
	667,
	28,
	667,
	28,
	667,
	2371,
	2372,
	125,
	28,
	28,
	28,
	28,
	28,
	28,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	205,
	2040,
	2284,
	144,
	58,
	125,
	2373,
	125,
	2373,
	28,
	28,
	1073,
	2040,
	2374,
	168,
	2040,
	1073,
	2375,
	2376,
	2287,
	105,
	105,
	105,
	2295,
	205,
	2377,
	28,
	23,
	2378,
	2379,
	2380,
	2381,
	2382,
	2383,
	1631,
	2384,
	2385,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	200,
	2347,
	200,
	200,
	200,
	200,
	200,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	1411,
	2386,
	2387,
	27,
	27,
	2285,
	2284,
	144,
	1073,
	1073,
	1073,
	2286,
	143,
	143,
	143,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	2287,
	2287,
	105,
	105,
	105,
	205,
	2288,
	2289,
	2290,
	2291,
	2291,
	54,
	2292,
	2293,
	102,
	28,
	28,
	58,
	28,
	28,
	28,
	28,
	2290,
	28,
	2290,
	2294,
	105,
	28,
	28,
	28,
	28,
	2294,
	28,
	28,
	2290,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	205,
	28,
	2295,
	2295,
	28,
	105,
	58,
	2296,
	58,
	125,
	105,
	58,
	28,
	28,
	31,
	1308,
	436,
	2388,
	2389,
	2390,
	2391,
	23,
	3,
	23,
	23,
	27,
	136,
	28,
	28,
	28,
	28,
	28,
	14,
	14,
	4,
	89,
	3,
	962,
	23,
	23,
	23,
	23,
	23,
	26,
	27,
	26,
	28,
	28,
	14,
	28,
	31,
	28,
	722,
	94,
	14,
	14,
	28,
	28,
	14,
	23,
	23,
	23,
	14,
	9,
	90,
	205,
	27,
	198,
	28,
	26,
	27,
	28,
	28,
	89,
	14,
	23,
	198,
	26,
	27,
	28,
	23,
	198,
	14,
	9,
	2297,
	2298,
	962,
	449,
	26,
	31,
	173,
	173,
	173,
	14,
	23,
	23,
	23,
	135,
	114,
	90,
	2392,
	23,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	89,
	89,
	2393,
	2394,
	23,
	2395,
	2396,
	228,
	2397,
	2398,
	2399,
	2400,
	2401,
	23,
	0,
	0,
	1,
	712,
	2402,
	2087,
	385,
	385,
	0,
	1,
	2403,
	2404,
	0,
	1,
	1,
	0,
	0,
	0,
	114,
	2405,
	23,
	1304,
	137,
	46,
	46,
	187,
	154,
	114,
	114,
	0,
	114,
	114,
	151,
	1,
	135,
	137,
	154,
	137,
	23,
	3,
	62,
	23,
	219,
	26,
	27,
	27,
	2285,
	2284,
	144,
	1073,
	1073,
	1073,
	2286,
	143,
	143,
	143,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	2287,
	2287,
	105,
	105,
	105,
	205,
	2288,
	2289,
	2290,
	2291,
	2291,
	54,
	2292,
	2293,
	102,
	28,
	28,
	58,
	28,
	28,
	28,
	28,
	28,
	2290,
	2290,
	2294,
	105,
	28,
	28,
	28,
	28,
	2294,
	28,
	28,
	2290,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	205,
	28,
	2295,
	2295,
	28,
	105,
	58,
	2296,
	58,
	125,
	105,
	58,
	28,
	28,
	31,
	14,
	172,
	2412,
	2412,
	23,
	23,
	2297,
	2298,
	449,
	962,
	31,
	26,
	23,
	173,
	173,
	173,
	14,
	23,
	23,
	26,
	27,
	2413,
	2297,
	2298,
	449,
	962,
	198,
	31,
	26,
	23,
	173,
	173,
	173,
	14,
	23,
	23,
	94,
	26,
	27,
	26,
	26,
	2297,
	2298,
	449,
	962,
	198,
	31,
	26,
	23,
	173,
	173,
	173,
	14,
	26,
	27,
	27,
	2285,
	2284,
	144,
	1073,
	1073,
	1073,
	2286,
	143,
	143,
	143,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	2287,
	2287,
	105,
	105,
	105,
	205,
	2288,
	2289,
	2290,
	2291,
	2291,
	54,
	2292,
	2293,
	102,
	28,
	28,
	58,
	28,
	28,
	28,
	28,
	28,
	2290,
	2290,
	2294,
	105,
	28,
	28,
	28,
	28,
	2294,
	28,
	28,
	2290,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	205,
	28,
	2295,
	2295,
	28,
	105,
	58,
	2296,
	58,
	125,
	105,
	58,
	28,
	28,
	31,
	2414,
	2415,
	109,
	137,
	153,
	137,
	119,
	119,
	94,
	137,
	187,
	0,
	1,
	0,
	1,
	1,
	154,
	1087,
	1,
	1,
	0,
	1,
	0,
	1,
	53,
	23,
	2416,
	2417,
	23,
	26,
	26,
	27,
	14,
	28,
	28,
	14,
	28,
	28,
	31,
	722,
	14,
	28,
	28,
	14,
	0,
	1,
	32,
	2304,
	30,
	2297,
	491,
	10,
	2301,
	2200,
	107,
	23,
	23,
	10,
	26,
	26,
	2418,
	2300,
	2419,
	2299,
	2420,
	2421,
	2422,
	2423,
	153,
	691,
	1323,
	153,
	153,
	153,
	53,
	21,
	21,
	23,
	89,
	26,
	691,
	2419,
	691,
	2419,
	154,
	137,
	154,
	137,
	154,
	137,
	23,
	3,
	23,
	23,
	23,
	2425,
	9,
	10,
	10,
	2426,
	9,
	105,
	2427,
	23,
	23,
	26,
	26,
	23,
	89,
	10,
	34,
	34,
	10,
	34,
	34,
	2428,
	2428,
	54,
	54,
	192,
	192,
	23,
	23,
	23,
	23,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	23,
	26,
	35,
	130,
	14,
	34,
	130,
	14,
	14,
	14,
	23,
	23,
	1,
	2431,
	138,
	14,
	26,
	2432,
	2433,
	2434,
	2435,
	28,
	2436,
	28,
	485,
	125,
	2437,
	102,
	2438,
	125,
	205,
	470,
	1033,
	1033,
	1033,
	2275,
	2439,
	2040,
	2040,
	105,
	105,
	1339,
	1339,
	1339,
	1339,
	1339,
	1339,
	103,
	102,
	144,
	2287,
	2440,
	205,
	205,
	205,
	105,
	2441,
	2040,
	1033,
	205,
	205,
	105,
	2442,
	2443,
	144,
	105,
	205,
	205,
	205,
	586,
	102,
	105,
	2441,
	105,
	105,
	105,
	105,
	105,
	2287,
	105,
	2287,
	2340,
	205,
	105,
	2340,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	586,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	205,
	205,
	205,
	205,
	205,
	205,
	205,
	205,
	105,
	125,
	2444,
	2342,
	2342,
	205,
	205,
	205,
	2445,
	2446,
	2445,
	2446,
	2447,
	2448,
	2449,
	2286,
	2286,
	28,
	28,
	28,
	28,
	28,
	567,
	567,
	567,
	567,
	2450,
	2451,
	2450,
	137,
	152,
	361,
	0,
	0,
	0,
	0,
	0,
	109,
	109,
	137,
	137,
	137,
	137,
	23,
	89,
	89,
	2393,
	2394,
	4,
	23,
	300,
	512,
	334,
	38,
	129,
	32,
	26,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	37,
	2383,
	2452,
	2452,
	2383,
	2453,
	2454,
	2453,
	2455,
	2454,
	2454,
	2455,
	2453,
	2454,
	2453,
	56,
	37,
	129,
	14,
	2358,
	2358,
	2456,
	2456,
	9,
	10,
	14,
	3,
	2457,
	130,
	32,
	23,
	32,
	89,
	2458,
	56,
	37,
	89,
	14,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	198,
	2459,
	967,
	2460,
	198,
	2459,
	967,
	2460,
	198,
	967,
	2460,
	2460,
	198,
	2459,
	2460,
	198,
	2459,
	967,
	2460,
	107,
	107,
	198,
	2459,
	967,
	2460,
	26,
	27,
	2461,
	608,
	2413,
	198,
	2459,
	967,
	2460,
	26,
	27,
	2461,
	608,
	2413,
	23,
	449,
	449,
	26,
	123,
	23,
	23,
	215,
	23,
	2298,
	28,
	28,
	2298,
	14,
	23,
	14,
	23,
	2462,
	2463,
	2464,
	2465,
	37,
	2453,
	2455,
	2454,
	2453,
	2455,
	2453,
	2454,
	56,
	1477,
	1021,
	1724,
	1552,
	2466,
	2467,
	2468,
	2469,
	2470,
	2471,
	14,
	14,
	14,
	14,
	14,
	14,
	10,
	183,
	2472,
	2473,
	0,
	0,
	119,
	137,
	489,
	135,
	2474,
	265,
	1,
	0,
	0,
	1627,
	2475,
	2475,
	2475,
	2404,
	2404,
	2476,
	2477,
	2478,
	2477,
	2477,
	352,
	2479,
	352,
	2480,
	2481,
	2482,
	2483,
	2484,
	2485,
	2486,
	168,
	2487,
	2487,
	21,
	2488,
	46,
	114,
	21,
	2489,
	2490,
	2490,
	2491,
	2492,
	1,
	2477,
	2493,
	2494,
	137,
	679,
	23,
	0,
	2495,
	2495,
	0,
	2404,
	2496,
	683,
	989,
	23,
	6,
	90,
	354,
	23,
	6,
	6,
	2495,
	2309,
	730,
	90,
	351,
	23,
	627,
	6,
	90,
	90,
	90,
	90,
	90,
	23,
	90,
	90,
	90,
	6,
	23,
	9,
	114,
	1,
	114,
	114,
	114,
	114,
	114,
	114,
	114,
	2497,
	2497,
	141,
	141,
	135,
	931,
	351,
	23,
	6,
	6,
	14,
	34,
	2458,
	90,
	90,
	90,
	90,
	90,
	90,
	90,
	43,
	194,
	288,
	288,
	119,
	14,
	27,
	6,
	6,
	23,
	3,
	90,
	90,
	90,
	90,
	90,
	90,
	90,
	90,
	27,
	27,
	6,
	23,
	6,
	23,
	6,
	90,
	939,
	23,
	2498,
	23,
	627,
	23,
	627,
	23,
	1,
	1,
	0,
	627,
	23,
	627,
	23,
	627,
	23,
	627,
	23,
	627,
	23,
	6,
	114,
	114,
	23,
	6,
	23,
	6,
	6,
	23,
	6,
	46,
	46,
	2502,
	23,
	6,
	17,
	23,
	6,
	114,
	114,
	151,
	1,
	135,
	137,
	154,
	23,
	3,
	3,
	23,
	28,
	28,
	28,
	9,
	28,
	2310,
	2311,
	32,
	2312,
	17,
	2313,
	2310,
	2311,
	32,
	2312,
	17,
	2313,
	2310,
	2311,
	32,
	2312,
	17,
	2314,
	32,
	32,
	32,
	32,
	32,
	435,
	32,
	32,
	722,
	330,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	23,
	23,
	23,
	23,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	23,
	2326,
	2327,
	2328,
	2329,
	26,
	2344,
	64,
	23,
	23,
	2352,
	23,
	2352,
	3,
	23,
	2352,
	2352,
	2352,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	2348,
	23,
	2355,
	23,
	200,
	10,
	10,
	10,
	38,
	23,
	32,
	23,
	32,
	23,
	32,
	23,
	32,
	23,
	23,
	23,
	32,
	32,
	23,
	89,
	14,
	23,
	14,
	32,
	23,
	89,
	23,
	14,
	23,
	14,
	32,
	23,
	89,
	23,
	14,
	23,
	14,
	23,
	9,
	3,
	23,
	30,
	105,
	105,
	105,
	105,
	23,
	23,
	32,
	3,
	23,
	28,
	9,
	2406,
	2407,
	28,
	2408,
	2409,
	2408,
	2410,
	23,
	9,
	3,
	23,
	2409,
	2409,
	9,
	30,
	30,
	30,
	2409,
	2409,
	2409,
	2409,
	23,
	2411,
	23,
	9,
	23,
	2411,
	9,
	23,
	9,
	9,
	23,
	9,
	23,
	9,
	9,
	9,
	9,
	23,
	9,
	3,
	23,
	219,
	219,
	219,
	219,
	219,
	219,
	219,
	23,
	23,
	26,
	3,
	23,
	28,
	2424,
	3,
	23,
	2429,
	2430,
	14,
	14,
	27,
	3,
	23,
	2408,
	2409,
	28,
	23,
	9,
	3,
	23,
	480,
	23,
	23,
	56,
	23,
	9,
	23,
	9,
	3,
	23,
	480,
	480,
	480,
	480,
	23,
	2410,
	23,
	2410,
	23,
	2410,
	23,
	9,
	23,
	2410,
	3,
	23,
	90,
	90,
	27,
	27,
	23,
	9,
	3,
	23,
	2409,
	2409,
	23,
	9,
	23,
	9,
	23,
	9,
	23,
	9,
	23,
	2411,
	9,
	3,
	23,
	2499,
	2500,
	2501,
	3,
	23,
	28,
	2408,
	2409,
	3,
	23,
	28,
	9,
	28,
	3,
	23,
	30,
	30,
	30,
	23,
	9,
	23,
	9,
	23,
	9,
	23,
	2411,
	9,
	3,
	23,
	9,
	23,
	2411,
	23,
	9,
	23,
	9,
	9,
	9,
	9,
	23,
	9,
	9,
	23,
	9,
	9,
	23,
	9,
};
extern const Il2CppCodeGenModule g_Unity_BarracudaCodeGenModule;
const Il2CppCodeGenModule g_Unity_BarracudaCodeGenModule = 
{
	"Unity.Barracuda.dll",
	2419,
	s_methodPointers,
	176,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
};
