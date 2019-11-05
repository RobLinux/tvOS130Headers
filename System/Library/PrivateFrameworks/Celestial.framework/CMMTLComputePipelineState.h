/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/MTLComputePipelineStateSPI.h>

@protocol MTLFunction, MTLComputePipelineState;
@class MTLDebugInstrumentationData, CMMTLDevice, MTLComputePipelineReflection, NSString;

@interface CMMTLComputePipelineState : NSObject <MTLComputePipelineStateSPI> {

	CMMTLDevice* _cmDevice;
	id<MTLFunction> _function;
	MTLComputePipelineReflection* _reflection;
	id<MTLComputePipelineState> _computePipelineState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * debugInstrumentationData; 
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithCMMTLDevice:(id)arg1 function:(id)arg2 options:(unsigned long long)arg3 reflection:(id*)arg4 ;
@end
