/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTTableViewCell.h>

@class UILabel, UIView, MTColorTheme, NSString;

@interface MTNoContentTableViewCell : MTTableViewCell {

	UILabel* _messageLabel;
	UIView* _separatorView;
	MTColorTheme* _colorTheme;
	UIEdgeInsets _contentInset;
	UIEdgeInsets __layoutMargins;

}

@property (assign,nonatomic) UIEdgeInsets _layoutMargins;              //@synthesize _layoutMargins=__layoutMargins - In the implementation block
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,retain) MTColorTheme * colorTheme;                //@synthesize colorTheme=_colorTheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                //@synthesize contentInset=_contentInset - In the implementation block
+(id)reuseIdentifier;
-(id)init;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setColorTheme:(MTColorTheme *)arg1 ;
-(MTColorTheme *)colorTheme;
-(UIEdgeInsets)_layoutMargins;
-(void)setupCell;
-(void)set_layoutMargins:(UIEdgeInsets)arg1 ;
@end

