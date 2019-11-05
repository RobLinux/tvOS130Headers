/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPBaseMediaItem.h>

@class MPModelPodcastEpisode, NSString, MPCPlayerResponseItem, NSDictionary, TVPBaseMediaItem;

@interface MTTVMusicMPPodcastEpisodeMediaItem : TVPBaseMediaItem {

	BOOL _unknownItemType;
	MPModelPodcastEpisode* _podcastEpisode;
	NSString* _unknownItemDescription;
	MPCPlayerResponseItem* _responseItem;
	NSDictionary* _mediaItemMetadata;
	TVPBaseMediaItem* _mediaItem;

}

@property (nonatomic,retain) MPCPlayerResponseItem * responseItem;                       //@synthesize responseItem=_responseItem - In the implementation block
@property (nonatomic,retain) MPModelPodcastEpisode * podcastEpisode;                     //@synthesize podcastEpisode=_podcastEpisode - In the implementation block
@property (nonatomic,retain) NSDictionary * mediaItemMetadata;                           //@synthesize mediaItemMetadata=_mediaItemMetadata - In the implementation block
@property (nonatomic,retain) TVPBaseMediaItem * mediaItem;                               //@synthesize mediaItem=_mediaItem - In the implementation block
@property (assign,getter=isUnknownItemType,nonatomic) BOOL unknownItemType;              //@synthesize unknownItemType=_unknownItemType - In the implementation block
@property (nonatomic,copy) NSString * unknownItemDescription;                            //@synthesize unknownItemDescription=_unknownItemDescription - In the implementation block
+(double)_playedThresholdTimeForDuration:(double)arg1 ;
-(TVPBaseMediaItem *)mediaItem;
-(void)setMediaItem:(TVPBaseMediaItem *)arg1 ;
-(MPModelPodcastEpisode *)podcastEpisode;
-(void)setPodcastEpisode:(MPModelPodcastEpisode *)arg1 ;
-(void)setResponseItem:(MPCPlayerResponseItem *)arg1 ;
-(MPCPlayerResponseItem *)responseItem;
-(void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(id)reportingDelegate;
-(id)mediaItemURL;
-(BOOL)hasTrait:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(void)removeMediaItemMetadataForProperty:(id)arg1 ;
-(void)performMediaItemMetadataTransactionWithBlock:(/*^block*/id)arg1 ;
-(id)initWithPlayerResponseItem:(id)arg1 mediaItemMetadata:(id)arg2 ;
-(NSDictionary *)mediaItemMetadata;
-(BOOL)isUnknownItemType;
-(NSString *)unknownItemDescription;
-(id)initWithPlayerResponseItem:(id)arg1 ;
-(void)setUnknownItemType:(BOOL)arg1 ;
-(void)setUnknownItemDescription:(NSString *)arg1 ;
-(void)setMediaItemMetadata:(NSDictionary *)arg1 ;
@end

