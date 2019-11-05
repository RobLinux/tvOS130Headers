/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVCKStoreFavoritesFactoryDataSource;
@class TVCKStorePlaybackProgressFactory;

@interface TVCKStoreFavoritesFactory : NSObject {

	id<TVCKStoreFavoritesFactoryDataSource> _dataSource;
	TVCKStorePlaybackProgressFactory* _progressFactory;

}

@property (nonatomic,retain) TVCKStorePlaybackProgressFactory * progressFactory;                     //@synthesize progressFactory=_progressFactory - In the implementation block
@property (assign,nonatomic,__weak) id<TVCKStoreFavoritesFactoryDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)resolveConflictsBetweenOriginalDictionaries:(id)arg1 andUpdatedDictionaries:(id)arg2 ;
+(id)_itemIDsFromDictionaries:(id)arg1 allowingUnknownClasses:(BOOL)arg2 ;
+(id)_itemIDFromDictionary:(id)arg1 allowingUnknownClasses:(BOOL)arg2 ;
-(id)init;
-(id<TVCKStoreFavoritesFactoryDataSource>)dataSource;
-(void)setDataSource:(id<TVCKStoreFavoritesFactoryDataSource>)arg1 ;
-(id)initWithBookmarkService:(id)arg1 ;
-(void)_fetchLookupItemsForAdamIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)_contentCategoryForLookupItem:(id)arg1 ;
-(id)identifierForCategory:(unsigned long long)arg1 ;
-(double)_coverArtAspectRatioForCategory:(unsigned long long)arg1 ;
-(id)_itemIDFromDictionary:(id)arg1 ;
-(unsigned long long)_categoryFromDictionary:(id)arg1 ;
-(id)itemIDsFromDictionaries:(id)arg1 ;
-(id)_contentItemWithLookupItem:(id)arg1 ;
-(void)_updateShowDictionary:(id)arg1 withLookupItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(TVCKStorePlaybackProgressFactory *)progressFactory;
-(void)_fetchLookupItemForAdamID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)constructLightWeightContentItemsFromDictionaries:(id)arg1 ;
-(void)constructContentItemsFromDictionaries:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateEpisodeDataForFavoriteShows:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)sortContentItems:(id)arg1 usingSortMode:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)highestUserOrderInDictionaries:(id)arg1 ;
-(id)dictionariesFromFavorites:(id)arg1 ;
-(id)showInfoForContentItem:(id)arg1 ;
-(void)constructContentItemForAdamID:(id)arg1 withUserOrder:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setProgressFactory:(TVCKStorePlaybackProgressFactory *)arg1 ;
@end

