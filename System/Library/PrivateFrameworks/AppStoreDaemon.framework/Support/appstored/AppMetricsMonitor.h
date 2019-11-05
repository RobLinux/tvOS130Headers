/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DaemonDatabase, NSDate;

@interface AppMetricsMonitor : NSObject {

	DaemonDatabase* _database;
	NSDate* _nextRun;

}
+(id)_determineTimeOfNextRunInDatabase:(id)arg1 ;
+(id)_newActivityCriteriaWithStartTime:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
-(void)_updateActivityCriteria;
-(void)_registerActivityWithStartTime:(id)arg1 ;
-(void)_unregisterActivity;
-(void)scheduleNextRunInDatabase:(id)arg1 ;
-(void)_recordStuckInstallations;
@end

