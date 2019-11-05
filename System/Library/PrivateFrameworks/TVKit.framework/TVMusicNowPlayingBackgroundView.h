/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView;

@interface TVMusicNowPlayingBackgroundView : UIView {

	UIImage* _artworkImage;
	UIImageView* _animatedView1;
	UIImageView* _animatedView2;

}
-(id)initWithImage:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)_setupAnimatedViews;
-(void)_setupAnimations;
-(void)_setupAnimationForView:(id)arg1 duration:(double)arg2 ;
-(id)_blurredImageWithImage:(id)arg1 targetSize:(CGSize)arg2 ;
-(id)_resizeImage:(CGImageRef)arg1 targetSize:(CGSize)arg2 shouldDither:(BOOL)arg3 ;
@end

