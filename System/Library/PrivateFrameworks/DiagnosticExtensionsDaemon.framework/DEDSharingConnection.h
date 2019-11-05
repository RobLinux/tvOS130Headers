/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_semaphore;
@class DEDSharingInbound, DEDController, NSMutableDictionary, NSObject, SFService, SFDeviceDiscovery, NSMutableSet;

@interface DEDSharingConnection : NSObject {

	BOOL _listenForClients;
	BOOL _started;
	DEDSharingInbound* _inbound;
	DEDController* _controller;
	NSMutableDictionary* _pongingDevices;
	NSMutableDictionary* _deviceSessions;
	NSMutableDictionary* _discoveredDevices;
	NSObject*<OS_dispatch_queue> _run_queue;
	NSObject*<OS_os_log> _log;
	NSObject*<OS_dispatch_semaphore> _bluetoothSessionSemaphore;
	SFService* _pingService;
	SFDeviceDiscovery* _pingDiscovery;
	NSMutableSet* _visiblePingUUIDs;
	SFService* _workerService;
	SFDeviceDiscovery* _pongDiscovery;
	/*^block*/id _deviceStatusCallback;

}

@property (retain) DEDSharingInbound * inbound;                                             //@synthesize inbound=_inbound - In the implementation block
@property (__weak) DEDController * controller;                                              //@synthesize controller=_controller - In the implementation block
@property (assign) BOOL listenForClients;                                                   //@synthesize listenForClients=_listenForClients - In the implementation block
@property (assign) BOOL started;                                                            //@synthesize started=_started - In the implementation block
@property (retain) NSMutableDictionary * pongingDevices;                                    //@synthesize pongingDevices=_pongingDevices - In the implementation block
@property (retain) NSMutableDictionary * deviceSessions;                                    //@synthesize deviceSessions=_deviceSessions - In the implementation block
@property (retain) NSMutableDictionary * discoveredDevices;                                 //@synthesize discoveredDevices=_discoveredDevices - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> run_queue;                                  //@synthesize run_queue=_run_queue - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                                                //@synthesize log=_log - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> bluetoothSessionSemaphore;              //@synthesize bluetoothSessionSemaphore=_bluetoothSessionSemaphore - In the implementation block
@property (nonatomic,retain) SFService * pingService;                                       //@synthesize pingService=_pingService - In the implementation block
@property (nonatomic,retain) SFDeviceDiscovery * pingDiscovery;                             //@synthesize pingDiscovery=_pingDiscovery - In the implementation block
@property (retain) NSMutableSet * visiblePingUUIDs;                                         //@synthesize visiblePingUUIDs=_visiblePingUUIDs - In the implementation block
@property (nonatomic,retain) SFService * workerService;                                     //@synthesize workerService=_workerService - In the implementation block
@property (nonatomic,retain) SFDeviceDiscovery * pongDiscovery;                             //@synthesize pongDiscovery=_pongDiscovery - In the implementation block
@property (copy) id deviceStatusCallback;                                                   //@synthesize deviceStatusCallback=_deviceStatusCallback - In the implementation block
+(void)checkIn;
-(void)dealloc;
-(void)start;
-(DEDSharingInbound *)inbound;
-(void)setInbound:(DEDSharingInbound *)arg1 ;
-(BOOL)started;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setController:(DEDController *)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(DEDController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)stopDiscovery;
-(NSMutableDictionary *)discoveredDevices;
-(void)configureListenForClients:(BOOL)arg1 ;
-(void)startPairSetupForDevice:(id)arg1 ;
-(void)tryPIN:(id)arg1 forDevice:(id)arg2 ;
-(void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4 ;
-(void)discoverDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)setDeviceDiscoveryCallback:(/*^block*/id)arg1 ;
-(void)didStartBugSessionWithInfo:(id)arg1 forCaller:(id)arg2 ;
-(id)sharingOutboundForBugSessionIdentifier:(id)arg1 device:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)run_queue;
-(void)setDeviceStatusCallback:(id)arg1 ;
-(id)deviceStatusCallback;
-(void)setRun_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDeviceSessions:(NSMutableDictionary *)arg1 ;
-(void)setDiscoveredDevices:(NSMutableDictionary *)arg1 ;
-(void)setListenForClients:(BOOL)arg1 ;
-(void)setPingService:(SFService *)arg1 ;
-(void)setWorkerService:(SFService *)arg1 ;
-(void)setBluetoothSessionSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(SFService *)pingService;
-(SFService *)workerService;
-(BOOL)listenForClients;
-(void)startPingDiscovery;
-(void)startWorkerService;
-(void)startPongDiscovery;
-(void)startPingServiceWithCompletion:(/*^block*/id)arg1 ;
-(void)stopPongDiscovery;
-(void)stopPingService;
-(void)_configureService:(id)arg1 withLabel:(id)arg2 needsSetup:(BOOL)arg3 actionType:(unsigned char)arg4 completion:(/*^block*/id)arg5 ;
-(NSMutableSet *)visiblePingUUIDs;
-(void)stopPongAdvertisement;
-(void)startPongAdvertisement;
-(SFDeviceDiscovery *)pingDiscovery;
-(void)setPingDiscovery:(SFDeviceDiscovery *)arg1 ;
-(void)setVisiblePingUUIDs:(NSMutableSet *)arg1 ;
-(void)_handleIncomingPingingDevice:(id)arg1 ;
-(void)updatePongAdvertisement;
-(void)_saveDevice:(id)arg1 ;
-(SFDeviceDiscovery *)pongDiscovery;
-(NSMutableDictionary *)pongingDevices;
-(void)setPongDiscovery:(SFDeviceDiscovery *)arg1 ;
-(void)setPongingDevices:(NSMutableDictionary *)arg1 ;
-(void)_handleIncomingPongingDevice:(id)arg1 ;
-(void)updateControllerWithDevice:(id)arg1 andStatus:(long long)arg2 ;
-(void)trySessionWithFoundDevice:(id)arg1 ;
-(id)_existingSharingSessionForDevice:(id)arg1 ;
-(void)checkReadinessForSFDevice:(id)arg1 session:(id)arg2 ;
-(void)stopSession:(id)arg1 ;
-(void)getSystemInfoForDevice:(id)arg1 ;
-(void)createSharingSessionForSFDevice:(id)arg1 holdForPIN:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_semaphore>)bluetoothSessionSemaphore;
-(id)blockingSharingSessionForDevice:(id)arg1 ;
-(NSMutableDictionary *)deviceSessions;
-(void)_verifyPairingForSession:(id)arg1 holdForPIN:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)configureSharingInbound:(id)arg1 ;
-(void)stopPingDiscovery;
-(void)addIncomingSFSession:(id)arg1 forIdentifier:(id)arg2 ;
@end

