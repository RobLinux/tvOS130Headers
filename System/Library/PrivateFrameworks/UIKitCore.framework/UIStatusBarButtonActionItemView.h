/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class UIButton, CALayer;

@interface UIStatusBarButtonActionItemView : UIStatusBarItemView {

	UIButton* _button;
	UIButton* _externalButton;
	BOOL _selected;
	CALayer* _ringLayer;

}

@property (assign,nonatomic) BOOL selected;                              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) CALayer * ringLayer;                        //@synthesize ringLayer=_ringLayer - In the implementation block
@property (nonatomic,readonly) BOOL extendsHitTestingFrame; 
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)layoutSubviews;
-(long long)buttonType;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)showsTouchWhenHighlighted;
-(double)updateContentsAndWidth;
-(id)highlightImage;
-(BOOL)allowsUserInteraction;
-(BOOL)usesAdvancedActions;
-(void)_pressButton:(id)arg1 ;
-(BOOL)extendsHitTestingFrame;
-(void)_doubleTapButton:(id)arg1 ;
-(void)_pressAndHoldButton:(id)arg1 ;
-(id)_createButton;
-(void)setLayerHighlightImage:(id)arg1 ;
-(CALayer *)ringLayer;
-(void)setRingLayer:(CALayer *)arg1 ;
-(void)_triggerButtonWithAction:(long long)arg1 ;
-(CGRect)_contentsImageFrame;
@end

