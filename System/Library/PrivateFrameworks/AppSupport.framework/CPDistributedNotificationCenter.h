/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AppSupport/AppSupport-Structs.h>
@class NSString, NSLock, NSObject;

@interface CPDistributedNotificationCenter : NSObject {

	NSString* _centerName;
	NSLock* _lock;
	CFRunLoopSourceRef _receiveNotificationSource;
	BOOL _isServer;
	CFDictionaryRef _sendPorts;
	unsigned long long _startCount;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)_serverPortToNotificationCenterMapDispatchQueue;
+(CFDictionaryRef)_serverPortToNotificationCenterMap;
+(void)setCenter:(id)arg1 forServerPort:(unsigned)arg2 ;
+(id)centerForServerPort:(unsigned)arg1 ;
+(id)centerNamed:(id)arg1 ;
-(id)name;
-(void)dealloc;
-(id)_initWithServerName:(id)arg1 ;
-(void)_checkOutAndRemoveSource;
-(void)_checkIn;
-(void)startDeliveringNotificationsToRunLoop:(CFRunLoopRef)arg1 ;
-(void)_createReceiveSourceForRunLoop:(CFRunLoopRef)arg1 ;
-(void)deliverNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)runServer;
-(BOOL)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3 ;
-(void)_receivedCheckIn:(unsigned)arg1 auditToken:(SCD_Struct_CP3*)arg2 ;
-(void)_notificationServerWasRestarted;
-(void)startDeliveringNotificationsToMainThread;
-(void)stopDeliveringNotifications;
-(void)runServerOnCurrentThread;
-(void)postNotificationName:(id)arg1 ;
-(void)postNotificationName:(id)arg1 userInfo:(id)arg2 ;
@end

