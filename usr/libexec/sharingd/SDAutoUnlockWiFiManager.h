/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:53 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source;
@class NSObject, SDAutoUnlockWiFiRequest, CLLocationManager, NSMutableArray, NSString;

@interface SDAutoUnlockWiFiManager : NSObject <CLLocationManagerDelegate> {

	BOOL _awdlStartFailed;
	BOOL _awdlStarting;
	BOOL _awdlTimerFired;
	NSObject*<OS_dispatch_source> _awdlTimer;
	id _awdlNetwork;
	SDAutoUnlockWiFiRequest* _currentRequest;
	CLLocationManager* _locationManager;
	NSMutableArray* _wifiRequestQueue;

}

@property (retain) NSObject*<OS_dispatch_source> awdlTimer;                    //@synthesize awdlTimer=_awdlTimer - In the implementation block
@property (retain) id awdlNetwork;                                             //@synthesize awdlNetwork=_awdlNetwork - In the implementation block
@property (assign,nonatomic) BOOL awdlStartFailed;                             //@synthesize awdlStartFailed=_awdlStartFailed - In the implementation block
@property (assign,nonatomic) BOOL awdlStarting;                                //@synthesize awdlStarting=_awdlStarting - In the implementation block
@property (assign,nonatomic) BOOL awdlTimerFired;                              //@synthesize awdlTimerFired=_awdlTimerFired - In the implementation block
@property (retain) SDAutoUnlockWiFiRequest * currentRequest;                   //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * wifiRequestQueue;                //@synthesize wifiRequestQueue=_wifiRequestQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(SDAutoUnlockWiFiRequest *)currentRequest;
-(void)start;
-(void)setCurrentRequest:(SDAutoUnlockWiFiRequest *)arg1 ;
-(void)locationManager:(id)arg1 didRangePeers:(id)arg2 ;
-(void)locationManager:(id)arg1 rangingDidFailForPeer:(id)arg2 withError:(id)arg3 ;
-(void)_addObservers;
-(void)_removeObservers;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(NSObject*<OS_dispatch_source>)awdlTimer;
-(void)setAwdlTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_createLocationManager;
-(void)_createWiFiObserver;
-(NSMutableArray *)wifiRequestQueue;
-(void)_processRequestQueue;
-(BOOL)awdlStarting;
-(id)awdlNetwork;
-(BOOL)awdlStartFailed;
-(BOOL)awdlTimerFired;
-(void)_disableRangeable;
-(void)_stopAWDL;
-(void)setAwdlStarting:(BOOL)arg1 ;
-(void)_startAWDLWithInfo:(id)arg1 ;
-(void)_invalidateCurrentRequest;
-(void)setAwdlStartFailed:(BOOL)arg1 ;
-(void)setAwdlTimerFired:(BOOL)arg1 ;
-(void)_enableRangeableIfNeeded;
-(void)restartAWDLTimer;
-(void)setAwdlNetwork:(id)arg1 ;
-(void)invalidateAWDLTimer;
-(void)handleAWDLTimerFired;
-(void)_handleNetworkStarted:(WiFiNetworkRef)arg1 error:(long long)arg2 ;
-(void)_handleNetworkStoppedWithError:(long long)arg1 ;
-(void)_handleAWDLDisabledIfNeeded;
-(BOOL)addWiFiRequest:(id)arg1 ;
-(void)cancelWiFiRequest:(id)arg1 ;
-(void)_startRanging;
-(void)handleNetworkStarted:(WiFiNetworkRef)arg1 error:(long long)arg2 ;
-(void)handleNetworkStoppedWithError:(long long)arg1 ;
-(void)setWifiRequestQueue:(NSMutableArray *)arg1 ;
@end

