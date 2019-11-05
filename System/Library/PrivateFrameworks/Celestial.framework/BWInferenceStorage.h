/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BWInferenceProviderStorage, NSArray, NSDictionary;


@protocol BWInferenceStorage <NSObject>
@property (nonatomic,readonly) BWInferenceProviderStorage * inferenceStorage; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBufferPools; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBuffers; 
@property (nonatomic,retain) NSDictionary * inferenceResults; 
@required
-(void)clear;
-(CVBufferRef)pixelBufferForRequirement:(id)arg1;
-(id)pixelBufferPoolForRequirement:(id)arg1;
-(void)setPixelBuffer:(CVBufferRef)arg1 forRequirement:(id)arg2;
-(void)setPixelBufferPool:(id)arg1 forRequirement:(id)arg2;
-(BWInferenceProviderStorage *)inferenceStorage;
-(NSArray *)requirementsNeedingPixelBufferPools;
-(NSArray *)requirementsNeedingPixelBuffers;
-(NSDictionary *)inferenceResults;
-(void)setInferenceResults:(id)arg1;

@end

