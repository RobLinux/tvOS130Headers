/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:36 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <dmd/NSXPCListenerDelegate.h>

@class CATTaskServer, NSString;

@interface DMDTaskServerListenerDelegate : NSObject <NSXPCListenerDelegate> {

	CATTaskServer* _taskServer;

}

@property (nonatomic,readonly) CATTaskServer * taskServer;              //@synthesize taskServer=_taskServer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(CATTaskServer *)taskServer;
-(id)initWithTaskServer:(id)arg1 ;
@end

