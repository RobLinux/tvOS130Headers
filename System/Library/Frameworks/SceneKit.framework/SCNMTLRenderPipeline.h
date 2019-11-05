/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLRenderPipelineState, MTLFunction;
#import <SceneKit/SceneKit-Structs.h>
@class MTLVertexDescriptor, NSArray;

@interface SCNMTLRenderPipeline : NSObject {

	SCD_Struct_SC56 _sceneBuffer;
	C3DFXProgramRef _program;
	C3DFXPassRef _pass;
	SCD_Struct_SC97 _renderPassDesc;
	unsigned _buffersUsageMask[2];
	unsigned _texturesUsageMask[2];
	unsigned _samplersUsageMask[2];
	id<MTLRenderPipelineState> _state;
	MTLVertexDescriptor* _vertexDescriptor;
	id<MTLFunction> _vertexFunction;
	id<MTLFunction> _fragmentFunction;
	NSArray* _frameBufferBindings;
	NSArray* _nodeBufferBindings;
	NSArray* _lightBufferBindings;
	NSArray* _passBufferBindings;
	NSArray* _shadableBufferBindings;

}

@property (nonatomic,retain) id<MTLRenderPipelineState> state;                  //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) MTLVertexDescriptor * vertexDescriptor;              //@synthesize vertexDescriptor=_vertexDescriptor - In the implementation block
@property (nonatomic,retain) id<MTLFunction> vertexFunction;                    //@synthesize vertexFunction=_vertexFunction - In the implementation block
@property (nonatomic,retain) id<MTLFunction> fragmentFunction;                  //@synthesize fragmentFunction=_fragmentFunction - In the implementation block
@property (nonatomic,copy) NSArray * frameBufferBindings;                       //@synthesize frameBufferBindings=_frameBufferBindings - In the implementation block
@property (nonatomic,copy) NSArray * nodeBufferBindings;                        //@synthesize nodeBufferBindings=_nodeBufferBindings - In the implementation block
@property (nonatomic,copy) NSArray * passBufferBindings;                        //@synthesize passBufferBindings=_passBufferBindings - In the implementation block
@property (nonatomic,copy) NSArray * shadableBufferBindings;                    //@synthesize shadableBufferBindings=_shadableBufferBindings - In the implementation block
@property (nonatomic,copy) NSArray * lightBufferBindings;                       //@synthesize lightBufferBindings=_lightBufferBindings - In the implementation block
@property (nonatomic,readonly) unsigned vertexBuffersUsageMask; 
-(id)description;
-(id)init;
-(void)dealloc;
-(id<MTLRenderPipelineState>)state;
-(void)setState:(id<MTLRenderPipelineState>)arg1 ;
-(MTLVertexDescriptor *)vertexDescriptor;
-(void)setVertexFunction:(id<MTLFunction>)arg1 ;
-(void)setFragmentFunction:(id<MTLFunction>)arg1 ;
-(void)setVertexDescriptor:(MTLVertexDescriptor *)arg1 ;
-(id<MTLFunction>)vertexFunction;
-(id<MTLFunction>)fragmentFunction;
-(NSArray *)shadableBufferBindings;
-(NSArray *)frameBufferBindings;
-(NSArray *)passBufferBindings;
-(NSArray *)lightBufferBindings;
-(NSArray *)nodeBufferBindings;
-(BOOL)matchesRenderPassDescriptor:(id)arg1 ;
-(void)_computeUsageForArguments:(id)arg1 function:(id)arg2 ;
-(unsigned)vertexBuffersUsageMask;
-(void)setFrameBufferBindings:(NSArray *)arg1 ;
-(void)setNodeBufferBindings:(NSArray *)arg1 ;
-(void)setLightBufferBindings:(NSArray *)arg1 ;
-(void)setPassBufferBindings:(NSArray *)arg1 ;
-(void)setShadableBufferBindings:(NSArray *)arg1 ;
@end

