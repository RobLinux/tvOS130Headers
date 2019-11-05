/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSHashTable, NSDictionary, NSObject;

@interface SDAutoUnlockNotificationsManager : NSObject {

	id _doubleClickListener;
	id _cancelListener;
	NSHashTable* _observers;
	NSDictionary* _promptInfo;
	NSObject*<OS_dispatch_source> _notificationTimer;
	/*^block*/id _radarNotificationCompletion;

}

@property (retain) NSHashTable * observers;                                      //@synthesize observers=_observers - In the implementation block
@property (retain) NSDictionary * promptInfo;                                    //@synthesize promptInfo=_promptInfo - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> notificationTimer;              //@synthesize notificationTimer=_notificationTimer - In the implementation block
@property (copy) id radarNotificationCompletion;                                 //@synthesize radarNotificationCompletion=_radarNotificationCompletion - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)notifyObservers:(SEL)arg1 ;
-(NSObject*<OS_dispatch_source>)notificationTimer;
-(void)setNotificationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)removeAuthorizationRequestNotification;
-(void)showUnlockedByDeviceNotificationWithDeviceID:(id)arg1 ;
-(id)authPromptInfo;
-(NSDictionary *)promptInfo;
-(void)dismissNotification;
-(void)showAuthorizationRequestNotificationWithDeviceID:(id)arg1 appName:(id)arg2 appIcon:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)showSuggestionNotificationWithDevice:(id)arg1 ;
-(void)showMacUnlockedNotificationWithDuration:(id)arg1 ;
-(void)showSetupRetryNotificationWithDevice:(id)arg1 ;
-(void)showFileRadarNotificationWithCompletion:(/*^block*/id)arg1 ;
-(void)restartNotificationTimer:(unsigned long long)arg1 ;
-(void)invalidateNotificationTimer;
-(void)setPromptInfo:(NSDictionary *)arg1 ;
-(id)radarNotificationCompletion;
-(void)setRadarNotificationCompletion:(id)arg1 ;
@end
