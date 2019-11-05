/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, VKMapView;

@interface MIController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	VKMapView* _mapView;
	BOOL _isActive;

}

@property (nonatomic,readonly) BOOL isActive;              //@synthesize isActive=_isActive - In the implementation block
+(id)sharedController;
-(id)init;
-(BOOL)isActive;
-(void)sendData:(id)arg1 ;
-(void)handleXPCEvent:(id)arg1 ;
-(void)recievedData:(id)arg1 ;
-(void)deactivateController;
-(void)decodeDebugTreeData:(id)arg1 ;
-(void)activateController:(id)arg1 ;
@end
