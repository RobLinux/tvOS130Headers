/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentPreference.h>

@class NSString;

@interface PKPaymentPreferenceShippingMethod : PKPaymentPreference {

	NSString* _currency;

}

@property (nonatomic,copy) NSString * currency;              //@synthesize currency=_currency - In the implementation block
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(BOOL)supportsDeletion;
@end
