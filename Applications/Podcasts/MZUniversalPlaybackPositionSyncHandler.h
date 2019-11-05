/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:18 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MZKeyValueStoreControllerDelegate.h>
#import <Podcasts/MZKeyValueStoreTransactionProcessing.h>

@protocol OS_dispatch_queue, MZUniversalPlaybackPositionDataSource, MZUniversalPlaybackPositionTransactionContext;
@class NSObject, MZKeyValueStoreController, MZUPPBagContext, MZAsynchronousTask, NSString, NSMutableDictionary, MZKeyValueStoreTransaction, NSError;

@interface MZUniversalPlaybackPositionSyncHandler : NSObject <MZKeyValueStoreControllerDelegate, MZKeyValueStoreTransactionProcessing> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _syncOperationQueue;
	BOOL _canRequestStoreSignIn;
	BOOL _syncInProgress;
	BOOL _canceled;
	MZKeyValueStoreController* _kvsController;
	id<MZUniversalPlaybackPositionDataSource> _dataSource;
	id<MZUniversalPlaybackPositionTransactionContext> _dataSourceTransactionContext;
	MZUPPBagContext* _bagContext;
	MZAsynchronousTask* _task;
	NSString* _responseDomainVersion;
	NSMutableDictionary* m_etadataItemsFromDataSource;
	NSMutableDictionary* _metadataItemsFromKVSStorage;
	NSMutableDictionary* _metadataItemsToCommitToDataSource;
	NSMutableDictionary* _metadataItemsToCommitToKVSStorage;
	NSMutableDictionary* _reportedItemVersionForIdentifier;
	MZKeyValueStoreTransaction* currentKVSTransaction;
	NSError* _fatalSyncError;

}

@property (retain) MZKeyValueStoreController * kvsController;                                                   //@synthesize kvsController=_kvsController - In the implementation block
@property (retain) id<MZUniversalPlaybackPositionDataSource> dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) id<MZUniversalPlaybackPositionTransactionContext> dataSourceTransactionContext;              //@synthesize dataSourceTransactionContext=_dataSourceTransactionContext - In the implementation block
@property (retain) MZUPPBagContext * bagContext;                                                                //@synthesize bagContext=_bagContext - In the implementation block
@property (retain) MZAsynchronousTask * task;                                                                   //@synthesize task=_task - In the implementation block
@property (retain) NSString * responseDomainVersion;                                                            //@synthesize responseDomainVersion=_responseDomainVersion - In the implementation block
@property (retain) NSMutableDictionary * metadataItemsFromDataSource; 
@property (retain) NSMutableDictionary * metadataItemsFromKVSStorage;                                           //@synthesize metadataItemsFromKVSStorage=_metadataItemsFromKVSStorage - In the implementation block
@property (retain) NSMutableDictionary * metadataItemsToCommitToDataSource;                                     //@synthesize metadataItemsToCommitToDataSource=_metadataItemsToCommitToDataSource - In the implementation block
@property (retain) NSMutableDictionary * metadataItemsToCommitToKVSStorage;                                     //@synthesize metadataItemsToCommitToKVSStorage=_metadataItemsToCommitToKVSStorage - In the implementation block
@property (retain) NSMutableDictionary * reportedItemVersionForIdentifier;                                      //@synthesize reportedItemVersionForIdentifier=_reportedItemVersionForIdentifier - In the implementation block
@property (retain) MZKeyValueStoreTransaction * currentKVSTransaction; 
@property (assign) BOOL syncInProgress;                                                                         //@synthesize syncInProgress=_syncInProgress - In the implementation block
@property (assign) BOOL canceled;                                                                               //@synthesize canceled=_canceled - In the implementation block
@property (retain) NSError * fatalSyncError;                                                                    //@synthesize fatalSyncError=_fatalSyncError - In the implementation block
@property (assign,nonatomic) BOOL canRequestStoreSignIn;                                                        //@synthesize canRequestStoreSignIn=_canRequestStoreSignIn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(MZAsynchronousTask *)task;
-(void)setTask:(MZAsynchronousTask *)arg1 ;
-(void)timeout;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(BOOL)_synchronize:(id*)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(id<MZUniversalPlaybackPositionDataSource>)dataSource;
-(void)setDataSource:(id<MZUniversalPlaybackPositionDataSource>)arg1 ;
-(BOOL)_shouldStop;
-(MZUPPBagContext *)bagContext;
-(void)setBagContext:(MZUPPBagContext *)arg1 ;
-(void)_resetState;
-(NSString *)responseDomainVersion;
-(void)setMetadataItemsFromDataSource:(NSMutableDictionary *)arg1 ;
-(void)setMetadataItemsToCommitToDataSource:(NSMutableDictionary *)arg1 ;
-(void)setMetadataItemsToCommitToKVSStorage:(NSMutableDictionary *)arg1 ;
-(void)setKvsController:(MZKeyValueStoreController *)arg1 ;
-(void)setDataSourceTransactionContext:(id<MZUniversalPlaybackPositionTransactionContext>)arg1 ;
-(void)setCurrentKVSTransaction:(MZKeyValueStoreTransaction *)arg1 ;
-(NSMutableDictionary *)metadataItemsFromDataSource;
-(id<MZUniversalPlaybackPositionTransactionContext>)dataSourceTransactionContext;
-(BOOL)syncInProgress;
-(void)setSyncInProgress:(BOOL)arg1 ;
-(void)_dataSourceCancelTransaction;
-(NSMutableDictionary *)metadataItemsToCommitToKVSStorage;
-(MZKeyValueStoreTransaction *)currentKVSTransaction;
-(id)_synchronouslyRunKVSTransaction:(id)arg1 ;
-(NSMutableDictionary *)metadataItemsToCommitToDataSource;
-(NSError *)fatalSyncError;
-(MZKeyValueStoreController *)kvsController;
-(void)_signalKVSTransactionCompletion:(id)arg1 withError:(id)arg2 ;
-(void)setFatalSyncError:(NSError *)arg1 ;
-(void)_signalKVSTransactionCompletion:(id)arg1 ;
-(void)setResponseDomainVersion:(NSString *)arg1 ;
-(id)initWithDataSource:(id)arg1 bagContext:(id)arg2 andTask:(id)arg3 ;
-(void)setCanRequestStoreSignIn:(BOOL)arg1 ;
-(BOOL)canRequestStoreSignIn;
-(void)setMetadataItemsFromKVSStorage:(NSMutableDictionary *)arg1 ;
-(void)setReportedItemVersionForIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)metadataItemsFromKVSStorage;
-(NSMutableDictionary *)reportedItemVersionForIdentifier;
-(id)newKVSGetAllTransactionWithMetadataItems:(id)arg1 ;
-(void)_mergeMetadataItemsFromGetResponse;
-(id)newKVSGetAllTransactionSinceDomainVersion:(id)arg1 ;
-(id)newKVSPutAllTransactionWithMetadataItems:(id)arg1 ;
-(id)newKVSTransactionWithType:(int)arg1 keys:(id)arg2 ;
-(int)_mergeMetadataItemFromSetResponse:(id)arg1 ;
-(BOOL)keyValueStoreController:(id)arg1 transaction:(id)arg2 didFailWithError:(id)arg3 ;
-(void)keyValueStoreController:(id)arg1 transaction:(id)arg2 didCancelWithError:(id)arg3 ;
-(void)keyValueStoreController:(id)arg1 transactionDidFinish:(id)arg2 ;
-(BOOL)keyValueStoreController:(id)arg1 shouldScheduleTransaction:(id)arg2 ;
-(id)versionForGetTransaction:(id)arg1 key:(id)arg2 ;
-(id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id*)arg3 ;
-(void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 domainVersion:(id)arg4 version:(id)arg5 mismatch:(BOOL)arg6 finishedBlock:(/*^block*/id)arg7 ;
-(void)transaction:(id)arg1 willProcessResponseWithDomainVersion:(id)arg2 ;
-(void)transaction:(id)arg1 didProcessResponseWithDomainVersion:(id)arg2 ;
-(id)keysForTransaction:(id)arg1 ;
-(id)sinceDomainVersionForTransaction:(id)arg1 ;
@end
