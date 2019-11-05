/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBSetCarLockStatusIntent.h>
@class _INPBDataString, _INPBIntentMetadata;


@protocol _INPBSetCarLockStatusIntent <NSObject>
@property (nonatomic,retain) _INPBDataString * carName; 
@property (nonatomic,readonly) BOOL hasCarName; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) BOOL locked; 
@property (assign,nonatomic) BOOL hasLocked; 
@required
-(void)setLocked:(BOOL)arg1;
-(_INPBDataString *)carName;
-(void)setCarName:(id)arg1;
-(BOOL)hasCarName;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(BOOL)locked;
-(BOOL)hasLocked;
-(void)setHasLocked:(BOOL)arg1;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBDataString, _INPBIntentMetadata, NSString;

@interface _INPBSetCarLockStatusIntent : PBCodable <_INPBSetCarLockStatusIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL _locked;
	BOOL __encodeLegacyGloryData;
	_INPBDataString* _carName;
	_INPBIntentMetadata* _intentMetadata;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBDataString * carName;                                                  //@synthesize carName=_carName - In the implementation block
@property (nonatomic,readonly) BOOL hasCarName; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) BOOL locked;                                                                //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) BOOL hasLocked; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(_INPBDataString *)carName;
-(void)setCarName:(_INPBDataString *)arg1 ;
-(BOOL)hasCarName;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(BOOL)locked;
-(BOOL)hasLocked;
-(void)setHasLocked:(BOOL)arg1 ;
@end

