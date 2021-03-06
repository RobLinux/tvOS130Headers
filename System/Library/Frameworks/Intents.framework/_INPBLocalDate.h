/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBLocalDate.h>

@protocol _INPBLocalDate <NSObject>
@property (assign,nonatomic) long long dayOfMonth; 
@property (assign,nonatomic) BOOL hasDayOfMonth; 
@property (assign,nonatomic) int dayOfWeek; 
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) long long month; 
@property (assign,nonatomic) BOOL hasMonth; 
@property (assign,nonatomic) long long year; 
@property (assign,nonatomic) BOOL hasYear; 
@required
-(void)setYear:(long long)arg1;
-(void)setMonth:(long long)arg1;
-(long long)year;
-(long long)month;
-(long long)dayOfMonth;
-(int)dayOfWeek;
-(void)setDayOfWeek:(int)arg1;
-(BOOL)hasDayOfWeek;
-(void)setHasDayOfWeek:(BOOL)arg1;
-(id)dayOfWeekAsString:(int)arg1;
-(int)StringAsDayOfWeek:(id)arg1;
-(void)setDayOfMonth:(long long)arg1;
-(BOOL)hasDayOfMonth;
-(void)setHasDayOfMonth:(BOOL)arg1;
-(BOOL)hasMonth;
-(void)setHasMonth:(BOOL)arg1;
-(BOOL)hasYear;
-(void)setHasYear:(BOOL)arg1;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSString;

@interface _INPBLocalDate : PBCodable <_INPBLocalDate, NSSecureCoding, NSCopying> {

	SCD_Struct_IN11 _has;
	BOOL __encodeLegacyGloryData;
	int _dayOfWeek;
	long long _dayOfMonth;
	long long _month;
	long long _year;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long dayOfMonth;                                                       //@synthesize dayOfMonth=_dayOfMonth - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfMonth; 
@property (assign,nonatomic) int dayOfWeek;                                                              //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) long long month;                                                            //@synthesize month=_month - In the implementation block
@property (assign,nonatomic) BOOL hasMonth; 
@property (assign,nonatomic) long long year;                                                             //@synthesize year=_year - In the implementation block
@property (assign,nonatomic) BOOL hasYear; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setYear:(long long)arg1 ;
-(void)setMonth:(long long)arg1 ;
-(long long)year;
-(long long)month;
-(long long)dayOfMonth;
-(int)dayOfWeek;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDayOfWeek:(int)arg1 ;
-(BOOL)hasDayOfWeek;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(id)dayOfWeekAsString:(int)arg1 ;
-(int)StringAsDayOfWeek:(id)arg1 ;
-(void)setDayOfMonth:(long long)arg1 ;
-(BOOL)hasDayOfMonth;
-(void)setHasDayOfMonth:(BOOL)arg1 ;
-(BOOL)hasMonth;
-(void)setHasMonth:(BOOL)arg1 ;
-(BOOL)hasYear;
-(void)setHasYear:(BOOL)arg1 ;
@end

