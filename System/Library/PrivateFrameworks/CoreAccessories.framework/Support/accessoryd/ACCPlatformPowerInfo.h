/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <accessoryd/ACCPowerSiphoningControlDelegate.h>

@class NSString, ACCPowerManager, ACCPowerSiphoningControl;

@interface ACCPlatformPowerInfo : NSObject <ACCPowerSiphoningControlDelegate> {

	BOOL _isDeviceBatteryCharging;
	BOOL _isExternalChargerConnected;
	unsigned char _batteryChargeLevel;
	BOOL _isFirstSent_AvailableCurrent;
	BOOL _isFirstSent_DeviceBatteryCharging;
	BOOL _isFirstSent_ExternalChargerConnected;
	BOOL _isFirstSent_BatteryChargingState;
	BOOL _isFirstSent_BatteryChargeLevel;
	BOOL _isFirstSent_AccessoryChargingCurrent;
	BOOL _systemAsleep;
	BOOL _holdingApplePencilSleepAssertion;
	BOOL _powerUpdateSentDueToSleep;
	BOOL _requestSleepUpdate;
	unsigned short _availableCurrent;
	unsigned short _accessoryChargingCurrent;
	int _batteryChargingState;
	NSString* _endpointUID;
	NSString* _connectionUID;
	ACCPowerManager* _accessoryPowerManager;
	ACCPowerSiphoningControl* _siphoningControl;
	unsigned long long _updateTypesBitmask;
	unsigned long long _oldUpdateTypesBitmask;
	NSString* _sleepNotificationClientUUID;
	NSString* _batteryNotificationClientUUID;
	NSString* _applePencilBatteryNotificationClientUUID;

}

@property (readonly) NSString * endpointUID;                                                 //@synthesize endpointUID=_endpointUID - In the implementation block
@property (readonly) NSString * connectionUID;                                               //@synthesize connectionUID=_connectionUID - In the implementation block
@property (nonatomic,readonly) ACCPowerManager * accessoryPowerManager;                      //@synthesize accessoryPowerManager=_accessoryPowerManager - In the implementation block
@property (nonatomic,readonly) ACCPowerSiphoningControl * siphoningControl;                  //@synthesize siphoningControl=_siphoningControl - In the implementation block
@property (assign,nonatomic) unsigned long long updateTypesBitmask;                          //@synthesize updateTypesBitmask=_updateTypesBitmask - In the implementation block
@property (assign,nonatomic) unsigned long long oldUpdateTypesBitmask;                       //@synthesize oldUpdateTypesBitmask=_oldUpdateTypesBitmask - In the implementation block
@property (nonatomic,readonly) unsigned short availableCurrent;                              //@synthesize availableCurrent=_availableCurrent - In the implementation block
@property (nonatomic,readonly) BOOL isDeviceBatteryCharging;                                 //@synthesize isDeviceBatteryCharging=_isDeviceBatteryCharging - In the implementation block
@property (nonatomic,readonly) BOOL isExternalChargerConnected;                              //@synthesize isExternalChargerConnected=_isExternalChargerConnected - In the implementation block
@property (nonatomic,readonly) int batteryChargingState;                                     //@synthesize batteryChargingState=_batteryChargingState - In the implementation block
@property (nonatomic,readonly) unsigned char batteryChargeLevel;                             //@synthesize batteryChargeLevel=_batteryChargeLevel - In the implementation block
@property (assign,nonatomic) unsigned short accessoryChargingCurrent;                        //@synthesize accessoryChargingCurrent=_accessoryChargingCurrent - In the implementation block
@property (nonatomic,readonly) BOOL isFirstSent_AvailableCurrent;                            //@synthesize isFirstSent_AvailableCurrent=_isFirstSent_AvailableCurrent - In the implementation block
@property (nonatomic,readonly) BOOL isFirstSent_DeviceBatteryCharging;                       //@synthesize isFirstSent_DeviceBatteryCharging=_isFirstSent_DeviceBatteryCharging - In the implementation block
@property (nonatomic,readonly) BOOL isFirstSent_ExternalChargerConnected;                    //@synthesize isFirstSent_ExternalChargerConnected=_isFirstSent_ExternalChargerConnected - In the implementation block
@property (nonatomic,readonly) BOOL isFirstSent_BatteryChargingState;                        //@synthesize isFirstSent_BatteryChargingState=_isFirstSent_BatteryChargingState - In the implementation block
@property (nonatomic,readonly) BOOL isFirstSent_BatteryChargeLevel;                          //@synthesize isFirstSent_BatteryChargeLevel=_isFirstSent_BatteryChargeLevel - In the implementation block
@property (nonatomic,readonly) BOOL isFirstSent_AccessoryChargingCurrent;                    //@synthesize isFirstSent_AccessoryChargingCurrent=_isFirstSent_AccessoryChargingCurrent - In the implementation block
@property (assign,nonatomic) BOOL systemAsleep;                                              //@synthesize systemAsleep=_systemAsleep - In the implementation block
@property (nonatomic,copy) NSString * sleepNotificationClientUUID;                           //@synthesize sleepNotificationClientUUID=_sleepNotificationClientUUID - In the implementation block
@property (assign,nonatomic) BOOL holdingApplePencilSleepAssertion;                          //@synthesize holdingApplePencilSleepAssertion=_holdingApplePencilSleepAssertion - In the implementation block
@property (nonatomic,copy) NSString * batteryNotificationClientUUID;                         //@synthesize batteryNotificationClientUUID=_batteryNotificationClientUUID - In the implementation block
@property (nonatomic,copy) NSString * applePencilBatteryNotificationClientUUID;              //@synthesize applePencilBatteryNotificationClientUUID=_applePencilBatteryNotificationClientUUID - In the implementation block
@property (assign,nonatomic) BOOL powerUpdateSentDueToSleep;                                 //@synthesize powerUpdateSentDueToSleep=_powerUpdateSentDueToSleep - In the implementation block
@property (assign,nonatomic) BOOL requestSleepUpdate;                                        //@synthesize requestSleepUpdate=_requestSleepUpdate - In the implementation block
-(void)dealloc;
-(unsigned char)batteryChargeLevel;
-(NSString *)endpointUID;
-(NSString *)connectionUID;
-(void)powerInfoChangeNotificationHandler:(id)arg1 ;
-(void)setBatteryNotificationClientUUID:(NSString *)arg1 ;
-(BOOL)isExternalChargerConnected;
-(NSString *)batteryNotificationClientUUID;
-(void)setHoldingApplePencilSleepAssertion:(BOOL)arg1 ;
-(void)setApplePencilBatteryNotificationClientUUID:(NSString *)arg1 ;
-(NSString *)applePencilBatteryNotificationClientUUID;
-(BOOL)holdingApplePencilSleepAssertion;
-(BOOL)requestSleepUpdate;
-(void)stopPowerUpdates;
-(void)setRequestSleepUpdate:(BOOL)arg1 ;
-(void)startPowerUpdates;
-(id)initWithEndpointUID:(id)arg1 andBitmask:(unsigned long long)arg2 andOldBitmask:(unsigned long long)arg3 ;
-(unsigned long long)updateTypesBitmask;
-(void)setUpdateTypesBitmask:(unsigned long long)arg1 ;
-(void)setOldUpdateTypesBitmask:(unsigned long long)arg1 ;
-(unsigned long long)oldUpdateTypesBitmask;
-(BOOL)isUpdateTypeEnabled:(int)arg1 ;
-(BOOL)isOldUpdateTypeEnabled:(int)arg1 ;
-(NSString *)sleepNotificationClientUUID;
-(void)setSleepNotificationClientUUID:(NSString *)arg1 ;
-(void)systemWillSleepNotificationHandler:(id)arg1 ;
-(void)systemHasPoweredOnNotificationHandler:(id)arg1 ;
-(void)startSiphoningControl;
-(void)setSystemAsleep:(BOOL)arg1 ;
-(unsigned short)accessoryChargingCurrent;
-(void)setAccessoryChargingCurrent:(unsigned short)arg1 ;
-(void)setPowerUpdateSentDueToSleep:(BOOL)arg1 ;
-(ACCPowerManager *)accessoryPowerManager;
-(ACCPowerSiphoningControl *)siphoningControl;
-(unsigned short)availableCurrent;
-(BOOL)isDeviceBatteryCharging;
-(int)batteryChargingState;
-(BOOL)isFirstSent_AvailableCurrent;
-(BOOL)isFirstSent_DeviceBatteryCharging;
-(BOOL)isFirstSent_ExternalChargerConnected;
-(BOOL)isFirstSent_BatteryChargingState;
-(BOOL)isFirstSent_BatteryChargeLevel;
-(BOOL)isFirstSent_AccessoryChargingCurrent;
-(BOOL)systemAsleep;
-(BOOL)powerUpdateSentDueToSleep;
@end

