/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIButton.h>
#import <PhotoLibrary/_UIBackdropViewObserver.h>

@class UIImageView, _UIBackdropView;

@interface PLWallpaperButton : UIButton <_UIBackdropViewObserver> {

	UIImageView* _titleMaskImageView;
	_UIBackdropView* _backdropView;

}

@property (nonatomic,retain) UIImageView * titleMaskImageView;              //@synthesize titleMaskImageView=_titleMaskImageView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                //@synthesize backdropView=_backdropView - In the implementation block
+(id)autoLayoutCommonWallpaperButton;
+(id)autoLayoutCommonWallpaperButtonWithStyle:(long long)arg1 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)safeAreaInsetsDidChange;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)backdropViewDidChange:(id)arg1 ;
-(void)_updateContentEdgeInsets;
-(void)_setupBackdropView;
-(UIImageView *)titleMaskImageView;
-(void)setTitleMaskImageView:(UIImageView *)arg1 ;
@end

