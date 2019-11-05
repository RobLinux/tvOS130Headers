/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRMarimbaPlayback
@required
-(double)relativeTime;
-(void)moveToEffectContainer:(id)arg1 withStartOffset:(double)arg2 toStopOffset:(double)arg3 blocking:(BOOL)arg4;
-(id)displayedEffectContainers;
-(id)currentSlides;
-(void)gotoSlide:(id)arg1;
-(void)moveToNextEffectContainer;
-(void)moveToPreviousEffectContainer;
-(double)relativeTimeForBackgroundAudio;
-(double)relativeTimeForLayer:(id)arg1;
-(void)moveToTitleSlide;
-(void)moveToSubtitleForSlide:(id)arg1;
-(id)currentSlide;
-(void)gotoNextSlide;
-(void)gotoPreviousSlide;
-(BOOL)isInTransition;
-(void)whenTransitionIsFinishedSendAction:(SEL)arg1 toTarget:(id)arg2;
-(void)removeEffectContainersBeforeTime:(double)arg1;

@end

