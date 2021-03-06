/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBScene, FBSSceneTransitionContext;

@interface _FBClientSettingObserverContext : NSObject {

	FBScene* _scene;
	FBSSceneTransitionContext* _transitionContext;

}

@property (nonatomic,retain) FBScene * scene;                                            //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
-(FBSSceneTransitionContext *)transitionContext;
-(void)setTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(void)setScene:(FBScene *)arg1 ;
-(FBScene *)scene;
-(id)initWithScene:(id)arg1 transitionContext:(id)arg2 ;
@end

