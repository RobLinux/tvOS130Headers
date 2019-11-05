/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class CUMessageSession, TVLTimeSync, AVAudioEngine, AVAudioPlayerNode, NSString, NSObject, NSDate;

@interface TVLAudioLatencyEstimator : NSObject {

	BOOL _didMissDeadline;
	unsigned long long _role;
	/*^block*/id _progressEventHandler;
	/*^block*/id _completion;
	CUMessageSession* _session;
	TVLTimeSync* _timeSync;
	AVAudioEngine* _engine;
	AVAudioPlayerNode* _player;
	AVAudioPlayerNode* _completionPlayer;
	NSString* _toneIdentifier;
	NSObject*<OS_dispatch_source> _timer;
	NSDate* _sessionStartDate;
	NSString* _remoteDeviceType;
	NSString* _remoteDeviceBuild;
	/*^block*/id _internalProgressEventHandler;

}

@property (nonatomic,copy) id completion;                                       //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) CUMessageSession * session;                        //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) TVLTimeSync * timeSync;                            //@synthesize timeSync=_timeSync - In the implementation block
@property (nonatomic,retain) AVAudioEngine * engine;                            //@synthesize engine=_engine - In the implementation block
@property (nonatomic,retain) AVAudioPlayerNode * player;                        //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVAudioPlayerNode * completionPlayer;              //@synthesize completionPlayer=_completionPlayer - In the implementation block
@property (nonatomic,copy) NSString * toneIdentifier;                           //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;               //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSDate * sessionStartDate;                         //@synthesize sessionStartDate=_sessionStartDate - In the implementation block
@property (nonatomic,copy) NSString * remoteDeviceType;                         //@synthesize remoteDeviceType=_remoteDeviceType - In the implementation block
@property (nonatomic,copy) NSString * remoteDeviceBuild;                        //@synthesize remoteDeviceBuild=_remoteDeviceBuild - In the implementation block
@property (assign,nonatomic) BOOL didMissDeadline;                              //@synthesize didMissDeadline=_didMissDeadline - In the implementation block
@property (nonatomic,copy) id internalProgressEventHandler;                     //@synthesize internalProgressEventHandler=_internalProgressEventHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long role;                         //@synthesize role=_role - In the implementation block
@property (nonatomic,copy) id progressEventHandler;                             //@synthesize progressEventHandler=_progressEventHandler - In the implementation block
-(void)invalidate;
-(unsigned long long)role;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(CUMessageSession *)session;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setSession:(CUMessageSession *)arg1 ;
-(AVAudioEngine *)engine;
-(void)activate;
-(void)_tearDown;
-(NSObject*<OS_dispatch_source>)timer;
-(AVAudioPlayerNode *)player;
-(void)setPlayer:(AVAudioPlayerNode *)arg1 ;
-(NSString *)toneIdentifier;
-(void)setToneIdentifier:(NSString *)arg1 ;
-(void)_invalidateWithError:(id)arg1 ;
-(void)setEngine:(AVAudioEngine *)arg1 ;
-(NSDate *)sessionStartDate;
-(void)setSessionStartDate:(NSDate *)arg1 ;
-(id)initWithMessageSession:(id)arg1 ;
-(void)setProgressEventHandler:(id)arg1 ;
-(void)_initWithCUMessageSession:(id)arg1 ;
-(void)_handleAudioLatencyEstimationNotification:(id)arg1 withResponse:(/*^block*/id)arg2 ;
-(void)setRemoteDeviceType:(NSString *)arg1 ;
-(void)setRemoteDeviceBuild:(NSString *)arg1 ;
-(void)_estimateAudioLatencyWithToneIdentifier:(id)arg1 withResponse:(/*^block*/id)arg2 ;
-(void)_respondAndInvalidateWithError:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)startEstimationProcessWithResponse:(/*^block*/id)arg1 ;
-(void)_postProgressEvent:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(void)_requestSynchronizeClocksWithOptions:(id)arg1 ;
-(NSString *)remoteDeviceType;
-(NSString *)remoteDeviceBuild;
-(void)setTimeSync:(TVLTimeSync *)arg1 ;
-(void)_finalizeSynchronizationWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendMessage:(id)arg1 withResponse:(/*^block*/id)arg2 ;
-(void)_handleRemotePTPLockedNotification;
-(void)_requestMeasureAudioOffsetWithCompletion:(/*^block*/id)arg1 ;
-(void)setCompletionPlayer:(AVAudioPlayerNode *)arg1 ;
-(AVAudioPlayerNode *)completionPlayer;
-(TVLTimeSync *)timeSync;
-(void)setDidMissDeadline:(BOOL)arg1 ;
-(void)_playCompletionTone:(id)arg1 ;
-(id)progressEventHandler;
-(BOOL)didMissDeadline;
-(id)internalProgressEventHandler;
-(void)setInternalProgressEventHandler:(id)arg1 ;
@end

