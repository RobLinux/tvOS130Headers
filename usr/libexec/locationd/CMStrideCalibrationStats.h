/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:45 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <locationd/locationd-Structs.h>
@interface CMStrideCalibrationStats : NSObject {

	CLStrideCalibrationSessionMetrics fSessionMetrics;
	long long fHeightCM;
	CMFixedSizeQueue<double, 2> fLastAWDTimestamps;

}
-(id)init;
-(void)activityLoggerLogStrideCalEntry:(const SCD_Struct_CM67*)arg1 ;
-(void)awdLogDistance:(double)arg1 status:(int)arg2 description:(id)arg3 ;
-(void)awdMotionFitnessStrideCalibration:(const SCD_Struct_CM67*)arg1 ;
-(void)updateUserHeight:(long long)arg1 ;
-(void)startSessionMetricsWithTime:(double)arg1 session:(int)arg2 ;
-(void)loadLastAWDTimestamps;
-(void)storeLastAWDTimestamps;
-(void)endSessionMetrics:(double)arg1 ;
-(void)setReadyForSubmission;
@end

