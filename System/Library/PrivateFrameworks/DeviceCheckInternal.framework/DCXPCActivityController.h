/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DCXPCActivityController : NSObject
+(id)sharedInstance;
-(void)start;
-(void)_registerActivityWithInterval:(double)arg1 ;
-(void)_performMetadataRefreshForActivity:(id)arg1 ;
-(id)_activityCriteriaWithFrequency:(double)arg1 ;
-(void)updateActivityScheduleWithAsset:(id)arg1 ;
@end

