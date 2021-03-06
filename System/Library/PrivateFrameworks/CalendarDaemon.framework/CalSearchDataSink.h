/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CalSearchDataSink <NSObject>
@optional
-(BOOL)calSearchShouldStopSearching:(id)arg1;
-(void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;

@required
-(void)calSearchComplete:(id)arg1;
-(void)calSearch:(id)arg1 foundOccurrences:(CFArrayRef)arg2 cachedDays:(CFArrayRef)arg3 cachedDaysIndexes:(CFArrayRef)arg4;

@end

