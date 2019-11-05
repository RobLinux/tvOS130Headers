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

@class PBUnknownFields;

@interface GEOPDTextItemDisplayConfig : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _maxItemsPerRow;
	unsigned _maxRowCount;
	SCD_Struct_GE34 _flags;

}

@property (assign,nonatomic) BOOL hasMaxItemsPerRow; 
@property (assign,nonatomic) unsigned maxItemsPerRow; 
@property (assign,nonatomic) BOOL hasMaxRowCount; 
@property (assign,nonatomic) unsigned maxRowCount; 
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
-(unsigned)maxItemsPerRow;
-(void)setMaxItemsPerRow:(unsigned)arg1 ;
-(void)setHasMaxItemsPerRow:(BOOL)arg1 ;
-(BOOL)hasMaxItemsPerRow;
-(unsigned)maxRowCount;
-(void)setMaxRowCount:(unsigned)arg1 ;
-(void)setHasMaxRowCount:(BOOL)arg1 ;
-(BOOL)hasMaxRowCount;
@end

