/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIButton, NSString, UILabel;

@interface UITableViewIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell {

	UIButton* _button;
	double _rightMargin;
	BOOL _rightMarginAdjusted;
	id _tapTarget;
	SEL _tapAction;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) double rightMargin; 
@property (readonly) UILabel * label; 
@property (readonly) UIButton * button;                            //@synthesize button=_button - In the implementation block
-(UILabel *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setRightMargin:(double)arg1 ;
-(double)rightMargin;
-(void)layoutSubviews;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(void)tintColorDidChange;
-(void)applyLayoutAttributes:(id)arg1 ;
@end

