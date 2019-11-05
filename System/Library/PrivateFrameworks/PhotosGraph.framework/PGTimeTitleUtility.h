/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PGTimeTitleUtility : NSObject
+(BOOL)_yearIsNeededForDisplayingDate:(id)arg1 ;
+(id)timeTitleWithOptions:(id)arg1 ;
+(id)timeTitleWithDateInterval:(id)arg1 allowedFormats:(unsigned long long)arg2 ;
+(id)splitTimeTitleWithOptions:(id)arg1 ;
+(id)splitTimeTitleWithDateInterval:(id)arg1 allowedFormats:(unsigned long long)arg2 ;
+(id)_splitTimeTitleWithLocalStartDate:(id)arg1 endDate:(id)arg2 startDateNode:(id)arg3 endDateNode:(id)arg4 allowedFormats:(unsigned long long)arg5 locale:(id)arg6 ;
+(id)peopleTimeTitleWithEventNodes:(id)arg1 requireMultipleYears:(BOOL)arg2 ;
+(id)peopleTimeTitleWithEventNodes:(id)arg1 ;
+(id)babyGrowingUpTimeTitleWithEventNodes:(id)arg1 ;
+(id)_numberOfYearsAgoWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2 ;
+(id)numberOfYearsAgoWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2 useOrdinal:(BOOL)arg3 ;
+(BOOL)yearIsNeededForDisplayingDate:(id)arg1 ;
+(unsigned long long)_dateIntervalFormatterTypeWithEventNodes:(id)arg1 allowedFormats:(unsigned long long)arg2 ;
+(BOOL)_eventNodesCoverCompleteMonth:(id)arg1 ;
+(BOOL)_eventNodesCoverCompleteYear:(id)arg1 ;
+(BOOL)_eventNodes:(id)arg1 coverCompleteTimeWithEdgeLabel:(id)arg2 ;
+(void)_enumerateNeighborNodesOfEventNodes:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(BOOL)_hasReachedNumberVisitsPerMonth:(unsigned long long)arg1 inEvents:(id)arg2 withLocationNodes:(id)arg3 startDateNode:(id)arg4 endDateNode:(id)arg5 ;
+(BOOL)_hasReachedNumberVisitsPerYear:(unsigned long long)arg1 inEvents:(id)arg2 withLocationNodes:(id)arg3 startDateNode:(id)arg4 endDateNode:(id)arg5 ;
+(id)_commonLocationLabelForLocationNodes:(id)arg1 ;
+(id)_dateNodesFromEventNodes:(id)arg1 eventsStartDate:(id*)arg2 eventsEndDate:(id*)arg3 ;
+(id)_significantDateNodesFromEventNodes:(id)arg1 dateFormatterType:(unsigned long long)arg2 ;
+(id)_locationNodesForTimeTitleFromLocationNodes:(id)arg1 ;
@end

