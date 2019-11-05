/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMSystemEnergySaverDeclaration_PowerSettings : CEMPayloadBase {

	NSNumber* _payloadDisplaySleepTimer;
	NSNumber* _payloadDiskSleepTimer;
	NSNumber* _payloadSystemSleepTimer;
	NSNumber* _payloadReduceProcessorSpeed;
	NSNumber* _payloadDynamicPowerStep;
	NSNumber* _payloadWakeOnLAN;
	NSNumber* _payloadWakeOnModemRing;
	NSNumber* _payloadAutomaticRestartOnPowerLoss;

}

@property (nonatomic,copy) NSNumber * payloadDisplaySleepTimer;                        //@synthesize payloadDisplaySleepTimer=_payloadDisplaySleepTimer - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDiskSleepTimer;                           //@synthesize payloadDiskSleepTimer=_payloadDiskSleepTimer - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSystemSleepTimer;                         //@synthesize payloadSystemSleepTimer=_payloadSystemSleepTimer - In the implementation block
@property (nonatomic,copy) NSNumber * payloadReduceProcessorSpeed;                     //@synthesize payloadReduceProcessorSpeed=_payloadReduceProcessorSpeed - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDynamicPowerStep;                         //@synthesize payloadDynamicPowerStep=_payloadDynamicPowerStep - In the implementation block
@property (nonatomic,copy) NSNumber * payloadWakeOnLAN;                                //@synthesize payloadWakeOnLAN=_payloadWakeOnLAN - In the implementation block
@property (nonatomic,copy) NSNumber * payloadWakeOnModemRing;                          //@synthesize payloadWakeOnModemRing=_payloadWakeOnModemRing - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAutomaticRestartOnPowerLoss;              //@synthesize payloadAutomaticRestartOnPowerLoss=_payloadAutomaticRestartOnPowerLoss - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithDisplaySleepTimer:(id)arg1 withDiskSleepTimer:(id)arg2 withSystemSleepTimer:(id)arg3 withReduceProcessorSpeed:(id)arg4 withDynamicPowerStep:(id)arg5 withWakeOnLAN:(id)arg6 withWakeOnModemRing:(id)arg7 withAutomaticRestartOnPowerLoss:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDisplaySleepTimer:(NSNumber *)arg1 ;
-(void)setPayloadDiskSleepTimer:(NSNumber *)arg1 ;
-(void)setPayloadSystemSleepTimer:(NSNumber *)arg1 ;
-(void)setPayloadReduceProcessorSpeed:(NSNumber *)arg1 ;
-(void)setPayloadDynamicPowerStep:(NSNumber *)arg1 ;
-(void)setPayloadWakeOnLAN:(NSNumber *)arg1 ;
-(void)setPayloadWakeOnModemRing:(NSNumber *)arg1 ;
-(void)setPayloadAutomaticRestartOnPowerLoss:(NSNumber *)arg1 ;
-(NSNumber *)payloadDisplaySleepTimer;
-(NSNumber *)payloadDiskSleepTimer;
-(NSNumber *)payloadSystemSleepTimer;
-(NSNumber *)payloadReduceProcessorSpeed;
-(NSNumber *)payloadDynamicPowerStep;
-(NSNumber *)payloadWakeOnLAN;
-(NSNumber *)payloadWakeOnModemRing;
-(NSNumber *)payloadAutomaticRestartOnPowerLoss;
@end

