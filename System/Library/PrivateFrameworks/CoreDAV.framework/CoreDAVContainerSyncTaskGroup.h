/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVDeleteTaskDelegate.h>
#import <CoreDAV/CoreDAVPutTaskDelegate.h>
#import <CoreDAV/CoreDAVGetTaskDelegate.h>
#import <CoreDAV/CoreDAVPropPatchTaskDelegate.h>

@class NSURL, NSString, NSMutableArray, NSDictionary, NSMutableSet, NSMutableDictionary, NSArray;

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate, CoreDAVPropPatchTaskDelegate> {

	int _phase;
	NSURL* _folderURL;
	NSString* _previousCTag;
	NSString* _nextCTag;
	BOOL _ensureUpdatedCTag;
	BOOL _useSyncCollection;
	NSString* _previousSyncToken;
	NSString* _nextSyncToken;
	NSMutableArray* _actions;
	unsigned long long _multiGetBatchSize;
	NSMutableArray* _unsubmittedTasks;
	unsigned long long _maxIndependentTasks;
	NSURL* _addMemberURL;
	BOOL _useMultiGet;
	NSDictionary* _bulkRequests;
	NSString* _bulkChangeCheckCTag;
	NSMutableSet* _syncReportDeletedURLs;
	NSMutableDictionary* _urlToETag;
	Class _appSpecificDataItemClass;
	BOOL _syncItemOrder;
	NSMutableArray* _localItemURLOrder;
	NSMutableDictionary* _remainingUUIDsToAddActions;
	NSMutableDictionary* _remainingHREFsToModDeleteActions;
	BOOL _actionsOnly;

}

@property (nonatomic,retain) NSString * nextCTag;                                         //@synthesize nextCTag=_nextCTag - In the implementation block
@property (nonatomic,retain) NSString * previousSyncToken;                                //@synthesize previousSyncToken=_previousSyncToken - In the implementation block
@property (nonatomic,readonly) NSURL * folderURL;                                         //@synthesize folderURL=_folderURL - In the implementation block
@property (nonatomic,retain) NSString * previousCTag;                                     //@synthesize previousCTag=_previousCTag - In the implementation block
@property (assign,nonatomic) BOOL useSyncCollection;                                      //@synthesize useSyncCollection=_useSyncCollection - In the implementation block
@property (assign,nonatomic) unsigned long long multiGetBatchSize;                        //@synthesize multiGetBatchSize=_multiGetBatchSize - In the implementation block
@property (assign,nonatomic) BOOL useMultiGet;                                            //@synthesize useMultiGet=_useMultiGet - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVLocalDBInfoProvider> delegate; 
@property (assign,nonatomic) unsigned long long maxIndependentTasks;                      //@synthesize maxIndependentTasks=_maxIndependentTasks - In the implementation block
@property (nonatomic,retain) NSURL * addMemberURL;                                        //@synthesize addMemberURL=_addMemberURL - In the implementation block
@property (nonatomic,retain) NSDictionary * bulkRequests;                                 //@synthesize bulkRequests=_bulkRequests - In the implementation block
@property (nonatomic,retain) NSString * bulkChangeCheckCTag;                              //@synthesize bulkChangeCheckCTag=_bulkChangeCheckCTag - In the implementation block
@property (assign,nonatomic) BOOL actionsOnly;                                            //@synthesize actionsOnly=_actionsOnly - In the implementation block
@property (nonatomic,readonly) NSArray * localItemURLOrder;                               //@synthesize localItemURLOrder=_localItemURLOrder - In the implementation block
@property (assign,nonatomic) BOOL ensureUpdatedCTag;                                      //@synthesize ensureUpdatedCTag=_ensureUpdatedCTag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSDictionary *)bulkRequests;
-(void)setAddMemberURL:(NSURL *)arg1 ;
-(void)setBulkRequests:(NSDictionary *)arg1 ;
-(NSURL *)addMemberURL;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)bailWithError:(id)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)startTaskGroup;
-(void)_tearDownAllUnsubmittedTasks;
-(void)cancelTaskGroup;
-(unsigned long long)_submitTasks;
-(void)_getETags;
-(id)dataContentType;
-(id)copyPostTaskWithPayloadItem:(id)arg1 forAction:(id)arg2 ;
-(id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2 ;
-(void)_getCTag;
-(Class)bulkChangeTaskClass;
-(void)_pushActions;
-(void)_sendNextBatch;
-(id)copyAdditionalResourcePropertiesToFetch;
-(id)copyGetEtagTaskWithPropertiesToFind:(id)arg1 ;
-(void)_getDataPayloads;
-(id)copyMultiGetTaskWithURLs:(id)arg1 ;
-(void)_configureMultiGet:(id)arg1 ;
-(void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 deletedItems:(id)arg3 error:(id)arg4 ;
-(BOOL)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3 ;
-(void)deleteResourceURLs:(id)arg1 ;
-(id)copyGetTaskWithURL:(id)arg1 ;
-(void)_bulkChange;
-(BOOL)isWhitelistedError:(id)arg1 ;
-(void)applyAdditionalPropertiesFromPutTask:(id)arg1 ;
-(void)applyAdditionalPropertiesFromPostTask:(id)arg1 ;
-(void)setPreviousSyncToken:(NSString *)arg1 ;
-(void)setUseSyncCollection:(BOOL)arg1 ;
-(BOOL)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2 ;
-(void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2 ;
-(void)_getOrder;
-(NSString *)nextCTag;
-(void)setBulkChangeCheckCTag:(NSString *)arg1 ;
-(void)_postTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_bulkChangeTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setNextCTag:(NSString *)arg1 ;
-(BOOL)shouldFetchMoreETags;
-(void)deleteTask:(id)arg1 completedWithError:(id)arg2 ;
-(void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3 ;
-(void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(BOOL)arg5 context:(id)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 ;
-(void)syncAway;
-(unsigned long long)multiGetBatchSize;
-(void)setMultiGetBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)maxIndependentTasks;
-(void)setMaxIndependentTasks:(unsigned long long)arg1 ;
-(BOOL)useMultiGet;
-(void)setUseMultiGet:(BOOL)arg1 ;
-(NSURL *)folderURL;
-(NSString *)previousCTag;
-(void)setPreviousCTag:(NSString *)arg1 ;
-(BOOL)ensureUpdatedCTag;
-(void)setEnsureUpdatedCTag:(BOOL)arg1 ;
-(NSString *)previousSyncToken;
-(BOOL)useSyncCollection;
-(NSArray *)localItemURLOrder;
-(NSString *)bulkChangeCheckCTag;
-(BOOL)actionsOnly;
-(void)setActionsOnly:(BOOL)arg1 ;
@end

