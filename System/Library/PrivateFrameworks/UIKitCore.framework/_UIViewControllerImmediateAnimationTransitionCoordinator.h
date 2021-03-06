/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>

@class UIView, NSString;

@interface _UIViewControllerImmediateAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {

	UIView* _containerView;

}

@property (nonatomic,retain) UIView * containerView;                               //@synthesize containerView=_containerView - In the implementation block
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
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
-(BOOL)isCancelled;
-(BOOL)isInterruptible;
-(double)percentComplete;
-(long long)presentationStyle;
-(BOOL)isAnimated;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(id)viewControllerForKey:(id)arg1 ;
-(UIView *)containerView;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(id)viewForKey:(id)arg1 ;
-(double)transitionDuration;
-(CGAffineTransform)targetTransform;
-(BOOL)isInteractive;
-(void)setContainerView:(UIView *)arg1 ;
-(BOOL)initiallyInteractive;
-(long long)completionCurve;
-(id)initWithContainerView:(id)arg1 ;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(double)completionVelocity;
@end

