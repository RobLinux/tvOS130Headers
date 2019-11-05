/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLAggdLogging : NSObject
+(void)performMomentsStatisticsLogging:(id)arg1 ;
+(void)performCollectionsStaticsLogging:(id)arg1 ;
+(void)performYearsStaticsLogging:(id)arg1 ;
+(void)performAnalysisStateLogging:(id)arg1 library:(id)arg2 ;
+(void)performHyperionLocalResourcesLoggingForLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)performHyperionLocalResourcesLogging:(/*^block*/id)arg1 inManagedObjectContext:(id)arg2 cloudPhotoLibraryEnabled:(BOOL)arg3 ;
+(id)_addPrefix:(id)arg1 toKeysInDictionary:(id)arg2 ;
+(double)_getDateMedian:(id)arg1 fromStartDate:(id)arg2 forCameraCapture:(BOOL)arg3 ;
+(id)_performMedianCalculation:(id)arg1 ;
+(void)performLibrarySummaryLogging:(id)arg1 cloudPhotoLibraryEnabled:(BOOL)arg2 ;
+(void)performCTMLibrarySummaryLogging:(id)arg1 ;
+(void)performPersistentHistorySummaryLogging:(id)arg1 ;
+(void)performCMMSummaryLogging:(id)arg1 cloudPhotoLibraryEnabled:(BOOL)arg2 ;
+(void)performLibraryStatisticsLoggingForLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

