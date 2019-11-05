/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTRecencyUtil : NSObject
+(id)nextEpisodeToPlayForPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 ctx:(id)arg4 ;
+(id)nextEpisodeToPlayForPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 ctx:(id)arg3 ;
+(id)nextEpisodeToPlayForPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)nextEpisodeForEpisodicPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 ctx:(id)arg4 ;
+(id)nextEpisodeForSerialPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 ctx:(id)arg4 ;
+(id)recentlyPlayedPodcastsWithContext:(id)arg1 ;
+(id)recentlyPlayedPodcastsWithContext:(id)arg1 limit:(long long)arg2 ;
+(id)recentlyPlayedPodcastsWithContext:(id)arg1 limit:(long long)arg2 uuidsToExclude:(id)arg3 ;
+(id)recentlyPlayedPodcastsWithContext:(id)arg1 limit:(long long)arg2 uuidsToExclude:(id)arg3 watchedAtTheEnd:(BOOL)arg4 ;
+(id)nextEpisodeForSerialPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 ctx:(id)arg3 ;
+(id)nextEpisodeForEpisodicPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 ctx:(id)arg3 ;
+(id)episodeToResumeWithContext:(id)arg1 ;
+(id)episodesForListenNowWithContext:(id)arg1 limit:(long long)arg2 ;
@end

