/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOWiFiQualitySearchResultTile : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	NSMutableArray* _ess;
	NSString* _etag;
	unsigned long long _tileKey;
	struct {
		unsigned has_tileKey : 1;
		unsigned read_ess : 1;
		unsigned read_etag : 1;
		unsigned wrote_ess : 1;
		unsigned wrote_etag : 1;
		unsigned wrote_tileKey : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTileKey; 
@property (assign,nonatomic) unsigned long long tileKey; 
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag; 
@property (nonatomic,retain) NSMutableArray * ess; 
+(BOOL)isValid:(id)arg1 ;
+(Class)essType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)etag;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)tileKey;
-(NSMutableArray *)ess;
-(void)setEss:(NSMutableArray *)arg1 ;
-(void)_readEtag;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(void)_readEss;
-(void)_addNoFlagsEss:(id)arg1 ;
-(unsigned long long)essCount;
-(void)clearEss;
-(id)essAtIndex:(unsigned long long)arg1 ;
-(void)addEss:(id)arg1 ;
-(void)setTileKey:(unsigned long long)arg1 ;
-(void)setHasTileKey:(BOOL)arg1 ;
-(BOOL)hasTileKey;
@end
