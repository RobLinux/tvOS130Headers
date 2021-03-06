/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface HBUILaunchAnimationEnvironmentSnapshot : NSObject {

	NSHashTable* _animationEnvironments;

}

@property (nonatomic,readonly) NSHashTable * animationEnvironments;              //@synthesize animationEnvironments=_animationEnvironments - In the implementation block
+(id)snapshotWithRootEnvironment:(id)arg1 animationContext:(id)arg2 ;
-(id)debugDescription;
-(id)_initWithAnimationEnvironments:(id)arg1 ;
-(void)willBeginLaunchAnimationWithContext:(id)arg1 ;
-(void)didFinishLaunchAnimationWithContext:(id)arg1 ;
-(id)launchAnimationsWithContext:(id)arg1 ;
-(id)initWithAnimationEnvironment:(id)arg1 ;
-(NSHashTable *)animationEnvironments;
@end

