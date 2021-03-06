/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSDate;

@interface PowerManagerIdleTracker : NSObject {

	BOOL _active;
	BOOL _enabled;
	BOOL _firstTime;
	double _interval;
	NSString* _name;
	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _userActivityNotificationRef;
	NSDate* _startTime;

}

@property (assign) BOOL active;                                                 //@synthesize active=_active - In the implementation block
@property (copy) id block;                                                      //@synthesize block=_block - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (assign) unsigned long long userActivityNotificationRef;              //@synthesize userActivityNotificationRef=_userActivityNotificationRef - In the implementation block
@property (retain) NSDate * startTime;                                          //@synthesize startTime=_startTime - In the implementation block
@property (assign) BOOL firstTime;                                              //@synthesize firstTime=_firstTime - In the implementation block
@property (readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (assign) BOOL enabled;                                                //@synthesize enabled=_enabled - In the implementation block
@property (assign) double interval;                                             //@synthesize interval=_interval - In the implementation block
+(unsigned long long)setup:(id)arg1 interval:(double)arg2 ;
+(id)idleTracker:(id)arg1 queue:(id)arg2 interval:(double)arg3 block:(/*^block*/id)arg4 ;
-(NSString *)name;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(id)block;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(void)setBlock:(id)arg1 ;
-(BOOL)firstTime;
-(id)init:(id)arg1 queue:(id)arg2 interval:(double)arg3 block:(/*^block*/id)arg4 ;
-(void)setUserActivityNotificationRef:(unsigned long long)arg1 ;
-(void)setFirstTime:(BOOL)arg1 ;
-(unsigned long long)userActivityNotificationRef;
@end

