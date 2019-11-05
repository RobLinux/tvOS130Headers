/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEngineClientCacheImplementation <CPLEngineStorageImplementation>
@required
-(BOOL)addRecord:(id)arg1 error:(id*)arg2;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
-(BOOL)hasRecordWithScopedIdentifier:(id)arg1;
-(id)recordWithScopedIdentifier:(id)arg1;
-(BOOL)updateRecord:(id)arg1 error:(id*)arg2;
-(BOOL)deleteRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2;
-(id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;
-(id)recordsWithRelatedScopedIdentifier:(id)arg1;
-(id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
-(BOOL)hasRecordWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
-(unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
-(void)fillRelatedIdentifiersInChange:(id)arg1;

@end

