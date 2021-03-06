/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MXMInstrumental <NSCopying>
@optional
-(void)willStartAtEstimatedTime:(unsigned long long)arg1;
-(BOOL)prepareWithOptions:(id)arg1 error:(id*)arg2;
-(void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
-(void)willStop;
-(void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;

@required
-(BOOL)harvestData:(id*)arg1 error:(id*)arg2;

@end

