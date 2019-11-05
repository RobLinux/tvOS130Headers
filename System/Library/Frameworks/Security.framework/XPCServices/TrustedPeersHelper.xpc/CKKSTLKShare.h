/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/XPCServices/TrustedPeersHelper.xpc/TrustedPeersHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeersHelper/TrustedPeersHelper-Structs.h>
#import <TrustedPeersHelper/NSCopying.h>
#import <TrustedPeersHelper/NSSecureCoding.h>

@class NSString, NSData, CKRecordZoneID;

@interface CKKSTLKShare : NSObject <NSCopying, NSSecureCoding> {

	long long _curve;
	unsigned long long _version;
	NSString* _tlkUUID;
	NSString* _receiverPeerID;
	NSData* _receiverPublicEncryptionKeySPKI;
	NSString* _senderPeerID;
	long long _epoch;
	long long _poisoned;
	NSData* _wrappedTLK;
	NSData* _signature;
	CKRecordZoneID* _zoneID;

}

@property (assign) long long curve;                                       //@synthesize curve=_curve - In the implementation block
@property (assign) unsigned long long version;                            //@synthesize version=_version - In the implementation block
@property (retain) NSString * tlkUUID;                                    //@synthesize tlkUUID=_tlkUUID - In the implementation block
@property (retain) NSString * receiverPeerID;                             //@synthesize receiverPeerID=_receiverPeerID - In the implementation block
@property (retain) NSData * receiverPublicEncryptionKeySPKI;              //@synthesize receiverPublicEncryptionKeySPKI=_receiverPublicEncryptionKeySPKI - In the implementation block
@property (retain) NSString * senderPeerID;                               //@synthesize senderPeerID=_senderPeerID - In the implementation block
@property (assign) long long epoch;                                       //@synthesize epoch=_epoch - In the implementation block
@property (assign) long long poisoned;                                    //@synthesize poisoned=_poisoned - In the implementation block
@property (retain) NSData * wrappedTLK;                                   //@synthesize wrappedTLK=_wrappedTLK - In the implementation block
@property (retain) NSData * signature;                                    //@synthesize signature=_signature - In the implementation block
@property (retain) CKRecordZoneID * zoneID;                               //@synthesize zoneID=_zoneID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)share:(id)arg1 as:(id)arg2 to:(id)arg3 epoch:(long long)arg4 poisoned:(long long)arg5 error:(id*)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(long long)epoch;
-(void)setEpoch:(long long)arg1 ;
-(NSData *)signature;
-(CKRecordZoneID *)zoneID;
-(void)setSignature:(NSData *)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(long long)curve;
-(void)setCurve:(long long)arg1 ;
-(NSString *)tlkUUID;
-(long long)poisoned;
-(NSString *)receiverPeerID;
-(NSData *)receiverPublicEncryptionKeySPKI;
-(NSString *)senderPeerID;
-(NSData *)wrappedTLK;
-(id)recoverTLK:(id)arg1 trustedPeers:(id)arg2 ckrecord:(id)arg3 error:(id*)arg4 ;
-(id)init:(id)arg1 sender:(id)arg2 receiver:(id)arg3 curve:(long long)arg4 version:(unsigned long long)arg5 epoch:(long long)arg6 poisoned:(long long)arg7 zoneID:(id)arg8 ;
-(id)initForKey:(id)arg1 senderPeerID:(id)arg2 recieverPeerID:(id)arg3 receiverEncPublicKeySPKI:(id)arg4 curve:(long long)arg5 version:(unsigned long long)arg6 epoch:(long long)arg7 poisoned:(long long)arg8 wrappedKey:(id)arg9 signature:(id)arg10 zoneID:(id)arg11 ;
-(id)wrap:(id)arg1 publicKey:(id)arg2 error:(id*)arg3 ;
-(id)unwrapUsing:(id)arg1 error:(id*)arg2 ;
-(id)dataForSigning:(id)arg1 ;
-(id)signRecord:(id)arg1 ckrecord:(id)arg2 error:(id*)arg3 ;
-(BOOL)verifySignature:(id)arg1 verifyingPeer:(id)arg2 ckrecord:(id)arg3 error:(id*)arg4 ;
-(BOOL)signatureVerifiesWithPeerSet:(id)arg1 ckrecord:(id)arg2 error:(id*)arg3 ;
-(void)setTlkUUID:(NSString *)arg1 ;
-(void)setReceiverPeerID:(NSString *)arg1 ;
-(void)setReceiverPublicEncryptionKeySPKI:(NSData *)arg1 ;
-(void)setSenderPeerID:(NSString *)arg1 ;
-(void)setPoisoned:(long long)arg1 ;
-(void)setWrappedTLK:(NSData *)arg1 ;
@end

