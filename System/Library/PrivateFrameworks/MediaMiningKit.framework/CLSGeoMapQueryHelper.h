/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSQueryProtocol, OS_dispatch_source, OS_dispatch_queue;
@class CLSGeoServiceThread, NSObject;

@interface CLSGeoMapQueryHelper : NSObject {

	BOOL _simulatesTimeout;
	BOOL _alreadyLaunched;
	BOOL _didFinishQuery;
	id<CLSQueryProtocol> _query;
	/*^block*/id _cancellerBlock;
	/*^block*/id _completionBlock;
	CLSGeoServiceThread* _geoServiceThread;
	double _timeoutInterval;
	double _numberOfRetries;
	double _internalProgressTimeInterval;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _timerQueue;
	unsigned long long _retryLevel;
	double _nextRetryTime;

}

@property (nonatomic,readonly) id<CLSQueryProtocol> query;                                  //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) id cancellerBlock;                                      //@synthesize cancellerBlock=_cancellerBlock - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                                     //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) double internalProgressTimeInterval;                           //@synthesize internalProgressTimeInterval=_internalProgressTimeInterval - In the implementation block
@property (assign,nonatomic) unsigned long long retryLevel;                                 //@synthesize retryLevel=_retryLevel - In the implementation block
@property (assign,nonatomic) double nextRetryTime;                                          //@synthesize nextRetryTime=_nextRetryTime - In the implementation block
@property (assign,nonatomic) BOOL alreadyLaunched;                                          //@synthesize alreadyLaunched=_alreadyLaunched - In the implementation block
@property (assign,nonatomic) BOOL didFinishQuery;                                           //@synthesize didFinishQuery=_didFinishQuery - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                           //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> timerQueue;                       //@synthesize timerQueue=_timerQueue - In the implementation block
@property (nonatomic,retain) CLSGeoServiceThread * geoServiceThread;                        //@synthesize geoServiceThread=_geoServiceThread - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                        //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) double numberOfRetries;                                        //@synthesize numberOfRetries=_numberOfRetries - In the implementation block
@property (assign,getter=isSimulatingTimeout,nonatomic) BOOL simulatesTimeout;              //@synthesize simulatesTimeout=_simulatesTimeout - In the implementation block
-(void)dealloc;
-(id<CLSQueryProtocol>)query;
-(void)cancel;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setNumberOfRetries:(double)arg1 ;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(id)completionBlock;
-(void)_handleError:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(double)numberOfRetries;
-(void)_cancel;
-(void)_heartBeat;
-(NSObject*<OS_dispatch_queue>)timerQueue;
-(void)setTimerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSimulatesTimeout:(BOOL)arg1 ;
-(id)initWithQueryObject:(id)arg1 ;
-(void)launchQueryWithCancellerBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_forwardToGeoThread;
-(void)_handleQueryResultsForQuery:(id)arg1 error:(id)arg2 ;
-(void)_startQuery;
-(id)cancellerBlock;
-(CLSGeoServiceThread *)geoServiceThread;
-(void)setGeoServiceThread:(CLSGeoServiceThread *)arg1 ;
-(BOOL)isSimulatingTimeout;
-(double)internalProgressTimeInterval;
-(void)setInternalProgressTimeInterval:(double)arg1 ;
-(unsigned long long)retryLevel;
-(void)setRetryLevel:(unsigned long long)arg1 ;
-(double)nextRetryTime;
-(void)setNextRetryTime:(double)arg1 ;
-(BOOL)alreadyLaunched;
-(void)setAlreadyLaunched:(BOOL)arg1 ;
-(BOOL)didFinishQuery;
-(void)setDidFinishQuery:(BOOL)arg1 ;
@end

