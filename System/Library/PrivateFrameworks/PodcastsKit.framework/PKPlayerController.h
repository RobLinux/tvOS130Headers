/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PKEpisode, PKDurationSnapshot;


@protocol PKPlayerController
@property (readonly,nonatomic) PKEpisode * currentEpisode; 
@property (readonly,nonatomic) PKDurationSnapshot * durationSnapshot; 
@property (readonly,nonatomic) double forwardJumpDuration; 
@property (readonly,nonatomic) double backwardJumpDuration; 
@property (copy,nonatomic) id playerResponseHandler; 
@required
-(PKEpisode *)currentEpisode;
-(PKDurationSnapshot *)durationSnapshot;
-(void)playWithCompletion:(/*^block*/id)arg1;
-(void)pauseWithCompletion:(/*^block*/id)arg1;
-(void)startPlayback:(id)arg1 completion:(/*^block*/id)arg2;
-(void)seekToPositionWithElapsedTime:(double)arg1 completion:(/*^block*/id)arg2;
-(void)jumpForwardsWithCompletion:(/*^block*/id)arg1;
-(void)jumpBackwardsWithCompletion:(/*^block*/id)arg1;
-(double)forwardJumpDuration;
-(double)backwardJumpDuration;
-(id)playerResponseHandler;
-(void)setPlayerResponseHandler:(/*^block*/id)arg1;

@end

