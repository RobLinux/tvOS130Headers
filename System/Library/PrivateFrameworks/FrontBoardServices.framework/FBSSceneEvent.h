/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneMessage.h>

@class FBSSceneSettingsDiff, FBSSceneClientSettingsDiff, FBSSceneTransitionContext, NSSet;

@interface FBSSceneEvent : FBSSceneMessage {

	long long _source;
	FBSSceneSettingsDiff* _settingsDiff;
	FBSSceneClientSettingsDiff* _clientSettingsDiff;
	FBSSceneTransitionContext* _transitionContext;

}

@property (assign,nonatomic) long long source;                                             //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) FBSSceneSettingsDiff * settingsDiff;                          //@synthesize settingsDiff=_settingsDiff - In the implementation block
@property (nonatomic,retain) FBSSceneClientSettingsDiff * clientSettingsDiff;              //@synthesize clientSettingsDiff=_clientSettingsDiff - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transitionContext;                //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) NSSet * actions; 
-(id)description;
-(id)init;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(FBSSceneTransitionContext *)transitionContext;
-(NSSet *)actions;
-(void)setTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(void)setClientSettingsDiff:(FBSSceneClientSettingsDiff *)arg1 ;
-(void)setSettingsDiff:(FBSSceneSettingsDiff *)arg1 ;
-(FBSSceneSettingsDiff *)settingsDiff;
-(FBSSceneClientSettingsDiff *)clientSettingsDiff;
@end
