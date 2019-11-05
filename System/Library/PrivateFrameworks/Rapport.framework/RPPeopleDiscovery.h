/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Rapport/Rapport-Structs.h>
#import <Rapport/NSSecureCoding.h>
#import <Rapport/RPPeopleXPCClientInterface.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSArray;

@interface RPPeopleDiscovery : NSObject <NSSecureCoding, RPPeopleXPCClientInterface> {

	BOOL _activateCalled;
	NSMutableDictionary* _discoveredPeople;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_source> _retryTimer;
	NSXPCConnection* _xpcCnx;
	BOOL _targetUserSession;
	unsigned _changeFlags;
	unsigned _discoveryFlags;
	int _discoveryMode;
	int _peopleDensity;
	unsigned _statusFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _peopleDensityChangedHandler;
	/*^block*/id _personFoundHandler;
	/*^block*/id _personLostHandler;
	/*^block*/id _personChangedHandler;
	/*^block*/id _statusChangedHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) BOOL targetUserSession;                                  //@synthesize targetUserSession=_targetUserSession - In the implementation block
@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (assign,nonatomic) unsigned discoveryFlags;                                 //@synthesize discoveryFlags=_discoveryFlags - In the implementation block
@property (assign,nonatomic) int discoveryMode;                                       //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * discoveredPeople; 
@property (nonatomic,readonly) int peopleDensity;                                     //@synthesize peopleDensity=_peopleDensity - In the implementation block
@property (nonatomic,copy) id peopleDensityChangedHandler;                            //@synthesize peopleDensityChangedHandler=_peopleDensityChangedHandler - In the implementation block
@property (nonatomic,copy) id personFoundHandler;                                     //@synthesize personFoundHandler=_personFoundHandler - In the implementation block
@property (nonatomic,copy) id personLostHandler;                                      //@synthesize personLostHandler=_personLostHandler - In the implementation block
@property (nonatomic,copy) id personChangedHandler;                                   //@synthesize personChangedHandler=_personChangedHandler - In the implementation block
@property (nonatomic,copy) id statusChangedHandler;                                   //@synthesize statusChangedHandler=_statusChangedHandler - In the implementation block
@property (nonatomic,readonly) unsigned statusFlags;                                  //@synthesize statusFlags=_statusFlags - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)_interrupted;
-(int)discoveryMode;
-(void)setDiscoveryMode:(int)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(unsigned)statusFlags;
-(void)setChangeFlags:(unsigned)arg1 ;
-(unsigned)changeFlags;
-(id)descriptionWithLevel:(int)arg1 ;
-(BOOL)_ensureXPCStarted;
-(unsigned)discoveryFlags;
-(void)setDiscoveryFlags:(unsigned)arg1 ;
-(BOOL)targetUserSession;
-(void)setTargetUserSession:(BOOL)arg1 ;
-(id)statusChangedHandler;
-(void)setStatusChangedHandler:(id)arg1 ;
-(void)_invokeBlockActivateSafe:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(void)_scheduleRetry;
-(void)_updatePeopleDensity:(unsigned long long)arg1 ;
-(void)xpcPeopleStatusChanged:(unsigned)arg1 ;
-(void)xpcPersonFound:(id)arg1 ;
-(void)xpcPersonLost:(id)arg1 ;
-(void)xpcPersonChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)_lostAllPeople;
-(NSArray *)discoveredPeople;
-(void)addAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)peopleDensity;
-(id)peopleDensityChangedHandler;
-(void)setPeopleDensityChangedHandler:(id)arg1 ;
-(id)personFoundHandler;
-(void)setPersonFoundHandler:(id)arg1 ;
-(id)personLostHandler;
-(void)setPersonLostHandler:(id)arg1 ;
-(id)personChangedHandler;
-(void)setPersonChangedHandler:(id)arg1 ;
@end

