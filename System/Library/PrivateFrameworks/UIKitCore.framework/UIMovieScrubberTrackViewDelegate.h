/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIMovieScrubberTrackViewDelegate <NSObject>
@optional
-(void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6;
-(void)movieScrubberTrackViewDidExpand:(id)arg1;
-(void)movieScrubberTrackViewDidCollapse:(id)arg1;
-(void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)arg1;
-(void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)arg1;
-(double)movieScrubberTrackViewZoomAnimationDuration:(id)arg1;
-(double)movieScrubberTrackViewZoomAnimationDelay:(id)arg1;

@end

