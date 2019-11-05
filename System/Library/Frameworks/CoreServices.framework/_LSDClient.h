/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface _LSDClient : NSObject <NSXPCConnectionDelegate> {

	NSXPCConnection* _XPCConnection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain,readonly) NSXPCConnection * XPCConnection;              //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(NSXPCConnection *)XPCConnection;
-(id)initWithXPCConnection:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 queue:(id)arg2 ;
-(void)didHandleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)willHandleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
@end

