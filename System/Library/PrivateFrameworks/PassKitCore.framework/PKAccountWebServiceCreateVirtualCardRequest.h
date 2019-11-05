/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>
#import <PassKitCore/NSSecureCoding.h>

@class NSString, NSURL, PKAccountVirtualCardEncryptionFields;

@interface PKAccountWebServiceCreateVirtualCardRequest : PKAccountWebServiceRequest <NSSecureCoding> {

	NSString* _accountIdentifier;
	NSURL* _baseURL;
	long long _type;
	PKAccountVirtualCardEncryptionFields* _encryptionFields;

}

@property (nonatomic,copy) NSString * accountIdentifier;                                           //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                      //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) long long type;                                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PKAccountVirtualCardEncryptionFields * encryptionFields;              //@synthesize encryptionFields=_encryptionFields - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSURL *)baseURL;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(PKAccountVirtualCardEncryptionFields *)encryptionFields;
-(void)setEncryptionFields:(PKAccountVirtualCardEncryptionFields *)arg1 ;
@end

