/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBHomeAttributeRange.h>

@protocol _INPBHomeAttributeRange <NSObject>
@property (assign,nonatomic) double lowerValue; 
@property (assign,nonatomic) BOOL hasLowerValue; 
@property (assign,nonatomic) double upperValue; 
@property (assign,nonatomic) BOOL hasUpperValue; 
@required
-(double)lowerValue;
-(double)upperValue;
-(void)setLowerValue:(double)arg1;
-(BOOL)hasLowerValue;
-(void)setHasLowerValue:(BOOL)arg1;
-(void)setUpperValue:(double)arg1;
-(BOOL)hasUpperValue;
-(void)setHasUpperValue:(BOOL)arg1;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSString;

@interface _INPBHomeAttributeRange : PBCodable <_INPBHomeAttributeRange, NSSecureCoding, NSCopying> {

	SCD_Struct_IN1 _has;
	BOOL __encodeLegacyGloryData;
	double _lowerValue;
	double _upperValue;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double lowerValue;                                                          //@synthesize lowerValue=_lowerValue - In the implementation block
@property (assign,nonatomic) BOOL hasLowerValue; 
@property (assign,nonatomic) double upperValue;                                                          //@synthesize upperValue=_upperValue - In the implementation block
@property (assign,nonatomic) BOOL hasUpperValue; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(double)lowerValue;
-(double)upperValue;
-(void)setLowerValue:(double)arg1 ;
-(BOOL)hasLowerValue;
-(void)setHasLowerValue:(BOOL)arg1 ;
-(void)setUpperValue:(double)arg1 ;
-(BOOL)hasUpperValue;
-(void)setHasUpperValue:(BOOL)arg1 ;
@end
