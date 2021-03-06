/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/XPCServices/TrustedPeersHelper.xpc/TrustedPeersHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeersHelper/CKKSPeer.h>
#import <TrustedPeersHelper/CKKSRemotePeerProtocol.h>
#import <TrustedPeersHelper/NSSecureCoding.h>

@class NSString, _SFECPublicKey, NSSet;

@interface CKKSActualPeer : NSObject <CKKSPeer, CKKSRemotePeerProtocol, NSSecureCoding> {

	NSString* _peerID;
	_SFECPublicKey* _publicEncryptionKey;
	_SFECPublicKey* _publicSigningKey;
	NSSet* _viewList;

}

@property (readonly) NSString * peerID;                                 //@synthesize peerID=_peerID - In the implementation block
@property (readonly) _SFECPublicKey * publicEncryptionKey;              //@synthesize publicEncryptionKey=_publicEncryptionKey - In the implementation block
@property (readonly) _SFECPublicKey * publicSigningKey;                 //@synthesize publicSigningKey=_publicSigningKey - In the implementation block
@property (readonly) NSSet * viewList;                                  //@synthesize viewList=_viewList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)peerID;
-(_SFECPublicKey *)publicEncryptionKey;
-(_SFECPublicKey *)publicSigningKey;
-(BOOL)matchesPeer:(id)arg1 ;
-(NSSet *)viewList;
-(BOOL)shouldHaveView:(id)arg1 ;
-(id)initWithPeerID:(id)arg1 encryptionPublicKey:(id)arg2 signingPublicKey:(id)arg3 viewList:(id)arg4 ;
@end

