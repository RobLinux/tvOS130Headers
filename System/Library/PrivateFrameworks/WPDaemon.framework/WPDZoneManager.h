/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WPDaemon/WPDManager.h>
#import <WPDaemon/CBCentralManagerDelegate.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, CBCentralManager, NSObject, NSNumber, NSDate, NSString;

@interface WPDZoneManager : WPDManager <CBCentralManagerDelegate> {

	NSMutableDictionary* _trackRequests;
	NSMutableDictionary* _trackedZones;
	CBCentralManager* _centralManager;
	NSObject*<OS_dispatch_source> _exitTimer;
	NSNumber* _zoneExitTimeout;
	NSDate* _lastTimeScannerStarted;

}

@property (nonatomic,retain) NSMutableDictionary * trackRequests;              //@synthesize trackRequests=_trackRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * trackedZones;               //@synthesize trackedZones=_trackedZones - In the implementation block
@property (retain) CBCentralManager * centralManager;                          //@synthesize centralManager=_centralManager - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> exitTimer;                    //@synthesize exitTimer=_exitTimer - In the implementation block
@property (nonatomic,retain) NSNumber * zoneExitTimeout;                       //@synthesize zoneExitTimeout=_zoneExitTimeout - In the implementation block
@property (nonatomic,retain) NSDate * lastTimeScannerStarted;                  //@synthesize lastTimeScannerStarted=_lastTimeScannerStarted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanup;
-(id)initWithServer:(id)arg1 ;
-(void)update;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didLoseZone:(id)arg2 mask:(id)arg3 ;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(CBCentralManager *)centralManager;
-(id)generateStateDump;
-(BOOL)updateScanner;
-(void)unregisterZonesForClient:(id)arg1 ;
-(id)addZoneTrackingRequest:(id)arg1 forClient:(id)arg2 ;
-(void)unregisterZones:(id)arg1 forClient:(id)arg2 ;
-(id)getAllZones;
-(void)cancelExitTimer;
-(void)unregisterAllZones;
-(NSMutableDictionary *)trackRequests;
-(NSMutableDictionary *)trackedZones;
-(void)printTrackedZones;
-(void)startExitTimer;
-(void)setLastTimeScannerStarted:(NSDate *)arg1 ;
-(NSNumber *)zoneExitTimeout;
-(void)exitTimerFired;
-(void)setExitTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSDate *)lastTimeScannerStarted;
-(NSObject*<OS_dispatch_source>)exitTimer;
-(void)addSingleZoneTrackingRequest:(id)arg1 forClient:(id)arg2 ;
-(void)unregisterZonesForClient:(id)arg1 updateScanner:(BOOL)arg2 ;
-(void)setTrackRequests:(NSMutableDictionary *)arg1 ;
-(void)setTrackedZones:(NSMutableDictionary *)arg1 ;
-(void)setZoneExitTimeout:(NSNumber *)arg1 ;
@end

