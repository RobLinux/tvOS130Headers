/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
@class NSObject, NSString;

@interface UserRegistryDB : NSObject {

	sqlite3Ref _sqliteHandle;
	sqlite3_stmtRef _recordIDStatment;
	sqlite3_stmtRef _replaceStatment;
	sqlite3_stmtRef _deleteStatment;
	sqlite3_stmtRef _insertWatch;
	sqlite3_stmtRef _updateWatch;
	sqlite3_stmtRef _insertMirrorKey;
	sqlite3_stmtRef _updateMirrorKey;
	sqlite3_stmtRef _markMirrorKey;
	sqlite3_stmtRef _deleteMirrorKeys;
	sqlite3_stmtRef _resetCurrentMirrorKey;
	sqlite3_stmtRef _insertEscrowKey;
	sqlite3_stmtRef _updateEscrowKey;
	sqlite3_stmtRef _deleteEscrowKey;
	sqlite3_stmtRef _queryEscrowKey;
	sqlite3_stmtRef _queryEscrowKeysAll;
	sqlite3_stmtRef _insertWatchKey;
	sqlite3_stmtRef _queryMissingKeys;
	sqlite3_stmtRef _queryWatches;
	NSObject*<OS_os_log> _oslog;
	NSString* _dsid;

}

@property (assign) sqlite3Ref sqliteHandle;                            //@synthesize sqliteHandle=_sqliteHandle - In the implementation block
@property (assign) sqlite3_stmtRef recordIDStatment;                   //@synthesize recordIDStatment=_recordIDStatment - In the implementation block
@property (assign) sqlite3_stmtRef replaceStatment;                    //@synthesize replaceStatment=_replaceStatment - In the implementation block
@property (assign) sqlite3_stmtRef deleteStatment;                     //@synthesize deleteStatment=_deleteStatment - In the implementation block
@property (assign) sqlite3_stmtRef insertWatch;                        //@synthesize insertWatch=_insertWatch - In the implementation block
@property (assign) sqlite3_stmtRef updateWatch;                        //@synthesize updateWatch=_updateWatch - In the implementation block
@property (assign) sqlite3_stmtRef insertMirrorKey;                    //@synthesize insertMirrorKey=_insertMirrorKey - In the implementation block
@property (assign) sqlite3_stmtRef updateMirrorKey;                    //@synthesize updateMirrorKey=_updateMirrorKey - In the implementation block
@property (assign) sqlite3_stmtRef markMirrorKey;                      //@synthesize markMirrorKey=_markMirrorKey - In the implementation block
@property (assign) sqlite3_stmtRef deleteMirrorKeys;                   //@synthesize deleteMirrorKeys=_deleteMirrorKeys - In the implementation block
@property (assign) sqlite3_stmtRef resetCurrentMirrorKey;              //@synthesize resetCurrentMirrorKey=_resetCurrentMirrorKey - In the implementation block
@property (assign) sqlite3_stmtRef insertEscrowKey;                    //@synthesize insertEscrowKey=_insertEscrowKey - In the implementation block
@property (assign) sqlite3_stmtRef updateEscrowKey;                    //@synthesize updateEscrowKey=_updateEscrowKey - In the implementation block
@property (assign) sqlite3_stmtRef deleteEscrowKey;                    //@synthesize deleteEscrowKey=_deleteEscrowKey - In the implementation block
@property (assign) sqlite3_stmtRef queryEscrowKey;                     //@synthesize queryEscrowKey=_queryEscrowKey - In the implementation block
@property (assign) sqlite3_stmtRef queryEscrowKeysAll;                 //@synthesize queryEscrowKeysAll=_queryEscrowKeysAll - In the implementation block
@property (assign) sqlite3_stmtRef insertWatchKey;                     //@synthesize insertWatchKey=_insertWatchKey - In the implementation block
@property (assign) sqlite3_stmtRef queryMissingKeys;                   //@synthesize queryMissingKeys=_queryMissingKeys - In the implementation block
@property (assign) sqlite3_stmtRef queryWatches;                       //@synthesize queryWatches=_queryWatches - In the implementation block
@property (retain) NSObject*<OS_os_log> oslog;                         //@synthesize oslog=_oslog - In the implementation block
@property (retain) NSString * dsid;                                    //@synthesize dsid=_dsid - In the implementation block
-(void)dealloc;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(id)initWithDSID:(id)arg1 ;
-(void)setOslog:(NSObject*<OS_os_log>)arg1 ;
-(BOOL)setupDatabase;
-(NSObject*<OS_os_log>)oslog;
-(BOOL)beginExclusiveTransaction;
-(BOOL)endTransaction:(BOOL)arg1 ;
-(BOOL)prepare:(const char*)arg1 statement:(sqlite3_stmt*)arg2 ;
-(id)getData:(id)arg1 type:(int)arg2 ;
-(BOOL)replaceRecord:(id)arg1 type:(int)arg2 data:(id)arg3 publicKey:(id)arg4 ;
-(BOOL)deleteRecordAll;
-(id)getConfigData:(id)arg1 ;
-(BOOL)replaceConfigRecord:(id)arg1 data:(id)arg2 ;
-(id)getRecordIDData:(id)arg1 ;
-(BOOL)replaceRecordID:(id)arg1 data:(id)arg2 publicKey:(id)arg3 ;
-(BOOL)deleteRecordID:(id)arg1 ;
-(BOOL)setMirrorKey:(id)arg1 service:(int)arg2 type:(int)arg3 publicIdentity:(id)arg4 ;
-(BOOL)markMirrorKey:(int)arg1 type:(int)arg2 ;
-(BOOL)updateMirrorKey:(id)arg1 service:(int)arg2 type:(int)arg3 newType:(int)arg4 current:(BOOL)arg5 ;
-(BOOL)deleteMirrorKeys:(int)arg1 ;
-(BOOL)setEscrowKey:(id)arg1 escrowBlob:(id)arg2 ;
-(BOOL)updateEscrowKey:(id)arg1 escrowBlob:(id)arg2 ;
-(BOOL)deleteEscrowKey:(id)arg1 ;
-(id)queryEscrowKey:(id)arg1 ;
-(id)queryEscrowKeys;
-(BOOL)updateSyncDevice:(id)arg1 seen:(id)arg2 version:(id)arg3 ;
-(BOOL)syncedKeyToDevice:(id)arg1 type:(int)arg2 device:(id)arg3 ;
-(id)syncDevices;
-(id)missingKeysFromDevice:(id)arg1 type:(int)arg2 ;
-(sqlite3Ref)sqliteHandle;
-(void)setSqliteHandle:(sqlite3Ref)arg1 ;
-(sqlite3_stmtRef)recordIDStatment;
-(void)setRecordIDStatment:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)replaceStatment;
-(void)setReplaceStatment:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)deleteStatment;
-(void)setDeleteStatment:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)insertWatch;
-(void)setInsertWatch:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)updateWatch;
-(void)setUpdateWatch:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)insertMirrorKey;
-(void)setInsertMirrorKey:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)updateMirrorKey;
-(void)setUpdateMirrorKey:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)markMirrorKey;
-(void)setMarkMirrorKey:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)deleteMirrorKeys;
-(void)setDeleteMirrorKeys:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)resetCurrentMirrorKey;
-(void)setResetCurrentMirrorKey:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)insertEscrowKey;
-(void)setInsertEscrowKey:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)updateEscrowKey;
-(void)setUpdateEscrowKey:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)deleteEscrowKey;
-(void)setDeleteEscrowKey:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)queryEscrowKey;
-(void)setQueryEscrowKey:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)queryEscrowKeysAll;
-(void)setQueryEscrowKeysAll:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)insertWatchKey;
-(void)setInsertWatchKey:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)queryMissingKeys;
-(void)setQueryMissingKeys:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)queryWatches;
-(void)setQueryWatches:(sqlite3_stmtRef)arg1 ;
@end

