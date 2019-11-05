/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CUMessageSessionXPCServerInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, CUMessageSessionServer, NSXPCConnection;

@interface CUMessageSessionXPCConnection : NSObject <CUMessageSessionXPCServerInterface> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidated;
	NSMutableSet* _registeredRequestIDs;
	CUMessageSessionServer* _server;
	NSXPCConnection* _xpcCnx;

}
-(void)remoteSendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)remoteRegisterRequestID:(id)arg1 options:(id)arg2 ;
-(void)connectionInvalidated;
@end

