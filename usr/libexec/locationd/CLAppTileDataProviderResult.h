/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:47 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLAppTileDataProviderResult : NSObject {

	BOOL _touristApp;
	unsigned _ageRating;
	unsigned _adamId;
	unsigned _effectiveRadiusMetersIfInstalled;
	unsigned _heroAppRankInstalled;
	unsigned _heroAppRankUnInstalled;
	double _latitude;
	double _longitude;
	double _spanLat;
	double _spanLon;

}

@property (assign,nonatomic) unsigned ageRating;                                     //@synthesize ageRating=_ageRating - In the implementation block
@property (assign,nonatomic) BOOL touristApp;                                        //@synthesize touristApp=_touristApp - In the implementation block
@property (assign,nonatomic) unsigned adamId;                                        //@synthesize adamId=_adamId - In the implementation block
@property (assign,nonatomic) unsigned effectiveRadiusMetersIfInstalled;              //@synthesize effectiveRadiusMetersIfInstalled=_effectiveRadiusMetersIfInstalled - In the implementation block
@property (assign,nonatomic) unsigned heroAppRankInstalled;                          //@synthesize heroAppRankInstalled=_heroAppRankInstalled - In the implementation block
@property (assign,nonatomic) unsigned heroAppRankUnInstalled;                        //@synthesize heroAppRankUnInstalled=_heroAppRankUnInstalled - In the implementation block
@property (assign,nonatomic) double latitude;                                        //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                                       //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double spanLat;                                         //@synthesize spanLat=_spanLat - In the implementation block
@property (assign,nonatomic) double spanLon;                                         //@synthesize spanLon=_spanLon - In the implementation block
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(double)spanLat;
-(unsigned)adamId;
-(void)setAdamId:(unsigned)arg1 ;
-(void)setAgeRating:(unsigned)arg1 ;
-(unsigned)ageRating;
-(unsigned)effectiveRadiusMetersIfInstalled;
-(unsigned)heroAppRankInstalled;
-(double)spanLon;
-(unsigned)heroAppRankUnInstalled;
-(BOOL)touristApp;
-(void)setEffectiveRadiusMetersIfInstalled:(unsigned)arg1 ;
-(void)setHeroAppRankInstalled:(unsigned)arg1 ;
-(void)setHeroAppRankUnInstalled:(unsigned)arg1 ;
-(void)setTouristApp:(BOOL)arg1 ;
-(void)setSpanLat:(double)arg1 ;
-(void)setSpanLon:(double)arg1 ;
@end

