/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MLMediaLibraryServiceClientProtocol.h>

@protocol OS_dispatch_queue, MLMediaLibraryServiceProtocol;
@class NSObject, NSXPCConnection, NSMutableDictionary, NSString;

@interface MLMediaLibraryService : NSObject <MLMediaLibraryServiceClientProtocol> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSXPCConnection* _serviceConnection;
	id<MLMediaLibraryServiceProtocol> _serviceProxy;
	NSMutableDictionary* _progressBlocksByUUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMediaLibraryService;
+(void)_setDaemonProcessInfo:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_serviceConnection;
-(void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)mediaLibraryResourcesServiceListenerEndpointWithError:(id*)arg1 ;
-(void)attemptDatabaseFileRecoveryAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)checkIntegrityOfDatabaseAtPath:(id)arg1 repairFaults:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)performDiagnosticWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)endTransaction:(id)arg1 shouldCommit:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setOptions:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)lockDatabaseForReason:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)unlockDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(void)getLanguageResourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)performBackupOfDatabaseAtPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)performRestoreOfLatestBackupForDatabaseAtPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)performMaintenanceTasksForDatabaseAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)serviceTerminatedTransactionWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)importOperationWithIdentifier:(id)arg1 didUpdateWithProgress:(float)arg2 ;
-(BOOL)validateDatabaseAtPath:(id)arg1 error:(id*)arg2 ;
-(void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withProgressBlock:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

