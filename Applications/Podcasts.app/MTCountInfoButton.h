/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:20 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKitCore/UIControl.h>

@class MTTouchInsetsButton, UILabel, UIFont, UIColor;

@interface MTCountInfoButton : UIControl {

	unsigned long long _index;
	unsigned long long _count;
	MTTouchInsetsButton* _button;
	UILabel* _label;

}

@property (nonatomic,retain) MTTouchInsetsButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UILabel * label;                           //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long index;                  //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) unsigned long long count;                  //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(MTTouchInsetsButton *)button;
-(void)setButton:(MTTouchInsetsButton *)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)labelSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateLabelText;
-(void)buttonTapped:(id)arg1 ;
-(id)_createLabelTextForCurrentState;
-(CGSize)buttonSize;
-(void)setIndex:(unsigned long long)arg1 forCount:(unsigned long long)arg2 ;
@end

