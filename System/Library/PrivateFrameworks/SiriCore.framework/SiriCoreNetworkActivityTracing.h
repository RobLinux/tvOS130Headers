/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet;

@interface SiriCoreNetworkActivityTracing : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _activities;
	NSMutableSet* _connections;

}
+(id)sharedNetworkActivityTracing;
-(id)init;
-(void)_networkActivityStart:(long long)arg1 activate:(BOOL)arg2 ;
-(void)_networkActivityActivate:(long long)arg1 ;
-(void)_networkActivityStop:(long long)arg1 ;
-(void)_networkActivityTracingCancel;
-(void)_networkActivityAddNWConnection:(id)arg1 ;
-(void)_networkActivityRemoveNWConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)networkActivityStart:(long long)arg1 activate:(BOOL)arg2 ;
-(void)networkActivityActivate:(long long)arg1 ;
-(void)networkActivityStop:(long long)arg1 ;
-(void)networkActivityTracingCancel;
-(void)networkActivityAddNWConnection:(id)arg1 ;
-(void)networkActivityRemoveNWConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

