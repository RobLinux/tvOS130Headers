/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDAutoUnlockPairingSession.h>

@class NSData, SDUnlockSetupRequest;

@interface SDAutoUnlockPairingKeySession : SDAutoUnlockPairingSession {

	BOOL _waitingForUnlock;
	BOOL _waitingForLTK;
	BOOL _requestedLTKForRemote;
	BOOL _companionViewNotSyncing;
	BOOL _companionNeedsUnlock;
	BOOL _companionCurrentlySyncing;
	BOOL _canceled;
	NSData* _requestData;
	SDUnlockSetupRequest* _request;
	NSData* _longTermKey;

}

@property (assign) BOOL waitingForUnlock;                       //@synthesize waitingForUnlock=_waitingForUnlock - In the implementation block
@property (assign) BOOL waitingForLTK;                          //@synthesize waitingForLTK=_waitingForLTK - In the implementation block
@property (assign) BOOL requestedLTKForRemote;                  //@synthesize requestedLTKForRemote=_requestedLTKForRemote - In the implementation block
@property (assign) BOOL companionViewNotSyncing;                //@synthesize companionViewNotSyncing=_companionViewNotSyncing - In the implementation block
@property (assign) BOOL companionNeedsUnlock;                   //@synthesize companionNeedsUnlock=_companionNeedsUnlock - In the implementation block
@property (assign) BOOL companionCurrentlySyncing;              //@synthesize companionCurrentlySyncing=_companionCurrentlySyncing - In the implementation block
@property (assign) BOOL canceled;                               //@synthesize canceled=_canceled - In the implementation block
@property (retain) SDUnlockSetupRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSData * longTermKey;              //@synthesize longTermKey=_longTermKey - In the implementation block
@property (nonatomic,retain) NSData * requestData;              //@synthesize requestData=_requestData - In the implementation block
-(void)invalidate;
-(SDUnlockSetupRequest *)request;
-(void)setRequest:(SDUnlockSetupRequest *)arg1 ;
-(void)cancel;
-(void)start;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(void)setRequestData:(NSData *)arg1 ;
-(NSData *)requestData;
-(void)addObservers;
-(void)setLongTermKey:(NSData *)arg1 ;
-(NSData *)longTermKey;
-(void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4 ;
-(id)initWithDevice:(id)arg1 sessionID:(id)arg2 ;
-(void)notifyDelegateWithError:(id)arg1 ;
-(void)keyBagLockStateChange:(id)arg1 ;
-(void)onqueue_start;
-(void)handleSetupRequest;
-(void)onqueue_cancel;
-(BOOL)waitingForLTK;
-(void)sendSetupSessionCreatedWithLocalKey:(id)arg1 stepData:(id)arg2 error:(id)arg3 failureReason:(unsigned)arg4 ltkSyncing:(id)arg5 ;
-(void)watchLTKsChanged:(id)arg1 ;
-(void)setWaitingForLTK:(BOOL)arg1 ;
-(void)setCompanionViewNotSyncing:(BOOL)arg1 ;
-(void)setCompanionNeedsUnlock:(BOOL)arg1 ;
-(void)setCompanionCurrentlySyncing:(BOOL)arg1 ;
-(BOOL)ltkHashMatches;
-(BOOL)companionViewNotSyncing;
-(BOOL)companionNeedsUnlock;
-(BOOL)companionCurrentlySyncing;
-(void)sendSetupCreateEscrowRecordStepData:(id)arg1 error:(id)arg2 ;
-(void)handleCreateEscrowSecret:(id)arg1 ;
-(BOOL)canCreatePairing;
-(void)handleTimerFired;
-(void)sendKeyDeviceLocked;
-(BOOL)waitingForUnlock;
-(void)setWaitingForUnlock:(BOOL)arg1 ;
-(BOOL)requestedLTKForRemote;
-(void)setRequestedLTKForRemote:(BOOL)arg1 ;
@end

