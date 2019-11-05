/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/NSCopying.h>
#import <PassKitCore/NSSecureCoding.h>

@class NSString, NSDecimalNumber, NSDate, PKCurrencyAmount;

@interface PKPaymentBalance : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isPrimary;
	NSString* _identifier;
	NSDecimalNumber* _value;
	NSString* _currencyCode;
	long long _exponent;
	NSString* _localizedTitle;
	NSString* _localizedDescription;
	NSDate* _lastUpdateDate;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * value;                           //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                           //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * currencyValue; 
@property (nonatomic,readonly) BOOL isCurrency; 
@property (assign,nonatomic) long long exponent;                              //@synthesize exponent=_exponent - In the implementation block
@property (nonatomic,readonly) NSString * formattedValue; 
@property (nonatomic,copy) NSString * localizedTitle;                         //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                   //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign,nonatomic) BOOL isPrimary;                                  //@synthesize isPrimary=_isPrimary - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdateDate;                           //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)currencyCode;
-(NSString *)identifier;
-(NSDecimalNumber *)value;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setValue:(NSDecimalNumber *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(BOOL)isPrimary;
-(void)setIsPrimary:(BOOL)arg1 ;
-(NSDate *)lastUpdateDate;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(long long)exponent;
-(void)setExponent:(long long)arg1 ;
-(void)_setValueWithRounding:(id)arg1 ;
-(BOOL)isCurrency;
-(PKCurrencyAmount *)currencyValue;
-(NSString *)formattedValue;
-(id)initWithIdentifier:(id)arg1 forCurrencyAmount:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 forValue:(id)arg2 roundingToExponent:(long long)arg3 ;
@end

