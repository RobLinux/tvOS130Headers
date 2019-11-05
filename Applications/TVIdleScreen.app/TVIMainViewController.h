/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:52:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVIdleScreen.app/TVIdleScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <PineBoard/_PBSViewServicePresenter_Temporary.h>
#import <TVIdleScreen/TVIBackgroundViewDelegate.h>
#import <TVIdleScreen/TVIBackgroundViewDataSource.h>

@class TVIAssetManager, TVIBackgroundView, NSMutableSet, NSMapTable, UIViewPropertyAnimator, UIView, NSString;

@interface TVIMainViewController : UIViewController <_PBSViewServicePresenter_Temporary, TVIBackgroundViewDelegate, TVIBackgroundViewDataSource> {

	BOOL _playbackPausedWhileScreenSaverIsUp;
	BOOL _presentationEnded;
	TVIAssetManager* _assetManager;
	/*^block*/id _storeDemoModeResetBlock;
	id _nowPlayingStateObserver;
	TVIBackgroundView* _backgroundView;
	NSMutableSet* _assetsToRemove;
	NSMapTable* _mediaItemToAssetMap;
	UIViewPropertyAnimator* _fadeInAnimator;
	UIViewPropertyAnimator* _fadeOutAnimator;
	UIView* _internalShroudView;

}

@property (nonatomic,retain) TVIAssetManager * assetManager;                        //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,copy) id storeDemoModeResetBlock;                              //@synthesize storeDemoModeResetBlock=_storeDemoModeResetBlock - In the implementation block
@property (assign,nonatomic) BOOL playbackPausedWhileScreenSaverIsUp;               //@synthesize playbackPausedWhileScreenSaverIsUp=_playbackPausedWhileScreenSaverIsUp - In the implementation block
@property (nonatomic,retain) id nowPlayingStateObserver;                            //@synthesize nowPlayingStateObserver=_nowPlayingStateObserver - In the implementation block
@property (nonatomic,retain) TVIBackgroundView * backgroundView;                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSMutableSet * assetsToRemove;                         //@synthesize assetsToRemove=_assetsToRemove - In the implementation block
@property (nonatomic,retain) NSMapTable * mediaItemToAssetMap;                      //@synthesize mediaItemToAssetMap=_mediaItemToAssetMap - In the implementation block
@property (assign,nonatomic) BOOL presentationEnded;                                //@synthesize presentationEnded=_presentationEnded - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * fadeInAnimator;               //@synthesize fadeInAnimator=_fadeInAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * fadeOutAnimator;              //@synthesize fadeOutAnimator=_fadeOutAnimator - In the implementation block
@property (nonatomic,readonly) UIView * internalShroudView;                         //@synthesize internalShroudView=_internalShroudView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setBackgroundView:(TVIBackgroundView *)arg1 ;
-(TVIBackgroundView *)backgroundView;
-(void)_selectAction:(id)arg1 ;
-(void)setAssetManager:(TVIAssetManager *)arg1 ;
-(TVIAssetManager *)assetManager;
-(void)_leftAction:(id)arg1 ;
-(void)_rightAction:(id)arg1 ;
-(void)viewServiceBeginPresentationWithOptions:(id)arg1 ;
-(void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewServiceBeginPresentationWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_tapAction:(id)arg1 ;
-(void)_mediaPlaybackStateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)presentationEnded;
-(void)setPresentationEnded:(BOOL)arg1 ;
-(void)_mediaRemotePlaybackApplicationStateDidChange;
-(void)_playPauseTapButtonAction:(id)arg1 ;
-(void)_swipeLeftAction:(id)arg1 ;
-(void)_swipeRightAction:(id)arg1 ;
-(void)_internalPlayPauseAction:(id)arg1 ;
-(BOOL)playbackPausedWhileScreenSaverIsUp;
-(BOOL)isSyntheticB39GestureWithRecognizer:(id)arg1 ;
-(UIView *)internalShroudView;
-(void)_dequeueMediaItem:(id)arg1 ;
-(id)_assetForMediaItem:(id)arg1 ;
-(void)_queueNextPlayableAssetBeforeAsset:(id)arg1 ;
-(void)setStoreDemoModeResetBlock:(id)arg1 ;
-(id)_initialAsset;
-(BOOL)_queueAsset:(id)arg1 ;
-(void)_queueNextPlayableAssetAfterAsset:(id)arg1 ;
-(id)storeDemoModeResetBlock;
-(BOOL)_unlockAsset:(id)arg1 ;
-(void)_enumerateActiveMediaItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)_queueNextPlayableAssetFollowingAsset:(id)arg1 inPlaybackDirection:(long long)arg2 ;
-(void)_enumerateObjectsInArray:(id)arg1 startObject:(id)arg2 reverse:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_queueDefaultAsset;
-(BOOL)_lockAsset:(id)arg1 ;
-(id)_mediaItemWithPlayableAsset:(id)arg1 ;
-(void)_setAsset:(id)arg1 forMediaItem:(id)arg2 ;
-(id)_defaultMediaItem;
-(id)_defaultMediaItemForResourceName:(id)arg1 ;
-(void)setPlaybackPausedWhileScreenSaverIsUp:(BOOL)arg1 ;
-(NSMapTable *)mediaItemToAssetMap;
-(void)_removeAsset:(id)arg1 ;
-(void)backgroundView:(id)arg1 willTransitionFromMediaItem:(id)arg2 toMediaItem:(id)arg3 ;
-(void)backgroundView:(id)arg1 didTransitionFromMediaItem:(id)arg2 toMediaItem:(id)arg3 ;
-(void)backgroundView:(id)arg1 didEncounterPlaybackErrorForMediaItem:(id)arg2 ;
-(void)backgroundView:(id)arg1 lastPlayedMediaItem:(id)arg2 elapsedTime:(double)arg3 resetList:(BOOL)arg4 ;
-(double)backgroundView:(id)arg1 startTimeForMediaItem:(id)arg2 ;
-(id)nowPlayingStateObserver;
-(void)setNowPlayingStateObserver:(id)arg1 ;
-(NSMutableSet *)assetsToRemove;
-(void)setAssetsToRemove:(NSMutableSet *)arg1 ;
-(void)setMediaItemToAssetMap:(NSMapTable *)arg1 ;
-(UIViewPropertyAnimator *)fadeInAnimator;
-(void)setFadeInAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)fadeOutAnimator;
-(void)setFadeOutAnimator:(UIViewPropertyAnimator *)arg1 ;
@end

