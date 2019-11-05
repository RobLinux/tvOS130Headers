/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class NSDate, NSTimeZone;

@interface PKPaymentDateDataItem : PKPaymentDataItem {

	NSDate* _paymentDate;
	NSTimeZone* _paymentTimeZone;
	long long _paymentFrequency;

}

@property (nonatomic,retain) NSDate * paymentDate;                      //@synthesize paymentDate=_paymentDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * paymentTimeZone;              //@synthesize paymentTimeZone=_paymentTimeZone - In the implementation block
@property (assign,nonatomic) long long paymentFrequency;                //@synthesize paymentFrequency=_paymentFrequency - In the implementation block
+(long long)dataType;
-(id)initWithModel:(id)arg1 ;
-(NSDate *)paymentDate;
-(void)setPaymentDate:(NSDate *)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(void)setPaymentFrequency:(long long)arg1 ;
-(void)setPaymentTimeZone:(NSTimeZone *)arg1 ;
-(long long)paymentFrequency;
-(NSTimeZone *)paymentTimeZone;
@end

