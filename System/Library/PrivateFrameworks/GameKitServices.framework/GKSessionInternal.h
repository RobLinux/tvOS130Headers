/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GKSessionDOOBReceiveHandler;
#import <GameKitServices/GameKitServices-Structs.h>
@class GKSession, NSString, GKConnection, GKTable, GKAutoPeerIDTable, GKList, GKVoiceChatSessionListener;

@interface GKSessionInternal : NSObject {

	GKSession* _session;
	NSString* domain;
	NSString* serviceType;
	unsigned long long _port;
	NSString* _displayName;
	unsigned _pid;
	unsigned long long maxPeers;
	OpaqueGCKSessionRef sessionRef;
	OpaqueAGPSessionRef agpSessionRef;
	GKConnection* _connection;
	id _delegate;
	id _privateDelegate;
	id _dataReceiveHandler;
	void* _dataReceiveHandlerContext;
	id<GKSessionDOOBReceiveHandler> _doobReceiveHandler[2];
	void** _doobReceiveHandlerContext[2];
	GKTable* _peerInfoTable;
	GKTable* _peerNameTable;
	GKAutoPeerIDTable* _peerIDTable;
	GKList* _peersAvailable;
	GKList* _peersConnected;
	GKList* _peersForCleanup;
	GKList* _peersPendingIncomingInvitation;
	GKList* _peersPendingOutgoingInvitation;
	opaque_pthread_mutex_t _lock;
	opaque_pthread_mutex_t _delegateLock;
	BOOL _isSearching;
	BOOL _isPublishing;
	BOOL _sessionStarted;
	unsigned _mode;
	BOOL _isBusy;
	NSString* sessionID;
	double disconnectTimeout;
	DNSServiceRef_tRef _dnsServiceConnection;
	DNSServiceRef_tRef _dnsServiceResolveConnection;
	int _sReset;
	DNSServiceRef_tRef _serviceBrowser;
	DNSServiceRef_tRef _service;
	DNSServiceRef_tRef _oldService;
	BOOL _handleEventsRunning;
	BOOL _stopHandlingEvents;
	BOOL _wifiEnabled;
	BOOL _shutdown;
	GKVoiceChatSessionListener* _voiceChatListener;

}

@property (assign,nonatomic) OpaqueGCKSessionRef sessionRef; 
@property (assign,nonatomic) OpaqueAGPSessionRef agpSessionRef; 
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * serviceType; 
@property (assign,nonatomic) unsigned long long maxPeers; 
@property (assign,nonatomic) unsigned long long port;                         //@synthesize port=_port - In the implementation block
@property (retain,readonly) GKConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) id dataReceiveHandler; 
@property (assign) id<GKSessionDelegate> delegate; 
@property (readonly) NSString * sessionID; 
@property (readonly) NSString * displayName; 
@property (readonly) unsigned sessionMode;                                    //@synthesize mode=_mode - In the implementation block
@property (readonly) NSString * peerID; 
@property (assign) double disconnectTimeout; 
@property (getter=isAvailable) BOOL available; 
@property (assign) id<GKSessionPrivateDelegate> privateDelegate; 
@property (getter=isBusy) BOOL busy; 
@property (assign) BOOL wifiEnabled; 
-(id)description;
-(void)dealloc;
-(NSString *)domain;
-(id<GKSessionDelegate>)delegate;
-(void)setDelegate:(id<GKSessionDelegate>)arg1 ;
-(void)lock;
-(void)unlock;
-(unsigned long long)port;
-(void)setPort:(unsigned long long)arg1 ;
-(GKConnection *)connection;
-(void)publish;
-(NSString *)sessionID;
-(void)setDomain:(NSString *)arg1 ;
-(void)reset;
-(NSString *)displayName;
-(id)serviceName;
-(void)setAvailable:(BOOL)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(BOOL)isAvailable;
-(NSString *)peerID;
-(id<GKSessionPrivateDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<GKSessionPrivateDelegate>)arg1 ;
-(BOOL)isBusy;
-(BOOL)isShuttingDown;
-(BOOL)wifiEnabled;
-(void)setBusy:(BOOL)arg1 ;
-(void)setWifiEnabled:(BOOL)arg1 ;
-(unsigned)sessionMode;
-(void)sendCallbacksToDelegate:(SCD_Struct_GC4*)arg1 remotePeer:(unsigned)arg2 ;
-(void)receiveDOOB:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void*)arg4 ;
-(id)dataReceiveHandler;
-(void)tellDelegate_sessionDidFailWithError:(id)arg1 ;
-(void)stopResolvingAllPeers;
-(id)newNSErrorFromHRESULT:(int)arg1 description:(id)arg2 reason:(id)arg3 ;
-(id)newNSErrorFromGKSessionError:(int)arg1 description:(id)arg2 reason:(id)arg3 ;
-(void)printDictionaries;
-(void)setDisplayName:(id)arg1 forPeer:(unsigned)arg2 ;
-(void)tellDelegate_didConnectPeer:(id)arg1 ;
-(void)tellDelegate_didDisconnectPeer:(id)arg1 ;
-(void)tellDelegate_isConnectingPeer:(id)arg1 ;
-(void)tellDelegate_peerDidBecomeAvailable:(id)arg1 ;
-(void)tellDelegate_peerDidBecomeUnavailable:(id)arg1 ;
-(void)tellDelegate_didReceiveBand_RetryICE:(id)arg1 ;
-(void)tellDelegate_didReceiveData:(id)arg1 ;
-(void)tellDelegate_gotInvited:(id)arg1 ;
-(void)tellDelegate_connectionRequestToPeerFailed:(id)arg1 ;
-(void)tellDelegate_peerDidBecomeBusy:(id)arg1 ;
-(void)tellDelegate_initiateRelay:(id)arg1 ;
-(void)tellDelegate_updateRelay:(id)arg1 ;
-(void)tellDelegate_networkStatisticsChanged:(id)arg1 ;
-(BOOL)parseServiceName:(const char*)arg1 intoDisplayName:(id*)arg2 pid:(unsigned*)arg3 state:(id*)arg4 ;
-(void)didPublishWithError:(int)arg1 ;
-(id)stringForGCKID:(unsigned)arg1 ;
-(void)disconnectFromAllPeers;
-(BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(unsigned)arg3 enableOOB:(BOOL)arg4 error:(id*)arg5 ;
-(void)browse;
-(void)setDOOBReceiveHandler:(id)arg1 withContext:(void*)arg2 inBand:(unsigned)arg3 ;
-(BOOL)passesSendDataSanityCheck:(id)arg1 toPeers:(id)arg2 withDataMode:(unsigned)arg3 error:(id*)arg4 ;
-(id)displayNameForPeer:(id)arg1 ;
-(BOOL)checkDNSConnection;
-(void)handleEvents;
-(BOOL)filterService:(const char*)arg1 withPID:(unsigned)arg2 ;
-(void)processTXTRecordForPeer:(id)arg1 txtLen:(unsigned short)arg2 txtRecord:(const void*)arg3 ;
-(void)cleanupExAvailablePeers;
-(void)didUpdateTXTRecordForPeer:(id)arg1 fromIF:(const char*)arg2 txtLen:(unsigned short)arg3 txtRecord:(const void*)arg4 withError:(int)arg5 moreComing:(BOOL)arg6 ;
-(BOOL)tryConnectToPeer:(id)arg1 ;
-(id)initWithConnection:(id)arg1 session:(id)arg2 delegate:(id)arg3 ;
-(id)initWithSessionID:(id)arg1 displayName:(id)arg2 session:(id)arg3 sessionMode:(unsigned)arg4 ;
-(BOOL)sendAudioData:(id)arg1 toPeers:(id)arg2 withDataMode:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)sendDataToAllPeers:(id)arg1 withDataMode:(unsigned)arg2 error:(id*)arg3 ;
-(void)setDataReceiveHandler:(id)arg1 withContext:(void*)arg2 ;
-(void)timeoutConnectToPeer:(id)arg1 ;
-(void)connectToPeer:(id)arg1 withTimeout:(double)arg2 ;
-(void)cancelConnectToPeer:(id)arg1 ;
-(BOOL)acceptConnectionFromPeer:(id)arg1 error:(id*)arg2 ;
-(void)denyConnectionFromPeer:(id)arg1 ;
-(void)disconnectPeerFromAllPeers:(id)arg1 ;
-(id)peersWithConnectionState:(unsigned)arg1 ;
-(void)stopOldService;
-(BOOL)isPeerBusy:(id)arg1 ;
-(void)setDisconnectTimeout:(double)arg1 ;
-(double)disconnectTimeout;
-(void)didFindService:(const char*)arg1 fromIF:(const char*)arg2 withError:(int)arg3 moreComing:(BOOL)arg4 ;
-(void)didRemoveService:(const char*)arg1 fromIF:(const char*)arg2 withError:(int)arg3 moreComing:(BOOL)arg4 ;
-(void)didLookupHostname:(DNSServiceRef_tRef)arg1 forPeer:(id)arg2 hostName:(const char*)arg3 address:(const sockaddr_in*)arg4 interface:(unsigned)arg5 withError:(int)arg6 moreComing:(BOOL)arg7 ;
-(void)didResolveService:(DNSServiceRef_tRef)arg1 forPeer:(id)arg2 hostName:(const char*)arg3 port:(unsigned short)arg4 interface:(unsigned)arg5 txtLen:(unsigned short)arg6 txtRecord:(const void*)arg7 withError:(int)arg8 moreComing:(BOOL)arg9 ;
-(id)voiceChatSessionListener;
-(unsigned long long)maxPeers;
-(void)setMaxPeers:(unsigned long long)arg1 ;
-(OpaqueGCKSessionRef)sessionRef;
-(void)setSessionRef:(OpaqueGCKSessionRef)arg1 ;
-(OpaqueAGPSessionRef)agpSessionRef;
-(void)setAgpSessionRef:(OpaqueAGPSessionRef)arg1 ;
@end

