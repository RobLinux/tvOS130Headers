/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@protocol GKDashboardNearbyBrowserDelegate;
@class NSMutableDictionary, GKTournament, NSArray, NSMutableArray, NSDictionary;

@interface GKDashboardMultiplayerPickerDataSource : GKCollectionDataSource {

	BOOL _showsAllFriends;
	BOOL _searching;
	BOOL _supportsNearby;
	BOOL _excludesContacts;
	BOOL _isSegmented;
	BOOL _browsingForNearbyPlayers;
	BOOL _didLoad;
	NSMutableDictionary* _playerStates;
	long long _maxSelectable;
	GKTournament* _tournament;
	id<GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
	/*^block*/id _nearbyPlayersChangedHandler;
	long long _currentSegment;
	NSArray* _contactPlayers;
	NSArray* _friendPlayers;
	NSArray* _recentPlayers;
	NSMutableArray* _nearbyPlayers;
	NSArray* _searchPlayers;
	long long _maxFriendsVisible;
	NSArray* _hiddenPlayers;

}

@property (nonatomic,retain) NSArray * contactPlayers;                                         //@synthesize contactPlayers=_contactPlayers - In the implementation block
@property (nonatomic,retain) NSArray * friendPlayers;                                          //@synthesize friendPlayers=_friendPlayers - In the implementation block
@property (nonatomic,retain) NSArray * recentPlayers;                                          //@synthesize recentPlayers=_recentPlayers - In the implementation block
@property (nonatomic,retain) NSMutableArray * nearbyPlayers;                                   //@synthesize nearbyPlayers=_nearbyPlayers - In the implementation block
@property (nonatomic,retain) NSArray * searchPlayers;                                          //@synthesize searchPlayers=_searchPlayers - In the implementation block
@property (assign,nonatomic) long long maxSelectable;                                          //@synthesize maxSelectable=_maxSelectable - In the implementation block
@property (assign,nonatomic) long long maxFriendsVisible;                                      //@synthesize maxFriendsVisible=_maxFriendsVisible - In the implementation block
@property (nonatomic,retain) NSArray * hiddenPlayers;                                          //@synthesize hiddenPlayers=_hiddenPlayers - In the implementation block
@property (assign,nonatomic) BOOL browsingForNearbyPlayers;                                    //@synthesize browsingForNearbyPlayers=_browsingForNearbyPlayers - In the implementation block
@property (assign,nonatomic) BOOL didLoad;                                                     //@synthesize didLoad=_didLoad - In the implementation block
@property (nonatomic,readonly) NSArray * selectedPlayers; 
@property (nonatomic,retain) NSMutableDictionary * playerStates;                               //@synthesize playerStates=_playerStates - In the implementation block
@property (nonatomic,readonly) long long unmodifiedItemCount; 
@property (nonatomic,retain) GKTournament * tournament;                                        //@synthesize tournament=_tournament - In the implementation block
@property (assign,nonatomic) BOOL showsAllFriends;                                             //@synthesize showsAllFriends=_showsAllFriends - In the implementation block
@property (assign,getter=isSearching,nonatomic) BOOL searching;                                //@synthesize searching=_searching - In the implementation block
@property (assign,nonatomic) BOOL supportsNearby;                                              //@synthesize supportsNearby=_supportsNearby - In the implementation block
@property (assign,nonatomic) id<GKDashboardNearbyBrowserDelegate> nearbyDelegate;              //@synthesize nearbyDelegate=_nearbyDelegate - In the implementation block
@property (nonatomic,copy) id nearbyPlayersChangedHandler;                                     //@synthesize nearbyPlayersChangedHandler=_nearbyPlayersChangedHandler - In the implementation block
@property (assign,nonatomic) BOOL excludesContacts;                                            //@synthesize excludesContacts=_excludesContacts - In the implementation block
@property (assign,nonatomic) BOOL isSegmented;                                                 //@synthesize isSegmented=_isSegmented - In the implementation block
@property (assign,nonatomic) long long currentSegment;                                         //@synthesize currentSegment=_currentSegment - In the implementation block
@property (nonatomic,readonly) long long numberOfContacts; 
@property (nonatomic,readonly) NSArray * contactSectionHeaders; 
@property (nonatomic,readonly) NSDictionary * contactSectionHeaderIndexes; 
@property (nonatomic,readonly) NSArray * contactSkipValues; 
@property (nonatomic,readonly) NSDictionary * contactSkipIndexes; 
-(long long)itemCount;
-(void)clearSelection;
-(BOOL)isSegmented;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)isSearching;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(GKTournament *)tournament;
-(void)setTournament:(GKTournament *)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableArray *)nearbyPlayers;
-(void)setNearbyPlayers:(NSMutableArray *)arg1 ;
-(void)setPlayerStates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)playerStates;
-(id)indexPathForFirstPlayer;
-(NSArray *)selectedPlayers;
-(id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2 ;
-(void)setExcludesContacts:(BOOL)arg1 ;
-(void)setNearbyPlayersChangedHandler:(id)arg1 ;
-(long long)maxSelectable;
-(long long)currentSegment;
-(BOOL)excludesContacts;
-(void)setSupportsNearby:(BOOL)arg1 ;
-(void)setNearbyDelegate:(id<GKDashboardNearbyBrowserDelegate>)arg1 ;
-(id)firstIndexPathForPlayer:(id)arg1 ;
-(long long)unmodifiedItemCount;
-(id)indexPathsForPlayer:(id)arg1 ;
-(void)setCurrentSegment:(long long)arg1 ;
-(void)setShowsAllFriends:(BOOL)arg1 ;
-(BOOL)supportsNearby;
-(id<GKDashboardNearbyBrowserDelegate>)nearbyDelegate;
-(void)setSearching:(BOOL)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(double)preferredCollectionHeight;
-(id)itemForIndexPath:(id)arg1 ;
-(void)setMaxSelectable:(long long)arg1 ;
-(void)setHiddenPlayers:(NSArray *)arg1 ;
-(void)setMaxFriendsVisible:(long long)arg1 ;
-(void)setFriendPlayers:(NSArray *)arg1 ;
-(void)setRecentPlayers:(NSArray *)arg1 ;
-(NSArray *)hiddenPlayers;
-(NSArray *)friendPlayers;
-(NSArray *)recentPlayers;
-(void)setDidLoad:(BOOL)arg1 ;
-(BOOL)browsingForNearbyPlayers;
-(void)setBrowsingForNearbyPlayers:(BOOL)arg1 ;
-(id)playersForSection:(long long)arg1 ignoreSearch:(BOOL)arg2 ;
-(id)playerForIndexPath:(id)arg1 ;
-(NSArray *)contactPlayers;
-(BOOL)cellSelectableStateAtIndexPath:(id)arg1 playerState:(unsigned long long)arg2 ;
-(long long)numberOfSectionsInCurrentSegment;
-(void)setSearchPlayers:(NSArray *)arg1 ;
-(void)setNearbyPlayerID:(id)arg1 reachable:(BOOL)arg2 ;
-(id)playerForPlayerID:(id)arg1 ;
-(void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2 ;
-(id)nearbyPlayersChangedHandler;
-(void)updateSelectionStateForCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(BOOL)showsAllFriends;
-(long long)maxFriendsVisible;
-(long long)numberOfContacts;
-(NSArray *)contactSectionHeaders;
-(NSDictionary *)contactSectionHeaderIndexes;
-(NSArray *)contactSkipValues;
-(NSDictionary *)contactSkipIndexes;
-(id)headerTextForSection:(long long)arg1 ;
-(NSArray *)searchPlayers;
-(id)searchKeyForSection:(long long)arg1 ;
-(void)searchTextHasChanged;
-(BOOL)_canShowMoreFriends;
-(void)setIsSegmented:(BOOL)arg1 ;
-(void)setContactPlayers:(NSArray *)arg1 ;
-(BOOL)didLoad;
@end
