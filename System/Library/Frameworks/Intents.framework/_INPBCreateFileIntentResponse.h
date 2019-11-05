/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBCreateFileIntentResponse.h>
@class _INPBString;


@protocol _INPBCreateFileIntentResponse <NSObject>
@property (nonatomic,retain) _INPBString * destinationName; 
@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (nonatomic,retain) _INPBString * entityName; 
@property (nonatomic,readonly) BOOL hasEntityName; 
@property (assign,nonatomic) int entityType; 
@property (assign,nonatomic) BOOL hasEntityType; 
@property (assign,nonatomic) BOOL overwrite; 
@property (assign,nonatomic) BOOL hasOverwrite; 
@property (assign,nonatomic) BOOL success; 
@property (assign,nonatomic) BOOL hasSuccess; 
@required
-(_INPBString *)entityName;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1;
-(void)setHasSuccess:(BOOL)arg1;
-(BOOL)hasSuccess;
-(void)setDestinationName:(id)arg1;
-(_INPBString *)destinationName;
-(BOOL)hasDestinationName;
-(id)entityTypeAsString:(int)arg1;
-(int)StringAsEntityType:(id)arg1;
-(void)setEntityName:(id)arg1;
-(BOOL)hasEntityName;
-(int)entityType;
-(void)setEntityType:(int)arg1;
-(BOOL)hasEntityType;
-(void)setHasEntityType:(BOOL)arg1;
-(BOOL)overwrite;
-(void)setOverwrite:(BOOL)arg1;
-(BOOL)hasOverwrite;
-(void)setHasOverwrite:(BOOL)arg1;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBString, NSString;

@interface _INPBCreateFileIntentResponse : PBCodable <_INPBCreateFileIntentResponse, NSSecureCoding, NSCopying> {

	SCD_Struct_IN4 _has;
	BOOL _overwrite;
	BOOL _success;
	BOOL __encodeLegacyGloryData;
	int _entityType;
	_INPBString* _destinationName;
	_INPBString* _entityName;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBString * destinationName;                                              //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (nonatomic,retain) _INPBString * entityName;                                                   //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityName; 
@property (assign,nonatomic) int entityType;                                                             //@synthesize entityType=_entityType - In the implementation block
@property (assign,nonatomic) BOOL hasEntityType; 
@property (assign,nonatomic) BOOL overwrite;                                                             //@synthesize overwrite=_overwrite - In the implementation block
@property (assign,nonatomic) BOOL hasOverwrite; 
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
-(void)setDestinationName:(_INPBString *)arg1 ;
-(_INPBString *)destinationName;
-(BOOL)hasDestinationName;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(id)entityTypeAsString:(int)arg1 ;
-(int)StringAsEntityType:(id)arg1 ;
-(void)setEntityName:(_INPBString *)arg1 ;
-(BOOL)hasEntityName;
-(int)entityType;
-(void)setEntityType:(int)arg1 ;
-(BOOL)hasEntityType;
-(void)setHasEntityType:(BOOL)arg1 ;
-(BOOL)overwrite;
-(void)setOverwrite:(BOOL)arg1 ;
-(BOOL)hasOverwrite;
-(void)setHasOverwrite:(BOOL)arg1 ;
@end

