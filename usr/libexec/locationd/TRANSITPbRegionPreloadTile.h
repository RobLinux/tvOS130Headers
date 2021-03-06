/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:43 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <locationd/NSCopying.h>

@interface TRANSITPbRegionPreloadTile : PBCodable <NSCopying> {

	unsigned long long _secKey;
	unsigned _tileType;
	unsigned _tileX;
	unsigned _tileY;
	BOOL _isAllowOverCellular;
	SCD_Struct_AL1 _has;

}

@property (assign,nonatomic) BOOL hasTileType; 
@property (assign,nonatomic) unsigned tileType;                        //@synthesize tileType=_tileType - In the implementation block
@property (assign,nonatomic) BOOL hasTileX; 
@property (assign,nonatomic) unsigned tileX;                           //@synthesize tileX=_tileX - In the implementation block
@property (assign,nonatomic) BOOL hasTileY; 
@property (assign,nonatomic) unsigned tileY;                           //@synthesize tileY=_tileY - In the implementation block
@property (assign,nonatomic) BOOL hasIsAllowOverCellular; 
@property (assign,nonatomic) BOOL isAllowOverCellular;                 //@synthesize isAllowOverCellular=_isAllowOverCellular - In the implementation block
@property (assign,nonatomic) BOOL hasSecKey; 
@property (assign,nonatomic) unsigned long long secKey;                //@synthesize secKey=_secKey - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)tileType;
-(unsigned)tileX;
-(unsigned)tileY;
-(unsigned long long)secKey;
-(void)setTileType:(unsigned)arg1 ;
-(void)setHasTileType:(BOOL)arg1 ;
-(BOOL)hasTileType;
-(void)setIsAllowOverCellular:(BOOL)arg1 ;
-(void)setHasIsAllowOverCellular:(BOOL)arg1 ;
-(BOOL)hasIsAllowOverCellular;
-(void)setSecKey:(unsigned long long)arg1 ;
-(void)setHasSecKey:(BOOL)arg1 ;
-(BOOL)hasSecKey;
-(BOOL)isAllowOverCellular;
-(void)setTileX:(unsigned)arg1 ;
-(void)setHasTileX:(BOOL)arg1 ;
-(BOOL)hasTileX;
-(void)setTileY:(unsigned)arg1 ;
-(void)setHasTileY:(BOOL)arg1 ;
-(BOOL)hasTileY;
@end

