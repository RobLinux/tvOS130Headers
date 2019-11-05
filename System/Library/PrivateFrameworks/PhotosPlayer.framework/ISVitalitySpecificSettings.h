/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>
#import <PhotosPlayer/ISVitalitySettings.h>

@class NSString;

@interface ISVitalitySpecificSettings : ISSettings <ISVitalitySettings> {

	long long _behavior;
	double _preDuration;
	double _postDuration;
	double _startSeekTolerance;
	double _playbackRate;
	double _endTimeOffset;
	double _minimumVisibilityFactor;
	double _maximumDelayBeforePlayback;
	double _minimumDurationForColorMismatch;
	double _minimumPhotoTransitionDuration;
	double _minimumColorAdjustedPhotoTransitionDuration;

}

@property (assign,nonatomic) long long behavior;                                              //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic) double preDuration;                                              //@synthesize preDuration=_preDuration - In the implementation block
@property (assign,nonatomic) double postDuration;                                             //@synthesize postDuration=_postDuration - In the implementation block
@property (assign,nonatomic) double startSeekTolerance;                                       //@synthesize startSeekTolerance=_startSeekTolerance - In the implementation block
@property (assign,nonatomic) double playbackRate;                                             //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) double endTimeOffset;                                            //@synthesize endTimeOffset=_endTimeOffset - In the implementation block
@property (assign,nonatomic) double minimumVisibilityFactor;                                  //@synthesize minimumVisibilityFactor=_minimumVisibilityFactor - In the implementation block
@property (assign,nonatomic) double maximumDelayBeforePlayback;                               //@synthesize maximumDelayBeforePlayback=_maximumDelayBeforePlayback - In the implementation block
@property (assign,nonatomic) double minimumDurationForColorMismatch;                          //@synthesize minimumDurationForColorMismatch=_minimumDurationForColorMismatch - In the implementation block
@property (assign,nonatomic) double minimumPhotoTransitionDuration;                           //@synthesize minimumPhotoTransitionDuration=_minimumPhotoTransitionDuration - In the implementation block
@property (assign,nonatomic) double minimumColorAdjustedPhotoTransitionDuration;              //@synthesize minimumColorAdjustedPhotoTransitionDuration=_minimumColorAdjustedPhotoTransitionDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setBehavior:(long long)arg1 ;
-(long long)behavior;
-(double)playbackRate;
-(void)setPlaybackRate:(double)arg1 ;
-(void)setDefaultValues;
-(double)preDuration;
-(double)postDuration;
-(double)minimumPhotoTransitionDuration;
-(double)minimumColorAdjustedPhotoTransitionDuration;
-(double)endTimeOffset;
-(double)minimumVisibilityFactor;
-(double)maximumDelayBeforePlayback;
-(double)minimumDurationForColorMismatch;
-(void)setPreDuration:(double)arg1 ;
-(void)setPostDuration:(double)arg1 ;
-(double)startSeekTolerance;
-(void)setStartSeekTolerance:(double)arg1 ;
-(void)setEndTimeOffset:(double)arg1 ;
-(void)setMinimumVisibilityFactor:(double)arg1 ;
-(void)setMaximumDelayBeforePlayback:(double)arg1 ;
-(void)setMinimumDurationForColorMismatch:(double)arg1 ;
-(void)setMinimumPhotoTransitionDuration:(double)arg1 ;
-(void)setMinimumColorAdjustedPhotoTransitionDuration:(double)arg1 ;
@end

