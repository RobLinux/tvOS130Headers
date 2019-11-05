/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, MBConnectionHandler;
@class NSObject, NSString;

@interface MBConnection : NSObject {

	Ai _pid;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;
	id<MBConnectionHandler> _messageHandler;
	NSString* _processName;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (retain) NSString * processName;                                               //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic,__weak) id<MBConnectionHandler> messageHandler;              //@synthesize messageHandler=_messageHandler - In the implementation block
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)sendMessage:(id)arg1 ;
-(void)cancel;
-(void)resume;
-(void)suspend;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)setMessageHandler:(id<MBConnectionHandler>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(id<MBConnectionHandler>)messageHandler;
-(void)_handleXPCError:(id)arg1 ;
-(id)sendMessageWithReplyAndSync:(id)arg1 error:(id*)arg2 ;
-(void)_setEventHandlerForXPCConnection:(id)arg1 ;
-(void)_refreshProcessInfoWithXPCConnection:(id)arg1 ;
-(void)_handleXPCEvent:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 queue:(id)arg2 ;
-(void)sendMessage:(id)arg1 barrierBlock:(/*^block*/id)arg2 ;
@end

