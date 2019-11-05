/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:45 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLDuetMonitorServiceProtocol <CLIntersiloServiceProtocol>
@required
-(void)startMonitoringForegroundAppLaunchForClient:(byref id)arg1;
-(void)stopMonitoringForegroundAppLaunchForClient:(byref id)arg1;
-(void)startMonitoringAudioOutputRouteConnectedForClient:(byref id)arg1;
-(void)stopMonitoringAudioOutputRouteConnectedForClient:(byref id)arg1;
-(void)startMonitoringBluetoothConnectedForClient:(byref id)arg1;
-(void)stopMonitoringBluetoothConnectedForClient:(byref id)arg1;
-(void)startMonitoringHomeKitAppViewForClient:(byref id)arg1;
-(void)stopMonitoringHomeKitAppViewForClient:(byref id)arg1;
-(void)stopMonitoringForClient:(byref id)arg1;
-(void)startMonitoringForegroundAppLaunchWithPredicate:(id)arg1 forClient:(byref id)arg2;
-(void)startMonitoringFirstWakeOfDayForClient:(byref id)arg1;
-(void)startMonitoringHomeKitAccessoryForClient:(byref id)arg1;
-(void)startMonitoringHomeKitSceneForClient:(byref id)arg1;
-(void)startMonitoringNowPlayingForClient:(byref id)arg1;
-(void)stopMonitoringForegroundAppLaunchWithPredicate:(id)arg1 forClient:(byref id)arg2;
-(void)stopMonitoringFirstWakeOfDayForClient:(byref id)arg1;
-(void)stopMonitoringHomeKitAccessoryForClient:(byref id)arg1;
-(void)stopMonitoringHomeKitSceneForClient:(byref id)arg1;
-(void)stopMonitoringNowPlayingForClient:(byref id)arg1;

@end

