/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVPPlayer, AVPlayerViewController, VUINowPlayingFeatureMonitor, VUIMediaInfo, VUINowPlayingViewController, UIImage;

@interface VUIPlaybackInfo : NSObject {

	BOOL _requiresLinearPlayback;
	BOOL _ignorePlayerStop;
	TVPPlayer* _player;
	AVPlayerViewController* _avPlayerViewController;
	VUINowPlayingFeatureMonitor* _featureMonitor;
	VUIMediaInfo* _mediaInfo;
	VUINowPlayingViewController* _nowPlayingViewController;
	UIImage* _advisoryImage;

}

@property (nonatomic,retain) TVPPlayer * player;                                                  //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * avPlayerViewController;                     //@synthesize avPlayerViewController=_avPlayerViewController - In the implementation block
@property (nonatomic,retain) VUINowPlayingFeatureMonitor * featureMonitor;                        //@synthesize featureMonitor=_featureMonitor - In the implementation block
@property (assign,nonatomic) BOOL requiresLinearPlayback;                                         //@synthesize requiresLinearPlayback=_requiresLinearPlayback - In the implementation block
@property (nonatomic,readonly) VUIMediaInfo * mediaInfo;                                          //@synthesize mediaInfo=_mediaInfo - In the implementation block
@property (nonatomic,retain) VUINowPlayingViewController * nowPlayingViewController;              //@synthesize nowPlayingViewController=_nowPlayingViewController - In the implementation block
@property (nonatomic,retain) UIImage * advisoryImage;                                             //@synthesize advisoryImage=_advisoryImage - In the implementation block
@property (getter=isCurrentMediaTVShow,nonatomic,readonly) BOOL currentMediaTVShow; 
@property (assign,getter=shouldIgnorePlayerStop,nonatomic) BOOL ignorePlayerStop;                 //@synthesize ignorePlayerStop=_ignorePlayerStop - In the implementation block
-(TVPPlayer *)player;
-(void)setPlayer:(TVPPlayer *)arg1 ;
-(BOOL)requiresLinearPlayback;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(VUIMediaInfo *)mediaInfo;
-(AVPlayerViewController *)avPlayerViewController;
-(void)setAvPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)_updateRequiresLinearPlayback;
-(id)initWithMediaInfo:(id)arg1 ;
-(BOOL)isCurrentMediaTVShow;
-(VUINowPlayingFeatureMonitor *)featureMonitor;
-(void)setFeatureMonitor:(VUINowPlayingFeatureMonitor *)arg1 ;
-(VUINowPlayingViewController *)nowPlayingViewController;
-(void)setNowPlayingViewController:(VUINowPlayingViewController *)arg1 ;
-(UIImage *)advisoryImage;
-(void)setAdvisoryImage:(UIImage *)arg1 ;
-(BOOL)shouldIgnorePlayerStop;
-(void)setIgnorePlayerStop:(BOOL)arg1 ;
@end

