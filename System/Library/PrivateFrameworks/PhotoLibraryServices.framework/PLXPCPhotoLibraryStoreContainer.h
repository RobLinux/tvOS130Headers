/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCStoreServer, NSXPCListener, NSXPCListenerEndpoint;

@interface PLXPCPhotoLibraryStoreContainer : NSObject {

	NSXPCStoreServer* _server;
	NSXPCListener* _listener;

}

@property (readonly) NSXPCStoreServer * server;                             //@synthesize server=_server - In the implementation block
@property (readonly) NSXPCListenerEndpoint * listenerEndpoint; 
+(id)newContainerWithPathManager:(id)arg1 ;
-(NSXPCStoreServer *)server;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(id)initWithServer:(id)arg1 listener:(id)arg2 ;
@end

