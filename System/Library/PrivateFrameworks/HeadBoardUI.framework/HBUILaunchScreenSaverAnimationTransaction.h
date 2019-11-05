/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>

@class BKSAnimationFenceHandle, HBUILaunchAnimationContext, HBUILaunchScreenSaverAnimationDescription, NSHashTable;

@interface HBUILaunchScreenSaverAnimationTransaction : BSTransaction {

	BKSAnimationFenceHandle* _animationDidCompleteFence;
	HBUILaunchAnimationContext* _context;
	HBUILaunchScreenSaverAnimationDescription* _topShelfAnimation;
	HBUILaunchScreenSaverAnimationDescription* _appGridAnimation;
	NSHashTable* _appGridViewsToRestore;

}

@property (nonatomic,readonly) HBUILaunchAnimationContext * context;                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) HBUILaunchScreenSaverAnimationDescription * topShelfAnimation;              //@synthesize topShelfAnimation=_topShelfAnimation - In the implementation block
@property (nonatomic,readonly) HBUILaunchScreenSaverAnimationDescription * appGridAnimation;               //@synthesize appGridAnimation=_appGridAnimation - In the implementation block
@property (nonatomic,readonly) NSHashTable * appGridViewsToRestore;                                        //@synthesize appGridViewsToRestore=_appGridViewsToRestore - In the implementation block
@property (nonatomic,retain) BKSAnimationFenceHandle * animationDidCompleteFence;                          //@synthesize animationDidCompleteFence=_animationDidCompleteFence - In the implementation block
-(id)debugDescription;
-(HBUILaunchAnimationContext *)context;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(void)_didComplete;
-(void)willInterruptTransaction:(id)arg1 ;
-(id)initWithContext:(id)arg1 topShelfAnimation:(id)arg2 appGridAnimation:(id)arg3 ;
-(BKSAnimationFenceHandle *)animationDidCompleteFence;
-(void)setAnimationDidCompleteFence:(BKSAnimationFenceHandle *)arg1 ;
-(HBUILaunchScreenSaverAnimationDescription *)topShelfAnimation;
-(HBUILaunchScreenSaverAnimationDescription *)appGridAnimation;
-(NSHashTable *)appGridViewsToRestore;
@end

