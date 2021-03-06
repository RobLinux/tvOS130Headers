/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVUIKit/_TVStackedMediaEntryView.h>

@class _TVStackedMediaDocumentEntry, _TVStackedImageView, _TVStackedVideoPlayerLayerContainerView, NSString;

@interface _TVStackedVideoPlayerView : UIView <_TVStackedMediaEntryView> {

	_TVStackedMediaDocumentEntry* _entry;
	_TVStackedImageView* _previewImageView;
	_TVStackedVideoPlayerLayerContainerView* _playerContainerView;

}

@property (nonatomic,retain) _TVStackedMediaDocumentEntry * entry;                                       //@synthesize entry=_entry - In the implementation block
@property (nonatomic,retain) _TVStackedImageView * previewImageView;                                     //@synthesize previewImageView=_previewImageView - In the implementation block
@property (nonatomic,retain) _TVStackedVideoPlayerLayerContainerView * playerContainerView;              //@synthesize playerContainerView=_playerContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)player;
-(id)initWithFrame:(CGRect)arg1 ;
-(_TVStackedMediaDocumentEntry *)entry;
-(void)setEntry:(_TVStackedMediaDocumentEntry *)arg1 ;
-(_TVStackedImageView *)previewImageView;
-(void)playVideo:(BOOL)arg1 ;
-(void)configureWithEntry:(id)arg1 ;
-(void)resetVideoPlayback;
-(void)_configureWithPlayerLayer:(id)arg1 ;
-(void)_transitionPreviewToVideo;
-(void)_finishPreviewToVideoTransition;
-(void)_prepareVideoToPreviewTransition;
-(void)_transitionVideoToPreview;
-(void)_finishVideoToPreviewTransition;
-(void)_teardownPlayerLayer;
-(_TVStackedVideoPlayerLayerContainerView *)playerContainerView;
-(void)setPreviewImageView:(_TVStackedImageView *)arg1 ;
-(void)setPlayerContainerView:(_TVStackedVideoPlayerLayerContainerView *)arg1 ;
@end

