/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PLMomentGenerationDataManagementPLHighlightItemModelReader;
@class NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, NSObject, PLFrequentLocationManager, PLLocalCreationDateCreator;

@interface PLMomentGeneration : NSObject {

	BOOL _isGenerationPassInProgress;
	unsigned long long _inProgressCount;
	NSMutableOrderedSet* _pendingInsertsAndUpdates;
	NSMutableDictionary* _pendingDeletes;
	NSMutableOrderedSet* _pendingUpdatesForHighlights;
	NSMutableOrderedSet* _pendingMomentUpdatesForHighlights;
	NSMutableArray* _pendingCompletionBlocks;
	NSObject*<OS_dispatch_queue> _incrementalGenerationStateQueue;
	PLFrequentLocationManager* _frequentLocationManager;
	PLLocalCreationDateCreator* _localCreationDateCreator;
	id<PLMomentGenerationDataManagement><PLHighlightItemModelReader> _momentGenerationDataManager;

}

@property (nonatomic,__weak,readonly) id<PLMomentGenerationDataManagement><PLHighlightItemModelReader> momentGenerationDataManager;              //@synthesize momentGenerationDataManager=_momentGenerationDataManager - In the implementation block
+(id)dateIntervalsAroundSortedDates:(id)arg1 minimumIntervalDuration:(double)arg2 ;
-(id)momentGenerationStatus;
-(void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(/*^block*/id)arg1 ;
-(id<PLMomentGenerationDataManagement><PLHighlightItemModelReader>)momentGenerationDataManager;
-(id)initWithMomentGenerationDataManager:(id)arg1 ;
-(BOOL)isGenerationPassInProgress;
-(void)_updateIncrementalMomentGeneration;
-(id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)arg1 ;
-(BOOL)_isAsset:(id)arg1 identicalToAssetForMoments:(id)arg2 ;
-(void)saveChangesForAssetInsertsAndUpdates:(id)arg1 assetDeletes:(id)arg2 assetUpdatesForHighlights:(id)arg3 momentUpdatesForHighlights:(id)arg4 ;
-(void)generateWithAssetInsertsAndUpdates:(id)arg1 assetDeletes:(id)arg2 assetUpdatesForHighlights:(id)arg3 momentUpdatesForHighlights:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)generateWithIncrementalDataCompletionHandler:(/*^block*/id)arg1 ;
-(void)_runIncrementalGenerationPassWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_highlightGenerator;
-(void)_runMomentAndHighlightGenerationForAssets:(id)arg1 hiddenAssets:(id)arg2 updatedAssetIDsForHighlights:(id)arg3 updatedMomentIDsForHighlights:(id)arg4 affectedMoments:(id)arg5 highlightsWithDeletedMoments:(id)arg6 insertedOrUpdatedMoments:(id*)arg7 ;
-(void)rebuildAllMomentsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)rebuildAllHighlightsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processRecentHighlightsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)processUnprocessedMomentLocationsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateHighlightTitlesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)cleanupEmptyHighlightsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithForceUpdateLocale:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)_writeDetails:(id)arg1 toFilepath:(id)arg2 withDefaultFilename:(id)arg3 ;
-(id)_detailsForAsset:(id)arg1 simpleOnly:(BOOL)arg2 ;
-(void)_clearReplayLog;
-(void)_appendAssetsToReplayLog:(id)arg1 forBatchUpdate:(BOOL)arg2 ;
-(id)_logEntryForAssets:(id)arg1 isBatchUpdate:(BOOL)arg2 ;
-(id)allAssetMetadataWriteToFile:(id)arg1 ;
-(id)_detailsForMoment:(id)arg1 ;
-(id)allMomentsMetadataWriteToFile:(id)arg1 ;
-(void)validateLibraryWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)rebuildAllMomentsWithManager:(id)arg1 error:(id*)arg2 ;
@end

