/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIKBBackdropView, _UIVisualEffectBackdropView;

@interface UIKBInputBackdropView : UIView {

	UIKBBackdropView* _inputBackdropFullView;
	UIKBBackdropView* _inputBackdropLeftView;
	UIKBBackdropView* _inputBackdropRightView;
	unsigned long long _innerCorners;
	BOOL _isTransitioning;
	double _transitionGap;
	double _transitionLeftOffset;
	long long _style;
	BOOL _hasStartRect;
	BOOL _hasEndRect;
	CGRect _savedStartRect;
	CGRect _savedEndRect;
	_UIVisualEffectBackdropView* _captureView;

}

@property (nonatomic,retain) UIKBBackdropView * inputBackdropFullView;               //@synthesize inputBackdropFullView=_inputBackdropFullView - In the implementation block
@property (nonatomic,retain) UIKBBackdropView * inputBackdropLeftView;               //@synthesize inputBackdropLeftView=_inputBackdropLeftView - In the implementation block
@property (nonatomic,retain) UIKBBackdropView * inputBackdropRightView;              //@synthesize inputBackdropRightView=_inputBackdropRightView - In the implementation block
@property (nonatomic,retain) _UIVisualEffectBackdropView * captureView;              //@synthesize captureView=_captureView - In the implementation block
@property (readonly) long long style;                                                //@synthesize style=_style - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)dealloc;
-(long long)style;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForSnapshotting;
-(BOOL)_isTransitioning;
-(void)_setRenderConfig:(id)arg1 ;
-(void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2 ;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg1 ;
-(void)setCaptureView:(_UIVisualEffectBackdropView *)arg1 ;
-(_UIVisualEffectBackdropView *)captureView;
-(int)textEffectsVisibilityLevel;
-(void)layoutInputBackdropToSplitWithLeftViewRect:(CGRect)arg1 andRightViewRect:(CGRect)arg2 innerCorners:(unsigned long long)arg3 ;
-(void)layoutInputBackdropToFullWithRect:(CGRect)arg1 ;
-(void)_setProgress:(double)arg1 withFrame:(CGRect)arg2 ;
-(UIKBBackdropView *)inputBackdropFullView;
-(UIKBBackdropView *)inputBackdropLeftView;
-(UIKBBackdropView *)inputBackdropRightView;
-(void)transitionToStyle:(long long)arg1 isSplit:(BOOL)arg2 ;
-(void)_setFrame:(CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4 innerCorners:(unsigned long long)arg5 ;
-(void)_setInitialProgressWithFrame:(CGRect)arg1 ;
-(void)_setFrame:(CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4 ;
-(void)restoreFromSnapshotting;
-(void)setInputBackdropFullView:(UIKBBackdropView *)arg1 ;
-(void)setInputBackdropLeftView:(UIKBBackdropView *)arg1 ;
-(void)setInputBackdropRightView:(UIKBBackdropView *)arg1 ;
@end

