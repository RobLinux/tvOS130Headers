/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class CAShapeLayer, UIView, UILabel, CAFilter, PKShapeView;

@interface PKPaymentButton : UIButton {

	CAShapeLayer* _layer;
	long long _style;
	long long _type;
	UIView* _container;
	UILabel* _buyLabel;
	CAFilter* _highlightFilter;
	BOOL _highlighted;
	CGSize _boundsSize;
	PKShapeView* _maskView;
	double _fontRatio;
	double _cornerRadius;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(Class)layerClass;
+(id)titleForType:(long long)arg1 ;
+(id)buttonWithType:(long long)arg1 style:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_createHighlightFilterIfNecessary;
-(id)initWithPaymentButtonType:(long long)arg1 paymentButtonStyle:(long long)arg2 ;
-(void)applyAccessibilityValues;
@end

