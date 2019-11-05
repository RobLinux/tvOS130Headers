/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVMLKit/_TVPlaybackViewControllerDelegate.h>
#import <TVMLKit/TVAuxiliaryViewSelecting.h>

@class IKMediaContentElement, _TVPlayer, UICollectionReusableView, UIViewController, _UIFloatingContentView, UIView, NSString;

@interface _TVInlinePlayerView : UIView <_TVPlaybackViewControllerDelegate, TVAuxiliaryViewSelecting> {

	IKMediaContentElement* _mediaContentElement;
	long long _playbackMode;
	long long _audioMode;
	_TVPlayer* _appPlayer;
	UICollectionReusableView* _containingCell;
	UIViewController* _hostViewController;
	UIViewController* _playerViewController;
	CGRect _hostedPlayerViewFrame;
	BOOL _playbackEnabled;
	int _playbackState;
	_UIFloatingContentView* _floatingView;
	UIView* _staticView;
	BOOL _usesFocusedState;
	BOOL _playerViewEnabled;
	UIView* _imageView;
	UIView* _playerView;

}

@property (nonatomic,__weak,readonly) UIViewController * hostViewController; 
@property (nonatomic,readonly) long long playbackMode; 
@property (nonatomic,readonly) long long audioMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect _playerViewFrame; 
@property (nonatomic,retain) UIView * imageView;                                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * playerView;                                         //@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic) BOOL usesFocusedState;                                       //@synthesize usesFocusedState=_usesFocusedState - In the implementation block
@property (assign,nonatomic) BOOL playerViewEnabled;                                      //@synthesize playerViewEnabled=_playerViewEnabled - In the implementation block
+(id)_makePlayerViewControllerWithPlayer:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_stop;
-(UIView *)imageView;
-(void)layoutSubviews;
-(UIViewController *)hostViewController;
-(void)didMoveToWindow;
-(void)setImageView:(UIView *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(long long)playbackMode;
-(void)_playbackError:(id)arg1 ;
-(long long)audioMode;
-(void)setPlayerView:(UIView *)arg1 ;
-(UIView *)playerView;
-(void)_play;
-(void)updateWithViewElement:(id)arg1 ;
-(id)playbackViewController:(id)arg1 customAnimatorForNavigationControllerOperation:(long long)arg2 ;
-(void)viewWillAppearForPlaybackViewController:(id)arg1 ;
-(void)viewDidAppearForPlaybackViewController:(id)arg1 ;
-(void)viewWillDisappearForPlaybackViewController:(id)arg1 ;
-(void)viewDidDisappearForPlaybackViewController:(id)arg1 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)_controller_dealloc;
-(void)_controller_viewWillMoveToWindow:(id)arg1 andSuperView:(id)arg2 ;
-(void)_controller_viewDidMoveToWindow;
-(CGPoint)focusDirection;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)playerViewEnabled;
-(void)setPlayerViewEnabled:(BOOL)arg1 ;
-(void)setUsesFocusedState:(BOOL)arg1 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(CGRect)_playerViewFrame;
-(BOOL)usesFocusedState;
-(void)_hostPlayer:(BOOL)arg1 ;
-(void)_schedule;
-(BOOL)_canHostPlayer;
-(void)_containingCellDidDisplay:(BOOL)arg1 ;
-(void)_containingCellDidFocus:(BOOL)arg1 ;
-(BOOL)_isPlayerHosted;
-(void)_playerWillGetPresented:(id)arg1 ;
@end

