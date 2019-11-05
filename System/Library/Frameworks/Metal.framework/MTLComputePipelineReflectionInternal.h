/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineReflection.h>

@class NSArray, NSDictionary;

@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection {

	NSArray* _arguments;
	NSArray* _builtInArguments;
	NSDictionary* _performanceStatistics;
	SCD_Struct_MT25 _flags;
	unsigned _traceBufferIndex;
	NSArray* _constantSamplerUniqueIdentifiers;
	NSArray* _constantSamplerDescriptors;

}
-(id)description;
-(void)dealloc;
-(id)arguments;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)builtInArguments;
-(id)initWithSerializedData:(id)arg1 serializedStageInputDescriptor:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(SCD_Struct_MT25)arg5 ;
-(id)initWithSerializedData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(SCD_Struct_MT25)arg4 ;
-(id)performanceStatistics;
-(void)setPerformanceStatistics:(id)arg1 ;
-(SCD_Struct_MT25)usageFlags;
-(unsigned)traceBufferIndex;
-(id)constantSamplerUniqueIdentifiers;
-(id)constantSamplerDescriptors;
-(void)setConstantSamplerUniqueIdentifiers:(id)arg1 ;
-(void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
@end
