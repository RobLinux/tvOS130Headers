/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaPlayback.h>

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {

	id _implementation;

}

@property (nonatomic,copy) NSURL * contentURL; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UIView * backgroundView; 
@property (nonatomic,readonly) long long playbackState; 
@property (nonatomic,readonly) unsigned long long loadState; 
@property (assign,nonatomic) long long controlStyle; 
@property (assign,nonatomic) long long repeatMode; 
@property (assign,nonatomic) BOOL shouldAutoplay; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (assign,nonatomic) long long scalingMode; 
@property (nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,readonly) unsigned long long movieMediaTypes; 
@property (assign,nonatomic) long long movieSourceType; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double playableDuration; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (assign,nonatomic) double initialPlaybackTime; 
@property (assign,nonatomic) double endPlaybackTime; 
@property (assign,nonatomic) BOOL allowsAirPlay; 
@property (getter=isAirPlayVideoActive,nonatomic,readonly) BOOL airPlayVideoActive; 
@property (nonatomic,readonly) BOOL isPreparedToPlay; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
+(void)allInstancesResignActive;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)pause;
-(double)duration;
-(void)prepareToPlay;
-(void)play;
-(CGSize)naturalSize;
-(id)initWithAsset:(id)arg1 ;
-(id)initWithPlayerItem:(id)arg1 ;
-(BOOL)isAirPlayVideoActive;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSURL *)contentURL;
-(UIView *)view;
-(long long)playbackState;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(void)skipToPreviousItem;
-(void)skipToNextItem;
-(long long)scalingMode;
-(void)setScalingMode:(long long)arg1 ;
-(UIView *)backgroundView;
-(void)_resignActive;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(BOOL)isPreparedToPlay;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(float)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(float)arg1 ;
-(id)initWithContentURL:(id)arg1 ;
-(unsigned long long)loadState;
-(long long)controlStyle;
-(void)setControlStyle:(long long)arg1 ;
-(BOOL)shouldAutoplay;
-(void)setShouldAutoplay:(BOOL)arg1 ;
-(BOOL)isFullscreen;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)allowsAirPlay;
-(void)setAllowsAirPlay:(BOOL)arg1 ;
-(void)skipToBeginning;
-(unsigned long long)movieMediaTypes;
-(void)setMovieSourceType:(long long)arg1 ;
-(long long)movieSourceType;
-(double)playableDuration;
-(void)setInitialPlaybackTime:(double)arg1 ;
-(double)initialPlaybackTime;
-(void)setEndPlaybackTime:(double)arg1 ;
-(double)endPlaybackTime;
-(BOOL)readyForDisplay;
-(BOOL)_isReadyForDisplay;
@end

