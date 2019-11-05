/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HFTemperatureItemUtilities : NSObject
+(id)currentHeatingCoolingModeValueInResponse:(id)arg1 ;
+(id)targetHeatingCoolingModeValueInResponse:(id)arg1 ;
+(id)targetTemperatureValueInResponse:(id)arg1 ;
+(long long)_heatingCoolingValueForCurrentHeaterCoolerState:(long long)arg1 isActive:(BOOL)arg2 ;
+(long long)_heatingCoolingValueForTargetHeaterCoolerState:(long long)arg1 isActive:(BOOL)arg2 ;
+(id)integerTemperatureRangeWithinNumberRange:(id)arg1 representsCelsius:(BOOL)arg2 ;
@end

