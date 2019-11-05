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

@class PBUnknownFields, GEONameInfo;

@interface GEORouteName : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEONameInfo* _nameInfo;
	int _lastZilchStitchedIndex;
	SCD_Struct_GE95 _flags;

}

@property (nonatomic,readonly) BOOL hasNameInfo; 
@property (nonatomic,retain) GEONameInfo * nameInfo; 
@property (assign,nonatomic) BOOL hasLastZilchStitchedIndex; 
@property (assign,nonatomic) int lastZilchStitchedIndex; 
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
-(GEONameInfo *)nameInfo;
-(void)setNameInfo:(GEONameInfo *)arg1 ;
-(BOOL)hasNameInfo;
-(int)lastZilchStitchedIndex;
-(void)setLastZilchStitchedIndex:(int)arg1 ;
-(void)setHasLastZilchStitchedIndex:(BOOL)arg1 ;
-(BOOL)hasLastZilchStitchedIndex;
@end
