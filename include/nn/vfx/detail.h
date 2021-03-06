#pragma once

namespace nn { namespace vfx { namespace detail {

SetStaticHeap(nn::vfx::Heap*);
OutputError(char const*, ...);
GetStaticHeap();
AllocFromStaticHeap(unsigned long, unsigned long);
FreeFromStaticHeap(void*);
GetAllocatedSizeFromStaticHeap();
SetDynamicHeap(nn::vfx::Heap*);
GetDynamicHeap();
AllocFromDynamicHeap(unsigned long, unsigned long, unsigned long);
OutputWarning(char const*, ...);
FreeFromDynamicHeap(void*, bool);
AddFreeListForDynamicHeap(void*);
InitializeDelayFreeList(int);
FinalizeDelayFreeList();
FlushDelayFreeList();
SetSuppressOutputLog(bool);
SetOutputLogCallBack(void (*)(char const*, std::__va_list));
SetOutputWarningCallBack(void (*)(char const*, std::__va_list));
SetOutputErrorCallBack(void (*)(char const*, std::__va_list));
OutputLog(char const*, ...);
Warning(void*, nn::vfx::detail::RuntimeWarningId);
GetWarningBitFlag();
VPrintf(char const*, std::__va_list);
HermiteInterpolationOnCubic(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType const&, nn::util::neon::Vector3fType const&, nn::util::neon::Vector3fType const&, nn::util::neon::Vector3fType const&, float);
VectorRotateArbitraryAxis(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType const&, nn::util::neon::Vector3fType const&, float);
DummyRenderStateSetCallback(nn::vfx::RenderStateSetArg&);
CalculateParticleBehavior_FieldCurlNoise(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, nn::vfx::detail::ParticleProperty const*, int);
InitializeCurlNoise(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Heap*);
FinalizeCurlNoise(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
GetCurlNoiseTextureAllocatedSize();
GetCurlNoiseTexture();
RegisterCurlNoiseTextureViewToDescriptorPool(bool (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
UnRegisterCurlNoiseTextureViewToDescriptorPool(void (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
_MatrixFromQuaternion(nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::Vector4fType const&);
CalculateSinCosRad(nn::vfx::detail::ResEmitterVolume const*, nn::vfx::detail::Random*, float, float, float*, float*);
CalculateEmitterKeyFrameAnimation(nn::util::Float3*, bool*, nn::vfx::detail::ResAnimEmitterKeyParamSet const*, float);
MakrRtMatrix(nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateParticleBehaviorCustomField(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, float*, float*, nn::vfx::Emitter*, nn::vfx::detail::ParticleProperty const*, int);
CalculateFluctuationSineWave(float, float, float, float, float, nn::util::neon::Vector4fType const&);
CalculateFluctuationSawToothWave(float, float, float, float, float, nn::util::neon::Vector4fType const&);
CalculateFluctuationRectangleWave(float, float, float, float, float, nn::util::neon::Vector4fType const&);
GetParticleEmitterMatrixY(nn::util::neon::Vector3fType*, nn::vfx::Emitter*, nn::vfx::detail::ResStripeConnection*, int);
SetVertexAttribute(nn::vfx::detail::ConnectionStripeSystem::VertexAttribute*, int, int, nn::util::neon::Vector3fType const&, nn::util::neon::Vector3fType const&, nn::util::neon::Vector3fType const&, float);
CalculateGpuNoise(nn::util::neon::Vector3fType*, nn::vfx::Emitter*, nn::vfx::detail::ParticleProperty const*, int, nn::util::neon::Vector3fType const&, float);
RandFunc(float, float, nn::vfx::detail::ResFieldRandom const*);
GetAggregate4(float, float, float, float, float, float);
GetAggregate2(float, float, float, float);
EquallyDividedSphere2;
EquallyDividedSphere3;
EquallyDividedSphere4;
EquallyDividedSphere6;
EquallyDividedSphere8;
EquallyDividedSphere12;
EquallyDividedSphere20;
EquallyDividedSphere32;
Equally64DividedSphere2;
Equally64DividedSphere3;
Equally64DividedSphere4;
Equally64DividedSphere5;
Equally64DividedSphere6;
Equally64DividedSphere7;
Equally64DividedSphere8;
Equally64DividedSphere9;
Equally64DividedSphere10;
Equally64DividedSphere11;
Equally64DividedSphere12;
Equally64DividedSphere13;
Equally64DividedSphere14;
Equally64DividedSphere15;
Equally64DividedSphere16;
Equally64DividedSphere17;
Equally64DividedSphere18;
Equally64DividedSphere19;
Equally64DividedSphere20;
Equally64DividedSphere21;
Equally64DividedSphere22;
Equally64DividedSphere23;
Equally64DividedSphere24;
Equally64DividedSphere25;
Equally64DividedSphere26;
Equally64DividedSphere27;
Equally64DividedSphere28;
Equally64DividedSphere29;
Equally64DividedSphere30;
Equally64DividedSphere31;
Equally64DividedSphere32;
Equally64DividedSphere33;
Equally64DividedSphere34;
Equally64DividedSphere35;
Equally64DividedSphere36;
Equally64DividedSphere37;
Equally64DividedSphere38;
Equally64DividedSphere39;
Equally64DividedSphere40;
Equally64DividedSphere41;
Equally64DividedSphere42;
Equally64DividedSphere43;
Equally64DividedSphere44;
Equally64DividedSphere45;
Equally64DividedSphere46;
Equally64DividedSphere47;
Equally64DividedSphere48;
Equally64DividedSphere49;
Equally64DividedSphere50;
Equally64DividedSphere51;
Equally64DividedSphere52;
Equally64DividedSphere53;
Equally64DividedSphere54;
Equally64DividedSphere55;
Equally64DividedSphere56;
Equally64DividedSphere57;
Equally64DividedSphere58;
Equally64DividedSphere59;
Equally64DividedSphere60;
Equally64DividedSphere61;
Equally64DividedSphere62;
Equally64DividedSphere63;
Equally64DividedSphere64;
EquallyDividedSphereTable;
gSameDivideSphere64Tbl;
g_StaticHeapAllocatedSize;
g_pStaticHeap;
g_pDynamicHeap;
g_SuppressLog;
g_LogCallback;
g_WarningCallback;
g_ErrorCallback;
g_DelayFreeList;
g_DelayFreeListCount;
g_DelayFreeListMax;
g_WarningFlag;
g_MutexAddDelayFreeList;
g_CurlNoiseTable;
g_CurlNoiseTexture;

} } } 
