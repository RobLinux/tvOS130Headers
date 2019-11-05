/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBSQLContext.h>

@interface HMBLocalSQLContext : HMBSQLContext {

	sqlite3_stmtRef insertStore;
	sqlite3_stmtRef deleteStore;
	sqlite3_stmtRef selectStore;
	sqlite3_stmtRef selectStores;
	sqlite3_stmtRef updateStoreReplicationData;
	sqlite3_stmtRef insertBlock;
	sqlite3_stmtRef selectBlock;
	sqlite3_stmtRef deleteBlock;
	sqlite3_stmtRef deleteBlocksStore;
	sqlite3_stmtRef updateBlock;
	sqlite3_stmtRef selectReadyBlocks;
	sqlite3_stmtRef selectReadyInputBlocks;
	sqlite3_stmtRef deleteNullBlocks;
	sqlite3_stmtRef insertItem;
	sqlite3_stmtRef insertDeletionItemsForRecordsOfType;
	sqlite3_stmtRef insertDeletionItemsForRecordWithUUID;
	sqlite3_stmtRef insertDeletionItemsForRecordsWithParentUUID;
	sqlite3_stmtRef updateItem;
	sqlite3_stmtRef deleteItem;
	sqlite3_stmtRef deleteItemsBlock;
	sqlite3_stmtRef deleteItemsStore;
	sqlite3_stmtRef deleteItemStoreExternal;
	sqlite3_stmtRef selectItemBlockExteral;
	sqlite3_stmtRef selectItemsBlock;
	sqlite3_stmtRef selectItemsBlockLimit;
	sqlite3_stmtRef deleteNullItems;
	sqlite3_stmtRef deleteNullItemsType;
	sqlite3_stmtRef insertRecord;
	sqlite3_stmtRef updateRecord;
	sqlite3_stmtRef updateRecordExternal;
	sqlite3_stmtRef updateRecordExternalPush;
	sqlite3_stmtRef updateRecordExternalExternal;
	sqlite3_stmtRef updateRecordExternalUUID;
	sqlite3_stmtRef updateRecordPush;
	sqlite3_stmtRef updateRecordPushUUID;
	sqlite3_stmtRef updateRecordsClearPush;
	sqlite3_stmtRef deleteRecord;
	sqlite3_stmtRef deleteRecordBlock;
	sqlite3_stmtRef deleteRecordUUID;
	sqlite3_stmtRef deleteRecordExternal;
	sqlite3_stmtRef deleteRecordsStore;
	sqlite3_stmtRef deleteZombieRecords;
	sqlite3_stmtRef selectRecord;
	sqlite3_stmtRef selectRecordUUIDExternal;
	sqlite3_stmtRef selectRecordUUID;
	sqlite3_stmtRef selectRecordExternal;
	sqlite3_stmtRef selectRecordsPushBlock;
	sqlite3_stmtRef selectRecordsParentUUID;
	sqlite3_stmtRef selectRecordsParentUUIDType;
	sqlite3_stmtRef selectRecordsOfType;
	sqlite3_stmtRef selectRecordsOfTypeOrderedByID;
	sqlite3_stmtRef selectRecords;
	sqlite3_stmtRef selectRecordAllIterator;
	sqlite3_stmtRef deleteQueryableStore;
	sqlite3_stmtRef deleteQueryableRecord;
	sqlite3_stmtRef updateQueryable;
	sqlite3_stmtRef selectQueryable;

}
+(id)logCategory;
+(id)openWithURL:(id)arg1 readOnly:(BOOL)arg2 error:(id*)arg3 ;
+(void)unlinkDatastoreAt:(id)arg1 everything:(BOOL)arg2 ;
-(id)initialize;
-(id)close;
-(id)prepare;
-(id)flush:(BOOL)arg1 ;
-(id)logIdentifier;
-(id)sqlBlockWithActivity:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_selectReadyBlocksWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteNullItemsWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteNullBlocksWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteZombieRecordsWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_selectBlockWithRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)sqlBlockWithActivity:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(unsigned long long)_insertBlockWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_selectItemsWithBlockRow:(unsigned long long)arg1 returning:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_selectRecordModelIDWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 error:(id*)arg3 ;
-(BOOL)_deleteItemWithRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteRecordWithRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteQueryableWithRecordRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)_insertBlockWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 options:(id)arg3 items:(id)arg4 error:(id*)arg5 ;
-(id)sqlTransactionWithActivity:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_updateRecordWithRow:(unsigned long long)arg1 modelEncoding:(unsigned long long)arg2 modelData:(id)arg3 modelSchema:(id)arg4 error:(id*)arg5 ;
-(BOOL)_updateRecordWithRow:(unsigned long long)arg1 pushBlockRow:(unsigned long long)arg2 pushData:(id)arg3 pushEncoding:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)_updateRecordWithRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 error:(id*)arg4 ;
-(BOOL)_updateQueryableWithZoneRow:(unsigned long long)arg1 recordRow:(unsigned long long)arg2 type:(id)arg3 fields:(id)arg4 error:(id*)arg5 ;
-(unsigned long long)_insertRecordWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 modelID:(id)arg4 parentModelID:(id)arg5 modelType:(id)arg6 modelEncoding:(unsigned long long)arg7 modelData:(id)arg8 modelSchema:(id)arg9 pushEncoding:(unsigned long long)arg10 pushData:(id)arg11 pushBlockRow:(unsigned long long)arg12 error:(id*)arg13 ;
-(BOOL)_updateBlockWithRow:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)_updateRecordsClearPushWithPushBlockRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_selectRecordWithZoneRow:(unsigned long long)arg1 modelID:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)_insertItemWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 externalID:(id)arg4 externalData:(id)arg5 modelEncoding:(unsigned long long)arg6 modelData:(id)arg7 error:(id*)arg8 ;
-(BOOL)_updateItemWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 externalID:(id)arg4 externalData:(id)arg5 modelEncoding:(unsigned long long)arg6 modelData:(id)arg7 error:(id*)arg8 ;
-(BOOL)_deleteItemsWithBlockRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteBlockWithRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_updateRecordWithZoneRow:(unsigned long long)arg1 modelID:(id)arg2 externalData:(id)arg3 error:(id*)arg4 ;
-(BOOL)_updateRecordWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 error:(id*)arg4 ;
-(BOOL)_deleteZoneWithRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_fetchAllZones:(id*)arg1 ;
-(unsigned long long)_insertZoneWithIdentification:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(id)_selectRecordsWithBlockRow:(unsigned long long)arg1 returning:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_deleteRecordWithRow:(unsigned long long)arg1 expectedOutputBlockRow:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_updateRecordWithZoneRow:(unsigned long long)arg1 modelID:(id)arg2 pushEncoding:(unsigned long long)arg3 pushData:(id)arg4 pushBlockRow:(unsigned long long)arg5 error:(id*)arg6 ;
-(BOOL)sqlTransactionWithActivity:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(unsigned long long)_insertDeletionItemsWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 modelType:(id)arg4 error:(id*)arg5 ;
-(unsigned long long)_insertDeletionItemWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 modelID:(id)arg4 error:(id*)arg5 ;
-(unsigned long long)_insertDeletionItemsWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 parentModelID:(id)arg4 error:(id*)arg5 ;
-(id)_selectReadyBlocksWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_deleteRecordWithZoneRow:(unsigned long long)arg1 modelID:(id)arg2 error:(id*)arg3 ;
-(long long)migrateFromSchemaVersion:(long long)arg1 error:(id*)arg2 ;
-(id)_selectRecordWithRow:(unsigned long long)arg1 returning:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_selectRecordWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)selectAllRecordsWithZoneRow:(unsigned long long)arg1 returning:(unsigned long long)arg2 ;
-(BOOL)_deleteQueryableWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteRecordsWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteItemWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_deleteBlocksWithZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_selectRecordWithZoneRow:(unsigned long long)arg1 parentModelID:(id)arg2 modelType:(id)arg3 returning:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)_selectRecordWithZoneRow:(unsigned long long)arg1 parentModelID:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)_selectRecordsWithZoneRow:(unsigned long long)arg1 returning:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_selectRecordsWithZoneRow:(unsigned long long)arg1 modelType:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)_selectRecordsWithZoneRow:(unsigned long long)arg1 modelType:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(id)_selectRecordsWithZoneRow:(unsigned long long)arg1 modelType:(id)arg2 limit:(unsigned long long)arg3 returning:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)_selectRecordsWithZoneRow:(unsigned long long)arg1 modelType:(id)arg2 limit:(unsigned long long)arg3 returning:(unsigned long long)arg4 error:(id*)arg5 handler:(/*^block*/id)arg6 ;
-(id)_selectQueryableWithZoneRow:(unsigned long long)arg1 type:(id)arg2 desired:(id)arg3 limit:(unsigned long long)arg4 after:(unsigned long long)arg5 error:(id*)arg6 ;
-(long long)migrateToSchema01WithError:(id*)arg1 ;
-(id)_selectZoneWithRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_updateZoneWithRow:(unsigned long long)arg1 replication:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)_insertItemWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 modelType:(id)arg4 error:(id*)arg5 ;
-(BOOL)_deleteItemWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 externalID:(id)arg3 error:(id*)arg4 ;
-(id)_selectItemWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 externalID:(id)arg3 returning:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)_selectItemsWithBlockRow:(unsigned long long)arg1 rowGreaterThan:(unsigned long long)arg2 limit:(unsigned long long)arg3 returning:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)_deleteNullItemsWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_updateRecordWithRow:(unsigned long long)arg1 expectedOutputBlockRow:(unsigned long long)arg2 externalID:(id)arg3 externalData:(id)arg4 error:(id*)arg5 ;
-(BOOL)_deleteRecordWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 error:(id*)arg3 ;
@end
