/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKPaymentPass;

@interface PKPaymentVerificationOptionsRequest : PKPaymentWebServiceRequest {

	NSString* _stepIdentifier;
	PKPaymentPass* _pass;

}

@property (nonatomic,copy) NSString * stepIdentifier;              //@synthesize stepIdentifier=_stepIdentifier - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                 //@synthesize pass=_pass - In the implementation block
+(id)requestWithPass:(id)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(NSString *)stepIdentifier;
-(void)setStepIdentifier:(NSString *)arg1 ;
@end

