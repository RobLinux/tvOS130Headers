/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBFileProperty.h>
@class _INPBFilePropertyValue;


@protocol _INPBFileProperty <NSObject>
@property (assign,nonatomic) int name; 
@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) int qualifier; 
@property (assign,nonatomic) BOOL hasQualifier; 
@property (nonatomic,retain) _INPBFilePropertyValue * value; 
@property (nonatomic,readonly) BOOL hasValue; 
@required
-(int)name;
-(void)setName:(int)arg1;
-(_INPBFilePropertyValue *)value;
-(void)setValue:(id)arg1;
-(BOOL)hasValue;
-(BOOL)hasName;
-(int)qualifier;
-(void)setQualifier:(int)arg1;
-(id)nameAsString:(int)arg1;
-(int)StringAsName:(id)arg1;
-(id)qualifierAsString:(int)arg1;
-(int)StringAsQualifier:(id)arg1;
-(void)setHasName:(BOOL)arg1;
-(BOOL)hasQualifier;
-(void)setHasQualifier:(BOOL)arg1;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBFilePropertyValue, NSString;

@interface _INPBFileProperty : PBCodable <_INPBFileProperty, NSSecureCoding, NSCopying> {

	SCD_Struct_IN1 _has;
	BOOL __encodeLegacyGloryData;
	int _name;
	int _qualifier;
	_INPBFilePropertyValue* _value;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int name;                                                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) int qualifier;                                                              //@synthesize qualifier=_qualifier - In the implementation block
@property (assign,nonatomic) BOOL hasQualifier; 
@property (nonatomic,retain) _INPBFilePropertyValue * value;                                             //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
+(BOOL)supportsSecureCoding;
-(int)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(int)arg1 ;
-(_INPBFilePropertyValue *)value;
-(void)setValue:(_INPBFilePropertyValue *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasValue;
-(BOOL)hasName;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(int)qualifier;
-(void)setQualifier:(int)arg1 ;
-(id)nameAsString:(int)arg1 ;
-(int)StringAsName:(id)arg1 ;
-(id)qualifierAsString:(int)arg1 ;
-(int)StringAsQualifier:(id)arg1 ;
-(void)setHasName:(BOOL)arg1 ;
-(BOOL)hasQualifier;
-(void)setHasQualifier:(BOOL)arg1 ;
@end

