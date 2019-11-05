/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <CalendarFoundation/NSCopying.h>

@class NSString;

@interface EKTimeZone : NSObject <NSCopying> {

	NSString* _name;
	void* _internal;
	long long _lastStart;
	long long _lastEnd;
	unsigned long long _lastIndex;
	double _offset;

}
+(id)timeZoneWithName:(id)arg1 ;
+(id)timeZoneWithNSTimeZone:(id)arg1 ;
-(id)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(double)secondsFromGMTForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)abbreviation;
-(double)secondsFromGMT;
-(double)secondsFromGMTForAbsoluteTime:(double)arg1 ;
-(double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1 ;
-(id)initWithOffset:(double)arg1 name:(id)arg2 ;
-(id)abbreviationForAbsoluteTime:(double)arg1 ;
-(unsigned long long)_indexForAbsoluteTime:(double)arg1 ;
-(id)_abbreviationForIndex:(unsigned long long)arg1 ;
-(id)NSTimeZone;
@end

