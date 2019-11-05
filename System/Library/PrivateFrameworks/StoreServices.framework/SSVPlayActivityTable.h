/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSSQLiteDatabase, NSString;

@interface SSVPlayActivityTable : NSObject {

	SSSQLiteDatabase* _database;

}

@property (assign,nonatomic) unsigned long long currentEventsRevision; 
@property (nonatomic,copy,readonly) NSString * eventsRevisionVersionToken; 
+(id)databasePath;
+(BOOL)_setupDatabase:(id)arg1 ;
+(id)_eventsDatabaseTableName;
+(id)_propertiesDatabaseTableName;
-(id)init;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)currentEventsRevision;
-(NSString *)eventsRevisionVersionToken;
-(BOOL)getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 additionalRevisionsIndexSet:(id)arg5 ignoredRevisionsIndexSet:(id)arg6 error:(id*)arg7 ;
-(BOOL)insertPlayActivityEvent:(id)arg1 withRevision:(unsigned long long)arg2 returningError:(id*)arg3 ;
-(void)setCurrentEventsRevision:(unsigned long long)arg1 ;
-(BOOL)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 returningError:(id*)arg2 ;
-(BOOL)getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 additionalRevisionsIndexSet:(id)arg6 ignoredRevisionsIndexSet:(id)arg7 error:(id*)arg8 ;
-(id)revisionsIndexSetForPlayActivityEvents:(id)arg1 ;
-(id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1 ;
-(BOOL)_removeDatabaseReturningError:(id*)arg1 ;
-(id)_valueForDatabasePropertyKey:(id)arg1 ;
-(BOOL)_setValue:(id)arg1 forDatabasePropertyKey:(id)arg2 ;
-(BOOL)_getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 shouldFilterStoreAccountID:(BOOL)arg6 additionalRevisionsIndexSet:(id)arg7 ignoredRevisionsIndexSet:(id)arg8 error:(id*)arg9 ;
-(id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(/*^block*/id)arg1 count:(unsigned long long)arg2 ;
@end

