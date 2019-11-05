/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/NSXPCListenerDelegate.h>
#import <useractivityd/UACornerActionManagerDebugInterface.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;
@class NSMutableSet, NSDate, NSArray, NSObject, BluetoothManager, NSUUID, NSSet, NSUserDefaults, ActivityManagerDebuggingManager, UAUserActivityInfo, UASharedPasteboardClientController, UAPingController, UADispatchScheduler, UATimedPowerAssertions, PowerManagerIdleTracker, NSTimer, NSString;

@interface UACornerActionManager : NSObject <NSXPCListenerDelegate, UACornerActionManagerDebugInterface> {

	BOOL _suspended;
	NSMutableSet* _advertisers;
	NSMutableSet* _receivers;
	NSMutableSet* _clients;
	NSMutableSet* _notifiers;
	NSMutableSet* _handlers;
	NSDate* _creationTime;
	NSArray* _itemsBeingAdvertised;
	int _managedSettingsChangedNotificationToken;
	NSObject*<OS_dispatch_group> _helpersDispatchGroup;
	double _systemIdlePreviousTimeSinceLastUserActivity;
	BOOL _isBluetoothEnabled;
	BOOL _advertisingSuspended;
	int _lastNumAdvertiseableProcesses;
	BOOL _backlightOn;
	BOOL _systemHasSuspendedAdvertisements;
	BOOL _systemHasSuspendedScanning;
	BOOL _userActive;
	BOOL _batterySaverModeEnabled;
	BOOL _receivingSuspended;
	BOOL _deviceUILocked;
	BOOL _screenDimmed;
	BOOL _systemIsIdle;
	BOOL _pingMode;
	int _backlightLevelToken;
	unsigned _holdPowerAssertion;
	int _systemPreferenceChangedToken;
	int _uiLockStatusToken;
	BluetoothManager* bluetoothManager;
	NSUUID* _uuid;
	NSSet* _activeDevicesIdentifiers;
	NSUserDefaults* _userDefaults;
	ActivityManagerDebuggingManager* _debugManager;
	UAUserActivityInfo* _pinnedUserActivityInfoItem;
	UASharedPasteboardClientController* _pasteboardController;
	UAPingController* _pingController;
	NSObject*<OS_dispatch_queue> _mainDispatchQ;
	UADispatchScheduler* _nextUserIdleDeterminationScheduler;
	UADispatchScheduler* _nextUpdateAdvertisedItemsScheduler;
	UADispatchScheduler* _nextScheduleBestAppDeterminationScheduler;
	UATimedPowerAssertions* _deviceUILockedPowerAssertion;
	UATimedPowerAssertions* _screenDimmedPowerAssertion;
	NSDate* _holdPowerAssertionUntil;
	NSObject*<OS_dispatch_source> _holdPowerAssertionSourceTimer;
	PowerManagerIdleTracker* _userIdleTracker;
	UATimedPowerAssertions* _userInactivePowerAssertion;
	NSDate* _lastTimePayloadWasRequestedForAdvertisedItem;
	double _avgPingTime;
	NSDate* _pingStart;
	NSObject*<OS_dispatch_semaphore> _pongSem;
	NSTimer* _pongTimer;

}

@property (copy,readonly) NSArray * itemsBeingAdvertised;                                                 //@synthesize itemsBeingAdvertised=_itemsBeingAdvertised - In the implementation block
@property (retain,readonly) UADispatchScheduler * nextUserIdleDeterminationScheduler;                     //@synthesize nextUserIdleDeterminationScheduler=_nextUserIdleDeterminationScheduler - In the implementation block
@property (retain,readonly) UADispatchScheduler * nextUpdateAdvertisedItemsScheduler;                     //@synthesize nextUpdateAdvertisedItemsScheduler=_nextUpdateAdvertisedItemsScheduler - In the implementation block
@property (retain,readonly) UADispatchScheduler * nextScheduleBestAppDeterminationScheduler;              //@synthesize nextScheduleBestAppDeterminationScheduler=_nextScheduleBestAppDeterminationScheduler - In the implementation block
@property (assign) BOOL systemHasSuspendedAdvertisements;                                                 //@synthesize systemHasSuspendedAdvertisements=_systemHasSuspendedAdvertisements - In the implementation block
@property (assign) BOOL systemHasSuspendedScanning;                                                       //@synthesize systemHasSuspendedScanning=_systemHasSuspendedScanning - In the implementation block
@property (assign) BOOL deviceUILocked;                                                                   //@synthesize deviceUILocked=_deviceUILocked - In the implementation block
@property (retain) UATimedPowerAssertions * deviceUILockedPowerAssertion;                                 //@synthesize deviceUILockedPowerAssertion=_deviceUILockedPowerAssertion - In the implementation block
@property (assign) BOOL screenDimmed;                                                                     //@synthesize screenDimmed=_screenDimmed - In the implementation block
@property (retain) UATimedPowerAssertions * screenDimmedPowerAssertion;                                   //@synthesize screenDimmedPowerAssertion=_screenDimmedPowerAssertion - In the implementation block
@property (assign) int backlightLevelToken;                                                               //@synthesize backlightLevelToken=_backlightLevelToken - In the implementation block
@property (retain) NSDate * holdPowerAssertionUntil;                                                      //@synthesize holdPowerAssertionUntil=_holdPowerAssertionUntil - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> holdPowerAssertionSourceTimer;                           //@synthesize holdPowerAssertionSourceTimer=_holdPowerAssertionSourceTimer - In the implementation block
@property (assign) unsigned holdPowerAssertion;                                                           //@synthesize holdPowerAssertion=_holdPowerAssertion - In the implementation block
@property (retain) PowerManagerIdleTracker * userIdleTracker;                                             //@synthesize userIdleTracker=_userIdleTracker - In the implementation block
@property (assign) BOOL userActive;                                                                       //@synthesize userActive=_userActive - In the implementation block
@property (retain) UATimedPowerAssertions * userInactivePowerAssertion;                                   //@synthesize userInactivePowerAssertion=_userInactivePowerAssertion - In the implementation block
@property (assign) BOOL systemIsIdle;                                                                     //@synthesize systemIsIdle=_systemIsIdle - In the implementation block
@property (copy) NSDate * lastTimePayloadWasRequestedForAdvertisedItem;                                   //@synthesize lastTimePayloadWasRequestedForAdvertisedItem=_lastTimePayloadWasRequestedForAdvertisedItem - In the implementation block
@property (retain) BluetoothManager * bluetoothManager; 
@property (assign) int systemPreferenceChangedToken;                                                      //@synthesize systemPreferenceChangedToken=_systemPreferenceChangedToken - In the implementation block
@property (assign) int uiLockStatusToken;                                                                 //@synthesize uiLockStatusToken=_uiLockStatusToken - In the implementation block
@property (assign) BOOL pingMode;                                                                         //@synthesize pingMode=_pingMode - In the implementation block
@property (assign) double avgPingTime;                                                                    //@synthesize avgPingTime=_avgPingTime - In the implementation block
@property (retain) NSDate * pingStart;                                                                    //@synthesize pingStart=_pingStart - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> pongSem;                                              //@synthesize pongSem=_pongSem - In the implementation block
@property (retain) NSTimer * pongTimer;                                                                   //@synthesize pongTimer=_pongTimer - In the implementation block
@property (copy,readonly) NSUUID * uuid;                                                                  //@synthesize uuid=_uuid - In the implementation block
@property (readonly) NSSet * activeDevicesIdentifiers;                                                    //@synthesize activeDevicesIdentifiers=_activeDevicesIdentifiers - In the implementation block
@property (retain,readonly) NSUserDefaults * userDefaults;                                                //@synthesize userDefaults=_userDefaults - In the implementation block
@property (getter=isBatterySaverModeEnabled,readonly) BOOL batterySaverModeEnabled;                       //@synthesize batterySaverModeEnabled=_batterySaverModeEnabled - In the implementation block
@property (retain,readonly) ActivityManagerDebuggingManager * debugManager;                               //@synthesize debugManager=_debugManager - In the implementation block
@property (retain) UAUserActivityInfo * pinnedUserActivityInfoItem;                                       //@synthesize pinnedUserActivityInfoItem=_pinnedUserActivityInfoItem - In the implementation block
@property (getter=isBacklightOn) BOOL backlightOn;                                                        //@synthesize backlightOn=_backlightOn - In the implementation block
@property (readonly) BOOL activityAdvertisingAllowed; 
@property (readonly) BOOL activityReceivingAllowed; 
@property (assign) BOOL advertisingSuspended; 
@property (copy,readonly) NSSet * advertisers; 
@property (assign) BOOL receivingSuspended;                                                               //@synthesize receivingSuspended=_receivingSuspended - In the implementation block
@property (copy,readonly) NSSet * receivers; 
@property (copy,readonly) NSSet * clients; 
@property (copy,readonly) NSSet * notifiers; 
@property (copy,readonly) NSSet * handlers; 
@property (copy,readonly) NSSet * allHandlers; 
@property (retain) UASharedPasteboardClientController * pasteboardController;                             //@synthesize pasteboardController=_pasteboardController - In the implementation block
@property (retain) UAPingController * pingController;                                                     //@synthesize pingController=_pingController - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> mainDispatchQ;                                            //@synthesize mainDispatchQ=_mainDispatchQ - In the implementation block
@property (assign) BOOL suspended; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cornerActionManager;
+(id)sharedActivityManagerServer;
-(id)init;
-(void)dealloc;
-(void)resume;
-(void)setSuspended:(BOOL)arg1 ;
-(void)suspend;
-(BOOL)suspended;
-(NSUUID *)uuid;
-(void)terminate;
-(NSSet *)clients;
-(id)statusString;
-(NSUserDefaults *)userDefaults;
-(void)addAdvertiser:(id)arg1 ;
-(void)removeAdvertiser:(id)arg1 ;
-(void)addHandler:(id)arg1 ;
-(void)removeHandler:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(NSSet *)handlers;
-(BOOL)isBatterySaverModeEnabled;
-(void)addClient:(id)arg1 ;
-(BOOL)isBluetoothEnabled;
-(NSSet *)notifiers;
-(id)debuggingInfo;
-(BOOL)fetchMoreAppSuggestions;
-(void)addReceiver:(id)arg1 ;
-(void)removeReceiver:(id)arg1 ;
-(NSSet *)receivers;
-(double)avgPingTime;
-(BluetoothManager *)bluetoothManager;
-(void)setBluetoothManager:(BluetoothManager *)arg1 ;
-(void)bluetoothAvailabilityChange:(id)arg1 ;
-(NSSet *)advertisers;
-(void)scheduleUpdatingAdvertisableItems;
-(void)addActivityNotifier:(id)arg1 ;
-(BOOL)scheduleBestAppDetermination;
-(void)removeActivityNotifier:(id)arg1 ;
-(void)triggerUserIdleDetermination;
-(id)cornerActionItems;
-(BOOL)activityReceivingAllowed;
-(id)cornerActionItemForUUID:(id)arg1 ;
-(ActivityManagerDebuggingManager *)debugManager;
-(void)setPasteboardController:(UASharedPasteboardClientController *)arg1 ;
-(UASharedPasteboardClientController *)pasteboardController;
-(void)setPingController:(UAPingController *)arg1 ;
-(void)scheduleUpdatingAdvertisableItems:(double)arg1 ;
-(void)setMainDispatchQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)mainDispatchQ;
-(void)_determineWhenSystemGoesIdleThread;
-(void)_determineItemToAdvertiseForHandoffThread;
-(void)_checkIfBestApplicationChangedThread;
-(void)setDeviceUILocked:(BOOL)arg1 ;
-(void)updateUserActiveState:(BOOL)arg1 ;
-(void)setUserIdleTracker:(PowerManagerIdleTracker *)arg1 ;
-(UADispatchScheduler *)nextUpdateAdvertisedItemsScheduler;
-(id)advertiseableItems;
-(id)uaAdvertisableItemsInOrder:(BOOL)arg1 ;
-(BOOL)screenDimmed;
-(NSDate *)lastTimePayloadWasRequestedForAdvertisedItem;
-(void)setLastTimePayloadWasRequestedForAdvertisedItem:(NSDate *)arg1 ;
-(NSArray *)itemsBeingAdvertised;
-(BOOL)advertisingSuspended;
-(void)triggerUserIdleDetermination:(double)arg1 ;
-(BOOL)activityAdvertisingAllowed;
-(UADispatchScheduler *)nextUserIdleDeterminationScheduler;
-(BOOL)userActive;
-(BOOL)weAreAdvertisingAtLeastOneItem;
-(void)setUserInactivePowerAssertion:(UATimedPowerAssertions *)arg1 ;
-(UATimedPowerAssertions *)userInactivePowerAssertion;
-(void)setScreenDimmedPowerAssertion:(UATimedPowerAssertions *)arg1 ;
-(UATimedPowerAssertions *)screenDimmedPowerAssertion;
-(BOOL)deviceUILocked;
-(UATimedPowerAssertions *)deviceUILockedPowerAssertion;
-(BOOL)systemHasSuspendedAdvertisements;
-(void)setSystemHasSuspendedAdvertisements:(BOOL)arg1 ;
-(void)setSystemHasSuspendedScanning:(BOOL)arg1 ;
-(BOOL)haveBestAppChangeNotificationClients;
-(BOOL)scheduleBestAppDetermination:(double)arg1 ;
-(UADispatchScheduler *)nextScheduleBestAppDeterminationScheduler;
-(void)triggerAll;
-(int)systemPreferenceChangedToken;
-(int)uiLockStatusToken;
-(void)setUiLockStatusToken:(int)arg1 ;
-(void)suspendListeningForBluetooth;
-(PowerManagerIdleTracker *)userIdleTracker;
-(void)updateUIDeviceLockedState:(BOOL)arg1 ;
-(int)backlightLevelToken;
-(BOOL)isBacklightOn;
-(void)updateScreenDimStateState:(BOOL)arg1 ;
-(void)resumeListeningForBluetooth;
-(void)setDeviceUILockedPowerAssertion:(UATimedPowerAssertions *)arg1 ;
-(BOOL)weAreAdvertisingAnItem;
-(id)uaAdvertisableItemsInOrder;
-(id)dictionaryForAdvertisableItem:(id)arg1 ;
-(UAUserActivityInfo *)pinnedUserActivityInfoItem;
-(BOOL)receivingSuspended;
-(void)updateScreenSaverActive:(BOOL)arg1 ;
-(BOOL)shouldItemBeAdvertised:(id)arg1 ;
-(id)activeAdvertiseableItemsUUIDs;
-(void)userActivityItemsChanged;
-(void)setAdvertisingSuspended:(BOOL)arg1 ;
-(BOOL)systemHasSuspendedScanning;
-(id)bestCornerItem;
-(id)bestCornerItem:(id)arg1 ;
-(void)checkIfBestCornerItemChanged:(double)arg1 ;
-(void)processWasRemoved;
-(void)setUserActive:(BOOL)arg1 ;
-(id)dictionaryForCornerActionItem:(id)arg1 ;
-(id)dynamicUserActivitiesString;
-(id)shortStatusString;
-(NSSet *)allHandlers;
-(void)setBacklightOn:(BOOL)arg1 ;
-(NSSet *)activeDevicesIdentifiers;
-(void)setPinnedUserActivityInfoItem:(UAUserActivityInfo *)arg1 ;
-(void)setReceivingSuspended:(BOOL)arg1 ;
-(UAPingController *)pingController;
-(void)setScreenDimmed:(BOOL)arg1 ;
-(void)setBacklightLevelToken:(int)arg1 ;
-(NSDate *)holdPowerAssertionUntil;
-(void)setHoldPowerAssertionUntil:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_source>)holdPowerAssertionSourceTimer;
-(void)setHoldPowerAssertionSourceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned)holdPowerAssertion;
-(void)setHoldPowerAssertion:(unsigned)arg1 ;
-(BOOL)systemIsIdle;
-(void)setSystemIsIdle:(BOOL)arg1 ;
-(void)setSystemPreferenceChangedToken:(int)arg1 ;
-(BOOL)pingMode;
-(void)setPingMode:(BOOL)arg1 ;
-(void)setAvgPingTime:(double)arg1 ;
-(NSDate *)pingStart;
-(void)setPingStart:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)pongSem;
-(void)setPongSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSTimer *)pongTimer;
-(void)setPongTimer:(NSTimer *)arg1 ;
@end

