/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <accessoryd/ACCFeatureServer.h>
#import <accessoryd/NSXPCListenerDelegate.h>

@protocol ACCAudioXPCClientProtocol;
@class NSMutableArray, NSXPCConnection, NSString;

@interface ACCAudioServer : ACCFeatureServer <NSXPCListenerDelegate> {

	NSMutableArray* _clientConnections;
	NSXPCConnection* _activeConnection;
	id<ACCAudioXPCClientProtocol> _remoteObject;

}

@property (nonatomic,retain) NSMutableArray * clientConnections;                      //@synthesize clientConnections=_clientConnections - In the implementation block
@property (nonatomic,retain) NSXPCConnection * activeConnection;                      //@synthesize activeConnection=_activeConnection - In the implementation block
@property (nonatomic,retain) id<ACCAudioXPCClientProtocol> remoteObject;              //@synthesize remoteObject=_remoteObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id<ACCAudioXPCClientProtocol>)remoteObject;
-(void)setRemoteObject:(id<ACCAudioXPCClientProtocol>)arg1 ;
-(NSMutableArray *)clientConnections;
-(void)setClientConnections:(NSMutableArray *)arg1 ;
-(NSXPCConnection *)activeConnection;
-(void)setActiveConnection:(NSXPCConnection *)arg1 ;
-(BOOL)shouldAcceptXPCConnection:(id)arg1 ;
-(id)initWithXPCServiceName:(id)arg1 andFeatureNotification:(const char*)arg2 ;
@end

