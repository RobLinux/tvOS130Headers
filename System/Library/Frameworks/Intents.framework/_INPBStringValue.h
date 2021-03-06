/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBStringValue.h>
@class NSString, _INPBValueMetadata;


@protocol _INPBStringValue <NSObject>
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata; 
@property (nonatomic,readonly) BOOL hasValueMetadata; 
@required
-(NSString *)value;
-(void)setValue:(id)arg1;
-(BOOL)hasValue;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(id)arg1;
-(BOOL)hasValueMetadata;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSString, _INPBValueMetadata;

@interface _INPBStringValue : PBCodable <_INPBStringValue, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSString* _value;
	_INPBValueMetadata* _valueMetadata;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * value;                                                             //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata;                                         //@synthesize valueMetadata=_valueMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasValueMetadata; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasValue;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(_INPBValueMetadata *)arg1 ;
-(BOOL)hasValueMetadata;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
@end

