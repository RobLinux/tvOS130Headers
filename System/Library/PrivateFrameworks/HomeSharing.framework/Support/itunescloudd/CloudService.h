/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/ICCloudServerProtocol.h>

@protocol ICDHandlerProviding;
@interface CloudService : NSObject <ICCloudServerProtocol> {

	int _requestingAppPID;
	id<ICDHandlerProviding> _handlerProvider;

}

@property (nonatomic,__weak,readonly) id<ICDHandlerProviding> handlerProvider;              //@synthesize handlerProvider=_handlerProvider - In the implementation block
@property (assign,nonatomic) int requestingAppPID;                                          //@synthesize requestingAppPID=_requestingAppPID - In the implementation block
-(void)setupInitialSagaPoolingForConfiguration:(id)arg1 ;
-(void)setupInitialJaliscoPoolingForConfiguration:(id)arg1 ;
-(void)setConnectionConfiguration:(id)arg1 preferredVideoQuality:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)isSagaAuthenticatedForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateJaliscoLibraryWithReason:(long long)arg1 forConfiguration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateSagaLibraryWithReason:(long long)arg1 forConfiguration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)authenticateForConfiguration:(id)arg1 startInitialImport:(BOOL)arg2 mergeWithCloudLibrary:(BOOL)arg3 isExplicitUserAction:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)deauthenticateForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deauthenticateAndDisableActiveLockerAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)setCloudAddToPlaylistBehavior:(long long)arg1 forConfiguration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeJaliscoLibraryForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateJaliscoLibraryByRemovingMediaKind:(long long)arg1 forConfiguration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateJaliscoLibraryByAddingMediaKind:(long long)arg1 forConfiguration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadIsUpdateInProgressForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadUpdateProgressForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadIsSagaUpdateInProgressForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadSagaUpdateProgressForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadIsJaliscoUpdateInProgressForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadJaliscoUpdateProgressForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadLastKnownEnableICMLErrorStatusForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)importItemArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)importScreenshotForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)importContainerArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)importSubscriptionItemArtworkForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)importSubscriptionScreenshotForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)importSubscriptionContainerArtworkForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)importArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2 ;
-(void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2 ;
-(void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2 ;
-(void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1 configuration:(id)arg2 ;
-(void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2 ;
-(void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1 configuration:(id)arg2 ;
-(void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1 configuration:(id)arg2 ;
-(void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1 configuration:(id)arg2 ;
-(void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2 ;
-(void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2 ;
-(void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadArtworkInfoForSagaIDs:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadArtworkInfoForContainerSagaIDs:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadScreenshotInfoForSagaIDs:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadMissingArtworkForConfiguration:(id)arg1 ;
-(void)loadGeniusItemsForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 configuration:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 configuration:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sdk_createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 configuration:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 configuration:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 configuration:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 configuration:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 configuration:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)publishPlaylistWithSagaID:(long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removePlaylistsWithSagaIDs:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(BOOL)arg2 configuration:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 configuration:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addStorePlaylistWithGlobalID:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeItemsWithSagaIDs:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideItemsWithPurchaseHistoryIDs:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 configuration:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 configuration:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)uploadCloudItemPropertiesForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)uploadCloudPlaylistPropertiesForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAlbumProperties:(id)arg1 forAlbumPersistentID:(long long)arg2 configuration:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateArtistHeroImagesForConfiguration:(id)arg1 ;
-(void)loadIsJaliscoGeniusSupportedForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadJaliscoGeniusLearnMoreURLForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadJaliscoGeniusCUIDForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setJaliscoGeniusCUID:(id)arg1 forConfiguration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)enableJaliscoGeniusForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateJaliscoGeniusDataForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelUpdateJaliscoGeniusDataForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadJaliscoGeniusOperationStatusForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableJaliscoGeniusForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadBooksForStoreIDs:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithHandlerProvider:(id)arg1 ;
-(void)setRequestingAppPID:(int)arg1 ;
-(id<ICDHandlerProviding>)handlerProvider;
-(void)_updateSagaLibraryWithReason:(long long)arg1 forConfiguration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)requestingAppPID;
@end

