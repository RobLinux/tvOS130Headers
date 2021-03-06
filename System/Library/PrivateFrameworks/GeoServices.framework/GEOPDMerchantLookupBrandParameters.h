/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAdamAppIdentifier, NSString, GEOPDWarsawMerchantIdentifier;

@interface GEOPDMerchantLookupBrandParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	GEOPDAdamAppIdentifier* _appIdentifier;
	NSString* _merchantCanl;
	NSString* _merchantCode;
	NSString* _merchantId;
	NSString* _rawMerchantCode;
	GEOPDWarsawMerchantIdentifier* _warsawIdentifier;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_appIdentifier : 1;
		unsigned read_merchantCanl : 1;
		unsigned read_merchantCode : 1;
		unsigned read_merchantId : 1;
		unsigned read_rawMerchantCode : 1;
		unsigned read_warsawIdentifier : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_appIdentifier : 1;
		unsigned wrote_merchantCanl : 1;
		unsigned wrote_merchantCode : 1;
		unsigned wrote_merchantId : 1;
		unsigned wrote_rawMerchantCode : 1;
		unsigned wrote_warsawIdentifier : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMerchantCode; 
@property (nonatomic,retain) NSString * merchantCode; 
@property (nonatomic,readonly) BOOL hasRawMerchantCode; 
@property (nonatomic,retain) NSString * rawMerchantCode; 
@property (nonatomic,readonly) BOOL hasWarsawIdentifier; 
@property (nonatomic,retain) GEOPDWarsawMerchantIdentifier * warsawIdentifier; 
@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) GEOPDAdamAppIdentifier * appIdentifier; 
@property (nonatomic,readonly) BOOL hasMerchantId; 
@property (nonatomic,retain) NSString * merchantId; 
@property (nonatomic,readonly) BOOL hasMerchantCanl; 
@property (nonatomic,retain) NSString * merchantCanl; 
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
-(void)setAppIdentifier:(GEOPDAdamAppIdentifier *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readMerchantId;
-(void)_readMerchantCanl;
-(NSString *)merchantId;
-(NSString *)merchantCanl;
-(void)setMerchantId:(NSString *)arg1 ;
-(void)setMerchantCanl:(NSString *)arg1 ;
-(BOOL)hasMerchantId;
-(BOOL)hasMerchantCanl;
-(void)_readMerchantCode;
-(void)_readRawMerchantCode;
-(void)_readAppIdentifier;
-(NSString *)merchantCode;
-(NSString *)rawMerchantCode;
-(GEOPDAdamAppIdentifier *)appIdentifier;
-(void)setMerchantCode:(NSString *)arg1 ;
-(void)setRawMerchantCode:(NSString *)arg1 ;
-(BOOL)hasMerchantCode;
-(BOOL)hasRawMerchantCode;
-(BOOL)hasAppIdentifier;
-(void)_readWarsawIdentifier;
-(GEOPDWarsawMerchantIdentifier *)warsawIdentifier;
-(void)setWarsawIdentifier:(GEOPDWarsawMerchantIdentifier *)arg1 ;
-(BOOL)hasWarsawIdentifier;
@end

