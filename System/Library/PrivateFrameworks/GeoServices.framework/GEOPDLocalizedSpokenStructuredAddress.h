/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOStructuredAddress;

@interface GEOPDLocalizedSpokenStructuredAddress : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSString* _language;
	GEOStructuredAddress* _spokenStructuredAddress;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_language : 1;
		unsigned read_spokenStructuredAddress : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_language : 1;
		unsigned wrote_spokenStructuredAddress : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,readonly) BOOL hasSpokenStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * spokenStructuredAddress; 
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
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readSpokenStructuredAddress;
-(GEOStructuredAddress *)spokenStructuredAddress;
-(void)setSpokenStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(void)_readLanguage;
-(BOOL)hasLanguage;
-(BOOL)hasSpokenStructuredAddress;
@end

