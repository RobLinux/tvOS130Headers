/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/DNDScheduleTimePeriod.h>

@class DNDScheduleTime;

@interface DNDMutableScheduleTimePeriod : DNDScheduleTimePeriod

@property (nonatomic,copy) DNDScheduleTime * startTime; 
@property (nonatomic,copy) DNDScheduleTime * endTime; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEndTime:(DNDScheduleTime *)arg1 ;
-(void)setStartTime:(DNDScheduleTime *)arg1 ;
@end

