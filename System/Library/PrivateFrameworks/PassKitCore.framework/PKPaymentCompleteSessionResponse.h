/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentRewrapResponseBase.h>

@class NSString;

@interface PKPaymentCompleteSessionResponse : PKPaymentRewrapResponseBase {

	NSString* _retryNonce;

}

@property (nonatomic,copy,readonly) NSString * retryNonce;              //@synthesize retryNonce=_retryNonce - In the implementation block
-(NSString *)retryNonce;
@end

