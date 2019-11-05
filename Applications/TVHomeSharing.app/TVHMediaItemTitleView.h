/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharing/TVHomeSharing-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIFont, UIColor;

@interface TVHMediaItemTitleView : UIView {

	UILabel* _titleLabel;
	UIImageView* _contentRatingBadgeImageView;
	UIImageView* _videoBadgeImageView;
	UIImageView* _highDefinitionBadgeImageView;

}

@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * contentRatingBadgeImageView;               //@synthesize contentRatingBadgeImageView=_contentRatingBadgeImageView - In the implementation block
@property (nonatomic,retain) UIImageView * videoBadgeImageView;                       //@synthesize videoBadgeImageView=_videoBadgeImageView - In the implementation block
@property (nonatomic,retain) UIImageView * highDefinitionBadgeImageView;              //@synthesize highDefinitionBadgeImageView=_highDefinitionBadgeImageView - In the implementation block
@property (assign,nonatomic) BOOL marqueeEnabled; 
@property (nonatomic,retain) UIFont * titleFont; 
@property (nonatomic,retain) UIColor * titleTextColor; 
+(id)_contentRatingBadgeImageViewFromViewElement:(id)arg1 titleTextColor:(id)arg2 existingImageView:(id)arg3 ;
+(id)_highDefinitionBadgeImageViewFromViewElement:(id)arg1 titleTextColor:(id)arg2 existingImageView:(id)arg3 ;
+(id)_videoBadgeImageViewFromViewElement:(id)arg1 titleTextColor:(id)arg2 existingImageView:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)titleTextColor;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
-(UIFont *)titleFont;
-(void)updateWithViewElement:(id)arg1 ;
-(UIImageView *)contentRatingBadgeImageView;
-(BOOL)marqueeEnabled;
-(UIImageView *)highDefinitionBadgeImageView;
-(UIImageView *)videoBadgeImageView;
-(void)setHighDefinitionBadgeImageView:(UIImageView *)arg1 ;
-(void)setVideoBadgeImageView:(UIImageView *)arg1 ;
-(void)setContentRatingBadgeImageView:(UIImageView *)arg1 ;
@end

