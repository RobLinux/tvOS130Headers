/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPTransportBarView.h>

@class UIView, UILabel, TVPDurationValueTransformer;

@interface TVPAudioTransportBarView : TVPTransportBarView {

	BOOL _didInitializeProgressBar;
	UIView* _audioPlayerHeadView;
	UILabel* _audioElapsedTimeLabel;
	TVPDurationValueTransformer* _durationTransformer;

}

@property (nonatomic,retain) UIView * audioPlayerHeadView;                                   //@synthesize audioPlayerHeadView=_audioPlayerHeadView - In the implementation block
@property (nonatomic,retain) UILabel * audioElapsedTimeLabel;                                //@synthesize audioElapsedTimeLabel=_audioElapsedTimeLabel - In the implementation block
@property (nonatomic,retain) TVPDurationValueTransformer * durationTransformer;              //@synthesize durationTransformer=_durationTransformer - In the implementation block
@property (nonatomic,readonly) BOOL isScrubberFocused; 
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(double)dimmingAlpha;
-(BOOL)isScrubberFocused;
-(id)createProgressBarView;
-(BOOL)supportsThumbnailView;
-(void)setElapsedTimeTitle:(id)arg1 ;
-(UIView *)audioPlayerHeadView;
-(void)_showStateForProgressBar:(id)arg1 focused:(BOOL)arg2 ;
-(void)transitionAudioPlayerHeadToState:(int)arg1 ;
-(void)configureAppearanceForTrackChange;
-(void)setAudioPlayerHeadView:(UIView *)arg1 ;
-(UILabel *)audioElapsedTimeLabel;
-(void)setAudioElapsedTimeLabel:(UILabel *)arg1 ;
-(TVPDurationValueTransformer *)durationTransformer;
-(void)setDurationTransformer:(TVPDurationValueTransformer *)arg1 ;
@end

