/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDSharedRemoteTextInputDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, WPNearby, RPCompanionLinkClient, SFService, NSUUID, NSString, SFDeviceDiscovery, SDNotificationManager, CUSystemMonitor;

@interface SDRemoteInteractionAgent : NSObject <SDSharedRemoteTextInputDelegate> {

	NSObject*<OS_dispatch_source> _aggressiveTimer;
	WPNearby* _bleWPNearby;
	BOOL _clientEnabled;
	RPCompanionLinkClient* _clinkClient;
	BOOL _cloudPairedOnly;
	SFService* _controlService;
	NSUUID* _currentSessionID;
	NSString* _currentText;
	SFDeviceDiscovery* _deviceDiscovery;
	NSMutableDictionary* _devices;
	BOOL _idsMonitorInstalled;
	NSMutableSet* _legacy_sessionDeviceIDs;
	SDNotificationManager* _notificationManager;
	long long _rssiThreshold;
	NSObject*<OS_dispatch_source> _rtiTimer;
	BOOL _serverEnabled;
	NSSet* _sessionDeviceIDs;
	NSMutableSet* _sessions;
	CUSystemMonitor* _systemMonitor;
	BOOL _preventNotifications;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL preventNotifications;                               //@synthesize preventNotifications=_preventNotifications - In the implementation block
+(id)sharedAgent;
-(id)description;
-(id)init;
-(void)invalidate;
-(void)_update;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3 ;
-(void)clientTextSessionDidBegin:(id)arg1 device:(id)arg2 ;
-(void)prefsChanged;
-(void)clientUserDidTapNotification:(id)arg1 ;
-(void)testKeyboardRemove;
-(void)testKeyboardUpdate;
-(void)_commonEnsureStopped;
-(void)_commonEnsureStarted;
-(void)setPreventNotifications:(BOOL)arg1 ;
-(BOOL)preventNotifications;
-(void)handleEventWithData:(NSDictionary*)arg1 ;
-(void)handleInputDidBeginWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2 ;
-(void)handleInputDidEndWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2 ;
-(int)sessionStart:(id)arg1 ;
-(void)sessionStop:(id)arg1 ;
-(void)_clientDeviceLockStatusChanged;
-(void)_clientEnsureStopped;
-(void)_serverEnsureStopped;
-(void)_serverEnsureStarted;
-(BOOL)_clientShouldStart;
-(void)_clientEnsureStarted;
-(void)_commonIDSChanged:(id)arg1 ;
-(void)_legacy_serverHandleEvent:(id)arg1 ;
-(void)_legacy_serverHandleRequest:(id)arg1 ;
-(void)_serverSendTextSessionDidBegin:(id)arg1 ;
-(void)_legacy_serverRespondInfo:(id)arg1 ;
-(void)_sendRTIPayload:(NSDictionary*)arg1 ;
-(void)advertisingTimerStart;
-(void)_serverSendTextSessionDidEnd:(id)arg1 ;
-(void)advertisingTimerFired;
-(void)clientNotificationUpdateForDevice:(id)arg1 rtiData:(NSDictionary*)arg2 ;
-(void)_clientDeviceFound:(id)arg1 ;
-(void)_clientDeviceLost:(id)arg1 ;
-(void)_clientClinkDeviceFound:(id)arg1 ;
-(void)_clientClinkDeviceLost:(id)arg1 ;
-(void)_clientClinkDeviceChanged:(id)arg1 ;
-(void)_clientUpdateCoalesceTimerForDevice:(id)arg1 identifier:(id)arg2 ;
-(void)clientNotificationPostIfNeededForDevice:(id)arg1 ;
-(void)clientNotificationRemoveForDevice:(id)arg1 ;
-(void)clientNotificationUpdateForDevice:(id)arg1 info:(id)arg2 ;
-(void)testKeyboardPost:(id)arg1 ;
-(void)testKeyboardPostThenUpdate;
-(void)testKeyboardPostWithDelay;
-(void)testKeyboardRemoveWithDelay;
-(void)testKeyboardUpdateWithDelay;
@end

