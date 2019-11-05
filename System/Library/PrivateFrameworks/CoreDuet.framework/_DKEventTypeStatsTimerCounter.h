/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKEventStatsCounterInternalProperty.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventTypeStatsTimerCounter : NSObject <_DKEventStatsCounterInternalProperty> {

	_DKEventStatsCounterInternal* _internal;

}

@property (retain) _DKEventStatsCounterInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 ;
-(id)eventName;
-(_DKEventStatsCounterInternal *)internal;
-(void)addTimingWithStartDate:(id)arg1 endDate:(id)arg2 typeValue:(id)arg3 ;
-(void)setInternal:(_DKEventStatsCounterInternal *)arg1 ;
-(unsigned long long)countWithTypeValue:(id)arg1 ;
-(void)addTimingWithTimeInterval:(double)arg1 typeValue:(id)arg2 ;
@end

