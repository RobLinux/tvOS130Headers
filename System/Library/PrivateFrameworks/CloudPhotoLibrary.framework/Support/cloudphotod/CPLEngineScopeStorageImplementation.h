/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEngineScopeStorageImplementation <CPLEngineStorageImplementation>
@property (nonatomic,readonly) BOOL hasStagedSyncAnchors; 
@required
-(id)enumeratorForScopesIncludeInactive:(BOOL)arg1;
-(id)enumeratorForScopesNeedingUpdateFromTransport;
-(id)enumeratorForScopesNeedingToPushHighPriorityChangesToTransport;
-(BOOL)hasScopesNeedingToPushHighPriorityChangesToTransport;
-(id)enumeratorForScopesNeedingToPushChangesToTransport;
-(BOOL)hasScopesNeedingToPushChangesToTransport;
-(BOOL)setScopeHasChangesToPushToTransport:(id)arg1 error:(id*)arg2;
-(long long)pushToTransportTaskForScope:(id)arg1;
-(BOOL)setScope:(id)arg1 hasCompletedPushToTransportTask:(long long)arg2 error:(id*)arg3;
-(BOOL)doesScopeNeedToPushChangesToTransport:(id)arg1;
-(id)enumeratorForScopesNeedingToPullChangesFromTransport;
-(BOOL)hasScopesNeedingToPullChangesFromTransport;
-(BOOL)setScopeHasChangesToPullFromTransport:(id)arg1 error:(id*)arg2;
-(BOOL)setAllScopesHasChangesToPullFromTransportWithError:(id*)arg1;
-(long long)pullFromTransportTaskForScope:(id)arg1;
-(BOOL)setScope:(id)arg1 hasCompletedPullFromTransportTask:(long long)arg2 error:(id*)arg3;
-(BOOL)doesScopeNeedToPullChangesFromTransport:(id)arg1;
-(BOOL)setPullFromTransportExpirationInterval:(double)arg1 scope:(id)arg2 error:(id*)arg3;
-(BOOL)setScopeNeedsToBePulledByClient:(id)arg1 error:(id*)arg2;
-(BOOL)doesScopeNeedToBePulledByClient:(id)arg1;
-(id)enumeratorForScopesNeedingToUpdateTransport;
-(BOOL)hasScopesNeedingToUpdateTransport;
-(BOOL)setScopeNeedsToUpdateTransport:(id)arg1 error:(id*)arg2;
-(long long)transportUpdateTaskForScope:(id)arg1;
-(BOOL)setScope:(id)arg1 hasCompletedTransportUpdate:(long long)arg2 error:(id*)arg3;
-(BOOL)doesScopeNeedToUpdateTransport:(id)arg1;
-(BOOL)deleteScopeWithIdentifier:(id)arg1 error:(id*)arg2;
-(BOOL)setScopeType:(long long)arg1 forScope:(id)arg2 error:(id*)arg3;
-(BOOL)resetSyncAnchorForScope:(id)arg1 error:(id*)arg2;
-(id)flagsForScope:(id)arg1;
-(BOOL)updateFlags:(id)arg1 forScope:(id)arg2 error:(id*)arg3;
-(id)disabledDateForScope:(id)arg1;
-(BOOL)setDisabledDate:(id)arg1 forScope:(id)arg2 error:(id*)arg3;
-(id)deleteDateForScope:(id)arg1;
-(BOOL)setDeleteDate:(id)arg1 forScope:(id)arg2 error:(id*)arg3;
-(BOOL)resetSyncStateForScope:(id)arg1 error:(id*)arg2;
-(id)uploadTransportGroupForScope:(id)arg1;
-(id)downloadTransportGroupForScope:(id)arg1;
-(id)scopeWithIdentifier:(id)arg1;
-(BOOL)setScopeNeedsUpdateFromTransport:(id)arg1 error:(id*)arg2;
-(id)transportScopeForScope:(id)arg1;
-(BOOL)setTransportScope:(id)arg1 forScope:(id)arg2 error:(id*)arg3;
-(id)libraryInfoForScope:(id)arg1;
-(BOOL)didDropSomeRecordsForScope:(id)arg1;
-(BOOL)setDidDropSomeRecordsForScope:(id)arg1 error:(id*)arg2;
-(BOOL)setSyncAnchor:(NSData*)arg1 forScope:(id)arg2 error:(id*)arg3;
-(BOOL)commitSyncAnchorForScope:(id)arg1 error:(id*)arg2;
-(BOOL)discardStagedSyncAnchorForScope:(id)arg1 error:(id*)arg2;
-(BOOL)discardStagedSyncAnchorWithScopeFilter:(id)arg1 error:(id*)arg2;
-(BOOL)hasStagedSyncAnchorForScope:(id)arg1;
-(BOOL)hasStagedSyncAnchors;
-(NSData*)transientSyncAnchorForScope:(id)arg1;
-(BOOL)storeTransientSyncAnchor:(NSData*)arg1 forScope:(id)arg2 error:(id*)arg3;
-(BOOL)hasScopeFetchedInitialSyncAnchor:(id)arg1;
-(BOOL)setHasFetchedInitialSyncAnchor:(BOOL)arg1 forScope:(id)arg2 error:(id*)arg3;
-(BOOL)setInitialSyncAnchor:(NSData*)arg1 forScope:(id)arg2 error:(id*)arg3;
-(NSData*)initialSyncAnchorForScope:(id)arg1;
-(BOOL)hasFinishedAFullSyncForScope:(id)arg1;
-(id)lastDateOfClearedPushRepositoryForScope:(id)arg1;
-(BOOL)storeLastDateOfClearedPushRepository:(id)arg1 forScope:(id)arg2 error:(id*)arg3;
-(id)lastDateOfCompletedPullFromTransportForScope:(id)arg1;
-(unsigned long long)supportedFeatureVersionInLastSyncForScope:(id)arg1;
-(BOOL)storeSupportedFeatureVersionInLastSync:(unsigned long long)arg1 forScope:(id)arg2 error:(id*)arg3;
-(BOOL)storeEstimatedSize:(unsigned long long)arg1 estimatedAssetCount:(unsigned long long)arg2 forScope:(id)arg3 error:(id*)arg4;
-(unsigned long long)estimatedSizeForScope:(id)arg1;
-(unsigned long long)estimatedAssetCountForScope:(id)arg1;
-(BOOL)upgradeScopesWithNewLibraryOption:(unsigned long long)arg1 error:(id*)arg2;
-(id)primaryScope;
-(NSData*)scopeListSyncAnchor;
-(BOOL)storeScopeListSyncAnchor:(NSData*)arg1 error:(id*)arg2;
-(id)filterForIncludedScopeIdentifiers:(id)arg1;
-(id)filterForExcludedScopeIdentifiers:(id)arg1;
-(NSData*)syncAnchorForScope:(id)arg1 isCommitted:(BOOL*)arg2;
-(id)lastLibraryInfoUpdateDateForScope:(id)arg1;
-(id)initialSyncDateForScope:(id)arg1;
-(BOOL)setClassNameOfRecordsForInitialQuery:(id)arg1 forScope:(id)arg2 error:(id*)arg3;
-(id)classNameOfRecordsForInitialQueryForScope:(id)arg1;
-(BOOL)setLibraryInfo:(id)arg1 forScope:(id)arg2 libraryInfoHasBeenUpdated:(BOOL*)arg3 error:(id*)arg4;
-(BOOL)storeDownloadTransportGroup:(id)arg1 forScope:(id)arg2 error:(id*)arg3;
-(BOOL)storeUploadTransportGroup:(id)arg1 forScope:(id)arg2 error:(id*)arg3;
-(BOOL)bumpStableIndexForScopeWithIdentifier:(id)arg1 error:(id*)arg2;
-(BOOL)bumpCloudIndexForScopeWithIdentifier:(id)arg1 error:(id*)arg2;
-(BOOL)bumpLocalIndexForScopeWithIdentifier:(id)arg1 error:(id*)arg2;
-(id)validCloudIndexes;
-(id)validLocalIndexes;
-(id)addScopeWithIdentifier:(id)arg1 scopeType:(long long)arg2 error:(id*)arg3;
-(BOOL)setScope:(id)arg1 hasCompletedClientNeedsToPullTask:(long long)arg2 error:(id*)arg3;
-(id)enumeratorForScopesNeedingToBePulledByClientWithMaximumCount:(unsigned long long)arg1;
-(long long)clientNeedsToPullTaskForScope:(id)arg1;
-(id)librarySateForScope:(id)arg1;
-(id)scopeWithStableIndex:(long long)arg1;
-(id)scopeWithCloudIndex:(long long)arg1;
-(id)scopeWithLocalIndex:(long long)arg1;

@end
