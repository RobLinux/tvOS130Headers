/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineResourceDownloadQueueImplementation.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceDownloadQueue : CPLPrequeliteStorage <CPLEngineResourceDownloadQueueImplementation> {

	CPLPrequeliteVariable* _nextTaskIdentifier;
	CPLPrequeliteVariable* _nextPosition;
	BOOL _recreatedDownloadQueueIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)status;
-(BOOL)openWithError:(id*)arg1 ;
-(id)initWithAbstractObject:(id)arg1 ;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)enqueueBackgroundDownloadTaskForResource:(id)arg1 downloading:(BOOL)arg2 error:(id*)arg3 ;
-(id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 maximumSize:(unsigned long long)arg2 maximumCount:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)resetDequeuedBackgroundDownloadTasksWithError:(id*)arg1 ;
-(BOOL)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)enumeratorForDownloadedResources;
-(unsigned long long)countOfQueuedDownloadTasks;
-(BOOL)hasActiveOrQueuedBackgroundDownloadOperations;
-(BOOL)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)removeBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)reenqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 bumpRetryCount:(BOOL)arg3 didDiscard:(BOOL*)arg4 error:(id*)arg5 ;
-(unsigned long long)newTaskIdentifier;
-(id)statusPerScopeIndex;
-(BOOL)initializeStorage;
-(BOOL)upgradeStorageToVersion:(long long)arg1 ;
-(id)recordsDesignation;
-(BOOL)_createResourceTypeAndStatusIndex;
-(BOOL)_getNextPosition:(unsigned long long*)arg1 andBumpWithError:(id*)arg2 ;
-(BOOL)_deleteEnqueuedResource:(id)arg1 error:(id*)arg2 ;
-(id)_enqueuedResourceForResource:(id)arg1 verifyScopeIndex:(BOOL)arg2 ;
-(unsigned long long)_countOfRecordsWithStatus:(int)arg1 ;
@end

