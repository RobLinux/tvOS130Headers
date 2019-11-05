/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBCompressFileIntentResponse.h>
@class _INPBString;


@protocol _INPBCompressFileIntentResponse <NSObject>
@property (nonatomic,retain) _INPBString * entityName; 
@property (nonatomic,readonly) BOOL hasEntityName; 
@property (assign,nonatomic) BOOL success; 
@property (assign,nonatomic) BOOL hasSuccess; 
@required
-(_INPBString *)entityName;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1;
-(void)setHasSuccess:(BOOL)arg1;
-(BOOL)hasSuccess;
-(void)setEntityName:(id)arg1;
-(BOOL)hasEntityName;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBString, NSString;

@interface _INPBCompressFileIntentResponse : PBCodable <_INPBCompressFileIntentResponse, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL _success;
	BOOL __encodeLegacyGloryData;
	_INPBString* _entityName;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBString * entityName;                                                   //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityName; 
@property (assign,nonatomic) BOOL success;                                                               //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_INPBString *)entityName;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)setEntityName:(_INPBString *)arg1 ;
-(BOOL)hasEntityName;
@end

