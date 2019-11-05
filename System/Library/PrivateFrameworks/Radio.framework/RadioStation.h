/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioManagedObjectWrapperProtocol.h>

@class NSManagedObject, RadioModel, NSArray, NSData, NSURL, NSString, NSDictionary, RadioArtworkCollection;

@interface RadioStation : NSObject <RadioManagedObjectWrapperProtocol> {

	BOOL _databaseBacked;
	BOOL _editEnabled;
	BOOL _isExplicit;
	BOOL _featured;
	BOOL _gatewayVideoAdEnabled;
	BOOL _premiumPlacement;
	BOOL _shared;
	BOOL _sharingEnabled;
	BOOL _sponsored;
	BOOL _subscribed;
	BOOL _hasSkipRules;
	BOOL _likesEnabled;
	BOOL _requiresSubscription;
	BOOL _previewOnly;
	BOOL _skipEnabled;
	BOOL _virtualPlayEnabled;
	int _skipFrequency;
	int _sortOrder;
	int _subscriberCount;
	NSManagedObject* _managedObject;
	RadioModel* _model;
	NSArray* _trackPlaybackDescriptorQueue;
	long long _adamID;
	NSData* _adData;
	NSURL* _artworkURL;
	NSData* _artworkURLData;
	NSString* _coreSeedName;
	NSDictionary* _debugDictionary;
	NSArray* _editableFields;
	unsigned long long _impressionThreshold;
	NSString* _name;
	long long _persistentID;
	id _seedTracks;
	NSString* _shareToken;
	NSString* _skipIdentifier;
	double _skipInterval;
	NSArray* _skipTimestamps;
	long long _songMixType;
	NSString* _stationDescription;
	NSString* _stationHash;
	NSString* _stationStringID;
	long long _stationID;
	NSURL* _streamURL;
	NSURL* _streamCertificateURL;
	NSURL* _streamKeyURL;

}

@property (assign,nonatomic) long long stationID;                                                    //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,copy) NSString * stationHash;                                                   //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,copy) NSString * stationStringID;                                               //@synthesize stationStringID=_stationStringID - In the implementation block
@property (assign,nonatomic) long long persistentID;                                                 //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) long long adamID;                                                       //@synthesize adamID=_adamID - In the implementation block
@property (assign,nonatomic) int sortOrder;                                                          //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,copy) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * stationDescription;                                            //@synthesize stationDescription=_stationDescription - In the implementation block
@property (nonatomic,copy) NSString * coreSeedName;                                                  //@synthesize coreSeedName=_coreSeedName - In the implementation block
@property (nonatomic,copy) NSURL * artworkURL;                                                       //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,copy) NSData * artworkURLData;                                                  //@synthesize artworkURLData=_artworkURLData - In the implementation block
@property (assign,getter=isPreviewOnly,nonatomic) BOOL previewOnly;                                  //@synthesize previewOnly=_previewOnly - In the implementation block
@property (nonatomic,retain) id seedTracks;                                                          //@synthesize seedTracks=_seedTracks - In the implementation block
@property (assign,nonatomic) long long songMixType;                                                  //@synthesize songMixType=_songMixType - In the implementation block
@property (assign,nonatomic) BOOL editEnabled;                                                       //@synthesize editEnabled=_editEnabled - In the implementation block
@property (nonatomic,retain) NSArray * editableFields;                                               //@synthesize editableFields=_editableFields - In the implementation block
@property (assign,nonatomic) BOOL likesEnabled;                                                      //@synthesize likesEnabled=_likesEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSkipRules;                                                      //@synthesize hasSkipRules=_hasSkipRules - In the implementation block
@property (assign,nonatomic) BOOL isExplicit;                                                        //@synthesize isExplicit=_isExplicit - In the implementation block
@property (assign,nonatomic) BOOL skipEnabled;                                                       //@synthesize skipEnabled=_skipEnabled - In the implementation block
@property (assign,nonatomic) int skipFrequency;                                                      //@synthesize skipFrequency=_skipFrequency - In the implementation block
@property (nonatomic,copy) NSString * skipIdentifier;                                                //@synthesize skipIdentifier=_skipIdentifier - In the implementation block
@property (assign,nonatomic) double skipInterval;                                                    //@synthesize skipInterval=_skipInterval - In the implementation block
@property (nonatomic,copy) NSArray * skipTimestamps;                                                 //@synthesize skipTimestamps=_skipTimestamps - In the implementation block
@property (nonatomic,copy) NSArray * trackPlaybackDescriptorQueue;                                   //@synthesize trackPlaybackDescriptorQueue=_trackPlaybackDescriptorQueue - In the implementation block
@property (assign,nonatomic) BOOL virtualPlayEnabled;                                                //@synthesize virtualPlayEnabled=_virtualPlayEnabled - In the implementation block
@property (assign,getter=isFeatured,nonatomic) BOOL featured;                                        //@synthesize featured=_featured - In the implementation block
@property (assign,getter=isGatewayVideoAdEnabled,nonatomic) BOOL gatewayVideoAdEnabled;              //@synthesize gatewayVideoAdEnabled=_gatewayVideoAdEnabled - In the implementation block
@property (assign,nonatomic) BOOL requiresSubscription;                                              //@synthesize requiresSubscription=_requiresSubscription - In the implementation block
@property (assign,getter=isSponsored,nonatomic) BOOL sponsored;                                      //@synthesize sponsored=_sponsored - In the implementation block
@property (nonatomic,retain) NSData * adData;                                                        //@synthesize adData=_adData - In the implementation block
@property (assign,nonatomic) unsigned long long impressionThreshold;                                 //@synthesize impressionThreshold=_impressionThreshold - In the implementation block
@property (assign,getter=isPremiumPlacement,nonatomic) BOOL premiumPlacement;                        //@synthesize premiumPlacement=_premiumPlacement - In the implementation block
@property (nonatomic,retain) NSURL * streamURL;                                                      //@synthesize streamURL=_streamURL - In the implementation block
@property (nonatomic,retain) NSURL * streamCertificateURL;                                           //@synthesize streamCertificateURL=_streamCertificateURL - In the implementation block
@property (nonatomic,retain) NSURL * streamKeyURL;                                                   //@synthesize streamKeyURL=_streamKeyURL - In the implementation block
@property (assign,getter=isShared,nonatomic) BOOL shared;                                            //@synthesize shared=_shared - In the implementation block
@property (assign,getter=isSharingEnabled,nonatomic) BOOL sharingEnabled;                            //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed;                                    //@synthesize subscribed=_subscribed - In the implementation block
@property (assign,nonatomic) int subscriberCount;                                                    //@synthesize subscriberCount=_subscriberCount - In the implementation block
@property (nonatomic,copy) NSString * shareToken;                                                    //@synthesize shareToken=_shareToken - In the implementation block
@property (nonatomic,copy) NSDictionary * debugDictionary;                                           //@synthesize debugDictionary=_debugDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) RadioArtworkCollection * artworkCollection; 
@property (getter=isPreview,nonatomic,readonly) BOOL preview; 
@property (nonatomic,copy,readonly) NSDictionary * feedbackDictionaryRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDatabaseBacked,nonatomic,readonly) BOOL databaseBacked;                          //@synthesize databaseBacked=_databaseBacked - In the implementation block
@property (nonatomic,readonly) NSManagedObject * managedObject;                                      //@synthesize managedObject=_managedObject - In the implementation block
@property (nonatomic,readonly) RadioModel * model;                                                   //@synthesize model=_model - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(RadioModel *)model;
-(long long)persistentID;
-(void)setPersistentID:(long long)arg1 ;
-(void)setShared:(BOOL)arg1 ;
-(long long)stationID;
-(int)sortOrder;
-(void)setSortOrder:(int)arg1 ;
-(void)setAdamID:(long long)arg1 ;
-(long long)adamID;
-(BOOL)isShared;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationStringID:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(BOOL)isSubscribed;
-(void)setSubscribed:(BOOL)arg1 ;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(NSURL *)artworkURL;
-(void)setSkipInterval:(double)arg1 ;
-(void)setSkipFrequency:(int)arg1 ;
-(double)skipInterval;
-(int)skipFrequency;
-(NSManagedObject *)managedObject;
-(NSDictionary *)debugDictionary;
-(void)setSubscriberCount:(int)arg1 ;
-(int)subscriberCount;
-(BOOL)isExplicit;
-(NSString *)coreSeedName;
-(unsigned long long)impressionThreshold;
-(void)setImpressionThreshold:(unsigned long long)arg1 ;
-(void)setIsExplicit:(BOOL)arg1 ;
-(NSString *)stationDescription;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(BOOL)isFeatured;
-(BOOL)isSponsored;
-(NSData *)adData;
-(NSData *)artworkURLData;
-(BOOL)editEnabled;
-(BOOL)isGatewayVideoAdEnabled;
-(BOOL)hasSkipRules;
-(BOOL)likesEnabled;
-(BOOL)isPremiumPlacement;
-(BOOL)isPreviewOnly;
-(BOOL)requiresSubscription;
-(BOOL)isSharingEnabled;
-(NSString *)shareToken;
-(BOOL)skipEnabled;
-(NSString *)skipIdentifier;
-(long long)songMixType;
-(BOOL)virtualPlayEnabled;
-(id)seedTracks;
-(NSArray *)editableFields;
-(NSDictionary *)feedbackDictionaryRepresentation;
-(BOOL)isPreview;
-(void)setAdData:(NSData *)arg1 ;
-(void)setArtworkURLData:(NSData *)arg1 ;
-(void)setCoreSeedName:(NSString *)arg1 ;
-(void)setDebugDictionary:(NSDictionary *)arg1 ;
-(void)setEditEnabled:(BOOL)arg1 ;
-(void)setEditableFields:(NSArray *)arg1 ;
-(void)setFeatured:(BOOL)arg1 ;
-(void)setGatewayVideoAdEnabled:(BOOL)arg1 ;
-(void)setHasSkipRules:(BOOL)arg1 ;
-(void)setLikesEnabled:(BOOL)arg1 ;
-(void)setPremiumPlacement:(BOOL)arg1 ;
-(void)setPreviewOnly:(BOOL)arg1 ;
-(void)setRequiresSubscription:(BOOL)arg1 ;
-(void)setSeedTracks:(id)arg1 ;
-(void)setShareToken:(NSString *)arg1 ;
-(void)setSkipEnabled:(BOOL)arg1 ;
-(void)setSkipIdentifier:(NSString *)arg1 ;
-(void)setSkipTimestamps:(NSArray *)arg1 ;
-(void)setSongMixType:(long long)arg1 ;
-(void)setSponsored:(BOOL)arg1 ;
-(void)setStationDescription:(NSString *)arg1 ;
-(void)setStreamURL:(NSURL *)arg1 ;
-(void)setStreamCertificateURL:(NSURL *)arg1 ;
-(void)setStreamKeyURL:(NSURL *)arg1 ;
-(void)setVirtualPlayEnabled:(BOOL)arg1 ;
-(NSArray *)skipTimestamps;
-(NSURL *)streamURL;
-(NSURL *)streamCertificateURL;
-(NSURL *)streamKeyURL;
-(void)_radioModelWasDeletedNotification:(id)arg1 ;
-(BOOL)isDatabaseBacked;
-(RadioArtworkCollection *)artworkCollection;
-(id)initWithModel:(id)arg1 managedObject:(id)arg2 ;
-(id)artworkURLForSize:(CGSize)arg1 expectedSize:(CGSize*)arg2 ;
-(NSArray *)trackPlaybackDescriptorQueue;
-(void)setTrackPlaybackDescriptorQueue:(NSArray *)arg1 ;
@end

