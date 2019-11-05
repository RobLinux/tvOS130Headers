/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:43:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/Support/bookassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <bookassetd/NSURLSessionDataDelegate.h>
#import <bookassetd/BLBookInstallManagerProgressDelegate.h>

@protocol BLOSTransactionCoordinating, OS_dispatch_queue, OS_dispatch_source;
@class ISOperationQueue, BLDatabaseManager, BLBookInstallManager, BLDownloadPolicyManager, NSObject, NSMutableSet, NSMutableOrderedSet, NSMapTable, NSMutableDictionary, BLDownloadPipelineQueue, NSString;

@interface BLDownloadPipeline : NSObject <NSURLSessionDataDelegate, BLBookInstallManagerProgressDelegate> {

	ISOperationQueue* _authenticationChallengeQueue;
	BLDatabaseManager* _databaseManager;
	BLBookInstallManager* _installManager;
	BLDownloadPolicyManager* _downloadPolicyManager;
	id<BLOSTransactionCoordinating> _transactionCoordinator;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ISOperationQueue* _backgroundOperationQueue;
	NSMutableSet* _dirtyTaskStates;
	NSMutableOrderedSet* _preparationDownloadIDs;
	ISOperationQueue* _preparationOperationQueue;
	ISOperationQueue* _processingOperationQueue;
	NSObject*<OS_dispatch_source> _reconnectTimer;
	NSObject*<OS_dispatch_source> _progressTimer;
	NSMapTable* _taskStates;
	NSMutableSet* _activeTaskStates;
	NSMutableDictionary* _urlSessions;
	ISOperationQueue* _sampleDownloadOperationQueue;
	ISOperationQueue* _discretionaryDownloadOperationQueue;
	ISOperationQueue* _nonDiscretionaryDownloadOperationQueue;
	BLDownloadPipelineQueue* _downloadPipelineQueue;

}

@property (assign,nonatomic,__weak) BLDatabaseManager * databaseManager;                                 //@synthesize databaseManager=_databaseManager - In the implementation block
@property (assign,nonatomic,__weak) BLBookInstallManager * installManager;                               //@synthesize installManager=_installManager - In the implementation block
@property (assign,nonatomic,__weak) BLDownloadPolicyManager * downloadPolicyManager;                     //@synthesize downloadPolicyManager=_downloadPolicyManager - In the implementation block
@property (assign,nonatomic,__weak) id<BLOSTransactionCoordinating> transactionCoordinator;              //@synthesize transactionCoordinator=_transactionCoordinator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                                 //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) ISOperationQueue * authenticationChallengeQueue;                          //@synthesize authenticationChallengeQueue=_authenticationChallengeQueue - In the implementation block
@property (nonatomic,retain) ISOperationQueue * backgroundOperationQueue;                                //@synthesize backgroundOperationQueue=_backgroundOperationQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * dirtyTaskStates;                                             //@synthesize dirtyTaskStates=_dirtyTaskStates - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * preparationDownloadIDs;                               //@synthesize preparationDownloadIDs=_preparationDownloadIDs - In the implementation block
@property (nonatomic,retain) ISOperationQueue * preparationOperationQueue;                               //@synthesize preparationOperationQueue=_preparationOperationQueue - In the implementation block
@property (nonatomic,retain) ISOperationQueue * processingOperationQueue;                                //@synthesize processingOperationQueue=_processingOperationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> reconnectTimer;                               //@synthesize reconnectTimer=_reconnectTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> progressTimer;                                //@synthesize progressTimer=_progressTimer - In the implementation block
@property (nonatomic,retain) NSMapTable * taskStates;                                                    //@synthesize taskStates=_taskStates - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeTaskStates;                                            //@synthesize activeTaskStates=_activeTaskStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * urlSessions;                                          //@synthesize urlSessions=_urlSessions - In the implementation block
@property (nonatomic,retain) ISOperationQueue * sampleDownloadOperationQueue;                            //@synthesize sampleDownloadOperationQueue=_sampleDownloadOperationQueue - In the implementation block
@property (nonatomic,retain) ISOperationQueue * discretionaryDownloadOperationQueue;                     //@synthesize discretionaryDownloadOperationQueue=_discretionaryDownloadOperationQueue - In the implementation block
@property (nonatomic,retain) ISOperationQueue * nonDiscretionaryDownloadOperationQueue;                  //@synthesize nonDiscretionaryDownloadOperationQueue=_nonDiscretionaryDownloadOperationQueue - In the implementation block
@property (nonatomic,readonly) BLDownloadPipelineQueue * downloadPipelineQueue;                          //@synthesize downloadPipelineQueue=_downloadPipelineQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSMutableDictionary *)urlSessions;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BLDatabaseManager *)databaseManager;
-(void)setDatabaseManager:(BLDatabaseManager *)arg1 ;
-(void)setProgressTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)progressTimer;
-(NSMapTable *)taskStates;
-(id)initWithDatabaseManager:(id)arg1 downloadPolicyManager:(id)arg2 transactionCoordinator:(id)arg3 installManager:(id)arg4 ;
-(BLBookInstallManager *)installManager;
-(void)setInstallManager:(BLBookInstallManager *)arg1 ;
-(BLDownloadPolicyManager *)downloadPolicyManager;
-(void)setDownloadPolicyManager:(BLDownloadPolicyManager *)arg1 ;
-(void)dq_pumpDownloadsWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_source>)reconnectTimer;
-(void)setReconnectTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)dq_prepareDownloadsForDownloads:(id)arg1 filtersExistingTasks:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)dq_setSessionTaskPriorityToHighForDownloadID:(id)arg1 ;
-(BLDownloadPipelineQueue *)downloadPipelineQueue;
-(id<BLOSTransactionCoordinating>)transactionCoordinator;
-(void)pumpDownloadsWithCompletion:(/*^block*/id)arg1 ;
-(ISOperationQueue *)preparationOperationQueue;
-(NSMutableOrderedSet *)preparationDownloadIDs;
-(NSMutableSet *)activeTaskStates;
-(id)dq_getTaskStateFromDownloadID:(id)arg1 ;
-(NSMutableSet *)dirtyTaskStates;
-(void)dq_startProgressTimer;
-(void)dq_processDownloadFailureWithTaskState:(id)arg1 task:(id)arg2 cancelReason:(long long)arg3 ;
-(void)restartDownloadsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dq_processCompletedDownloadWithTaskState:(id)arg1 postProgress:(BOOL)arg2 ;
-(void)dq_setDownloadState:(long long)arg1 forDownloadIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dq_clearIsLocalServerCacheForDownloadID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dq_scheduleReconnect;
-(void)dq_logDownloadEvent:(id)arg1 forTaskWithState:(id)arg2 ;
-(void)dq_commitProgress;
-(void)dq_cancelProgressTimer;
-(void)_addDownloads:(id)arg1 completion:(/*^block*/id)arg2 ;
-(ISOperationQueue *)backgroundOperationQueue;
-(ISOperationQueue *)sampleDownloadOperationQueue;
-(ISOperationQueue *)discretionaryDownloadOperationQueue;
-(ISOperationQueue *)nonDiscretionaryDownloadOperationQueue;
-(void)reconnectWithURLSessionTasks;
-(void)dq_saveState:(long long)arg1 forDownloadID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installManager:(id)arg1 willRestartInstallForDownload:(id)arg2 ;
-(void)installManager:(id)arg1 didStartInstallWithOperation:(id)arg2 forDownloadID:(id)arg3 ;
-(void)installManager:(id)arg1 updatedProgress:(id)arg2 forInstallOperation:(id)arg3 ;
-(void)installManager:(id)arg1 didFinishInstallForOperation:(id)arg2 ;
-(void)prioritizeDownloadWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startupDownloadsWithCompletion:(/*^block*/id)arg1 ;
-(void)stopDownloadsWithIdentifiers:(id)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(ISOperationQueue *)authenticationChallengeQueue;
-(void)doq_performDownloadOperation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setTransactionCoordinator:(id<BLOSTransactionCoordinating>)arg1 ;
-(void)setBackgroundOperationQueue:(ISOperationQueue *)arg1 ;
-(void)setDirtyTaskStates:(NSMutableSet *)arg1 ;
-(void)setPreparationDownloadIDs:(NSMutableOrderedSet *)arg1 ;
-(void)setPreparationOperationQueue:(ISOperationQueue *)arg1 ;
-(ISOperationQueue *)processingOperationQueue;
-(void)setProcessingOperationQueue:(ISOperationQueue *)arg1 ;
-(void)setTaskStates:(NSMapTable *)arg1 ;
-(void)setActiveTaskStates:(NSMutableSet *)arg1 ;
-(void)setUrlSessions:(NSMutableDictionary *)arg1 ;
-(void)setSampleDownloadOperationQueue:(ISOperationQueue *)arg1 ;
-(void)setDiscretionaryDownloadOperationQueue:(ISOperationQueue *)arg1 ;
-(void)setNonDiscretionaryDownloadOperationQueue:(ISOperationQueue *)arg1 ;
@end
