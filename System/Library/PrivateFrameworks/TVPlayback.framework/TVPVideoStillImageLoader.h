/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPPlaybackImageLoader.h>

@protocol TVPMediaItem;
@class NSObject, TVPMediaItemLoader, TVPStateMachine, NSMutableArray, AVAssetImageGenerator, NSString;

@interface TVPVideoStillImageLoader : NSObject <TVPPlaybackImageLoader> {

	NSObject*<TVPMediaItem> _mediaItem;
	TVPMediaItemLoader* _mediaItemLoader;
	TVPStateMachine* _stateMachine;
	NSMutableArray* _pendingImageLoadInfos;
	NSMutableArray* _imageLoadInfosBeingLoaded;
	AVAssetImageGenerator* _imageGenerator;
	SCD_Struct_TV4 _videoDuration;

}

@property (nonatomic,retain) NSObject*<TVPMediaItem> mediaItem;                       //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) TVPMediaItemLoader * mediaItemLoader;                    //@synthesize mediaItemLoader=_mediaItemLoader - In the implementation block
@property (nonatomic,retain) TVPStateMachine * stateMachine;                          //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingImageLoadInfos;                  //@synthesize pendingImageLoadInfos=_pendingImageLoadInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageLoadInfosBeingLoaded;              //@synthesize imageLoadInfosBeingLoaded=_imageLoadInfosBeingLoaded - In the implementation block
@property (nonatomic,retain) AVAssetImageGenerator * imageGenerator;                  //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV4 videoDuration;                            //@synthesize videoDuration=_videoDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(TVPStateMachine *)stateMachine;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(NSObject*<TVPMediaItem>)mediaItem;
-(void)setMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(SCD_Struct_TV4)videoDuration;
-(void)setVideoDuration:(SCD_Struct_TV4)arg1 ;
-(id)initWithMediaItem:(id)arg1 ;
-(AVAssetImageGenerator *)imageGenerator;
-(void)setImageGenerator:(AVAssetImageGenerator *)arg1 ;
-(void)cancelImageLoadingForIdentifiers:(id)arg1 ;
-(id)loadImagesForTimes:(id)arg1 maxSize:(CGSize)arg2 withHandler:(/*^block*/id)arg3 ;
-(double)closestImageTimeForTime:(double)arg1 ;
-(void)_registerStateMachineHandlers;
-(void)setMediaItemLoader:(TVPMediaItemLoader *)arg1 ;
-(TVPMediaItemLoader *)mediaItemLoader;
-(void)_mediaItemLoader:(id)arg1 stateDidChangeTo:(id)arg2 ;
-(NSMutableArray *)pendingImageLoadInfos;
-(NSMutableArray *)imageLoadInfosBeingLoaded;
-(void)setPendingImageLoadInfos:(NSMutableArray *)arg1 ;
-(void)setImageLoadInfosBeingLoaded:(NSMutableArray *)arg1 ;
@end

