/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreServices/StoreServices-Structs.h>
@class NSString, NSDate;

@interface ISPurchaseReceipt : NSObject {

	NSString* _cancellationReason;
	NSDate* _expirationDate;
	NSDate* _receiptCreationDate;
	NSDate* _renewalDate;

}

@property (readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (readonly) BOOL isVPPLicensed; 
@property (readonly) BOOL isRevoked; 
+(id)receiptWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isRevoked;
-(BOOL)isVPPLicensed;
-(BOOL)_decodeReceiptData:(id)arg1 toDecodedMessage:(inout SecCmsMessageStr*)arg2 ;
-(BOOL)_parseReceiptFromMessage:(SecCmsMessageStrRef)arg1 ;
-(SecCmsSignedDataStrRef)_extractSignedDataFromMessage:(SecCmsMessageStrRef)arg1 ;
-(long long)_verifySignatureForSignedData:(SecCmsSignedDataStrRef)arg1 onDate:(id)arg2 ;
-(BOOL)_checkIfCertificate:(SecCertificateRef)arg1 containsOID:(CFStringRef)arg2 ;
-(void)_parseTokens:(id)arg1 ;
-(CFArrayRef)_copyCertificatesFromSignedData:(SecCmsSignedDataStrRef)arg1 ;
-(BOOL)_checkArray:(CFArrayRef)arg1 containsCertificateWithOID:(CFStringRef)arg2 ;
-(BOOL)_setPoliciesForTrust:(SecTrustRef)arg1 ;
-(BOOL)_anchorTrust:(SecTrustRef)arg1 toRootCertificateIn:(CFArrayRef)arg2 ;
@end

