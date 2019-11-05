/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:22 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTPlaybackQueueFactory : NSObject
+(id)_episodeToPlayForPodcastUuid:(id)arg1 playbackOrder:(long long)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4 ;
+(id)_uuidForEpisode:(id)arg1 ;
+(BOOL)_isContinuousPlaybackEnabledForLimit:(long long)arg1 ;
+(id)_latestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4 ;
+(id)_oldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4 ;
+(id)_latestOrOldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 latest:(BOOL)arg4 ctx:(id)arg5 ;
+(id)episodeUuidsForPlayPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3 error:(long long*)arg4 ;
+(id)episodeUuidsForPlayStationUuid:(id)arg1 limit:(long long)arg2 ;
+(id)playStationUuid:(id)arg1 episodeUuid:(id)arg2 ;
+(id)playPodcastUuid:(id)arg1 ;
+(id)playEpisodeUuid:(id)arg1 context:(long long)arg2 limit:(long long)arg3 ;
+(id)playPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3 error:(long long*)arg4 ;
+(id)playStationUuid:(id)arg1 episodeUuid:(id)arg2 limit:(long long)arg3 ;
+(id)playStationUuid:(id)arg1 limit:(long long)arg2 ;
+(id)playMyPodcastsWithOrder:(long long)arg1 ;
+(id)playPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3 ;
+(id)playEpisodeUuid:(id)arg1 ;
+(id)playStationUuid:(id)arg1 ;
+(id)playEpisodeUuid:(id)arg1 context:(long long)arg2 ;
+(id)_manifestForPlayMyLatestPodcasts;
+(id)_manifestForPlayMyOldestPodcasts;
+(id)_manifestForPlayMyPodcasts;
+(id)playPodcastUuid:(id)arg1 order:(long long)arg2 ;
+(id)playEpisodeUuid:(id)arg1 limit:(long long)arg2 ;
+(id)playEpisodeUuid:(id)arg1 context:(long long)arg2 sortType:(long long)arg3 limit:(long long)arg4 ;
+(id)playListenNow;
+(id)playPodcastUuid:(id)arg1 limit:(long long)arg2 ;
@end

