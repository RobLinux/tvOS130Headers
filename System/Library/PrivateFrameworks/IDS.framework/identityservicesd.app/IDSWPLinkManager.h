/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/WPContinuityDelegate.h>
#import <identityservicesd/IDSWPPacketSendingProtocol.h>

@protocol WPContinuity, IDSWPLinkManagerDelegate;
@class NSMutableSet, NSMutableDictionary, NSHashTable, NSString;

@interface IDSWPLinkManager : NSObject <WPContinuityDelegate, IDSWPPacketSendingProtocol> {

	id<WPContinuity> _continuity;
	long long _state;
	NSMutableSet* _advertisingTypes;
	NSMutableSet* _scanningTypes;
	NSMutableDictionary* _linkIDToLink;
	NSMutableDictionary* _linkIDsConnecting;
	NSMutableDictionary* _linkIDsDisconnecting;
	NSMutableSet* _linkIDsAlwaysConnected;
	id<IDSWPLinkManagerDelegate> _delegate;
	NSHashTable* _connectivityDelegates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)_cleanup;
-(void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)stopAdvertisingOfType:(long long)arg1 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(BOOL)arg5 duplicates:(BOOL)arg6 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(BOOL)arg4 duplicates:(BOOL)arg5 ;
-(void)stopScanningForType:(long long)arg1 ;
-(void)connectToPeer:(id)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)continuityStartTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)continuityStopTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)continuityDidUpdateState:(id)arg1 ;
-(void)continuity:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3 ;
-(void)continuity:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4 ;
-(void)continuity:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3 ;
-(void)continuityDidStopAdvertisingOfType:(id)arg1 advertisingType:(long long)arg2 withError:(id)arg3 ;
-(void)continuityDidStopAdvertisingOfType:(id)arg1 advertisingType:(long long)arg2 ;
-(void)continuityDidStartAdvertisingOfType:(id)arg1 advertisingType:(long long)arg2 ;
-(void)continuity:(id)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(id)arg3 ;
-(void)continuityDidStartScanningForType:(id)arg1 scanningType:(long long)arg2 ;
-(void)continuityDidStopScanningForType:(id)arg1 scanningType:(long long)arg2 ;
-(void)continuityDidStartTrackingPeer:(id)arg1 peer:(id)arg2 type:(long long)arg3 error:(id)arg4 ;
-(void)continuityDidStopTrackingPeer:(id)arg1 peer:(id)arg2 type:(long long)arg3 ;
-(void)continuity:(id)arg1 didConnectToPeer:(id)arg2 error:(id)arg3 ;
-(void)continuity:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3 ;
-(void)continuity:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4 ;
-(void)continuity:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 ;
-(void)continuityDidChangeBluetoothBandwidthState:(id)arg1 ;
-(void)addConnectivityDelegate:(id)arg1 ;
-(void)removeConnectivityDelegate:(id)arg1 ;
-(unsigned long long)sendData:(id)arg1 peerID:(id)arg2 ;
-(void)clientInstancesRemoved;
-(void)connectOnMainQueueToPeer:(id)arg1 ;
-(void)continuity:(id)arg1 didDiscoverPeerWithData:(id)arg2 fromPeer:(id)arg3 ;
-(BOOL)isScanningOrAdvertising;
-(void)setAlwaysConnectedForCBUUID:(id)arg1 ;
-(void)clientInstanceCreatedWithMessageContext:(id)arg1 ;
-(void)removeLink:(id)arg1 ;
-(void)continuityDidStartTrackingPeer:(id)arg1 peer:(id)arg2 error:(id)arg3 ;
-(void)continuityDidStopTrackingPeer:(id)arg1 peer:(id)arg2 ;
-(void)continuity:(id)arg1 didLosePeer:(id)arg2 ;
-(void)sendReset;
@end

