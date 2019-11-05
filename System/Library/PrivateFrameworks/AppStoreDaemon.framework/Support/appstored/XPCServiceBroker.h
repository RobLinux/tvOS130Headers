/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, XPCServiceCatalog, NSObject, NSXPCListener, NSString;

@interface XPCServiceBroker : NSObject <NSXPCListenerDelegate> {

	NSMutableSet* _activeClients;
	XPCServiceCatalog* _catalog;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCListener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newServerWithCatalog:(id)arg1 forMachServiceName:(id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithCatalog:(id)arg1 andListener:(id)arg2 ;
@end
