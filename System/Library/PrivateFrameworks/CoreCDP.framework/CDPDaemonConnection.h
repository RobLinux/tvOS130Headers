/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface CDPDaemonConnection : NSObject {

	NSXPCConnection* _conn;
	NSLock* _connLock;
	NSXPCListenerEndpoint* _daemonXPCEndpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * daemonXPCEndpoint;              //@synthesize daemonXPCEndpoint=_daemonXPCEndpoint - In the implementation block
-(id)init;
-(id)connection;
-(id)daemon;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousDaemonWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setDaemonXPCEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCListenerEndpoint *)daemonXPCEndpoint;
@end

