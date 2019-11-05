/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TVPAVFPlayback;
@class NSObject, UILabel, TVPPlayerLayerView, UIImageView;

@interface TVPVideoView : UIView {

	BOOL _isPrimarySubtitleDisplayer;
	BOOL _readyForDisplay;
	long long _videoGravity;
	NSObject*<TVPAVFPlayback> _player;
	UILabel* _debugLabel;
	TVPPlayerLayerView* _playerLayerView;
	UIImageView* _stillImageView;

}

@property (nonatomic,retain) TVPPlayerLayerView * playerLayerView;                       //@synthesize playerLayerView=_playerLayerView - In the implementation block
@property (assign,getter=isReadyForDisplay,nonatomic) BOOL readyForDisplay;              //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (nonatomic,retain) UIImageView * stillImageView;                               //@synthesize stillImageView=_stillImageView - In the implementation block
@property (nonatomic,retain) NSObject*<TVPAVFPlayback> player;                           //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) UILabel * debugLabel;                                     //@synthesize debugLabel=_debugLabel - In the implementation block
@property (assign,nonatomic) BOOL isPrimarySubtitleDisplayer;                            //@synthesize isPrimarySubtitleDisplayer=_isPrimarySubtitleDisplayer - In the implementation block
@property (assign,nonatomic) long long videoGravity;                                     //@synthesize videoGravity=_videoGravity - In the implementation block
+(void)initialize;
+(void)_playerStateDidChange:(id)arg1 ;
+(id)preservedVideoViewsForPlayer:(id)arg1 identifier:(id)arg2 ;
+(void)preserveVideoViewForReuse:(id)arg1 identifier:(id)arg2 ;
+(void)_purgePreservedVideoViewsForPlayer:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UILabel *)debugLabel;
-(NSObject*<TVPAVFPlayback>)player;
-(void)setPlayer:(NSObject*<TVPAVFPlayback>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)videoGravity;
-(BOOL)isReadyForDisplay;
-(void)setVideoGravity:(long long)arg1 ;
-(TVPPlayerLayerView *)playerLayerView;
-(void)setPlayerLayerView:(TVPPlayerLayerView *)arg1 ;
-(void)setIsPrimarySubtitleDisplayer:(BOOL)arg1 ;
-(BOOL)isPrimarySubtitleDisplayer;
-(void)setAVPlayer:(id)arg1 ;
-(void)setReadyForDisplay:(BOOL)arg1 ;
-(void)_playerStillImageDidChange:(id)arg1 ;
-(UIImageView *)stillImageView;
-(void)setStillImageView:(UIImageView *)arg1 ;
-(id)AVPlayer;
@end

