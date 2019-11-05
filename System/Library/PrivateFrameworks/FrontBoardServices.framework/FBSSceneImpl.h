/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSScene.h>
#import <FrontBoardServices/FBSSceneSnapshotRequestDelegate.h>
#import <FrontBoardServices/FBSSceneHandle.h>
#import <FrontBoardServices/FBSSceneAgentProxy.h>

@protocol FBSSceneClientAgent, FBSSceneUpdater, FBSSceneDelegate;
@class FBSSerialQueue, NSString, FBSSceneSpecification, NSMutableArray, FBSSceneSettings, FBSSceneClientSettings, NSOrderedSet, FBSSceneIdentityToken;

@interface FBSSceneImpl : FBSScene <FBSSceneSnapshotRequestDelegate, FBSSceneHandle, FBSSceneAgentProxy> {

	FBSSerialQueue* _callOutQueue;
	NSString* _identifier;
	FBSSceneSpecification* _specification;
	BOOL _hasAgent;
	id<FBSSceneClientAgent> _callOutQueue_agent;
	NSMutableArray* _callOutQueue_agentSessions;
	/*^block*/id _callOutQueue_agentMessageHandler;
	BOOL _callOutQueue_agentInvalidateCalled;
	os_unfair_lock_s _lock;
	id<FBSSceneUpdater> _lock_updater;
	FBSSceneSettings* _lock_settings;
	FBSSceneClientSettings* _lock_clientSettings;
	NSOrderedSet* _lock_layers;
	id<FBSSceneDelegate> _lock_delegate;
	FBSSceneIdentityToken* _identityToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)identifier;
-(id)parameters;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)specification;
-(id)settings;
-(void)sendActions:(id)arg1 ;
-(BOOL)snapshotRequestAllowSnapshot:(id)arg1 ;
-(BOOL)snapshotRequest:(id)arg1 performWithContext:(id)arg2 ;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
-(id)initWithCallOutQueue:(id)arg1 identifier:(id)arg2 parameters:(id)arg3 ;
-(void)attachLayer:(id)arg1 ;
-(void)detachLayer:(id)arg1 ;
-(id)layers;
-(void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)updater:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5 ;
-(id)clientSettings;
-(void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(void)attachContext:(id)arg1 ;
-(void)detachContext:(id)arg1 ;
-(void)attachSceneContext:(id)arg1 ;
-(void)detachSceneContext:(id)arg1 ;
-(id)snapshotRequest;
-(BOOL)invalidateSnapshotWithContext:(id)arg1 ;
-(id)identityToken;
-(BOOL)_hasAgent;
-(void)_callOutQueue_agent_didCreateWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_callOutQueue_agent_willDestroyWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithCallOutQueue:(id)arg1 identifier:(id)arg2 specification:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5 ;
-(id)callOutQueue;
-(void)_callOutQueue_invalidateAgent;
-(void)_calloutQueue_comsumeLock_updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(id)hostProcess;
-(void)_configureReceivedActions:(id)arg1 ;
-(id)counterpartAgent;
-(id)clientProcess;
-(id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2 ;
-(id)sessionForIdentifier:(id)arg1 ;
-(void)closeSession:(id)arg1 ;
-(void)agent:(id)arg1 registerMessageHandler:(/*^block*/id)arg2 ;
-(void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(id)_initWithUpdater:(id)arg1 identifier:(id)arg2 specification:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5 ;
-(void)_callOutQueue_invalidate;
@end

