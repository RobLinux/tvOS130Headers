/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSMeasurement;


@protocol INGetCarPowerLevelStatusIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSNumber * fuelPercentRemaining; 
@property (nonatomic,copy) NSNumber * chargePercentRemaining; 
@property (nonatomic,copy) NSMeasurement * distanceRemaining; 
@property (nonatomic,copy) NSNumber * charging; 
@property (nonatomic,copy) NSNumber * minutesToFull; 
@required
-(long long)code;
-(NSMeasurement *)distanceRemaining;
-(void)setDistanceRemaining:(id)arg1;
-(NSNumber *)chargePercentRemaining;
-(void)setChargePercentRemaining:(id)arg1;
-(NSNumber *)charging;
-(void)setCharging:(id)arg1;
-(NSNumber *)fuelPercentRemaining;
-(void)setFuelPercentRemaining:(id)arg1;
-(NSNumber *)minutesToFull;
-(void)setMinutesToFull:(id)arg1;

@end

