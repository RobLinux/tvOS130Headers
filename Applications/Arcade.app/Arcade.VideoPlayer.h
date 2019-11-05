/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:52:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Arcade.app/Arcade
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVPlayer.h>

@interface Arcade.VideoPlayer : AVPlayer {

	 delegate;
	 state;
	 shouldBePlaying;
	 shouldLoopPlayback;
	 playerItem;
	 videoUrl;
	 lastPlaybackTimeGuard;
	 lastPlaybackTimeUnsynchronized;
	 failureReason;
	 failureCount;
	 playbackChecks;
	 timeObserver;
	 playbackEndingObserver;
	 playerItemObserversAdded;
	 playerObserversAdded;

}
-(id)init;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(void)play;
-(id)initWithPlayerItem:(id)arg1 ;
-(void)videoDidPlayToEnd;
-(void)videoPlaybackDidStall;
-(void)playbackErrorOccurredWithNotification:(id)arg1 ;
@end

