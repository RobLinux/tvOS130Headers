/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue, MXMProbeDelegate;
@class NSObject, MXMSampleFilter;

@interface MXMProbe : NSObject {

	/*^block*/id _updateHandler;
	/*^block*/id _stopHandler;
	NSObject*<OS_dispatch_semaphore> _stopWaiter;
	BOOL __updating;
	BOOL __shouldStop;
	MXMSampleFilter* _filter;
	NSObject*<OS_dispatch_queue> _updateQueue;
	id<MXMProbeDelegate> _delegate;

}

@property (assign) BOOL _updating;                                                  //@synthesize _updating=__updating - In the implementation block
@property (assign) BOOL _shouldStop;                                                //@synthesize _shouldStop=__shouldStop - In the implementation block
@property (nonatomic,copy) MXMSampleFilter * filter;                                //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> updateQueue;              //@synthesize updateQueue=_updateQueue - In the implementation block
@property (assign,nonatomic,__weak) id<MXMProbeDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL updating; 
+(id)probe;
-(id)init;
-(id<MXMProbeDelegate>)delegate;
-(void)setDelegate:(id<MXMProbeDelegate>)arg1 ;
-(MXMSampleFilter *)filter;
-(void)setFilter:(MXMSampleFilter *)arg1 ;
-(void)_stopUpdates;
-(void)stopUpdates;
-(BOOL)updating;
-(BOOL)_updating;
-(NSObject*<OS_dispatch_queue>)updateQueue;
-(void)setUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)_shouldStop;
-(void)_handleIncomingData:(id)arg1 ;
-(BOOL)performPreIterationActions;
-(void)updateNowUntilStoppedWithUpdateHandler:(/*^block*/id)arg1 stopHandler:(/*^block*/id)arg2 ;
-(id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long*)arg2 ;
-(void)_beginUpdates;
-(id)sampleWithTimeout:(double)arg1 ;
-(void)updateNowUntilStopped;
-(void)updateNowUntilTimeout:(double)arg1 ;
-(BOOL)waitUntilStoppedWithTimeout:(double)arg1 ;
-(void)updateNowUntilTimeout:(double)arg1 updateHandler:(/*^block*/id)arg2 stopHandler:(/*^block*/id)arg3 ;
-(void)set_updating:(BOOL)arg1 ;
-(void)set_shouldStop:(BOOL)arg1 ;
-(BOOL)_setupWaitSemaphore;
-(void)updateNowUntilStoppedWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)updateNowUntilTimeout:(double)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)waitForeverUntilStopped;
@end

