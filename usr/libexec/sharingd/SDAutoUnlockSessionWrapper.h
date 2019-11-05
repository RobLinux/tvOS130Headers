/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <sharingd/NSCopying.h>

@class NSData;

@interface SDAutoUnlockSessionWrapper : PBCodable <NSCopying> {

	unsigned _aksSessionID;
	NSData* _authTag;
	unsigned _awdlCacheID;
	NSData* _encryptedPayload;
	unsigned _messageType;
	NSData* _nonce;
	NSData* _payload;
	NSData* _senderID;
	NSData* _sessionID;
	unsigned _version;
	BOOL _useProxy;
	SCD_Struct_SD6 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionID; 
@property (nonatomic,retain) NSData * sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL hasPayload; 
@property (nonatomic,retain) NSData * payload;                        //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) BOOL hasMessageType; 
@property (assign,nonatomic) unsigned messageType;                    //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,readonly) BOOL hasSenderID; 
@property (nonatomic,retain) NSData * senderID;                       //@synthesize senderID=_senderID - In the implementation block
@property (assign,nonatomic) BOOL hasUseProxy; 
@property (assign,nonatomic) BOOL useProxy;                           //@synthesize useProxy=_useProxy - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlCacheID; 
@property (assign,nonatomic) unsigned awdlCacheID;                    //@synthesize awdlCacheID=_awdlCacheID - In the implementation block
@property (assign,nonatomic) BOOL hasAksSessionID; 
@property (assign,nonatomic) unsigned aksSessionID;                   //@synthesize aksSessionID=_aksSessionID - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedPayload; 
@property (nonatomic,retain) NSData * encryptedPayload;               //@synthesize encryptedPayload=_encryptedPayload - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthTag; 
@property (nonatomic,retain) NSData * authTag;                        //@synthesize authTag=_authTag - In the implementation block
@property (nonatomic,readonly) BOOL hasNonce; 
@property (nonatomic,retain) NSData * nonce;                          //@synthesize nonce=_nonce - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)version;
-(NSData *)sessionID;
-(void)setSessionID:(NSData *)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)payload;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)senderID;
-(unsigned)messageType;
-(void)setMessageType:(unsigned)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(void)setHasMessageType:(BOOL)arg1 ;
-(BOOL)hasMessageType;
-(void)setSenderID:(NSData *)arg1 ;
-(BOOL)hasPayload;
-(void)setEncryptedPayload:(NSData *)arg1 ;
-(NSData *)encryptedPayload;
-(BOOL)hasSenderID;
-(BOOL)hasNonce;
-(NSData *)authTag;
-(BOOL)useProxy;
-(BOOL)hasAwdlCacheID;
-(unsigned)awdlCacheID;
-(void)setAwdlCacheID:(unsigned)arg1 ;
-(unsigned)aksSessionID;
-(void)setAksSessionID:(unsigned)arg1 ;
-(void)setUseProxy:(BOOL)arg1 ;
-(BOOL)hasEncryptedPayload;
-(void)setAuthTag:(NSData *)arg1 ;
-(void)setHasUseProxy:(BOOL)arg1 ;
-(BOOL)hasUseProxy;
-(void)setHasAwdlCacheID:(BOOL)arg1 ;
-(void)setHasAksSessionID:(BOOL)arg1 ;
-(BOOL)hasAksSessionID;
-(BOOL)hasAuthTag;
@end

