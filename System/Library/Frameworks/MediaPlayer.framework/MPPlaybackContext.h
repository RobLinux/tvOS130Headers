/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/NSSecureCoding.h>

@class MPAVItem, NSString, NSData, NSDictionary;

@interface MPPlaybackContext : NSObject <NSSecureCoding> {

	MPAVItem* _playerCurrentItem;
	long long _startIndex;
	long long _actionAfterQueueLoad;
	long long _shuffleType;
	long long _repeatType;
	NSString* _playActivityFeatureName;
	NSData* _playActivityRecommendationData;
	NSString* _siriAssetInfo;
	NSString* _siriReferenceIdentifier;
	NSDictionary* _siriWHAMetricsInfo;

}

@property (assign,nonatomic) long long startIndex;                               //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) long long actionAfterQueueLoad;                     //@synthesize actionAfterQueueLoad=_actionAfterQueueLoad - In the implementation block
@property (nonatomic,readonly) BOOL containsRestorableContent; 
@property (nonatomic,readonly) BOOL containsTransportableContent; 
@property (nonatomic,readonly) BOOL shouldBecomeActive; 
@property (assign,nonatomic) long long shuffleType;                              //@synthesize shuffleType=_shuffleType - In the implementation block
@property (assign,nonatomic) long long repeatType;                               //@synthesize repeatType=_repeatType - In the implementation block
@property (getter=isSupported,nonatomic,readonly) BOOL supported; 
@property (nonatomic,copy) NSString * playActivityFeatureName;                   //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
@property (nonatomic,copy) NSData * playActivityRecommendationData;              //@synthesize playActivityRecommendationData=_playActivityRecommendationData - In the implementation block
@property (nonatomic,copy) NSString * siriAssetInfo;                             //@synthesize siriAssetInfo=_siriAssetInfo - In the implementation block
@property (nonatomic,copy) NSString * siriReferenceIdentifier;                   //@synthesize siriReferenceIdentifier=_siriReferenceIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * siriWHAMetricsInfo;                    //@synthesize siriWHAMetricsInfo=_siriWHAMetricsInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSupported;
-(long long)startIndex;
-(void)setStartIndex:(long long)arg1 ;
-(NSString *)playActivityFeatureName;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(NSData *)playActivityRecommendationData;
-(void)setPlayActivityRecommendationData:(NSData *)arg1 ;
-(NSString *)siriReferenceIdentifier;
-(void)setSiriReferenceIdentifier:(NSString *)arg1 ;
-(NSDictionary *)siriWHAMetricsInfo;
-(void)setSiriWHAMetricsInfo:(NSDictionary *)arg1 ;
-(long long)shuffleType;
-(long long)repeatType;
-(NSString *)siriAssetInfo;
-(void)setShuffleType:(long long)arg1 ;
-(BOOL)containsTransportableContent;
-(BOOL)shouldBecomeActive;
-(id)descriptionComponents;
-(BOOL)containsRestorableContent;
-(long long)actionAfterQueueLoad;
-(void)setActionAfterQueueLoad:(long long)arg1 ;
-(void)setRepeatType:(long long)arg1 ;
-(void)setSiriAssetInfo:(NSString *)arg1 ;
@end

