/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OTBottledPeer, NSData;

@interface OTBottledPeerSigned : NSObject {

	OTBottledPeer* _bp;
	NSData* _signatureUsingEscrowKey;
	NSData* _signatureUsingPeerKey;
	NSData* _escrowSigningSPKI;
	NSData* _escrowSigningPublicKey;

}

@property (nonatomic,retain) OTBottledPeer * bp;                            //@synthesize bp=_bp - In the implementation block
@property (nonatomic,retain) NSData * signatureUsingEscrowKey;              //@synthesize signatureUsingEscrowKey=_signatureUsingEscrowKey - In the implementation block
@property (nonatomic,retain) NSData * signatureUsingPeerKey;                //@synthesize signatureUsingPeerKey=_signatureUsingPeerKey - In the implementation block
@property (nonatomic,retain) NSData * escrowSigningPublicKey;               //@synthesize escrowSigningPublicKey=_escrowSigningPublicKey - In the implementation block
@property (nonatomic,readonly) NSData * escrowSigningSPKI;                  //@synthesize escrowSigningSPKI=_escrowSigningSPKI - In the implementation block
+(id)signingOperation;
+(BOOL)verifyBottleSignature:(id)arg1 signature:(id)arg2 key:(id)arg3 error:(id*)arg4 ;
-(OTBottledPeer *)bp;
-(id)initWithBottledPeer:(id)arg1 escrowedSigningKey:(id)arg2 peerSigningKey:(id)arg3 error:(id*)arg4 ;
-(id)escrowSigningPublicKeyHash;
-(id)initWithBottledPeer:(id)arg1 signatureUsingEscrow:(id)arg2 signatureUsingPeerKey:(id)arg3 escrowedSigningPubKey:(id)arg4 error:(id*)arg5 ;
-(id)initWithBottledPeerRecord:(id)arg1 escrowKeys:(id)arg2 error:(id*)arg3 ;
-(id)asRecord:(id)arg1 ;
-(void)setBp:(OTBottledPeer *)arg1 ;
-(NSData *)escrowSigningSPKI;
-(NSData *)escrowSigningPublicKey;
-(void)setEscrowSigningPublicKey:(NSData *)arg1 ;
-(NSData *)signatureUsingEscrowKey;
-(NSData *)signatureUsingPeerKey;
-(void)setSignatureUsingEscrowKey:(NSData *)arg1 ;
-(void)setSignatureUsingPeerKey:(NSData *)arg1 ;
@end

