/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CUTPowerMonitor : NSObject {

	id _internal;

}

@property (nonatomic,readonly) BOOL isExternalPowerConnected; 
@property (nonatomic,readonly) double batteryPercentRemaining; 
+(id)sharedInstance;
-(void)dealloc;
-(id)_init;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(BOOL)_initIOService;
-(void)updateBatteryLevelWithBatteryEntry:(unsigned)arg1 ;
-(BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(void)_handlePowerChangedNotificationWithMessageType:(unsigned)arg1 notificationID:(void*)arg2 ;
-(void)updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(BOOL)isExternalPowerConnected;
-(double)batteryPercentRemaining;
@end

