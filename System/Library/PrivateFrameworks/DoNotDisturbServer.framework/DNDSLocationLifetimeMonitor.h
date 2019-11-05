/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/CLLocationManagerDelegate.h>
#import <DoNotDisturbServer/DNDSLifetimeMonitor.h>

@protocol OS_dispatch_queue, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate;
@class NSObject, CLLocationManager, CLRegion, NSArray, NSString;

@interface DNDSLocationLifetimeMonitor : NSObject <CLLocationManagerDelegate, DNDSLifetimeMonitor> {

	NSObject*<OS_dispatch_queue> _queue;
	CLLocationManager* _locationManager;
	CLRegion* _currentRegion;
	BOOL _regionEntered;
	BOOL _hasActiveLifetimes;
	NSArray* _activeLifetimeAssertionUUIDs;
	id<DNDSLifetimeMonitorDataSource> _dataSource;
	id<DNDSLifetimeMonitorDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * activeLifetimeAssertionUUIDs;                    //@synthesize activeLifetimeAssertionUUIDs=_activeLifetimeAssertionUUIDs - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<DNDSLifetimeMonitorDelegate>)delegate;
-(void)setDelegate:(id<DNDSLifetimeMonitorDelegate>)arg1 ;
-(id<DNDSLifetimeMonitorDataSource>)dataSource;
-(void)setDataSource:(id<DNDSLifetimeMonitorDataSource>)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3 ;
-(NSArray *)activeLifetimeAssertionUUIDs;
-(void)refreshMonitorForDate:(id)arg1 ;
-(void)_queue_refreshMonitor;
-(void)_queue_stopMonitoringCurrentLocation;
-(void)_queue_sendExpiryEventForAllLocationAssertions;
-(void)_queue_beginMonitoringCurrentLocation;
-(void)_queue_geofenceLocation:(id)arg1 ;
@end

