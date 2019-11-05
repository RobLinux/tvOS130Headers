/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKWrappedPayment, NSData;

@interface PKPaymentAuthorizationRewrapStateParam : PKPaymentAuthorizationStateParam {

	PKWrappedPayment* _wrappedPayment;
	NSData* _nonceData;
	NSData* _credential;

}

@property (nonatomic,retain) PKWrappedPayment * wrappedPayment;              //@synthesize wrappedPayment=_wrappedPayment - In the implementation block
@property (nonatomic,retain) NSData * nonceData;                             //@synthesize nonceData=_nonceData - In the implementation block
@property (nonatomic,retain) NSData * credential;                            //@synthesize credential=_credential - In the implementation block
+(id)paramWithWrappedPayment:(id)arg1 nonce:(id)arg2 credential:(id)arg3 ;
-(id)description;
-(NSData *)credential;
-(void)setCredential:(NSData *)arg1 ;
-(PKWrappedPayment *)wrappedPayment;
-(void)setWrappedPayment:(PKWrappedPayment *)arg1 ;
-(NSData *)nonceData;
-(void)setNonceData:(NSData *)arg1 ;
@end
