/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIFloatingContentView, _TVVisualEffectView, UIView, UILabel, CALayer, _TVVisualEffectLabel, UIColor, _TVImageView, IKViewElement;

@interface TVButtonLockup : UIView {

	_UIFloatingContentView* _floatingView;
	_TVVisualEffectView* _backdropView;
	UIView* _overlayView;
	UILabel* _textView;
	UILabel* _textMask;
	CALayer* _imageMask;
	_TVVisualEffectLabel* _vibrantLabel;
	UIColor* __backgroundColor;
	UIColor* _highlightColor;
	BOOL _disabled;
	long long _backdropStyle;
	long long _vibrantLabelThemeOverride;
	_TVImageView* _imageView;
	UILabel* _titleView;
	IKViewElement* _viewElement;

}

@property (nonatomic,readonly) long long backdropStyle;                        //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                  //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) long long vibrantLabelThemeOverride;              //@synthesize vibrantLabelThemeOverride=_vibrantLabelThemeOverride - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleView;                              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,copy) UIColor * highlightColor;                           //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                      //@synthesize viewElement=_viewElement - In the implementation block
-(void)dealloc;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIColor *)highlightColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isDisabled;
-(_TVImageView *)imageView;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(IKViewElement *)viewElement;
-(UILabel *)titleView;
-(void)setTitleView:(UILabel *)arg1 ;
-(void)_selectButtonAction:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)_updateImageMask;
-(void)_updateForAccessibilityChange;
-(void)_updateForFocusStateChange;
-(void)_updateTextForAccessibilityAndFocus;
-(void)_updateShadowForLabel:(id)arg1 inFocus:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 groupName:(id)arg3 ;
-(void)setText:(id)arg1 minimumScale:(double)arg2 maxNumberOfLines:(unsigned long long)arg3 ;
-(long long)_focusedSound;
-(long long)backdropStyle;
-(long long)vibrantLabelThemeOverride;
-(void)setVibrantLabelThemeOverride:(long long)arg1 ;
@end

