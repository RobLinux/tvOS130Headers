/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIPlaybackUtilities : NSObject
+(double)playedThresholdTimeForDuration:(double)arg1 ;
+(double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2 ;
+(long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(BOOL)arg3 playCount:(unsigned long long)arg4 ;
+(long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(BOOL)arg3 playCount:(unsigned long long)arg4 respectPlayCount:(BOOL)arg5 ;
+(BOOL)playerIsLive:(id)arg1 ;
@end

