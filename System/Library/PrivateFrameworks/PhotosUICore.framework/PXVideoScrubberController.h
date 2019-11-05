/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>

@protocol PXVideoScrubberControllerDelegate, PXVideoScrubberControllerTarget;
@class PXScrubberSeekRequest, AVPlayerItem;

@interface PXVideoScrubberController : PXObservable {

	id _playerObserver;
	BOOL _needsUpdate;
	BOOL _avPlayerCurrentTimeNeedsUpdate;
	BOOL _avPlayerDurationNeedsUpdate;
	SCD_Struct_PX65 _videoScrubberDelegateFlags;
	SCD_Struct_PX52 _targetFlags;
	id<PXVideoScrubberControllerDelegate> _delegate;
	id<PXVideoScrubberControllerTarget> _target;
	double _estimatedDuration;
	double __playheadTime;
	PXScrubberSeekRequest* __pendingSeekRequest;
	PXScrubberSeekRequest* __activeSeekRequest;
	SCD_Struct_PX8 __avPlayerCurrentTime;
	SCD_Struct_PX8 __avPlayerDuration;

}

@property (assign,setter=_setPlayheadTime:,nonatomic) double _playheadTime;                                           //@synthesize _playheadTime=__playheadTime - In the implementation block
@property (setter=_setPendingSeekRequest:,nonatomic,retain) PXScrubberSeekRequest * _pendingSeekRequest;              //@synthesize _pendingSeekRequest=__pendingSeekRequest - In the implementation block
@property (setter=_setActiveSeekRequest:,nonatomic,retain) PXScrubberSeekRequest * _activeSeekRequest;                //@synthesize _activeSeekRequest=__activeSeekRequest - In the implementation block
@property (assign,setter=_setAvPlayerCurrentTime:,nonatomic) SCD_Struct_PX8 _avPlayerCurrentTime;                     //@synthesize _avPlayerCurrentTime=__avPlayerCurrentTime - In the implementation block
@property (assign,setter=_setAvPlayerDuration:,nonatomic) SCD_Struct_PX8 _avPlayerDuration;                           //@synthesize _avPlayerDuration=__avPlayerDuration - In the implementation block
@property (assign,nonatomic,__weak) id<PXVideoScrubberControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<PXVideoScrubberControllerTarget> target;                                            //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) double estimatedDuration;                                                              //@synthesize estimatedDuration=_estimatedDuration - In the implementation block
@property (nonatomic,readonly) double length; 
@property (assign,nonatomic) double playheadProgress; 
@property (nonatomic,readonly) AVPlayerItem * currentPlayerItem; 
@property (nonatomic,readonly) float playRate; 
-(id)init;
-(void)dealloc;
-(double)length;
-(void)_invalidate;
-(id<PXVideoScrubberControllerDelegate>)delegate;
-(void)setDelegate:(id<PXVideoScrubberControllerDelegate>)arg1 ;
-(id<PXVideoScrubberControllerTarget>)target;
-(double)_duration;
-(void)_addObservers;
-(void)_removeObservers;
-(void)endSeeking;
-(id)mutableChangeObject;
-(void)_updateIfNeeded;
-(void)_seekToTime:(double)arg1 ;
-(AVPlayerItem *)currentPlayerItem;
-(id)initWithTarget:(id)arg1 estimatedDuration:(double)arg2 ;
-(double)playheadProgress;
-(void)setPlayheadProgress:(double)arg1 ;
-(void)_setPlayheadProgress:(double)arg1 andSeekVideoPlayer:(BOOL)arg2 ;
-(void)beginSeeking;
-(float)playRate;
-(void)_updateSeeking;
-(void)_seekRequest:(id)arg1 didFinish:(BOOL)arg2 ;
-(void)_handleTimeoutCallbackForSeekRequest:(id)arg1 ;
-(void)_setActiveSeekRequest:(id)arg1 ;
-(void)_playerDidChange:(id)arg1 ;
-(void)_playerItemDurationDidChange;
-(void)_playerItemDidChange;
-(void)_playerStatusDidChange;
-(double)_timeForProgress:(double)arg1 ;
-(double)_progressForTime:(double)arg1 ;
-(double)_lengthForDuration:(double)arg1 ;
-(void)_setPlayheadTime:(double)arg1 ;
-(void)_invalidateAvPlayerCurrentTime;
-(void)_updateAvPlayerCurrentTimeIfNeeded;
-(void)_invalidateAvPlayerDuration;
-(void)_updateAvPlayerDurationIfNeeded;
-(double)estimatedDuration;
-(double)_playheadTime;
-(PXScrubberSeekRequest *)_pendingSeekRequest;
-(void)_setPendingSeekRequest:(id)arg1 ;
-(PXScrubberSeekRequest *)_activeSeekRequest;
-(SCD_Struct_PX8)_avPlayerCurrentTime;
-(void)_setAvPlayerCurrentTime:(SCD_Struct_PX8)arg1 ;
-(SCD_Struct_PX8)_avPlayerDuration;
-(void)_setAvPlayerDuration:(SCD_Struct_PX8)arg1 ;
@end

