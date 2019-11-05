/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBHomeAttributeValue.h>
@class _INPBHomeAttributeRange, NSString;


@protocol _INPBHomeAttributeValue <NSObject>
@property (assign,nonatomic) BOOL booleanValue; 
@property (assign,nonatomic) BOOL hasBooleanValue; 
@property (assign,nonatomic) double doubleValue; 
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) long long integerValue; 
@property (assign,nonatomic) BOOL hasIntegerValue; 
@property (assign,nonatomic) int limitValue; 
@property (assign,nonatomic) BOOL hasLimitValue; 
@property (nonatomic,retain) _INPBHomeAttributeRange * rangeValue; 
@property (nonatomic,readonly) BOOL hasRangeValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (assign,nonatomic) int unit; 
@property (assign,nonatomic) BOOL hasUnit; 
@property (assign,nonatomic) int valueType; 
@property (assign,nonatomic) BOOL hasValueType; 
@required
-(double)doubleValue;
-(NSString *)stringValue;
-(long long)integerValue;
-(int)unit;
-(_INPBHomeAttributeRange *)rangeValue;
-(void)setStringValue:(id)arg1;
-(void)setIntegerValue:(long long)arg1;
-(BOOL)hasStringValue;
-(void)setHasIntegerValue:(BOOL)arg1;
-(BOOL)hasIntegerValue;
-(void)setDoubleValue:(double)arg1;
-(void)setHasDoubleValue:(BOOL)arg1;
-(BOOL)hasDoubleValue;
-(int)valueType;
-(void)setValueType:(int)arg1;
-(BOOL)booleanValue;
-(void)setUnit:(int)arg1;
-(BOOL)hasUnit;
-(id)limitValueAsString:(int)arg1;
-(int)StringAsLimitValue:(id)arg1;
-(id)unitAsString:(int)arg1;
-(int)StringAsUnit:(id)arg1;
-(id)valueTypeAsString:(int)arg1;
-(int)StringAsValueType:(id)arg1;
-(void)setBooleanValue:(BOOL)arg1;
-(BOOL)hasBooleanValue;
-(void)setHasBooleanValue:(BOOL)arg1;
-(int)limitValue;
-(void)setLimitValue:(int)arg1;
-(BOOL)hasLimitValue;
-(void)setHasLimitValue:(BOOL)arg1;
-(void)setRangeValue:(id)arg1;
-(BOOL)hasRangeValue;
-(void)setHasUnit:(BOOL)arg1;
-(BOOL)hasValueType;
-(void)setHasValueType:(BOOL)arg1;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBHomeAttributeRange, NSString;

@interface _INPBHomeAttributeValue : PBCodable <_INPBHomeAttributeValue, NSSecureCoding, NSCopying> {

	SCD_Struct_IN2 _has;
	BOOL _booleanValue;
	BOOL __encodeLegacyGloryData;
	int _limitValue;
	int _unit;
	int _valueType;
	double _doubleValue;
	long long _integerValue;
	_INPBHomeAttributeRange* _rangeValue;
	NSString* _stringValue;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL booleanValue;                                                          //@synthesize booleanValue=_booleanValue - In the implementation block
@property (assign,nonatomic) BOOL hasBooleanValue; 
@property (assign,nonatomic) double doubleValue;                                                         //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) long long integerValue;                                                     //@synthesize integerValue=_integerValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerValue; 
@property (assign,nonatomic) int limitValue;                                                             //@synthesize limitValue=_limitValue - In the implementation block
@property (assign,nonatomic) BOOL hasLimitValue; 
@property (nonatomic,retain) _INPBHomeAttributeRange * rangeValue;                                       //@synthesize rangeValue=_rangeValue - In the implementation block
@property (nonatomic,readonly) BOOL hasRangeValue; 
@property (nonatomic,copy) NSString * stringValue;                                                       //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (assign,nonatomic) int unit;                                                                   //@synthesize unit=_unit - In the implementation block
@property (assign,nonatomic) BOOL hasUnit; 
@property (assign,nonatomic) int valueType;                                                              //@synthesize valueType=_valueType - In the implementation block
@property (assign,nonatomic) BOOL hasValueType; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)doubleValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)integerValue;
-(int)unit;
-(_INPBHomeAttributeRange *)rangeValue;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setIntegerValue:(long long)arg1 ;
-(BOOL)hasStringValue;
-(void)setHasIntegerValue:(BOOL)arg1 ;
-(BOOL)hasIntegerValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(int)valueType;
-(void)setValueType:(int)arg1 ;
-(BOOL)booleanValue;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)setUnit:(int)arg1 ;
-(BOOL)hasUnit;
-(id)limitValueAsString:(int)arg1 ;
-(int)StringAsLimitValue:(id)arg1 ;
-(id)unitAsString:(int)arg1 ;
-(int)StringAsUnit:(id)arg1 ;
-(id)valueTypeAsString:(int)arg1 ;
-(int)StringAsValueType:(id)arg1 ;
-(void)setBooleanValue:(BOOL)arg1 ;
-(BOOL)hasBooleanValue;
-(void)setHasBooleanValue:(BOOL)arg1 ;
-(int)limitValue;
-(void)setLimitValue:(int)arg1 ;
-(BOOL)hasLimitValue;
-(void)setHasLimitValue:(BOOL)arg1 ;
-(void)setRangeValue:(_INPBHomeAttributeRange *)arg1 ;
-(BOOL)hasRangeValue;
-(void)setHasUnit:(BOOL)arg1 ;
-(BOOL)hasValueType;
-(void)setHasValueType:(BOOL)arg1 ;
@end

