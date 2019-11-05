/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iapd/iapd-Structs.h>
@class NSMutableDictionary, NSLock, IAPApplicationStateMonitor;

@interface EAManager : NSObject {

	NSMutableDictionary* _connectedAccessories;
	map<unsigned int, NSNumber *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, NSNumber *> > >* _connectionIDMap;
	NSLock* _connectedAccessoriesLock;
	BOOL _fakedLocationDeviceEnabled;
	BOOL _fakedLocationDeviceFilteringSupport;
	NSMutableDictionary* _clients;
	NSLock* _clientLock;
	IAPApplicationStateMonitor* _appStateMonitor;

}

@property (assign,nonatomic) BOOL fakedLocationDeviceFilteringSupport;              //@synthesize fakedLocationDeviceFilteringSupport=_fakedLocationDeviceFilteringSupport - In the implementation block
+(id)sharedManager;
+(id)newPlistForAccessory:(id)arg1 ;
+(id)stringForClientID:(unsigned)arg1 ;
+(void)_updatePlistWithAccessoryProtocolsInternal:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(id)connectedAccessories;
-(void)updateAccessoryInfo:(const IPodAccessoryDetails*)arg1 ;
-(void)removeAllClients;
-(void)detachAccessory:(unsigned)arg1 ;
-(id)connectedAccessoriesForEAClient:(unsigned)arg1 ;
-(BOOL)sessionsOpenForDisplayIdentifer:(const char*)arg1 ;
-(void)removeClientForXPCConnection:(id)arg1 ;
-(void)applicationStateChanged:(id)arg1 ;
-(void)notifyEAClient:(id)arg1 ofAccessoryEvent:(const char*)arg2 accessory:(id)arg3 ;
-(void)notifyEAClientsOfAccessoryEvent:(const char*)arg1 accessory:(id)arg2 ;
-(void)notifyEAClientsOfAccessoryConnection:(id)arg1 ;
-(void)notifyEAClientsOfAccessoryDisconnection:(id)arg1 ;
-(void)notifyEAClientsOfAccessoryReconnection:(id)arg1 ;
-(void)_dpServiceWithFirmwareVersionFound:(id)arg1 ;
-(unsigned)generateClientID;
-(void)_shouldPostNoAppAlert:(id)arg1 ;
-(void)_takeClientAssertionsForAccessoryConnection;
-(void)logAccessoryAttach:(id)arg1 reason:(id)arg2 ;
-(void)_takeClientAssertionsForAccessoryDisconnection;
-(void)logAccessoryDetach:(id)arg1 reason:(id)arg2 ;
-(void)_unregisteredClientAssertionTimerFired:(id)arg1 ;
-(id)connectionIDObjectForConnectionID:(unsigned)arg1 ;
-(void)updateValueFromApp:(id)arg1 ;
-(void)takeProcessAssertionForBundleID:(id)arg1 ;
-(BOOL)_isProtocolContainedInWhitelist:(id)arg1 ;
-(BOOL)closeSessionForConnectionID:(unsigned)arg1 sessionID:(unsigned short)arg2 notifyApp:(BOOL)arg3 ;
-(void)updateValueFromIap:(id)arg1 forPort:(id)arg2 andPortPorperty:(id)arg3 forAccessory:(unsigned)arg4 updateApp:(BOOL)arg5 ;
-(id)accessoryForConnectionID:(id)arg1 ;
-(unsigned)addClient:(unsigned)arg1 withAuditToken:(SCD_Struct_EA5)arg2 currentClientID:(unsigned)arg3 xpcConnection:(id)arg4 eaProtocols:(id)arg5 notifyOfAlreadyConnectedAccessories:(BOOL)arg6 andBundleId:(id)arg7 ;
-(unsigned)clientIDForDisplayIdentifier:(const char*)arg1 ;
-(void)attachAccessory:(const IPodAccessoryDetails*)arg1 forTransport:(IPodTransport*)arg2 ;
-(void)updateAccessoryProtocols:(const IPodAccessoryDetails*)arg1 ;
-(void)updateSpeakerMenu:(unsigned)arg1 withEqNames:(id)arg2 andSelection:(unsigned)arg3 ;
-(void)updateSpeakerEqIndex:(unsigned)arg1 eqIndex:(unsigned)arg2 ;
-(void)updateLocationSupport:(unsigned)arg1 isReady:(BOOL)arg2 ;
-(void)updateValueFromIap:(id)arg1 forPort:(id)arg2 andPortPorperty:(id)arg3 forAccessory:(unsigned)arg4 ;
-(id)valueForProperty:(id)arg1 forAccessory:(unsigned)arg2 ;
-(id)sessionForAccessoryWithConnectionID:(unsigned)arg1 andSessionID:(unsigned short)arg2 ;
-(BOOL)openSessionForClientID:(unsigned)arg1 connetionID:(unsigned)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short*)arg4 ;
-(void)openCompleteForSessionWithConnectionID:(unsigned)arg1 sessionID:(unsigned short)arg2 ;
-(void)fakedLocationDeviceNMEAAvailable;
-(void)fakedLocationDevicePointDataAvailable;
-(void)fakedLocationDeviceEphemerisURLAvailable;
-(void)fakedLocationDeviceEphemerisMaxIntervalAvailable;
-(void)fakedLocationDeviceEphemerisRefreshIntervalAvailable;
-(void)fakedLocationRequestGPSTime;
-(void)fakedLocationDeviceSetFilter:(id)arg1 ;
-(void)fakedLocationDeviceFilteringSupport:(BOOL)arg1 ;
-(BOOL)isFakedLocationDeviceEnabled;
-(void)setFakedLocationDeviceEnabled:(BOOL)arg1 forClientID:(unsigned)arg2 ;
-(void)updatePlistWithProtocolsForAccessory:(id)arg1 ;
-(BOOL)fakedLocationDeviceFilteringSupport;
-(void)setFakedLocationDeviceFilteringSupport:(BOOL)arg1 ;
@end

