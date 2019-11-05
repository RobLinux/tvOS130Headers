/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/XPCServices/TrustedPeersHelper.xpc/TrustedPeersHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeersHelper/NSSecureCoding.h>

@class CKKSKeychainBackedKey;

@interface CKKSKeychainBackedKeySet : NSObject <NSSecureCoding> {

	BOOL _newUpload;
	CKKSKeychainBackedKey* _tlk;
	CKKSKeychainBackedKey* _classA;
	CKKSKeychainBackedKey* _classC;

}

@property (retain) CKKSKeychainBackedKey * tlk;                 //@synthesize tlk=_tlk - In the implementation block
@property (retain) CKKSKeychainBackedKey * classA;              //@synthesize classA=_classA - In the implementation block
@property (retain) CKKSKeychainBackedKey * classC;              //@synthesize classC=_classC - In the implementation block
@property (assign) BOOL newUpload;                              //@synthesize newUpload=_newUpload - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKKSKeychainBackedKey *)tlk;
-(CKKSKeychainBackedKey *)classA;
-(CKKSKeychainBackedKey *)classC;
-(BOOL)newUpload;
-(id)initWithTLK:(id)arg1 classA:(id)arg2 classC:(id)arg3 newUpload:(BOOL)arg4 ;
-(void)setTlk:(CKKSKeychainBackedKey *)arg1 ;
-(void)setClassA:(CKKSKeychainBackedKey *)arg1 ;
-(void)setClassC:(CKKSKeychainBackedKey *)arg1 ;
-(void)setNewUpload:(BOOL)arg1 ;
@end

