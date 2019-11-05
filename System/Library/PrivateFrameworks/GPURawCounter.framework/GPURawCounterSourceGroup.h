/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSDictionary;


@protocol GPURawCounterSourceGroup <NSObject>
@property (readonly) NSString * name; 
@property (readonly) NSArray * sourceList; 
@property (assign) unsigned long long samplingPeriodInMicroseconds; 
@property (assign) unsigned long long samplingTriggers; 
@property (copy) NSDictionary * vendorOptions; 
@property (readonly) unsigned long long sampleMarker; 
@property (readonly) unsigned long long availableCounterTriggers; 
@required
-(NSString *)name;
-(BOOL)stopSampling;
-(unsigned long long)availableCounterTriggers;
-(BOOL)startSampling;
-(NSArray *)sourceList;
-(unsigned long long)samplingPeriodInMicroseconds;
-(void)setSamplingPeriodInMicroseconds:(unsigned long long)arg1;
-(unsigned long long)samplingTriggers;
-(void)setSamplingTriggers:(unsigned long long)arg1;
-(NSDictionary *)vendorOptions;
-(void)setVendorOptions:(id)arg1;
-(unsigned long long)sampleMarker;

@end
