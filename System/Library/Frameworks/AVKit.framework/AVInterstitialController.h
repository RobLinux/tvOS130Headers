/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject, AVInterstitialControllerDelegateManager;
@class AVPlayer, AVTimeRangeCollection, AVObservationController, AVTimeRange;

@interface AVInterstitialController : NSObject {

	id<NSObject> _playerItemTimeJumpedObserver;
	AVPlayer* _player;
	id<AVInterstitialControllerDelegateManager> _delegateManager;
	AVTimeRangeCollection* _interstitialTimeRangeCollection;
	/*^block*/id _didEnterInterstitialTimeRangeBlock;
	/*^block*/id _didLeaveInterstitialTimeRangeBlock;
	/*^block*/id _skipInterstitialTimeRangeBlock;
	AVObservationController* _kvo;
	AVObservationController* _kvoPlayerItem;
	AVTimeRange* _interstitialTimeRangeInProgress;
	id _interstitialBoundaryTimeObserver;

}

@property (nonatomic,retain) AVObservationController * kvo;                                            //@synthesize kvo=_kvo - In the implementation block
@property (nonatomic,retain) AVObservationController * kvoPlayerItem;                                  //@synthesize kvoPlayerItem=_kvoPlayerItem - In the implementation block
@property (nonatomic,retain) AVTimeRange * interstitialTimeRangeInProgress;                            //@synthesize interstitialTimeRangeInProgress=_interstitialTimeRangeInProgress - In the implementation block
@property (nonatomic,retain) id interstitialBoundaryTimeObserver;                                      //@synthesize interstitialBoundaryTimeObserver=_interstitialBoundaryTimeObserver - In the implementation block
@property (nonatomic,retain) AVTimeRangeCollection * interstitialTimeRangeCollection;                  //@synthesize interstitialTimeRangeCollection=_interstitialTimeRangeCollection - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                        //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) id<AVInterstitialControllerDelegateManager> delegateManager;              //@synthesize delegateManager=_delegateManager - In the implementation block
@property (nonatomic,readonly) AVTimeRange * currentInterstitialTimeRange; 
@property (nonatomic,readonly) AVTimeRange * previousInterstitialTimeRange; 
@property (nonatomic,readonly) double currentDisplayTime; 
@property (nonatomic,readonly) double timeRemainingInCurrentInterstitial; 
@property (nonatomic,copy) id didEnterInterstitialTimeRangeBlock;                                      //@synthesize didEnterInterstitialTimeRangeBlock=_didEnterInterstitialTimeRangeBlock - In the implementation block
@property (nonatomic,copy) id didLeaveInterstitialTimeRangeBlock;                                      //@synthesize didLeaveInterstitialTimeRangeBlock=_didLeaveInterstitialTimeRangeBlock - In the implementation block
@property (nonatomic,copy) id skipInterstitialTimeRangeBlock;                                          //@synthesize skipInterstitialTimeRangeBlock=_skipInterstitialTimeRangeBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)currentItem;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(double)currentTime;
-(double)timeFromDisplayTime:(double)arg1 ;
-(double)displayTimeFromTime:(double)arg1 ;
-(double)currentDisplayTime;
-(double)timeRemainingInCurrentInterstitial;
-(void)_updateInterstitialTimeRangeCollection;
-(void)_sendInterstitialBoundaryNotificationsForTime:(double)arg1 ;
-(void)sendInterstitialBoundaryNotificationsForTimeJumpIfNeeded;
-(void)sendPendingInterstitialBoundaryNotificationIfNeeded;
-(void)_startObservingInterstitialTimeRanges;
-(void)_stopObservingInterstitialTimeRanges;
-(AVTimeRange *)currentInterstitialTimeRange;
-(AVTimeRange *)previousInterstitialTimeRange;
-(BOOL)_shouldSkipInterstitialTimeRange:(id)arg1 ;
-(void)didBeginOrResumePlayback;
-(void)skipInterstitialTimeRange:(id)arg1 ;
-(void)willPresentInterstitialTimeRange:(id)arg1 ;
-(void)didPresentInterstitialTimeRange:(id)arg1 ;
-(id<AVInterstitialControllerDelegateManager>)delegateManager;
-(void)setDelegateManager:(id<AVInterstitialControllerDelegateManager>)arg1 ;
-(AVTimeRangeCollection *)interstitialTimeRangeCollection;
-(void)setInterstitialTimeRangeCollection:(AVTimeRangeCollection *)arg1 ;
-(id)didEnterInterstitialTimeRangeBlock;
-(void)setDidEnterInterstitialTimeRangeBlock:(id)arg1 ;
-(id)didLeaveInterstitialTimeRangeBlock;
-(void)setDidLeaveInterstitialTimeRangeBlock:(id)arg1 ;
-(id)skipInterstitialTimeRangeBlock;
-(void)setSkipInterstitialTimeRangeBlock:(id)arg1 ;
-(AVObservationController *)kvo;
-(void)setKvo:(AVObservationController *)arg1 ;
-(AVObservationController *)kvoPlayerItem;
-(void)setKvoPlayerItem:(AVObservationController *)arg1 ;
-(AVTimeRange *)interstitialTimeRangeInProgress;
-(void)setInterstitialTimeRangeInProgress:(AVTimeRange *)arg1 ;
-(id)interstitialBoundaryTimeObserver;
-(void)setInterstitialBoundaryTimeObserver:(id)arg1 ;
@end

