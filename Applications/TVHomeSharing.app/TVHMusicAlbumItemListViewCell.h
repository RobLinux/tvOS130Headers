/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharing/TVHomeSharing-Structs.h>
#import <TVHomeSharing/TVHMediaItemListViewCell.h>

@class UIImageView, UILabel;

@interface TVHMusicAlbumItemListViewCell : TVHMediaItemListViewCell {

	BOOL _ordinalVisible;
	BOOL _playIconVisible;
	UIImageView* _playIconImageView;
	UILabel* _ordinalLabel;
	unsigned long long _ordinalValue;

}

@property (nonatomic,retain) UIImageView * playIconImageView;              //@synthesize playIconImageView=_playIconImageView - In the implementation block
@property (nonatomic,retain) UILabel * ordinalLabel;                       //@synthesize ordinalLabel=_ordinalLabel - In the implementation block
@property (assign,nonatomic) BOOL ordinalVisible;                          //@synthesize ordinalVisible=_ordinalVisible - In the implementation block
@property (assign,nonatomic) unsigned long long ordinalValue;              //@synthesize ordinalValue=_ordinalValue - In the implementation block
@property (assign,nonatomic) BOOL playIconVisible;                         //@synthesize playIconVisible=_playIconVisible - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)ordinalValue;
-(void)setOrdinalValue:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_updateColors;
-(void)updateWithViewElement:(id)arg1 ;
-(UILabel *)ordinalLabel;
-(void)setOrdinalLabel:(UILabel *)arg1 ;
-(void)_updatePlayIconImageViewAndOrdinalLabelState;
-(CGRect)_ordinalFrame;
-(double)_ordinalWidth;
-(BOOL)_shouldShowPlayIconImageView;
-(void)_showPlayIconImageView:(BOOL)arg1 ;
-(BOOL)_shouldShowOrdinalLabel;
-(void)_showOrdinalLabel:(BOOL)arg1 ;
-(BOOL)_showingPlayIconImageView;
-(UIImageView *)playIconImageView;
-(double)_contentViewHeight;
-(id)_nowPlayingBarsSuperview;
-(void)_nowPlayingBarsVisibilityDidChange:(BOOL)arg1 ;
-(void)setPlayIconImageView:(UIImageView *)arg1 ;
-(BOOL)ordinalVisible;
-(void)setOrdinalVisible:(BOOL)arg1 ;
-(BOOL)playIconVisible;
-(void)setPlayIconVisible:(BOOL)arg1 ;
@end
