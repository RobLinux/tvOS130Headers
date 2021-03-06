/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEngineCloudCacheImplementation <CPLEngineStorageImplementation>
@required
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
-(BOOL)hasRecordWithScopedIdentifier:(id)arg1;
-(BOOL)addRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3;
-(BOOL)updateFinalRecord:(id)arg1 confirmed:(BOOL)arg2 error:(id*)arg3;
-(BOOL)updateStagedRecord:(id)arg1 error:(id*)arg2;
-(BOOL)confirmAllRecordsWithError:(id*)arg1;
-(BOOL)deleteRecordWithScopedIdentifier:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3;
-(id)recordWithScopedIdentifier:(id)arg1 isConfirmed:(BOOL*)arg2 isStaged:(BOOL*)arg3;
-(id)recordsWithRelatedScopedIdentifier:(id)arg1 isFinal:(BOOL)arg2;
-(BOOL)remapAllRecordsWithPreviousScopedIdentifier:(id)arg1 newScopedIdentifier:(id)arg2 error:(id*)arg3;
-(BOOL)commitStagedChangesForScopeWithIdentifier:(id)arg1 error:(id*)arg2;
-(BOOL)discardStagedChangesForScopeWithIdentifier:(id)arg1 error:(id*)arg2;
-(BOOL)discardStagedChangesWithScopeFilter:(id)arg1 error:(id*)arg2;
-(id)recordsOfClass:(Class)arg1 isFinal:(BOOL)arg2;
-(id)allRecordsIsFinal:(BOOL)arg1;
-(id)recordWithScopedIdentifier:(id)arg1 isFinal:(BOOL)arg2 isConfirmed:(BOOL*)arg3;

@end

