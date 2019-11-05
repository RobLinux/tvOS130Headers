/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationControllerPalette.h>

@class UISearchBar, UIView;

@interface _UINavigationControllerManagedSearchPalette : _UINavigationControllerPalette {

	BOOL _ignoreGeometryChanges;
	/*^block*/id _resetAfterSearchFieldFade;
	UISearchBar* __searchBar;

}

@property (nonatomic,readonly) UIView * viewForAsymmetricFade; 
@property (assign,nonatomic) BOOL ignoreGeometryChanges;                                         //@synthesize ignoreGeometryChanges=_ignoreGeometryChanges - In the implementation block
@property (nonatomic,copy) id resetAfterSearchFieldFade;                                         //@synthesize resetAfterSearchFieldFade=_resetAfterSearchFieldFade - In the implementation block
@property (assign,setter=_setSearchBar:,nonatomic,__weak) UISearchBar * _searchBar;              //@synthesize _searchBar=__searchBar - In the implementation block
@property (assign,setter=_setShadowAlpha:,nonatomic) double _shadowAlpha; 
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(UISearchBar *)_searchBar;
-(double)_shadowAlpha;
-(void)_setShadowAlpha:(double)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(BOOL)_supportsSpecialSearchBarTransitions;
-(void)_propagateBackgroundToContents;
-(BOOL)_shouldUpdateBackground;
-(void)_setSearchBar:(id)arg1 ;
-(id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2 ;
-(void)_updateLayoutForCurrentConfiguration;
-(id)resetAfterSearchFieldFade;
-(void)setResetAfterSearchFieldFade:(id)arg1 ;
-(UIView *)viewForAsymmetricFade;
-(void)_pushDisableLayoutFlushingForTransition;
-(void)_popDisableLayoutFlushingForTransition;
-(BOOL)ignoreGeometryChanges;
-(void)setIgnoreGeometryChanges:(BOOL)arg1 ;
@end

