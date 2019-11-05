/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentTransactionDetailAmountLineItem.h>

@class NSString;

@interface PKPaymentTransactionDetailAmountLineItemForeignExchange : NSObject <PKPaymentTransactionDetailAmountLineItem> {

	NSString* _label;
	NSString* _value;
	BOOL _hasTrailingLineSeperator;

}

@property (assign,nonatomic) BOOL hasTrailingLineSeperator;                  //@synthesize hasTrailingLineSeperator=_hasTrailingLineSeperator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long lineItemType; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) BOOL isEmphasized; 
-(NSString *)value;
-(NSString *)label;
-(BOOL)isEmphasized;
-(void)setHasTrailingLineSeperator:(BOOL)arg1 ;
-(BOOL)hasTrailingLineSeperator;
-(unsigned long long)lineItemType;
-(id)initWithForeignExchangeInformation:(id)arg1 type:(unsigned long long)arg2 ;
@end

