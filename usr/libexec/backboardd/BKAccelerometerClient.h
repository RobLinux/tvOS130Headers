/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/BKGSEventClient.h>

@interface BKAccelerometerClient : BKGSEventClient {

	float _xThreshold;
	float _yThreshold;
	float _zThreshold;
	BOOL _passiveOrientationEvents;
	BOOL _wantsOrientationEvents;
	BOOL _wantsAccelerometerEvents;
	double _accelerometerUpdateInterval;
	double _lastAccelerometerEventTimestamp;

}

@property (assign,setter=_setLastAccelerometerEventTimestamp:,getter=_lastAccelerometerEventTimestamp,nonatomic) double lastAccelerometerEventTimestamp;              //@synthesize lastAccelerometerEventTimestamp=_lastAccelerometerEventTimestamp - In the implementation block
@property (assign,nonatomic) BOOL wantsAccelerometerEvents;                                                                                                           //@synthesize wantsAccelerometerEvents=_wantsAccelerometerEvents - In the implementation block
@property (assign,nonatomic) double accelerometerUpdateInterval;                                                                                                      //@synthesize accelerometerUpdateInterval=_accelerometerUpdateInterval - In the implementation block
@property (assign,nonatomic) float xThreshold;                                                                                                                        //@synthesize xThreshold=_xThreshold - In the implementation block
@property (assign,nonatomic) float yThreshold;                                                                                                                        //@synthesize yThreshold=_yThreshold - In the implementation block
@property (assign,nonatomic) float zThreshold;                                                                                                                        //@synthesize zThreshold=_zThreshold - In the implementation block
@property (assign,nonatomic) BOOL passiveOrientationEvents;                                                                                                           //@synthesize passiveOrientationEvents=_passiveOrientationEvents - In the implementation block
@property (assign,nonatomic) BOOL wantsOrientationEvents;                                                                                                             //@synthesize wantsOrientationEvents=_wantsOrientationEvents - In the implementation block
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setXThreshold:(float)arg1 ;
-(void)setYThreshold:(float)arg1 ;
-(void)setZThreshold:(float)arg1 ;
-(void)setPassiveOrientationEvents:(BOOL)arg1 ;
-(float)xThreshold;
-(float)yThreshold;
-(float)zThreshold;
-(BOOL)passiveOrientationEvents;
-(void)_queue_invalidate;
-(void)setAccelerometerUpdateInterval:(double)arg1 ;
-(double)accelerometerUpdateInterval;
-(void)handleAccelerometerEventWithTimestamp:(double)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 samplingInterval:(double)arg5 ;
-(void)handleOrientationEvent:(long long)arg1 orientationLocked:(BOOL)arg2 ;
-(double)_lastAccelerometerEventTimestamp;
-(BOOL)_passesThresholdForX:(float)arg1 y:(float)arg2 z:(float)arg3 ;
-(BOOL)_shouldSendSampleEventWithTimestamp:(double)arg1 samplingInterval:(double)arg2 ;
-(BOOL)wantsOrientationEvents;
-(void)setWantsOrientationEvents:(BOOL)arg1 ;
-(BOOL)wantsAccelerometerEvents;
-(void)setWantsAccelerometerEvents:(BOOL)arg1 ;
-(void)_setLastAccelerometerEventTimestamp:(double)arg1 ;
@end

