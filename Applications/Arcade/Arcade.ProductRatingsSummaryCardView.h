/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:52:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Arcade.app/Arcade
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Arcade/Arcade-Structs.h>
#import <Arcade/Arcade.BaseCollectionViewCell.h>

@class UILabel;

@interface Arcade.ProductRatingsSummaryCardView : Arcade.BaseCollectionViewCell {

	 ratingLabel;
	 outOfRatingLabel;
	 starRatingView;

}

@property (readonly,nonatomic) BOOL canBecomeFocused; 
@property (readonly,nonatomic) UILabel * accessibilityCurrentRatingLabel; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(UILabel *)accessibilityCurrentRatingLabel;
@end

