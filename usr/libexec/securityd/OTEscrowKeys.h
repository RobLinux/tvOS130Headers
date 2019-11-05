/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <securityd/securityd-Structs.h>
@class _SFECKeyPair, _SFAESKey, NSData, NSString;

@interface OTEscrowKeys : NSObject {

	_SFECKeyPair* _encryptionKey;
	_SFECKeyPair* _signingKey;
	_SFAESKey* _symmetricKey;
	NSData* _secret;
	NSString* _dsid;

}

@property (nonatomic,retain) _SFECKeyPair * encryptionKey;              //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,retain) _SFECKeyPair * signingKey;                 //@synthesize signingKey=_signingKey - In the implementation block
@property (nonatomic,retain) _SFAESKey * symmetricKey;                  //@synthesize symmetricKey=_symmetricKey - In the implementation block
@property (nonatomic,retain) NSData * secret;                           //@synthesize secret=_secret - In the implementation block
@property (nonatomic,retain) NSString * dsid;                           //@synthesize dsid=_dsid - In the implementation block
+(BOOL)storeEscrowedSymmetricKey:(id)arg1 label:(id)arg2 error:(id*)arg3 ;
+(BOOL)storeEscrowedEncryptionKeyPair:(id)arg1 label:(id)arg2 error:(id*)arg3 ;
+(BOOL)storeEscrowedSigningKeyPair:(id)arg1 label:(id)arg2 error:(id*)arg3 ;
+(id)hashEscrowedSigningPublicKey:(id)arg1 ;
+(id)generateEscrowKey:(int)arg1 masterSecret:(id)arg2 dsid:(id)arg3 error:(id*)arg4 ;
+(id)retrieveEscrowKeysFromKeychain:(id)arg1 error:(id*)arg2 ;
+(BOOL)findEscrowKeysForLabel:(id)arg1 foundSigningKey:(id*)arg2 foundEncryptionKey:(id*)arg3 foundSymmetricKey:(id*)arg4 error:(id*)arg5 ;
+(_SecKey*)createSecKey:(id)arg1 ;
+(BOOL)setKeyMaterialInKeychain:(id)arg1 error:(id*)arg2 ;
-(id)initWithSecret:(id)arg1 dsid:(id)arg2 error:(id*)arg3 ;
-(id)initWithSigningKey:(id)arg1 encryptionKey:(id)arg2 symmetricKey:(id)arg3 ;
-(_SFAESKey *)symmetricKey;
-(void)setSymmetricKey:(_SFAESKey *)arg1 ;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(_SFECKeyPair *)signingKey;
-(void)setSigningKey:(_SFECKeyPair *)arg1 ;
-(_SFECKeyPair *)encryptionKey;
-(void)setEncryptionKey:(_SFECKeyPair *)arg1 ;
-(NSData *)secret;
-(void)setSecret:(NSData *)arg1 ;
@end

