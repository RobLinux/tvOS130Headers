/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneUpdater.h>
#import <FrontBoardServices/FBSWorkspaceScenesSource.h>

@protocol FBSWorkspaceDelegate, OS_dispatch_queue;
@class FBSWorkspace, NSObject, FBSSerialQueue, BSServiceConnection, BSServiceConnectionEndpoint, NSMutableDictionary, NSMutableArray, NSString;

@interface FBSWorkspaceScenesClient : NSObject <FBSSceneUpdater, FBSWorkspaceScenesSource> {

	FBSWorkspace* _workspace;
	id<FBSWorkspaceDelegate> _workspaceDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	FBSSerialQueue* _callOutQueue;
	BSServiceConnection* _connection;
	BSServiceConnectionEndpoint* _endpoint;
	NSMutableDictionary* _scenesByIdentifier;
	NSMutableArray* _pendedSendBlocks;
	os_unfair_lock_s _reportingLock;
	NSMutableDictionary* _reportingLock_scenesByIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<NSCopying> identifier; 
+(id)serviceQuality;
-(id)init;
-(NSObject*<NSCopying>)identifier;
-(id)endpoint;
-(void)activate;
-(id)scenes;
-(id)sceneWithIdentifier:(id)arg1 ;
-(id)callOutQueue;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(id)hostProcess;
-(void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(void)requestSceneWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithEndpoint:(id)arg1 queue:(id)arg2 calloutQueue:(id)arg3 workspace:(id)arg4 ;
-(id)_remoteTarget;
-(void)_queue_invalidateScene:(id)arg1 withTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)willTerminateWithTransitionContext:(id)arg1 withAcknowledgement:(/*^block*/id)arg2 ;
-(oneway void)sceneID:(id)arg1 createWithParameters:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(oneway void)sceneID:(id)arg1 updateWithSettingsDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(oneway void)sceneID:(id)arg1 destroyWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)sendActions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)sceneID:(id)arg1 sendActions:(id)arg2 ;
-(oneway void)sceneID:(id)arg1 sendMessage:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

