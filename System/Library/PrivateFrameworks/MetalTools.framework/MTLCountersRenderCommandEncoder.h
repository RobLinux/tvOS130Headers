/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsRenderCommandEncoder.h>

@class MTLCountersTraceRenderCommandEncoder;

@interface MTLCountersRenderCommandEncoder : MTLToolsRenderCommandEncoder {

	MTLCountersTraceRenderCommandEncoder* _traceEncoder;

}
-(void)dealloc;
-(void)setLabel:(id)arg1 ;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)useHeap:(id)arg1 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)endEncoding;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(void)setDepthClipMode:(unsigned long long)arg1 ;
-(void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3 ;
-(void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2 ;
-(void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2 ;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4 ;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4 ;
-(void)setRenderPipelineState:(id)arg1 ;
-(void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8 ;
-(void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4 ;
-(void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 ;
-(void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2 ;
-(void)setDepthStencilState:(id)arg1 ;
-(void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(void)setTriangleFillMode:(unsigned long long)arg1 ;
-(void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3 ;
-(void)setCullMode:(unsigned long long)arg1 ;
-(void)setFrontFacingWinding:(unsigned long long)arg1 ;
-(void)setViewport:(SCD_Struct_MT3)arg1 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 ;
-(void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 ;
-(void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setScissorRect:(SCD_Struct_MT4)arg1 ;
-(void)setLineWidth:(float)arg1 ;
-(void)setVertexBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVertexTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVertexSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setVertexSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setFragmentBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setFragmentTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setStencilReferenceValue:(unsigned)arg1 ;
-(void)setStencilFrontReferenceValue:(unsigned)arg1 backReferenceValue:(unsigned)arg2 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 ;
-(void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6 ;
-(void)setTessellationFactorBuffer:(id)arg1 offset:(unsigned long long)arg2 instanceStride:(unsigned long long)arg3 ;
-(void)setTessellationFactorScale:(float)arg1 ;
-(void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7 ;
-(void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9 ;
-(void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 atIndex:(unsigned long long)arg5 ;
-(void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(BOOL)arg5 atIndex:(unsigned long long)arg6 ;
-(void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 ;
-(void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(BOOL)arg5 ;
-(id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 ;
@end

