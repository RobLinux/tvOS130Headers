/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AVPlayerLayer;

@interface _TVStackedVideoPlayerLayerContainerView : UIView {

	AVPlayerLayer* _playerLayer;

}

@property (nonatomic,retain) AVPlayerLayer * playerLayer;              //@synthesize playerLayer=_playerLayer - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(void)layoutSubviews;
@end
