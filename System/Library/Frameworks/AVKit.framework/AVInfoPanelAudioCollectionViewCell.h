/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIStackView, UIImageView, UIImage, UILabel, NSLayoutConstraint, NSString;

@interface AVInfoPanelAudioCollectionViewCell : UICollectionViewCell {

	UIStackView* _stackView;
	UIImageView* _checkmarkImageView;
	UIImageView* _iconImageView;
	UIImage* _speakerImage;
	UIImage* _appleTVImage;
	UIImage* _airPodsImage;
	UIImage* _homePodImage;
	UIImage* _stereoHomePodImage;
	UILabel* _titleLabel;
	NSLayoutConstraint* _cellWidthConstraint;
	long long _iconType;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long iconType;              //@synthesize iconType=_iconType - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)iconType;
-(void)setIconType:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_updateAppearance;
-(long long)_textAlignmentForUserInterfaceLayout;
-(void)constrainWidthTo:(double)arg1 ;
@end

