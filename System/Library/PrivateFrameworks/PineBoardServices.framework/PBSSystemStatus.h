/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PBSSystemStatus : NSObject
+(void)initialize;
+(void)load;
+(BOOL)isVideoPlaying;
+(BOOL)isPresenceDetectionActive;
+(void)addPermanentObserverForProperty:(id)arg1 notifyInitial:(BOOL)arg2 invokeOnMainThread:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
+(unsigned long long)systemAttentionState;
+(void)_setSystemSleepStarting;
+(void)_setSystemSleepStopping;
+(void)_setSystemSleepActive;
+(BOOL)isMusicPlaying;
+(BOOL)isInternetAvailable;
+(BOOL)isSystemUsingEthernet;
+(BOOL)isSystemUsingWiFi;
+(BOOL)isAppleRemoteConnected;
+(BOOL)isProximityPairingInProgress;
+(BOOL)isBluetoothKeyboardConnected;
+(unsigned long long)systemDisplayState;
+(unsigned long long)lateNightMode;
+(unsigned long long)systemThermalState;
+(BOOL)isSystemUpdating;
+(void)_setSystemActive;
+(void)_setHiliteModeStarting;
+(void)_setHiliteModeActive;
+(void)_setScreenSaverStarting;
+(void)_setScreenSaverActive;
+(void)_setPresenceDetectionActive:(BOOL)arg1 ;
+(void)_setVideoPlaying:(BOOL)arg1 musicPlaying:(BOOL)arg2 ;
+(void)_setThermalState:(unsigned long long)arg1 ;
+(void)_setUpdatingOS:(BOOL)arg1 ;
-(id)init;
@end

