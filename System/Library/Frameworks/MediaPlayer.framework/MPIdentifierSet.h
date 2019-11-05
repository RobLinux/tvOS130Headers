/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMutableLocalLibraryIdentifiers.h>
#import <MediaPlayer/MPMutablePersonalStoreIdentifiers.h>
#import <MediaPlayer/MPMutableUniversalStoreIdentifiers.h>
#import <MediaPlayer/MPMutableRadioIdentifiers.h>
#import <MediaPlayer/MPMutableIdentifierSet.h>
#import <MediaPlayer/_MPStateDumpPropertyListTransformable.h>
#import <MediaPlayer/NSCopying.h>
#import <MediaPlayer/NSSecureCoding.h>

@class NSString, NSArray, MPModelKind;

@interface MPIdentifierSet : NSObject <MPMutableLocalLibraryIdentifiers, MPMutablePersonalStoreIdentifiers, MPMutableUniversalStoreIdentifiers, MPMutableRadioIdentifiers, MPMutableIdentifierSet, _MPStateDumpPropertyListTransformable, NSCopying, NSSecureCoding> {

	BOOL _shouldExcludeFromShuffle;
	NSString* _databaseID;
	long long _persistentID;
	long long _containedPersistentID;
	long long _syncID;
	NSString* _personID;
	unsigned long long _cloudID;
	NSString* _cloudAlbumID;
	NSString* _recommendationID;
	NSString* _globalPlaylistID;
	long long _adamID;
	NSArray* _formerAdamIDs;
	NSString* _universalCloudLibraryID;
	long long _purchasedAdamID;
	long long _subscriptionAdamID;
	NSString* _socialProfileID;
	NSString* _informalMediaClipID;
	NSString* _informalStaticAssetID;
	NSString* _stationStringID;
	NSString* _stationHash;
	long long _stationID;
	NSString* _containerUniqueID;
	NSString* _handoffCorrelationID;
	NSString* _contentItemID;
	NSString* _lyricsID;
	NSString* _vendorID;
	MPModelKind* _modelKind;

}

@property (nonatomic,copy) NSString * containerUniqueID;                                      //@synthesize containerUniqueID=_containerUniqueID - In the implementation block
@property (nonatomic,copy) NSString * handoffCorrelationID;                                   //@synthesize handoffCorrelationID=_handoffCorrelationID - In the implementation block
@property (nonatomic,copy) NSString * lyricsID;                                               //@synthesize lyricsID=_lyricsID - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeFromShuffle;                                   //@synthesize shouldExcludeFromShuffle=_shouldExcludeFromShuffle - In the implementation block
@property (nonatomic,copy) NSString * vendorID;                                               //@synthesize vendorID=_vendorID - In the implementation block
@property (nonatomic,readonly) NSString * humanDescription; 
@property (nonatomic,copy) NSString * globalPlaylistID;                                       //@synthesize globalPlaylistID=_globalPlaylistID - In the implementation block
@property (assign,nonatomic) long long deviceLibraryPersistentID; 
@property (assign,nonatomic) long long storeAdamID; 
@property (assign,nonatomic) long long storeSubscriptionAdamID; 
@property (nonatomic,copy) NSString * radioStationStringID; 
@property (assign,nonatomic) long long radioStationID; 
@property (assign,nonatomic) long long storePurchasedAdamID; 
@property (nonatomic,copy) NSString * cloudUniversalLibraryID; 
@property (assign,nonatomic) long long syncID;                                                //@synthesize syncID=_syncID - In the implementation block
@property (nonatomic,copy) NSString * contentItemID;                                          //@synthesize contentItemID=_contentItemID - In the implementation block
@property (nonatomic,copy) NSArray * formerStoreAdamIDs; 
@property (nonatomic,copy) NSString * socialProfileID;                                        //@synthesize socialProfileID=_socialProfileID - In the implementation block
@property (nonatomic,copy) NSString * storeCloudAlbumID; 
@property (assign,nonatomic) unsigned long long storeCloudID; 
@property (nonatomic,copy) NSString * radioStationHash; 
@property (nonatomic,copy) NSString * storeRecommendationID; 
@property (nonatomic,copy) NSString * informalMediaClipID;                                    //@synthesize informalMediaClipID=_informalMediaClipID - In the implementation block
@property (nonatomic,copy) NSString * informalStaticAssetID;                                  //@synthesize informalStaticAssetID=_informalStaticAssetID - In the implementation block
@property (nonatomic,readonly) MPModelKind * modelKind;                                       //@synthesize modelKind=_modelKind - In the implementation block
@property (nonatomic,readonly) id<MPLocalLibraryIdentifiers> library; 
@property (nonatomic,readonly) id<MPPersonalStoreIdentifiers> personalizedStore; 
@property (nonatomic,readonly) id<MPUniversalStoreIdentifiers> universalStore; 
@property (nonatomic,readonly) id<MPRadioIdentifiers> radio; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * databaseID;                                         //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,readonly) long long persistentID; 
@property (nonatomic,readonly) long long containedPersistentID; 
@property (nonatomic,readonly) NSString * personID;                                           //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) unsigned long long cloudID; 
@property (nonatomic,copy,readonly) NSString * cloudAlbumID; 
@property (nonatomic,copy,readonly) NSString * recommendationID; 
@property (nonatomic,readonly) long long adamID; 
@property (nonatomic,copy,readonly) NSArray * formerAdamIDs; 
@property (nonatomic,copy,readonly) NSString * universalCloudLibraryID; 
@property (nonatomic,readonly) long long purchasedAdamID; 
@property (nonatomic,readonly) long long subscriptionAdamID; 
@property (nonatomic,copy,readonly) NSString * stationStringID; 
@property (nonatomic,copy,readonly) NSString * stationHash; 
@property (nonatomic,readonly) long long stationID; 
+(BOOL)supportsSecureCoding;
+(id)emptyIdentifierSet;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)unionSet:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(long long)persistentID;
-(void)setPersistentID:(long long)arg1 ;
-(NSString *)vendorID;
-(void)setVendorID:(NSString *)arg1 ;
-(id<MPLocalLibraryIdentifiers>)library;
-(long long)stationID;
-(NSString *)personID;
-(void)setAdamID:(long long)arg1 ;
-(long long)adamID;
-(unsigned long long)cloudID;
-(void)setCloudID:(unsigned long long)arg1 ;
-(void)setStoreAdamID:(long long)arg1 ;
-(long long)storeAdamID;
-(long long)subscriptionAdamID;
-(long long)purchasedAdamID;
-(NSString *)lyricsID;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(NSString *)cloudAlbumID;
-(NSString *)globalPlaylistID;
-(void)setGlobalPlaylistID:(NSString *)arg1 ;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationStringID:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setCloudAlbumID:(NSString *)arg1 ;
-(void)setSubscriptionAdamID:(long long)arg1 ;
-(void)setPurchasedAdamID:(long long)arg1 ;
-(void)setLyricsID:(NSString *)arg1 ;
-(NSString *)databaseID;
-(void)setRadioStationHash:(NSString *)arg1 ;
-(NSString *)radioStationHash;
-(void)setContentItemID:(NSString *)arg1 ;
-(void)setRadioStationID:(long long)arg1 ;
-(long long)radioStationID;
-(NSString *)contentItemID;
-(NSString *)humanDescription;
-(NSArray *)formerStoreAdamIDs;
-(id)copyWithBlock:(/*^block*/id)arg1 ;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(long long)storeSubscriptionAdamID;
-(void)setStoreCloudID:(unsigned long long)arg1 ;
-(void)setStorePurchasedAdamID:(long long)arg1 ;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(unsigned long long)storeCloudID;
-(long long)storePurchasedAdamID;
-(NSString *)cloudUniversalLibraryID;
-(NSString *)radioStationStringID;
-(id)_stateDumpObject;
-(NSString *)containerUniqueID;
-(NSString *)socialProfileID;
-(MPModelKind *)modelKind;
-(void)setLibraryIdentifiersWithDatabaseID:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setPersonalStoreIdentifiersWithPersonID:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setUniversalStoreIdentifiersWithBlock:(/*^block*/id)arg1 ;
-(void)setRadioIdentifiersWithBlock:(/*^block*/id)arg1 ;
-(void)setContainerUniqueID:(NSString *)arg1 ;
-(NSString *)handoffCorrelationID;
-(void)setHandoffCorrelationID:(NSString *)arg1 ;
-(BOOL)shouldExcludeFromShuffle;
-(void)setShouldExcludeFromShuffle:(BOOL)arg1 ;
-(NSArray *)formerAdamIDs;
-(void)setFormerAdamIDs:(NSArray *)arg1 ;
-(NSString *)universalCloudLibraryID;
-(void)setUniversalCloudLibraryID:(NSString *)arg1 ;
-(void)setSocialProfileID:(NSString *)arg1 ;
-(NSString *)informalMediaClipID;
-(void)setInformalMediaClipID:(NSString *)arg1 ;
-(NSString *)informalStaticAssetID;
-(void)setInformalStaticAssetID:(NSString *)arg1 ;
-(NSString *)recommendationID;
-(void)setRecommendationID:(NSString *)arg1 ;
-(long long)containedPersistentID;
-(void)setContainedPersistentID:(long long)arg1 ;
-(long long)syncID;
-(void)setSyncID:(long long)arg1 ;
-(id)_initWithModelKind:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithModelKind:(id)arg1 block:(/*^block*/id)arg2 ;
-(id<MPPersonalStoreIdentifiers>)personalizedStore;
-(id<MPUniversalStoreIdentifiers>)universalStore;
-(id<MPRadioIdentifiers>)radio;
-(BOOL)hasCommonIdentifierWithIdentifierSet:(id)arg1 ;
-(long long)deviceLibraryPersistentID;
-(void)setDeviceLibraryPersistentID:(long long)arg1 ;
-(void)setRadioStationStringID:(NSString *)arg1 ;
-(void)setFormerStoreAdamIDs:(NSArray *)arg1 ;
-(NSString *)storeCloudAlbumID;
-(void)setStoreCloudAlbumID:(NSString *)arg1 ;
-(NSString *)storeRecommendationID;
-(void)setStoreRecommendationID:(NSString *)arg1 ;
-(id)identifierDescriptions;
-(void)_setDefaultDatabaseIDIfNeeded;
-(void)_setDefaultPersonIDIfNeeded;
@end

