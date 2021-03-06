/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:20 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface MTTVAudioPlaybackProgressBarView : UIView {

	double _progress;
	UIView* _completedView;
	UIView* _remainingView;

}

@property (nonatomic,retain) UIView * completedView;              //@synthesize completedView=_completedView - In the implementation block
@property (nonatomic,retain) UIView * remainingView;              //@synthesize remainingView=_remainingView - In the implementation block
@property (assign,nonatomic) double progress;                     //@synthesize progress=_progress - In the implementation block
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 withAnimationDuration:(double)arg2 ;
-(CGRect)_completedFrame;
-(UIView *)completedView;
-(UIView *)remainingView;
-(CGRect)_remainingFrame;
-(void)setCompletedView:(UIView *)arg1 ;
-(void)setRemainingView:(UIView *)arg1 ;
@end

