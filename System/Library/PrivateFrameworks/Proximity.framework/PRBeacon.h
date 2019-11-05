/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Proximity/Proximity-Structs.h>
#import <Proximity/PRRangingDevice.h>
#import <Proximity/PRRangingClientProtocol.h>

@protocol PRBeaconDelegate, OS_dispatch_queue;
@class NSObject, NSString;

@interface PRBeacon : PRRangingDevice <PRRangingClientProtocol> {

	DaemonBackedService _service;
	unsigned long long _state;
	id<PRBeaconDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long state;                                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<PRBeaconDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<PRBeaconDelegate>)delegate;
-(void)setDelegate:(id<PRBeaconDelegate>)arg1 ;
-(unsigned long long)state;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)didFailWithError:(id)arg1 ;
-(void)_updateState:(unsigned long long)arg1 ;
-(void)startBeaconingWithOptions:(id)arg1 ;
-(void)stopBeaconing;
-(void)didReceiveNewSolutions:(id)arg1 ;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1 ;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 ;
-(void)deamonConnectionInvalidated;
-(void)deamonConnectionInterrupted;
@end

