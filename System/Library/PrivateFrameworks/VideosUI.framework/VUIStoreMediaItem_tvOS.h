/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPBaseMediaItem.h>
#import <VideosUI/VUIVideoLeaseAgentDelegate.h>
#import <VideosUI/VUIStoreFPSKeyLoaderDelegate.h>
#import <VideosUI/TVPContentKeyLoading.h>

@protocol TVPMediaItem;
@class NSString, NSURL, NSNumber, NSDictionary, VUIVideoLeaseAgent, VUIStoreFPSKeyLoader, TVSDocumentLoader, NSObject, TVPPlayer, NSError, VUIBookmark, NSOperationQueue, MPMediaItem;

@interface VUIStoreMediaItem_tvOS : TVPBaseMediaItem <VUIVideoLeaseAgentDelegate, VUIStoreFPSKeyLoaderDelegate, TVPContentKeyLoading> {

	BOOL _bookmarkDisabled;
	BOOL _disableResumeMenu;
	BOOL _ignoreLeaseAgentStateChanges;
	BOOL _needsRentalCheckin;
	NSString* _actionParams;
	long long _mediaType;
	NSURL* _hlsPlaylistURL;
	NSNumber* _contentRatingRank;
	NSNumber* _rentalID;
	NSDictionary* _storeItemDict;
	NSNumber* _bookmarkOverrideTime;
	NSURL* _fpsCertificateURL;
	NSURL* _fpsKeyServerURL;
	NSDictionary* _fpsAdditionalServerParams;
	NSURL* _playbackURL;
	long long _playbackType;
	NSDictionary* _preferredStoreAssetDict;
	VUIVideoLeaseAgent* _leaseAgent;
	VUIStoreFPSKeyLoader* _storeFPSKeyLoader;
	TVSDocumentLoader* _trickPlayImageConfigDocumentLoader;
	NSObject*<TVPMediaItem> _scrubMediaItem;
	TVPPlayer* _scrubPlayer;
	unsigned long long _loadingContext;
	NSError* _fpsKeyError;
	VUIBookmark* _bookmark;
	NSOperationQueue* _rottenTomatoesOperationQueue;
	MPMediaItem* _mpMediaItem;
	NSString* _contentRatingDomain;

}

@property (nonatomic,copy) NSString * actionParams;                                               //@synthesize actionParams=_actionParams - In the implementation block
@property (nonatomic,copy) NSNumber * rentalID;                                                   //@synthesize rentalID=_rentalID - In the implementation block
@property (assign,nonatomic) long long mediaType;                                                 //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSURL * hlsPlaylistURL;                                                //@synthesize hlsPlaylistURL=_hlsPlaylistURL - In the implementation block
@property (nonatomic,copy) NSNumber * contentRatingRank;                                          //@synthesize contentRatingRank=_contentRatingRank - In the implementation block
@property (nonatomic,retain) NSURL * playbackURL;                                                 //@synthesize playbackURL=_playbackURL - In the implementation block
@property (assign,nonatomic) long long playbackType;                                              //@synthesize playbackType=_playbackType - In the implementation block
@property (nonatomic,retain) NSDictionary * preferredStoreAssetDict;                              //@synthesize preferredStoreAssetDict=_preferredStoreAssetDict - In the implementation block
@property (nonatomic,retain) VUIVideoLeaseAgent * leaseAgent;                                     //@synthesize leaseAgent=_leaseAgent - In the implementation block
@property (assign,nonatomic) BOOL ignoreLeaseAgentStateChanges;                                   //@synthesize ignoreLeaseAgentStateChanges=_ignoreLeaseAgentStateChanges - In the implementation block
@property (nonatomic,retain) VUIStoreFPSKeyLoader * storeFPSKeyLoader;                            //@synthesize storeFPSKeyLoader=_storeFPSKeyLoader - In the implementation block
@property (nonatomic,retain) TVSDocumentLoader * trickPlayImageConfigDocumentLoader;              //@synthesize trickPlayImageConfigDocumentLoader=_trickPlayImageConfigDocumentLoader - In the implementation block
@property (nonatomic,retain) NSObject*<TVPMediaItem> scrubMediaItem;                              //@synthesize scrubMediaItem=_scrubMediaItem - In the implementation block
@property (nonatomic,retain) TVPPlayer * scrubPlayer;                                             //@synthesize scrubPlayer=_scrubPlayer - In the implementation block
@property (assign,nonatomic) unsigned long long loadingContext;                                   //@synthesize loadingContext=_loadingContext - In the implementation block
@property (assign,nonatomic) BOOL needsRentalCheckin;                                             //@synthesize needsRentalCheckin=_needsRentalCheckin - In the implementation block
@property (nonatomic,retain) NSError * fpsKeyError;                                               //@synthesize fpsKeyError=_fpsKeyError - In the implementation block
@property (nonatomic,retain) VUIBookmark * bookmark;                                              //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,retain) NSOperationQueue * rottenTomatoesOperationQueue;                     //@synthesize rottenTomatoesOperationQueue=_rottenTomatoesOperationQueue - In the implementation block
@property (nonatomic,retain) MPMediaItem * mpMediaItem;                                           //@synthesize mpMediaItem=_mpMediaItem - In the implementation block
@property (nonatomic,retain) NSString * contentRatingDomain;                                      //@synthesize contentRatingDomain=_contentRatingDomain - In the implementation block
@property (nonatomic,copy) NSDictionary * storeItemDict;                                          //@synthesize storeItemDict=_storeItemDict - In the implementation block
@property (assign,nonatomic) BOOL bookmarkDisabled;                                               //@synthesize bookmarkDisabled=_bookmarkDisabled - In the implementation block
@property (nonatomic,copy) NSNumber * bookmarkOverrideTime;                                       //@synthesize bookmarkOverrideTime=_bookmarkOverrideTime - In the implementation block
@property (assign,nonatomic) BOOL disableResumeMenu;                                              //@synthesize disableResumeMenu=_disableResumeMenu - In the implementation block
@property (nonatomic,copy) NSURL * fpsCertificateURL;                                             //@synthesize fpsCertificateURL=_fpsCertificateURL - In the implementation block
@property (nonatomic,copy) NSURL * fpsKeyServerURL;                                               //@synthesize fpsKeyServerURL=_fpsKeyServerURL - In the implementation block
@property (nonatomic,copy) NSDictionary * fpsAdditionalServerParams;                              //@synthesize fpsAdditionalServerParams=_fpsAdditionalServerParams - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)_checkInOrphansRentalsIfNeeded;
+(void)_checkInRentalWithDSID:(id)arg1 rentalID:(id)arg2 ;
+(void)_fetchRentalsFromStoreWithCompletion:(/*^block*/id)arg1 ;
+(id)_rentalsRequestDocumentLoaderWithStartID:(id)arg1 endID:(id)arg2 ;
+(void)checkInOrphanedRentals;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_serviceIdentifier;
-(long long)mediaType;
-(void)setMediaType:(long long)arg1 ;
-(long long)playbackType;
-(NSURL *)hlsPlaylistURL;
-(NSNumber *)rentalID;
-(void)setHlsPlaylistURL:(NSURL *)arg1 ;
-(void)setRentalID:(NSNumber *)arg1 ;
-(void)setPlaybackType:(long long)arg1 ;
-(VUIBookmark *)bookmark;
-(void)setBookmark:(VUIBookmark *)arg1 ;
-(NSString *)actionParams;
-(void)setContentRatingDomain:(NSString *)arg1 ;
-(NSString *)contentRatingDomain;
-(id)_imageLoader;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(BOOL)arg4 ;
-(void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2 ;
-(id)mediaItemURL;
-(BOOL)hasTrait:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(void)prepareForLoadingWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareForPlaybackInitiationWithCompletion:(/*^block*/id)arg1 ;
-(void)cleanUpMediaItem;
-(id)replacementErrorForPlaybackError:(id)arg1 ;
-(unsigned long long)loadingContext;
-(void)setLoadingContext:(unsigned long long)arg1 ;
-(BOOL)_supportsBookmarks;
-(id)_bookmarkNetTime;
-(void)setContentRatingRank:(NSNumber *)arg1 ;
-(void)setDisableResumeMenu:(BOOL)arg1 ;
-(void)setFpsCertificateURL:(NSURL *)arg1 ;
-(void)setFpsKeyServerURL:(NSURL *)arg1 ;
-(void)setBookmarkOverrideTime:(NSNumber *)arg1 ;
-(void)leaseAgent:(id)arg1 renewalDidFailWithError:(id)arg2 ;
-(BOOL)_usesFileBasedContentLease;
-(BOOL)disableResumeMenu;
-(id)_adamIDString;
-(NSNumber *)contentRatingRank;
-(BOOL)_mediaItemPreparationCancelled:(unsigned long long)arg1 ;
-(void)_loadTrickPlayConfigURL;
-(void)_loadTomatoRatingDataForAdamID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setScrubPlayer:(TVPPlayer *)arg1 ;
-(void)_scrubPlayerItemDidLoad:(id)arg1 ;
-(void)setNeedsRentalCheckin:(BOOL)arg1 ;
-(NSURL *)fpsCertificateURL;
-(NSURL *)fpsKeyServerURL;
-(BOOL)needsRentalCheckin;
-(TVPPlayer *)scrubPlayer;
-(TVSDocumentLoader *)trickPlayImageConfigDocumentLoader;
-(void)setTrickPlayImageConfigDocumentLoader:(TVSDocumentLoader *)arg1 ;
-(BOOL)ignoreLeaseAgentStateChanges;
-(void)setIgnoreLeaseAgentStateChanges:(BOOL)arg1 ;
-(NSOperationQueue *)rottenTomatoesOperationQueue;
-(void)setRottenTomatoesOperationQueue:(NSOperationQueue *)arg1 ;
-(NSNumber *)bookmarkOverrideTime;
-(void)setActionParams:(NSString *)arg1 ;
-(VUIVideoLeaseAgent *)leaseAgent;
-(void)setLeaseAgent:(VUIVideoLeaseAgent *)arg1 ;
-(NSObject*<TVPMediaItem>)scrubMediaItem;
-(void)setScrubMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(void)setPlaybackURL:(NSURL *)arg1 ;
-(NSURL *)playbackURL;
-(void)loadFairPlayStreamingKeyRequests:(id)arg1 ;
-(void)storeFPSKeyLoader:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3 ;
-(void)storeFPSKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3 ;
-(id)initWithActionParams:(id)arg1 mediaType:(long long)arg2 hlsPlaylistURL:(id)arg3 contentRatingRank:(id)arg4 contentRatingDomain:(id)arg5 rentalID:(id)arg6 ;
-(void)setBookmarkDisabled:(BOOL)arg1 ;
-(NSDictionary *)fpsAdditionalServerParams;
-(void)setStoreItemDict:(NSDictionary *)arg1 ;
-(void)setFpsAdditionalServerParams:(NSDictionary *)arg1 ;
-(void)_initializePlaybackType;
-(NSDictionary *)preferredStoreAssetDict;
-(NSDictionary *)storeItemDict;
-(MPMediaItem *)mpMediaItem;
-(void)setFpsKeyError:(NSError *)arg1 ;
-(id)_preferredStoreAssetDictFromStoreItemDict:(id)arg1 ;
-(void)setPreferredStoreAssetDict:(NSDictionary *)arg1 ;
-(void)_performRedownloadWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateRentalExpirationDate:(id)arg1 playbackStartDate:(id)arg2 ;
-(void)_checkoutRentalWithCompletion:(/*^block*/id)arg1 ;
-(void)_startLeaseWithCompletion:(/*^block*/id)arg1 ;
-(NSError *)fpsKeyError;
-(void)_checkInRental;
-(VUIStoreFPSKeyLoader *)storeFPSKeyLoader;
-(void)setStoreFPSKeyLoader:(VUIStoreFPSKeyLoader *)arg1 ;
-(BOOL)bookmarkDisabled;
-(void)setMpMediaItem:(MPMediaItem *)arg1 ;
@end

