/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/INJSONSerializable.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSData;

@interface NSTimeZone : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (nonatomic,copy,readonly) NSString * ISO8601TimeZoneOffsetFromUTC; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSData * data; 
+(BOOL)tvs_isTimeZoneSet;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)timeZoneForSecondsFromGMT:(long long)arg1 ;
+(id)systemTimeZone;
+(id)abbreviationDictionary;
+(void)resetSystemTimeZone;
+(id)defaultTimeZone;
+(void)setDefaultTimeZone:(id)arg1 ;
+(id)localTimeZone;
+(id)knownTimeZoneNames;
+(void)setAbbreviationDictionary:(id)arg1 ;
+(id)timeZoneDataVersion;
+(id)timeZoneWithName:(id)arg1 data:(id)arg2 ;
+(id)timeZoneWithName:(id)arg1 ;
+(id)timeZoneWithAbbreviation:(id)arg1 ;
-(NSString *)ISO8601TimeZoneOffsetFromUTC;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(BOOL)isNSTimeZone__;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(NSData *)data;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(id)localizedName:(long long)arg1 locale:(id)arg2 ;
-(id)initWithName:(id)arg1 data:(id)arg2 ;
-(id)initWithName:(id)arg1 ;
-(BOOL)isEqualToTimeZone:(id)arg1 ;
-(id)abbreviation;
-(long long)secondsFromGMT;
-(BOOL)isDaylightSavingTime;
-(double)daylightSavingTimeOffset;
-(id)nextDaylightSavingTimeTransition;
@end

