/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSMutableDictionary;

@interface MRXPCConnection : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _customXpcHandlers;
	NSObject*<OS_xpc_object> _connection;
	/*^block*/id _messageHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id messageHandler;                                    //@synthesize messageHandler=_messageHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                               //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) int pid; 
-(void)dealloc;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)initWithConnection:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_xpc_object>)connection;
-(id)invalidationHandler;
-(int)pid;
-(void)setMessageHandler:(id)arg1 ;
-(void)_registerCallbacks;
-(void)addCustomXPCHandler:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)removeCustomXPCHandler:(id)arg1 ;
-(id)messageHandler;
@end

