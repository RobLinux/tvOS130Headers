/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSEventMonitorDelegate, OS_dispatch_queue;
@class NSObject, SSXPCConnection;

@interface SSEventMonitor : NSObject {

	id<SSEventMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSXPCConnection* _eventConnection;

}

@property (assign) id<SSEventMonitorDelegate> delegate; 
-(id)init;
-(void)dealloc;
-(id<SSEventMonitorDelegate>)delegate;
-(void)setDelegate:(id<SSEventMonitorDelegate>)arg1 ;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_connectEventConnection;
@end
