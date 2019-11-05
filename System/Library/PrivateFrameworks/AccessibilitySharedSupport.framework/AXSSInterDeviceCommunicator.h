/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySharedSupport/IDSServiceDelegate.h>
#import <AccessibilitySharedSupport/MCSessionDelegate.h>
#import <AccessibilitySharedSupport/MCNearbyServiceBrowserDelegate.h>
#import <AccessibilitySharedSupport/MCNearbyServiceAdvertiserDelegate.h>

@protocol AXSSInterDeviceConnectionListener, AXSSInterDeviceActionReceiver, AXSSInterDeviceSearchObserver;
@class IDSService, MCPeerID, MCSession, MCNearbyServiceBrowser, MCNearbyServiceAdvertiser, NSMutableArray, NSMutableDictionary, NSTimer, AXSSInterDeviceSecurityHelper, NSArray, NSString;

@interface AXSSInterDeviceCommunicator : NSObject <IDSServiceDelegate, MCSessionDelegate, MCNearbyServiceBrowserDelegate, MCNearbyServiceAdvertiserDelegate> {

	id<AXSSInterDeviceConnectionListener> _connectionListener;
	id<AXSSInterDeviceActionReceiver> _actionReceiver;
	id<AXSSInterDeviceSearchObserver> _searchObserver;
	IDSService* _service;
	long long _state;
	MCPeerID* _localPeerID;
	MCSession* _session;
	MCNearbyServiceBrowser* _browser;
	MCNearbyServiceAdvertiser* _advertiser;
	NSMutableArray* _availableDevices;
	NSMutableDictionary* _deviceTypesByPeerID;
	MCPeerID* _slave;
	MCPeerID* _master;
	unsigned long long _switchEventIndex;
	NSTimer* _dummyPacketTimer;
	unsigned long long _numberOfBurstPacketsRemaining;
	AXSSInterDeviceSecurityHelper* _securityHelper;

}

@property (nonatomic,readonly) IDSService * service;                                                       //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) long long state;                                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) MCPeerID * localPeerID;                                                     //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,retain) MCSession * session;                                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) MCNearbyServiceBrowser * browser;                                             //@synthesize browser=_browser - In the implementation block
@property (nonatomic,retain) MCNearbyServiceAdvertiser * advertiser;                                       //@synthesize advertiser=_advertiser - In the implementation block
@property (nonatomic,retain) NSMutableArray * availableDevices;                                            //@synthesize availableDevices=_availableDevices - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceTypesByPeerID;                                    //@synthesize deviceTypesByPeerID=_deviceTypesByPeerID - In the implementation block
@property (nonatomic,retain) MCPeerID * slave;                                                             //@synthesize slave=_slave - In the implementation block
@property (nonatomic,retain) MCPeerID * master;                                                            //@synthesize master=_master - In the implementation block
@property (assign,nonatomic) unsigned long long switchEventIndex;                                          //@synthesize switchEventIndex=_switchEventIndex - In the implementation block
@property (nonatomic,retain) NSTimer * dummyPacketTimer;                                                   //@synthesize dummyPacketTimer=_dummyPacketTimer - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfBurstPacketsRemaining;                             //@synthesize numberOfBurstPacketsRemaining=_numberOfBurstPacketsRemaining - In the implementation block
@property (nonatomic,retain) AXSSInterDeviceSecurityHelper * securityHelper;                               //@synthesize securityHelper=_securityHelper - In the implementation block
@property (assign,nonatomic,__weak) id<AXSSInterDeviceConnectionListener> connectionListener;              //@synthesize connectionListener=_connectionListener - In the implementation block
@property (assign,nonatomic,__weak) id<AXSSInterDeviceActionReceiver> actionReceiver;                      //@synthesize actionReceiver=_actionReceiver - In the implementation block
@property (assign,nonatomic,__weak) id<AXSSInterDeviceSearchObserver> searchObserver;                      //@synthesize searchObserver=_searchObserver - In the implementation block
@property (nonatomic,readonly) BOOL isReceivingSwitchEvents; 
@property (nonatomic,readonly) BOOL isForwardingSwitchEvents; 
@property (nonatomic,readonly) BOOL isSearching; 
@property (nonatomic,readonly) BOOL isIdle; 
@property (nonatomic,readonly) BOOL canSearch; 
@property (nonatomic,readonly) NSArray * searchResults; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(long long)state;
-(MCSession *)session;
-(void)setState:(long long)arg1 ;
-(void)stop;
-(void)setSession:(MCSession *)arg1 ;
-(IDSService *)service;
-(void)search;
-(id)_stateDescription;
-(NSArray *)searchResults;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)setMaster:(MCPeerID *)arg1 ;
-(MCPeerID *)master;
-(BOOL)isSearching;
-(void)setBrowser:(MCNearbyServiceBrowser *)arg1 ;
-(MCNearbyServiceBrowser *)browser;
-(BOOL)isIdle;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 ;
-(void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 ;
-(void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 ;
-(void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 ;
-(void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 ;
-(void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(/*^block*/id)arg4 ;
-(MCNearbyServiceAdvertiser *)advertiser;
-(void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(/*^block*/id)arg4 ;
-(void)advertiser:(id)arg1 didNotStartAdvertisingPeer:(id)arg2 ;
-(void)setAdvertiser:(MCNearbyServiceAdvertiser *)arg1 ;
-(void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3 ;
-(void)browser:(id)arg1 lostPeer:(id)arg2 ;
-(void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2 ;
-(void)_tearDownSession;
-(void)_tearDownConnectivity;
-(id)_stringForState:(long long)arg1 ;
-(MCPeerID *)slave;
-(void)setSwitchEventIndex:(unsigned long long)arg1 ;
-(id<AXSSInterDeviceConnectionListener>)connectionListener;
-(NSTimer *)dummyPacketTimer;
-(void)setNumberOfBurstPacketsRemaining:(unsigned long long)arg1 ;
-(void)_sendDummyPacket;
-(void)setDummyPacketTimer:(NSTimer *)arg1 ;
-(void)setSlave:(MCPeerID *)arg1 ;
-(void)_tearDownBrowser;
-(void)_tearDownAdvertiser;
-(AXSSInterDeviceSecurityHelper *)securityHelper;
-(MCPeerID *)localPeerID;
-(void)_broadcastICloudMessage:(id)arg1 ;
-(void)_cancelAdvertising;
-(NSMutableArray *)availableDevices;
-(id)_messageForSelection:(BOOL)arg1 settings:(id)arg2 ;
-(unsigned long long)switchEventIndex;
-(id)_messageForSwitchEvent:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_sendDataToSlave:(id)arg1 ;
-(unsigned long long)numberOfBurstPacketsRemaining;
-(void)_advertise;
-(id<AXSSInterDeviceActionReceiver>)actionReceiver;
-(id<AXSSInterDeviceSearchObserver>)searchObserver;
-(void)_handleSwitchEventMessageWithPayload:(id)arg1 fromPeer:(id)arg2 ;
-(void)_handleSelectionMessageWithPayload:(id)arg1 ;
-(void)_handleHighlightMessage;
-(NSMutableDictionary *)deviceTypesByPeerID;
-(void)_removePeerFromAvailableDevices:(id)arg1 ;
-(void)_handleTimeoutAsPotentialSlave;
-(BOOL)_setUpSessionIfNecessary;
-(BOOL)isReceivingSwitchEvents;
-(BOOL)isForwardingSwitchEvents;
-(BOOL)canSearch;
-(void)highlightSearchResult:(id)arg1 ;
-(void)selectSearchResult:(id)arg1 settings:(id)arg2 ;
-(void)forwardSwitchEvent:(id)arg1 ;
-(void)setConnectionListener:(id<AXSSInterDeviceConnectionListener>)arg1 ;
-(void)setActionReceiver:(id<AXSSInterDeviceActionReceiver>)arg1 ;
-(void)setSearchObserver:(id<AXSSInterDeviceSearchObserver>)arg1 ;
-(void)setAvailableDevices:(NSMutableArray *)arg1 ;
-(void)setDeviceTypesByPeerID:(NSMutableDictionary *)arg1 ;
-(void)setSecurityHelper:(AXSSInterDeviceSecurityHelper *)arg1 ;
@end

