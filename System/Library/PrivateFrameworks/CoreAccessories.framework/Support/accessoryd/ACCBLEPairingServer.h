/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <accessoryd/ACCFeatureServer.h>
#import <accessoryd/NSXPCListenerDelegate.h>

@class NSMutableDictionary, NSString;

@interface ACCBLEPairingServer : ACCFeatureServer <NSXPCListenerDelegate> {

	NSMutableDictionary* _blePairingProviderList;
	NSMutableDictionary* _blePairingProviderListByUID;
	NSMutableDictionary* _registeredAccessoryConnections;

}

@property (nonatomic,readonly) NSMutableDictionary * blePairingProviderList;                      //@synthesize blePairingProviderList=_blePairingProviderList - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * blePairingProviderListByUID;                 //@synthesize blePairingProviderListByUID=_blePairingProviderListByUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * registeredAccessoryConnections;              //@synthesize registeredAccessoryConnections=_registeredAccessoryConnections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)shouldAcceptXPCConnection:(id)arg1 ;
-(id)initWithXPCServiceName:(id)arg1 andFeatureNotification:(const char*)arg2 ;
-(void)accessoryBLEPairingAttached:(id)arg1 blePairingUUID:(id)arg2 accInfoDict:(id)arg3 supportedPairTypes:(id)arg4 ;
-(void)accessoryBLEPairingDetached:(id)arg1 blePairingUUID:(id)arg2 ;
-(void)accessoryBLEPairingStateUpdate:(id)arg1 blePairingUUID:(id)arg2 validMask:(unsigned)arg3 btRadioOn:(BOOL)arg4 pairingState:(int)arg5 pairingModeOn:(BOOL)arg6 ;
-(void)accessoryBLEPairingInfoUpdate:(id)arg1 blePairingUUID:(id)arg2 pairType:(unsigned char)arg3 pairInfoList:(id)arg4 ;
-(void)accessoryBLEPairingDataUpdate:(id)arg1 blePairingUUID:(id)arg2 pairType:(unsigned char)arg3 pairData:(id)arg4 ;
-(void)accessoryBLEPairingFinished:(id)arg1 blePairingUUID:(id)arg2 ;
-(BOOL)releaseAccessory:(id)arg1 connHash:(id)arg2 ;
-(BOOL)accessoryReserved:(id)arg1 connHash:(id)arg2 ;
-(NSMutableDictionary *)blePairingProviderList;
-(void)iterateAttachedConnectionsSync:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)blePairingProviderListByUID;
-(void)iterateBLEPairingProviderListSync:(/*^block*/id)arg1 ;
-(BOOL)reserveAccessory:(id)arg1 xpcConn:(id)arg2 ;
-(BOOL)releaseAccessory:(id)arg1 xpcConn:(id)arg2 ;
-(BOOL)accessoryReserved:(id)arg1 xpcConn:(id)arg2 ;
-(NSMutableDictionary *)registeredAccessoryConnections;
@end

