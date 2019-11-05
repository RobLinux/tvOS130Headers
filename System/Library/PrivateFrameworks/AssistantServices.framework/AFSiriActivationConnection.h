/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFInvalidating.h>
#import <AssistantServices/AFSiriActivationService.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface AFSiriActivationConnection : NSObject <AFInvalidating, AFSiriActivationService> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(id)_connection;
-(void)_connectionInvalidated;
-(void)_connectionInterrupted;
-(oneway void)prewarmWithRequestInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)activateWithRequestInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 analyticsContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(oneway void)handleContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

