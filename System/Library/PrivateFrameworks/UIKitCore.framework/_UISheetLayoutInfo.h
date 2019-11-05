/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UISheetLayoutInfoDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, UIViewController, UIView, UITraitCollection, NSMutableArray;

@interface _UISheetLayoutInfo : NSObject {

	SCD_Struct_UI36 _clean;
	BOOL __bottomAttached;
	BOOL __anyDescendantDragging;
	BOOL __interactionEnabled;
	BOOL __shouldPresentedViewControllerControlStatusBarAppearance;
	BOOL __shouldDimmingIgnoreTouches;
	BOOL __wantsFullScreen;
	BOOL __wantsBottomAttached;
	BOOL __wantsBottomAttachedInCompactHeight;
	BOOL __widthFollowsPreferredContentSizeWhenBottomAttached;
	BOOL __presented;
	BOOL __shouldScaleDownBehindDescendants;
	BOOL __reduceMotionEnabled;
	BOOL __hosting;
	BOOL __shouldDismissWhenTappedOutside;
	BOOL __dragging;
	BOOL __wantsGrabber;
	BOOL __draggingAndDismissing;
	double __minimumTopInset;
	double __maximumWidth;
	double __depthLevel;
	double __percentFullScreen;
	double __dismissOffset;
	long long __indexOfCurrentActiveDetent;
	long long __indexOfActiveDimmingDetent;
	double __maximumNonDismissDetentOffset;
	double __rubberBandExtentBeyondMinimumOffset;
	double __rubberBandExtentBeyondMaximumOffset;
	double __currentOffset;
	double __percentPresented;
	double __percentDimmedFromOffset;
	double __percentDimmed;
	double __confinedPercentDimmed;
	double __shadowOpacity;
	double __alpha;
	double __grabberAlpha;
	NSArray* __dimmedPassthroughViews;
	UIViewController* __presentingViewController;
	UIViewController* __presentedViewController;
	UIView* __containerView;
	UITraitCollection* __containerTraitCollection;
	long long __mode;
	long long __indexOfCurrentDetent;
	long long __indexOfLastUndimmedDetent;
	NSArray* __passthroughViews;
	double __latestUserChosenOffset;
	double __tearOffset;
	double __dismissCornerRadius;
	_UISheetLayoutInfo* __parentLayoutInfo;
	_UISheetLayoutInfo* __childLayoutInfo;
	double __confinedPercentLightened;
	id<_UISheetLayoutInfoDelegate> __delegate;
	NSArray* __reversedDetents;
	NSMutableArray* __mutableActiveDetentValues;
	NSMutableArray* __mutableActiveReversedDetentIndexes;
	CGSize __preferredSize;
	CGRect __floatingUntransformedFrame;
	CGRect __bottomAttachedUntransformedFrame;
	CGRect __fullHeightUntransformedFrame;
	CGRect __stackAlignmentFrame;
	CGRect __untransformedFrame;
	UIRectCornerRadii __cornerRadii;
	CGRect __containerBounds;
	UIEdgeInsets __containerSafeAreaInsets;
	CGRect __sourceFrame;
	CGRect __keyboardFrame;
	CGRect __dismissSourceFrame;
	CGAffineTransform __transform;

}

@property (setter=_setReversedDetents:,nonatomic,retain) NSArray * _reversedDetents;                                                                               //@synthesize _reversedDetents=__reversedDetents - In the implementation block
@property (nonatomic,readonly) long long _reversedIndexOfLastUndimmedDetent; 
@property (nonatomic,readonly) double _minimumTopInset;                                                                                                            //@synthesize _minimumTopInset=__minimumTopInset - In the implementation block
@property (nonatomic,readonly) double _maximumWidth;                                                                                                               //@synthesize _maximumWidth=__maximumWidth - In the implementation block
@property (nonatomic,readonly) CGSize _preferredSize;                                                                                                              //@synthesize _preferredSize=__preferredSize - In the implementation block
@property (nonatomic,readonly) double _depthLevel;                                                                                                                 //@synthesize _depthLevel=__depthLevel - In the implementation block
@property (nonatomic,readonly) BOOL _scalesDownBehindDescendants; 
@property (getter=_isBottomAttached,nonatomic,readonly) BOOL _bottomAttached;                                                                                      //@synthesize _bottomAttached=__bottomAttached - In the implementation block
@property (nonatomic,readonly) CGRect _floatingUntransformedFrame;                                                                                                 //@synthesize _floatingUntransformedFrame=__floatingUntransformedFrame - In the implementation block
@property (nonatomic,readonly) CGRect _bottomAttachedUntransformedFrame;                                                                                           //@synthesize _bottomAttachedUntransformedFrame=__bottomAttachedUntransformedFrame - In the implementation block
@property (nonatomic,readonly) CGRect _fullHeightUntransformedFrame;                                                                                               //@synthesize _fullHeightUntransformedFrame=__fullHeightUntransformedFrame - In the implementation block
@property (nonatomic,readonly) CGRect _stackAlignmentFrame;                                                                                                        //@synthesize _stackAlignmentFrame=__stackAlignmentFrame - In the implementation block
@property (nonatomic,readonly) double _dismissOffset;                                                                                                              //@synthesize _dismissOffset=__dismissOffset - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _mutableActiveDetentValues;                                                                                        //@synthesize _mutableActiveDetentValues=__mutableActiveDetentValues - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _mutableActiveReversedDetentIndexes;                                                                               //@synthesize _mutableActiveReversedDetentIndexes=__mutableActiveReversedDetentIndexes - In the implementation block
@property (nonatomic,readonly) long long _indexOfActiveDimmingDetent;                                                                                              //@synthesize _indexOfActiveDimmingDetent=__indexOfActiveDimmingDetent - In the implementation block
@property (nonatomic,readonly) double _currentOffset;                                                                                                              //@synthesize _currentOffset=__currentOffset - In the implementation block
@property (nonatomic,readonly) double _percentPresented;                                                                                                           //@synthesize _percentPresented=__percentPresented - In the implementation block
@property (nonatomic,readonly) double _percentDimmedFromOffset;                                                                                                    //@synthesize _percentDimmedFromOffset=__percentDimmedFromOffset - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * _presentingViewController;                                                                                  //@synthesize _presentingViewController=__presentingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * _presentedViewController;                                                                                          //@synthesize _presentedViewController=__presentedViewController - In the implementation block
@property (nonatomic,retain) UIView * _containerView;                                                                                                              //@synthesize _containerView=__containerView - In the implementation block
@property (assign,setter=_setContainerBounds:,nonatomic) CGRect _containerBounds;                                                                                  //@synthesize _containerBounds=__containerBounds - In the implementation block
@property (assign,setter=_setContainerSafeAreaInsets:,nonatomic) UIEdgeInsets _containerSafeAreaInsets;                                                            //@synthesize _containerSafeAreaInsets=__containerSafeAreaInsets - In the implementation block
@property (setter=_setContainerTraitCollection:,nonatomic,retain) UITraitCollection * _containerTraitCollection;                                                   //@synthesize _containerTraitCollection=__containerTraitCollection - In the implementation block
@property (assign,setter=_setMode:,nonatomic) long long _mode;                                                                                                     //@synthesize _mode=__mode - In the implementation block
@property (assign,setter=_setSourceFrame:,nonatomic) CGRect _sourceFrame;                                                                                          //@synthesize _sourceFrame=__sourceFrame - In the implementation block
@property (assign,setter=_setKeyboardFrame:,nonatomic) CGRect _keyboardFrame;                                                                                      //@synthesize _keyboardFrame=__keyboardFrame - In the implementation block
@property (assign,setter=_setWantsFullScreen:,nonatomic) BOOL _wantsFullScreen;                                                                                    //@synthesize _wantsFullScreen=__wantsFullScreen - In the implementation block
@property (assign,setter=_setWantsBottomAttached:,nonatomic) BOOL _wantsBottomAttached;                                                                            //@synthesize _wantsBottomAttached=__wantsBottomAttached - In the implementation block
@property (assign,setter=_setWantsBottomAttachedInCompactHeight:,nonatomic) BOOL _wantsBottomAttachedInCompactHeight;                                              //@synthesize _wantsBottomAttachedInCompactHeight=__wantsBottomAttachedInCompactHeight - In the implementation block
@property (assign,setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:,nonatomic) BOOL _widthFollowsPreferredContentSizeWhenBottomAttached;              //@synthesize _widthFollowsPreferredContentSizeWhenBottomAttached=__widthFollowsPreferredContentSizeWhenBottomAttached - In the implementation block
@property (assign,setter=_setPresented:,getter=_isPresented,nonatomic) BOOL _presented;                                                                            //@synthesize _presented=__presented - In the implementation block
@property (assign,setter=_setShouldScaleDownBehindDescendants:,nonatomic) BOOL _shouldScaleDownBehindDescendants;                                                  //@synthesize _shouldScaleDownBehindDescendants=__shouldScaleDownBehindDescendants - In the implementation block
@property (assign,setter=_setReduceMotionEnabled:,getter=_isReduceMotionEnabled,nonatomic) BOOL _reduceMotionEnabled;                                              //@synthesize _reduceMotionEnabled=__reduceMotionEnabled - In the implementation block
@property (assign,setter=_setHosting:,getter=_isHosting,nonatomic) BOOL _hosting;                                                                                  //@synthesize _hosting=__hosting - In the implementation block
@property (setter=_setDetents:,nonatomic,retain) NSArray * _detents; 
@property (assign,setter=_setIndexOfCurrentDetent:,nonatomic) long long _indexOfCurrentDetent;                                                                     //@synthesize _indexOfCurrentDetent=__indexOfCurrentDetent - In the implementation block
@property (assign,setter=_setIndexOfLastUndimmedDetent:,nonatomic) long long _indexOfLastUndimmedDetent;                                                           //@synthesize _indexOfLastUndimmedDetent=__indexOfLastUndimmedDetent - In the implementation block
@property (assign,setter=_setReversedIndexOfCurrentDetent:,nonatomic) long long _reversedIndexOfCurrentDetent; 
@property (assign,setter=_setShouldDismissWhenTappedOutside:,nonatomic) BOOL _shouldDismissWhenTappedOutside;                                                      //@synthesize _shouldDismissWhenTappedOutside=__shouldDismissWhenTappedOutside - In the implementation block
@property (setter=_setPassthroughViews:,nonatomic,retain) NSArray * _passthroughViews;                                                                             //@synthesize _passthroughViews=__passthroughViews - In the implementation block
@property (assign,setter=_setLatestUserChosenOffset:,nonatomic) double _latestUserChosenOffset;                                                                    //@synthesize _latestUserChosenOffset=__latestUserChosenOffset - In the implementation block
@property (assign,setter=_setTearOffset:,nonatomic) double _tearOffset;                                                                                            //@synthesize _tearOffset=__tearOffset - In the implementation block
@property (assign,setter=_setDragging:,getter=_isDragging,nonatomic) BOOL _dragging;                                                                               //@synthesize _dragging=__dragging - In the implementation block
@property (assign,setter=_setWantsGrabber:,nonatomic) BOOL _wantsGrabber;                                                                                          //@synthesize _wantsGrabber=__wantsGrabber - In the implementation block
@property (assign,setter=_setDraggingAndDismissing:,getter=_isDraggingAndDismissing,nonatomic) BOOL _draggingAndDismissing;                                        //@synthesize _draggingAndDismissing=__draggingAndDismissing - In the implementation block
@property (assign,setter=_setDismissSourceFrame:,nonatomic) CGRect _dismissSourceFrame;                                                                            //@synthesize _dismissSourceFrame=__dismissSourceFrame - In the implementation block
@property (assign,setter=_setDismissCornerRadius:,nonatomic) double _dismissCornerRadius;                                                                          //@synthesize _dismissCornerRadius=__dismissCornerRadius - In the implementation block
@property (assign,setter=_setParentSheetLayoutInfo:,nonatomic,__weak) _UISheetLayoutInfo * _parentLayoutInfo;                                                      //@synthesize _parentLayoutInfo=__parentLayoutInfo - In the implementation block
@property (setter=_setChildSheetLayoutInfo:,nonatomic,retain) _UISheetLayoutInfo * _childLayoutInfo;                                                               //@synthesize _childLayoutInfo=__childLayoutInfo - In the implementation block
@property (nonatomic,readonly) double _percentFullScreen;                                                                                                          //@synthesize _percentFullScreen=__percentFullScreen - In the implementation block
@property (getter=_isAnyDescendantDragging,nonatomic,readonly) BOOL _anyDescendantDragging;                                                                        //@synthesize _anyDescendantDragging=__anyDescendantDragging - In the implementation block
@property (nonatomic,readonly) NSArray * _activeDetentValues; 
@property (nonatomic,readonly) NSArray * _activeReversedDetentIndexes; 
@property (nonatomic,readonly) long long _indexOfCurrentActiveDetent;                                                                                              //@synthesize _indexOfCurrentActiveDetent=__indexOfCurrentActiveDetent - In the implementation block
@property (nonatomic,readonly) double _maximumNonDismissDetentOffset;                                                                                              //@synthesize _maximumNonDismissDetentOffset=__maximumNonDismissDetentOffset - In the implementation block
@property (nonatomic,readonly) double _rubberBandExtentBeyondMinimumOffset;                                                                                        //@synthesize _rubberBandExtentBeyondMinimumOffset=__rubberBandExtentBeyondMinimumOffset - In the implementation block
@property (nonatomic,readonly) double _rubberBandExtentBeyondMaximumOffset;                                                                                        //@synthesize _rubberBandExtentBeyondMaximumOffset=__rubberBandExtentBeyondMaximumOffset - In the implementation block
@property (nonatomic,readonly) CGRect _untransformedFrame;                                                                                                         //@synthesize _untransformedFrame=__untransformedFrame - In the implementation block
@property (nonatomic,readonly) UIRectCornerRadii _cornerRadii;                                                                                                     //@synthesize _cornerRadii=__cornerRadii - In the implementation block
@property (nonatomic,readonly) CGAffineTransform _transform;                                                                                                       //@synthesize _transform=__transform - In the implementation block
@property (nonatomic,readonly) double _percentDimmed;                                                                                                              //@synthesize _percentDimmed=__percentDimmed - In the implementation block
@property (nonatomic,readonly) double _confinedPercentDimmed;                                                                                                      //@synthesize _confinedPercentDimmed=__confinedPercentDimmed - In the implementation block
@property (nonatomic,readonly) double _confinedPercentLightened;                                                                                                   //@synthesize _confinedPercentLightened=__confinedPercentLightened - In the implementation block
@property (nonatomic,readonly) double _shadowOpacity;                                                                                                              //@synthesize _shadowOpacity=__shadowOpacity - In the implementation block
@property (nonatomic,readonly) double _alpha;                                                                                                                      //@synthesize _alpha=__alpha - In the implementation block
@property (nonatomic,readonly) double _grabberAlpha;                                                                                                               //@synthesize _grabberAlpha=__grabberAlpha - In the implementation block
@property (getter=_isInteractionEnabled,nonatomic,readonly) BOOL _interactionEnabled;                                                                              //@synthesize _interactionEnabled=__interactionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL _shouldPresentedViewControllerControlStatusBarAppearance;                                                                      //@synthesize _shouldPresentedViewControllerControlStatusBarAppearance=__shouldPresentedViewControllerControlStatusBarAppearance - In the implementation block
@property (nonatomic,readonly) BOOL _shouldDimmingIgnoreTouches;                                                                                                   //@synthesize _shouldDimmingIgnoreTouches=__shouldDimmingIgnoreTouches - In the implementation block
@property (nonatomic,readonly) NSArray * _dimmedPassthroughViews;                                                                                                  //@synthesize _dimmedPassthroughViews=__dimmedPassthroughViews - In the implementation block
@property (assign,nonatomic,__weak) id<_UISheetLayoutInfoDelegate> _delegate;                                                                                      //@synthesize _delegate=__delegate - In the implementation block
-(id)init;
-(id<_UISheetLayoutInfoDelegate>)_delegate;
-(UIView *)_containerView;
-(void)_layout;
-(double)_alpha;
-(long long)_mode;
-(CGSize)_preferredSize;
-(CGAffineTransform)_transform;
-(double)_currentOffset;
-(double)_shadowOpacity;
-(UIViewController *)_presentedViewController;
-(UIViewController *)_presentingViewController;
-(void)set_delegate:(id<_UISheetLayoutInfoDelegate>)arg1 ;
-(CGRect)_containerBounds;
-(BOOL)_isPresented;
-(void)_setMode:(long long)arg1 ;
-(BOOL)_isDragging;
-(CGRect)_keyboardFrame;
-(UIRectCornerRadii)_cornerRadii;
-(void)_setWantsBottomAttachedInCompactHeight:(BOOL)arg1 ;
-(void)_setWidthFollowsPreferredContentSizeWhenBottomAttached:(BOOL)arg1 ;
-(void)_setShouldDismissWhenTappedOutside:(BOOL)arg1 ;
-(void)_setDetents:(id)arg1 ;
-(NSArray *)_detents;
-(long long)_indexOfCurrentDetent;
-(double)_rubberBandExtentBeyondMinimumOffset;
-(double)_rubberBandExtentBeyondMaximumOffset;
-(double)_maximumWidth;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(NSArray *)_passthroughViews;
-(void)set_presentedViewController:(UIViewController *)arg1 ;
-(void)set_containerView:(UIView *)arg1 ;
-(void)_setContainerBounds:(CGRect)arg1 ;
-(void)_setContainerSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)_setContainerTraitCollection:(id)arg1 ;
-(CGRect)_untransformedFrame;
-(NSArray *)_reversedDetents;
-(void)_setReversedDetents:(id)arg1 ;
-(void)_setIndexOfCurrentDetent:(long long)arg1 ;
-(long long)_indexOfLastUndimmedDetent;
-(void)_setIndexOfLastUndimmedDetent:(long long)arg1 ;
-(void)_setLatestUserChosenOffset:(double)arg1 ;
-(UITraitCollection *)_containerTraitCollection;
-(UIEdgeInsets)_containerSafeAreaInsets;
-(_UISheetLayoutInfo *)_childLayoutInfo;
-(CGRect)_stackAlignmentFrame;
-(NSArray *)_activeDetentValues;
-(BOOL)_wantsFullScreen;
-(double)_dismissOffset;
-(double)_depthLevel;
-(BOOL)_shouldScaleDownBehindDescendants;
-(BOOL)_isReduceMotionEnabled;
-(BOOL)_wantsBottomAttached;
-(BOOL)_wantsBottomAttachedInCompactHeight;
-(BOOL)_isBottomAttached;
-(BOOL)_scalesDownBehindDescendants;
-(double)_minimumTopInset;
-(CGRect)_sourceFrame;
-(BOOL)_widthFollowsPreferredContentSizeWhenBottomAttached;
-(double)_percentFullScreen;
-(CGRect)_bottomAttachedUntransformedFrame;
-(CGRect)_floatingUntransformedFrame;
-(CGRect)_dismissSourceFrame;
-(double)_latestUserChosenOffset;
-(long long)_indexOfCurrentActiveDetent;
-(double)_maximumNonDismissDetentOffset;
-(BOOL)_isAnyDescendantDragging;
-(CGRect)_fullHeightUntransformedFrame;
-(long long)_reversedIndexOfCurrentDetent;
-(long long)_reversedIndexOfLastUndimmedDetent;
-(BOOL)_isDraggingAndDismissing;
-(double)_tearOffset;
-(BOOL)_isHosting;
-(double)_percentPresented;
-(double)_dismissCornerRadius;
-(long long)_indexOfActiveDimmingDetent;
-(_UISheetLayoutInfo *)_parentLayoutInfo;
-(double)_percentDimmedFromOffset;
-(double)_percentDimmed;
-(BOOL)_wantsGrabber;
-(BOOL)_shouldDismissWhenTappedOutside;
-(double)_confinedPercentDimmed;
-(void)_invalidatePreferredSize;
-(void)_setSourceFrame:(CGRect)arg1 ;
-(void)_setKeyboardFrame:(CGRect)arg1 ;
-(void)_setWantsFullScreen:(BOOL)arg1 ;
-(void)_setWantsBottomAttached:(BOOL)arg1 ;
-(void)_setPresented:(BOOL)arg1 ;
-(void)_setShouldScaleDownBehindDescendants:(BOOL)arg1 ;
-(void)_setReduceMotionEnabled:(BOOL)arg1 ;
-(void)_setHosting:(BOOL)arg1 ;
-(void)_setPassthroughViews:(id)arg1 ;
-(void)_setWantsGrabber:(BOOL)arg1 ;
-(void)_setTearOffset:(double)arg1 ;
-(void)_setDragging:(BOOL)arg1 ;
-(void)_setDraggingAndDismissing:(BOOL)arg1 ;
-(void)_setDismissSourceFrame:(CGRect)arg1 ;
-(void)_setDismissCornerRadius:(double)arg1 ;
-(void)_setParentSheetLayoutInfo:(id)arg1 ;
-(void)_setChildSheetLayoutInfo:(id)arg1 ;
-(void)_setReversedIndexOfCurrentDetent:(long long)arg1 ;
-(NSArray *)_activeReversedDetentIndexes;
-(double)_grabberAlpha;
-(BOOL)_isInteractionEnabled;
-(BOOL)_shouldDimmingIgnoreTouches;
-(NSArray *)_dimmedPassthroughViews;
-(void)set_presentingViewController:(UIViewController *)arg1 ;
-(double)_confinedPercentLightened;
-(NSMutableArray *)_mutableActiveDetentValues;
-(NSMutableArray *)_mutableActiveReversedDetentIndexes;
@end

