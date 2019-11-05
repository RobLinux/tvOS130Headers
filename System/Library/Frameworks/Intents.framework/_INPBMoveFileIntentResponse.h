/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBMoveFileIntentResponse.h>
@class _INPBString, NSArray;


@protocol _INPBMoveFileIntentResponse <NSObject>
@property (nonatomic,retain) _INPBString * destinationName; 
@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (nonatomic,copy) NSArray * entityNames; 
@property (nonatomic,readonly) unsigned long long entityNamesCount; 
@property (nonatomic,readonly) int* entityTypes; 
@property (nonatomic,readonly) unsigned long long entityTypesCount; 
@property (assign,nonatomic) BOOL overwrite; 
@property (assign,nonatomic) BOOL hasOverwrite; 
@property (nonatomic,retain) _INPBString * sourceName; 
@property (nonatomic,readonly) BOOL hasSourceName; 
@property (assign,nonatomic) BOOL success; 
@property (assign,nonatomic) BOOL hasSuccess; 
@required
+(Class)entityNameType;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1;
-(void)setHasSuccess:(BOOL)arg1;
-(BOOL)hasSuccess;
-(void)setDestinationName:(id)arg1;
-(_INPBString *)sourceName;
-(void)setSourceName:(id)arg1;
-(_INPBString *)destinationName;
-(BOOL)hasDestinationName;
-(void)clearEntityNames;
-(void)addEntityName:(id)arg1;
-(id)entityNameAtIndex:(unsigned long long)arg1;
-(NSArray *)entityNames;
-(void)setEntityNames:(id)arg1;
-(unsigned long long)entityNamesCount;
-(void)clearEntityTypes;
-(void)addEntityType:(int)arg1;
-(int)entityTypeAtIndex:(unsigned long long)arg1;
-(void)setEntityTypes:(int*)arg1 count:(unsigned long long)arg2;
-(id)entityTypesAsString:(int)arg1;
-(int)StringAsEntityTypes:(id)arg1;
-(int*)entityTypes;
-(unsigned long long)entityTypesCount;
-(BOOL)hasSourceName;
-(BOOL)overwrite;
-(void)setOverwrite:(BOOL)arg1;
-(BOOL)hasOverwrite;
-(void)setHasOverwrite:(BOOL)arg1;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBString, NSArray, NSString;

@interface _INPBMoveFileIntentResponse : PBCodable <_INPBMoveFileIntentResponse, NSSecureCoding, NSCopying> {

	SCD_Struct_IN5* _entityTypes;
	SCD_Struct_IN1 _has;
	BOOL _overwrite;
	BOOL _success;
	BOOL __encodeLegacyGloryData;
	_INPBString* _destinationName;
	NSArray* _entityNames;
	_INPBString* _sourceName;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBString * destinationName;                                              //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (nonatomic,copy) NSArray * entityNames;                                                        //@synthesize entityNames=_entityNames - In the implementation block
@property (nonatomic,readonly) unsigned long long entityNamesCount; 
@property (nonatomic,readonly) int* entityTypes; 
@property (nonatomic,readonly) unsigned long long entityTypesCount; 
@property (assign,nonatomic) BOOL overwrite;                                                             //@synthesize overwrite=_overwrite - In the implementation block
@property (assign,nonatomic) BOOL hasOverwrite; 
@property (nonatomic,retain) _INPBString * sourceName;                                                   //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceName; 
@property (assign,nonatomic) BOOL success;                                                               //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
+(BOOL)supportsSecureCoding;
+(Class)entityNameType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(void)setDestinationName:(_INPBString *)arg1 ;
-(_INPBString *)sourceName;
-(void)setSourceName:(_INPBString *)arg1 ;
-(_INPBString *)destinationName;
-(BOOL)hasDestinationName;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)clearEntityNames;
-(void)addEntityName:(id)arg1 ;
-(id)entityNameAtIndex:(unsigned long long)arg1 ;
-(NSArray *)entityNames;
-(void)setEntityNames:(NSArray *)arg1 ;
-(unsigned long long)entityNamesCount;
-(void)clearEntityTypes;
-(void)addEntityType:(int)arg1 ;
-(int)entityTypeAtIndex:(unsigned long long)arg1 ;
-(void)setEntityTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)entityTypesAsString:(int)arg1 ;
-(int)StringAsEntityTypes:(id)arg1 ;
-(int*)entityTypes;
-(unsigned long long)entityTypesCount;
-(BOOL)hasSourceName;
-(BOOL)overwrite;
-(void)setOverwrite:(BOOL)arg1 ;
-(BOOL)hasOverwrite;
-(void)setHasOverwrite:(BOOL)arg1 ;
@end

