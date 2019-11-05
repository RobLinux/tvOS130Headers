/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBHomeUserTask.h>
@class _INPBHomeAttributeValue;


@protocol _INPBHomeUserTask <NSObject>
@property (assign,nonatomic) int attribute; 
@property (assign,nonatomic) BOOL hasAttribute; 
@property (assign,nonatomic) int taskType; 
@property (assign,nonatomic) BOOL hasTaskType; 
@property (nonatomic,retain) _INPBHomeAttributeValue * value; 
@property (nonatomic,readonly) BOOL hasValue; 
@required
-(_INPBHomeAttributeValue *)value;
-(void)setTaskType:(int)arg1;
-(int)attribute;
-(void)setValue:(id)arg1;
-(int)taskType;
-(void)setHasTaskType:(BOOL)arg1;
-(BOOL)hasTaskType;
-(id)taskTypeAsString:(int)arg1;
-(int)StringAsTaskType:(id)arg1;
-(BOOL)hasValue;
-(void)setAttribute:(int)arg1;
-(id)attributeAsString:(int)arg1;
-(int)StringAsAttribute:(id)arg1;
-(BOOL)hasAttribute;
-(void)setHasAttribute:(BOOL)arg1;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBHomeAttributeValue, NSString;

@interface _INPBHomeUserTask : PBCodable <_INPBHomeUserTask, NSSecureCoding, NSCopying> {

	SCD_Struct_IN1 _has;
	BOOL __encodeLegacyGloryData;
	int _attribute;
	int _taskType;
	_INPBHomeAttributeValue* _value;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int attribute;                                                              //@synthesize attribute=_attribute - In the implementation block
@property (assign,nonatomic) BOOL hasAttribute; 
@property (assign,nonatomic) int taskType;                                                               //@synthesize taskType=_taskType - In the implementation block
@property (assign,nonatomic) BOOL hasTaskType; 
@property (nonatomic,retain) _INPBHomeAttributeValue * value;                                            //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_INPBHomeAttributeValue *)value;
-(void)setTaskType:(int)arg1 ;
-(int)attribute;
-(void)setValue:(_INPBHomeAttributeValue *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)taskType;
-(void)setHasTaskType:(BOOL)arg1 ;
-(BOOL)hasTaskType;
-(id)taskTypeAsString:(int)arg1 ;
-(int)StringAsTaskType:(id)arg1 ;
-(BOOL)hasValue;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)setAttribute:(int)arg1 ;
-(id)attributeAsString:(int)arg1 ;
-(int)StringAsAttribute:(id)arg1 ;
-(BOOL)hasAttribute;
-(void)setHasAttribute:(BOOL)arg1 ;
@end

