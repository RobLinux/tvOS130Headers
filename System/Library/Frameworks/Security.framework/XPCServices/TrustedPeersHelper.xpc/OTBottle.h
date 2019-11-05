/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/XPCServices/TrustedPeersHelper.xpc/TrustedPeersHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeersHelper/TrustedPeersHelper-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <TrustedPeersHelper/NSCopying.h>

@class NSString, OTAuthenticatedCiphertext, NSData;

@interface OTBottle : PBCodable <NSCopying> {

	NSString* _bottleID;
	OTAuthenticatedCiphertext* _contents;
	NSData* _escrowedEncryptionSPKI;
	NSData* _escrowedSigningSPKI;
	NSData* _peerEncryptionSPKI;
	NSString* _peerID;
	NSData* _peerSigningSPKI;
	NSData* _reserved3;
	NSData* _reserved4;
	NSData* _reserved5;
	NSData* _reserved6;
	NSData* _reserved7;

}

@property (nonatomic,readonly) BOOL hasPeerID; 
@property (nonatomic,retain) NSString * peerID;                                 //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,readonly) BOOL hasBottleID; 
@property (nonatomic,retain) NSString * bottleID;                               //@synthesize bottleID=_bottleID - In the implementation block
@property (nonatomic,readonly) BOOL hasReserved3; 
@property (nonatomic,retain) NSData * reserved3;                                //@synthesize reserved3=_reserved3 - In the implementation block
@property (nonatomic,readonly) BOOL hasReserved4; 
@property (nonatomic,retain) NSData * reserved4;                                //@synthesize reserved4=_reserved4 - In the implementation block
@property (nonatomic,readonly) BOOL hasReserved5; 
@property (nonatomic,retain) NSData * reserved5;                                //@synthesize reserved5=_reserved5 - In the implementation block
@property (nonatomic,readonly) BOOL hasReserved6; 
@property (nonatomic,retain) NSData * reserved6;                                //@synthesize reserved6=_reserved6 - In the implementation block
@property (nonatomic,readonly) BOOL hasEscrowedSigningSPKI; 
@property (nonatomic,retain) NSData * escrowedSigningSPKI;                      //@synthesize escrowedSigningSPKI=_escrowedSigningSPKI - In the implementation block
@property (nonatomic,readonly) BOOL hasEscrowedEncryptionSPKI; 
@property (nonatomic,retain) NSData * escrowedEncryptionSPKI;                   //@synthesize escrowedEncryptionSPKI=_escrowedEncryptionSPKI - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerSigningSPKI; 
@property (nonatomic,retain) NSData * peerSigningSPKI;                          //@synthesize peerSigningSPKI=_peerSigningSPKI - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerEncryptionSPKI; 
@property (nonatomic,retain) NSData * peerEncryptionSPKI;                       //@synthesize peerEncryptionSPKI=_peerEncryptionSPKI - In the implementation block
@property (nonatomic,readonly) BOOL hasReserved7; 
@property (nonatomic,retain) NSData * reserved7;                                //@synthesize reserved7=_reserved7 - In the implementation block
@property (nonatomic,readonly) BOOL hasContents; 
@property (nonatomic,retain) OTAuthenticatedCiphertext * contents;              //@synthesize contents=_contents - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(OTAuthenticatedCiphertext *)contents;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setContents:(OTAuthenticatedCiphertext *)arg1 ;
-(NSString *)peerID;
-(BOOL)hasContents;
-(BOOL)hasPeerID;
-(void)setPeerID:(NSString *)arg1 ;
-(NSString *)bottleID;
-(void)setBottleID:(NSString *)arg1 ;
-(void)setEscrowedSigningSPKI:(NSData *)arg1 ;
-(NSData *)escrowedSigningSPKI;
-(NSData *)peerSigningSPKI;
-(NSData *)peerEncryptionSPKI;
-(void)setEscrowedEncryptionSPKI:(NSData *)arg1 ;
-(void)setPeerSigningSPKI:(NSData *)arg1 ;
-(void)setPeerEncryptionSPKI:(NSData *)arg1 ;
-(BOOL)hasBottleID;
-(BOOL)hasReserved3;
-(BOOL)hasReserved4;
-(BOOL)hasReserved5;
-(BOOL)hasReserved6;
-(BOOL)hasEscrowedSigningSPKI;
-(BOOL)hasEscrowedEncryptionSPKI;
-(BOOL)hasPeerSigningSPKI;
-(BOOL)hasPeerEncryptionSPKI;
-(BOOL)hasReserved7;
-(NSData *)reserved3;
-(void)setReserved3:(NSData *)arg1 ;
-(NSData *)reserved4;
-(void)setReserved4:(NSData *)arg1 ;
-(NSData *)reserved5;
-(void)setReserved5:(NSData *)arg1 ;
-(NSData *)reserved6;
-(void)setReserved6:(NSData *)arg1 ;
-(NSData *)escrowedEncryptionSPKI;
-(NSData *)reserved7;
-(void)setReserved7:(NSData *)arg1 ;
@end

