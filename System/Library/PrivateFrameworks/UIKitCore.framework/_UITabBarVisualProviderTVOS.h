/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITabBarVisualProvider.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKitCore/_UIBarAppearanceChangeObserver.h>

@class _UIBarBackground, _UIBarBackgroundLayout, UIView, UIScrollView, CAGradientLayer, CABackdropLayer, UIInterpolatingMotionEffect, UITabBarButton, UIFocusUpdateContext, UIFocusAnimationCoordinator, NSString;

@interface _UITabBarVisualProviderTVOS : _UITabBarVisualProvider <UIScrollViewDelegate, _UIBarAppearanceChangeObserver> {

	BOOL _useModernAppearance;
	_UIBarBackground* _backgroundView;
	_UIBarBackgroundLayout* _backgroundViewLayout;
	UIView* _customBackgroundView;
	UIScrollView* _itemsScrollView;
	UIView* _itemsScrollContainerView;
	CAGradientLayer* _scrollViewMask;
	CABackdropLayer* _maskBackdropLayer;
	UIView* _selectionPlatterContainerView;
	UIView* _selectionPlatterView;
	UIInterpolatingMotionEffect* _motionEffect;
	UITabBarButton* _prevSelectedButton;
	UIFocusUpdateContext* _focusContext;
	UIFocusAnimationCoordinator* _focusAnimationCoordinator;
	BOOL _shouldAnimateSelectionPlatterInPlace;
	BOOL _prevFocused;
	BOOL _focused;
	UITabBarButton* _selectedButton;

}

@property (assign,nonatomic,__weak) UITabBarButton * selectedButton;              //@synthesize selectedButton=_selectedButton - In the implementation block
@property (assign,nonatomic) BOOL focused;                                        //@synthesize focused=_focused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)teardown;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)prepare;
-(void)layoutSubviews;
-(UITabBarButton *)selectedButton;
-(void)setSelectedButton:(UITabBarButton *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusedView;
-(void)_updateColors;
-(void)_updateViews;
-(void)setFocused:(BOOL)arg1 ;
-(BOOL)focused;
-(void)_updateAccessoryViews;
-(void)appearance:(id)arg1 categoriesChanged:(long long)arg2 ;
-(id)_shim_compatibilityBackgroundView;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(double)_shim_shadowAlpha;
-(void)changeAppearance;
-(id)appearanceObserver;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)changeLayout;
-(void)updateBackgroundGroupName;
-(void)_updateBackground;
-(id)_shim_accessoryView;
-(void)_shim_setAccessoryView:(id)arg1 ;
-(void)setUseModernAppearance:(BOOL)arg1 ;
-(BOOL)useModernAppearance;
-(void)changeSelectedItem:(id)arg1 fromItem:(id)arg2 ;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(BOOL)arg5 ;
-(CGSize)intrinsicContentSizeGivenSize:(CGSize)arg1 ;
-(void)_shim_updateFocusHighlightVisibility;
-(id)exchangeItem:(id)arg1 withItem:(id)arg2 ;
-(void)_shim_layoutItemsOnly;
-(void)_shim_updateTabBarItemView:(id)arg1 ;
-(void)_layoutTabBarItems;
-(void)_updateAppearanceForTransitionFromItem:(id)arg1 toItem:(id)arg2 ;
-(void)_applyAppearanceCustomizationsToItem:(id)arg1 ;
-(void)_configureItems:(id)arg1 ;
-(void)_updateBackgroundModern;
-(void)_updateBackgroundLegacy;
-(id)_createViewForTabBarItem:(id)arg1 ;
-(void)_updatePlatterRectWithSelectedItem:(id)arg1 ;
-(void)_updateScrollContainerMaskIfNeeded;
-(CGRect)_getRectForUnfocusedSelectionPlatterForView:(id)arg1 ;
-(CGRect)_getRectForFocusedSelectionPlatterForView:(id)arg1 finalSize:(BOOL)arg2 ;
-(void)_updateScrollOffsetIfNeeded;
-(void)_updateColorsWithTitleAnimationDuration:(double)arg1 withDelay:(double)arg2 ;
-(void)_updateMotionEffect;
-(CGRect)__getRectForPlatterForView:(id)arg1 withFocus:(BOOL)arg2 finalSize:(BOOL)arg3 ;
@end

