/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/XPCServices/CAReportingService.xpc/CAReportingService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSThread;

@interface CAReportingBlockThrottle : NSObject {

	BOOL _shouldKeepRunning;
	NSMutableDictionary* _timersInFlight;
	NSMutableArray* _unscheduledTimerKeys;
	NSThread* _queueThread;

}

@property (retain) NSMutableDictionary * timersInFlight;               //@synthesize timersInFlight=_timersInFlight - In the implementation block
@property (retain) NSMutableArray * unscheduledTimerKeys;              //@synthesize unscheduledTimerKeys=_unscheduledTimerKeys - In the implementation block
@property (retain) NSThread * queueThread;                             //@synthesize queueThread=_queueThread - In the implementation block
@property (assign) BOOL shouldKeepRunning;                             //@synthesize shouldKeepRunning=_shouldKeepRunning - In the implementation block
+(double)determineSleepTime:(id)arg1 ;
+(id)buildMessageKey:(id)arg1 reporterID:(long long)arg2 category:(unsigned)arg3 type:(unsigned short)arg4 ;
-(id)init;
-(void)waitForCompletion;
-(void)addMessageBlock:(/*^block*/id)arg1 reporterID:(long long)arg2 message:(id)arg3 category:(unsigned)arg4 type:(unsigned short)arg5 ;
-(BOOL)shouldKeepRunning;
-(void)setShouldKeepRunning:(BOOL)arg1 ;
-(NSMutableDictionary *)timersInFlight;
-(void)setTimersInFlight:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)unscheduledTimerKeys;
-(void)setUnscheduledTimerKeys:(NSMutableArray *)arg1 ;
-(NSThread *)queueThread;
-(void)setQueueThread:(NSThread *)arg1 ;
@end

