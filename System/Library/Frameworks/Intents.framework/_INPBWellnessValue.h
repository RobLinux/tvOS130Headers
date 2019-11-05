/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBWellnessValue.h>
@class _INPBDouble, _INPBInteger, _INPBValueMetadata;


@protocol _INPBWellnessValue <NSObject>
@property (nonatomic,retain) _INPBDouble * pbDoubleValue; 
@property (nonatomic,readonly) BOOL hasPbDoubleValue; 
@property (nonatomic,retain) _INPBInteger * ordinalValue; 
@property (nonatomic,readonly) BOOL hasOrdinalValue; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata; 
@property (nonatomic,readonly) BOOL hasValueMetadata; 
@required
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(id)arg1;
-(BOOL)hasValueMetadata;
-(_INPBDouble *)pbDoubleValue;
-(void)setPbDoubleValue:(id)arg1;
-(BOOL)hasPbDoubleValue;
-(_INPBInteger *)ordinalValue;
-(void)setOrdinalValue:(id)arg1;
-(BOOL)hasOrdinalValue;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBDouble, _INPBInteger, _INPBValueMetadata, NSString;

@interface _INPBWellnessValue : PBCodable <_INPBWellnessValue, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	_INPBDouble* _pbDoubleValue;
	_INPBInteger* _ordinalValue;
	_INPBValueMetadata* _valueMetadata;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBDouble * pbDoubleValue;                                                //@synthesize pbDoubleValue=_pbDoubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasPbDoubleValue; 
@property (nonatomic,retain) _INPBInteger * ordinalValue;                                                //@synthesize ordinalValue=_ordinalValue - In the implementation block
@property (nonatomic,readonly) BOOL hasOrdinalValue; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata;                                         //@synthesize valueMetadata=_valueMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasValueMetadata; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(_INPBValueMetadata *)arg1 ;
-(BOOL)hasValueMetadata;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBDouble *)pbDoubleValue;
-(void)setPbDoubleValue:(_INPBDouble *)arg1 ;
-(BOOL)hasPbDoubleValue;
-(_INPBInteger *)ordinalValue;
-(void)setOrdinalValue:(_INPBInteger *)arg1 ;
-(BOOL)hasOrdinalValue;
@end

