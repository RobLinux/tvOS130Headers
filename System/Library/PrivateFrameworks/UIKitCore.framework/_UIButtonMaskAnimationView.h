/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/CAAnimationDelegate.h>

@class UIView, UIButton, UIColor, NSString;

@interface _UIButtonMaskAnimationView : UIView <CAAnimationDelegate> {

	unsigned long long _hardEdge;
	UIView* _hardEdgeLine;
	UIButton* _delegate;

}

@property (assign,nonatomic) UIButton * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign) double borderWidth; 
@property (assign,nonatomic) UIColor * borderColor; 
@property (assign) unsigned long long hardEdge; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIButton *)delegate;
-(void)setDelegate:(UIButton *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(UIColor *)borderColor;
-(void)setBorderColor:(UIColor *)arg1 ;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(void)layoutSubviews;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setHardEdge:(unsigned long long)arg1 ;
-(unsigned long long)hardEdge;
-(CGRect)_frameForLine;
@end

