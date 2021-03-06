/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface MCUserMDMClient : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionSyncQueue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                    //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> xpcConnectionSyncQueue;              //@synthesize xpcConnectionSyncQueue=_xpcConnectionSyncQueue - In the implementation block
+(id)sharedClient;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)pushToken;
-(NSObject*<OS_dispatch_queue>)xpcConnectionSyncQueue;
-(void)_queue_createAndStartMDMXPCConnection;
-(void)getAssertionDescriptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)processUserRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_destroyXPCConnectionAndInvalidate:(BOOL)arg1 ;
-(BOOL)supportsPerUserMDM;
-(void)scheduleTokenUpdate;
-(void)simulatePush;
-(id)processUserRequest:(id)arg1 outError:(id*)arg2 ;
@end

