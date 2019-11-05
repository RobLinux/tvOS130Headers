/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCopying.h>

@class _UIButtonBarButton, UIView;

@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying> {

	_UIButtonBarButton* _button;

}

@property (nonatomic,readonly) UIView * backIndicatorView; 
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic) BOOL backButtonConstraintsActive; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIView *)contentView;
-(BOOL)supportsBackButtons;
-(UIView *)backIndicatorView;
-(BOOL)backButtonConstraintsActive;
-(void)setBackButtonConstraintsActive:(BOOL)arg1 ;
-(BOOL)buttonSelectionState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(BOOL)buttonHighlitedState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(BOOL)buttonEnabledState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forFocusedState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(void)updateButton:(id)arg1 appearance:(id)arg2 ;
-(void)updateButton:(id)arg1 toUseButtonShapes:(BOOL)arg2 ;
-(void)buttonLayoutSubviews:(id)arg1 baseImplementation:(/*^block*/id)arg2 ;
-(void)buttonWillMoveToWindow:(id)arg1 ;
-(void)buttonWillMoveToSuperview:(id)arg1 ;
-(void)button:(id)arg1 traitCollectionDidChange:(id)arg2 ;
-(CGSize)buttonIntrinsicContentSize:(id)arg1 ;
-(UIEdgeInsets)buttonAlignmentRectInsets:(id)arg1 ;
-(void)resetButtonHasHighlighted;
@end

