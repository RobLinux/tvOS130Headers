/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEnginePushRepositoryImplementation <CPLEngineStorageImplementation>
@required
-(BOOL)isEmpty;
-(BOOL)hasChangesInScopeWithIdentifier:(id)arg1;
-(unsigned long long)countOfChangesInScopeWithIdentifier:(id)arg1;
-(BOOL)hasChangesWithScopeFilter:(id)arg1;
-(BOOL)hasSomeChangeWithScopedIdentifier:(id)arg1;
-(BOOL)deleteAllChangesWithError:(id*)arg1;
-(BOOL)storeExtractedBatch:(id)arg1 error:(id*)arg2;
-(id)storedExtractedBatch;
-(BOOL)deleteChangeWithScopedIdentifier:(id)arg1 error:(id*)arg2;
-(id)allChangesWithScopeIdentifier:(id)arg1 block:(/*^block*/id)arg2;
-(id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2 block:(/*^block*/id)arg3;
-(id)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 block:(/*^block*/id)arg3;
-(id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 changeType:(unsigned long long)arg3 block:(/*^block*/id)arg4;
-(id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 trashed:(BOOL)arg3 block:(/*^block*/id)arg4;
-(id)changeWithScopedIdentifier:(id)arg1 block:(/*^block*/id)arg2;
-(BOOL)deleteChangeWithScopedIdentifier:(id)arg1 discardedUploadIdentifier:(id*)arg2 error:(id*)arg3;
-(BOOL)reinjectChange:(id)arg1 dequeueOrder:(long long)arg2 discardedUploadIdentifier:(id*)arg3 overwrittenRecord:(BOOL*)arg4 error:(id*)arg5;
-(BOOL)storeChange:(id)arg1 uploadIdentifier:(id)arg2 discardedUploadIdentifier:(id*)arg3 error:(id*)arg4;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 discardedUploadIdentifiers:(id*)arg4 error:(id*)arg5;
-(id)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(id)arg2 block:(/*^block*/id)arg3;

@end

