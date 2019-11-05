/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:30:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Support/ckdiscretionaryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BKSApplicationStateMonitor, NSMutableDictionary, NSMutableSet, NSObject;

@interface NDSpringBoard : NSObject {

	BKSApplicationStateMonitor* _monitor;
	NSMutableDictionary* _observers;
	NSMutableDictionary* _appStates;
	NSMutableSet* _monitoredBundleIDs;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedSpringBoard;
-(id)init;
-(void)handleApplicationStateChange:(id)arg1 ;
-(void)setupMonitor;
-(void)addObserver:(id)arg1 forApplication:(id)arg2 ;
-(void)removeObserver:(id)arg1 forApplication:(id)arg2 ;
-(void)startMonitoringBundleID:(id)arg1 ;
-(void)stopMonitoringBundleID:(id)arg1 ;
-(unsigned)applicationStateForBundleID:(id)arg1 ;
-(BOOL)applicationIsForeground:(id)arg1 ;
-(BOOL)identifierIsForSpringBoardApplication:(id)arg1 ;
@end

