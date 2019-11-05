/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SiriUIContentLabel, UIView, NSString, UIFont, UIColor;

@interface SiriUITextContainerView : UIView {

	SiriUIContentLabel* _label;
	UIView* _containerView;
	SCD_Struct_Si10 _textContainerStyle;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) SCD_Struct_Si6 textContainerStyle;              //@synthesize textContainerStyle=_textContainerStyle - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(SCD_Struct_Si6)arg4 ;
+(CGRect)_textBoundingRectWithSize:(CGSize)arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(SCD_Struct_Si6)arg4 ;
+(double)_distanceFromBaselineToBottomWithFont:(id)arg1 textContainerStyle:(SCD_Struct_Si6)arg2 ;
+(double)_distanceFromTopToBaselineWithFont:(id)arg1 textContainerStyle:(SCD_Struct_Si6)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithText:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(void)setTextContainerStyle:(SCD_Struct_Si6)arg1 ;
-(id)initWithText:(id)arg1 visualEffect:(id)arg2 ;
-(SCD_Struct_Si6)textContainerStyle;
@end

