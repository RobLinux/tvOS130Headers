/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <accessoryd/accessoryd-Structs.h>
#import <accessoryd/ACCClientPortShimDelegate.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSMutableDictionary, ACCXPCConnection, NSObject, ACCClientPortShimManager, NSString;

@interface PlatformIAPDBridge : NSObject <ACCClientPortShimDelegate> {

	NSMutableDictionary* activeIAPDConnections;
	ACCXPCConnection* iapdConnection;
	BOOL iapdConnectionActive;
	NSObject*<OS_xpc_object> _accessorydIAPDBridgeListenerConnection;
	NSObject*<OS_dispatch_queue> _accessoryIAPDBridgeListenerQueue;
	int _iaptransportdAvailableNotifyToken;
	ACCClientPortShimManager* _clienPortShimManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPlatformIAPDBridge;
-(id)init;
-(BOOL)supportsIAPD;
-(id)findClientPortForUUID:(id)arg1 ;
-(void)sendData:(char*)arg1 length:(unsigned long long)arg2 forConnection:(id)arg3 portUID:(id)arg4 ;
-(void)handleIncomingXPCConnection:(id)arg1 ;
-(void)_handleResistorIDChanged:(id)arg1 ;
-(void)_handleB139B164ConnectedStatus:(id)arg1 ;
-(void)_handlePrimaryPortReturn:(id)arg1 ;
-(void)handleIAPDDisconnect;
-(void)_sendHasAdaptor;
-(unsigned long long)_generatePortID;
-(void)_generateIAPDPortTypeForDictionary:(id)arg1 fromEndpoint:(ACCEndpoint_s*)arg2 ;
-(void)_handleResistorID:(id)arg1 forPortDictionary:(id)arg2 ;
-(void)_generateIAPDPortInfoForDictionary:(id)arg1 fromEndpoint:(ACCEndpoint_s*)arg2 ;
-(void)_handleIncomingXPCEvent:(id)arg1 forXPCConnection:(id)arg2 ;
-(BOOL)_handleTransmitData:(char*)arg1 withLength:(unsigned long long)arg2 forPortID:(unsigned long long)arg3 withSynchronousTransmit:(BOOL)arg4 ;
-(void)_E75To30PinAdapterConnected;
-(void)_handleSetPortLockout:(unsigned long long)arg1 ;
-(BOOL)_getPortLockout:(unsigned long long)arg1 ;
-(void)_handleAuthenticationState:(BOOL)arg1 forPortID:(unsigned long long)arg2 certData:(id)arg3 ;
-(void)_handleLingoesSupported:(unsigned)arg1 forPortID:(unsigned long long)arg2 ;
-(void)_handleAvailableCurrentNegotiated:(unsigned short)arg1 forPortID:(unsigned long long)arg2 ;
-(void)_handleAccessoryInfo:(SCD_Struct_Pl1*)arg1 forPortID:(unsigned long long)arg2 ;
-(BOOL)_shouldProcessAuthenticationFailState:(ACCEndpoint_s*)arg1 ;
-(void)iapdAccessoryArrived:(ACCEndpoint_s*)arg1 ;
-(void)iapdAccessoryLeft:(ACCEndpoint_s*)arg1 ;
-(BOOL)iapdAccessory:(ACCEndpoint_s*)arg1 dataArrivedFromAccessory:(id)arg2 ;
@end

