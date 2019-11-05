/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface ACCXPCConnection : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _disconnectBlock;
	NSObject*<OS_dispatch_queue> _replyQueue;
	/*^block*/id _messageBlock;
	BOOL isValid;
	BOOL retryInvalidConnections;

}

@property (copy) id disconnectBlock; 
@property (copy) id messageBlock; 
-(void)dealloc;
-(void)sendMessage:(id)arg1 ;
-(void)setTargetQueue:(id)arg1 ;
-(void)setReplyQueue:(id)arg1 ;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setDisconnectBlock:(id)arg1 ;
-(void)setMessageBlock:(id)arg1 ;
-(id)messageBlock;
-(id)disconnectBlock;
-(void)sendSynchronousMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)_reloadEventHandler;
-(id)initWithServiceName:(id)arg1 queueName:(id)arg2 ;
-(id)initWithXPCConnection:(id)arg1 queueName:(id)arg2 ;
-(id)_initACCXPCConnection:(id)arg1 ;
@end

