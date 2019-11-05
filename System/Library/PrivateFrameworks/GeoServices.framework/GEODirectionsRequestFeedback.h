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

@class PBDataReader, PBUnknownFields, NSString;

@interface GEODirectionsRequestFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSString* _appIdentifier;
	NSString* _requestingAppId;
	int _purpose;
	int _source;
	struct {
		unsigned has_purpose : 1;
		unsigned has_source : 1;
		unsigned read_unknownFields : 1;
		unsigned read_appIdentifier : 1;
		unsigned read_requestingAppId : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_appIdentifier : 1;
		unsigned wrote_requestingAppId : 1;
		unsigned wrote_purpose : 1;
		unsigned wrote_source : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPurpose; 
@property (assign,nonatomic) int purpose; 
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source; 
@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier; 
@property (nonatomic,readonly) BOOL hasRequestingAppId; 
@property (nonatomic,retain) NSString * requestingAppId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setSource:(int)arg1 ;
-(int)source;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasSource:(BOOL)arg1 ;
-(BOOL)hasSource;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)initWithPurpose:(int)arg1 andSource:(int)arg2 andIdentifier:(id)arg3 ;
-(void)setPurpose:(int)arg1 ;
-(void)setRequestingAppId:(NSString *)arg1 ;
-(id)initWithPurpose:(int)arg1 ;
-(id)initWithPurpose:(int)arg1 andSource:(int)arg2 ;
-(void)_readRequestingAppId;
-(NSString *)requestingAppId;
-(BOOL)hasRequestingAppId;
-(void)_readAppIdentifier;
-(NSString *)appIdentifier;
-(BOOL)hasAppIdentifier;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(int)purpose;
-(void)setHasPurpose:(BOOL)arg1 ;
-(BOOL)hasPurpose;
-(id)purposeAsString:(int)arg1 ;
-(int)StringAsPurpose:(id)arg1 ;
@end

