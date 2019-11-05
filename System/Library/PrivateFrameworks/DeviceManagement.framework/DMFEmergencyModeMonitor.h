/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface DMFEmergencyModeMonitor : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedMonitor;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)emergencyModeStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)enableEmergencyModeWithError:(id*)arg1 ;
-(BOOL)enableEmergencyModeForDuration:(double)arg1 withError:(id*)arg2 ;
-(BOOL)disableEmergencyModeWithError:(id*)arg1 ;
-(id)emergencyModeStatusWithError:(id*)arg1 ;
@end

