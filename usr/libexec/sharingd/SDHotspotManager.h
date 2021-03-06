/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDMISManagerDelegate.h>

@protocol SDHotspotManagerDelegate, OS_dispatch_queue;
@class SDMISManager, NSNumber, NSObject, NSTimer, NSMutableArray, NSString;

@interface SDHotspotManager : NSObject <SDMISManagerDelegate> {

	SDMISManager* _misManager;
	BOOL _tetheringSupported;
	BOOL _maxConnectionsReached;
	BOOL _startedHostAP;
	BOOL _capturingTailspin;
	BOOL _flippedHotspotSwitch;
	id<SDHotspotManagerDelegate> _delegate;
	NSNumber* _p2pAllowedCache;
	id _hostAPNetwork;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSTimer* _networkTimer;
	NSMutableArray* _handlers;

}

@property (retain) NSNumber * p2pAllowedCache;                                 //@synthesize p2pAllowedCache=_p2pAllowedCache - In the implementation block
@property (assign) BOOL startedHostAP;                                         //@synthesize startedHostAP=_startedHostAP - In the implementation block
@property (assign) BOOL capturingTailspin;                                     //@synthesize capturingTailspin=_capturingTailspin - In the implementation block
@property (assign) BOOL flippedHotspotSwitch;                                  //@synthesize flippedHotspotSwitch=_flippedHotspotSwitch - In the implementation block
@property (retain) id hostAPNetwork;                                           //@synthesize hostAPNetwork=_hostAPNetwork - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;                     //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) NSTimer * networkTimer;                                     //@synthesize networkTimer=_networkTimer - In the implementation block
@property (retain) NSMutableArray * handlers;                                  //@synthesize handlers=_handlers - In the implementation block
@property (getter=isTetheringSupported) BOOL tetheringSupported;               //@synthesize tetheringSupported=_tetheringSupported - In the implementation block
@property (assign,nonatomic) BOOL maxConnectionsReached;                       //@synthesize maxConnectionsReached=_maxConnectionsReached - In the implementation block
@property (readonly) NSString * hotspotName; 
@property (readonly) NSString * hotspotPassword; 
@property (getter=isP2PAllowed,readonly) BOOL p2pAllowed; 
@property (getter=isTetheringInUse,readonly) BOOL tetheringInUse; 
@property (__weak) id<SDHotspotManagerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SDHotspotManagerDelegate>)delegate;
-(void)setDelegate:(id<SDHotspotManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithDelegate:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setHandlers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)handlers;
-(void)addObservers;
-(void)removeObservers;
-(void)misStateChanged:(id)arg1 ;
-(BOOL)isTetheringInUse;
-(void)disableMISImmediately;
-(NSString *)hotspotName;
-(NSString *)hotspotPassword;
-(BOOL)isTetheringSupported;
-(BOOL)maxConnectionsReached;
-(void)startTetheringWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onqueue_updateTetheringSupported;
-(void)onqueue_updateHostAPNetwork;
-(void)debugInfoRequest:(id)arg1 ;
-(void)firstUnlockStateChanged:(id)arg1 ;
-(void)simStateChanged:(id)arg1 ;
-(void)personalHotspotAllowedChanged:(id)arg1 ;
-(void)handleHostAPChanged:(id)arg1 ;
-(BOOL)netRBTetheringSupported;
-(id)hostAPNetwork;
-(BOOL)flippedHotspotSwitch;
-(void)setTetheringSupported:(BOOL)arg1 ;
-(BOOL)isNetworkHostAP:(WiFiNetworkRef)arg1 ;
-(BOOL)shouldTurnOffTethering;
-(void)onqueue_startTetheringWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)hotspotChannel;
-(void)turnOffDiscovery;
-(void)restartNetworkTimer;
-(void)notifyHostAPError:(id)arg1 ;
-(void)onqueue_handleSwitchCondtionsChanged;
-(void)networkTimerFired:(id)arg1 ;
-(void)onqueue_cleanUpFailedNetworkBringUp;
-(void)onqueue_captureTailspin;
-(BOOL)setHotspotPassword:(NSString *)arg1 ;
-(id)_createDefaultPassword;
-(void)onqueue_handleHostAPChanged:(id)arg1 ;
-(void)setHostAPNetwork:(id)arg1 ;
-(void)setMaxConnectionsReached:(BOOL)arg1 ;
-(void)invalidateNetworkTimer;
-(BOOL)startedHostAP;
-(void)setStartedHostAP:(BOOL)arg1 ;
-(void)notifyHostAPActivated;
-(BOOL)isP2PAllowed;
-(BOOL)isTethering;
-(void)stopTethering;
-(NSNumber *)p2pAllowedCache;
-(void)setP2pAllowedCache:(NSNumber *)arg1 ;
-(BOOL)capturingTailspin;
-(void)setCapturingTailspin:(BOOL)arg1 ;
-(void)setFlippedHotspotSwitch:(BOOL)arg1 ;
-(NSTimer *)networkTimer;
-(void)setNetworkTimer:(NSTimer *)arg1 ;
@end

