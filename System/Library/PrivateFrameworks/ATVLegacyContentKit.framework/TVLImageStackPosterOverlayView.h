/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLPosterOverlayElement, UILabel, TVImageView;

@interface TVLImageStackPosterOverlayView : UIView <ATVUpdatable> {

	TVLPosterOverlayElement* _overlayElement;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	TVImageView* _badgeImageView;
	TVImageView* _backgroundImageView;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,retain) TVLPosterOverlayElement * overlayElement;              //@synthesize overlayElement=_overlayElement - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * subtitleLabel;                        //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic,__weak) TVImageView * badgeImageView;                   //@synthesize badgeImageView=_badgeImageView - In the implementation block
@property (assign,nonatomic,__weak) TVImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                             //@synthesize contentInset=_contentInset - In the implementation block
-(void)dealloc;
-(UIEdgeInsets)contentInset;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(TVImageView *)backgroundImageView;
-(void)setBackgroundImageView:(TVImageView *)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(id)initWithOverlayElement:(id)arg1 ;
-(TVLPosterOverlayElement *)overlayElement;
-(TVImageView *)badgeImageView;
-(void)setOverlayElement:(TVLPosterOverlayElement *)arg1 ;
-(void)setBadgeImageView:(TVImageView *)arg1 ;
@end

