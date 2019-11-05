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

@interface SDUnlockStashKeyExchangeResponse : PBCodable <NSCopying> {

	unsigned _errorCode;
	NSData* _key;
	unsigned _sessionID;
	unsigned _version;
	SCD_Struct_SD4 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSData * key;                    //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;              //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)key;
-(unsigned)version;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(void)setKey:(NSData *)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)errorCode;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(BOOL)hasKey;
@end

