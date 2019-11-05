/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
#import <UIKitCore/UIView.h>
#import <AccessibilityPhysicalInteraction/CAAnimationDelegate.h>

@protocol AXPIFingerAppearanceDelegate;
@class AXPIFingerLayer, CAShapeLayer, NSString;

@interface AXPIFingerView : UIView <CAAnimationDelegate> {

	BOOL _pressed;
	double _force;
	AXPIFingerLayer* _cursorLayer;
	id<AXPIFingerAppearanceDelegate> _appearanceDelegate;
	CAShapeLayer* _progressLayer;
	/*^block*/id _lastProgressCompletionBlock;

}

@property (nonatomic,retain) AXPIFingerLayer * cursorLayer;                                           //@synthesize cursorLayer=_cursorLayer - In the implementation block
@property (assign,nonatomic,__weak) id<AXPIFingerAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                                            //@synthesize progressLayer=_progressLayer - In the implementation block
@property (nonatomic,copy) id lastProgressCompletionBlock;                                            //@synthesize lastProgressCompletionBlock=_lastProgressCompletionBlock - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                           //@synthesize pressed=_pressed - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) double force;                                                            //@synthesize force=_force - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(double)force;
-(void)setForce:(double)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)isPressed;
-(BOOL)accessibilityIgnoresInvertColors;
-(id<AXPIFingerAppearanceDelegate>)appearanceDelegate;
-(void)setAppearanceDelegate:(id<AXPIFingerAppearanceDelegate>)arg1 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)animateToTapWithDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 appearanceDelegate:(id)arg2 ;
-(void)setCursorLayer:(AXPIFingerLayer *)arg1 ;
-(AXPIFingerLayer *)cursorLayer;
-(void)cancelExisingCircularProgressAnimation;
-(void)setLastProgressCompletionBlock:(id)arg1 ;
-(id)_createProgressLayerWithDuration:(double)arg1 center:(CGPoint)arg2 radius:(double)arg3 ;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)progressLayer;
-(id)lastProgressCompletionBlock;
-(CGPathRef)_drawFullCircleWithCenter:(CGPoint)arg1 radius:(double)arg2 clockwise:(BOOL)arg3 ;
-(double)_iconScaleForForce:(double)arg1 ;
-(void)animateCircularProgressWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
@end
