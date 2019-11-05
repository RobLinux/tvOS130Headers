/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSURL, NSOperationQueue, HMFUnfairLock, HMFActivity;

@interface HMBSQLContext : HMFObject {

	sqlite3_stmtRef _begin;
	sqlite3_stmtRef _commit;
	sqlite3_stmtRef _rollback;
	BOOL _readOnly;
	NSURL* _url;
	sqlite3Ref _context;
	NSOperationQueue* _queue;
	HMFUnfairLock* _lock;
	HMFActivity* _activity;
	unsigned long long _mutation;

}

@property (assign,nonatomic) sqlite3Ref context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HMFUnfairLock * lock;                     //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) HMFActivity * activity;                   //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) unsigned long long mutation;              //@synthesize mutation=_mutation - In the implementation block
@property (nonatomic,readonly) NSURL * url;                            //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL readOnly;                          //@synthesize readOnly=_readOnly - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;               //@synthesize queue=_queue - In the implementation block
-(id)initialize;
-(void)dealloc;
-(NSOperationQueue *)queue;
-(id)close;
-(HMFUnfairLock *)lock;
-(id)begin;
-(NSURL *)url;
-(HMFActivity *)activity;
-(void)setActivity:(HMFActivity *)arg1 ;
-(sqlite3Ref)context;
-(void)rollback;
-(void)setContext:(sqlite3Ref)arg1 ;
-(id)commit;
-(void)setLock:(HMFUnfairLock *)arg1 ;
-(id)prepare;
-(BOOL)readOnly;
-(void)_unprepare;
-(BOOL)fetchSQLite3:(sqlite3_stmtRef)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(id)sqlBlockWithActivity:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)sqlTransactionWithActivity:(id)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)mutation;
-(void)setMutation:(unsigned long long)arg1 ;
-(id)initWithURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(long long)migrateFromSchemaVersion:(long long)arg1 error:(id*)arg2 ;
-(BOOL)updateSchemaVersionTo:(long long)arg1 error:(id*)arg2 ;
-(id)_prepareFrom:(id)arg1 ;
-(id)sqlBlock:(/*^block*/id)arg1 ;
-(id)sqlTransaction:(/*^block*/id)arg1 ;
-(id)runSQLite3:(const char*)arg1 ;
-(id)execSQLite3:(sqlite3_stmtRef)arg1 ;
-(unsigned long long)execSQLite3:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(BOOL)runSQLite3:(const char*)arg1 error:(id*)arg2 ;
-(unsigned long long)insertSQLite3:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(BOOL)fetchSQLite3:(sqlite3_stmtRef)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)fetchSQLite3One:(sqlite3_stmtRef)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
@end
