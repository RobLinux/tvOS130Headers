/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:46:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/NSXPCConnectionDelegate.h>
#import <medialibraryd/NSXPCListenerDelegate.h>
#import <medialibraryd/MLDMediaLibraryWriterDelegate.h>
#import <medialibraryd/ML3MusicLibraryDelegate.h>
#import <medialibraryd/MLMediaLibraryServiceProtocol.h>
#import <medialibraryd/MLDDiagnosticCollection.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary, MLDMediaLibraryWriter, MLDDatabaseImportManager, MLDCacheDeleteController, MLDDatabaseValidationController, NSOperationQueue, NSMutableArray, NSTimer, NSString;

@interface MLDMediaLibraryService : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate, MLDMediaLibraryWriterDelegate, ML3MusicLibraryDelegate, MLMediaLibraryServiceProtocol, MLDDiagnosticCollection> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _spotlightIndexQueue;
	NSObject*<OS_dispatch_queue> _writerBeginTransactionQueue;
	NSObject*<OS_dispatch_queue> _writerUpdateQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableDictionary* _xpcListeners;
	NSMutableDictionary* _xpcClients;
	MLDMediaLibraryWriter* _writer;
	MLDDatabaseImportManager* _importManager;
	MLDCacheDeleteController* _cacheDeleteController;
	MLDDatabaseValidationController* _validationController;
	NSOperationQueue* _maintenanceTasksOperationQueue;
	NSOperationQueue* _databaseRecoveryOperationQueue;
	NSMutableArray* _databaseRecoveryCompletionHandlers;
	NSObject*<OS_dispatch_source> _signalDispatchSource;
	NSObject*<OS_dispatch_source> _spotlightIndexCoalescingTimer;
	NSTimer* _idleTimer;
	NSMutableDictionary* _mediaLibraries;
	NSString* _deviceSharedLibraryPath;
	NSMutableDictionary* _currentAssertions;
	BOOL _databaseLocked;
	long long _currentLockReason;

}

@property (assign,getter=isDatabaseLocked,nonatomic) BOOL databaseLocked;              //@synthesize databaseLocked=_databaseLocked - In the implementation block
@property (assign,nonatomic) long long currentLockReason;                              //@synthesize currentLockReason=_currentLockReason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(void)_setupSignalHandler;
-(void)_tearDownSignalHandler;
-(void)_stopIdleTimer;
-(void)_startIdleTimer;
-(void)_resetIdleTimer;
-(void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)library:(id)arg1 didBeginDatabaseTransactionWithConnection:(id)arg2 ;
-(void)library:(id)arg1 didCommitDatabaseTransactionWithConnection:(id)arg2 ;
-(void)library:(id)arg1 didRollbackDatabaseTransactionWithConnection:(id)arg2 ;
-(void)validateDatabaseAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)attemptDatabaseFileRecoveryAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)checkIntegrityOfDatabaseAtPath:(id)arg1 repairFaults:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)performDiagnosticWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)endTransaction:(id)arg1 shouldCommit:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setOptions:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withUUID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)lockDatabaseForReason:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)unlockDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(void)getLanguageResourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)performBackupOfDatabaseAtPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)performRestoreOfLatestBackupForDatabaseAtPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)performMaintenanceTasksForDatabaseAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getMediaLibraryResourcesServiceListenerEndpointWithCompletion:(/*^block*/id)arg1 ;
-(void)collectDiagnostic:(id)arg1 ;
-(void)_registerForLibraryContentChangeNotifications;
-(void)_tearDownLibraryContentsDidChangeNotification;
-(BOOL)_isMediaPath:(id)arg1 selector:(SEL)arg2 resolvedPath:(id*)arg3 ;
-(void)_validateDatabaseAtPath:(id)arg1 byTruncatingFirst:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_performDiagnosticWithReason:(id)arg1 ;
-(id)_currentXPCClient;
-(id)_mediaLibraryForPath:(id)arg1 ;
-(void)_registerAssertion:(id)arg1 forTransactionID:(id)arg2 ;
-(void)faultForQuery:(id)arg1 fromClientBundleID:(id)arg2 onTrustError:(id)arg3 ;
-(void)_unregisterAssertionForTransactionID:(id)arg1 ;
-(BOOL)isDatabaseLocked;
-(id)_allMediaLibraries;
-(void)_disconnectLibraries:(id)arg1 ;
-(void)setCurrentLockReason:(long long)arg1 ;
-(void)setDatabaseLocked:(BOOL)arg1 ;
-(long long)currentLockReason;
-(void)_reconnectLibraries:(id)arg1 ;
-(BOOL)_platformSupportsSpotlightIndexing;
-(void)_performMaintenanceOnDatabaseAtPath:(id)arg1 withActivity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_XPCListenerForService:(long long)arg1 ;
-(long long)_MLDSupportedServiceForXPCListener:(id)arg1 ;
-(BOOL)_shouldAcceptConnectionForMediaLibraryService:(id)arg1 ;
-(void)_handleXPCDisconnect:(id)arg1 ;
-(void)_unregisterServiceOriginatedTransactionWithConnection:(id)arg1 ;
-(void)_setupNotifyEventHandlers;
-(void)_setupActivityHandlers;
-(void)_setupCacheDeleteController;
-(void)_performScheduledBackupOnDatabaseAtPath:(id)arg1 withActivity:(id)arg2 ;
-(id)_clientForConnection:(id)arg1 ;
-(void)_handleDebugSignal;
-(void)_writeDiagnosticToDisk:(id)arg1 ;
-(void)_handleLibraryContentsDidChangeNotification:(id)arg1 ;
-(void)_idleTimerFired:(id)arg1 ;
-(id)_deviceSharedLibraryPath;
-(void)mediaLibraryWriter:(id)arg1 terminatedTransaction:(id)arg2 withError:(id)arg3 ;
@end
