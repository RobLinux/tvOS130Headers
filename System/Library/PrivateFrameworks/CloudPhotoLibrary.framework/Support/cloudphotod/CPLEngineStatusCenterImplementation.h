/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEngineStatusCenterImplementation <CPLEngineStorageImplementation>
@property (nonatomic,readonly) BOOL hasStatusChanges; 
@required
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
-(BOOL)hasStatusChanges;
-(BOOL)discardNotificationForRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2;
-(id)statusChangesMaximumCount:(unsigned long long)arg1;
-(BOOL)acknowledgeChangedStatus:(id)arg1 hasBeenDeleted:(BOOL*)arg2 error:(id*)arg3;
-(id)statusForRecordWithScopedIdentifier:(id)arg1;
-(BOOL)addStatus:(id)arg1 error:(id*)arg2;
-(BOOL)getNewGeneration:(unsigned long long*)arg1 error:(id*)arg2;

@end

