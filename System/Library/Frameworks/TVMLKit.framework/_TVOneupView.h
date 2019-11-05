/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol TVOneupViewDelegate, TVOneupViewDataSource;
@class NSMutableDictionary, UITapGestureRecognizer, UIView, UIPanGestureRecognizer, UISwipeGestureRecognizer, NSString;

@interface _TVOneupView : UIView <UIGestureRecognizerDelegate> {

	Class _viewClass;
	Class _supplementaryViewClass;
	struct {
		unsigned _respondsToDidFocusItem : 1;
		unsigned _respondsToDidSelectItem : 1;
		unsigned _respondsToDidPlayItem : 1;
		unsigned _respondsToTransitioningToMode : 1;
		unsigned _respondsToWillDisplay : 1;
		unsigned _respondsToDidEndDisplaying : 1;
	}  _delegateFlags;
	CGPoint _firstTouchLocation;
	CGPoint _minCenter;
	CGPoint _maxCenter;
	NSMutableDictionary* _inUseItemViewsByIndex;
	BOOL _isPerformingTransitionAnimation;
	id<TVOneupViewDelegate> _delegate;
	id<TVOneupViewDataSource> _dataSource;
	unsigned long long _transition;
	long long _focusedItemIndex;
	unsigned long long _allowedModes;
	unsigned long long _currentMode;
	UITapGestureRecognizer* _menuGestureRecognizer;
	unsigned long long _nextEventType;
	UIView* _currentView;
	UIView* _spareView;
	UIView* _currentSupplementaryView;
	UIView* _spareSupplementaryView;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UISwipeGestureRecognizer* _upSwipeGesture;
	UISwipeGestureRecognizer* _downSwipeGesture;
	UISwipeGestureRecognizer* _leftSwipeGesture;
	UISwipeGestureRecognizer* _rightSwipeGesture;

}

@property (assign,nonatomic) unsigned long long nextEventType;                                   //@synthesize nextEventType=_nextEventType - In the implementation block
@property (assign,nonatomic,__weak) UITapGestureRecognizer * menuGestureRecognizer;              //@synthesize menuGestureRecognizer=_menuGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * currentView;                                               //@synthesize currentView=_currentView - In the implementation block
@property (nonatomic,retain) UIView * spareView;                                                 //@synthesize spareView=_spareView - In the implementation block
@property (nonatomic,retain) UIView * currentSupplementaryView;                                  //@synthesize currentSupplementaryView=_currentSupplementaryView - In the implementation block
@property (nonatomic,retain) UIView * spareSupplementaryView;                                    //@synthesize spareSupplementaryView=_spareSupplementaryView - In the implementation block
@property (assign,nonatomic,__weak) UIPanGestureRecognizer * panGestureRecognizer;               //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UISwipeGestureRecognizer * upSwipeGesture;                   //@synthesize upSwipeGesture=_upSwipeGesture - In the implementation block
@property (assign,nonatomic,__weak) UISwipeGestureRecognizer * downSwipeGesture;                 //@synthesize downSwipeGesture=_downSwipeGesture - In the implementation block
@property (assign,nonatomic,__weak) UISwipeGestureRecognizer * leftSwipeGesture;                 //@synthesize leftSwipeGesture=_leftSwipeGesture - In the implementation block
@property (assign,nonatomic,__weak) UISwipeGestureRecognizer * rightSwipeGesture;                //@synthesize rightSwipeGesture=_rightSwipeGesture - In the implementation block
@property (assign,nonatomic) BOOL isPerformingTransitionAnimation;                               //@synthesize isPerformingTransitionAnimation=_isPerformingTransitionAnimation - In the implementation block
@property (assign,nonatomic,__weak) id<TVOneupViewDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<TVOneupViewDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long transition;                                      //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) long long focusedItemIndex;                                         //@synthesize focusedItemIndex=_focusedItemIndex - In the implementation block
@property (nonatomic,readonly) UIView * focusedItemView; 
@property (nonatomic,readonly) UIView * focusedItemSupplementaryView; 
@property (assign,nonatomic) unsigned long long allowedModes;                                    //@synthesize allowedModes=_allowedModes - In the implementation block
@property (assign,nonatomic) unsigned long long currentMode;                                     //@synthesize currentMode=_currentMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TVOneupViewDelegate>)delegate;
-(void)setDelegate:(id<TVOneupViewDelegate>)arg1 ;
-(unsigned long long)currentMode;
-(unsigned long long)transition;
-(void)setCurrentMode:(unsigned long long)arg1 ;
-(id<TVOneupViewDataSource>)dataSource;
-(void)setDataSource:(id<TVOneupViewDataSource>)arg1 ;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setTransition:(unsigned long long)arg1 ;
-(BOOL)canBecomeFocused;
-(UITapGestureRecognizer *)menuGestureRecognizer;
-(void)setMenuGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setFocusedItemIndex:(long long)arg1 ;
-(void)registerItemViewClass:(Class)arg1 ;
-(void)registerSupplementaryViewClass:(Class)arg1 ;
-(void)setAllowedModes:(unsigned long long)arg1 ;
-(UIView *)focusedItemView;
-(id)dequeueReusableItemView;
-(id)dequeueReusableSupplementaryView;
-(unsigned long long)allowedModes;
-(void)setAdjustedFocusIndex:(long long)arg1 ;
-(void)reloadDataWithNewIndexByOldIndexMapping:(/*^block*/id)arg1 ;
-(long long)focusedItemIndex;
-(UIView *)focusedItemSupplementaryView;
-(void)_doubleTapAction:(id)arg1 ;
-(void)_leftAction:(id)arg1 ;
-(void)setLeftSwipeGesture:(UISwipeGestureRecognizer *)arg1 ;
-(void)_rightAction:(id)arg1 ;
-(void)setRightSwipeGesture:(UISwipeGestureRecognizer *)arg1 ;
-(void)_upAction:(id)arg1 ;
-(void)setUpSwipeGesture:(UISwipeGestureRecognizer *)arg1 ;
-(void)_downAction:(id)arg1 ;
-(void)setDownSwipeGesture:(UISwipeGestureRecognizer *)arg1 ;
-(void)_panAction:(id)arg1 ;
-(void)_menuAction:(id)arg1 ;
-(void)_selectButtonAction:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(void)_longPressAction:(id)arg1 ;
-(void)_transitionToItemAtIndex:(long long)arg1 ;
-(void)setCurrentView:(UIView *)arg1 ;
-(void)setSpareView:(UIView *)arg1 ;
-(void)setSpareSupplementaryView:(UIView *)arg1 ;
-(void)setCurrentSupplementaryView:(UIView *)arg1 ;
-(void)_removeAllItemViewsInUseWithIndexMapping:(/*^block*/id)arg1 ;
-(UIView *)currentView;
-(UIView *)currentSupplementaryView;
-(UIView *)spareView;
-(UIView *)spareSupplementaryView;
-(void)_markItemView:(id)arg1 inUseAtIndex:(long long)arg2 ;
-(void)_addAllSubviews;
-(void)_configureItemView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)_indexWithDirection:(unsigned long long)arg1 fromIndex:(long long)arg2 withRecognizer:(id)arg3 ;
-(void)_transitionToCaptionMode;
-(void)_transitionToFullScreenMode;
-(BOOL)_isValidIndex:(long long)arg1 ;
-(UISwipeGestureRecognizer *)leftSwipeGesture;
-(UISwipeGestureRecognizer *)rightSwipeGesture;
-(UISwipeGestureRecognizer *)upSwipeGesture;
-(UISwipeGestureRecognizer *)downSwipeGesture;
-(void)_transitionToSupplementaryView:(id)arg1 itemView:(id)arg2 ;
-(void)_removeItemViewInUse:(id)arg1 ;
-(void)_performPushTransitionToView:(id)arg1 atNewIndex:(long long)arg2 ;
-(void)_performNextEventTransitionIfRequired;
-(unsigned long long)nextEventType;
-(void)setNextEventType:(unsigned long long)arg1 ;
-(BOOL)isPerformingTransitionAnimation;
-(void)setIsPerformingTransitionAnimation:(BOOL)arg1 ;
@end

