/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@class PKPaymentPassAction;

@interface PKPaymentPassActionWidgetButton : UIButton {

	BOOL _usesAccessibilityLayout;
	PKPaymentPassAction* _action;

}

@property (nonatomic,retain) PKPaymentPassAction * action;              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL usesAccessibilityLayout;              //@synthesize usesAccessibilityLayout=_usesAccessibilityLayout - In the implementation block
+(double)glyphImageHeight;
+(double)widgetHeightWithAccessibilityLayout:(BOOL)arg1 ;
-(PKPaymentPassAction *)action;
-(void)setAction:(PKPaymentPassAction *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_applyStyles;
-(id)initWithWidgetViewStyle:(unsigned long long)arg1 ;
-(void)setUsesAccessibilityLayout:(BOOL)arg1 ;
-(BOOL)usesAccessibilityLayout;
@end

