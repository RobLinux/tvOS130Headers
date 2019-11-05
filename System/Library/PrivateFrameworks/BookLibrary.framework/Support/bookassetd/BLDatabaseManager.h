/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:43:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/Support/bookassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel;

@interface BLDatabaseManager : NSObject {

	NSURL* _persistentStoreURL;
	NSPersistentStoreCoordinator* _psc;
	NSManagedObjectContext* _moc;
	NSManagedObjectModel* _mom;

}

@property (nonatomic,retain) NSPersistentStoreCoordinator * psc;              //@synthesize psc=_psc - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * moc;                    //@synthesize moc=_moc - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * mom;                      //@synthesize mom=_mom - In the implementation block
@property (nonatomic,copy,readonly) NSURL * persistentStoreURL;               //@synthesize persistentStoreURL=_persistentStoreURL - In the implementation block
-(id)init;
-(void)setPsc:(NSPersistentStoreCoordinator *)arg1 ;
-(NSPersistentStoreCoordinator *)psc;
-(void)cancelDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)pauseDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resumeDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSManagedObjectContext *)moc;
-(void)setMoc:(NSManagedObjectContext *)arg1 ;
-(NSURL *)persistentStoreURL;
-(void)fetchDownloadListWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchDownloadFromDownloadID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestDownloadWithParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_setupPersistentStore:(BOOL)arg1 ;
-(BOOL)_modelChanged;
-(id)mq_newInMemoryDownloadFromDownloadInfo:(id)arg1 ;
-(void)_fetchDownloadInfoEntityWithID:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)saveDownloadStateWithId:(id)arg1 state:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchDownloadsWithPredicate:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_fetchDownloadPolicyInfoEntityWithID:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_deleteDownloadPolicyWithID:(id)arg1 save:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)mq_newDownloadPolicyFromDownloadPolicyInfo:(id)arg1 ;
-(void)_fetchDownloadPoliciesWithPredicate:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)mq_writeSinf:(id)arg1 downloadID:(id)arg2 ;
-(id)mq_writeArtworkWithURL:(id)arg1 downloadID:(id)arg2 ;
-(void)fetchListOfAllDownloadCandidatesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchListOfPendingDownloadsSortedByStartTime:(/*^block*/id)arg1 ;
-(void)purgeAllStaleDownloadsWithCompletion:(/*^block*/id)arg1 ;
-(void)syncSaveDownloadStateWithId:(id)arg1 state:(long long)arg2 ;
-(void)saveDownloadSizeWithId:(id)arg1 size:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveIsLocalCacheServerWithId:(id)arg1 isLocal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveDownloadPathWithId:(id)arg1 path:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateDownloadWithID:(id)arg1 updateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateAllInterruptedDownloadsToTheirProperStatesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchDownloadListWithPredicate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteDownloadWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveOrUpdateDownloadPolicy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteDownloadPolicyWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchDownloadPolicyWithID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchListOfAllDownloadPoliciesWithCompletion:(/*^block*/id)arg1 ;
-(void)addDownloadWithBuyParameters:(id)arg1 storeID:(id)arg2 clientIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addDownloadWithPermlink:(id)arg1 clientIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)mq_writeMetadata:(id)arg1 clientIdentifier:(id)arg2 downloadID:(id)arg3 ;
-(NSManagedObjectModel *)mom;
-(void)setMom:(NSManagedObjectModel *)arg1 ;
@end

