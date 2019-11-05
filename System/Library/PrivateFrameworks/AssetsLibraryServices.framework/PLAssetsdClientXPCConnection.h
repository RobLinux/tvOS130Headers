/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/PLXPCProxyCreating.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, PLXPCMessageLogger, PLAssetsdClientService, NSString;

@interface PLAssetsdClientXPCConnection : NSObject <PLXPCProxyCreating> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _externalNotificationQueue;
	NSXPCConnection* _connection;
	PLXPCMessageLogger* _connectionLogger;
	PLAssetsdClientService* _assetsdClientService;
	BOOL _isShuttingDown;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_unboostingRemoteObjectProxy;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(void)handleInvalidation;
-(void)addPhotoLibraryUnavailabilityHandler:(/*^block*/id)arg1 ;
-(void)prepareToShutdown;
-(void)handleInterruption;
-(void)_postInterruptedNotification;
-(id)connectionWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_primitiveSynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

