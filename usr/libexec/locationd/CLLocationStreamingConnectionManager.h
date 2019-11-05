/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:43 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocationSupport/CLIntersiloService.h>
#import <locationd/IDSServiceDelegate.h>
#import <locationd/CLLocationStreamingConnectionManagerServiceProtocol.h>

@class IDSService, NSMutableDictionary, NSMutableSet, NSString;

@interface CLLocationStreamingConnectionManager : CLIntersiloService <IDSServiceDelegate, CLLocationStreamingConnectionManagerServiceProtocol> {

	BOOL _pairIsNearby;
	IDSService* _service;
	NSMutableDictionary* _unacknowledgedMessages;
	NSMutableSet* _clients;

}

@property (nonatomic,retain) IDSService * service;                                      //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unacknowledgedMessages;              //@synthesize unacknowledgedMessages=_unacknowledgedMessages - In the implementation block
@property (nonatomic,retain) NSMutableSet * clients;                                    //@synthesize clients=_clients - In the implementation block
@property (assign,nonatomic) BOOL pairIsNearby;                                         //@synthesize pairIsNearby=_pairIsNearby - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)sendMessage:(id)arg1 ;
-(IDSService *)service;
-(void)setClients:(NSMutableSet *)arg1 ;
-(NSMutableSet *)clients;
-(void)setService:(IDSService *)arg1 ;
-(void)beginService;
-(void)endService;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)addClient:(R)arg1 :(id)arg2 ;
-(void)retireClient:(R)arg1 :(id)arg2 ;
-(void)setUnacknowledgedMessages:(NSMutableDictionary *)arg1 ;
-(void)updateNearbyStatusWithDevices:(id)arg1 ;
-(void)withClients:(/*^block*/id)arg1 ;
-(BOOL)isRemoteWatchStreamingCompatible;
-(NSMutableDictionary *)unacknowledgedMessages;
-(BOOL)pairIsNearby;
-(void)setPairIsNearby:(BOOL)arg1 ;
@end

