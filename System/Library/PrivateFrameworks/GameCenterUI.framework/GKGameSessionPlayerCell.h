/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class GKCloudPlayer, GKGameSessionPlayerShadowView, NSLayoutConstraint, UILabel, UIColor, UIView;

@interface GKGameSessionPlayerCell : UICollectionViewCell {

	BOOL _onDarkBackground;
	GKCloudPlayer* _player;
	GKGameSessionPlayerShadowView* _playerView;
	NSLayoutConstraint* _playerViewBottomToNameLabelTopConstraint;
	UILabel* _nameLabel;
	UILabel* _statusLabel;
	UIColor* _nameColor;
	UIColor* _statusColor;
	double _playerViewBottomToNameLabelTopConstant;

}

@property (nonatomic,retain) UIColor * nameColor;                                                               //@synthesize nameColor=_nameColor - In the implementation block
@property (nonatomic,retain) UIColor * statusColor;                                                             //@synthesize statusColor=_statusColor - In the implementation block
@property (assign,nonatomic) double playerViewBottomToNameLabelTopConstant;                                     //@synthesize playerViewBottomToNameLabelTopConstant=_playerViewBottomToNameLabelTopConstant - In the implementation block
@property (nonatomic,retain) GKCloudPlayer * player;                                                            //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL onDarkBackground;                                                             //@synthesize onDarkBackground=_onDarkBackground - In the implementation block
@property (nonatomic,readonly) UIView * popoverSourceView; 
@property (assign,nonatomic,__weak) GKGameSessionPlayerShadowView * playerView;                                 //@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * playerViewBottomToNameLabelTopConstraint;              //@synthesize playerViewBottomToNameLabelTopConstraint=_playerViewBottomToNameLabelTopConstraint - In the implementation block
@property (assign,nonatomic,__weak) UILabel * nameLabel;                                                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * statusLabel;                                                      //@synthesize statusLabel=_statusLabel - In the implementation block
+(CGSize)defaultSize;
+(double)preferredCollectionHeight;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(GKCloudPlayer *)player;
-(void)setPlayer:(GKCloudPlayer *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setStatusText:(id)arg1 ;
-(UIView *)popoverSourceView;
-(void)setPlayerView:(GKGameSessionPlayerShadowView *)arg1 ;
-(GKGameSessionPlayerShadowView *)playerView;
-(void)setOnDarkBackground:(BOOL)arg1 ;
-(BOOL)onDarkBackground;
-(void)setNameText:(id)arg1 ;
-(void)setStatusWithLastPlayedDate:(id)arg1 ;
-(UILabel *)statusLabel;
-(void)updateLabelColorForDashboard;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(void)setNameColor:(UIColor *)arg1 ;
-(void)setStatusColor:(UIColor *)arg1 ;
-(void)setPlayerViewBottomToNameLabelTopConstant:(double)arg1 ;
-(NSLayoutConstraint *)playerViewBottomToNameLabelTopConstraint;
-(void)setPlayerViewBottomToNameLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(UIColor *)nameColor;
-(UIColor *)statusColor;
-(double)playerViewBottomToNameLabelTopConstant;
@end

