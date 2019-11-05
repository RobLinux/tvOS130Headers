/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSString, CloudLibraryConnection, ICConnectionConfiguration, CloudPendingChangesCoordinator, NSObject;

@interface CloudLibrary : NSObject {

	BOOL _failedToConnect;
	BOOL _loginRequestInFlight;
	NSString* _libraryIdentifier;
	CloudLibraryConnection* _underlyingConnection;
	ICConnectionConfiguration* _configuration;
	CloudPendingChangesCoordinator* _pendingChangesCoordinator;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_group> _connectionGroup;
	NSObject*<OS_dispatch_queue> _asynchronousRequestsAccessQueue;
	/*^block*/id _connectionCompletionHandler;

}

@property (assign,nonatomic) BOOL failedToConnect;                                                      //@synthesize failedToConnect=_failedToConnect - In the implementation block
@property (nonatomic,retain) CloudLibraryConnection * underlyingConnection;                             //@synthesize underlyingConnection=_underlyingConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> connectionGroup;                              //@synthesize connectionGroup=_connectionGroup - In the implementation block
@property (assign,nonatomic) BOOL loginRequestInFlight;                                                 //@synthesize loginRequestInFlight=_loginRequestInFlight - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> asynchronousRequestsAccessQueue;              //@synthesize asynchronousRequestsAccessQueue=_asynchronousRequestsAccessQueue - In the implementation block
@property (nonatomic,copy) id connectionCompletionHandler;                                              //@synthesize connectionCompletionHandler=_connectionCompletionHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * libraryIdentifier;                                       //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
@property (nonatomic,readonly) ICConnectionConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) CloudPendingChangesCoordinator * pendingChangesCoordinator;              //@synthesize pendingChangesCoordinator=_pendingChangesCoordinator - In the implementation block
+(id)logCategory;
+(id)oversizeLogCategory;
-(id)init;
-(void)dealloc;
-(ICConnectionConfiguration *)configuration;
-(void)cancelAllOperations;
-(id)_userIdentity;
-(id)_bagKey;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)libraryIdentifier;
-(CloudLibraryConnection *)underlyingConnection;
-(void)setConnectionCompletionHandler:(id)arg1 ;
-(id)connectionCompletionHandler;
-(void)decreasePriorityForAllOperations;
-(void)increasePriorityForAllOperations;
-(void)addOperation:(id)arg1 priority:(int)arg2 ;
-(void)addBackgroundOperation:(id)arg1 priority:(int)arg2 ;
-(void)setConnectionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setAsynchronousRequestsAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)failedToConnect;
-(void)_enqueueFailedOperation:(id)arg1 ;
-(void)_enqueuePendingOperation:(id)arg1 ;
-(void)_ensureConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_executeBlockForAllOperations:(/*^block*/id)arg1 ;
-(CloudPendingChangesCoordinator *)pendingChangesCoordinator;
-(BOOL)loginRequestInFlight;
-(NSObject*<OS_dispatch_group>)connectionGroup;
-(void)setLoginRequestInFlight:(BOOL)arg1 ;
-(void)setUnderlyingConnection:(CloudLibraryConnection *)arg1 ;
-(void)setFailedToConnect:(BOOL)arg1 ;
-(void)_performPendingOperations;
-(void)_continueConnectingToLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_connectToLibraryWithCompletionHandler:(/*^block*/id)arg1 allowRetry:(BOOL)arg2 forceBagReload:(BOOL)arg3 ;
-(BOOL)_isEnabledWithURLBag:(id)arg1 ;
-(id)_initWithConfiguration:(id)arg1 pendingChangesCoordinator:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)asynchronousRequestsAccessQueue;
@end

