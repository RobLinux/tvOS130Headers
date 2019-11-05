/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttributeRelationComparing.h>
#import <Intents/INCurrencyAmountExport.h>
#import <Intents/NSCopying.h>
#import <Intents/NSSecureCoding.h>

@class NSDecimalNumber, NSString;

@interface INCurrencyAmount : NSObject <INCodableAttributeRelationComparing, INCurrencyAmountExport, NSCopying, NSSecureCoding> {

	NSDecimalNumber* _amount;
	NSString* _currencyCode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDecimalNumber * amount;              //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy,readonly) NSString * currencyCode;               //@synthesize currencyCode=_currencyCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(NSDecimalNumber *)amount;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2 ;
-(id)initWithAmount:(id)arg1 currencyCode:(id)arg2 ;
-(BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2 ;
@end

