/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDEntity, NSMutableArray, GEOPDPlaceInfo;

@interface GEOPDLinkedService : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	GEOPDEntity* _entity;
	NSMutableArray* _hours;
	GEOPDPlaceInfo* _placeInfo;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_entity : 1;
		unsigned read_hours : 1;
		unsigned read_placeInfo : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_entity : 1;
		unsigned wrote_hours : 1;
		unsigned wrote_placeInfo : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasEntity; 
@property (nonatomic,retain) GEOPDEntity * entity; 
@property (nonatomic,readonly) BOOL hasPlaceInfo; 
@property (nonatomic,retain) GEOPDPlaceInfo * placeInfo; 
@property (nonatomic,retain) NSMutableArray * hours; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)hoursType;
+(id)linkedServicesForPlaceData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSMutableArray *)hours;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDEntity *)entity;
-(void)setEntity:(GEOPDEntity *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readHours;
-(void)setHours:(NSMutableArray *)arg1 ;
-(void)_readPlaceInfo;
-(GEOPDPlaceInfo *)placeInfo;
-(void)setPlaceInfo:(GEOPDPlaceInfo *)arg1 ;
-(BOOL)hasPlaceInfo;
-(BOOL)hasEntity;
-(void)_readEntity;
-(void)_addNoFlagsHours:(id)arg1 ;
-(unsigned long long)hoursCount;
-(void)clearHours;
-(id)hoursAtIndex:(unsigned long long)arg1 ;
-(void)addHours:(id)arg1 ;
@end

