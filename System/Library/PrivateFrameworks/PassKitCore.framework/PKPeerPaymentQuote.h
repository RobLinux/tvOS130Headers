/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSString, NSArray, NSURL, NSDecimalNumber, NSData, NSDate, PKPeerPaymentRecipient, PKCurrencyAmount;

@interface PKPeerPaymentQuote : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSArray* _items;
	NSString* _disclosureText;
	NSURL* _disclosureURL;
	NSDecimalNumber* _currentBalance;
	NSString* _currentBalanceCurrency;
	NSData* _appleHash;
	NSData* _externalHash;
	NSDecimalNumber* _totalReceiveAmount;
	NSString* _totalReceiveAmountCurrency;
	NSDecimalNumber* _totalFees;
	NSString* _totalFeesCurrency;
	NSDate* _validUntil;
	unsigned long long _riskLevel;
	PKPeerPaymentRecipient* _recipient;
	NSString* _bankName;
	NSString* _routingNumber;
	NSString* _accountNumber;

}

@property (nonatomic,readonly) PKCurrencyAmount * calculatedTotalAmount; 
@property (nonatomic,readonly) double validityDuration; 
@property (nonatomic,copy,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                         //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSString * disclosureText;                          //@synthesize disclosureText=_disclosureText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * disclosureURL;                              //@synthesize disclosureURL=_disclosureURL - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * currentBalance;                   //@synthesize currentBalance=_currentBalance - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentBalanceCurrency;                  //@synthesize currentBalanceCurrency=_currentBalanceCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSData * appleHash;                                 //@synthesize appleHash=_appleHash - In the implementation block
@property (nonatomic,copy,readonly) NSData * externalHash;                              //@synthesize externalHash=_externalHash - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * totalReceiveAmount;               //@synthesize totalReceiveAmount=_totalReceiveAmount - In the implementation block
@property (nonatomic,copy,readonly) NSString * totalReceiveAmountCurrency;              //@synthesize totalReceiveAmountCurrency=_totalReceiveAmountCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * totalFees;                        //@synthesize totalFees=_totalFees - In the implementation block
@property (nonatomic,copy,readonly) NSString * totalFeesCurrency;                       //@synthesize totalFeesCurrency=_totalFeesCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSDate * validUntil;                                //@synthesize validUntil=_validUntil - In the implementation block
@property (nonatomic,readonly) unsigned long long riskLevel;                            //@synthesize riskLevel=_riskLevel - In the implementation block
@property (nonatomic,retain) PKPeerPaymentRecipient * recipient;                        //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,copy) NSString * bankName;                                         //@synthesize bankName=_bankName - In the implementation block
@property (nonatomic,copy) NSString * routingNumber;                                    //@synthesize routingNumber=_routingNumber - In the implementation block
@property (nonatomic,copy) NSString * accountNumber;                                    //@synthesize accountNumber=_accountNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSArray *)items;
-(void)setRecipient:(PKPeerPaymentRecipient *)arg1 ;
-(BOOL)hasExpired;
-(NSString *)accountNumber;
-(void)setAccountNumber:(NSString *)arg1 ;
-(PKPeerPaymentRecipient *)recipient;
-(double)validityDuration;
-(NSDate *)validUntil;
-(NSDecimalNumber *)currentBalance;
-(NSString *)routingNumber;
-(void)setRoutingNumber:(NSString *)arg1 ;
-(NSString *)bankName;
-(id)firstQuoteItemOfType:(unsigned long long)arg1 ;
-(NSDecimalNumber *)totalReceiveAmount;
-(NSString *)totalReceiveAmountCurrency;
-(void)setBankName:(NSString *)arg1 ;
-(NSDecimalNumber *)totalFees;
-(PKCurrencyAmount *)calculatedTotalAmount;
-(NSString *)disclosureText;
-(NSURL *)disclosureURL;
-(NSString *)currentBalanceCurrency;
-(NSData *)appleHash;
-(NSData *)externalHash;
-(NSString *)totalFeesCurrency;
-(unsigned long long)riskLevel;
@end

