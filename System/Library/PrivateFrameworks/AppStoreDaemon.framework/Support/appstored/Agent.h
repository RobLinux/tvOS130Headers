/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Auditable.h>
#import <appstored/Agent.h>

@protocol Agent <NSObject>
@required
-(id)progress;
-(long long)PID;
-(id)reference;
-(id)currentState;
-(id)agent;

@end


@protocol OS_dispatch_queue;
@class NSString, NSObject, AgentQueue, KeepAlive, NSRecursiveLock, AgentShutdownAssertion, AgentSupervisor, DaemonDatabase;

@interface Agent : NSObject <Auditable, Agent> {

	NSString* _currentState;
	long long _PID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	AgentQueue* _agentQueue;
	KeepAlive* _keepAlive;
	NSRecursiveLock* _lock;
	AgentShutdownAssertion* _shutdownAssertion;
	BOOL _suspended;
	AgentSupervisor* _supervisor;

}

@property (nonatomic,readonly) NSString * currentState; 
@property (nonatomic,readonly) DaemonDatabase * database; 
@property (nonatomic,readonly) AgentSupervisor * supervisor;              //@synthesize supervisor=_supervisor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)agentStateClassForState:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(void)resume;
-(id)progress;
-(long long)PID;
-(DaemonDatabase *)database;
-(id)_handleMessage:(id)arg1 ;
-(id)reference;
-(void)handleMessage:(id)arg1 ;
-(NSString *)currentState;
-(void)transitionToState:(id)arg1 ;
-(id)agent;
-(void)_initialize;
-(void)becomeActive;
-(void)becomeInactive;
-(id)initWithPID:(long long)arg1 initialState:(id)arg2 supervisor:(id)arg3 ;
-(AgentSupervisor *)supervisor;
-(id)auditDescription;
-(void)_revokeShutdownAssertion;
-(void)transitionWithContext:(id)arg1 ;
-(BOOL)_setCurrentStateWithContext:(id)arg1 ;
-(id)_handleLeaveState:(id)arg1 ;
-(id)_handleEnterState:(id)arg1 ;
-(BOOL)isEqualToAgent:(id)arg1 ;
-(Class)_agentStateClassForState:(id)arg1 ;
-(void)shutdownWithAssertion:(id)arg1 ;
-(void)synchronizeCurrentState;
-(void)_applyShutdownAssertion:(id)arg1 ;
@end

