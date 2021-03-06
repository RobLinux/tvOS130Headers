/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/securityd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <securityd/NSCopying.h>

@class NSData, NSString;

@interface SecDbKeychainSerializedSecretData : PBCodable <NSCopying> {

	NSData* _ciphertext;
	NSData* _secDbBackupWrappedItemKey;
	NSString* _tamperCheck;
	NSData* _wrappedKey;

}

@property (nonatomic,retain) NSData * ciphertext;                              //@synthesize ciphertext=_ciphertext - In the implementation block
@property (nonatomic,retain) NSData * wrappedKey;                              //@synthesize wrappedKey=_wrappedKey - In the implementation block
@property (nonatomic,retain) NSString * tamperCheck;                           //@synthesize tamperCheck=_tamperCheck - In the implementation block
@property (nonatomic,readonly) BOOL hasSecDbBackupWrappedItemKey; 
@property (nonatomic,retain) NSData * secDbBackupWrappedItemKey;               //@synthesize secDbBackupWrappedItemKey=_secDbBackupWrappedItemKey - In the implementation block
-(NSString *)tamperCheck;
-(void)setTamperCheck:(NSString *)arg1 ;
-(void)setSecDbBackupWrappedItemKey:(NSData *)arg1 ;
-(BOOL)hasSecDbBackupWrappedItemKey;
-(NSData *)secDbBackupWrappedItemKey;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)wrappedKey;
-(void)setWrappedKey:(NSData *)arg1 ;
-(NSData *)ciphertext;
-(void)setCiphertext:(NSData *)arg1 ;
@end

