/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBHomeEntityResponse.h>
@class _INPBHomeEntity, NSArray;


@protocol _INPBHomeEntityResponse <NSObject>
@property (nonatomic,retain) _INPBHomeEntity * entity; 
@property (nonatomic,readonly) BOOL hasEntity; 
@property (nonatomic,copy) NSArray * taskResponses; 
@property (nonatomic,readonly) unsigned long long taskResponsesCount; 
@required
+(Class)taskResponsesType;
-(_INPBHomeEntity *)entity;
-(void)setEntity:(id)arg1;
-(BOOL)hasEntity;
-(void)clearTaskResponses;
-(void)addTaskResponses:(id)arg1;
-(id)taskResponsesAtIndex:(unsigned long long)arg1;
-(NSArray *)taskResponses;
-(void)setTaskResponses:(id)arg1;
-(unsigned long long)taskResponsesCount;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBHomeEntity, NSArray, NSString;

@interface _INPBHomeEntityResponse : PBCodable <_INPBHomeEntityResponse, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	_INPBHomeEntity* _entity;
	NSArray* _taskResponses;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBHomeEntity * entity;                                                   //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) BOOL hasEntity; 
@property (nonatomic,copy) NSArray * taskResponses;                                                      //@synthesize taskResponses=_taskResponses - In the implementation block
@property (nonatomic,readonly) unsigned long long taskResponsesCount; 
+(BOOL)supportsSecureCoding;
+(Class)taskResponsesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_INPBHomeEntity *)entity;
-(void)setEntity:(_INPBHomeEntity *)arg1 ;
-(BOOL)hasEntity;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)clearTaskResponses;
-(void)addTaskResponses:(id)arg1 ;
-(id)taskResponsesAtIndex:(unsigned long long)arg1 ;
-(NSArray *)taskResponses;
-(void)setTaskResponses:(NSArray *)arg1 ;
-(unsigned long long)taskResponsesCount;
@end

