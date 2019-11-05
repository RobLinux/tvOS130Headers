/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GKDashboardMultiCollectionViewController.h>

@class NSString, GKGameRecord, GKDashboardChallengesTurnsDataSource, GKDashboardLeaderboardSetDataSource, GKDashboardLeaderboardListDataSource, GKAchievementDataSource, GKLogoImageView, NSDictionary, UITapGestureRecognizer;

@interface GKDashboardViewController : GKDashboardMultiCollectionViewController {

	BOOL _shouldShowPlayForChallenge;
	BOOL _shouldShowPlayForTurnBasedMatch;
	BOOL _shouldShowQuitForTurnBasedMatch;
	long long _viewState;
	NSString* _leaderboardIdentifier;
	GKGameRecord* _gameRecord;
	GKDashboardChallengesTurnsDataSource* _challengesTurnsDataSource;
	GKDashboardLeaderboardSetDataSource* _leaderboardSetDataSource;
	GKDashboardLeaderboardListDataSource* _leaderboardListDataSource;
	GKAchievementDataSource* _achievementDataSource;
	GKLogoImageView* _headerImageView;
	NSDictionary* _dashboardAssetNames;
	NSDictionary* _leaderboardSetAssetNames;
	NSDictionary* _leaderboardAssetNames;
	UITapGestureRecognizer* _menuGestureRecognizer;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                                                     //@synthesize gameRecord=_gameRecord - In the implementation block
@property (assign,nonatomic) GKDashboardChallengesTurnsDataSource * challengesTurnsDataSource;              //@synthesize challengesTurnsDataSource=_challengesTurnsDataSource - In the implementation block
@property (assign,nonatomic) GKDashboardLeaderboardSetDataSource * leaderboardSetDataSource;                //@synthesize leaderboardSetDataSource=_leaderboardSetDataSource - In the implementation block
@property (assign,nonatomic) GKDashboardLeaderboardListDataSource * leaderboardListDataSource;              //@synthesize leaderboardListDataSource=_leaderboardListDataSource - In the implementation block
@property (assign,nonatomic) GKAchievementDataSource * achievementDataSource;                               //@synthesize achievementDataSource=_achievementDataSource - In the implementation block
@property (nonatomic,retain) GKLogoImageView * headerImageView;                                             //@synthesize headerImageView=_headerImageView - In the implementation block
@property (nonatomic,retain) NSDictionary * dashboardAssetNames;                                            //@synthesize dashboardAssetNames=_dashboardAssetNames - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardSetAssetNames;                                       //@synthesize leaderboardSetAssetNames=_leaderboardSetAssetNames - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardAssetNames;                                          //@synthesize leaderboardAssetNames=_leaderboardAssetNames - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * menuGestureRecognizer;                                //@synthesize menuGestureRecognizer=_menuGestureRecognizer - In the implementation block
@property (assign,nonatomic) long long viewState;                                                           //@synthesize viewState=_viewState - In the implementation block
@property (assign,nonatomic) long long leaderboardTimeScope; 
@property (nonatomic,retain) NSString * leaderboardIdentifier;                                              //@synthesize leaderboardIdentifier=_leaderboardIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlayForChallenge;                                               //@synthesize shouldShowPlayForChallenge=_shouldShowPlayForChallenge - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlayForTurnBasedMatch;                                          //@synthesize shouldShowPlayForTurnBasedMatch=_shouldShowPlayForTurnBasedMatch - In the implementation block
@property (assign,nonatomic) BOOL shouldShowQuitForTurnBasedMatch;                                          //@synthesize shouldShowQuitForTurnBasedMatch=_shouldShowQuitForTurnBasedMatch - In the implementation block
-(void)dealloc;
-(long long)viewState;
-(void)setViewState:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)loadData;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(UITapGestureRecognizer *)menuGestureRecognizer;
-(void)setMenuGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(GKLogoImageView *)headerImageView;
-(void)setHeaderImageView:(GKLogoImageView *)arg1 ;
-(NSString *)leaderboardIdentifier;
-(void)setLeaderboardIdentifier:(NSString *)arg1 ;
-(BOOL)shouldShowPlayForTurnBasedMatch;
-(BOOL)shouldShowQuitForTurnBasedMatch;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(id)initWithGameRecord:(id)arg1 ;
-(void)setChallengesTurnsDataSource:(GKDashboardChallengesTurnsDataSource *)arg1 ;
-(void)setShouldShowPlayForChallenge:(BOOL)arg1 ;
-(void)setShouldShowPlayForTurnBasedMatch:(BOOL)arg1 ;
-(void)setShouldShowQuitForTurnBasedMatch:(BOOL)arg1 ;
-(void)setLeaderboardSetDataSource:(GKDashboardLeaderboardSetDataSource *)arg1 ;
-(GKDashboardLeaderboardSetDataSource *)leaderboardSetDataSource;
-(void)setLeaderboardListDataSource:(GKDashboardLeaderboardListDataSource *)arg1 ;
-(GKDashboardLeaderboardListDataSource *)leaderboardListDataSource;
-(void)setAchievementDataSource:(GKAchievementDataSource *)arg1 ;
-(void)showLeaderboardVC;
-(void)didPressMenuButton;
-(void)setDashboardAssetNames:(NSDictionary *)arg1 ;
-(void)setLeaderboardSetAssetNames:(NSDictionary *)arg1 ;
-(void)setLeaderboardAssetNames:(NSDictionary *)arg1 ;
-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)_gkRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(long long)leaderboardTimeScope;
-(void)setLeaderboardTimeScope:(long long)arg1 ;
-(void)setDashboardAssetNames:(id)arg1 leaderboardSetAssetNames:(id)arg2 leaderboardAssetNames:(id)arg3 ;
-(void)selectedSegmentChanged:(id)arg1 ;
-(BOOL)shouldShowPlayForChallenge;
-(GKGameRecord *)gameRecord;
-(GKDashboardChallengesTurnsDataSource *)challengesTurnsDataSource;
-(GKAchievementDataSource *)achievementDataSource;
-(NSDictionary *)dashboardAssetNames;
-(NSDictionary *)leaderboardSetAssetNames;
-(NSDictionary *)leaderboardAssetNames;
@end

