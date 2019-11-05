/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, NSString, GEOLocation;

@interface GEOAddressCorrectionAddress : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	NSString* _addressID;
	GEOLocation* _addressLocation;
	struct {
		unsigned read_addressID : 1;
		unsigned read_addressLocation : 1;
		unsigned wrote_addressID : 1;
		unsigned wrote_addressLocation : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAddressLocation; 
@property (nonatomic,retain) GEOLocation * addressLocation; 
@property (nonatomic,readonly) BOOL hasAddressID; 
@property (nonatomic,retain) NSString * addressID; 
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
-(void)clearSensitiveFields;
-(void)_readAddressID;
-(NSString *)addressID;
-(void)setAddressID:(NSString *)arg1 ;
-(BOOL)hasAddressID;
-(void)_readAddressLocation;
-(GEOLocation *)addressLocation;
-(BOOL)hasAddressLocation;
-(void)setAddressLocation:(GEOLocation *)arg1 ;
@end

