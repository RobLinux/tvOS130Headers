/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:01:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVNowPlayingService.app/TVNowPlayingService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPBaseMediaItem.h>

@class TVNPDataImageLoader;

@interface TVNPMediaItem : TVPBaseMediaItem {

	TVNPDataImageLoader* _imageLoader;

}

@property (nonatomic,retain) TVNPDataImageLoader * imageLoader;              //@synthesize imageLoader=_imageLoader - In the implementation block
-(TVNPDataImageLoader *)imageLoader;
-(void)setImageLoader:(TVNPDataImageLoader *)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(void)replaceMediaItemMetadata:(id)arg1 forProperty:(id)arg2 ;
@end

