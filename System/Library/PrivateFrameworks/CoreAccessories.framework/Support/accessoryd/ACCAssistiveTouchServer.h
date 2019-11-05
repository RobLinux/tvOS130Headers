/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <accessoryd/ACCFeatureServer.h>
#import <accessoryd/NSXPCListenerDelegate.h>

@class _ACCAssistiveTouchProviderInfo, NSMutableDictionary, NSString;

@interface ACCAssistiveTouchServer : ACCFeatureServer <NSXPCListenerDelegate> {

	_ACCAssistiveTouchProviderInfo* _assistiveTouchProviderInfo;
	NSMutableDictionary* _registeredAccessoryConnections;

}

@property (nonatomic,retain) _ACCAssistiveTouchProviderInfo * assistiveTouchProviderInfo;              //@synthesize assistiveTouchProviderInfo=_assistiveTouchProviderInfo - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * registeredAccessoryConnections;                   //@synthesize registeredAccessoryConnections=_registeredAccessoryConnections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)shouldAcceptXPCConnection:(id)arg1 ;
-(id)initWithXPCServiceName:(id)arg1 andFeatureNotification:(const char*)arg2 ;
-(void)iterateAttachedConnectionsSync:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)registeredAccessoryConnections;
-(void)accessoryAssistiveTouchAttached:(id)arg1 ;
-(void)accessoryAssistiveTouchDetached:(id)arg1 ;
-(void)setEnabled:(id)arg1 flag:(BOOL)arg2 ;
-(void)requestState:(id)arg1 ;
-(_ACCAssistiveTouchProviderInfo *)assistiveTouchProviderInfo;
-(void)setAssistiveTouchProviderInfo:(_ACCAssistiveTouchProviderInfo *)arg1 ;
@end
