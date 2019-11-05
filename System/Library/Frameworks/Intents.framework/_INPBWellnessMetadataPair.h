/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBWellnessMetadataPair.h>
@class _INPBString, _INPBWellnessMetadataValue, _INPBValueMetadata;


@protocol _INPBWellnessMetadataPair <NSObject>
@property (nonatomic,retain) _INPBString * key; 
@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) _INPBWellnessMetadataValue * value; 
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata; 
@property (nonatomic,readonly) BOOL hasValueMetadata; 
@required
-(_INPBString *)key;
-(_INPBWellnessMetadataValue *)value;
-(void)setKey:(id)arg1;
-(void)setValue:(id)arg1;
-(BOOL)hasValue;
-(BOOL)hasKey;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(id)arg1;
-(BOOL)hasValueMetadata;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBString, _INPBWellnessMetadataValue, _INPBValueMetadata, NSString;

@interface _INPBWellnessMetadataPair : PBCodable <_INPBWellnessMetadataPair, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	_INPBString* _key;
	_INPBWellnessMetadataValue* _value;
	_INPBValueMetadata* _valueMetadata;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBString * key;                                                          //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) _INPBWellnessMetadataValue * value;                                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata;                                         //@synthesize valueMetadata=_valueMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasValueMetadata; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_INPBString *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_INPBWellnessMetadataValue *)value;
-(void)setKey:(_INPBString *)arg1 ;
-(void)setValue:(_INPBWellnessMetadataValue *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasValue;
-(BOOL)hasKey;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(_INPBValueMetadata *)arg1 ;
-(BOOL)hasValueMetadata;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
@end

