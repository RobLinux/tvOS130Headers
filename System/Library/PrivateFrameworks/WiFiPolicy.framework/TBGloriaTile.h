/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/TBTile.h>

@class NSString, NSDate;

@interface TBGloriaTile : NSObject <TBTile> {

	unsigned char _zoom;
	unsigned long long _key;
	double _lat;
	double _lng;
	NSString* _WKTString;
	double _tileSize;
	double _north;
	double _south;
	double _east;
	double _west;

}

@property (assign,nonatomic) double lat;                            //@synthesize lat=_lat - In the implementation block
@property (assign,nonatomic) double lng;                            //@synthesize lng=_lng - In the implementation block
@property (assign,nonatomic) unsigned char zoom;                    //@synthesize zoom=_zoom - In the implementation block
@property (assign,nonatomic) unsigned long long key;                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double north;                          //@synthesize north=_north - In the implementation block
@property (assign,nonatomic) double south;                          //@synthesize south=_south - In the implementation block
@property (assign,nonatomic) double east;                           //@synthesize east=_east - In the implementation block
@property (assign,nonatomic) double west;                           //@synthesize west=_west - In the implementation block
@property (nonatomic,copy) NSString * WKTString;                    //@synthesize WKTString=_WKTString - In the implementation block
@property (assign,nonatomic) double tileSize;                       //@synthesize tileSize=_tileSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * created; 
@property (nonatomic,retain) NSString * etag; 
+(unsigned char)defaultZoomLevel;
+(id)gloriaTileWithLat:(double)arg1 lng:(double)arg2 zoom:(unsigned char)arg3 ;
-(unsigned long long)key;
-(void)setKey:(unsigned long long)arg1 ;
-(void)setLat:(double)arg1 ;
-(double)lat;
-(double)tileSize;
-(void)setTileSize:(double)arg1 ;
-(unsigned char)zoom;
-(void)setZoom:(unsigned char)arg1 ;
-(double)lng;
-(void)setLng:(double)arg1 ;
-(double)south;
-(void)setSouth:(double)arg1 ;
-(double)west;
-(void)setWest:(double)arg1 ;
-(double)north;
-(void)setNorth:(double)arg1 ;
-(double)east;
-(void)setEast:(double)arg1 ;
-(id)initWithLat:(double)arg1 lng:(double)arg2 zoom:(unsigned char)arg3 ;
-(id)neighborTileKeysWithRadius:(double)arg1 ;
-(id)initWithEncodedKey:(unsigned long long)arg1 zoom:(unsigned char)arg2 ;
-(id)initWithLat:(double)arg1 lng:(double)arg2 ;
-(id)adjacentTileKeysWithLevel:(unsigned)arg1 ;
-(NSString *)WKTString;
-(void)setWKTString:(NSString *)arg1 ;
@end

