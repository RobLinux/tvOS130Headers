/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/NSXPCListenerDelegate.h>

@class NSMutableSet, NSXPCListener, NSString;

@interface RequestBroker : NSObject <NSXPCListenerDelegate> {

	NSMutableSet* _clients;
	NSXPCListener* _listener;

}

@property (retain) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_connection:(id)arg1 hasEntitlement:(id)arg2 ;
+(id)_allEntitlements;
-(id)init;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)_startListener;
-(void)_disconnectClient:(id)arg1 ;
@end

