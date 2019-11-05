/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPAVRoutingDataSource : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _devicePresenceDetected;
	long long _discoveryMode;
	long long _filterMode;

}

@property (assign,nonatomic) long long discoveryMode;                       //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,readonly) BOOL devicePresenceDetected;                 //@synthesize devicePresenceDetected=_devicePresenceDetected - In the implementation block
@property (nonatomic,readonly) BOOL supportsMultipleSelection; 
@property (assign,nonatomic) long long filterMode;                          //@synthesize filterMode=_filterMode - In the implementation block
-(id)init;
-(void)dealloc;
-(long long)discoveryMode;
-(BOOL)devicePresenceDetected;
-(void)setDiscoveryMode:(long long)arg1 ;
-(void)getRoutesForCategory:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getPickedRouteHasVolumeControlWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)routeIsLeaderOfEndpoint:(id)arg1 ;
-(void)_activeAudioRouteDidChangeNotification:(id)arg1 ;
-(void)_externalScreenTypeDidChangeNotification:(id)arg1 ;
-(void)_volumeControlAvailabilityDidChangeNotification:(id)arg1 ;
-(BOOL)supportsMultipleSelection;
-(void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getExternalScreenTypeWithCompletion:(/*^block*/id)arg1 ;
-(void)unpickAirPlayAVRoutesWithCompletion:(/*^block*/id)arg1 ;
-(void)_superclassRegisterNotifications;
-(void)_superclassUnregisterNotifications;
-(long long)filterMode;
-(void)setFilterMode:(long long)arg1 ;
@end

