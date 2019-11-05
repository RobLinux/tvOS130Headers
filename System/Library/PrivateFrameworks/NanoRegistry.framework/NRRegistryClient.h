/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NRRegistry.h>

@protocol NRNSXPCConnectionProtocol;
@class NSMutableDictionary, NSMutableArray;

@interface NRRegistryClient : NRRegistry {

	NSMutableDictionary* _diffIndexObservers;
	BOOL _optimizeGetState;
	BOOL _outstandingRegistryQuery;
	int _devicesUpdateCounterNotifyToken_dispatch;
	int _devicesUpdateCounterNotifyToken_check;
	id<NRNSXPCConnectionProtocol> _connection;
	unsigned long long _tokenValue;
	unsigned long long _lastDevicesUpdateCounterNotifyTokenValue;
	unsigned long long _backoffDuration;
	NSMutableArray* _registryQueryCompletionBlockEntries;

}

@property (nonatomic,retain) id<NRNSXPCConnectionProtocol> connection;                                 //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int devicesUpdateCounterNotifyToken_dispatch;                             //@synthesize devicesUpdateCounterNotifyToken_dispatch=_devicesUpdateCounterNotifyToken_dispatch - In the implementation block
@property (assign,nonatomic) int devicesUpdateCounterNotifyToken_check;                                //@synthesize devicesUpdateCounterNotifyToken_check=_devicesUpdateCounterNotifyToken_check - In the implementation block
@property (assign,nonatomic) unsigned long long lastDevicesUpdateCounterNotifyTokenValue;              //@synthesize lastDevicesUpdateCounterNotifyTokenValue=_lastDevicesUpdateCounterNotifyTokenValue - In the implementation block
@property (assign,nonatomic) unsigned long long tokenValue;                                            //@synthesize tokenValue=_tokenValue - In the implementation block
@property (assign,nonatomic) BOOL optimizeGetState;                                                    //@synthesize optimizeGetState=_optimizeGetState - In the implementation block
@property (assign,nonatomic) BOOL outstandingRegistryQuery;                                            //@synthesize outstandingRegistryQuery=_outstandingRegistryQuery - In the implementation block
@property (assign,nonatomic) unsigned long long backoffDuration;                                       //@synthesize backoffDuration=_backoffDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * registryQueryCompletionBlockEntries;                     //@synthesize registryQueryCompletionBlockEntries=_registryQueryCompletionBlockEntries - In the implementation block
@property (nonatomic,readonly) unsigned long long devicesUpdateCounter; 
@property (nonatomic,retain,readonly) id<NRNSXPCConnectionProtocol> rawConnection; 
+(Class)proxyClass;
+(unsigned long long)updateCounterFromToken:(unsigned long long)arg1 ;
+(Class)xpcConnectionClass;
-(void)invalidate;
-(void)setConnection:(id<NRNSXPCConnectionProtocol>)arg1 ;
-(id<NRNSXPCConnectionProtocol>)connection;
-(id)initWithParameters:(id)arg1 ;
-(void)setCollection:(id)arg1 ;
-(void)_connectToDaemon;
-(void)grabRegistryWithReadBlockAsync:(/*^block*/id)arg1 ;
-(void)grabRegistryWithWriteBlockAsync:(/*^block*/id)arg1 ;
-(void)syncGrabRegistryWithReadBlock:(/*^block*/id)arg1 ;
-(void)_queryDataAsyncIfNeededWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)tokenValue;
-(unsigned long long)_getDevicesUpdateCounterNotifyTokenValue;
-(void)grabRegistryWithReadBlock:(/*^block*/id)arg1 ;
-(id<NRNSXPCConnectionProtocol>)rawConnection;
-(BOOL)_shouldWaitForData;
-(void)_grabRegistryWithReadBlock:(/*^block*/id)arg1 ;
-(void)_grabRegistryWithWriteBlockAsync:(/*^block*/id)arg1 ;
-(unsigned long long)devicesUpdateCounter;
-(void)_queryDataAsyncForce:(BOOL)arg1 ifNeededWithBlock:(/*^block*/id)arg2 ;
-(void)_addQueryCompletionBlockEntry:(id)arg1 ;
-(void)_fireQueryCompletionBlocksToUpdateCounter:(unsigned long long)arg1 ;
-(void)_fireAllQueryCompletionBlocks;
-(void)_queryDaemonWithStartingTokenValue:(unsigned long long)arg1 currentTokenValue:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_wipeRegistryWith:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)setTokenValue:(unsigned long long)arg1 ;
-(void)_notifyDiffIndexObserversWithDiff:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3 index:(unsigned long long)arg4 ;
-(BOOL)daemonIdle;
-(id)addDiffIndexObserverWithWriteBlock:(/*^block*/id)arg1 ;
-(void)removeDiffIndexObserver:(id)arg1 ;
-(unsigned long long)lastDevicesUpdateCounterNotifyTokenValue;
-(void)setLastDevicesUpdateCounterNotifyTokenValue:(unsigned long long)arg1 ;
-(int)devicesUpdateCounterNotifyToken_dispatch;
-(void)setDevicesUpdateCounterNotifyToken_dispatch:(int)arg1 ;
-(int)devicesUpdateCounterNotifyToken_check;
-(void)setDevicesUpdateCounterNotifyToken_check:(int)arg1 ;
-(BOOL)optimizeGetState;
-(void)setOptimizeGetState:(BOOL)arg1 ;
-(BOOL)outstandingRegistryQuery;
-(void)setOutstandingRegistryQuery:(BOOL)arg1 ;
-(unsigned long long)backoffDuration;
-(void)setBackoffDuration:(unsigned long long)arg1 ;
-(NSMutableArray *)registryQueryCompletionBlockEntries;
-(void)setRegistryQueryCompletionBlockEntries:(NSMutableArray *)arg1 ;
@end

