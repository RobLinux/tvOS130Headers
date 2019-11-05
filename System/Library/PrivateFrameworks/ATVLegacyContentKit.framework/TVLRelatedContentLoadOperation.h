/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <Foundation/NSOperation.h>

@protocol TVPPlayback, TVPMediaItem;
@class TVLVideoPlayerElement, NSObject, TVPRelatedContent;

@interface TVLRelatedContentLoadOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	id<TVPPlayback> _player;
	TVLVideoPlayerElement* _videoPlayerElement;
	NSObject*<TVPMediaItem> _mediaItem;
	TVPRelatedContent* _relatedContent;

}

@property (nonatomic,retain) TVPRelatedContent * relatedContent;                        //@synthesize relatedContent=_relatedContent - In the implementation block
@property (nonatomic,readonly) id<TVPPlayback> player;                                  //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) TVLVideoPlayerElement * videoPlayerElement;              //@synthesize videoPlayerElement=_videoPlayerElement - In the implementation block
@property (nonatomic,readonly) NSObject*<TVPMediaItem> mediaItem;                       //@synthesize mediaItem=_mediaItem - In the implementation block
-(id)init;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(id<TVPPlayback>)player;
-(NSObject*<TVPMediaItem>)mediaItem;
-(TVPRelatedContent *)relatedContent;
-(id)initWithPlayer:(id)arg1 videoPlayerElement:(id)arg2 mediaItem:(id)arg3 ;
-(TVLVideoPlayerElement *)videoPlayerElement;
-(BOOL)_containsOptions:(id)arg1 ;
-(id)_upNextJSParamterFromVideoAsset:(id)arg1 context:(OpaqueJSContextRef)arg2 ;
-(void)_beginExecuting;
-(void)setRelatedContent:(TVPRelatedContent *)arg1 ;
-(void)_endExecuting;
-(void)_loadRelatedContentForMediaItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

