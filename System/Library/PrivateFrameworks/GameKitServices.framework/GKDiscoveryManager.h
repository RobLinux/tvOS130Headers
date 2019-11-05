/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GameKitServices/GameKitServices-Structs.h>
@class NSString, NSMutableDictionary, GKDiscoveryBonjour, NSObject;

@interface GKDiscoveryManager : NSObject {

	/*^block*/id _playerFoundHandler;
	/*^block*/id _playerLostHandler;
	/*^block*/id _receiveDataHandler;
	NSString* _playerID;
	NSString* _deviceID;
	NSMutableDictionary* _peers;
	GKDiscoveryBonjour* _bonjour;
	NSObject*<OS_dispatch_queue> _peersQueue;

}

@property (nonatomic,copy) NSString * playerID;                         //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,copy) NSString * deviceID;                         //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peers;               //@synthesize peers=_peers - In the implementation block
@property (nonatomic,retain) GKDiscoveryBonjour * bonjour;              //@synthesize bonjour=_bonjour - In the implementation block
@property (nonatomic,copy) id playerFoundHandler;                       //@synthesize playerFoundHandler=_playerFoundHandler - In the implementation block
@property (nonatomic,copy) id playerLostHandler;                        //@synthesize playerLostHandler=_playerLostHandler - In the implementation block
@property (nonatomic,copy) id receiveDataHandler;                       //@synthesize receiveDataHandler=_receiveDataHandler - In the implementation block
+(id)parseDeviceIDFromServiceName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSMutableDictionary *)peers;
-(void)stopAdvertising;
-(void)setPeers:(NSMutableDictionary *)arg1 ;
-(NSString *)playerID;
-(void)setPlayerID:(NSString *)arg1 ;
-(void)stopBrowsing;
-(void)setReceiveDataHandler:(id)arg1 ;
-(id)initWithDomain:(id)arg1 type:(id)arg2 ;
-(id)playerFoundHandler;
-(void)setPlayerFoundHandler:(id)arg1 ;
-(id)playerLostHandler;
-(void)setPlayerLostHandler:(id)arg1 ;
-(id)receiveDataHandler;
-(id)startAdvertisingLocalPlayer:(id)arg1 discoveryInfo:(id)arg2 ;
-(void)startBrowsingLocalPlayer:(id)arg1 ;
-(void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)forgetParticipant:(id)arg1 deviceID:(id)arg2 ;
-(id)generateDeviceID;
-(void)processEvent:(int)arg1 forPeer:(id)arg2 withUserInfo:(id)arg3 ;
-(void)didLosePeer:(id)arg1 ;
-(id)localServiceName;
-(void)passDataToGKLayer:(id)arg1 fromPeer:(id)arg2 ;
-(void)resolveForPeer:(id)arg1 ;
-(void)connectToSockAddr:(sockaddr*)arg1 port:(unsigned short)arg2 forPeer:(id)arg3 ;
-(id)serviceNameforDeviceID:(id)arg1 playerID:(id)arg2 ;
-(id)peersList;
-(void)cleanUpPeersForBrowse;
-(void)addInterface:(unsigned)arg1 withDiscoveryInfo:(id)arg2 forPeerWithServiceName:(id)arg3 ;
-(void)removeInterface:(unsigned)arg1 forPeerWithServiceName:(id)arg2 ;
-(GKDiscoveryBonjour *)bonjour;
-(void)setBonjour:(GKDiscoveryBonjour *)arg1 ;
@end

