/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/WPHeySiriProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;
@class NSData, NSMutableDictionary, NSString, NSObject, AFWatchdogTimer, AFPowerAssertionManager, AFMyriadRecord, NSDateFormatter, WPHeySiri, _DKKnowledgeStore, NSUUID, NSDate, AFMyriadEmergencyCallPunchout;

@interface AFMyriadCoordinator : NSObject <WPHeySiriProtocol> {

	unsigned long long _myriadState;
	unsigned long long _nextState;
	unsigned long long _previousState;
	NSData* _incomingAudioData;
	NSData* _previousAdvertisedData;
	NSMutableDictionary* _replies;
	NSMutableDictionary* _replyCounts;
	NSMutableDictionary* _repliesBeforeDecision;
	NSMutableDictionary* _previousTrumps;
	NSMutableDictionary* _incomingTrumps;
	NSMutableDictionary* _multipleContinuations;
	id _delegate;
	NSString* _deviceClassName;
	unsigned char _deviceClass;
	int _deviceAdjust;
	double _deviceDelay;
	double _deviceTrumpDelay;
	double _deviceInEarDelay;
	double _deviceInEarInterval;
	unsigned char _deviceGroup;
	NSObject*<OS_dispatch_queue> _myriadWorkQueue;
	NSObject*<OS_dispatch_queue> _myriadWaitWiProxQueue;
	NSObject*<OS_dispatch_queue> _myriadTimerManagementQueue;
	NSObject*<OS_dispatch_queue> _myriadReadinessQueue;
	NSString* _timerLabel;
	NSObject*<OS_dispatch_source> _timer;
	AFWatchdogTimer* _overallTimeout;
	NSObject*<OS_dispatch_semaphore> _wiproxReadinessSemaphore;
	AFPowerAssertionManager* _powerAssertionManager;
	CFNotificationCenterRef _center;
	AFMyriadRecord* _triggerRecord;
	unsigned long long _voiceTriggerTime;
	float _delayTarget;
	float _advertInterval;
	int _nTimesContinued;
	int _nTimesExtended;
	char _incomingAdjustment;
	int _slowdownMsecs;
	int _testInducedSlowdownMsecs;
	AFMyriadRecord* _maxSlowdownRecord;
	BOOL _BTLEReady;
	BOOL _inTask;
	BOOL _ducking;
	BOOL _stateMachineEncounteredError;
	BOOL _supportsExtended;
	BOOL _listenTimerIsRunning;
	BOOL _coordinationEnabled;
	BOOL _clientIsDirectActivating;
	BOOL _clientIsInEarActivation;
	BOOL _clientRecentlyLostElection;
	BOOL _clientLostDueToTrumping;
	BOOL _clientIsListeningAfterRecentWin;
	BOOL _clientIsWatchActivation;
	BOOL _clientIsWatchTrumpPromote;
	BOOL _clientIsRespondingToSlowdown;
	BOOL _clientDoneRespondingToSlowdown;
	BOOL _clientRespondingToCarPlay;
	int _constantGoodness;
	NSObject*<OS_dispatch_source> _timerSource;
	NSDateFormatter* _dateFormat;
	WPHeySiri* _heySiriBTLE;
	_DKKnowledgeStore* _coreDuetStore;
	NSUUID* _designatedSelfID;
	double _lastSiriActivationTime;
	NSDate* _triggerTime;
	int _nDeltaTs;
	AFMyriadEmergencyCallPunchout* _callPunchout;
	unsigned long long _lastDecisionTime;
	BOOL _lastDecision;
	unsigned short _lastPHash;
	double _lastEmergencyAttempt;
	BOOL _wasEmergency;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentCoordinator;
+(void)didChangeDefaults;
+(void)clearCurrentCoordinator;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)startListening;
-(void)stopListening;
-(void)stopAdvertising;
-(void)heySiriDidUpdateState:(id)arg1 ;
-(void)heySiriStartedAdvertising:(id)arg1 ;
-(void)heySiriStoppedAdvertising:(id)arg1 ;
-(void)heySiri:(id)arg1 failedToStartAdvertisingWithError:(id)arg2 ;
-(void)heySiriAdvertisingPending:(id)arg1 ;
-(void)heySiri:(id)arg1 foundDevice:(id)arg2 withInfo:(id)arg3 ;
-(void)heySiriStartedScanning:(id)arg1 ;
-(void)heySiriStoppedScanning:(id)arg1 ;
-(void)heySiri:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)endTask;
-(void)startAdvertisingEmergency;
-(void)_startAdvertisingFromVoiceTrigger;
-(void)startAdvertisingFromInTaskVoiceTrigger;
-(void)startAdvertisingFromInEarTrigger;
-(void)startAdvertisingFromCarPlayTrigger;
-(void)readDefaults;
-(void)notifyCurrentDecisionResult;
-(void)_initDeviceClassAndAdjustments;
-(void)_initializeTimer;
-(void)enterState:(unsigned long long)arg1 ;
-(void)_waitWiProx:(long long)arg1 andExecute:(/*^block*/id)arg2 ;
-(void)_readDefaults;
-(void)startAdvertisingFromVoiceTrigger;
-(BOOL)_isAlreadyAdvertising;
-(id)voiceTriggerRecord;
-(void)_enterState:(unsigned long long)arg1 ;
-(void)_startAdvertisingFromVoiceTriggerAdjusted:(char)arg1 ;
-(void)startAdvertisingFromVoiceTriggerAdjusted:(char)arg1 ;
-(BOOL)_inTaskTriggerWasTooSoon;
-(id)directTriggerRecord;
-(void)startWatchAdvertisingFromVoiceTrigger;
-(void)startWatchAdvertisingFromDirectTrigger;
-(void)startAdvertisingFromDirectTrigger;
-(void)startAdvertisingFromOutgoingTrigger;
-(void)_duringNextWindowEnterState:(unsigned long long)arg1 ;
-(void)startAdvertisingFromInTaskVoiceTriggerWithContext:(id)arg1 ;
-(void)startAdvertisingFromAlertFiringVoiceTrigger;
-(id)responseObject:(unsigned short)arg1 ;
-(void)startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 ;
-(void)_startTimer:(id)arg1 for:(float)arg2 thenExecute:(/*^block*/id)arg3 ;
-(id)_sortedReplies;
-(id)emptyRecord;
-(void)_advertiseTrigger;
-(BOOL)_shouldContinueFor:(id)arg1 ;
-(id)_endAdvertisingAnalyticsContext:(BOOL)arg1 ;
-(void)_loseElection;
-(void)_startTimer:(id)arg1 for:(float)arg2 thenEnterState:(unsigned long long)arg3 ;
-(void)endAdvertising;
-(void)_ageWedgeFilter;
-(void)resetReplies;
-(void)_endAdvertisingWithDeviceProhibitions:(id)arg1 ;
-(void)_CreateDispatchTimerFor:(double)arg1 toExecute:(/*^block*/id)arg2 ;
-(void)_CreateDispatchTimerForEvent:(id)arg1 toExecute:(/*^block*/id)arg2 ;
-(id)_stateAsString;
-(id)_stateAsString:(unsigned long long)arg1 ;
-(void)_leaveBLEDiagnosticMode;
-(void)_stopAdvertisingAndListening;
-(void)_resetActionWindows;
-(void)_unduck;
-(void)_cancelOverallTimeout;
-(void)_handleStateMachineErrorIfNeeded;
-(void)_setupActionWindows;
-(void)_setOverallTimeout;
-(id)lateSuppressionRecord;
-(void)_advertise:(id)arg1 andMoveTo:(unsigned long long)arg2 ;
-(id)continuationRecord;
-(id)emergencyRecord;
-(id)emergencyHandledRecord;
-(void)_advertiseIndefinite:(id)arg1 ;
-(void)_advertiseSlowdown;
-(void)_advertiseSuppressTriggerInOutput;
-(void)startAdvertisingSlowdown:(unsigned short)arg1 ;
-(void)_enterBLEDiagnosticMode;
-(void)_waitWiProxAndExecute:(/*^block*/id)arg1 ;
-(void)_duringNextWindowExecute:(/*^block*/id)arg1 ;
-(void)setupAdvIntervalsInDelay:(float*)arg1 interval:(float*)arg2 withSlowdown:(int)arg3 ;
-(id)slowdownRecord:(unsigned short)arg1 ;
-(void)_adjustActionWindowsFromSlowdown:(int)arg1 ;
-(void)endAdvertisingWithDeviceProhibitions:(id)arg1 ;
-(void)_advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 thenExecute:(/*^block*/id)arg4 ;
-(BOOL)_okayToSuppressOnOutput;
-(void)_advertise:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 andMoveTo:(unsigned long long)arg4 ;
-(unsigned short)recentEventBump;
-(id)_sortedReplies:(id)arg1 ;
-(BOOL)_isAPhone:(unsigned char)arg1 ;
-(BOOL)_testAndUpdateWedgeFilter:(id)arg1 ;
-(void)_updateRepliesWith:(id)arg1 id:(id)arg2 data:(id)arg3 ;
-(BOOL)_shouldHandleEmergency;
-(void)_signalEmergencyCallHandled;
-(id)activityEventStream;
-(void)logCoreDuetResults:(id)arg1 ;
-(void)startAdvertisingFromVoiceTriggerWithContext:(id)arg1 ;
-(void)resetStateMachine;
-(void)startAdvertisingFromVoiceTriggerAdjusted:(char)arg1 withContext:(id)arg2 ;
-(double)_targetDelayAfterTrigger:(unsigned long long)arg1 ;
-(void)startWatchAdvertisingFromVoiceTriggerWithContext:(id)arg1 ;
-(void)startWatchAdvertisingFromDirectTriggerWithContext:(id)arg1 ;
-(void)startAdvertisingFromDirectTriggerWithContext:(id)arg1 ;
-(void)startAdvertisingFromOutgoingTriggerWithContext:(id)arg1 ;
-(void)startAdvertisingEmergencyHandled;
-(void)startAdvertisingFromInTaskTriggerWithContext:(id)arg1 ;
-(void)startAdvertisingFromAlertFiringVoiceTriggerWithContext:(id)arg1 ;
-(void)startResponseAdvertising:(unsigned short)arg1 ;
-(void)endAdvertisingAfterDelay:(float)arg1 ;
-(BOOL)inTask;
-(void)setInTask:(BOOL)arg1 ;
-(void)setupEnabled:(BOOL)arg1 ;
-(void)_startListenTimer;
-(void)_startTimer:(id)arg1 until:(id)arg2 thenExecute:(/*^block*/id)arg3 ;
-(void)preheatWiProx;
-(void)advertiseWith:(id)arg1 ;
-(void)advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 ;
@end
