/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/IXClientDelegateProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary, NSString;

@interface IXServerConnection : NSObject <IXClientDelegateProtocol> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableDictionary* _coordinatorInstances;
	NSMutableDictionary* _promiseInstances;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                           //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * coordinatorInstances;              //@synthesize coordinatorInstances=_coordinatorInstances - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * promiseInstances;                  //@synthesize promiseInstances=_promiseInstances - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConnection;
+(id)retrySynchronousIPC:(/*^block*/id)arg1 ;
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)registerAppInstallCoordinatorForUpdates:(id)arg1 notifyDaemon:(BOOL)arg2 ;
-(void)unregisterAppInstallCoordinatorForUpdates:(id)arg1 ;
-(void)registerDataPromiseForUpdates:(id)arg1 notifyDaemon:(BOOL)arg2 ;
-(void)unregisterDataPromiseForUpdates:(id)arg1 ;
-(NSMutableDictionary *)promiseInstances;
-(NSMutableDictionary *)coordinatorInstances;
-(void)_onQueue_reSetupObserversAfter:(id)arg1 ;
-(BOOL)_onQueue_createXPCConnectionIfNecessary;
-(id)_onQueue_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_onQueue_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1 ;
-(oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1 ;
-(oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1 ;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2 ;
-(oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1 ;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1 ;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1 ;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1 ;
-(oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3 ;
@end

