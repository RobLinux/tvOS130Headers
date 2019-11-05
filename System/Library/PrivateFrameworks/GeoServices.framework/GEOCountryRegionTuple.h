/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOCountryRegionTuple : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSString* _countryCode;
	NSString* _region;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_countryCode : 1;
		unsigned read_region : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_countryCode : 1;
		unsigned wrote_region : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode; 
@property (nonatomic,readonly) BOOL hasRegion; 
@property (nonatomic,retain) NSString * region; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)region;
-(BOOL)hasCountryCode;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setRegion:(NSString *)arg1 ;
-(BOOL)hasRegion;
-(void)_readCountryCode;
-(void)_readRegion;
@end
