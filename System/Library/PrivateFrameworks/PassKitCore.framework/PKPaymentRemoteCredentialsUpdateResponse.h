/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentRemoteCredentialsUpdateResponse : PKPaymentWebServiceResponse {

	NSArray* _credentials;

}

@property (nonatomic,copy,readonly) NSArray * credentials;              //@synthesize credentials=_credentials - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSArray *)credentials;
@end

