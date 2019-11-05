/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/XPCServices/TrustedPeersHelper.xpc/TrustedPeersHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeersHelper/CKKSSelfPeer.h>

@class _SFECKeyPair, NSString, _SFECPublicKey;

@interface TrustedPeersHelper.OctagonSelfPeerKeys : NSObject <CKKSSelfPeer> {

	 encryptionKey;
	 signingKey;
	 peerID;
	 publicEncryptionKey;
	 publicSigningKey;
	 encryptionVerificationKey;
	 signingVerificationKey;

}

@property (retain,nonatomic) _SFECKeyPair * encryptionKey; 
@property (retain,nonatomic) _SFECKeyPair * signingKey; 
@property (copy,nonatomic) NSString * peerID; 
@property (retain,nonatomic) _SFECPublicKey * publicEncryptionKey; 
@property (retain,nonatomic) _SFECPublicKey * publicSigningKey; 
@property (readonly,nonatomic) NSString * description; 
-(NSString *)description;
-(id)init;
-(NSString *)peerID;
-(_SFECKeyPair *)signingKey;
-(void)setSigningKey:(_SFECKeyPair *)arg1 ;
-(_SFECKeyPair *)encryptionKey;
-(void)setEncryptionKey:(_SFECKeyPair *)arg1 ;
-(void)setPeerID:(NSString *)arg1 ;
-(_SFECPublicKey *)publicEncryptionKey;
-(void)setPublicEncryptionKey:(_SFECPublicKey *)arg1 ;
-(_SFECPublicKey *)publicSigningKey;
-(void)setPublicSigningKey:(_SFECPublicKey *)arg1 ;
-(BOOL)matchesPeer:(id)arg1 ;
@end
