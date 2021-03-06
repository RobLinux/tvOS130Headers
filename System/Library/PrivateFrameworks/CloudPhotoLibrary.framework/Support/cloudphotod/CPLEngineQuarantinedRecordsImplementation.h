/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEngineQuarantinedRecordsImplementation <CPLEngineStorageImplementation>
@required
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
-(BOOL)addQuarantinedRecordsWithScopedIdentifier:(id)arg1 reason:(id)arg2 error:(id*)arg3;
-(BOOL)isRecordWithScopedIdentifierQuarantined:(id)arg1;
-(unsigned long long)countOfQuarantinedRecords;
-(unsigned long long)countOfQuarantinedRecordsInScopeWithIdentifier:(id)arg1;
-(BOOL)removeQuarantinedRecordsWithScopedIdentifier:(id)arg1 removed:(BOOL*)arg2 error:(id*)arg3;

@end

