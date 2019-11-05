/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBStartVideoCallIntentResponse.h>
@class _INPBCallMetrics, NSString, NSArray;


@protocol _INPBStartVideoCallIntentResponse <NSObject>
@property (assign,nonatomic) int audioRoute; 
@property (assign,nonatomic) BOOL hasAudioRoute; 
@property (nonatomic,retain) _INPBCallMetrics * metrics; 
@property (nonatomic,readonly) BOOL hasMetrics; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,readonly) BOOL hasStatus; 
@property (nonatomic,copy) NSArray * targetContacts; 
@property (nonatomic,readonly) unsigned long long targetContactsCount; 
@required
-(_INPBCallMetrics *)metrics;
-(void)setMetrics:(id)arg1;
-(NSString *)status;
-(void)setStatus:(id)arg1;
-(BOOL)hasStatus;
-(int)audioRoute;
-(void)setAudioRoute:(int)arg1;
-(id)audioRouteAsString:(int)arg1;
-(int)StringAsAudioRoute:(id)arg1;
-(void)clearTargetContacts;
-(void)addTargetContacts:(id)arg1;
-(id)targetContactsAtIndex:(unsigned long long)arg1;
-(BOOL)hasAudioRoute;
-(void)setHasAudioRoute:(BOOL)arg1;
-(NSArray *)targetContacts;
-(void)setTargetContacts:(id)arg1;
-(unsigned long long)targetContactsCount;
-(BOOL)hasMetrics;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBCallMetrics, NSString, NSArray;

@interface _INPBStartVideoCallIntentResponse : PBCodable <_INPBStartVideoCallIntentResponse, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _audioRoute;
	_INPBCallMetrics* _metrics;
	NSString* _status;
	NSArray* _targetContacts;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int audioRoute;                                                             //@synthesize audioRoute=_audioRoute - In the implementation block
@property (assign,nonatomic) BOOL hasAudioRoute; 
@property (nonatomic,retain) _INPBCallMetrics * metrics;                                                 //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) BOOL hasMetrics; 
@property (nonatomic,copy) NSString * status;                                                            //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasStatus; 
@property (nonatomic,copy) NSArray * targetContacts;                                                     //@synthesize targetContacts=_targetContacts - In the implementation block
@property (nonatomic,readonly) unsigned long long targetContactsCount; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_INPBCallMetrics *)metrics;
-(void)setMetrics:(_INPBCallMetrics *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)status;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(BOOL)hasStatus;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(int)audioRoute;
-(void)setAudioRoute:(int)arg1 ;
-(id)audioRouteAsString:(int)arg1 ;
-(int)StringAsAudioRoute:(id)arg1 ;
-(void)clearTargetContacts;
-(void)addTargetContacts:(id)arg1 ;
-(id)targetContactsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAudioRoute;
-(void)setHasAudioRoute:(BOOL)arg1 ;
-(NSArray *)targetContacts;
-(void)setTargetContacts:(NSArray *)arg1 ;
-(unsigned long long)targetContactsCount;
-(BOOL)hasMetrics;
@end

