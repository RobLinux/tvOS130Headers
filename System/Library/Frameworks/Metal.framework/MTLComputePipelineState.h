/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MTLComputePipelineState <NSObject>
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@required
-(NSString *)label;
-(id<MTLDevice>)device;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(BOOL)supportIndirectCommandBuffers;
-(unsigned long long)threadExecutionWidth;
-(unsigned long long)staticThreadgroupMemoryLength;

@end

