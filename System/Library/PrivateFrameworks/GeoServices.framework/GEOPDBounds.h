/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOMapRegion;

@interface GEOPDBounds : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	GEOMapRegion* _displayMapRegion;
	GEOMapRegion* _mapRegion;
	float _maxZoom;
	float _minZoom;
	struct {
		unsigned has_maxZoom : 1;
		unsigned has_minZoom : 1;
		unsigned read_unknownFields : 1;
		unsigned read_displayMapRegion : 1;
		unsigned read_mapRegion : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_displayMapRegion : 1;
		unsigned wrote_mapRegion : 1;
		unsigned wrote_maxZoom : 1;
		unsigned wrote_minZoom : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion; 
@property (assign,nonatomic) BOOL hasMinZoom; 
@property (assign,nonatomic) float minZoom; 
@property (assign,nonatomic) BOOL hasMaxZoom; 
@property (assign,nonatomic) float maxZoom; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)boundsInfoForPlaceData:(id)arg1 ;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readMapRegion;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasMapRegion;
-(void)_readDisplayMapRegion;
-(GEOMapRegion *)displayMapRegion;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasDisplayMapRegion;
-(void)setMinZoom:(float)arg1 ;
-(float)minZoom;
-(void)setHasMinZoom:(BOOL)arg1 ;
-(BOOL)hasMinZoom;
-(float)maxZoom;
-(void)setMaxZoom:(float)arg1 ;
-(void)setHasMaxZoom:(BOOL)arg1 ;
-(BOOL)hasMaxZoom;
@end

