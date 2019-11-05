/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@protocol AXPIFingerAppearanceDelegate;
@class CAShapeLayer;

@interface AXPIFingerLayer : CAShapeLayer {

	BOOL _isSelected;
	BOOL _pressed;
	CAShapeLayer* _outerStrokeLayer;
	CAShapeLayer* _innerStrokeLayer;
	id<AXPIFingerAppearanceDelegate> _appearanceDelegate;
	CGRect _outerFrame;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;                                         //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                           //@synthesize pressed=_pressed - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerStrokeLayer;                                         //@synthesize outerStrokeLayer=_outerStrokeLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * innerStrokeLayer;                                         //@synthesize innerStrokeLayer=_innerStrokeLayer - In the implementation block
@property (assign,nonatomic,__weak) id<AXPIFingerAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (nonatomic,readonly) CGRect outerFrame;                                                     //@synthesize outerFrame=_outerFrame - In the implementation block
-(void)dealloc;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)isPressed;
-(id<AXPIFingerAppearanceDelegate>)appearanceDelegate;
-(void)setAppearanceDelegate:(id<AXPIFingerAppearanceDelegate>)arg1 ;
-(void)animateToTapWithDuration:(double)arg1 ;
-(void)setOuterStrokeLayer:(CAShapeLayer *)arg1 ;
-(void)setInnerStrokeLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)outerStrokeLayer;
-(CAShapeLayer *)innerStrokeLayer;
-(id)initWithAppearanceDelegate:(id)arg1 ;
-(CGRect)outerFrame;
@end

