/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSApplicationStateMonitor;

@interface MKApplicationStateMonitor : NSObject {

	BKSApplicationStateMonitor* _appStateMonitor;
	BOOL _inBackground;
	BOOL _active;
	unsigned long long _observerCount;
	BOOL _forceBackboardServicesMonitoring;

}

@property (assign,nonatomic) BOOL forceBackboardServicesMonitoring;                  //@synthesize forceBackboardServicesMonitoring=_forceBackboardServicesMonitoring - In the implementation block
@property (getter=isInBackground,nonatomic,readonly) BOOL inBackground;              //@synthesize inBackground=_inBackground - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;                          //@synthesize active=_active - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(void)startObserving;
-(void)stopObserving;
-(BOOL)isActive;
-(BOOL)isInBackground;
-(void)_enterBackground;
-(void)_exitBackground;
-(void)_becomeActive;
-(void)_resignActive;
-(void)_handleApplicationStateChange:(id)arg1 interestedPID:(int)arg2 ;
-(void)_performSynchronouslyOnMainQueue:(/*^block*/id)arg1 ;
-(void)setForceBackboardServicesMonitoring:(BOOL)arg1 ;
-(BOOL)forceBackboardServicesMonitoring;
@end

