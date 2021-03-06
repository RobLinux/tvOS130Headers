/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GKDetailViewController.h>

@class GKChallenge, GKAchievementIconView, UILabel, UIButton, GKPlayerWithSpeechBalloonView, NSLayoutConstraint;

@interface GKDashboardChallengeDetailViewController : GKDetailViewController {

	BOOL _shouldShowPlay;
	id _delegate;
	GKChallenge* _challenge;
	GKAchievementIconView* _iconView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UILabel* _fromLabel;
	UIButton* _playButton;
	UIButton* _declineButton;
	GKPlayerWithSpeechBalloonView* _playerSpeechView;
	NSLayoutConstraint* _topConstraint;
	double _topMargin;
	NSLayoutConstraint* _iconHeightConstraint;
	NSLayoutConstraint* _speechToFromConstraint;

}

@property (nonatomic,retain) GKChallenge * challenge;                                       //@synthesize challenge=_challenge - In the implementation block
@property (assign,nonatomic) GKAchievementIconView * iconView;                              //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) UILabel * descriptionLabel;                                    //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic) UILabel * fromLabel;                                           //@synthesize fromLabel=_fromLabel - In the implementation block
@property (assign,nonatomic) UIButton * playButton;                                         //@synthesize playButton=_playButton - In the implementation block
@property (assign,nonatomic) UIButton * declineButton;                                      //@synthesize declineButton=_declineButton - In the implementation block
@property (assign,nonatomic) GKPlayerWithSpeechBalloonView * playerSpeechView;              //@synthesize playerSpeechView=_playerSpeechView - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * topConstraint;                            //@synthesize topConstraint=_topConstraint - In the implementation block
@property (assign,nonatomic) double topMargin;                                              //@synthesize topMargin=_topMargin - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * iconHeightConstraint;                     //@synthesize iconHeightConstraint=_iconHeightConstraint - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * speechToFromConstraint;                   //@synthesize speechToFromConstraint=_speechToFromConstraint - In the implementation block
@property (assign,nonatomic) id delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlay;                                           //@synthesize shouldShowPlay=_shouldShowPlay - In the implementation block
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(GKChallenge *)challenge;
-(void)play:(id)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(void)setChallenge:(GKChallenge *)arg1 ;
-(void)viewDidLoad;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)fromLabel;
-(void)setFromLabel:(UILabel *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topConstraint;
-(GKAchievementIconView *)iconView;
-(void)setIconView:(GKAchievementIconView *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UIButton *)declineButton;
-(void)setDeclineButton:(UIButton *)arg1 ;
-(id)initWithChallenge:(id)arg1 ;
-(void)setShouldShowPlay:(BOOL)arg1 ;
-(BOOL)shouldShowPlay;
-(double)topMargin;
-(void)configureForChallenge;
-(void)updateLeaderboardImage;
-(void)decline:(id)arg1 ;
-(void)challengeOK:(id)arg1 ;
-(UIButton *)playButton;
-(void)setPlayButton:(UIButton *)arg1 ;
-(GKPlayerWithSpeechBalloonView *)playerSpeechView;
-(void)setPlayerSpeechView:(GKPlayerWithSpeechBalloonView *)arg1 ;
-(NSLayoutConstraint *)iconHeightConstraint;
-(void)setIconHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)speechToFromConstraint;
-(void)setSpeechToFromConstraint:(NSLayoutConstraint *)arg1 ;
@end

