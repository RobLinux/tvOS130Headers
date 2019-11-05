/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXDisplayAssetUIView.h>
#import <PhotosUICore/PXActivityCoordinatorItem.h>

@class PXVideoPlayerView, ISWrappedAVPlayer, AVPlayerItem, NSNumber, ISWrappedAVAudioSession, NSString;

@interface PXDisplayAssetLoopingVideoUIView : PXDisplayAssetUIView <PXActivityCoordinatorItem> {

	PXVideoPlayerView* _videoView;
	long long _requestID;
	unsigned long long _loadingIntervalID;
	unsigned long long _playbackIntervalID;
	id _timeObserver;
	BOOL _canLoadVideo;
	ISWrappedAVPlayer* _videoPlayer;
	AVPlayerItem* _videoPlayerItem;
	NSNumber* _queuePosition;
	ISWrappedAVAudioSession* _audioSession;
	double _videoLoadingProgress;

}

@property (nonatomic,retain) ISWrappedAVPlayer * videoPlayer;                                  //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) AVPlayerItem * videoPlayerItem;                                   //@synthesize videoPlayerItem=_videoPlayerItem - In the implementation block
@property (assign,nonatomic) BOOL canLoadVideo;                                                //@synthesize canLoadVideo=_canLoadVideo - In the implementation block
@property (nonatomic,retain) NSNumber * queuePosition;                                         //@synthesize queuePosition=_queuePosition - In the implementation block
@property (nonatomic,retain) ISWrappedAVAudioSession * audioSession;                           //@synthesize audioSession=_audioSession - In the implementation block
@property (assign,nonatomic) double videoLoadingProgress;                                      //@synthesize videoLoadingProgress=_videoLoadingProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long activityCoordinatorQueuePosition; 
-(void)dealloc;
-(ISWrappedAVAudioSession *)audioSession;
-(void)setAudioSession:(ISWrappedAVAudioSession *)arg1 ;
-(id)contentView;
-(long long)playbackStyle;
-(void)didMoveToWindow;
-(void)updateContent;
-(double)loadingProgress;
-(void)imageDidChange;
-(void)imageProgressDidChange;
-(void)placeholderImageFiltersDidChange;
-(void)contentsRectDidChange;
-(BOOL)isDisplayingFullQualityContent;
-(void)isDisplayingFullQualityContentDidChange;
-(id)currentImage;
-(CGRect)currentContentsRect;
-(void)animatedContentEnabledDidChange;
-(void)contentModeDidChange;
-(unsigned long long)activityCoordinatorQueuePosition;
-(void)setActivityCoordinatorQueuePosition:(unsigned long long)arg1 ;
-(void)setVideoPlayer:(ISWrappedAVPlayer *)arg1 ;
-(void)setVideoLoadingProgress:(double)arg1 ;
-(void)setCanLoadVideo:(BOOL)arg1 ;
-(void)setVideoPlayerItem:(AVPlayerItem *)arg1 ;
-(void)_unloadVideo;
-(void)_handleDidShowPlaceholderForUnloadingPlayerItem:(id)arg1 ;
-(void)_loadVideo;
-(void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3 ;
-(void)_updateVideoPlayerPlayerItem;
-(void)_updateVideoViewContentMode;
-(void)_handleVideoPlayerTimeObserverWithTime:(SCD_Struct_PX8)arg1 ;
-(void)_updateVideoViewPlaceholderFilters;
-(void)_endPlaybackInterval;
-(void)_endLoadingInterval:(BOOL)arg1 ;
-(ISWrappedAVPlayer *)videoPlayer;
-(AVPlayerItem *)videoPlayerItem;
-(BOOL)canLoadVideo;
-(NSNumber *)queuePosition;
-(void)setQueuePosition:(NSNumber *)arg1 ;
-(double)videoLoadingProgress;
@end

