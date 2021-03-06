/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:53 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSXPCProxyCreating, OS_dispatch_queue;
#import <securityd/securityd-Structs.h>
@class NSString, NSMutableDictionary, NSObject, NSOperationQueue, NSOperation, CKKSResultOperation, NSMutableArray;

@interface OTClientStateMachine : NSObject {

	NSString* _currentState;
	id<NSXPCProxyCreating> _cuttlefishXPCConnection;
	NSString* _containerName;
	NSString* _contextID;
	NSString* _clientName;
	NSMutableDictionary* _stateConditions;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	NSString* _clientScope;
	NSOperation* _holdStateMachineOperation;
	CKKSResultOperation* _nextClientStateMachineCycleOperation;
	NSMutableArray* _stateMachineClientRequests;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (retain) NSOperationQueue * operationQueue;                                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (retain) NSString*<OctagonStateString> currentState; 
@property (retain) NSString * clientScope;                                                  //@synthesize clientScope=_clientScope - In the implementation block
@property (retain) NSOperation * holdStateMachineOperation;                                 //@synthesize holdStateMachineOperation=_holdStateMachineOperation - In the implementation block
@property (retain) CKKSResultOperation * nextClientStateMachineCycleOperation;              //@synthesize nextClientStateMachineCycleOperation=_nextClientStateMachineCycleOperation - In the implementation block
@property (retain) NSMutableArray * stateMachineClientRequests;                             //@synthesize stateMachineClientRequests=_stateMachineClientRequests - In the implementation block
@property (readonly) id<NSXPCProxyCreating> cuttlefishXPCConnection;                        //@synthesize cuttlefishXPCConnection=_cuttlefishXPCConnection - In the implementation block
@property (readonly) NSString * containerName;                                              //@synthesize containerName=_containerName - In the implementation block
@property (readonly) NSString * contextID;                                                  //@synthesize contextID=_contextID - In the implementation block
@property (readonly) NSString * clientName;                                                 //@synthesize clientName=_clientName - In the implementation block
@property (retain) NSMutableDictionary * stateConditions;                                   //@synthesize stateConditions=_stateConditions - In the implementation block
-(id<NSXPCProxyCreating>)cuttlefishXPCConnection;
-(void)startOctagonStateMachine;
-(void)rpcVoucher:(id)arg1 peerID:(id)arg2 permanentInfo:(id)arg3 permanentInfoSig:(id)arg4 stableInfo:(id)arg5 stableInfoSig:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)rpcEpoch:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithContainerName:(id)arg1 contextID:(id)arg2 clientName:(id)arg3 cuttlefish:(id)arg4 ;
-(NSMutableDictionary *)stateConditions;
-(void)setStateConditions:(NSMutableDictionary *)arg1 ;
-(NSOperation *)holdStateMachineOperation;
-(void)setHoldStateMachineOperation:(NSOperation *)arg1 ;
-(id)createOperationToFinishAttemptForClient:(id)arg1 clientName:(id)arg2 ;
-(void)_onqueuePokeClientStateMachine:(id)arg1 ;
-(void)_onqueueStartNextClientStateMachineOperation:(id)arg1 ;
-(void)handleExternalClientStateMachineRequest:(id)arg1 client:(id)arg2 ;
-(BOOL)isAcceptorWaitingForFirstMessage;
-(id)_onqueueNextClientStateMachineTransition:(id)arg1 ;
-(void)notifyContainerChange;
-(NSString *)clientScope;
-(void)setClientScope:(NSString *)arg1 ;
-(CKKSResultOperation *)nextClientStateMachineCycleOperation;
-(void)setNextClientStateMachineCycleOperation:(CKKSResultOperation *)arg1 ;
-(NSMutableArray *)stateMachineClientRequests;
-(void)setStateMachineClientRequests:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSString *)containerName;
-(NSString *)contextID;
-(NSString*<OctagonStateString>)currentState;
-(void)setCurrentState:(NSString*<OctagonStateString>)arg1 ;
-(NSString *)clientName;
@end

