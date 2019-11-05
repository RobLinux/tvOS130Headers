/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsComputePipelineState.h>

@class MTLComputePipelineDescriptor, MTLComputePipelineReflection, MTLToolsFunction;

@interface MTLGPUDebugComputePipelineState : MTLToolsComputePipelineState {

	MTLComputePipelineDescriptor* _descriptor;
	MTLComputePipelineReflection* _reflection;

}

@property (nonatomic,readonly) MTLToolsFunction * computeFunction; 
@property (nonatomic,readonly) MTLComputePipelineReflection * reflection;              //@synthesize reflection=_reflection - In the implementation block
-(void)dealloc;
-(MTLToolsFunction *)computeFunction;
-(id)initWithComputePipelineState:(id)arg1 descriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4 ;
-(MTLComputePipelineReflection *)reflection;
@end

