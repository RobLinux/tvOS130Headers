/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEONavdServerProxy.h>
#import <GeoServices/GEONavdProxyObserver.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableArray, NSMutableDictionary, NSObject;

@interface GEONavdRemoteProxy : GEONavdServerProxy <GEONavdProxyObserver> {

	NSXPCConnection* _connection;
	NSMutableArray* _observers;
	NSMutableDictionary* _handlers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<GEONavdXPCInterface> remoteObjectProxyThreadUnsafe; 
-(id)init;
-(void)dealloc;
-(void)open;
-(void)close;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)statusWithCallback:(/*^block*/id)arg1 ;
-(void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg1 ;
-(void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2 ;
-(void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2 ;
-(void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 ;
-(void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3 ;
-(void)forceCacheRefresh;
-(void)_connectToDaemonIfNeededThreadUnsafe;
-(void)navdProxyReceivedData:(id)arg1 ofType:(id)arg2 ;
-(void)navdProxyReceivedHypothesis:(id)arg1 forClient:(id)arg2 ;
-(id<GEONavdXPCInterface>)remoteObjectProxyThreadUnsafe;
@end

