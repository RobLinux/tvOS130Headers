/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PHAWorker.h>
#import <PhotoAnalysis/PHAGraphRegistration.h>
#import <PhotoAnalysis/PGGraphDataModelEnrichmentManagerDelegate.h>
#import <PhotoAnalysis/PLPhotoAnalysisGraphServiceProtocol.h>

@protocol PGGraphHealthRecording, OS_dispatch_queue, OS_os_transaction;
@class NSDate, NSDictionary, NSProgress, PGManager, NSMutableDictionary, PHAPredicateValidator, NSObject, NSHashTable, NSString;

@interface PHAGraphServiceWorker : PHAWorker <PHAGraphRegistration, PGGraphDataModelEnrichmentManagerDelegate, PLPhotoAnalysisGraphServiceProtocol> {

	unsigned long long _inq_state;
	BOOL _serviceEnabled;
	NSDate* _lastTodayWidgetMemoryCreationDate;
	NSDictionary* _snapshotFilenameLookup;
	unsigned long long _pendingGraphRequests;
	id<PGGraphHealthRecording> _graphHealthRecorder;
	NSProgress* _currentGraphRebuildProgress;
	PGManager* _graphManager;
	NSMutableDictionary* _pendingGraphReadyCallbacks;
	PHAPredicateValidator* _relatedRequestPredicateValidator;
	NSObject*<OS_dispatch_queue> _backgroundTaskQueue;
	NSDate* _lastLibraryChangeGraphUpdateJobCompletionDate;
	NSHashTable* _pendingRequestReferences;
	long long _pendingRequestReferenceCount;
	NSObject*<OS_os_transaction> _graphWorkerWarmedUpTransaction;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSProgress * currentGraphRebuildProgress;                                 //@synthesize currentGraphRebuildProgress=_currentGraphRebuildProgress - In the implementation block
@property (nonatomic,retain) PGManager * graphManager;                                                 //@synthesize graphManager=_graphManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingGraphReadyCallbacks;                         //@synthesize pendingGraphReadyCallbacks=_pendingGraphReadyCallbacks - In the implementation block
@property (nonatomic,retain) PHAPredicateValidator * relatedRequestPredicateValidator;                 //@synthesize relatedRequestPredicateValidator=_relatedRequestPredicateValidator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundTaskQueue;                         //@synthesize backgroundTaskQueue=_backgroundTaskQueue - In the implementation block
@property (nonatomic,retain) NSDate * lastLibraryChangeGraphUpdateJobCompletionDate;                   //@synthesize lastLibraryChangeGraphUpdateJobCompletionDate=_lastLibraryChangeGraphUpdateJobCompletionDate - In the implementation block
@property (nonatomic,retain) NSHashTable * pendingRequestReferences;                                   //@synthesize pendingRequestReferences=_pendingRequestReferences - In the implementation block
@property (assign,nonatomic) long long pendingRequestReferenceCount;                                   //@synthesize pendingRequestReferenceCount=_pendingRequestReferenceCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> graphWorkerWarmedUpTransaction;              //@synthesize graphWorkerWarmedUpTransaction=_graphWorkerWarmedUpTransaction - In the implementation block
@property (nonatomic,readonly) NSDate * dateOfLastGraphRebuild; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(short)workerType;
+(long long)applicationDataFolderIdentifier;
+(id)stringFromGraphServiceState:(unsigned long long)arg1 ;
+(void)configureXPCConnection:(id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(void)shutdown;
-(PGManager *)graphManager;
-(void)setGraphManager:(PGManager *)arg1 ;
-(void)requestSuggestionInfosWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestAvailableSuggestionTypeInfosWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestTransientMemoryPropertiesWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestMemoryInfosWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestMemoryTreeDebugInformationWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)simulateMemoriesNotificationWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSortedArrayOfPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestAllSocialGroupsForPersonIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSocialGroupsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestRelatedMomentsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestAssetsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)enrichDataModelWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)invalidateGraphWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)requestCurationDebugInformationForAsset:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestUtilityAssetInformationWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestGraphServiceStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestGraphServicePerformsQueryWithContext:(id)arg1 query:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestGraphServiceStatisticsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestHighlightEstimatesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestGraphRebuildFractionCompletedWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestExportGraphServiceForPurpose:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestInvalidateServiceTransientCachesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestInvalidateServicePersistentCachesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 context:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)requestMetadataSnapshotFolderCreationWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)generateMemoriesRelatedDiagnosticsLogsWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestDefaultsObjectForKey:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestTitleForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestHighlightEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestAssetRevGeocodingWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)requestPeopleSuggestionLearningWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)reportMetricsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)startup;
-(void)warmup;
-(void)handleOperation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)backgroundTaskQueue;
-(void)setBackgroundTaskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)statusAsDictionary;
-(BOOL)wantsLiveGraphUpdates;
-(BOOL)wantsGraphUpdateNotifications;
-(void)graphUpdateMadeProgress:(double)arg1 ;
-(void)graphUpdateIsConsistent;
-(void)graphUpdateDidStop;
-(BOOL)isQuiescent;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(void)cooldown;
-(void)pendingRequestReferenceDidDeallocateForAddress:(void*)arg1 ;
-(BOOL)enrichmentManager:(id)arg1 shouldRunProcessor:(id)arg2 ;
-(void)enrichmentManager:(id)arg1 didRunProcessor:(id)arg2 ;
-(void)enrichmentManager:(id)arg1 didCancelProcessor:(id)arg2 ;
-(void)setupPredicateValidator;
-(BOOL)hasAdditionalJobForGraphConsistencyUpdateInScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(BOOL)hasAdditionalJobForBackgroundMemoryGenerationInScenario:(unsigned long long)arg1 ;
-(BOOL)hasAdditionalJobForMetricsReportingInScenario:(unsigned long long)arg1 ;
-(BOOL)hasAdditionalJobForGraphRebuildInScenario:(unsigned long long)arg1 ;
-(BOOL)hasAdditionalJobForDataModelEnrichmentInScenario:(unsigned long long)arg1 ;
-(BOOL)didExceedtimeInterval:(double)arg1 forBackgroundJobUserDefaultsKey:(id)arg2 ;
-(void)markLastBackgroundGraphRebuildJobDate;
-(void)markLastBackgroundGraphConsistencyUpdateJobDate;
-(NSDate *)dateOfLastGraphRebuild;
-(BOOL)checkForWritablePersistentStorageDirectoryURL;
-(BOOL)retryStartup;
-(void)callAndClearPendingReadyCallbacksWithResult:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)canRunWhenGraphIsLoaded;
-(BOOL)_graphShouldBeConnected;
-(void)setupGraphManager;
-(void)shutdownAndWaitForGraphManager;
-(id)backgroundMemoryGenerationJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)dataModelEnrichmentJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)graphRebuildJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)graphProcessHistoricalChangeJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enrichDataModelWithOptions:(id)arg1 isBackgroundEnrichmentJob:(BOOL)arg2 context:(id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)metricReportingJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportMetricsWithOptions:(id)arg1 context:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)synchronousOffQueueState;
-(id)pendingRequestReferenceForLabel:(id)arg1 ;
-(void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 isRequestedRebuild:(BOOL)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_markEnrichmentNeededFollowingBackgroundRebuild:(BOOL)arg1 ;
-(void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_infoForMemory:(id)arg1 representativeAssetCount:(unsigned long long)arg2 isTransientMemory:(BOOL)arg3 ;
-(long long)_phTitleCategoryForPGTitleCategory:(long long)arg1 ;
-(id)_featureVectorWithMemory:(id)arg1 ;
-(id)_minimalLegacyFeatureVectorWithMemory:(id)arg1 ;
-(id)_infoForMomentsBackingMemory:(id)arg1 ;
-(id)_infoForGraphCollectionBasedMemory:(id)arg1 ;
-(id)_infoForNotificationQualityOfMemory:(id)arg1 ;
-(void)_processMoodForMemory:(id)arg1 withMoodHistory:(id)arg2 ;
-(id)_basicPropertiesFromMemory:(id)arg1 ;
-(id)_memoryInfoFromMemory:(id)arg1 options:(id)arg2 ;
-(id)_propertiesFromMemory:(id)arg1 ;
-(BOOL)canServiceGraphRequestsInCurrentStateLoadingGraphIfNeeded;
-(BOOL)shouldStopOperationInProgress;
-(BOOL)canServiceGraphCurationRequestsInCurrentStateLoadingGraphIfNeeded;
-(BOOL)canServiceGraphStatusRequestsInCurrentStateLoadingGraphIfNeeded;
-(long long)unavailableErrorCodeForCurrentState;
-(id)currentlyUnavailableError;
-(id)libraryTemporarilyUnavailableError;
-(id)_diagnosticsLogsRootFolderPath;
-(void)requestAssetCollectionsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)startProcessingGraphUpdateJob:(id)arg1 ;
-(void)stopProcessingGraphUpdateJob:(id)arg1 ;
-(id)informationDictionaryForAsset:(id)arg1 ;
-(id)_assetCollectionForLocalIdentifier:(id)arg1 ;
-(id)_collectionListForLocalIdentifier:(id)arg1 ;
-(long long)_titleTupleFormatForPhotoAnalysisTitleFormat:(long long)arg1 ;
-(id)assetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2 ;
-(BOOL)shouldAllowBackgroundActivityWithDescription:(id)arg1 ;
-(void)didCompleteRebuildOrDiffSuccessfully;
-(unsigned long long)_validatedMemoryNotificationState:(int)arg1 ;
-(id)_assetCollectionForRelatedIdentifier:(id)arg1 ;
-(id)_PHMemoryCategoryValueToDataAggregationKeyLookup;
-(id)_PHMemoryBlacklistableFeatureTypeValueToDataAggregationKeyLookup;
-(id)_PHMemoryBlacklistedFeatureTypeValueToDataAggregationKeyLookup;
-(id)_aggregatedStatsForSuggestedMoodCountVector:(id)arg1 ;
-(id)_aggregatedStatsForPossibleMoodCountVector:(id)arg1 ;
-(id)_aggregatedStatsForMiroMoodCountVector:(id)arg1 ;
-(id)_aggregatedStatsForMoodKeywordCountedSet:(id)arg1 ;
-(id)_dataAggregationKeyForCategory:(unsigned long long)arg1 subCategory:(unsigned long long)arg2 lookupTable:(id)arg3 ;
-(void)_logAggregatedStatistics:(id)arg1 ;
-(BOOL)_shouldAggregateDataForReporting:(unsigned long long)arg1 ;
-(NSProgress *)currentGraphRebuildProgress;
-(void)setCurrentGraphRebuildProgress:(NSProgress *)arg1 ;
-(NSMutableDictionary *)pendingGraphReadyCallbacks;
-(void)setPendingGraphReadyCallbacks:(NSMutableDictionary *)arg1 ;
-(PHAPredicateValidator *)relatedRequestPredicateValidator;
-(void)setRelatedRequestPredicateValidator:(PHAPredicateValidator *)arg1 ;
-(NSDate *)lastLibraryChangeGraphUpdateJobCompletionDate;
-(void)setLastLibraryChangeGraphUpdateJobCompletionDate:(NSDate *)arg1 ;
-(NSHashTable *)pendingRequestReferences;
-(void)setPendingRequestReferences:(NSHashTable *)arg1 ;
-(long long)pendingRequestReferenceCount;
-(void)setPendingRequestReferenceCount:(long long)arg1 ;
-(NSObject*<OS_os_transaction>)graphWorkerWarmedUpTransaction;
-(void)setGraphWorkerWarmedUpTransaction:(NSObject*<OS_os_transaction>)arg1 ;
@end

