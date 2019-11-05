/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:44 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <locationd/NSCopying.h>

@class NSMutableArray;

@interface TRANSITPbRegionPreloadManifest : PBCodable <NSCopying> {

	double _generationTimeSecs;
	int _expirationAgeSecs;
	NSMutableArray* _markets;
	int _version;
	SCD_Struct_AL5 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version;                             //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasGenerationTimeSecs; 
@property (assign,nonatomic) double generationTimeSecs;               //@synthesize generationTimeSecs=_generationTimeSecs - In the implementation block
@property (assign,nonatomic) BOOL hasExpirationAgeSecs; 
@property (assign,nonatomic) int expirationAgeSecs;                   //@synthesize expirationAgeSecs=_expirationAgeSecs - In the implementation block
@property (nonatomic,retain) NSMutableArray * markets;                //@synthesize markets=_markets - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(int)version;
-(void)setVersion:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(NSMutableArray *)markets;
-(void)setGenerationTimeSecs:(double)arg1 ;
-(void)setHasGenerationTimeSecs:(BOOL)arg1 ;
-(BOOL)hasGenerationTimeSecs;
-(void)setExpirationAgeSecs:(int)arg1 ;
-(void)setHasExpirationAgeSecs:(BOOL)arg1 ;
-(BOOL)hasExpirationAgeSecs;
-(double)generationTimeSecs;
-(int)expirationAgeSecs;
-(void)setMarkets:(NSMutableArray *)arg1 ;
-(void)addMarkets:(id)arg1 ;
-(unsigned long long)marketsCount;
-(void)clearMarkets;
-(id)marketsAtIndex:(unsigned long long)arg1 ;
@end

