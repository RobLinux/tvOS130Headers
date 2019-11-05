/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng, NSMutableArray, GEOPDMapsIdentifier, GEOTimezone;

@interface GEOPDSpatialEventLookupResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _categorys;
	GEOLatLng* _center;
	NSMutableArray* _eventDateTimes;
	GEOPDMapsIdentifier* _eventId;
	GEOPDMapsIdentifier* _poiId;
	GEOTimezone* _timezone;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_categorys : 1;
		unsigned read_center : 1;
		unsigned read_eventDateTimes : 1;
		unsigned read_eventId : 1;
		unsigned read_poiId : 1;
		unsigned read_timezone : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_categorys : 1;
		unsigned wrote_center : 1;
		unsigned wrote_eventDateTimes : 1;
		unsigned wrote_eventId : 1;
		unsigned wrote_poiId : 1;
		unsigned wrote_timezone : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasEventId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * eventId; 
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (nonatomic,readonly) unsigned long long categorysCount; 
@property (nonatomic,readonly) int* categorys; 
@property (nonatomic,retain) NSMutableArray * eventDateTimes; 
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone; 
@property (nonatomic,readonly) BOOL hasPoiId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * poiId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)eventDateTimeType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEventId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasEventId;
-(GEOPDMapsIdentifier *)eventId;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCenter;
-(BOOL)hasCenter;
-(void)_readTimezone;
-(GEOTimezone *)timezone;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(BOOL)hasTimezone;
-(void)_readCategorys;
-(void)_addNoFlagsCategory:(int)arg1 ;
-(int*)categorys;
-(unsigned long long)categorysCount;
-(void)clearCategorys;
-(int)categoryAtIndex:(unsigned long long)arg1 ;
-(void)addCategory:(int)arg1 ;
-(void)_readEventId;
-(void)_readEventDateTimes;
-(void)_addNoFlagsEventDateTime:(id)arg1 ;
-(unsigned long long)eventDateTimesCount;
-(void)clearEventDateTimes;
-(id)eventDateTimeAtIndex:(unsigned long long)arg1 ;
-(void)addEventDateTime:(id)arg1 ;
-(NSMutableArray *)eventDateTimes;
-(void)setEventDateTimes:(NSMutableArray *)arg1 ;
-(void)setCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)categorysAsString:(int)arg1 ;
-(int)StringAsCategorys:(id)arg1 ;
-(void)_readPoiId;
-(GEOPDMapsIdentifier *)poiId;
-(void)setPoiId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasPoiId;
@end

