/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface CloudBackgroundTaskManager : NSObject {

	NSMapTable* _jobNameToSelectorMap;

}
+(id)sharedTaskManager;
-(id)init;
-(void)_initializeBTAHandlers;
-(id)_baseBtaJobForDeferredPush;
-(void)_scheduleJobNamed:(const char*)arg1 withStartTime:(id)arg2 baseBtaJob:(id)arg3 ;
-(void)_unscheduleJobNamed:(const char*)arg1 ;
-(id)_nextJaliscoMediaPollTimeKey;
-(id)_homeSharingPrefsNumberForKey:(id)arg1 ;
-(BOOL)_cellularDataAllowedForJaliscoMedia;
-(id)_baseBtaJobForPeriodicPollCellularDataAllowed:(BOOL)arg1 ;
-(void)unscheduleSagaDeferredPushUpate;
-(void)_setHomeSharingPrefsNumber:(id)arg1 forKey:(id)arg2 ;
-(void)unscheduleJaliscoMediaDeferredPushUpate;
-(void)_handleSagaDeferredPushUpdateJobSatisfied:(BOOL)arg1 invalidRequest:(BOOL)arg2 ;
-(void)_handleJaliscoMediaPeriodicPollJobSatisfied:(BOOL)arg1 invalidRequest:(BOOL)arg2 ;
-(void)_handleJaliscoMediaDeferredPushUpdateJobSatisfied:(BOOL)arg1 invalidRequest:(BOOL)arg2 ;
-(void)_handleJobNamed:(const char*)arg1 satisfied:(BOOL)arg2 invalid:(BOOL)arg3 ;
-(id)_nextEvaluateSyncRulesThrottleOperationTimeKey;
-(void)scheduleSagaDeferredPushUpate;
-(void)scheduleJaliscoMediaPeriodicPoll;
-(void)unscheduleJaliscoMediaPeriodicPoll;
-(void)scheduleJaliscoMediaDeferredPushUpate;
-(double)_throttledDeferredEvaluateKeepLocalTime;
-(id)_nextEvaluateSyncRulesOperationTimeKey;
-(id)_nextJaliscoAppsPollTimeKey;
-(BOOL)_cellularDataAllowedForJaliscoApps;
@end

