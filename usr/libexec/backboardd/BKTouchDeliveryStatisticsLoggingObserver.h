/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:33 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BSTimer, NSObject;

@interface BKTouchDeliveryStatisticsLoggingObserver : NSObject {

	long long _touchUpCount;
	long long _tapToWakeCount;
	long long _stylusTouchCount;
	long long _detachedTouchCount;
	unsigned _lastTouchID;
	double _startCoalescingTime;
	BSTimer* _timer;
	NSObject*<OS_dispatch_queue> _workQueue;

}
-(id)initWithWorkQueue:(id)arg1 ;
-(void)workQueue_logStatisticsForTouchUp:(unsigned)arg1 detached:(BOOL)arg2 tapToWake:(BOOL)arg3 transducerType:(unsigned)arg4 context:(unsigned)arg5 pid:(int)arg6 ;
-(void)_workQueue_resetStatistics;
@end

