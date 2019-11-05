/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/CalActivatable.h>

@protocol OS_dispatch_queue, OS_dispatch_source, CalDateProvider;
@class NSObject, NSDate;

@interface EKTravelAdvisoryTimelinessAuthority : NSObject <CalActivatable> {

	BOOL _internalActive;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_source> _timer;
	NSDate* _startOfLeaveNowPeriodInternal;
	NSDate* _startOfRunningLatePeriodInternal;
	unsigned long long _internalPeriod;
	/*^block*/id _internalPeriodChangedCallback;
	id<CalDateProvider> _dateProvider;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSDate * startOfLeaveNowPeriodInternal;                  //@synthesize startOfLeaveNowPeriodInternal=_startOfLeaveNowPeriodInternal - In the implementation block
@property (nonatomic,retain) NSDate * startOfRunningLatePeriodInternal;               //@synthesize startOfRunningLatePeriodInternal=_startOfRunningLatePeriodInternal - In the implementation block
@property (assign,nonatomic) BOOL internalActive;                                     //@synthesize internalActive=_internalActive - In the implementation block
@property (assign,nonatomic) unsigned long long internalPeriod;                       //@synthesize internalPeriod=_internalPeriod - In the implementation block
@property (nonatomic,copy) id internalPeriodChangedCallback;                          //@synthesize internalPeriodChangedCallback=_internalPeriodChangedCallback - In the implementation block
@property (nonatomic,readonly) id<CalDateProvider> dateProvider;                      //@synthesize dateProvider=_dateProvider - In the implementation block
@property (nonatomic,readonly) NSDate * startOfLeaveNowPeriod; 
@property (nonatomic,readonly) NSDate * startOfRunningLatePeriod; 
@property (nonatomic,copy) id periodChangedCallback; 
@property (nonatomic,readonly) unsigned long long period; 
+(id)stringForPeriod:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)activate;
-(void)deactivate;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)active;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)period;
-(void)_refreshTimer;
-(void)_refreshPeriod;
-(void)_uninstallTimer;
-(id)initWithDateProvider:(id)arg1 ;
-(BOOL)internalActive;
-(void)setInternalActive:(BOOL)arg1 ;
-(void)_refresh;
-(NSDate *)startOfLeaveNowPeriodInternal;
-(NSDate *)startOfRunningLatePeriodInternal;
-(void)setStartOfLeaveNowPeriodInternal:(NSDate *)arg1 ;
-(void)setStartOfRunningLatePeriodInternal:(NSDate *)arg1 ;
-(void)setInternalPeriodChangedCallback:(id)arg1 ;
-(id)internalPeriodChangedCallback;
-(unsigned long long)internalPeriod;
-(id<CalDateProvider>)dateProvider;
-(void)setInternalPeriod:(unsigned long long)arg1 ;
-(void)_refreshOnDate:(id)arg1 ;
-(NSDate *)startOfLeaveNowPeriod;
-(NSDate *)startOfRunningLatePeriod;
-(void)updateWithHypothesis:(id)arg1 ;
-(void)setPeriodChangedCallback:(id)arg1 ;
-(id)periodChangedCallback;
@end

