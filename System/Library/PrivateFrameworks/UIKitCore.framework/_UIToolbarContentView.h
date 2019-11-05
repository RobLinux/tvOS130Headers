/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarContentView.h>

@class _UIButtonBar, NSLayoutConstraint, NSMapTable, _UIBarButtonItemData;

@interface _UIToolbarContentView : _UIBarContentView {

	_UIButtonBar* _buttonBar;
	NSLayoutConstraint* _buttonBarLeadingConstraint;
	NSLayoutConstraint* _buttonBarTrailingConstraint;
	NSMapTable* _absorptionTable;
	double _standardEdgeSpacing;
	BOOL _hitTestingExtensionsAreValid;
	BOOL _compactMetrics;
	long long _itemDistribution;
	_UIBarButtonItemData* _plainItemAppearance;
	_UIBarButtonItemData* _doneItemAppearance;
	NSDirectionalEdgeInsets _padding;

}

@property (assign,nonatomic) NSDirectionalEdgeInsets padding;                       //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) long long itemDistribution;                            //@synthesize itemDistribution=_itemDistribution - In the implementation block
@property (assign,nonatomic) BOOL compactMetrics;                                   //@synthesize compactMetrics=_compactMetrics - In the implementation block
@property (nonatomic,copy) _UIBarButtonItemData * plainItemAppearance;              //@synthesize plainItemAppearance=_plainItemAppearance - In the implementation block
@property (nonatomic,copy) _UIBarButtonItemData * doneItemAppearance;               //@synthesize doneItemAppearance=_doneItemAppearance - In the implementation block
-(NSDirectionalEdgeInsets)padding;
-(void)setPadding:(NSDirectionalEdgeInsets)arg1 ;
-(void)updateConstraints;
-(void)tintColorDidChange;
-(void)layoutMarginsDidChange;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)updateContent;
-(void)setItemDistribution:(long long)arg1 ;
-(long long)itemDistribution;
-(void)_appearanceChanged;
-(void)setPlainItemAppearance:(_UIBarButtonItemData *)arg1 ;
-(void)setDoneItemAppearance:(_UIBarButtonItemData *)arg1 ;
-(_UIBarButtonItemData *)plainItemAppearance;
-(_UIBarButtonItemData *)doneItemAppearance;
-(unsigned long long)edgesPaddingBarButtonItem:(id)arg1 ;
-(BOOL)compactMetrics;
-(double)defaultEdgeSpacing;
-(double)absorptionForItem:(id)arg1 ;
-(double)defaultTextPadding;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3 ;
-(void)setCompactMetrics:(BOOL)arg1 ;
-(void)reloadWithItems:(id)arg1 ;
-(NSDirectionalEdgeInsets)_directionalSafeArea;
-(void)_updateButtonBarConstraintConstants;
-(id)_computeEdgeAbsorptionForItems:(id)arg1 ;
-(void)_updateThreeUpFlagsForItems:(id)arg1 ;
-(id)_newButtonBarWithItems:(id)arg1 ;
@end

