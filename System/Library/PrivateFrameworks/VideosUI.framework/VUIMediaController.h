/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <VideosUI/TVMediaController.h>

@protocol TVPAVFPlayback, TVMediaControllerDelegate;
@class TVMediaInfo, UIImage, NSObject, AVPlayerViewController, NSString, _TVImageView, TVImageProxy, UIViewController, NSDate, NSTimer, TVPStateMachine, TVPPlaylist, TVPVideoView;

@interface VUIMediaController : UIViewController <TVMediaController> {

	BOOL _allowsSkipping;
	BOOL _shouldZoomWhenTransitioningToBackground;
	BOOL _playbackEnabled;
	BOOL _stopPlayerWhenViewDisappears;
	BOOL _clearPreviousImageBeforeLoading;
	BOOL _popWhenPlayerStops;
	BOOL _restoringAVPlayerController;
	BOOL _stopWhenAnotherMediaControllerStarts;
	BOOL _playerReadyToBePlayed;
	BOOL _shouldAnimateOverlayView;
	BOOL _doesDelegateRespondToShowStill;
	BOOL _doesDelegateRespondToStateChange;
	BOOL _automaticPlaybackStart;
	BOOL _automaticPlaybackStop;
	BOOL _shouldPlayAfterAppBecomesActive;
	BOOL _didWeCreatePlayer;
	BOOL _observingPictureInPictureActive;
	NSObject*<TVPAVFPlayback> _player;
	AVPlayerViewController* _avPlayerViewController;
	TVMediaInfo* _mediaInfo;
	id<TVMediaControllerDelegate> _delegate;
	long long _state;
	NSString* _name;
	_TVImageView* _proxyImageView;
	TVImageProxy* _currentImageProxy;
	UIViewController* _playbackContainerController;
	NSDate* _playbackLoadingStartDate;
	NSTimer* _playbackLoadingTimer;
	TVPStateMachine* _stateMachine;
	TVPPlaylist* _pendingPlaylist;
	TVImageProxy* _pendingImageProxy;
	unsigned long long _imageAnimationOptions;
	double _imageAnimationDuration;
	double _imageTransitionInterval;
	double _overlayViewDisplayDuration;
	long long _playbackStopReason;
	TVPVideoView* _secondaryVideoView;
	NSTimer* _pauseStateTimeoutTimer;
	unsigned long long _vpafPlaybackStartReason;
	unsigned long long _vpafPlaybackStopReason;
	NSString* _titleForLogging;
	unsigned long long _deactivationReasons;

}

@property (nonatomic,retain) _TVImageView * proxyImageView;                                                                            //@synthesize proxyImageView=_proxyImageView - In the implementation block
@property (nonatomic,retain) TVImageProxy * currentImageProxy;                                                                         //@synthesize currentImageProxy=_currentImageProxy - In the implementation block
@property (nonatomic,retain) UIViewController * playbackContainerController;                                                           //@synthesize playbackContainerController=_playbackContainerController - In the implementation block
@property (nonatomic,retain) NSDate * playbackLoadingStartDate;                                                                        //@synthesize playbackLoadingStartDate=_playbackLoadingStartDate - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * playbackLoadingTimer;                                                                    //@synthesize playbackLoadingTimer=_playbackLoadingTimer - In the implementation block
@property (nonatomic,retain) TVPStateMachine * stateMachine;                                                                           //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) TVPPlaylist * pendingPlaylist;                                                                            //@synthesize pendingPlaylist=_pendingPlaylist - In the implementation block
@property (nonatomic,retain) TVImageProxy * pendingImageProxy;                                                                         //@synthesize pendingImageProxy=_pendingImageProxy - In the implementation block
@property (assign,nonatomic) long long state;                                                                                          //@synthesize state=_state - In the implementation block
@property (assign,getter=isPlayerReadyToBePlayed,nonatomic) BOOL playerReadyToBePlayed;                                                //@synthesize playerReadyToBePlayed=_playerReadyToBePlayed - In the implementation block
@property (assign,nonatomic) unsigned long long imageAnimationOptions;                                                                 //@synthesize imageAnimationOptions=_imageAnimationOptions - In the implementation block
@property (assign,nonatomic) double imageAnimationDuration;                                                                            //@synthesize imageAnimationDuration=_imageAnimationDuration - In the implementation block
@property (assign,nonatomic) double imageTransitionInterval;                                                                           //@synthesize imageTransitionInterval=_imageTransitionInterval - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateOverlayView;                                                                            //@synthesize shouldAnimateOverlayView=_shouldAnimateOverlayView - In the implementation block
@property (assign,nonatomic) double overlayViewDisplayDuration;                                                                        //@synthesize overlayViewDisplayDuration=_overlayViewDisplayDuration - In the implementation block
@property (assign,nonatomic) BOOL doesDelegateRespondToShowStill;                                                                      //@synthesize doesDelegateRespondToShowStill=_doesDelegateRespondToShowStill - In the implementation block
@property (assign,nonatomic) BOOL doesDelegateRespondToStateChange;                                                                    //@synthesize doesDelegateRespondToStateChange=_doesDelegateRespondToStateChange - In the implementation block
@property (assign,nonatomic) long long playbackStopReason;                                                                             //@synthesize playbackStopReason=_playbackStopReason - In the implementation block
@property (nonatomic,retain) TVPVideoView * secondaryVideoView;                                                                        //@synthesize secondaryVideoView=_secondaryVideoView - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * pauseStateTimeoutTimer;                                                                  //@synthesize pauseStateTimeoutTimer=_pauseStateTimeoutTimer - In the implementation block
@property (assign,getter=isAutomaticPlaybackStart,nonatomic) BOOL automaticPlaybackStart;                                              //@synthesize automaticPlaybackStart=_automaticPlaybackStart - In the implementation block
@property (assign,nonatomic) unsigned long long vpafPlaybackStartReason;                                                               //@synthesize vpafPlaybackStartReason=_vpafPlaybackStartReason - In the implementation block
@property (assign,getter=isAutomaticPlaybackStop,nonatomic) BOOL automaticPlaybackStop;                                                //@synthesize automaticPlaybackStop=_automaticPlaybackStop - In the implementation block
@property (assign,nonatomic) unsigned long long vpafPlaybackStopReason;                                                                //@synthesize vpafPlaybackStopReason=_vpafPlaybackStopReason - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayAfterAppBecomesActive;                                                                     //@synthesize shouldPlayAfterAppBecomesActive=_shouldPlayAfterAppBecomesActive - In the implementation block
@property (getter=isBackgrounded,nonatomic,readonly) BOOL backgrounded; 
@property (assign,nonatomic) BOOL didWeCreatePlayer;                                                                                   //@synthesize didWeCreatePlayer=_didWeCreatePlayer - In the implementation block
@property (assign,nonatomic) BOOL observingPictureInPictureActive;                                                                     //@synthesize observingPictureInPictureActive=_observingPictureInPictureActive - In the implementation block
@property (nonatomic,copy) NSString * titleForLogging;                                                                                 //@synthesize titleForLogging=_titleForLogging - In the implementation block
@property (assign,nonatomic) unsigned long long deactivationReasons;                                                                   //@synthesize deactivationReasons=_deactivationReasons - In the implementation block
@property (nonatomic,retain) NSObject*<TVPAVFPlayback> player;                                                                         //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * avPlayerViewController;                                                          //@synthesize avPlayerViewController=_avPlayerViewController - In the implementation block
@property (nonatomic,copy) TVMediaInfo * mediaInfo;                                                                                    //@synthesize mediaInfo=_mediaInfo - In the implementation block
@property (assign,nonatomic,__weak) id<TVMediaControllerDelegate> delegate;                                                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsVideoControls; 
@property (assign,nonatomic) BOOL allowsSkipping;                                                                                      //@synthesize allowsSkipping=_allowsSkipping - In the implementation block
@property (assign,nonatomic) BOOL shouldZoomWhenTransitioningToBackground;                                                             //@synthesize shouldZoomWhenTransitioningToBackground=_shouldZoomWhenTransitioningToBackground - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                                                   //@synthesize name=_name - In the implementation block
@property (assign,getter=isPlaybackEnabled,nonatomic) BOOL playbackEnabled;                                                            //@synthesize playbackEnabled=_playbackEnabled - In the implementation block
@property (assign,getter=shouldStopPlayerWhenViewDisappears,nonatomic) BOOL stopPlayerWhenViewDisappears;                              //@synthesize stopPlayerWhenViewDisappears=_stopPlayerWhenViewDisappears - In the implementation block
@property (assign,nonatomic) BOOL clearPreviousImageBeforeLoading;                                                                     //@synthesize clearPreviousImageBeforeLoading=_clearPreviousImageBeforeLoading - In the implementation block
@property (assign,nonatomic) BOOL popWhenPlayerStops;                                                                                  //@synthesize popWhenPlayerStops=_popWhenPlayerStops - In the implementation block
@property (assign,getter=isRestoringAVPlayerController,nonatomic) BOOL restoringAVPlayerController;                                    //@synthesize restoringAVPlayerController=_restoringAVPlayerController - In the implementation block
@property (assign,getter=shouldStopWhenAnotherMediaControllerStarts,nonatomic) BOOL stopWhenAnotherMediaControllerStarts;              //@synthesize stopWhenAnotherMediaControllerStarts=_stopWhenAnotherMediaControllerStarts - In the implementation block
@property (nonatomic,readonly) UIImage * coverImage; 
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<TVMediaControllerDelegate>)delegate;
-(void)setDelegate:(id<TVMediaControllerDelegate>)arg1 ;
-(id)initWithName:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(BOOL)isBackgrounded;
-(NSObject*<TVPAVFPlayback>)player;
-(void)setPlayer:(NSObject*<TVPAVFPlayback>)arg1 ;
-(void)play;
-(TVPStateMachine *)stateMachine;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(BOOL)_canPause;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)setPlaybackEnabled:(BOOL)arg1 ;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg1 ;
-(unsigned long long)deactivationReasons;
-(void)setDeactivationReasons:(unsigned long long)arg1 ;
-(BOOL)showsVideoControls;
-(void)setShowsVideoControls:(BOOL)arg1 ;
-(UIImage *)coverImage;
-(void)_updateMediaInfo;
-(void)setShouldZoomWhenTransitioningToBackground:(BOOL)arg1 ;
-(void)transitionToForeground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(TVMediaInfo *)mediaInfo;
-(void)setMediaInfo:(TVMediaInfo *)arg1 ;
-(BOOL)isPlaybackEnabled;
-(BOOL)shouldZoomWhenTransitioningToBackground;
-(AVPlayerViewController *)avPlayerViewController;
-(void)_handlePlaybackErrorNotification:(id)arg1 ;
-(void)setAvPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)_registerStateMachineHandlers;
-(BOOL)popWhenPlayerStops;
-(void)setPopWhenPlayerStops:(BOOL)arg1 ;
-(void)setShouldPlayAfterAppBecomesActive:(BOOL)arg1 ;
-(BOOL)shouldPlayAfterAppBecomesActive;
-(void)_unregisterPlayerNotifications;
-(void)_registerPlayerNotifications;
-(BOOL)allowsSkipping;
-(void)setAllowsSkipping:(BOOL)arg1 ;
-(void)setAutomaticPlaybackStart:(BOOL)arg1 ;
-(void)setStopPlayerWhenViewDisappears:(BOOL)arg1 ;
-(void)setAutomaticPlaybackStop:(BOOL)arg1 ;
-(void)setPlaybackStopReason:(long long)arg1 ;
-(void)setRestoringAVPlayerController:(BOOL)arg1 ;
-(void)_registerForApplicationStateNotifications;
-(void)_stateDidChangeFromState:(id)arg1 toState:(id)arg2 onEvent:(id)arg3 context:(id)arg4 userInfo:(id)arg5 ;
-(void)_cleanUpEverything;
-(void)_addProxyImageView;
-(BOOL)shouldStopPlayerWhenViewDisappears;
-(void)_updateAVPlayerViewControllerWithAVPlayerForPlayer:(id)arg1 ;
-(void)_updatePlayerMuteStateWithReason:(id)arg1 ;
-(BOOL)isAutomaticPlaybackStart;
-(void)setVpafPlaybackStartReason:(unsigned long long)arg1 ;
-(BOOL)isAutomaticPlaybackStop;
-(long long)playbackStopReason;
-(void)setVpafPlaybackStopReason:(unsigned long long)arg1 ;
-(void)_setImageProxies:(id)arg1 ;
-(BOOL)doesDelegateRespondToStateChange;
-(void)setDoesDelegateRespondToStateChange:(BOOL)arg1 ;
-(void)setDoesDelegateRespondToShowStill:(BOOL)arg1 ;
-(BOOL)isPlayerReadyToBePlayed;
-(NSTimer *)playbackLoadingTimer;
-(void)setPlaybackLoadingTimer:(NSTimer *)arg1 ;
-(void)setPlaybackLoadingStartDate:(NSDate *)arg1 ;
-(void)_updateCurrentPlaybackViewFrameForPlaybackInBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_handleApplicationWillResignActiveNotification:(id)arg1 ;
-(void)_handleApplicationDidEnterBackgroundNotification:(id)arg1 ;
-(BOOL)_shouldPausePlaybackDueToDeactivationReasons;
-(void)_mediaControllerStartedPlayback:(id)arg1 ;
-(BOOL)observingPictureInPictureActive;
-(void)setObservingPictureInPictureActive:(BOOL)arg1 ;
-(double)overlayViewDisplayDuration;
-(void)_addOverlayViewAnimatedIfNeeded:(BOOL)arg1 dismissAfter:(double)arg2 ;
-(void)_addContentViewIfNeeded;
-(NSString *)titleForLogging;
-(void)setTitleForLogging:(NSString *)arg1 ;
-(BOOL)isRestoringAVPlayerController;
-(void)setPlayerReadyToBePlayed:(BOOL)arg1 ;
-(void)_setPlaylist:(id)arg1 ;
-(TVImageProxy *)currentImageProxy;
-(BOOL)clearPreviousImageBeforeLoading;
-(_TVImageView *)proxyImageView;
-(void)setCurrentImageProxy:(TVImageProxy *)arg1 ;
-(void)setPendingPlaylist:(TVPPlaylist *)arg1 ;
-(void)_cleanUpEverythingPlaybackRelated;
-(void)_removePlaybackViewController;
-(TVPVideoView *)secondaryVideoView;
-(void)setSecondaryVideoView:(TVPVideoView *)arg1 ;
-(void)setPlaybackContainerController:(UIViewController *)arg1 ;
-(BOOL)didWeCreatePlayer;
-(void)_removeOverlayView:(id)arg1 animated:(BOOL)arg2 ;
-(UIViewController *)playbackContainerController;
-(unsigned long long)vpafPlaybackStartReason;
-(BOOL)shouldStopWhenAnotherMediaControllerStarts;
-(BOOL)doesDelegateRespondToShowStill;
-(BOOL)_hasSecondaryView;
-(CGRect)_playbackContainerViewFrame:(BOOL)arg1 hasSecondaryVideoView:(BOOL)arg2 ;
-(CGRect)_secondaryVideoViewFrame:(BOOL)arg1 ;
-(BOOL)_shouldShowSecondaryView;
-(NSTimer *)pauseStateTimeoutTimer;
-(void)setPauseStateTimeoutTimer:(NSTimer *)arg1 ;
-(unsigned long long)vpafPlaybackStopReason;
-(void)setDidWeCreatePlayer:(BOOL)arg1 ;
-(void)_addPlaybackViewControllerForPlayback:(BOOL)arg1 ;
-(void)_delayLoadImage:(id)arg1 ;
-(void)setPendingImageProxy:(TVImageProxy *)arg1 ;
-(TVPPlaylist *)pendingPlaylist;
-(void)_swapActiveMedia:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(TVImageProxy *)pendingImageProxy;
-(BOOL)_shouldIgnorePlaybackStop;
-(NSDate *)playbackLoadingStartDate;
-(void)_removeProxyImageView;
-(void)setClearPreviousImageBeforeLoading:(BOOL)arg1 ;
-(void)setStopWhenAnotherMediaControllerStarts:(BOOL)arg1 ;
-(void)setProxyImageView:(_TVImageView *)arg1 ;
-(unsigned long long)imageAnimationOptions;
-(void)setImageAnimationOptions:(unsigned long long)arg1 ;
-(double)imageAnimationDuration;
-(void)setImageAnimationDuration:(double)arg1 ;
-(double)imageTransitionInterval;
-(void)setImageTransitionInterval:(double)arg1 ;
-(BOOL)shouldAnimateOverlayView;
-(void)setShouldAnimateOverlayView:(BOOL)arg1 ;
-(void)setOverlayViewDisplayDuration:(double)arg1 ;
@end
