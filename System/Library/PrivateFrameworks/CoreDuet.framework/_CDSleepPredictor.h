/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CDSleepPredictor : NSObject
+(id)gatherBitmapHistoryFromStore:(id)arg1 forPeriod:(id)arg2 ;
+(id)findSleepPeriodInDayStarting:(id)arg1 FromActivityProbabilities:(id)arg2 ;
+(id)array:(id)arg1 reduce:(/*^block*/id)arg2 withInitialValue:(id)arg3 ;
+(id)arrayWithObject:(id)arg1 repeated:(unsigned long long)arg2 ;
+(id)array:(id)arg1 map:(/*^block*/id)arg2 ;
+(id)indexSetFromUnionOf:(id)arg1 ;
+(void)mutableArray:(id)arg1 replaceObjectsAtIndexes:(id)arg2 withObjectFromBlock:(/*^block*/id)arg3 ;
+(id)predicateForInUseVaue;
+(id)fetchFirstEventDateIntervalFromStore:(id)arg1 forStream:(id)arg2 sortDateAscending:(BOOL)arg3 intersectingInterval:(id)arg4 ;
+(id)fetchDeviceInUseDateIntervalsFromStore:(id)arg1 whichIntersectInterval:(id)arg2 ;
+(id)generateActivityBitmapFor:(id)arg1 unlockedIntervals:(id)arg2 eventsAvailableInterval:(id)arg3 ;
+(id)findAllSleepPeriodsInDayStarting:(id)arg1 FromActivityProbabilities:(id)arg2 ;
+(id)array:(id)arg1 filter:(/*^block*/id)arg2 ;
@end

