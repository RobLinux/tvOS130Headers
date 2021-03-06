/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <syncdefaultsd/SYDDaemonProtocol.h>

@protocol SYDDaemonToClientConnectionDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableSet;

@interface SYDDaemonToClientConnection : NSObject <SYDDaemonProtocol> {

	NSXPCConnection* _xpcConnection;
	id<SYDDaemonToClientConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _registeredStoreIDs;
	NSMutableSet* _entitledStoreIDs;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                      //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic,__weak) id<SYDDaemonToClientConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                           //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * registeredStoreIDs;                                    //@synthesize registeredStoreIDs=_registeredStoreIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * entitledStoreIDs;                                      //@synthesize entitledStoreIDs=_entitledStoreIDs - In the implementation block
+(BOOL)isXPCConnection:(id)arg1 entitledForStoreID:(id)arg2 ;
+(id)errorNotEntitledForStoreIdentifier:(id)arg1 ;
+(id)changeDictionaryWithChangedKeys:(id)arg1 reason:(long long)arg2 changeToken:(id)arg3 ;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<SYDDaemonToClientConnectionDelegate>)delegate;
-(void)setDelegate:(id<SYDDaemonToClientConnectionDelegate>)arg1 ;
-(void)resume;
-(id)client;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 inStoreWithIdentifier:(id)arg3 type:(long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)removeObjectForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 type:(long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)objectForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 type:(long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)dictionaryRepresentationForStoreWithIdentifier:(id)arg1 type:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)changeDictionarySinceChangeToken:(id)arg1 inStoreWithIdentifier:(id)arg2 type:(long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)synchronizeStoreWithIdentifier:(id)arg1 type:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteDataFromDiskForStoreIdentifier:(id)arg1 type:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)registerForChangeNotificationsForStoreWithIdentifier:(id)arg1 type:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)processAccountChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isEntitledForStoreIdentifier:(id)arg1 type:(long long)arg2 ;
-(void)notifyAccountDidChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)syncManagerDidChangeNotification:(id)arg1 ;
-(NSMutableSet *)registeredStoreIDs;
-(NSMutableSet *)entitledStoreIDs;
-(id)asyncClientWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setRegisteredStoreIDs:(NSMutableSet *)arg1 ;
-(void)setEntitledStoreIDs:(NSMutableSet *)arg1 ;
@end

