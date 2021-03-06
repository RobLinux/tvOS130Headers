/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:49 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <rapportd/rapportd-Structs.h>
#import <rapportd/RPCompanionLinkXPCServerInterface.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_os_transaction;
@class NSString, CUBonjourDevice, RPCompanionLinkClient, RPCompanionLinkDaemon, RPCompanionLinkDevice, RPDiscovery, NSObject, RPConnection, NSMutableSet, RPServer, RPSession, NSXPCConnection, NSMutableDictionary;

@interface RPCompanionLinkXPCConnection : NSObject <RPCompanionLinkXPCServerInterface> {

	NSString* _appID;
	SCD_Struct_RP0 _metricsCtx;
	BOOL _entitled;
	BOOL _localDeviceUpdated;
	BOOL _needsCLink;
	unsigned _xpcID;
	CUBonjourDevice* _bonjourDevice;
	RPCompanionLinkClient* _client;
	RPCompanionLinkDaemon* _daemon;
	RPCompanionLinkDevice* _daemonDevice;
	NSMutableDictionary* _devices;
	RPDiscovery* _discoveryClient;
	NSObject*<OS_dispatch_source> _discoveryTimer;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	RPConnection* _netCnx;
	NSMutableDictionary* _registeredEvents;
	NSMutableSet* _registeredProfileIDs;
	NSMutableDictionary* _registeredRequests;
	NSObject*<OS_os_transaction> _osTransaction;
	RPServer* _server;
	RPSession* _session;
	unsigned long long _startTicks;
	NSXPCConnection* _xpcCnx;

}

@property (nonatomic,retain) CUBonjourDevice * bonjourDevice;                           //@synthesize bonjourDevice=_bonjourDevice - In the implementation block
@property (nonatomic,retain) RPCompanionLinkClient * client;                            //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) RPCompanionLinkDaemon * daemon;                          //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,readonly) RPCompanionLinkDevice * daemonDevice;                    //@synthesize daemonDevice=_daemonDevice - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * devices;                           //@synthesize devices=_devices - In the implementation block
@property (nonatomic,retain) RPDiscovery * discoveryClient;                             //@synthesize discoveryClient=_discoveryClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> discoveryTimer;              //@synthesize discoveryTimer=_discoveryTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) BOOL entitled;                                           //@synthesize entitled=_entitled - In the implementation block
@property (assign,nonatomic) BOOL localDeviceUpdated;                                   //@synthesize localDeviceUpdated=_localDeviceUpdated - In the implementation block
@property (assign,nonatomic) BOOL needsCLink;                                           //@synthesize needsCLink=_needsCLink - In the implementation block
@property (nonatomic,retain) RPConnection * netCnx;                                     //@synthesize netCnx=_netCnx - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * registeredEvents;                  //@synthesize registeredEvents=_registeredEvents - In the implementation block
@property (nonatomic,readonly) NSMutableSet * registeredProfileIDs;                     //@synthesize registeredProfileIDs=_registeredProfileIDs - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * registeredRequests;                //@synthesize registeredRequests=_registeredRequests - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> osTransaction;                //@synthesize osTransaction=_osTransaction - In the implementation block
@property (nonatomic,retain) RPServer * server;                                         //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) RPSession * session;                                       //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) unsigned long long startTicks;                             //@synthesize startTicks=_startTicks - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcCnx;                                //@synthesize xpcCnx=_xpcCnx - In the implementation block
@property (assign,nonatomic) unsigned xpcID;                                            //@synthesize xpcID=_xpcID - In the implementation block
-(RPSession *)session;
-(RPCompanionLinkClient *)client;
-(void)setSession:(RPSession *)arg1 ;
-(RPServer *)server;
-(void)setServer:(RPServer *)arg1 ;
-(void)setClient:(RPCompanionLinkClient *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSMutableDictionary *)devices;
-(RPCompanionLinkDaemon *)daemon;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)startTicks;
-(void)setStartTicks:(unsigned long long)arg1 ;
-(void)connectionInvalidated;
-(CUBonjourDevice *)bonjourDevice;
-(void)setBonjourDevice:(CUBonjourDevice *)arg1 ;
-(NSXPCConnection *)xpcCnx;
-(id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2 ;
-(BOOL)_entitledAndReturnError:(id*)arg1 ;
-(BOOL)entitled;
-(void)companionLinkActivateClient:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)companionLinkTryPassword:(id)arg1 ;
-(void)companionLinkRegisterEventID:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)companionLinkDeregisterEventID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)companionLinkSendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)companionLinkActivateAssertion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)companionLinkInvalidateAssertion:(id)arg1 ;
-(void)companionLinkUpdateClient:(id)arg1 ;
-(void)companionLinkRegisterProfileID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)companionLinkDeregisterProfileID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)companionLinkRegisterRequestID:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)companionLinkDeregisterRequestID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)companionLinkSendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(void)xpcDiscoveryActivate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcDiscoveryUpdate:(id)arg1 ;
-(void)xpcServerActivate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcSessionActivate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned)xpcID;
-(void)setXpcID:(unsigned)arg1 ;
-(RPCompanionLinkDevice *)daemonDevice;
-(void)setOsTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSObject*<OS_os_transaction>)osTransaction;
-(NSMutableDictionary *)registeredEvents;
-(NSMutableDictionary *)registeredRequests;
-(NSMutableSet *)registeredProfileIDs;
-(BOOL)needsCLink;
-(RPConnection *)netCnx;
-(void)setNetCnx:(RPConnection *)arg1 ;
-(void)setNeedsCLink:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)discoveryTimer;
-(void)setDiscoveryTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)authCompletion:(id)arg1 ;
-(void)promptForPasswordType:(int)arg1 flags:(unsigned)arg2 throttleSeconds:(int)arg3 ;
-(void)reportFoundDevice:(id)arg1 ;
-(void)reportLostDevice:(id)arg1 ;
-(void)reportChangedDevice:(id)arg1 changes:(unsigned)arg2 ;
-(BOOL)localDeviceUpdated;
-(void)setLocalDeviceUpdated:(BOOL)arg1 ;
-(void)receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 ;
-(void)receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)_devicesForClient:(id)arg1 ;
-(RPDiscovery *)discoveryClient;
-(void)setDiscoveryClient:(RPDiscovery *)arg1 ;
@end

