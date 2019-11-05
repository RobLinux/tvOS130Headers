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

@class NSData;

@interface OTAuthenticatedCiphertext : PBCodable <NSCopying> {

	NSData* _authenticationCode;
	NSData* _ciphertext;
	NSData* _initializationVector;

}

@property (nonatomic,retain) NSData * ciphertext;                        //@synthesize ciphertext=_ciphertext - In the implementation block
@property (nonatomic,retain) NSData * authenticationCode;                //@synthesize authenticationCode=_authenticationCode - In the implementation block
@property (nonatomic,retain) NSData * initializationVector;              //@synthesize initializationVector=_initializationVector - In the implementation block
+(id)fromSFAuthenticatedCiphertext:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)initializationVector;
-(void)setInitializationVector:(NSData *)arg1 ;
-(NSData *)ciphertext;
-(NSData *)authenticationCode;
-(void)setCiphertext:(NSData *)arg1 ;
-(void)setAuthenticationCode:(NSData *)arg1 ;
-(id)asSFAuthenticatedCiphertext;
@end

