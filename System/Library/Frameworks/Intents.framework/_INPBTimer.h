/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBTimer.h>
@class NSString, _INPBDataString;


@protocol _INPBTimer <NSObject>
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) BOOL hasDuration; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) _INPBDataString * label; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (assign,nonatomic) double remainingTime; 
@property (assign,nonatomic) BOOL hasRemainingTime; 
@property (assign,nonatomic) int state; 
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasType; 
@required
-(int)type;
-(void)setType:(int)arg1;
-(NSString *)identifier;
-(int)state;
-(void)setState:(int)arg1;
-(void)setIdentifier:(id)arg1;
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
-(void)setHasState:(BOOL)arg1;
-(BOOL)hasState;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1;
-(void)setHasRemainingTime:(BOOL)arg1;
-(BOOL)hasRemainingTime;
-(BOOL)hasIdentifier;
-(id)stateAsString:(int)arg1;
-(int)StringAsState:(id)arg1;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSString, _INPBDataString;

@interface _INPBTimer : PBCodable <_INPBTimer, NSSecureCoding, NSCopying> {

	SCD_Struct_IN11 _has;
	BOOL __encodeLegacyGloryData;
	int _state;
	int _type;
	double _duration;
	NSString* _identifier;
	_INPBDataString* _label;
	double _remainingTime;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double duration;                                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (nonatomic,copy) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) _INPBDataString * label;                                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (assign,nonatomic) double remainingTime;                                                       //@synthesize remainingTime=_remainingTime - In the implementation block
@property (assign,nonatomic) BOOL hasRemainingTime; 
@property (assign,nonatomic) int state;                                                                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
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
-(NSString *)identifier;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
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
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasState;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(void)setHasRemainingTime:(BOOL)arg1 ;
-(BOOL)hasRemainingTime;
-(BOOL)hasIdentifier;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(id)stateAsString:(int)arg1 ;
-(int)StringAsState:(id)arg1 ;
@end

