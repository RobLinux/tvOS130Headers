/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSWatchdogDelegate, BSWatchdogProviding, OS_dispatch_queue;
@class NSObject, BSTimer, NSDate;

@interface BSWatchdog : NSObject {

	id<BSWatchdogDelegate> _delegate;
	id<BSWatchdogProviding> _provider;
	NSObject*<OS_dispatch_queue> _queue;
	double _timeout;
	BSTimer* _timer;
	/*^block*/id _completion;
	NSDate* _startDate;
	BOOL _invalidated;
	BOOL _completed;
	BOOL _hasFired;

}

@property (nonatomic,retain) id<BSWatchdogDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<BSWatchdogProviding> provider;                //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (getter=hasFired,nonatomic,readonly) BOOL fired;                      //@synthesize hasFired=_hasFired - In the implementation block
-(id)description;
-(void)dealloc;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<BSWatchdogDelegate>)delegate;
-(void)setDelegate:(id<BSWatchdogDelegate>)arg1 ;
-(void)start;
-(double)timeout;
-(NSDate *)startDate;
-(id)initWithProvider:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_startWatchdogTimer;
-(void)_completeWatchdogAfterFiring:(BOOL)arg1 ;
-(void)_watchdogInvalidated;
-(void)_invalidateTimer;
-(void)_stageOneTimerFired;
-(void)_setupTimerWithInterval:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stageTwoTimerFired;
-(void)_watchdogTimerFired;
-(id)initWithProvider:(id)arg1 queue:(id)arg2 ;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 ;
-(id<BSWatchdogProviding>)provider;
-(BOOL)hasFired;
@end

