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

@class PBDataReader, PBUnknownFields, NSString;

@interface GEODownloadMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSString* _environment;
	NSString* _etag;
	double _timestamp;
	NSString* _url;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_environment : 1;
		unsigned read_etag : 1;
		unsigned read_url : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_environment : 1;
		unsigned wrote_etag : 1;
		unsigned wrote_timestamp : 1;
		unsigned wrote_url : 1;
	}  _flags;

}

@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,readonly) BOOL hasEnvironment; 
@property (nonatomic,retain) NSString * environment; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)url;
-(id)dictionaryRepresentation;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(double)timestamp;
-(NSString *)etag;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasUrl;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readEnvironment;
-(BOOL)hasEnvironment;
-(void)_readUrl;
-(void)_readEtag;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
@end

