/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSPairedDeviceStateMonitorDelegate;
@class DNDSPairedDevice;

@interface DNDSPairedDeviceStateMonitor : NSObject {

	id<DNDSPairedDeviceStateMonitorDelegate> _delegate;

}

@property (copy,readonly) DNDSPairedDevice * pairedDevice; 
@property (assign,nonatomic,__weak) id<DNDSPairedDeviceStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<DNDSPairedDeviceStateMonitorDelegate>)delegate;
-(void)setDelegate:(id<DNDSPairedDeviceStateMonitorDelegate>)arg1 ;
-(void)resume;
-(DNDSPairedDevice *)pairedDevice;
-(id)initWithIDSService:(id)arg1 ;
@end

