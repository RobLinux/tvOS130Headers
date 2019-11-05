/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSDate;

@interface NSTimer : NSObject

@property (copy) NSDate * fireDate; 
@property (readonly) double timeInterval; 
@property (assign) double tolerance; 
@property (getter=isValid,readonly) BOOL valid; 
@property (retain,readonly) id userInfo; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
+(id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3 ;
+(id)timerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(/*^block*/id)arg3 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(/*^block*/id)arg3 ;
+(id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 ;
-(void)invalidate;
-(id)userInfo;
-(BOOL)isValid;
-(double)timeInterval;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(NSDate *)fireDate;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)fire;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6 ;
-(double)_cffireTime;
-(double)interval;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 repeats:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(CFStringRef)copyDebugDescription;
-(long long)order;
-(double)fireTime;
-(void)setFireTime:(double)arg1 ;
-(SCD_Struct_NS15*)context;
@end

