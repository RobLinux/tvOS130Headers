/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/DNDScheduleSettings.h>

@class DNDScheduleTimePeriod;

@interface DNDMutableScheduleSettings : DNDScheduleSettings

@property (assign,nonatomic) unsigned long long scheduleEnabledSetting; 
@property (nonatomic,copy) DNDScheduleTimePeriod * timePeriod; 
@property (assign,nonatomic) unsigned long long bedtimeBehaviorEnabledSetting; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScheduleEnabledSetting:(unsigned long long)arg1 ;
-(void)setTimePeriod:(DNDScheduleTimePeriod *)arg1 ;
-(void)setBedtimeBehaviorEnabledSetting:(unsigned long long)arg1 ;
@end

