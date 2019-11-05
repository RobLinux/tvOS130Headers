/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ThermalPressureMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	int _token;
	BOOL _elevated;

}

@property (getter=isElevated,readonly) BOOL elevated;              //@synthesize elevated=_elevated - In the implementation block
+(id)defaultMonitor;
-(id)init;
-(void)dealloc;
-(void)_updateState;
-(void)_registerForNotification;
-(void)_postStateDidChangeNotification;
-(BOOL)isElevated;
@end

