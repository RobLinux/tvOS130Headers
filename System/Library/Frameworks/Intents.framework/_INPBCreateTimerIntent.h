/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBCreateTimerIntent.h>
@class _INPBIntentMetadata, _INPBDataString;


@protocol _INPBCreateTimerIntent <NSObject>
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) BOOL hasDuration; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBDataString * label; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasType; 
@required
-(int)type;
-(void)setType:(int)arg1;
-(double)duration;
-(_INPBDataString *)label;
-(void)setLabel:(id)arg1;
-(void)setDuration:(double)arg1;
-(void)setHasDuration:(BOOL)arg1;
-(BOOL)hasDuration;
-(void)setHasType:(BOOL)arg1;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1;
-(int)StringAsType:(id)arg1;
-(BOOL)hasLabel;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBIntentMetadata, _INPBDataString, NSString;

@interface _INPBCreateTimerIntent : PBCodable <_INPBCreateTimerIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN1 _has;
	BOOL __encodeLegacyGloryData;
	int _type;
	double _duration;
	_INPBIntentMetadata* _intentMetadata;
	_INPBDataString* _label;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double duration;                                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBDataString * label;                                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (assign,nonatomic) int type;                                                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)duration;
-(_INPBDataString *)label;
-(void)setLabel:(_INPBDataString *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasLabel;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
@end

