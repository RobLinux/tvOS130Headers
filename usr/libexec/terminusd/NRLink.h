/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:59 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NRLinkDelegate;
#import <terminusd/terminusd-Structs.h>
@class NSObject, NSUUID, NWNetworkAgentRegistration, NSMutableArray, NSData;

@interface NRLink : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _state;
	unsigned char _type;
	unsigned long long _identifier;
	NSUUID* _nrUUID;
	id<NRLinkDelegate> _linkDelegate;
	NEVirtualInterface_sRef _virtualInterface;
	BOOL _startRequested;
	BOOL _ikeClassCEstablished;
	BOOL _ikeClassDEstablished;
	BOOL _peerAvailabilityCheckInProgress;
	double _linkTotalReadyTimeInSec;
	BOOL _noTransport;
	BOOL _isPrimary;
	BOOL _suspendWhenReady;
	unsigned short _metric;
	NWNetworkAgentRegistration* _proxyAgentRegistration;
	NSMutableArray* _policyIDs;
	NSData* _usedProxyNotifyPayload;
	unsigned long long _linkReadyStartTime;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue; 
@property (assign,nonatomic) unsigned char type; 
@property (assign,nonatomic) unsigned long long identifier; 
@property (nonatomic,retain) NSUUID * nrUUID; 
@property (assign,nonatomic) BOOL startRequested; 
@property (assign,nonatomic,__weak) id<NRLinkDelegate> linkDelegate; 
@property (assign,nonatomic) NEVirtualInterface_sRef virtualInterface; 
@property (nonatomic,retain) NSData * usedProxyNotifyPayload;                                  //@synthesize usedProxyNotifyPayload=_usedProxyNotifyPayload - In the implementation block
@property (assign,nonatomic) unsigned long long linkReadyStartTime;                            //@synthesize linkReadyStartTime=_linkReadyStartTime - In the implementation block
@property (assign,nonatomic) double linkTotalReadyTimeInSec;                                   //@synthesize linkTotalReadyTimeInSec=_linkTotalReadyTimeInSec - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) unsigned char state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned char type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL ikeClassCEstablished;                                      //@synthesize ikeClassCEstablished=_ikeClassCEstablished - In the implementation block
@property (nonatomic,readonly) BOOL ikeClassDEstablished;                                      //@synthesize ikeClassDEstablished=_ikeClassDEstablished - In the implementation block
@property (nonatomic,readonly) BOOL peerAvailabilityCheckInProgress;                           //@synthesize peerAvailabilityCheckInProgress=_peerAvailabilityCheckInProgress - In the implementation block
@property (assign,nonatomic) BOOL noTransport;                                                 //@synthesize noTransport=_noTransport - In the implementation block
@property (assign,nonatomic) BOOL isPrimary;                                                   //@synthesize isPrimary=_isPrimary - In the implementation block
@property (assign,nonatomic) BOOL suspendWhenReady;                                            //@synthesize suspendWhenReady=_suspendWhenReady - In the implementation block
@property (nonatomic,retain) NWNetworkAgentRegistration * proxyAgentRegistration;              //@synthesize proxyAgentRegistration=_proxyAgentRegistration - In the implementation block
@property (nonatomic,readonly) NEVirtualInterface_sRef virtualInterface;                       //@synthesize virtualInterface=_virtualInterface - In the implementation block
@property (nonatomic,retain) NSMutableArray * policyIDs;                                       //@synthesize policyIDs=_policyIDs - In the implementation block
@property (nonatomic,readonly) BOOL startRequested;                                            //@synthesize startRequested=_startRequested - In the implementation block
@property (assign,nonatomic) unsigned short metric;                                            //@synthesize metric=_metric - In the implementation block
@property (nonatomic,readonly) NSUUID * nrUUID;                                                //@synthesize nrUUID=_nrUUID - In the implementation block
@property (nonatomic,__weak,readonly) id<NRLinkDelegate> linkDelegate;                         //@synthesize linkDelegate=_linkDelegate - In the implementation block
-(id)description;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned char)type;
-(void)setType:(unsigned char)arg1 ;
-(unsigned long long)identifier;
-(unsigned char)state;
-(BOOL)resume;
-(void)setState:(unsigned char)arg1 ;
-(BOOL)suspend;
-(BOOL)start;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned short)metric;
-(void)setMetric:(unsigned short)arg1 ;
-(BOOL)isPrimary;
-(void)setIsPrimary:(BOOL)arg1 ;
-(id)copyShortDescription;
-(void)setVirtualInterface:(NEVirtualInterface_sRef)arg1 ;
-(NEVirtualInterface_sRef)virtualInterface;
-(void)reportEvent:(int)arg1 ;
-(BOOL)cancelWithReason:(id)arg1 ;
-(NSUUID *)nrUUID;
-(void)setNrUUID:(NSUUID *)arg1 ;
-(NSMutableArray *)policyIDs;
-(void)setPolicyIDs:(NSMutableArray *)arg1 ;
-(id)copyStatusString;
-(void)invalidateLink;
-(void)refreshCompanionProxyAgent;
-(id)copyDescriptionInner;
-(void)checkPeerAvailabilityWithForceAggressive:(BOOL)arg1 ;
-(BOOL)sendControlData:(id)arg1 ;
-(id)initLinkWithQueue:(id)arg1 linkDelegate:(id)arg2 nrUUID:(id)arg3 ;
-(void)invalidateIKESessionForClass:(unsigned char)arg1 ;
-(id)copyShortDescriptionInner;
-(void)checkProxyAgentWithForceUpdate:(BOOL)arg1 ;
-(void)reportEvent:(int)arg1 details:(id)arg2 ;
-(void)reportEvent:(int)arg1 detailsFormat:(id)arg2 ;
-(id)copyDescription;
-(BOOL)changeStateTo:(unsigned char)arg1 details:(id)arg2 ;
-(BOOL)changeStateTo:(unsigned char)arg1 detailsFormat:(id)arg2 ;
-(BOOL)changeStateTo:(unsigned char)arg1 ;
-(void)setInterfaceAvailabilityIfApplicable;
-(void)setInterfaceAvailabilityForcedWithInterfaceName:(id)arg1 ;
-(BOOL)setInterfaceSubfamily;
-(BOOL)setNoACKPrioritization;
-(BOOL)ikeClassCEstablished;
-(BOOL)ikeClassDEstablished;
-(double)linkTotalReadyTimeInSec;
-(void)setLinkTotalReadyTimeInSec:(double)arg1 ;
-(BOOL)peerAvailabilityCheckInProgress;
-(BOOL)noTransport;
-(void)setNoTransport:(BOOL)arg1 ;
-(BOOL)suspendWhenReady;
-(void)setSuspendWhenReady:(BOOL)arg1 ;
-(NWNetworkAgentRegistration *)proxyAgentRegistration;
-(void)setProxyAgentRegistration:(NWNetworkAgentRegistration *)arg1 ;
-(BOOL)startRequested;
-(id<NRLinkDelegate>)linkDelegate;
-(NSData *)usedProxyNotifyPayload;
-(void)setUsedProxyNotifyPayload:(NSData *)arg1 ;
-(unsigned long long)linkReadyStartTime;
-(void)setLinkReadyStartTime:(unsigned long long)arg1 ;
-(void)unregisterProxyAgent;
-(void)setStartRequested:(BOOL)arg1 ;
-(void)setLinkDelegate:(id<NRLinkDelegate>)arg1 ;
-(void)invalidateIKESession:(id*)arg1 ;
@end

