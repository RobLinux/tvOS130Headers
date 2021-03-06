/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng, GEOMapRegion, GEOPDMapsIdentifier;

@interface GEORPFeedbackLayoutConfigParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	GEOLatLng* _coordinate;
	GEOMapRegion* _mapRegion;
	GEOPDMapsIdentifier* _mapsId;
	int _formType;
	struct {
		unsigned has_formType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_coordinate : 1;
		unsigned read_mapRegion : 1;
		unsigned read_mapsId : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_coordinate : 1;
		unsigned wrote_mapRegion : 1;
		unsigned wrote_mapsId : 1;
		unsigned wrote_formType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFormType; 
@property (assign,nonatomic) int formType; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
@property (nonatomic,readonly) BOOL hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(GEOLatLng *)coordinate;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDMapsIdentifier *)mapsId;
-(void)_readMapRegion;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasMapRegion;
-(void)_readMapsId;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasMapsId;
-(void)_readCoordinate;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(int)formType;
-(void)setFormType:(int)arg1 ;
-(void)setHasFormType:(BOOL)arg1 ;
-(BOOL)hasFormType;
-(id)formTypeAsString:(int)arg1 ;
-(int)StringAsFormType:(id)arg1 ;
-(BOOL)hasCoordinate;
@end

