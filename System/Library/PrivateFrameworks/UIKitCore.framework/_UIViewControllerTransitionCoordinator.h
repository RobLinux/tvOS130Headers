/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>

@class _UIViewControllerTransitionContext, NSMutableArray, NSString, UIView;

@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {

	_UIViewControllerTransitionContext* __mainContext;
	NSMutableArray* __systemAlongsideAnimations;
	NSMutableArray* __alongsideAnimations;
	NSMutableArray* __alongsideAnimationViews;
	NSMutableArray* __alongsideCompletions;
	NSMutableArray* __interactiveChangeHandlers;

}

@property (assign,setter=_setMainContext:,nonatomic) _UIViewControllerTransitionContext * _mainContext;                      //@synthesize _mainContext=__mainContext - In the implementation block
@property (setter=_setSystemAlongsideAnimations:,nonatomic,retain) NSMutableArray * _systemAlongsideAnimations;              //@synthesize _systemAlongsideAnimations=__systemAlongsideAnimations - In the implementation block
@property (setter=_setAlongsideAnimations:,nonatomic,retain) NSMutableArray * _alongsideAnimations;                          //@synthesize _alongsideAnimations=__alongsideAnimations - In the implementation block
@property (setter=_setAlongsideAnimationViews:,nonatomic,retain) NSMutableArray * _alongsideAnimationViews;                  //@synthesize _alongsideAnimationViews=__alongsideAnimationViews - In the implementation block
@property (setter=_setAlongsideCompletions:,nonatomic,retain) NSMutableArray * _alongsideCompletions;                        //@synthesize _alongsideCompletions=__alongsideCompletions - In the implementation block
@property (setter=_setInteractiveChangeHandlers:,nonatomic,retain) NSMutableArray * _interactiveChangeHandlers;              //@synthesize _interactiveChangeHandlers=__interactiveChangeHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL initiallyInteractive; 
@property (nonatomic,readonly) BOOL isInterruptible; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) double completionVelocity; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
-(BOOL)isCancelled;
-(BOOL)isInterruptible;
-(double)percentComplete;
-(long long)presentationStyle;
-(CGAffineTransform)affineTransform;
-(BOOL)isAnimated;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(id)viewControllerForKey:(id)arg1 ;
-(UIView *)containerView;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isRotating;
-(id)viewForKey:(id)arg1 ;
-(double)transitionDuration;
-(CGAffineTransform)targetTransform;
-(BOOL)isInteractive;
-(BOOL)isCompleting;
-(BOOL)initiallyInteractive;
-(long long)completionCurve;
-(BOOL)_animateAlongsideTransitionInView:(id)arg1 systemAnimation:(BOOL)arg2 systemCompletion:(BOOL)arg3 animation:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setAlongsideAnimations:(id)arg1 ;
-(NSMutableArray *)_alongsideAnimations;
-(_UIViewControllerTransitionContext *)_mainContext;
-(NSMutableArray *)_alongsideCompletions;
-(NSMutableArray *)_alongsideAnimationViews;
-(id)initWithMainContext:(id)arg1 ;
-(void)_setAlongsideCompletions:(id)arg1 ;
-(void)_applyBlocks:(id)arg1 releaseBlocks:(/*^block*/id)arg2 ;
-(void)_setInteractiveChangeHandlers:(id)arg1 ;
-(NSMutableArray *)_interactiveChangeHandlers;
-(NSMutableArray *)_systemAlongsideAnimations;
-(void)_setSystemAlongsideAnimations:(id)arg1 ;
-(id)_systemAlongsideAnimations:(BOOL)arg1 ;
-(id)_alongsideAnimations:(BOOL)arg1 ;
-(void)_setAlongsideAnimationViews:(id)arg1 ;
-(id)_alongsideCompletions:(BOOL)arg1 ;
-(id)_interactiveChangeHandlers:(BOOL)arg1 ;
-(double)completionVelocity;
-(void)_setMainContext:(id)arg1 ;
@end

