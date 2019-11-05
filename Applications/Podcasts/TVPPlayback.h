/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, TVPPlaylist, TVPPlaybackState, NSDate, NSArray, TVPChapterCollection, TVPChapter, TVPInterstitial, TVPTimeRange, TVPDateRange, TVPAudioOption, TVPSubtitleOption;


@protocol TVPPlayback <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic,__weak) id<TVPPlaybackDelegate> delegate; 
@property (assign,nonatomic,__weak) id<TVPASyncPlaybackDelegate> asyncDelegate; 
@property (nonatomic,retain) TVPPlaylist * playlist; 
@property (nonatomic,retain) NSObject*<TVPMediaItem> currentMediaItem; 
@property (nonatomic,readonly) BOOL currentMediaItemPreparedForLoading; 
@property (nonatomic,readonly) BOOL currentMediaItemInitialLoadingComplete; 
@property (nonatomic,readonly) BOOL currentMediaItemHasVideoContent; 
@property (nonatomic,readonly) BOOL currentMediaItemIsStreaming; 
@property (nonatomic,readonly) CGSize currentMediaItemPresentationSize; 
@property (nonatomic,readonly) BOOL currentMediaItemHasDates; 
@property (nonatomic,readonly) TVPPlaybackState * state; 
@property (assign,nonatomic) long long errorBehavior; 
@property (assign,nonatomic) BOOL interactive; 
@property (nonatomic,readonly) double rate; 
@property (assign,nonatomic) double rateUsedForPlayback; 
@property (assign,nonatomic) BOOL waitsAfterPreparingMediaItems; 
@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,copy) NSDate * playbackDate; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) BOOL isLive; 
@property (assign,nonatomic) BOOL muted; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,readonly) NSArray * chapterCollections; 
@property (nonatomic,retain) TVPChapterCollection * currentChapterCollection; 
@property (nonatomic,readonly) TVPChapter * currentChapter; 
@property (nonatomic,readonly) TVPInterstitial * currentInterstitial; 
@property (nonatomic,readonly) TVPTimeRange * bufferedTimeRange; 
@property (nonatomic,readonly) TVPTimeRange * seekableTimeRange; 
@property (nonatomic,readonly) TVPDateRange * seekableDateRange; 
@property (nonatomic,readonly) double forwardPlaybackEndTime; 
@property (nonatomic,readonly) double reversePlaybackEndTime; 
@property (assign,nonatomic) long long mediaItemEndAction; 
@property (nonatomic,readonly) NSArray * audioOptions; 
@property (nonatomic,retain) TVPAudioOption * selectedAudioOption; 
@property (nonatomic,readonly) NSArray * subtitleOptions; 
@property (nonatomic,retain) TVPSubtitleOption * selectedSubtitleOption; 
@property (assign,nonatomic) double maximumBitRate; 
@property (assign,nonatomic) BOOL preventsSleepDuringVideoPlayback; 
@property (assign,nonatomic) BOOL updatesMediaRemoteInfoAutomatically; 
@property (assign,nonatomic) BOOL limitReadAhead; 
@optional
-(void)changeToMediaAtIndex:(unsigned long long)arg1 reason:(id)arg2;

@required
-(NSString *)name;
-(id)init;
-(void)invalidate;
-(id<TVPPlaybackDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)initWithName:(id)arg1;
-(TVPPlaybackState *)state;
-(void)stop;
-(void)pause;
-(double)duration;
-(double)rate;
-(void)setElapsedTime:(double)arg1;
-(double)elapsedTime;
-(float)volume;
-(void)setVolume:(float)arg1;
-(void)play;
-(void)setMuted:(BOOL)arg1;
-(BOOL)muted;
-(double)forwardPlaybackEndTime;
-(double)reversePlaybackEndTime;
-(BOOL)limitReadAhead;
-(void)setLimitReadAhead:(BOOL)arg1;
-(double)maximumBitRate;
-(void)setMaximumBitRate:(double)arg1;
-(NSArray *)audioOptions;
-(BOOL)isLive;
-(BOOL)interactive;
-(void)setInteractive:(BOOL)arg1;
-(TVPPlaylist *)playlist;
-(void)setPlaylist:(id)arg1;
-(NSObject*<TVPMediaItem>)currentMediaItem;
-(void)setPreventsSleepDuringVideoPlayback:(BOOL)arg1;
-(BOOL)preventsSleepDuringVideoPlayback;
-(void)setUpdatesMediaRemoteInfoAutomatically:(BOOL)arg1;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 withHandler:(/*^block*/id)arg2;
-(BOOL)currentMediaItemHasVideoContent;
-(void)changeMediaInDirection:(long long)arg1;
-(void)scanWithRate:(double)arg1;
-(void)setElapsedTime:(double)arg1 precise:(BOOL)arg2;
-(NSDate *)playbackDate;
-(void)setPlaybackDate:(id)arg1;
-(BOOL)updatesMediaRemoteInfoAutomatically;
-(void)setAsyncDelegate:(id)arg1;
-(id)addElapsedTimeObserver:(/*^block*/id)arg1;
-(void)removeElapsedTimeObserverWithToken:(id)arg1;
-(void)removeBoundaryTimeObserverWithToken:(id)arg1;
-(void)setCurrentMediaItem:(id)arg1;
-(TVPAudioOption *)selectedAudioOption;
-(TVPSubtitleOption *)selectedSubtitleOption;
-(void)updateSubtitleOptions;
-(TVPChapter *)currentChapter;
-(void)togglePlayPause;
-(NSArray *)subtitleOptions;
-(void)setSelectedSubtitleOption:(id)arg1 setGlobalPreference:(BOOL)arg2;
-(void)changeMediaInDirection:(long long)arg1 reason:(id)arg2;
-(void)continueLoadingCurrentItem;
-(void)playIgnoringDelegate:(BOOL)arg1;
-(void)pauseIgnoringDelegate:(BOOL)arg1;
-(void)pauseWithVolumeRampDuration:(double)arg1;
-(void)stopWithVolumeRampDuration:(double)arg1;
-(void)setElapsedTime:(double)arg1 seekPrecision:(SCD_Struct_MT6)arg2;
-(void)setElapsedTime:(double)arg1 seekPrecision:(SCD_Struct_MT6)arg2 ignoreDelegate:(BOOL)arg3;
-(id)addBoundaryTimeObserverForDates:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)skipToNextChapterInDirection:(long long)arg1;
-(BOOL)currentMediaItemSupportsScrubbingUsingPlayer;
-(id<TVPASyncPlaybackDelegate>)asyncDelegate;
-(BOOL)currentMediaItemPreparedForLoading;
-(BOOL)currentMediaItemInitialLoadingComplete;
-(BOOL)currentMediaItemIsStreaming;
-(CGSize)currentMediaItemPresentationSize;
-(BOOL)currentMediaItemHasDates;
-(long long)errorBehavior;
-(void)setErrorBehavior:(long long)arg1;
-(double)rateUsedForPlayback;
-(void)setRateUsedForPlayback:(double)arg1;
-(BOOL)waitsAfterPreparingMediaItems;
-(void)setWaitsAfterPreparingMediaItems:(BOOL)arg1;
-(NSArray *)chapterCollections;
-(TVPChapterCollection *)currentChapterCollection;
-(void)setCurrentChapterCollection:(id)arg1;
-(TVPInterstitial *)currentInterstitial;
-(TVPTimeRange *)bufferedTimeRange;
-(TVPTimeRange *)seekableTimeRange;
-(TVPDateRange *)seekableDateRange;
-(long long)mediaItemEndAction;
-(void)setMediaItemEndAction:(long long)arg1;
-(void)setSelectedAudioOption:(id)arg1;
-(void)setSelectedSubtitleOption:(id)arg1;

@end
