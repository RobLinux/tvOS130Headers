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

@class PBDataReader, NSString, GEOLatLngE7, GEOLatLng, NSMutableArray;

@interface GEOWiFiBSS : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	SCD_Struct_GE1* _attributes;
	NSString* _identifier;
	GEOLatLngE7* _latLngE7;
	GEOLatLng* _location;
	NSMutableArray* _qualities;
	long long _uniqueIdentifier;
	struct {
		unsigned has_uniqueIdentifier : 1;
		unsigned read_attributes : 1;
		unsigned read_identifier : 1;
		unsigned read_latLngE7 : 1;
		unsigned read_location : 1;
		unsigned read_qualities : 1;
		unsigned wrote_attributes : 1;
		unsigned wrote_identifier : 1;
		unsigned wrote_latLngE7 : 1;
		unsigned wrote_location : 1;
		unsigned wrote_qualities : 1;
		unsigned wrote_uniqueIdentifier : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (nonatomic,readonly) unsigned long long attributesCount; 
@property (nonatomic,readonly) int* attributes; 
@property (nonatomic,retain) NSMutableArray * qualities; 
@property (assign,nonatomic) BOOL hasUniqueIdentifier; 
@property (assign,nonatomic) long long uniqueIdentifier; 
@property (nonatomic,readonly) BOOL hasLatLngE7; 
@property (nonatomic,retain) GEOLatLngE7 * latLngE7; 
+(BOOL)isValid:(id)arg1 ;
+(Class)qualitiesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)identifier;
-(long long)uniqueIdentifier;
-(void)setUniqueIdentifier:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(int*)attributes;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOLatLng *)location;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(BOOL)hasLocation;
-(void)readAll:(BOOL)arg1 ;
-(void)_readQualities;
-(void)_addNoFlagsQualities:(id)arg1 ;
-(unsigned long long)qualitiesCount;
-(void)clearQualities;
-(id)qualitiesAtIndex:(unsigned long long)arg1 ;
-(void)addQualities:(id)arg1 ;
-(NSMutableArray *)qualities;
-(void)setQualities:(NSMutableArray *)arg1 ;
-(void)_readLocation;
-(BOOL)hasIdentifier;
-(void)_readIdentifier;
-(void)_readAttributes;
-(void)_addNoFlagsAttributes:(int)arg1 ;
-(unsigned long long)attributesCount;
-(void)clearAttributes;
-(int)attributesAtIndex:(unsigned long long)arg1 ;
-(void)addAttributes:(int)arg1 ;
-(void)setAttributes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)attributesAsString:(int)arg1 ;
-(int)StringAsAttributes:(id)arg1 ;
-(void)setHasUniqueIdentifier:(BOOL)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(void)_readLatLngE7;
-(GEOLatLngE7 *)latLngE7;
-(void)setLatLngE7:(GEOLatLngE7 *)arg1 ;
-(BOOL)hasLatLngE7;
@end

