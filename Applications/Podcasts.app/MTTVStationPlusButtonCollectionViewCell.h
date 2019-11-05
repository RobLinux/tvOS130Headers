/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:21 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class MTTVStationsPlusButtonView, UILabel;

@interface MTTVStationPlusButtonCollectionViewCell : UICollectionViewCell {

	MTTVStationsPlusButtonView* _plusButtonView;
	UILabel* _newStationLabel;

}

@property (nonatomic,retain) MTTVStationsPlusButtonView * plusButtonView;              //@synthesize plusButtonView=_plusButtonView - In the implementation block
@property (nonatomic,retain) UILabel * newStationLabel;                                //@synthesize newStationLabel=_newStationLabel - In the implementation block
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_textColor;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_addPlusButtonView;
-(void)_addNewStationLabel;
-(UILabel *)newStationLabel;
-(MTTVStationsPlusButtonView *)plusButtonView;
-(void)setPlusButtonView:(MTTVStationsPlusButtonView *)arg1 ;
-(void)setNewStationLabel:(UILabel *)arg1 ;
@end
