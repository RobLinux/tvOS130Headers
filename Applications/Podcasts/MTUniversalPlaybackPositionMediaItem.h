/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MZUniversalPlaybackPositionMediaItem.h>

@class NSDictionary, MTEpisode, NSString;

@interface MTUniversalPlaybackPositionMediaItem : NSObject <MZUniversalPlaybackPositionMediaItem> {

	NSDictionary* _mediaItemDictionary;
	MTEpisode* _episode;

}

@property (nonatomic,retain) NSDictionary * mediaItemDictionary;              //@synthesize mediaItemDictionary=_mediaItemDictionary - In the implementation block
@property (nonatomic,retain) MTEpisode * episode;                             //@synthesize episode=_episode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(MTEpisode *)episode;
-(void)setEpisode:(MTEpisode *)arg1 ;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)populateEpisodeDictionary;
-(NSDictionary *)mediaItemDictionary;
-(void)setMediaItemDictionary:(NSDictionary *)arg1 ;
@end

