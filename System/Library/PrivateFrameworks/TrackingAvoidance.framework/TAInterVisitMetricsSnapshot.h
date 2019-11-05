/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate;

@interface TAInterVisitMetricsSnapshot : NSObject {

	NSMutableDictionary* _lastAssociatedLocationPerDevice;
	NSMutableDictionary* _lastAdvPerDevice;
	BOOL _snapshotClosed;
	NSDate* _initialTime;
	NSDate* _lastUpdateTime;
	NSMutableDictionary* _accumulatedDeviceMetrics;

}

@property (nonatomic,readonly) NSDate * initialTime;                                        //@synthesize initialTime=_initialTime - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdateTime;                                     //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * accumulatedDeviceMetrics;              //@synthesize accumulatedDeviceMetrics=_accumulatedDeviceMetrics - In the implementation block
-(NSDate *)initialTime;
-(BOOL)isClosed;
-(NSDate *)lastUpdateTime;
-(id)initWithTime:(id)arg1 ;
-(void)updateInterVisitMetric:(id)arg1 withUpdatedTime:(id)arg2 andCloseSnapshot:(BOOL)arg3 ;
-(NSMutableDictionary *)accumulatedDeviceMetrics;
@end

