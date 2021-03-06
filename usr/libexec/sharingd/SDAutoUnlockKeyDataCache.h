/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <sharingd/NSCopying.h>

@class NSData;

@interface SDAutoUnlockKeyDataCache : PBCodable <NSCopying> {

	NSData* _escrowFirstStep;
	unsigned _escrowSessionID;
	NSData* _tokenFirstStep;
	unsigned _tokenSessionID;
	unsigned _version;
	SCD_Struct_SD4 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                       //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasEscrowFirstStep; 
@property (nonatomic,retain) NSData * escrowFirstStep;               //@synthesize escrowFirstStep=_escrowFirstStep - In the implementation block
@property (nonatomic,readonly) BOOL hasTokenFirstStep; 
@property (nonatomic,retain) NSData * tokenFirstStep;                //@synthesize tokenFirstStep=_tokenFirstStep - In the implementation block
@property (assign,nonatomic) BOOL hasEscrowSessionID; 
@property (assign,nonatomic) unsigned escrowSessionID;               //@synthesize escrowSessionID=_escrowSessionID - In the implementation block
@property (assign,nonatomic) BOOL hasTokenSessionID; 
@property (assign,nonatomic) unsigned tokenSessionID;                //@synthesize tokenSessionID=_tokenSessionID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(NSData *)tokenFirstStep;
-(unsigned)tokenSessionID;
-(BOOL)hasEscrowFirstStep;
-(NSData *)escrowFirstStep;
-(unsigned)escrowSessionID;
-(void)setEscrowFirstStep:(NSData *)arg1 ;
-(void)setTokenFirstStep:(NSData *)arg1 ;
-(BOOL)hasTokenFirstStep;
-(void)setEscrowSessionID:(unsigned)arg1 ;
-(void)setHasEscrowSessionID:(BOOL)arg1 ;
-(BOOL)hasEscrowSessionID;
-(void)setTokenSessionID:(unsigned)arg1 ;
-(void)setHasTokenSessionID:(BOOL)arg1 ;
-(BOOL)hasTokenSessionID;
@end

