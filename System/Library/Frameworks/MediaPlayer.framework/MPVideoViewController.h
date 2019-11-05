/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPViewController.h>
#import <MediaPlayer/MPVideoControllerProtocol.h>
#import <MediaPlayer/MPSwipableViewDelegate.h>

@class UIView, UIColor, _UIHostedWindow, UIImage, MPVideoView, MPVideoBackgroundView, MPSwipableView, UIActivityIndicatorView, MPTVOutWindow, UIAlertController, NSString, MPAVItem, MPAVController;

@interface MPVideoViewController : MPViewController <MPVideoControllerProtocol, MPSwipableViewDelegate> {

	MPVideoBackgroundView* _backgroundView;
	MPSwipableView* _backstopView;
	BOOL _batteryMonitoringWasEnabled;
	unsigned long long _desiredParts;
	unsigned long long _disabledParts;
	unsigned long long _visibleParts;
	unsigned _tvOutEnabled : 1;
	unsigned _allowsTVOutInBackground : 1;
	long long _itemTypeOverride;
	long long _scaleMode;
	long long _scaleModeOverride;
	UIColor* _backstopColor;
	UIActivityIndicatorView* _loadingIndicator;
	MPTVOutWindow* _tvOutWindow;
	unsigned long long _backgroundTaskId;
	long long _artworkImageStyle;
	UIImage* _posterImage;
	unsigned _canAnimateControlsOverlay : 1;
	unsigned _canShowControlsOverlay : 1;
	unsigned _disableControlsAutohide : 1;
	unsigned _playAfterPop : 1;
	unsigned _scheduledLoadingIndicator : 1;
	unsigned _displayPlaybackErrorAlerts : 1;
	unsigned _allowsDetailScrubbing : 1;
	unsigned _attemptAutoPlayWhenControlsHidden : 1;
	unsigned _alwaysAllowHidingControlsOverlay : 1;
	unsigned _hasShownFirstVideoFrame : 1;
	unsigned _allowsWirelessPlayback : 1;
	unsigned _disableAutoRotation : 1;
	unsigned _inlinePlaybackUsesTVOut : 1;
	UIAlertController* _alertController;

}

@property (nonatomic,readonly) BOOL canShowQTAudioOnlyUI; 
@property (nonatomic,readonly) UIView*<MPVideoOverlay> videoOverlayViewIfLoaded; 
@property (assign,nonatomic) BOOL allowsTVOutInBackground; 
@property (getter=isTransitioningToFullscreen,nonatomic,readonly) BOOL transitioningToFullscreen; 
@property (getter=isTransitioningFromFullscreen,nonatomic,readonly) BOOL transitioningFromFullscreen; 
@property (nonatomic,readonly) UIView * artworkImageView; 
@property (nonatomic,readonly) BOOL showArtworkInImageView; 
@property (nonatomic,readonly) BOOL showArtworkForTVOut; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id delegate; 
@property (nonatomic,retain) MPAVItem * item; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,retain) MPAVController * player; 
@property (nonatomic,retain,readonly) UIView * view; 
@property (assign,nonatomic) BOOL allowsDetailScrubbing; 
@property (assign,nonatomic) BOOL allowsWirelessPlayback; 
@property (assign,nonatomic) BOOL alwaysAllowHidingControlsOverlay; 
@property (assign,nonatomic) long long artworkImageStyle;                                                          //@synthesize artworkImageStyle=_artworkImageStyle - In the implementation block
@property (assign,nonatomic) BOOL attemptAutoPlayWhenControlsHidden; 
@property (nonatomic,readonly) UIView * backgroundView; 
@property (nonatomic,retain) UIColor * backstopColor;                                                              //@synthesize backstopColor=_backstopColor - In the implementation block
@property (assign,nonatomic) BOOL canAnimateControlsOverlay; 
@property (nonatomic,readonly) BOOL canChangeScaleMode; 
@property (assign,nonatomic) BOOL canShowControlsOverlay; 
@property (assign,nonatomic) BOOL controlsOverlayVisible; 
@property (assign,nonatomic) unsigned long long desiredParts;                                                      //@synthesize desiredParts=_desiredParts - In the implementation block
@property (assign,nonatomic) BOOL disableAutoRotation; 
@property (assign,nonatomic) BOOL disableControlsAutohide; 
@property (assign,nonatomic) unsigned long long disabledParts;                                                     //@synthesize disabledParts=_disabledParts - In the implementation block
@property (assign,nonatomic) BOOL displayPlaybackErrorAlerts; 
@property (nonatomic,readonly) _UIHostedWindow * hostedWindow; 
@property (nonatomic,readonly) unsigned hostedWindowContextID; 
@property (assign,nonatomic) BOOL inlinePlaybackUsesTVOut; 
@property (assign,nonatomic) long long itemTypeOverride;                                                           //@synthesize itemTypeOverride=_itemTypeOverride - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (nonatomic,retain) UIImage * posterImage;                                                                //@synthesize posterImage=_posterImage - In the implementation block
@property (assign,nonatomic) long long scaleMode;                                                                  //@synthesize scaleMode=_scaleMode - In the implementation block
@property (assign,nonatomic) BOOL TVOutEnabled; 
@property (nonatomic,readonly) BOOL viewControllerWillRequestExit; 
@property (nonatomic,retain,readonly) UIView*<MPVideoOverlay> videoOverlayView; 
@property (nonatomic,retain,readonly) MPVideoView * videoView; 
@property (assign,nonatomic) unsigned long long visibleParts;                                                      //@synthesize visibleParts=_visibleParts - In the implementation block
@property (assign,nonatomic) BOOL autoPlayWhenLikelyToKeepUp; 
+(long long)_activityIndicatorViewStyle;
+(CGRect)calculateArtworkImageViewFrameInRect:(CGRect)arg1 ;
+(BOOL)supportsFullscreenDisplay;
-(id)init;
-(void)dealloc;
-(void)setItem:(MPAVItem *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)exitFullscreen;
-(void)loadView;
-(void)_endBackgroundTask;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIImage *)posterImage;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIView *)backgroundView;
-(BOOL)isFullscreen;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setInlinePlaybackUsesTVOut:(BOOL)arg1 ;
-(BOOL)inlinePlaybackUsesTVOut;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1 ;
-(BOOL)autoPlayWhenLikelyToKeepUp;
-(MPVideoView *)videoView;
-(BOOL)canHideOverlay:(BOOL)arg1 ;
-(void)displayVideoView;
-(void)prepareToDisplayVideo;
-(void)setControlsNeedLayout;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 ;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3 ;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)setScaleModeOverride:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setUseHostedWindowWhenFullscreen:(BOOL)arg1 ;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)setOwnsStatusBar:(BOOL)arg1 ;
-(BOOL)allowsDetailScrubbing;
-(void)setAllowsDetailScrubbing:(BOOL)arg1 ;
-(BOOL)allowsWirelessPlayback;
-(void)setAllowsWirelessPlayback:(BOOL)arg1 ;
-(BOOL)alwaysAllowHidingControlsOverlay;
-(void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1 ;
-(long long)artworkImageStyle;
-(void)setArtworkImageStyle:(long long)arg1 ;
-(BOOL)attemptAutoPlayWhenControlsHidden;
-(void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1 ;
-(UIColor *)backstopColor;
-(void)setBackstopColor:(UIColor *)arg1 ;
-(BOOL)canAnimateControlsOverlay;
-(void)setCanAnimateControlsOverlay:(BOOL)arg1 ;
-(BOOL)canChangeScaleMode;
-(BOOL)canShowControlsOverlay;
-(void)setCanShowControlsOverlay:(BOOL)arg1 ;
-(BOOL)controlsOverlayVisible;
-(void)setControlsOverlayVisible:(BOOL)arg1 ;
-(unsigned long long)desiredParts;
-(void)setDesiredParts:(unsigned long long)arg1 ;
-(BOOL)disableAutoRotation;
-(void)setDisableAutoRotation:(BOOL)arg1 ;
-(BOOL)disableControlsAutohide;
-(void)setDisableControlsAutohide:(BOOL)arg1 ;
-(unsigned long long)disabledParts;
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(BOOL)displayPlaybackErrorAlerts;
-(void)setDisplayPlaybackErrorAlerts:(BOOL)arg1 ;
-(_UIHostedWindow *)hostedWindow;
-(unsigned)hostedWindowContextID;
-(long long)itemTypeOverride;
-(void)setItemTypeOverride:(long long)arg1 ;
-(void)setPosterImage:(UIImage *)arg1 ;
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(BOOL)TVOutEnabled;
-(void)setTVOutEnabled:(BOOL)arg1 ;
-(BOOL)viewControllerWillRequestExit;
-(UIView*<MPVideoOverlay>)videoOverlayView;
-(unsigned long long)visibleParts;
-(void)setVisibleParts:(unsigned long long)arg1 ;
-(void)noteIgnoredChangeTypes:(unsigned long long)arg1 ;
-(void)setOrientation:(long long)arg1 animate:(BOOL)arg2 ;
-(void)registerForPlayerNotifications;
-(void)unregisterForPlayerNotifications;
-(void)crossedTimeMakerWithEvent:(id)arg1 ;
-(BOOL)isFullscreenForLayoutPurposes;
-(long long)displayArtworkImageStyle;
-(CGRect)calculateFullScreenArtworkImageViewFrame;
-(CGRect)calculateArtworkImageViewFrame;
-(long long)_itemTypeWithActualTypePreference;
-(BOOL)showArtworkInImageView;
-(id)newArtworkImageView;
-(void)reloadArtworkImageView;
-(void)enableAirPlayVideoRoutesIfNecessary;
-(void)_updateAlwaysPlayWheneverPossible;
-(void)setScaleMode:(long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)visiblePartsForProposedParts:(unsigned long long)arg1 ;
-(void)toggleScaleMode:(BOOL)arg1 ;
-(BOOL)showArtworkForTVOut;
-(UIView *)artworkImageView;
-(void)removeChildViewController:(id)arg1 ;
-(void)setAllowsTVOutInBackground:(BOOL)arg1 ;
-(BOOL)allowsTVOutInBackground;
-(UIView*<MPVideoOverlay>)videoOverlayViewIfLoaded;
-(BOOL)isTransitioningToFullscreen;
-(BOOL)isTransitioningFromFullscreen;
-(BOOL)canShowQTAudioOnlyUI;
-(void)_videoView_applicationSuspendedNotification:(id)arg1 ;
-(void)_videoView_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_videoView_availableRoutesDidChangeNotification:(id)arg1 ;
-(void)_videoView_batteryStateDidChangeNotification:(id)arg1 ;
-(void)_videoView_effectiveScaleModeChangedNotification:(id)arg1 ;
-(void)_videoView_isExternalPlaybackActiveDidChangeNotification:(id)arg1 ;
-(void)_videoView_playbackErrorNotification:(id)arg1 ;
-(void)_exitPlayerForPlaybackError;
-(void)videoView_playbackStateChangedNotification:(id)arg1 ;
-(void)_videoView_resumeEventsOnlyNotification:(id)arg1 ;
-(void)_videoView_scaleModeChangedNotification:(id)arg1 ;
-(void)_videoView_sizeChangedNotification:(id)arg1 ;
-(void)_videoView_timedImageMetadataAvailableNotification:(id)arg1 ;
-(void)videoView_tvOutCapabilityDidChangeNotification:(id)arg1 ;
-(void)_videoView_validityChangedNotification:(id)arg1 ;
-(void)videoView_itemTypeAvailableNotification:(id)arg1 ;
-(void)videoView_firstVideoFrameDisplayedNotification:(id)arg1 ;
-(void)_updateBackgroundView:(BOOL)arg1 ;
-(void)videoView_bufferingStateChangedNotification:(id)arg1 ;
-(void)_popForTimeJump:(id)arg1 ;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(void)_itemDurationDidChange:(id)arg1 ;
-(void)_delayedPopForTimeJump;
-(void)_delayedShowLoading;
-(void)tearDownTVOutWindow;
-(void)displayVideoViewOnScreen;
-(void)displayVideoViewOnTV;
-(void)handleScaleModeChange;
-(void)handleExternalPlaybackDidChange;
-(void)_showStillFrameIfNotAlreadyPlaying;
-(void)_scheduleLoadingIndicatorIfNeeded;
-(void)backgroundViewDidUpdate;
-(unsigned long long)disabledPartsForProposedParts:(unsigned long long)arg1 ;
-(BOOL)_canEnableAirPlayVideoRoutes;
-(void)_delayedUpdateBackgroundView;
-(void)_hideLoadingIndicator;
-(BOOL)_showDestinationPlaceholder;
-(void)_updateIdleTimerDisabledFromPlaybackState:(long long)arg1 ;
-(void)_updateProgressControlForItem:(id)arg1 ;
@end

