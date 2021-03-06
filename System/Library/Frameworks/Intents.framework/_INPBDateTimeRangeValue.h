/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBDateTimeRangeValue.h>
@class _INPBDateTime, _INPBRecurrenceValue, _INPBValueMetadata;


@protocol _INPBDateTimeRangeValue <NSObject>
@property (assign,nonatomic) BOOL allDay; 
@property (assign,nonatomic) BOOL hasAllDay; 
@property (assign,nonatomic) long long endCalendar; 
@property (assign,nonatomic) BOOL hasEndCalendar; 
@property (nonatomic,retain) _INPBDateTime * endDateTime; 
@property (nonatomic,readonly) BOOL hasEndDateTime; 
@property (nonatomic,retain) _INPBRecurrenceValue * recurrence; 
@property (nonatomic,readonly) BOOL hasRecurrence; 
@property (assign,nonatomic) long long startCalendar; 
@property (assign,nonatomic) BOOL hasStartCalendar; 
@property (nonatomic,retain) _INPBDateTime * startDateTime; 
@property (nonatomic,readonly) BOOL hasStartDateTime; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata; 
@property (nonatomic,readonly) BOOL hasValueMetadata; 
@required
-(void)setAllDay:(BOOL)arg1;
-(BOOL)allDay;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(id)arg1;
-(BOOL)hasValueMetadata;
-(BOOL)hasAllDay;
-(void)setHasAllDay:(BOOL)arg1;
-(long long)endCalendar;
-(void)setEndCalendar:(long long)arg1;
-(BOOL)hasEndCalendar;
-(void)setHasEndCalendar:(BOOL)arg1;
-(_INPBDateTime *)endDateTime;
-(void)setEndDateTime:(id)arg1;
-(BOOL)hasEndDateTime;
-(_INPBRecurrenceValue *)recurrence;
-(void)setRecurrence:(id)arg1;
-(BOOL)hasRecurrence;
-(long long)startCalendar;
-(void)setStartCalendar:(long long)arg1;
-(BOOL)hasStartCalendar;
-(void)setHasStartCalendar:(BOOL)arg1;
-(_INPBDateTime *)startDateTime;
-(void)setStartDateTime:(id)arg1;
-(BOOL)hasStartDateTime;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBDateTime, _INPBRecurrenceValue, _INPBValueMetadata, NSString;

@interface _INPBDateTimeRangeValue : PBCodable <_INPBDateTimeRangeValue, NSSecureCoding, NSCopying> {

	SCD_Struct_IN4 _has;
	BOOL _allDay;
	BOOL __encodeLegacyGloryData;
	long long _endCalendar;
	_INPBDateTime* _endDateTime;
	_INPBRecurrenceValue* _recurrence;
	long long _startCalendar;
	_INPBDateTime* _startDateTime;
	_INPBValueMetadata* _valueMetadata;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL allDay;                                                                //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) BOOL hasAllDay; 
@property (assign,nonatomic) long long endCalendar;                                                      //@synthesize endCalendar=_endCalendar - In the implementation block
@property (assign,nonatomic) BOOL hasEndCalendar; 
@property (nonatomic,retain) _INPBDateTime * endDateTime;                                                //@synthesize endDateTime=_endDateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasEndDateTime; 
@property (nonatomic,retain) _INPBRecurrenceValue * recurrence;                                          //@synthesize recurrence=_recurrence - In the implementation block
@property (nonatomic,readonly) BOOL hasRecurrence; 
@property (assign,nonatomic) long long startCalendar;                                                    //@synthesize startCalendar=_startCalendar - In the implementation block
@property (assign,nonatomic) BOOL hasStartCalendar; 
@property (nonatomic,retain) _INPBDateTime * startDateTime;                                              //@synthesize startDateTime=_startDateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasStartDateTime; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata;                                         //@synthesize valueMetadata=_valueMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasValueMetadata; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)allDay;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(_INPBValueMetadata *)arg1 ;
-(BOOL)hasValueMetadata;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(BOOL)hasAllDay;
-(void)setHasAllDay:(BOOL)arg1 ;
-(long long)endCalendar;
-(void)setEndCalendar:(long long)arg1 ;
-(BOOL)hasEndCalendar;
-(void)setHasEndCalendar:(BOOL)arg1 ;
-(_INPBDateTime *)endDateTime;
-(void)setEndDateTime:(_INPBDateTime *)arg1 ;
-(BOOL)hasEndDateTime;
-(_INPBRecurrenceValue *)recurrence;
-(void)setRecurrence:(_INPBRecurrenceValue *)arg1 ;
-(BOOL)hasRecurrence;
-(long long)startCalendar;
-(void)setStartCalendar:(long long)arg1 ;
-(BOOL)hasStartCalendar;
-(void)setHasStartCalendar:(BOOL)arg1 ;
-(_INPBDateTime *)startDateTime;
-(void)setStartDateTime:(_INPBDateTime *)arg1 ;
-(BOOL)hasStartDateTime;
@end

