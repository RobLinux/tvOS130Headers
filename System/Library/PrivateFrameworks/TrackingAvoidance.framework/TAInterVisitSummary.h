/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateInterval, NSArray, TASPAdvertisement;

@interface TAInterVisitSummary : NSObject {

	NSDateInterval* _deviceObservationInterval;
	NSArray* _deviceLocationHistory;
	TASPAdvertisement* _latestObservation;

}

@property (nonatomic,readonly) NSDateInterval * deviceObservationInterval;              //@synthesize deviceObservationInterval=_deviceObservationInterval - In the implementation block
@property (nonatomic,readonly) NSArray * deviceLocationHistory;                         //@synthesize deviceLocationHistory=_deviceLocationHistory - In the implementation block
@property (nonatomic,readonly) TASPAdvertisement * latestObservation;                   //@synthesize latestObservation=_latestObservation - In the implementation block
-(NSArray *)deviceLocationHistory;
-(NSDateInterval *)deviceObservationInterval;
-(TASPAdvertisement *)latestObservation;
-(id)initWithObservationInterval:(id)arg1 andLocationHistory:(id)arg2 andLastObservation:(id)arg3 ;
@end

