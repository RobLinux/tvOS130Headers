/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <accessoryd/ACCFeatureServer.h>
#import <accessoryd/NSXPCListenerDelegate.h>

@class _ACCOOBBTPairingProviderInfo, NSMutableDictionary, NSString;

@interface ACCOOBBTPairingServer : ACCFeatureServer <NSXPCListenerDelegate> {

	_ACCOOBBTPairingProviderInfo* _oobBtPairingProviderInfo;
	NSMutableDictionary* _registeredAccessoryConnections;

}

@property (nonatomic,retain) _ACCOOBBTPairingProviderInfo * oobBtPairingProviderInfo;              //@synthesize oobBtPairingProviderInfo=_oobBtPairingProviderInfo - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * registeredAccessoryConnections;               //@synthesize registeredAccessoryConnections=_registeredAccessoryConnections - In the implementation block
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
-(void)notifyOfProvider:(id)arg1 connection:(id)arg2 ;
-(void)accessoryOOBBTPairingAttached:(id)arg1 accInfoDict:(id)arg2 ;
-(void)accessoryOOBBTPairingDetached:(id)arg1 ;
-(void)accessoryOOBBTPairingBTAccessoryInfo:(id)arg1 oobBtPairingUID:(id)arg2 accessoryMacAddr:(id)arg3 deviceClass:(unsigned)arg4 ;
-(void)accessoryOOBBTPairingCompletionStatus:(id)arg1 oobBtPairingUID:(id)arg2 result:(unsigned char)arg3 ;
-(void)legacyConnectionIDForAccessoryUID:(id)arg1 connectionID:(unsigned)arg2 ;
-(_ACCOOBBTPairingProviderInfo *)oobBtPairingProviderInfo;
-(void)setOobBtPairingProviderInfo:(_ACCOOBBTPairingProviderInfo *)arg1 ;
@end

