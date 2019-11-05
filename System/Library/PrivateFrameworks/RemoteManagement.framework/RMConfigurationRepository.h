/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSXPCConnection;

@interface RMConfigurationRepository : NSObject {

	NSObject* _hasResumedConnectionLock;
	BOOL _hasResumedConnection;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic) BOOL hasResumedConnection;                   //@synthesize hasResumedConnection=_hasResumedConnection - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)_proxyWithHandler:(/*^block*/id)arg1 ;
-(void)fetchConfigurationsWithTypes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addSubscription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeSubscription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasResumedConnection;
-(void)setHasResumedConnection:(BOOL)arg1 ;
@end

