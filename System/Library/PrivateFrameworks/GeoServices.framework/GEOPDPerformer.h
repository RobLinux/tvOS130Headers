/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOLocalizedString;

@interface GEOPDPerformer : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSString* _itunesId;
	NSString* _itunesUrl;
	GEOLocalizedString* _name;
	NSString* _performerId;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_itunesId : 1;
		unsigned read_itunesUrl : 1;
		unsigned read_name : 1;
		unsigned read_performerId : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_itunesId : 1;
		unsigned wrote_itunesUrl : 1;
		unsigned wrote_name : 1;
		unsigned wrote_performerId : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEOLocalizedString * name; 
@property (nonatomic,readonly) BOOL hasPerformerId; 
@property (nonatomic,retain) NSString * performerId; 
@property (nonatomic,readonly) BOOL hasItunesId; 
@property (nonatomic,retain) NSString * itunesId; 
@property (nonatomic,readonly) BOOL hasItunesUrl; 
@property (nonatomic,retain) NSString * itunesUrl; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(GEOLocalizedString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setName:(GEOLocalizedString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readName;
-(NSString *)itunesId;
-(NSString *)itunesUrl;
-(void)_readPerformerId;
-(void)_readItunesId;
-(void)_readItunesUrl;
-(NSString *)performerId;
-(void)setPerformerId:(NSString *)arg1 ;
-(void)setItunesId:(NSString *)arg1 ;
-(void)setItunesUrl:(NSString *)arg1 ;
-(BOOL)hasPerformerId;
-(BOOL)hasItunesId;
-(BOOL)hasItunesUrl;
@end

