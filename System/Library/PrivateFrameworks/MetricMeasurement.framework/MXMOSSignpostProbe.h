/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MXMProbe.h>

@protocol OS_dispatch_semaphore;
@class SignpostSupportObjectExtractor, NSURL, NSDate, NSObject, MXMMutableSampleData;

@interface MXMOSSignpostProbe : MXMProbe {

	SignpostSupportObjectExtractor* _extractor;
	unsigned long long _mode;
	NSURL* _logArchivePath;
	NSDate* _startDate;
	NSDate* _endDate;
	NSObject*<OS_dispatch_semaphore> _finishedProcessingSema;
	MXMMutableSampleData* _data;

}
+(id)probeHostLive;
+(id)probeHostSystemLogArchiveWithRelativeTimeInterval:(double)arg1 ;
+(id)probeHostSystemLogArchiveWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)probeWithLogArchivePath:(id)arg1 ;
+(id)probeWithLogArchivePath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithMode:(unsigned long long)arg1 ;
-(void)_stopUpdates;
-(id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long*)arg2 ;
-(void)_beginUpdates;
-(id)initWithMode:(unsigned long long)arg1 logArchive:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(void)_setupProcessingBlocks;
-(void)_buildData:(id)arg1 attributes:(id)arg2 signpostEvent:(id)arg3 ;
-(void)_buildData:(id)arg1 signpostInterval:(id)arg2 ;
-(void)_buildData:(id)arg1 signpostAnimationInterval:(id)arg2 ;
-(id)_buildSampleSetWithData:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4 signpostObject:(id)arg5 ;
-(void)_setupProcessingFilter;
-(id)initWithLogArchive:(id)arg1 ;
-(id)initWithLogArchive:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
@end

