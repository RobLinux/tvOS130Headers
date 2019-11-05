/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionViewCell.h>

@class UIImageView, UILabel, GKGame, GKGameRecord;

@interface GKBaseGameCell : GKCollectionViewCell {

	UIImageView* _iconView;
	UILabel* _nameLabel;

}

@property (nonatomic,retain) UIImageView * iconView;                 //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                    //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKGame * game; 
@property (nonatomic,retain) GKGameRecord * gameRecord; 
-(void)dealloc;
-(void)prepareForReuse;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(GKGame *)game;
-(void)setGame:(GKGame *)arg1 ;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(GKGameRecord *)gameRecord;
-(void)didUpdateModel;
-(CGRect)alignmentRectForText;
-(void)setRepresentedItem:(id)arg1 ;
@end
