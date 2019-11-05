/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <CoreUtils/CUPrivateDiscoveryXPCDaemonInterface.h>

@protocol OS_dispatch_queue;
@class CUPrivateDiscoveryAdvertiser, CUPrivateDiscoveryBrowser, CUPrivateDiscoveryDaemon, NSObject, NSXPCConnection;

@interface CUPrivateDiscoveryXPCConnection : NSObject <CUPrivateDiscoveryXPCDaemonInterface> {

	CUPrivateDiscoveryAdvertiser* _activatedAdvertiser;
	CUPrivateDiscoveryBrowser* _activatedBrowser;
	LogCategory* _ucat;
	BOOL _entitled;
	CUPrivateDiscoveryDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCConnection* _xpcCnx;

}

@property (nonatomic,readonly) CUPrivateDiscoveryDaemon * daemon;                     //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,readonly) BOOL entitled;                                         //@synthesize entitled=_entitled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcCnx;                              //@synthesize xpcCnx=_xpcCnx - In the implementation block
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(CUPrivateDiscoveryDaemon *)daemon;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)connectionInvalidated;
-(NSXPCConnection *)xpcCnx;
-(void)xpcPrivateDiscoveryAdvertiserActivate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcPrivateDiscoveryBrowserActivate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2 ;
-(BOOL)_entitledAndReturnError:(id*)arg1 ;
-(BOOL)entitled;
@end

