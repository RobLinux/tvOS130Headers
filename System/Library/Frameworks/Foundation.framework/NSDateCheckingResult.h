/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSDate, NSTimeZone, NSString;

@interface NSDateCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSDate* _date;
	NSTimeZone* _timeZone;
	double _duration;
	NSDate* _referenceDate;
	id _underlyingResult;
	BOOL _timeIsSignificant;
	BOOL _timeIsApproximate;
	BOOL _timeIsPast;
	NSString* _leadingText;
	NSString* _trailingText;

}

@property (readonly) NSTimeZone * timeZone; 
@property (readonly) double duration; 
@property (readonly) NSDate * referenceDate; 
@property (readonly) void* underlyingResult; 
@property (readonly) BOOL timeIsSignificant; 
@property (readonly) BOOL timeIsApproximate; 
@property (readonly) BOOL timeIsPast; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)date;
-(NSTimeZone *)timeZone;
-(NSRange)range;
-(unsigned long long)resultType;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(double)duration;
-(NSDate *)referenceDate;
-(id)leadingText;
-(id)trailingText;
-(void*)underlyingResult;
-(BOOL)timeIsSignificant;
-(BOOL)timeIsApproximate;
-(BOOL)timeIsPast;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 timeIsPast:(BOOL)arg9 leadingText:(id)arg10 trailingText:(id)arg11 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 timeIsPast:(BOOL)arg9 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 ;
@end

