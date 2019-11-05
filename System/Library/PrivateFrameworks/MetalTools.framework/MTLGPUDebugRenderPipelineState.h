/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLToolsFunction;

@interface MTLGPUDebugRenderPipelineState : MTLToolsRenderPipelineState {

	MTLRenderPipelineDescriptor* _descriptor;
	MTLRenderPipelineReflection* _reflection;

}

@property (nonatomic,readonly) MTLToolsFunction * vertexFunction; 
@property (nonatomic,readonly) MTLToolsFunction * fragmentFunction; 
@property (nonatomic,readonly) MTLRenderPipelineReflection * reflection; 
-(void)dealloc;
-(MTLToolsFunction *)vertexFunction;
-(MTLToolsFunction *)fragmentFunction;
-(id)initWithRenderPipelineState:(id)arg1 descriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4 ;
-(id)vertexLibrary;
-(id)fragmentLibrary;
-(MTLRenderPipelineReflection *)reflection;
@end
