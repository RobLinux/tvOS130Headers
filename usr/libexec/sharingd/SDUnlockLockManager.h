/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDUnlockSessionManager.h>
#import <sharingd/SDUnlockIDSControllerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_semaphore;
@class NSString, NSDate, NSTimer, NSData, NSObject, SDUnlockMotionDetector, SDUnlockWakeGestureRecord;

@interface SDUnlockLockManager : SDUnlockSessionManager <SDUnlockIDSControllerDelegate> {

	BOOL _inPosition;
	BOOL _canRetrySetup;
	BOOL _sentLockedState;
	BOOL _checkingWristState;
	BOOL _waitingForAuthToken;
	BOOL _preventingExitForSetup;
	BOOL _onWristForCurrentSession;
	BOOL _checkingWristAndMotionState;
	NSString* _requestID;
	NSDate* _wristOnDate;
	NSTimer* _enableTimer;
	NSData* _tempLongTermKey;
	NSDate* _sessionStartDate;
	NSString* _passcode;
	long long _unlockSessionID;
	NSObject*<OS_dispatch_source> _longTermKeyTimer;
	long long _deviceOffWristForSessionID;
	NSObject*<OS_dispatch_source> _wristAndMotionTimer;
	NSObject*<OS_dispatch_semaphore> _positionSemaphore;
	SDUnlockMotionDetector* _motionDetector;
	SDUnlockWakeGestureRecord* _lastWakeGestureRecord;
	/*^block*/id _enableHandler;
	/*^block*/id _wristAndMotionStateHandler;

}

@property (assign,nonatomic) BOOL inPosition;                                       //@synthesize inPosition=_inPosition - In the implementation block
@property (assign) BOOL canRetrySetup;                                              //@synthesize canRetrySetup=_canRetrySetup - In the implementation block
@property (retain) NSString * requestID;                                            //@synthesize requestID=_requestID - In the implementation block
@property (retain) NSDate * wristOnDate;                                            //@synthesize wristOnDate=_wristOnDate - In the implementation block
@property (assign) BOOL sentLockedState;                                            //@synthesize sentLockedState=_sentLockedState - In the implementation block
@property (retain) NSTimer * enableTimer;                                           //@synthesize enableTimer=_enableTimer - In the implementation block
@property (retain) NSData * tempLongTermKey;                                        //@synthesize tempLongTermKey=_tempLongTermKey - In the implementation block
@property (assign) BOOL checkingWristState;                                         //@synthesize checkingWristState=_checkingWristState - In the implementation block
@property (assign) BOOL waitingForAuthToken;                                        //@synthesize waitingForAuthToken=_waitingForAuthToken - In the implementation block
@property (retain) NSDate * sessionStartDate;                                       //@synthesize sessionStartDate=_sessionStartDate - In the implementation block
@property (copy) NSString * passcode;                                               //@synthesize passcode=_passcode - In the implementation block
@property (assign) long long unlockSessionID;                                       //@synthesize unlockSessionID=_unlockSessionID - In the implementation block
@property (assign) BOOL preventingExitForSetup;                                     //@synthesize preventingExitForSetup=_preventingExitForSetup - In the implementation block
@property (assign) BOOL onWristForCurrentSession;                                   //@synthesize onWristForCurrentSession=_onWristForCurrentSession - In the implementation block
@property (assign) BOOL checkingWristAndMotionState;                                //@synthesize checkingWristAndMotionState=_checkingWristAndMotionState - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> longTermKeyTimer;                  //@synthesize longTermKeyTimer=_longTermKeyTimer - In the implementation block
@property (assign) long long deviceOffWristForSessionID;                            //@synthesize deviceOffWristForSessionID=_deviceOffWristForSessionID - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> wristAndMotionTimer;               //@synthesize wristAndMotionTimer=_wristAndMotionTimer - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> positionSemaphore;              //@synthesize positionSemaphore=_positionSemaphore - In the implementation block
@property (retain) SDUnlockMotionDetector * motionDetector;                         //@synthesize motionDetector=_motionDetector - In the implementation block
@property (retain) SDUnlockWakeGestureRecord * lastWakeGestureRecord;               //@synthesize lastWakeGestureRecord=_lastWakeGestureRecord - In the implementation block
@property (copy) id enableHandler;                                                  //@synthesize enableHandler=_enableHandler - In the implementation block
@property (copy) id wristAndMotionStateHandler;                                     //@synthesize wristAndMotionStateHandler=_wristAndMotionStateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLockManager;
-(id)init;
-(void)resetState;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(NSDate *)sessionStartDate;
-(void)setSessionStartDate:(NSDate *)arg1 ;
-(BOOL)lostModeEnabled;
-(BOOL)unlockEnabled;
-(void)addObservers;
-(NSDate *)wristOnDate;
-(void)setWristOnDate:(NSDate *)arg1 ;
-(void)debugInfoRequested:(id)arg1 ;
-(void)checkKeyBagState;
-(id)generateDebugInfo;
-(BOOL)waitingForAuthToken;
-(void)sendDeviceLockStateChanged:(BOOL)arg1 ;
-(void)setSentLockedState:(BOOL)arg1 ;
-(void)disableUnlockPairing;
-(BOOL)sentLockedState;
-(void)sendLongTermKeyRequest:(id)arg1 requestID:(id)arg2 ;
-(void)invalidateLongTermKeyTimer;
-(void)resetLongTermKeyRequest;
-(void)handleDevicesDidFailToPair;
-(void)enableTimerFired:(id)arg1 ;
-(void)notifyEnableStateWithError:(id)arg1 ;
-(void)enableUnlockForcingLTKTransfer:(BOOL)arg1 ;
-(void)sendSetupRequest:(id)arg1 withSessionID:(unsigned)arg2 ;
-(void)sendClassALongTermKeyRequest:(id)arg1 sessionID:(unsigned)arg2 ;
-(void)invalidateEnableTimer;
-(BOOL)inPosition;
-(void)setWaitingForAuthToken:(BOOL)arg1 ;
-(void)allowExiting;
-(void)handleStartLTK:(id)arg1 ;
-(void)handleLongTermKeyResponse:(id)arg1 ;
-(void)handleClassALongTermKeyResponse:(id)arg1 ;
-(void)handleSetupSessionCreated:(id)arg1 ;
-(void)handleSetupCreateRecord:(id)arg1 ;
-(void)handleSessionKeyExchangeRequest:(id)arg1 ;
-(void)handleSessionAuthToken:(id)arg1 ;
-(void)handleStashKeyExchangeRequest:(id)arg1 ;
-(void)handleStashToken:(id)arg1 ;
-(void)handleUnlockStateRequest:(id)arg1 ;
-(void)preventExiting;
-(void)handleConfigurationState;
-(BOOL)updateLongTermKeys:(id)arg1 ;
-(void)handleEscrowSessionRequest:(id)arg1 ;
-(void)sendCreateEscrowSecretWithStepData:(id)arg1 sessionID:(unsigned)arg2 ;
-(BOOL)localDeviceLocked;
-(void)setOnWristForCurrentSession:(BOOL)arg1 ;
-(void)sendKeyExchangeResponse:(id)arg1 sessionID:(unsigned)arg2 ;
-(void)getWristAndMotionStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)deviceOffWristForSessionID;
-(long long)unlockSessionID;
-(void)sendSessionUnlockConfirmation:(BOOL)arg1 sessionID:(unsigned)arg2 ;
-(void)sendStashKeyExchangeResponse:(id)arg1 sessionID:(unsigned)arg2 errorCode:(long long)arg3 ;
-(void)sendStashConfirmation:(BOOL)arg1 sessionID:(unsigned)arg2 ;
-(void)sendStateResponseWithUnlockEnabled:(BOOL)arg1 passcodeEnabled:(BOOL)arg2 ;
-(void)restartLongTermKeyTimer;
-(void)restartEnableTimerWithTimeout:(double)arg1 ;
-(void)idsController:(id)arg1 didReceiveProtoData:(id)arg2 forType:(unsigned short)arg3 ;
-(void)idsControllerSpaceDidBecomeAvailable:(id)arg1 ;
-(void)keyBagLockStateChange:(id)arg1 ;
-(void)devicesDidUnpair:(id)arg1 ;
-(void)enableUnlockWithDevice:(id)arg1 passcode:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)deviceOnWrist;
-(void)wristDetectionDisabled:(/*^block*/id)arg1 ;
-(void)forceOnWristCheck;
-(void)setInPosition:(BOOL)arg1 ;
-(BOOL)canRetrySetup;
-(void)setCanRetrySetup:(BOOL)arg1 ;
-(NSTimer *)enableTimer;
-(void)setEnableTimer:(NSTimer *)arg1 ;
-(NSData *)tempLongTermKey;
-(void)setTempLongTermKey:(NSData *)arg1 ;
-(BOOL)checkingWristState;
-(void)setCheckingWristState:(BOOL)arg1 ;
-(void)setUnlockSessionID:(long long)arg1 ;
-(BOOL)preventingExitForSetup;
-(void)setPreventingExitForSetup:(BOOL)arg1 ;
-(BOOL)onWristForCurrentSession;
-(BOOL)checkingWristAndMotionState;
-(void)setCheckingWristAndMotionState:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)longTermKeyTimer;
-(void)setLongTermKeyTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setDeviceOffWristForSessionID:(long long)arg1 ;
-(NSObject*<OS_dispatch_source>)wristAndMotionTimer;
-(void)setWristAndMotionTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)positionSemaphore;
-(void)setPositionSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(SDUnlockMotionDetector *)motionDetector;
-(void)setMotionDetector:(SDUnlockMotionDetector *)arg1 ;
-(SDUnlockWakeGestureRecord *)lastWakeGestureRecord;
-(void)setLastWakeGestureRecord:(SDUnlockWakeGestureRecord *)arg1 ;
-(id)enableHandler;
-(void)setEnableHandler:(id)arg1 ;
-(id)wristAndMotionStateHandler;
-(void)setWristAndMotionStateHandler:(id)arg1 ;
@end

