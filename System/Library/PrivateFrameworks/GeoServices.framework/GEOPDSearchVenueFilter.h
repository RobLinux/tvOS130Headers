/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBUnknownFields, GEOPDVenueIdentifier;

@interface GEOPDSearchVenueFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDVenueIdentifier* _venueFilter;
	int _venueSearchType;
	SCD_Struct_GE95 _flags;

}

@property (nonatomic,readonly) BOOL hasVenueFilter; 
@property (nonatomic,retain) GEOPDVenueIdentifier * venueFilter; 
@property (assign,nonatomic) BOOL hasVenueSearchType; 
@property (assign,nonatomic) int venueSearchType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setVenueFilter:(GEOPDVenueIdentifier *)arg1 ;
-(void)setVenueSearchType:(int)arg1 ;
-(GEOPDVenueIdentifier *)venueFilter;
-(BOOL)hasVenueFilter;
-(int)venueSearchType;
-(void)setHasVenueSearchType:(BOOL)arg1 ;
-(BOOL)hasVenueSearchType;
-(id)venueSearchTypeAsString:(int)arg1 ;
-(int)StringAsVenueSearchType:(id)arg1 ;
@end

