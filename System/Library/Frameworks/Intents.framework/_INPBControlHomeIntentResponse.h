/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBControlHomeIntentResponse.h>
@class NSArray;


@protocol _INPBControlHomeIntentResponse <NSObject>
@property (nonatomic,copy) NSArray * entityResponses; 
@property (nonatomic,readonly) unsigned long long entityResponsesCount; 
@required
+(Class)entityResponsesType;
-(NSArray *)entityResponses;
-(void)setEntityResponses:(id)arg1;
-(void)clearEntityResponses;
-(void)addEntityResponses:(id)arg1;
-(id)entityResponsesAtIndex:(unsigned long long)arg1;
-(unsigned long long)entityResponsesCount;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSArray, NSString;

@interface _INPBControlHomeIntentResponse : PBCodable <_INPBControlHomeIntentResponse, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSArray* _entityResponses;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * entityResponses;                                                    //@synthesize entityResponses=_entityResponses - In the implementation block
@property (nonatomic,readonly) unsigned long long entityResponsesCount; 
+(BOOL)supportsSecureCoding;
+(Class)entityResponsesType;
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
-(NSArray *)entityResponses;
-(void)setEntityResponses:(NSArray *)arg1 ;
-(void)clearEntityResponses;
-(void)addEntityResponses:(id)arg1 ;
-(id)entityResponsesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)entityResponsesCount;
@end

