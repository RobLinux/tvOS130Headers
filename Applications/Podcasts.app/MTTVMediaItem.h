/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:18 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/TVPMediaItem.h>

@class MTPlayerItem, NSString;

@interface MTTVMediaItem : NSObject <TVPMediaItem> {

	MTPlayerItem* _playerItem;

}

@property (nonatomic,retain) MTPlayerItem * playerItem;              //@synthesize playerItem=_playerItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MTPlayerItem *)playerItem;
-(void)setPlayerItem:(MTPlayerItem *)arg1 ;
-(id)initWithMediaItem:(id)arg1 ;
-(void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(id)reportingDelegate;
-(void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(BOOL)arg4 ;
-(id)mediaItemURL;
-(BOOL)hasTrait:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(void)removeMediaItemMetadataForProperty:(id)arg1 ;
-(void)performMediaItemMetadataTransactionWithBlock:(/*^block*/id)arg1 ;
@end

