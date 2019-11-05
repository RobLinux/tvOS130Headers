/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSScene.h>
#import <FrontBoard/FBSSceneDelegate.h>
#import <FrontBoard/FBSSceneUpdaterDelegate.h>

@protocol FBSSceneDelegate;
@class FBSSceneImpl, NSString;

@interface _FBSImplicitWindowScene : FBSScene <FBSSceneDelegate, FBSSceneUpdaterDelegate> {

	FBSSceneImpl* _scene;
	id<FBSSceneDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)identifier;
-(id)specification;
-(id)settings;
-(void)sendActions:(id)arg1 ;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
-(void)attachLayer:(id)arg1 ;
-(void)detachLayer:(id)arg1 ;
-(id)layers;
-(void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)updater:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
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
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_initWithSceneImpl:(id)arg1 ;
@end

