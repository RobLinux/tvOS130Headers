/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:11 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperation, NSOperationQueue, TVSPreferences, NSArray, CKServerChangeToken, HBCloudSyncChangeSet, NSObject;

@interface HBCloudSyncDatabaseServices : NSObject {

	BOOL _pendingDeviceToCloudSync;
	NSOperation* _currentOperation;
	NSOperationQueue* _ckOperationsQueue;
	TVSPreferences* _headBoardPreferences;
	NSArray* _modifiedItemsPendingToBeSynced;
	NSArray* _deletedItemIdsPendingToBeSynced;
	CKServerChangeToken* _serverChangeTokenForCurrentOperation;
	HBCloudSyncChangeSet* _recordChangeSet;
	NSObject*<OS_dispatch_queue> _serialQueue;
	/*^block*/id _fetchCloudDatabaseChangesCompletionBlock;
	/*^block*/id _saveRecordsCompletionHandler;

}

@property (nonatomic,retain) NSOperation * currentOperation;                                        //@synthesize currentOperation=_currentOperation - In the implementation block
@property (nonatomic,retain) NSOperationQueue * ckOperationsQueue;                                  //@synthesize ckOperationsQueue=_ckOperationsQueue - In the implementation block
@property (nonatomic,retain) TVSPreferences * headBoardPreferences;                                 //@synthesize headBoardPreferences=_headBoardPreferences - In the implementation block
@property (assign,nonatomic) BOOL pendingDeviceToCloudSync;                                         //@synthesize pendingDeviceToCloudSync=_pendingDeviceToCloudSync - In the implementation block
@property (nonatomic,copy) NSArray * modifiedItemsPendingToBeSynced;                                //@synthesize modifiedItemsPendingToBeSynced=_modifiedItemsPendingToBeSynced - In the implementation block
@property (nonatomic,copy) NSArray * deletedItemIdsPendingToBeSynced;                               //@synthesize deletedItemIdsPendingToBeSynced=_deletedItemIdsPendingToBeSynced - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * serverChangeTokenForCurrentOperation;              //@synthesize serverChangeTokenForCurrentOperation=_serverChangeTokenForCurrentOperation - In the implementation block
@property (nonatomic,retain) HBCloudSyncChangeSet * recordChangeSet;                                //@synthesize recordChangeSet=_recordChangeSet - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,copy) id fetchCloudDatabaseChangesCompletionBlock;                             //@synthesize fetchCloudDatabaseChangesCompletionBlock=_fetchCloudDatabaseChangesCompletionBlock - In the implementation block
@property (nonatomic,copy) id saveRecordsCompletionHandler;                                         //@synthesize saveRecordsCompletionHandler=_saveRecordsCompletionHandler - In the implementation block
+(void)initialize;
-(id)init;
-(NSOperation *)currentOperation;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCurrentOperation:(NSOperation *)arg1 ;
-(void)resetCachedSyncParametersIfAvailable;
-(void)fetchCloudDatabaseChangesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)initializeCloudSchemaWithFolder:(id)arg1 completionHander:(/*^block*/id)arg2 ;
-(id)getUnarchivedZoneID:(BOOL)arg1 ;
-(id)customZoneNameForiCloudUser;
-(void)fetchMigrationStatusWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)recordZoneIDForOneHomeScreenZone;
-(void)deleteRecordZones:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)fetchZoneWithRecordZoneID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldDeleteOneHomeScreenZone:(id)arg1 ;
-(void)fetchMetadataZoneInfoWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fetchDatabaseChangesForDiscardableZone:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteAllRecordZonesExceptZone:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)saveChangesToCloudForAddedOrModifiedItems:(id)arg1 deletedItemIds:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)commitChangeTokens;
-(void)saveSubscriptionIfNeededForCustomUserZoneWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)didMigrateData;
-(void)setFetchCloudDatabaseChangesCompletionBlock:(id)arg1 ;
-(void)_fetchZonesFromCloudDatabase;
-(BOOL)_isAppropriateToMigrateData:(id)arg1 ;
-(void)_invalidateSyncTokensAndCachedParameters;
-(CKServerChangeToken *)serverChangeTokenForCurrentOperation;
-(void)archiveCKServerChangeToken:(id)arg1 ;
-(void)setServerChangeTokenForCurrentOperation:(CKServerChangeToken *)arg1 ;
-(void)archiveZoneWithID:(id)arg1 isMetadataZone:(BOOL)arg2 ;
-(void)setSaveRecordsCompletionHandler:(id)arg1 ;
-(id)saveRecordsCompletionHandler;
-(void)_syncChangesToCloudForZone:(id)arg1 addedOrModifiedItems:(id)arg2 deletedItemIds:(id)arg3 ;
-(void)_configureAndExecuteOperation:(id)arg1 ;
-(void)setModifiedItemsPendingToBeSynced:(NSArray *)arg1 ;
-(void)setDeletedItemIdsPendingToBeSynced:(NSArray *)arg1 ;
-(void)setPendingDeviceToCloudSync:(BOOL)arg1 ;
-(id)getUnarchivedSubscriptionInfo;
-(id)_desiredSubscriptionFromSubscriptionsMapping:(id)arg1 ;
-(void)archiveSubscriptionInfo:(id)arg1 ;
-(void)_registerSubscriptionForZoneID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_desiredRecordZoneIDWithZoneName:(id)arg1 fromMapping:(id)arg2 ;
-(void)_fetchMetadataZoneChangesForZoneID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_desiredRecordZoneIDFromMapping:(id)arg1 ;
-(BOOL)pendingDeviceToCloudSync;
-(NSArray *)modifiedItemsPendingToBeSynced;
-(NSArray *)deletedItemIdsPendingToBeSynced;
-(void)_resetCachedSyncParametersIfNeededForZone:(id)arg1 ;
-(void)_fetchDatabaseChangesForZoneWithID:(id)arg1 ;
-(id)fetchCloudDatabaseChangesCompletionBlock;
-(id)getUnarchivedServerChangeToken;
-(HBCloudSyncChangeSet *)recordChangeSet;
-(void)setRecordChangeSet:(HBCloudSyncChangeSet *)arg1 ;
-(id)_folderRecordForFolder:(id)arg1 ;
-(id)_folderIdentifierForFolder:(id)arg1 ;
-(id)_ckRecordFromApp:(id)arg1 parentFolderRecord:(id)arg2 ;
-(void)_modifyOrDeleteRecordsInCloudWithRecordsToAdd:(id)arg1 recordIdsToDelete:(id)arg2 didDiscardItemsForSync:(BOOL)arg3 ;
-(id)_ckContainerIdentifier;
-(id)_appPurchaserAccountNameForApp:(id)arg1 ;
-(id)_ckRecordFromFolder:(id)arg1 parentFolderRecord:(id)arg2 ;
-(id)_defaultConfigurationForOperations;
-(NSOperationQueue *)ckOperationsQueue;
-(void)setCkOperationsQueue:(NSOperationQueue *)arg1 ;
-(TVSPreferences *)headBoardPreferences;
-(void)setHeadBoardPreferences:(TVSPreferences *)arg1 ;
@end

