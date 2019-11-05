/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log, PGGraphHealthRecording;
#import <PhotosGraph/PhotosGraph-Structs.h>
@class NSMutableArray, NSObject, NSURL, PGGraph, NSString, PHPhotoLibrary, PGMemoryController, NSMutableDictionary, PGCurationCache;

@interface PGManager : NSObject {

	NSMutableArray* _prefetchCuratedKeyAssetsBlocks;
	NSMutableArray* _prefetchCuratedAssetsBlocks;
	NSObject*<OS_dispatch_queue> _curationPrefetchQueue;
	NSURL* _cachedGraphPersistenceParentDirectoryURL;
	double _timestampOfLastCallToProgress;
	double _timestampOfLastRecordedCallToProgress;
	unsigned long long _numberOfCallsToProgressSinceLastRecordedCall;
	AQ _fullGraphRebuildStamp;
	BOOL _wasStopped;
	NSObject*<OS_dispatch_queue> _graphAccessQueue;
	NSObject*<OS_dispatch_queue> _applicationDataQueue;
	AQ _numberOfCurrentGraphAccesses;
	NSObject*<OS_dispatch_queue> _graphUpdateQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	PGGraph* _graph;
	NSString* _graphName;
	BOOL _shouldPostGraphAvailableNotification;
	BOOL _photoLibraryIsReadonly;
	PHPhotoLibrary* _photoLibrary;
	unsigned long long _libraryAnalysisState;
	PGMemoryController* _memoryController;
	NSURL* _metadataSnapshotOutputPathURL;
	NSMutableDictionary* _curationScoreByAsset;
	NSMutableDictionary* _interactionScoreByAsset;
	NSObject*<OS_os_log> _loggingConnection;
	NSObject*<OS_os_log> _memoriesLoggingConnection;
	NSObject*<OS_os_log> _curationLoggingConnection;
	NSObject*<OS_os_log> _relatedLoggingConnection;
	NSObject*<OS_os_log> _ingestLoggingConnection;
	NSObject*<OS_os_log> _graphLoggingConnection;
	NSObject*<OS_os_log> _enrichmentLoggingConnection;
	NSObject*<OS_os_log> _guessWhoLoggingConnection;
	NSObject*<OS_os_log> _suggestionsLoggingConnection;
	NSObject*<OS_os_log> _metricsLoggingConnection;
	PGCurationCache* _curationCache;
	id<PGGraphHealthRecording> _graphHealthRecorder;

}

@property (readonly) unsigned long long libraryAnalysisState; 
@property (copy,readonly) NSString * graphName;                                                   //@synthesize graphName=_graphName - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> graphUpdateQueue;              //@synthesize graphUpdateQueue=_graphUpdateQueue - In the implementation block
@property (retain) PGGraph * graph;                                                               //@synthesize graph=_graph - In the implementation block
@property (assign) unsigned long long libraryAnalysisState;                                       //@synthesize libraryAnalysisState=_libraryAnalysisState - In the implementation block
@property (readonly) PGMemoryController * memoryController;                                       //@synthesize memoryController=_memoryController - In the implementation block
@property (readonly) NSMutableDictionary * curationScoreByAsset;                                  //@synthesize curationScoreByAsset=_curationScoreByAsset - In the implementation block
@property (readonly) NSMutableDictionary * interactionScoreByAsset;                               //@synthesize interactionScoreByAsset=_interactionScoreByAsset - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> loggingConnection;                            //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> memoriesLoggingConnection;                    //@synthesize memoriesLoggingConnection=_memoriesLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> curationLoggingConnection;                    //@synthesize curationLoggingConnection=_curationLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> relatedLoggingConnection;                     //@synthesize relatedLoggingConnection=_relatedLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> ingestLoggingConnection;                      //@synthesize ingestLoggingConnection=_ingestLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> graphLoggingConnection;                       //@synthesize graphLoggingConnection=_graphLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> enrichmentLoggingConnection;                  //@synthesize enrichmentLoggingConnection=_enrichmentLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> suggestionsLoggingConnection;                 //@synthesize suggestionsLoggingConnection=_suggestionsLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> guessWhoLoggingConnection;                    //@synthesize guessWhoLoggingConnection=_guessWhoLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> metricsLoggingConnection;                     //@synthesize metricsLoggingConnection=_metricsLoggingConnection - In the implementation block
@property (readonly) PGCurationCache * curationCache;                                             //@synthesize curationCache=_curationCache - In the implementation block
@property (readonly) BOOL photoLibraryIsReadonly;                                                 //@synthesize photoLibraryIsReadonly=_photoLibraryIsReadonly - In the implementation block
@property (nonatomic,retain) NSURL * graphPersistenceParentDirectoryURL; 
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                     //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) NSURL * metadataSnapshotOutputPathURL;                               //@synthesize metadataSnapshotOutputPathURL=_metadataSnapshotOutputPathURL - In the implementation block
@property (nonatomic,readonly) id<PGGraphHealthRecording> graphHealthRecorder;                    //@synthesize graphHealthRecorder=_graphHealthRecorder - In the implementation block
+(void)initialize;
+(id)assetPropertySetsForCuration;
+(id)representativeAssetsForAssetCollection:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
+(id)stringFromPGPrecision:(unsigned long long)arg1 ;
+(id)stringFromPGDuration:(unsigned long long)arg1 ;
+(id)stringFromPGRelatedType:(unsigned long long)arg1 ;
+(id)exportableDictionaryFromKeywords:(id)arg1 ;
+(BOOL)memoriesAreWorthNotifying:(id)arg1 ;
+(id)_locationsByDateIntervalForAssetsMetadata:(id)arg1 ;
+(double)durationForExistingMemoriesOverlapCheckWithBeta:(double)arg1 ;
+(unsigned long long)numberOfExistingMemoriesToKeepForOverlapCheckWithBeta:(double)arg1 ;
+(id)meaningsForSurvey;
+(BOOL)geoServiceProviderDidChangeForGraph:(id)arg1 ;
+(BOOL)shouldInvalidatePersistentGraph:(id)arg1 ;
+(BOOL)shouldInvalidateConstructionGraph:(id)arg1 ;
+(BOOL)clientIsPhotoAnalysis;
+(id)dedupedAssetsWithAssets:(id)arg1 precision:(unsigned long long)arg2 ;
+(double)contentScoreForAssets:(id)arg1 ;
+(id)allRecomputedTripMomentsInGraph:(id)arg1 ;
+(id)_assetsBeautifierForPrecision:(unsigned long long)arg1 ;
+(unsigned long long)_maximumNumberOfItemsForDuration:(unsigned long long)arg1 withTotalNumberOfItems:(unsigned long long)arg2 ;
+(id)_summaryClusteringForDuration:(unsigned long long)arg1 andPrecision:(unsigned long long)arg2 ;
+(unsigned long long)_minimumNumberOfItemsForDuration:(unsigned long long)arg1 withMaximumNumberOfItems:(unsigned long long)arg2 ;
+(unsigned long long)_maximumNumberOfItemsForDuration:(unsigned long long)arg1 withTotalNumberOfItems:(unsigned long long)arg2 spanningNumberOfDays:(double)arg3 ;
+(id)matchingWeightToDictionary;
-(id)init;
-(BOOL)isReady;
-(id)_dateFormatter;
-(PGGraph *)graph;
-(void)setGraph:(PGGraph *)arg1 ;
-(id)initWithGraph:(id)arg1 ;
-(void)commonInit;
-(BOOL)isBusy;
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)fetchAssetWithLocalIdentifier:(id)arg1 ;
-(id)textFeaturesForMomentLocalIdentifiers:(id)arg1 ;
-(id)suggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 ;
-(id)inferredContactIdentifierForPersonLocalIdentifier:(id)arg1 ;
-(id)inferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 ;
-(id)defaultGraphExportFullPath;
-(id)curatedAssetsForAssetCollection:(id)arg1 options:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)curatedAssetsForAssetCollection:(id)arg1 options:(id)arg2 personUUID:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(unsigned long long)optimalDurationForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 ;
-(BOOL)exportMatchingResultsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 toURL:(id)arg3 error:(id*)arg4 ;
-(id)defaultSnapshotRootPath;
-(id)snapshotOuputFilePathURLForKey:(id)arg1 ;
-(void)setMetadataSnapshotOutputPathURL:(NSURL *)arg1 ;
-(id)relatedDebugInformationBetweenReferenceAssetCollection:(id)arg1 andRelatedAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 precision:(unsigned long long)arg4 ;
-(id)relatedDebugInformationBetweenAsset:(id)arg1 andRelatedAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 precision:(unsigned long long)arg4 ;
-(BOOL)exportMatchingResultsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 toURL:(id)arg3 error:(id*)arg4 ;
-(void)matchWithVisualFormat:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)libraryAnalysisState;
-(void)waitUntilFinishedUsingBlock:(/*^block*/id)arg1 ;
-(void)invalidatePersistentCaches;
-(void)invalidateTransientCaches;
-(id)statisticsWithTypeStrings:(id)arg1 ;
-(id)sharingMessageSuggestionDebugInformationForAssetCollection:(id)arg1 ;
-(id)sharingSuggestionDebugInformationForSuggestion:(id)arg1 ;
-(BOOL)saveGraphToURL:(id)arg1 ;
-(id)assetCollectionsForPersonIdentifiers:(id)arg1 ;
-(id)peopleSuggestionLearningStatistics;
-(void)peopleSuggestionLearning;
-(id)suggestedContributionsForAssetsMetadata:(id)arg1 ;
-(id)suggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 sharingOptions:(id)arg3 ;
-(id)titleTupleForPersonIdentifiers:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(id)titleTupleForAssetCollection:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(id)titleTupleForMomentList:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(id)titleTupleForMemory:(id)arg1 error:(id*)arg2 ;
-(id)assetIdentifiersForPersonIdentifiers:(id)arg1 ;
-(id)socialGroupsForPersonIdentifiers:(id)arg1 ;
-(id)allSocialGroupsForPersonIdentifier:(id)arg1 ;
-(id)sortedArrayForPersonIdentifiers:(id)arg1 ;
-(id)relatedCollectionsForPersonIdentifiers:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)diagnosticsSummaryInfoOnExistingMemoriesForCurrentPhotoLibrary;
-(id)utilityAssetInformation;
-(id)curationDebugInformationForAssetCollection:(id)arg1 options:(id)arg2 ;
-(id)dejunkAndDedupeAssetsInAssetCollection:(id)arg1 options:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 referencePeople:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(id)curatedKeyAssetForAssetCollection:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 ;
-(id)relatedCollectionsForAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)relatedCollectionsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)memoryWithOptions:(id)arg1 ;
-(id)memoriesWithOptions:(id)arg1 ;
-(id)memoryTreeWithOptions:(id)arg1 ;
-(id)highlightDebugInformationWithHighlight:(id)arg1 ;
-(id)memoryDebugInformationWithMoments:(id)arg1 meaningLabels:(id)arg2 ;
-(id)moodKeywordsForMemory:(id)arg1 ;
-(BOOL)isPGMemoryTriggered:(id)arg1 ;
-(id)createMemoriesWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(BOOL)isPHMemoryTriggered:(id)arg1 ;
-(double)durationForExistingMemoriesOverlapCheck:(unsigned long long*)arg1 ;
-(BOOL)invalidatePersistentGraph;
-(void)cancelLibraryAnalysisWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)lastTriggeredNotificationDate;
-(id)nextPossibleNotificationDate;
-(NSObject*<OS_os_log>)loggingConnection;
-(id)relatedCollectionsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)zeroKeywordsWithOptions:(id)arg1 ;
-(id)searchSynonymsDictionaries;
-(id)searchMetadataWithOptions:(id)arg1 ;
-(id)searchKeywordsByEventWithUUIDs:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(BOOL)arg3 ;
-(id)featureVectorsForAsset:(id)arg1 ;
-(id)featureVectorsForMoment:(id)arg1 ;
-(id)sceneInfoWithAsset:(id)arg1 ;
-(double)neighborScoreForLocalDate:(id)arg1 ;
-(id)blacklistedFeatures;
-(BOOL)_isMemoryCategoryTriggered:(unsigned long long)arg1 ;
-(id)_memoriesWithOptions:(id)arg1 isFinalOne:(BOOL)arg2 ;
-(id)_featuresOfType:(unsigned long long)arg1 inMemories:(id)arg2 ;
-(id)_featureVectorGeneratorWithOptions:(id)arg1 ;
-(id)_featuresFromOptions:(id)arg1 ;
-(id)_memoryControllerWithOptions:(id)arg1 ;
-(id)_memoryGeneratorWithOptions:(id)arg1 memoryController:(id)arg2 ;
-(id)_generateAllMemoriesWithFeatureVectorBasedMemoryGenerator:(id)arg1 options:(id)arg2 ;
-(id)_generateAllMemoriesWithBestOfPastMemoryGenerator:(id)arg1 options:(id)arg2 ;
-(id)_generateAllMemoriesWithSeasonMemoryGenerator:(id)arg1 options:(id)arg2 ;
-(id)_generateAllMemoriesWithKeyPeopleForHolidayMemoryGenerator:(id)arg1 options:(id)arg2 ;
-(id)memorySummaryOfYear:(long long)arg1 duration:(unsigned long long)arg2 ;
-(id)bestOfPastMemoryFromLocalDate:(id)arg1 toLocalDate:(id)arg2 duration:(unsigned long long)arg3 ;
-(id)dayInHistoryMemoryForLocalDate:(id)arg1 ;
-(id)dayInHistoryMemoriesForLocalDate:(id)arg1 ;
-(id)feelingLuckyMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)sometimeInHistoryMemories;
-(id)featuredPeopleMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)nowMemoriesForLocalDate:(id)arg1 ;
-(id)nearbyTodayMemoriesForLocalDate:(id)arg1 location:(id)arg2 ;
-(id)liveMemoriesForLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 ;
-(id)recentPastMemoriesForLocalDate:(id)arg1 ;
-(id)upcomingFutureMemoriesForLocalDate:(id)arg1 ;
-(id)socialGroupMemoriesForSocialGroupWithID:(long long)arg1 year:(long long)arg2 ;
-(id)tripMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)weekendMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)petMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)babyMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)pastSupersetMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)homeAggregationMemoriesForLocalDate:(id)arg1 ;
-(id)peopleMemoriesForPeopleWithUUID:(id)arg1 year:(long long)arg2 ;
-(id)recurrentTripMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)throwbackThursdayMemoriesForLocalDate:(id)arg1 ;
-(id)celebrationOverTimeMemoriesForLocalDate:(id)arg1 ;
-(id)_allFeatureVectorBasedMemoriesWithOptions:(id)arg1 ;
-(id)maximalSocialGroupsForPersonIdentifiers:(id)arg1 ;
-(id)_tripIndexByMomentNodeInGraph:(id)arg1 ;
-(id)_momentClustersForTripsInGraph:(id)arg1 tripIndexByMomentNode:(id)arg2 ;
-(id)_tripRelatedClustersInGraph:(id)arg1 ;
-(id)_momentsForHobbyType:(long long)arg1 ;
-(BOOL)_isInterestingMomentNode:(id)arg1 ;
-(id)_interestingMomentNodesAndUninterestingNodes;
-(id)_interactionScoreByAssetFromMomentNodes:(id)arg1 ;
-(id)_topN:(unsigned long long)arg1 fromScoreByAsset:(id)arg2 ;
-(id)_assetsWithKNearestSceneprintsToReferenceAssets:(id)arg1 amongOtherAssets:(id)arg2 minimumSimilarity:(double)arg3 k:(unsigned long long)arg4 ;
-(BOOL)_highConfidentSceneNodesInMoment:(id)arg1 withSceneNames:(id)arg2 includingChildrenOfScenes:(id)arg3 graph:(id)arg4 ;
-(BOOL)_momentNodeHasMeaningfulRestaurantScenes:(id)arg1 graph:(id)arg2 ;
-(BOOL)_momentNodeHasMeaningfulActivityScenes:(id)arg1 graph:(id)arg2 ;
-(BOOL)_momentNodeHasMeaningfulCelebrationScenes:(id)arg1 graph:(id)arg2 ;
-(BOOL)_momentNodeHasMeaningfulEntertainmentScenes:(id)arg1 graph:(id)arg2 ;
-(id)highlightsForMeaningKeyAssetSurvey;
-(id)surveyFrequentLocationQuestions;
-(id)surveySocialGroupsInfoDictionaries;
-(id)surveyMomentClustersForTrips;
-(id)momentsAndGraphScoresAboveGraphScoreThreshold:(double)arg1 ;
-(id)momentsForBaby;
-(id)momentsForPet;
-(id)uninterestingMoments;
-(id)momentFeatureVectorForMoment:(id)arg1 ;
-(id)meaningLabelsForMoment:(id)arg1 ;
-(id)surveyInformationForMoment:(id)arg1 ;
-(id)enrichedBusinessItemsByMuidsForBusinessItems:(id)arg1 ;
-(id)businessItemsForAllMoments;
-(id)popularAssetCollections;
-(id)similarAssetCollections;
-(id)assetCollectionsForOptimizedMeaningSurvey:(id)arg1 ;
-(id)highlightsForKeyAssetSurvey;
-(id)highlightGroupingsForPromotionScoreSurvey;
-(id)publicEventsForAllMoments;
-(id)_momentNodesForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(id)moodGraphNodeIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(id)moodMeaningIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(id)moodSceneIdentifiersByMomentForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(id)moodGraphContextIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(id)allYears;
-(BOOL)isLocationNearHomeOrWork:(id)arg1 ;
-(BOOL)locationIsInSupersets:(id)arg1 ;
-(id)allSocialGroupIDs;
-(id)allYearsForSocialGroupWithID:(long long)arg1 ;
-(id)nameForSocialGroupWithID:(long long)arg1 ;
-(id)allPeopleNames;
-(id)allYearsForPeopleWithName:(id)arg1 ;
-(id)fetchAssetsSortedByDateWithLocalIdentifiers:(id)arg1 ;
-(id)defaultAssetSortDescriptors;
-(id)_sanitizeGraphDataDictionaryForArchiving:(id)arg1 referencedMemory:(id)arg2 ;
-(id)_extractDatesAndAssetCountsFromMemory:(id)arg1 ;
-(id)_diagnosticSummaryInfoForMemory:(id)arg1 ;
-(unsigned long long)medianValueFromUnsignedItegerArray:(id)arg1 ;
-(id)_extractYearStatsFromOrderedCollectionFetchResults:(id)arg1 fetchOptions:(id)arg2 yearEntryKey:(id)arg3 numberOfYearsEntryKey:(id)arg4 ;
-(id)_momentsStatisticsForCurrentPhotoLibrary;
-(id)_collectionStatisticsForCurrentPhotoLibrary;
-(id)_yearsStatisticsForCurrentPhotoLibrary;
-(id)libraryStatisticsForCurrentPhotoLibrary;
-(NSObject*<OS_os_log>)relatedLoggingConnection;
-(NSObject*<OS_os_log>)ingestLoggingConnection;
-(NSObject*<OS_os_log>)graphLoggingConnection;
-(id)initWithReadonlyPhotoLibrary:(id)arg1 ;
-(id)initForTesting;
-(void)_reloadGraph;
-(void)_loadGraph;
-(void)_precachePersonsInformation;
-(NSURL *)graphPersistenceParentDirectoryURL;
-(void)setGraphPersistenceParentDirectoryURL:(NSURL *)arg1 ;
-(id)graphPersistenceParentDirectoryCandidateURLs;
-(id)processSubdirectoryName;
-(id)initWithGraphName:(id)arg1 photoLibrary:(id)arg2 ;
-(void)performAsynchronousBarrierGraphWriteUsingBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousConcurrentGraphReadUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasPendingGraphAccess;
-(void)performAsynchronousNotification:(/*^block*/id)arg1 ;
-(void)performApplicationDataBlock:(/*^block*/id)arg1 ;
-(void)_invalidateTransientCaches;
-(void)_invalidatePersistentCachesForGeoServiceProviderChange;
-(void)_invalidatePersistentCaches;
-(void)_waitGraphUntilFinishedUsingBlock:(/*^block*/id)arg1 ;
-(void)_waitLibraryUpdateUntilFinishedUsingBlock:(/*^block*/id)arg1 ;
-(void)resetCheckCallsToProgress;
-(void)checkCallsToProgressForJob:(id)arg1 progress:(double)arg2 stop:(BOOL)arg3 loggingConnection:(id)arg4 ;
-(void)matchWithVisualFormat:(id)arg1 elements:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)stampFullGraphRebuild;
-(A);
-(BOOL)canProceedWithFullGraphRebuildStamp:(A)arg1 :(unsigned long long)arg2 ;
-(NSString *)graphName;
-(NSObject*<OS_dispatch_queue>)graphUpdateQueue;
-(void)setLibraryAnalysisState:(unsigned long long)arg1 ;
-(PGMemoryController *)memoryController;
-(NSURL *)metadataSnapshotOutputPathURL;
-(BOOL)photoLibraryIsReadonly;
-(NSMutableDictionary *)curationScoreByAsset;
-(NSMutableDictionary *)interactionScoreByAsset;
-(NSObject*<OS_os_log>)memoriesLoggingConnection;
-(NSObject*<OS_os_log>)curationLoggingConnection;
-(NSObject*<OS_os_log>)enrichmentLoggingConnection;
-(NSObject*<OS_os_log>)guessWhoLoggingConnection;
-(NSObject*<OS_os_log>)suggestionsLoggingConnection;
-(NSObject*<OS_os_log>)metricsLoggingConnection;
-(PGCurationCache *)curationCache;
-(id<PGGraphHealthRecording>)graphHealthRecorder;
-(id)titleTupleForMoment:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(id)titleTupleForAlbum:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(id)_memoryFetchOptions;
-(BOOL)memoriesOfTheDayAreWorthNotifying;
-(id)graphForLibraryAnalysisAtURL:(id)arg1 alreadyIngestedMomentIdentifiers:(id*)arg2 alreadyIngestedHighlightIdentifiers:(id*)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)performFullLibraryAnalysisInGraph:(id)arg1 withRecipe:(id)arg2 withAlreadyIngestedMomentIdentifiers:(id)arg3 alreadyIngestedHighlightIdentifiers:(id)arg4 processedGraphUpdate:(id*)arg5 progressBlock:(/*^block*/id)arg6 ;
-(void)_exportGraphToDiskOrRemoveItDependingOnUserDefault;
-(id)performLibraryAnalysisWithGraphURL:(id)arg1 graphUpdate:(id)arg2 withRecipe:(id)arg3 processedGraphUpdate:(id*)arg4 progressBlock:(/*^block*/id)arg5 ;
-(BOOL)swapInGraph:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)updateCurrentGraphWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)_shouldFullyRebuildGraphWithGraphUpdate:(id)arg1 ;
-(void)updateGraphWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 keepExistingGraph:(BOOL)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)startGraphUpdate:(id)arg1 usingCurrentGraph:(BOOL)arg2 progressBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)startLibraryAnalysisWithRecipe:(id)arg1 progressBlock:(/*^block*/id)arg2 keepExistingGraph:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)startLibraryAnalysis:(/*^block*/id)arg1 keepExistingGraph:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)needsLibraryAnalysis;
-(BOOL)isAssetCollectionInteresting:(id)arg1 precision:(unsigned long long)arg2 ;
-(id)bestAssetsForAssetFeeder:(id)arg1 options:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)dejunkAndDedupeItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)_filteredAssetsForAssets:(id)arg1 inMoments:(id)arg2 keepFavorites:(BOOL)arg3 ;
-(id)_timeBasedAssetClustersForAssets:(id)arg1 maximumClusterCount:(unsigned long long)arg2 ;
-(id)_firstBestFacedAssetInAssetCluster:(id)arg1 forPersonUUID:(id)arg2 faceFetchOptions:(id)arg3 ;
-(id)_batchFetchFacesByAssetsForClusters:(id)arg1 indexOfCluster:(unsigned long long)arg2 fetchOptions:(id)arg3 ;
-(id)_batchFetchFacesByAssetsForCluster:(id)arg1 indexOfItem:(unsigned long long)arg2 fetchOptions:(id)arg3 ;
-(id)curationDebugInformationForHighlight:(id)arg1 options:(id)arg2 ;
-(BOOL)supportsSemanticalDedupingForMemory:(id)arg1 ;
-(id)_libraryDateInterval;
-(id)_locationForAsset:(id)arg1 fromNearbyAssetsInAssets:(id)arg2 ;
-(void)prefetchCuratedKeyAssetsForMoments:(id)arg1 options:(id)arg2 ;
-(void)prefetchCuratedAssetsForMoments:(id)arg1 options:(id)arg2 ;
-(void)cancelAllCurationPrefetches;
-(void)prefetchAreMomentsInteresting:(id)arg1 precision:(unsigned long long)arg2 ;
-(double)contentScoreForAssetCollection:(id)arg1 precision:(unsigned long long)arg2 ;
-(double)graphScoreForMoment:(id)arg1 ;
-(double)neighborScoreForMoment:(id)arg1 ;
-(BOOL)isSmartInterestingForMoment:(id)arg1 ;
-(BOOL)isInterestingForMoment:(id)arg1 ;
-(id)curatedAssetIdentifiersForEvent:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 ;
-(id)curatedAssetsFetchResultForEvent:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 ;
-(id)curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 ;
-(id)curatedKeyAssetForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 ;
-(id)_curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 curatedKeyAsset:(id*)arg5 ;
-(id)_gatheringAndFamilyKeywordsForMemory:(id)arg1 momentNodes:(id)arg2 ;
-(id)_locationTripKeywordsForMemory:(id)arg1 momentNodes:(id)arg2 ;
-(id)_keywordsSortedByPriority:(id)arg1 ;
-(id)_momentNodesForMemory:(id)arg1 ;
-(id)_roiLabelsForMomentNodes:(id)arg1 ;
-(id)_poiLabelsForMomentNodes:(id)arg1 ;
-(id)_defaultStatistics:(BOOL)arg1 forDiagnostics:(BOOL)arg2 ;
-(id)_moodStatistics;
-(id)_titleStatistics;
-(id)_highlightTitleStatistics;
-(id)_mobilityStatistics;
-(id)_interestingStatistics;
-(id)_partOfDayStatistics;
-(id)_highlightEstimatesStatistics;
-(id)_peopleContactSuggestionStatisticsIncludingDebugInfo:(BOOL)arg1 ;
-(id)_peopleRelationshipsStatisticsIncludingDebugInfo:(BOOL)arg1 ;
-(id)keywordsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 ;
-(id)_messagesStatistics;
-(id)_debugInformationForRelated:(id)arg1 referenceKeywords:(id)arg2 andRelatedMoment:(id)arg3 relatedType:(unsigned long long)arg4 precision:(unsigned long long)arg5 ;
-(id)keywordsForAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 ;
-(id)keywordsForMomentNodeName:(id)arg1 relatedType:(unsigned long long)arg2 ;
-(id)_dayOfWeekStatistics;
-(id)_stringDescriptionForPublicEvents:(BOOL)arg1 ;
-(id)_stringDescriptionForBusinessItemsIncludingInferredThroughPublicEvents:(BOOL)arg1 verbose:(BOOL)arg2 ;
-(id)_poiStatistics;
-(id)_stringDescriptionForLocations;
-(id)_stringDescriptionForPets;
-(id)_stringDescriptionForBabies;
-(id)_stringDescriptionForContactCache;
-(id)_behavioralStatistics;
-(id)_snapshotFilenameForLookupKey:(id)arg1 ;
-(id)_stringDescriptionForMusicSummaryOnly:(BOOL)arg1 ;
-(id)_sortedTextFeaturesFromTextFeatures:(id)arg1 ;
-(id)_domainLabelCountStatistics;
-(id)_peopleVisionAgeStatistics;
-(id)_fetchResultMatchingInternalPredicate:(id)arg1 ;
-(id)_peopleVisionGenderStatistics;
-(unsigned long long)_numberOfAssetsMatchingInternalPredicate:(id)arg1 ;
-(id)_peopleNameGenderStatistics;
-(id)_checkConsistencyOfGraph:(id)arg1 ;
-(id)UUIDForMoment:(id)arg1 ;
-(unsigned)identifierForMoment:(id)arg1 ;
-(id)_getDefaultOutputPathForMetadataSnapshot;
-(id)fastGraphExportFullPath;
-(id)defaultPeopleClustersExportIntermediatePath;
-(void)debugTitlesForAssetCollection:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)_stringDescriptionForMemoriesNotification;
-(id)_stringDescriptionForSocialGroups:(id)arg1 includeWeight:(BOOL)arg2 ;
-(id)_stringDescriptionForMeNode:(id)arg1 ;
-(id)_stringDescriptionForPeopleEvents;
-(id)_stringDescriptionForMeaningfulEvents:(id)arg1 isTrip:(BOOL)arg2 forDiagnostics:(BOOL)arg3 ;
-(id)_stringDescriptionForUrbanCities:(id)arg1 ;
-(id)_stringDescriptionForInterestingCities:(id)arg1 ;
-(id)_stringDescriptionForInterestingAreas:(id)arg1 ;
-(id)_stringDescriptionForLegacyPets;
-(id)_stringDescriptionForDisambiguatedLocations;
-(id)_stringDescriptionForDisambiguatedPOIsInMomentNodes:(id)arg1 ;
-(unsigned long long)_numberOfFamilyHolidayMoments;
-(unsigned long long)_numberOfNightOutMoments;
-(id)_oneOnOneTrips;
-(unsigned long long)_numberOfMomentsOverWeekends;
-(id)_bestAssetInAssets:(id)arg1 forReferencePeople:(id)arg2 minimumNumberOfCommonPeople:(unsigned long long)arg3 avoidVideoIfPossible:(BOOL)arg4 ;
-(id)_filteredAssetsWithFaceFilter:(unsigned long long)arg1 forAssets:(id)arg2 ;
-(id)_bestAssetInSummarizedAssets:(id)arg1 forReferencePeople:(id)arg2 ;
-(id)bestAssetInAssets:(id)arg1 options:(id)arg2 ;
-(id)_filteredAssetsFromAssetCollection:(id)arg1 withContextualAssets:(id)arg2 approximateTimeDistance:(double)arg3 ;
-(id)_contextualBestAssetInAssets:(id)arg1 ;
-(id)_extendedAssetsForCurationForAssets:(id)arg1 matchingAssetsRange:(NSRange)arg2 ;
-(void)_removePrefetchBlock;
-(BOOL)isAssetFeederInteresting:(id)arg1 precision:(unsigned long long)arg2 ;
-(id)_bestAssetInAssets:(id)arg1 forReferencePeople:(id)arg2 ;
-(id)_bestAssetsInAssets:(id)arg1 forReferencePersons:(id)arg2 minimumRatioOfReferencePersonsPerAsset:(double)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)_filteredAssetCollectionFromAssetCollection:(id)arg1 withContextualAssets:(id)arg2 approximateTimeDistance:(double)arg3 ;
-(id)_filteredAssetsFromAssetCollection:(id)arg1 throughCriteriaForMeaningWithLabel:(id)arg2 ;
-(id)bestAssetForAssetFeeder:(id)arg1 options:(id)arg2 ;
-(id)bestAssetForAssetFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 ;
-(double)contentScoreForAssetFeeder:(id)arg1 precision:(unsigned long long)arg2 ;
-(id)_referenceAssetWithLocalIdentifier:(id)arg1 ;
-(void)_generateTitleForRelatedResults:(id)arg1 withReferenceEvent:(id)arg2 referenceAsset:(id)arg3 ;
-(id)relatedCollectionsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 generateTitles:(BOOL)arg4 error:(id*)arg5 ;
-(id)relatedCollectionsForHighlight:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 generateTitles:(BOOL)arg4 error:(id*)arg5 ;
-(id)relatedCollectionsForMemoryTripOrWeekend:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)relatedCollectionsForDefaultAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)_relatedCollectionsForDefaultAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 assetCollectionForKeywords:(id)arg4 error:(id*)arg5 ;
-(id)_relatedCollectionBetweenMoment:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(BOOL)arg4 needsDiversityInfo:(BOOL)arg5 ;
-(id)_relatedCollectionsForMemoryTripOrWeekend:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 assetCollectionForKeywords:(id)arg4 error:(id*)arg5 ;
-(id)_relatedCollectionBetweenHighlight:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(BOOL)arg4 needsDiversityInfo:(BOOL)arg5 ;
-(id)_weekendsForTargetDomain:(unsigned short)arg1 ;
-(id)_tripsForTargetDomain:(unsigned short)arg1 ;
-(id)_stringFromRelatedType:(unsigned long long)arg1 ;
-(id)_fileURLForMomentNode:(id)arg1 relatedType:(unsigned long long)arg2 focusOnAsset:(id)arg3 toURL:(id)arg4 ;
-(id)relatedCollectionsForHighlight:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)relatedCollectionBetweenAsset:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(BOOL)arg4 ;
-(id)relatedCollectionBetweenAssetCollection:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(BOOL)arg4 ;
-(void)matchFeatureVector:(id)arg1 options:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_diverseResultsFromMatchingResults:(id)arg1 timeShuffleTimestamp:(double)arg2 matchingOptions:(id)arg3 options:(id)arg4 ;
-(id)_postProcessGraphMatchingResults:(id)arg1 matchingOptions:(id)arg2 options:(id)arg3 ;
-(void)invalidateCurationCacheForMomentIdentifiers:(id)arg1 ;
-(void)invalidateCurationCacheForMoments:(id)arg1 ;
-(id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 withContextualAssets:(id)arg4 minimumProportion:(double)arg5 progressBlock:(/*^block*/id)arg6 ;
-(BOOL)areAssetsInteresting:(id)arg1 minimumNumberOfCuratedAssets:(unsigned long long)arg2 duration:(unsigned long long)arg3 precision:(unsigned long long)arg4 ;
-(void)invalidateCurationCacheForMoment:(id)arg1 ;
-(void)invalidateCurationCacheForCollectionWithIdentifier:(id)arg1 ;
@end

