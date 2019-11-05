/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class NSTimer, UIView, _PGPlaybackProgressIndicatorRangesView, PGPlaybackProgress, NSArray;

@interface PGPlaybackProgressIndicator : UIView {

	NSTimer* _playbackProgressTimer;
	double _currentProgress;
	UIView* _containerView;
	_PGPlaybackProgressIndicatorRangesView* _loadedTimeRangesView;
	_PGPlaybackProgressIndicatorRangesView* _playbackProgressView;
	PGPlaybackProgress* _playbackProgress;
	NSArray* _loadedTimeRanges;

}

@property (nonatomic,retain) PGPlaybackProgress * playbackProgress;              //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (nonatomic,retain) NSArray * loadedTimeRanges;                         //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
-(void)dealloc;
-(NSArray *)loadedTimeRanges;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setPlaybackProgress:(PGPlaybackProgress *)arg1 ;
-(PGPlaybackProgress *)playbackProgress;
-(void)_updatePlaybackProgressMaskViewMaskRanges;
-(void)_updatePlaybackProgressTimer;
-(void)_updateLoadedTimeRangesMaskViewMaskRanges;
@end

