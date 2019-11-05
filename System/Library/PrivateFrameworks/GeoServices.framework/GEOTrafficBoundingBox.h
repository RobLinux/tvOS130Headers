/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOTrafficBoundingBox : PBCodable <NSCopying> {

	double _east;
	double _north;
	double _south;
	double _west;
	struct {
		unsigned has_east : 1;
		unsigned has_north : 1;
		unsigned has_south : 1;
		unsigned has_west : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSouth; 
@property (assign,nonatomic) double south; 
@property (assign,nonatomic) BOOL hasWest; 
@property (assign,nonatomic) double west; 
@property (assign,nonatomic) BOOL hasNorth; 
@property (assign,nonatomic) double north; 
@property (assign,nonatomic) BOOL hasEast; 
@property (assign,nonatomic) double east; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(double)south;
-(void)setSouth:(double)arg1 ;
-(void)setHasSouth:(BOOL)arg1 ;
-(BOOL)hasSouth;
-(double)west;
-(void)setWest:(double)arg1 ;
-(void)setHasWest:(BOOL)arg1 ;
-(BOOL)hasWest;
-(double)north;
-(void)setNorth:(double)arg1 ;
-(void)setHasNorth:(BOOL)arg1 ;
-(BOOL)hasNorth;
-(double)east;
-(void)setEast:(double)arg1 ;
-(void)setHasEast:(BOOL)arg1 ;
-(BOOL)hasEast;
@end

