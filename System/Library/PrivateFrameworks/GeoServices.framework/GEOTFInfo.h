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

@class PBDataReader, NSString;

@interface GEOTFInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	NSString* _comment;
	NSString* _language;
	struct {
		unsigned read_comment : 1;
		unsigned read_language : 1;
		unsigned wrote_comment : 1;
		unsigned wrote_language : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,readonly) BOOL hasComment; 
@property (nonatomic,retain) NSString * comment; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)comment;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readLanguage;
-(BOOL)hasLanguage;
-(void)_readComment;
-(void)setComment:(NSString *)arg1 ;
-(BOOL)hasComment;
@end

