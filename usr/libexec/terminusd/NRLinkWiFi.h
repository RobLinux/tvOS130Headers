/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:58 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <terminusd/NRLink.h>
#import <terminusd/NEIKEv2ListenerDelegate.h>
#import <terminusd/NWNetworkOfInterestManagerDelegate.h>

@class NSNumber, NWAddressEndpoint, NEIKEv2Listener, NEIKEv2Session, NSString, NWNetworkOfInterestManager, NRAnalyticsCmpnLinkWiFi, NSUUID;

@interface NRLinkWiFi : NRLink <NEIKEv2ListenerDelegate, NWNetworkOfInterestManagerDelegate> {

	unsigned _ikeRetryCounter;
	unsigned _startRetryCounter;
	unsigned _setupIPsecRetryCounter;
	unsigned _symptomsAdvisoryCounter;
	unsigned _powerAssertion;
	int _notifyToken;
	NSNumber* _listenerPort;
	NWAddressEndpoint* _localOuterEndpoint;
	NWAddressEndpoint* _remoteOuterEndpoint;
	NEIKEv2Listener* _ikeListener;
	NEIKEv2Session* _ikeSessionClassC;
	NSString* _wifiInterfaceName;
	NWNetworkOfInterestManager* _symptomsNOIManager;
	NRAnalyticsCmpnLinkWiFi* _linkAnalytics;
	NSUUID* _randomUUIDForWiFiAssertion;

}

@property (nonatomic,retain) NEIKEv2Listener * ikeListener;                                //@synthesize ikeListener=_ikeListener - In the implementation block
@property (nonatomic,retain) NEIKEv2Session * ikeSessionClassC;                            //@synthesize ikeSessionClassC=_ikeSessionClassC - In the implementation block
@property (nonatomic,retain) NSString * wifiInterfaceName;                                 //@synthesize wifiInterfaceName=_wifiInterfaceName - In the implementation block
@property (nonatomic,retain) NWAddressEndpoint * localOuterEndpoint;                       //@synthesize localOuterEndpoint=_localOuterEndpoint - In the implementation block
@property (nonatomic,retain) NSNumber * listenerPort;                                      //@synthesize listenerPort=_listenerPort - In the implementation block
@property (assign,nonatomic) unsigned ikeRetryCounter;                                     //@synthesize ikeRetryCounter=_ikeRetryCounter - In the implementation block
@property (assign,nonatomic) unsigned startRetryCounter;                                   //@synthesize startRetryCounter=_startRetryCounter - In the implementation block
@property (assign,nonatomic) unsigned setupIPsecRetryCounter;                              //@synthesize setupIPsecRetryCounter=_setupIPsecRetryCounter - In the implementation block
@property (assign,nonatomic) unsigned symptomsAdvisoryCounter;                             //@synthesize symptomsAdvisoryCounter=_symptomsAdvisoryCounter - In the implementation block
@property (nonatomic,retain) NWNetworkOfInterestManager * symptomsNOIManager;              //@synthesize symptomsNOIManager=_symptomsNOIManager - In the implementation block
@property (assign,nonatomic) unsigned powerAssertion;                                      //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (assign,nonatomic) int notifyToken;                                              //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,retain) NRAnalyticsCmpnLinkWiFi * linkAnalytics;                      //@synthesize linkAnalytics=_linkAnalytics - In the implementation block
@property (nonatomic,retain) NSUUID * randomUUIDForWiFiAssertion;                          //@synthesize randomUUIDForWiFiAssertion=_randomUUIDForWiFiAssertion - In the implementation block
@property (nonatomic,retain) NWAddressEndpoint * remoteOuterEndpoint;                      //@synthesize remoteOuterEndpoint=_remoteOuterEndpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)notifyToken;
-(BOOL)resume;
-(BOOL)suspend;
-(BOOL)start;
-(NSNumber *)listenerPort;
-(void)setListenerPort:(NSNumber *)arg1 ;
-(unsigned short)metric;
-(void)setIsPrimary:(BOOL)arg1 ;
-(void)didStartTrackingNOI:(id)arg1 ;
-(void)didStopTrackingAllNOIs:(id)arg1 ;
-(void)listener:(id)arg1 receivedNewSession:(id)arg2 ;
-(void)requestConfigurationForListener:(id)arg1 session:(id)arg2 sessionConfig:(id)arg3 childConfig:(id)arg4 validateAuthBlock:(/*^block*/id)arg5 responseBlock:(/*^block*/id)arg6 ;
-(void)setNotifyToken:(int)arg1 ;
-(unsigned)powerAssertion;
-(void)setPowerAssertion:(unsigned)arg1 ;
-(BOOL)cancelWithReason:(id)arg1 ;
-(BOOL)setupVirtualInterface;
-(void)setWifiInterfaceName:(NSString *)arg1 ;
-(id)copyStatusString;
-(id)initLinkWithQueue:(id)arg1 linkDelegate:(id)arg2 nrUUID:(id)arg3 wifiInterfaceName:(id)arg4 localOuterEndpoint:(id)arg5 remoteOuterEndpoint:(id)arg6 listenerPort:(id)arg7 ;
-(void)invalidateIKESessionClassC;
-(void)invalidateLink;
-(void)refreshCompanionProxyAgent;
-(id)copyDescriptionInner;
-(void)retrySetupVirtualInterface;
-(void)retrySetupIPsec:(int)arg1 ;
-(void)setWiFiPowerAssertionState:(BOOL)arg1 ;
-(void)restartIKESessionClassC;
-(void)startSymptomsNOIManagerTracking;
-(void)stopSymptomsNOIManagerTracking;
-(void)startSymptomsMonitor;
-(void)stopSymptomsMonitor;
-(void)checkPeerAvailabilityWithForceAggressive:(BOOL)arg1 ;
-(void)setupIKECallbacksClassC;
-(BOOL)setupIPsec;
-(BOOL)sendControlData:(id)arg1 ;
-(void)handleNotifyCode:(unsigned short)arg1 payload:(id)arg2 ;
-(NWAddressEndpoint *)localOuterEndpoint;
-(void)setLocalOuterEndpoint:(NWAddressEndpoint *)arg1 ;
-(NWAddressEndpoint *)remoteOuterEndpoint;
-(void)setRemoteOuterEndpoint:(NWAddressEndpoint *)arg1 ;
-(NEIKEv2Listener *)ikeListener;
-(void)setIkeListener:(NEIKEv2Listener *)arg1 ;
-(NEIKEv2Session *)ikeSessionClassC;
-(void)setIkeSessionClassC:(NEIKEv2Session *)arg1 ;
-(NSString *)wifiInterfaceName;
-(unsigned)ikeRetryCounter;
-(void)setIkeRetryCounter:(unsigned)arg1 ;
-(unsigned)startRetryCounter;
-(void)setStartRetryCounter:(unsigned)arg1 ;
-(unsigned)setupIPsecRetryCounter;
-(void)setSetupIPsecRetryCounter:(unsigned)arg1 ;
-(unsigned)symptomsAdvisoryCounter;
-(void)setSymptomsAdvisoryCounter:(unsigned)arg1 ;
-(NWNetworkOfInterestManager *)symptomsNOIManager;
-(void)setSymptomsNOIManager:(NWNetworkOfInterestManager *)arg1 ;
-(NRAnalyticsCmpnLinkWiFi *)linkAnalytics;
-(void)setLinkAnalytics:(NRAnalyticsCmpnLinkWiFi *)arg1 ;
-(NSUUID *)randomUUIDForWiFiAssertion;
-(void)setRandomUUIDForWiFiAssertion:(NSUUID *)arg1 ;
@end

