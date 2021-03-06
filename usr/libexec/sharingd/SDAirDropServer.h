/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDAirDropPublisherDelegate.h>
#import <sharingd/SDAirDropInformationDelegate.h>
#import <sharingd/WPAWDLDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction, SDAirDropServerDelegate;
@class WPAWDL, NSNumber, NSTimer, CUCoalescer, NSObject, SDStatusMonitor, NSString, SDAirDropPublisher, NSMutableSet, NSMutableDictionary, SDAirDropInformation;

@interface SDAirDropServer : NSObject <SDAirDropPublisherDelegate, SDAirDropInformationDelegate, WPAWDLDelegate> {

	BOOL _screenOn;
	BOOL _contactsOnly;
	WPAWDL* _proximity;
	NSNumber* _portNumber;
	NSTimer* _awdlTimer;
	NSTimer* _bluetoothTimer;
	CUCoalescer* _coalescer;
	NSObject*<OS_dispatch_queue> _queue;
	SecIdentityRef _identity;
	CFHTTPServerRef _server;
	double _startTime;
	SDStatusMonitor* _monitor;
	NSString* _discoverableMode;
	SDAirDropPublisher* _publisher;
	NSMutableSet* _discoveredHashes;
	NSMutableDictionary* _properties;
	SDAirDropInformation* _information;
	CFDictionaryRef _connections;
	NSObject*<OS_os_transaction> _transaction;
	int _clientPid;
	NSString* _clientBundleID;
	id<SDAirDropServerDelegate> _delegate;

}

@property (assign) int clientPid;                                     //@synthesize clientPid=_clientPid - In the implementation block
@property (copy) NSString * clientBundleID;                           //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (__weak) id<SDAirDropServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<SDAirDropServerDelegate>)delegate;
-(void)setDelegate:(id<SDAirDropServerDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(void)activate;
-(void)setClientBundleID:(NSString *)arg1 ;
-(NSString *)clientBundleID;
-(void)awdlDidUpdateState:(id)arg1 ;
-(void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3 ;
-(void)didReceiveError:(CFErrorRef)arg1 ;
-(void)startServer;
-(int)clientPid;
-(void)setClientPid:(int)arg1 ;
-(void)addObservers;
-(void)removeObservers;
-(void)didOpenConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)didCloseConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)systemWillSleep:(id)arg1 ;
-(void)consoleUserChanged:(id)arg1 ;
-(void)legacyModeChanged:(id)arg1 ;
-(BOOL)thisIsTheFinder;
-(void)bonjourPublisher:(id)arg1 propertiesDidChange:(id)arg2 ;
-(void)appleIDChanged:(id)arg1 ;
-(void)airDropInformation:(id)arg1 didChange:(id)arg2 ;
-(void)airDropStatusChanged:(id)arg1 ;
-(void)appleIDAccountInfoChanged:(id)arg1 ;
-(void)notifyClient:(long long)arg1 withResults:(id)arg2 ;
-(void)handleTerminalCallBack;
-(void)updateServerState;
-(void)awdlTimeoutFired:(id)arg1 ;
-(void)bluetoothTimeoutFired:(id)arg1 ;
-(void)invalidateTimers;
-(void)startTimers;
-(void)startHTTPServer:(unsigned short)arg1 ;
-(void)publishedInfoChanged:(id)arg1 ;
-(void)stopProximityScanner;
-(void)logDiscoveryWithHash:(id)arg1 rssi:(id)arg2 ;
-(BOOL)discoverableByEveryone;
-(void)stopScanningAndStartServer;
-(BOOL)discoverableByContactsOnly;
-(void)startProximityScanner;
-(void)keyBagFirstUnlock:(id)arg1 ;
-(void)wirelessChanged:(id)arg1 ;
-(void)airDropUnpublished:(id)arg1 ;
-(void)screenStateChange:(id)arg1 ;
-(void)bluetoothChanged:(id)arg1 ;
-(void)discoverableModeChanged:(id)arg1 ;
-(id)sslSettings;
-(void)systemHasPoweredOn:(id)arg1 ;
-(void)finderAirDropEnabled:(id)arg1 ;
@end

