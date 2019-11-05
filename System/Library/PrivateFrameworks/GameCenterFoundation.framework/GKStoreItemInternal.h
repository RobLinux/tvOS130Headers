/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSNumber, NSString, NSURL, NSDate;

@interface GKStoreItemInternal : GKInternalRepresentation {

	NSNumber* _adamID;
	NSString* _artistName;
	NSString* _priceDisplay;
	NSURL* _viewItemURL;
	NSURL* _shortViewItemURL;
	NSURL* _tellAFriendMessageContentsUrl;
	NSDate* _expirationDate;
	unsigned _numberOfUserRatings;
	float _averageUserRating;
	BOOL _owned;

}

@property (nonatomic,retain) NSNumber * adamID;                                  //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,retain) NSString * artistName;                              //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,retain) NSString * priceDisplay;                            //@synthesize priceDisplay=_priceDisplay - In the implementation block
@property (nonatomic,retain) NSURL * viewItemURL;                                //@synthesize viewItemURL=_viewItemURL - In the implementation block
@property (nonatomic,retain) NSURL * shortViewItemURL;                           //@synthesize shortViewItemURL=_shortViewItemURL - In the implementation block
@property (nonatomic,retain) NSURL * tellAFriendMessageContentsUrl;              //@synthesize tellAFriendMessageContentsUrl=_tellAFriendMessageContentsUrl - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned numberOfUserRatings;                       //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) float averageUserRating;                            //@synthesize averageUserRating=_averageUserRating - In the implementation block
@property (assign,nonatomic) BOOL owned;                                         //@synthesize owned=_owned - In the implementation block
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setAdamID:(NSNumber *)arg1 ;
-(NSNumber *)adamID;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(NSString *)priceDisplay;
-(float)averageUserRating;
-(unsigned)numberOfUserRatings;
-(NSURL *)viewItemURL;
-(void)setPriceDisplay:(NSString *)arg1 ;
-(id)storeItemURLForURL:(id)arg1 gamePlatform:(long long)arg2 extraQueryParams:(id)arg3 ;
-(void)storeItemURLForGamePlatform:(long long)arg1 withContext:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setAverageUserRating:(float)arg1 ;
-(void)setViewItemURL:(NSURL *)arg1 ;
-(NSURL *)shortViewItemURL;
-(void)setShortViewItemURL:(NSURL *)arg1 ;
-(NSURL *)tellAFriendMessageContentsUrl;
-(void)setTellAFriendMessageContentsUrl:(NSURL *)arg1 ;
-(void)setNumberOfUserRatings:(unsigned)arg1 ;
-(BOOL)owned;
-(void)setOwned:(BOOL)arg1 ;
@end

