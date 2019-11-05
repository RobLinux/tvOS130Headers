/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVStackedVideoAssetLoaderDelegate;
@class _TVStackedMediaDocumentEntry, AVAsset, AVPlayerItem, AVPlayer, AVPlayerLayer, NSError;

@interface _TVStackedVideoAssetLoader : NSObject {

	BOOL _isObservingPlayerStatus;
	_TVStackedMediaDocumentEntry* _entry;
	id<_TVStackedVideoAssetLoaderDelegate> _delegate;
	AVAsset* _asset;
	AVPlayerItem* _playerItem;
	AVPlayer* _player;
	AVPlayerLayer* _playerLayer;
	NSError* _error;
	long long _state;

}

@property (nonatomic,retain) _TVStackedMediaDocumentEntry * entry;                                //@synthesize entry=_entry - In the implementation block
@property (nonatomic,retain) AVAsset * asset;                                                     //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                           //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                   //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * playerLayer;                                         //@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,retain) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long state;                                                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL isObservingPlayerStatus;                                        //@synthesize isObservingPlayerStatus=_isObservingPlayerStatus - In the implementation block
@property (assign,nonatomic,__weak) id<_TVStackedVideoAssetLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_serialQueue;
-(void)dealloc;
-(id<_TVStackedVideoAssetLoaderDelegate>)delegate;
-(void)setDelegate:(id<_TVStackedVideoAssetLoaderDelegate>)arg1 ;
-(NSError *)error;
-(long long)state;
-(void)cancel;
-(void)setState:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isLoaded;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(AVAsset *)asset;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(_TVStackedMediaDocumentEntry *)entry;
-(void)setEntry:(_TVStackedMediaDocumentEntry *)arg1 ;
-(void)setAsset:(AVAsset *)arg1 ;
-(id)initWithEntry:(id)arg1 ;
-(void)_unobservePlayerStatus;
-(void)_createAndConfigurePlayerItem;
-(void)_timeoutIfNecessary;
-(void)_notifyDelegateOfLoaded:(BOOL)arg1 error:(id)arg2 ;
-(void)__notifyDelegateOfLoaded:(BOOL)arg1 error:(id)arg2 ;
-(id)_playerItemWithEntry:(id)arg1 asset:(id)arg2 error:(id*)arg3 ;
-(void)_configurePlayerItemComposition:(id)arg1 forEntry:(id)arg2 ;
-(void)_createAndObservePlayerLayer;
-(void)_observePlayerStatus;
-(BOOL)isObservingPlayerStatus;
-(void)setIsObservingPlayerStatus:(BOOL)arg1 ;
-(id)_createAtlasComposition:(id)arg1 ;
-(id)_createLumaComposition:(id)arg1 ;
-(id)_createUnclampedLumaComposition:(id)arg1 ;
-(id)_createCompositionContext;
-(void)loadEntryAsset;
@end

