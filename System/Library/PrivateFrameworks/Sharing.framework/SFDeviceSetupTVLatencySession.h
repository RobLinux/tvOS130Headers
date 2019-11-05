/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SFSession, TVLAudioLatencyEstimator, NSObject, SFDevice;

@interface SFDeviceSetupTVLatencySession : NSObject {

	BOOL _activateCalled;
	int _finishState;
	BOOL _invalidateCalled;
	int _pairSetupState;
	int _pairVerifyState;
	BOOL _sessionSecured;
	unsigned long long _startTicks;
	SFSession* _sfSession;
	int _sfSessionState;
	TVLAudioLatencyEstimator* _tvLatencyEstimator;
	int _tvLatencySetupState;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;
	/*^block*/id _progressHandler;
	/*^block*/id _promptForPINHandler;
	unsigned long long _triggerMs;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                    //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (assign,nonatomic) unsigned long long triggerMs;                            //@synthesize triggerMs=_triggerMs - In the implementation block
-(id)init;
-(void)invalidate;
-(void)_cleanup;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_reportError:(id)arg1 ;
-(void)_run;
-(void)pairSetupTryPIN:(id)arg1 ;
-(SFDevice *)peerDevice;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(int)_runFinish;
-(int)_runSFSessionStart;
-(unsigned long long)triggerMs;
-(void)setTriggerMs:(unsigned long long)arg1 ;
-(int)_runPairSetup;
-(int)_runTVLatencySetup;
-(void)_runTVLatencySetupRequest;
-(void)_runTVLatencySetupEstimate;
-(void)_runTVLatencySetupProgressEvent:(unsigned long long)arg1 info:(id)arg2 ;
-(void)_handleSetupActionRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_runSFSessionActivated;
-(int)_runPairVerify:(BOOL)arg1 ;
-(void)tryAgain;
@end

