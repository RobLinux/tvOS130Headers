/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/securityd-Structs.h>
#import <securityd/OctagonStateFlagHandler.h>
#import <securityd/OctagonStateOnqueuePendingFlagHandler.h>

@protocol OctagonStateMachineEngine, OS_dispatch_queue;
@class NSMutableDictionary, CKKSCondition, NSSet, CKKSLockStateTracker, NSObject, NSOperationQueue, NSString, OctagonFlags, NSOperation, CKKSResultOperation, NSMutableArray, CKKSNearFutureScheduler;

@interface OctagonStateMachine : NSObject <OctagonStateFlagHandler, OctagonStateOnqueuePendingFlagHandler> {

	NSString* _currentState;
	BOOL _halted;
	BOOL _allowPendingFlags;
	NSMutableDictionary* _stateConditions;
	CKKSCondition* _paused;
	NSSet* _allowableStates;
	unsigned long long _timeout;
	CKKSLockStateTracker* _lockStateTracker;
	id<OctagonStateMachineEngine> _stateEngine;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	NSString* _name;
	OctagonFlags* _currentFlags;
	NSOperation* _holdStateMachineOperation;
	CKKSResultOperation* _nextStateMachineCycleOperation;
	NSMutableArray* _stateMachineRequests;
	NSMutableArray* _stateMachineWatchers;
	NSMutableDictionary* _pendingFlags;
	CKKSNearFutureScheduler* _pendingFlagsScheduler;
	unsigned long long _conditionChecksInFlight;
	unsigned long long _currentConditions;
	NSOperation* _checkUnlockOperation;

}

@property (__weak) id<OctagonStateMachineEngine> stateEngine;                         //@synthesize stateEngine=_stateEngine - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (retain) NSOperationQueue * operationQueue;                                 //@synthesize operationQueue=_operationQueue - In the implementation block
@property (retain) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (retain) CKKSCondition * paused;                                            //@synthesize paused=_paused - In the implementation block
@property (retain) NSString*<OctagonStateString> currentState; 
@property (retain) OctagonFlags * currentFlags;                                       //@synthesize currentFlags=_currentFlags - In the implementation block
@property (retain) NSOperation * holdStateMachineOperation;                           //@synthesize holdStateMachineOperation=_holdStateMachineOperation - In the implementation block
@property (retain) CKKSResultOperation * nextStateMachineCycleOperation;              //@synthesize nextStateMachineCycleOperation=_nextStateMachineCycleOperation - In the implementation block
@property (retain) NSMutableArray * stateMachineRequests;                             //@synthesize stateMachineRequests=_stateMachineRequests - In the implementation block
@property (retain) NSMutableArray * stateMachineWatchers;                             //@synthesize stateMachineWatchers=_stateMachineWatchers - In the implementation block
@property (assign) BOOL halted;                                                       //@synthesize halted=_halted - In the implementation block
@property (assign) BOOL allowPendingFlags;                                            //@synthesize allowPendingFlags=_allowPendingFlags - In the implementation block
@property (retain) NSMutableDictionary * pendingFlags;                                //@synthesize pendingFlags=_pendingFlags - In the implementation block
@property (retain) CKKSNearFutureScheduler * pendingFlagsScheduler;                   //@synthesize pendingFlagsScheduler=_pendingFlagsScheduler - In the implementation block
@property (assign) unsigned long long conditionChecksInFlight;                        //@synthesize conditionChecksInFlight=_conditionChecksInFlight - In the implementation block
@property (assign) unsigned long long currentConditions;                              //@synthesize currentConditions=_currentConditions - In the implementation block
@property (retain) NSOperation * checkUnlockOperation;                                //@synthesize checkUnlockOperation=_checkUnlockOperation - In the implementation block
@property (readonly) id<OctagonFlagContainer> flags; 
@property (retain) NSMutableDictionary * stateConditions;                             //@synthesize stateConditions=_stateConditions - In the implementation block
@property (readonly) NSSet * allowableStates;                                         //@synthesize allowableStates=_allowableStates - In the implementation block
@property (assign,nonatomic) unsigned long long timeout;                              //@synthesize timeout=_timeout - In the implementation block
@property (retain) CKKSLockStateTracker * lockStateTracker;                           //@synthesize lockStateTracker=_lockStateTracker - In the implementation block
-(CKKSLockStateTracker *)lockStateTracker;
-(void)setLockStateTracker:(CKKSLockStateTracker *)arg1 ;
-(void)doSimpleStateMachineRPC:(id)arg1 op:(id)arg2 sourceStates:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)handleFlag:(NSString*)arg1 ;
-(id)initWithName:(id)arg1 states:(id)arg2 initialState:(NSString*)arg3 queue:(id)arg4 stateEngine:(id)arg5 lockStateTracker:(id)arg6 ;
-(void)pokeStateMachine;
-(void)disablePendingFlags;
-(void)haltOperation;
-(void)handlePendingFlag:(id)arg1 ;
-(void)doWatchedStateMachineRPC:(id)arg1 sourceStates:(id)arg2 path:(id)arg3 reply:(/*^block*/id)arg4 ;
-(NSString*)waitForState:(NSString*)arg1 wait:(unsigned long long)arg2 ;
-(void)handleExternalRequest:(id)arg1 ;
-(id)dumpPendingFlags;
-(void)_onqueueHandlePendingFlag:(id)arg1 ;
-(void)_onqueuePokeStateMachine;
-(id)pendingFlagsString;
-(id)_onqueueNextStateMachineTransition;
-(void)_onqueueStartNextStateMachineOperation:(BOOL)arg1 ;
-(id)createOperationToFinishAttempt:(id)arg1 ;
-(id)possiblePendingFlags;
-(void)_onqueueRecheckConditions;
-(void)_onqueueSendAnyPendingFlags;
-(void)registerStateTransitionWatcher:(id)arg1 ;
-(void)setWatcherTimeout:(unsigned long long)arg1 ;
-(NSMutableDictionary *)stateConditions;
-(void)setStateConditions:(NSMutableDictionary *)arg1 ;
-(NSSet *)allowableStates;
-(id<OctagonStateMachineEngine>)stateEngine;
-(void)setStateEngine:(id<OctagonStateMachineEngine>)arg1 ;
-(OctagonFlags *)currentFlags;
-(void)setCurrentFlags:(OctagonFlags *)arg1 ;
-(NSOperation *)holdStateMachineOperation;
-(void)setHoldStateMachineOperation:(NSOperation *)arg1 ;
-(CKKSResultOperation *)nextStateMachineCycleOperation;
-(void)setNextStateMachineCycleOperation:(CKKSResultOperation *)arg1 ;
-(NSMutableArray *)stateMachineRequests;
-(void)setStateMachineRequests:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stateMachineWatchers;
-(void)setStateMachineWatchers:(NSMutableArray *)arg1 ;
-(BOOL)halted;
-(void)setHalted:(BOOL)arg1 ;
-(BOOL)allowPendingFlags;
-(void)setAllowPendingFlags:(BOOL)arg1 ;
-(NSMutableDictionary *)pendingFlags;
-(void)setPendingFlags:(NSMutableDictionary *)arg1 ;
-(CKKSNearFutureScheduler *)pendingFlagsScheduler;
-(void)setPendingFlagsScheduler:(CKKSNearFutureScheduler *)arg1 ;
-(unsigned long long)conditionChecksInFlight;
-(void)setConditionChecksInFlight:(unsigned long long)arg1 ;
-(NSOperation *)checkUnlockOperation;
-(void)setCheckUnlockOperation:(NSOperation *)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setName:(NSString *)arg1 ;
-(id<OctagonFlagContainer>)flags;
-(void)setTimeout:(unsigned long long)arg1 ;
-(unsigned long long)timeout;
-(BOOL)isPaused;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setPaused:(CKKSCondition *)arg1 ;
-(NSString*<OctagonStateString>)currentState;
-(void)setCurrentState:(NSString*<OctagonStateString>)arg1 ;
-(CKKSCondition *)paused;
-(void)startOperation;
-(unsigned long long)currentConditions;
-(void)setCurrentConditions:(unsigned long long)arg1 ;
@end

