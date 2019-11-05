/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UILayoutContainerViewDelegate.h>
#import <UIKit/UISplitViewControllerImpl.h>

@class NSArray, NSString, UISplitViewController, UIBarButtonItem, UISplitViewControllerDisplayModeBarButtonItem, UIPopoverController, UIView, UIResponder, UISnapshotView, UITraitCollection, UIGestureRecognizer, UITapGestureRecognizer, UIViewController, UIFocusContainerGuide;

@interface UISplitViewControllerClassicImpl : NSObject <UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, UISplitViewControllerImpl> {

	UISplitViewController* _svc;
	id _delegate;
	UIBarButtonItem* _barButtonItem;
	UISplitViewControllerDisplayModeBarButtonItem* _displayModeButtonItem;
	NSString* _buttonTitle;
	UIPopoverController* _hiddenPopoverController;
	UIView* _rotationSnapshotView;
	UIResponder* _postTransitionResponder;
	UISnapshotView* _collapsingMasterSnapshotView;
	UISnapshotView* _collapsingDetailSnapshotView;
	float _gutterWidth;
	long long _rotatingFromOrientation;
	long long _lastPresentedOrientation;
	CGRect _rotatingFromMasterViewFrame;
	CGRect _rotatingToMasterViewFrame;
	UIView* _underBarSeparatorView;
	UITraitCollection* _traitCollectionWhenRemovedFromWindow;
	BOOL _presentsWithGesture;
	UIGestureRecognizer* _popoverPresentationGestureRecognizer;
	UITapGestureRecognizer* _menuGestureRecognizer;
	long long _preferredDisplayMode;
	long long _effectiveTargetDisplayMode;
	long long _pendingDisplayModeChangeCount;
	long long _rotatingMasterChange;
	BOOL _useChangingBoundsLayout;
	long long _transitioningMasterChange;
	UITraitCollection* _transitioningToTraitCollection;
	long long _transitioningToInternalMode;
	long long _lastNotifiedDisplayMode;
	CGRect _viewBoundsBeforeCollapse;
	long long _suspendedState;
	long long _primaryEdge;
	struct {
		unsigned invalidDelegateHiddenMasterAspectRatios : 2;
		unsigned delegateHiddenMasterAspectRatios : 2;
		unsigned delegateImplementsShouldHide : 1;
		unsigned hidden : 3;
		unsigned masterOnSlide : 1;
		unsigned delegateWantsWillShowCallback : 1;
		unsigned delegateWantsWillHideCallback : 1;
		unsigned delegateWantsWillPresentCallback : 1;
		unsigned delegateSupportedInterfaceOrientations : 1;
		unsigned delegatePreferredInterfaceOrientationForPresentation : 1;
		unsigned delegateWantsShowViewController : 1;
		unsigned delegateWantsShowDetailViewController : 1;
		unsigned delegateWantsCollapseSecondaryViewController : 1;
		unsigned delegateWantsSeparateSecondaryViewController : 1;
		unsigned delegateWantsPrimaryViewControllerForCollapse : 1;
		unsigned delegateWantsPrimaryViewControllerForExpanding : 1;
		unsigned collapsedState : 2;
		unsigned primaryHidingState : 2;
		unsigned primaryHidingStateForCurrentOrientation : 2;
		unsigned delegateWantsWillChangeToDisplayMode : 1;
		unsigned delegateWantsTargetDisplayModeForAction : 1;
		unsigned delegateCanModifyFirstResponderOnTraitCollectionTransition : 1;
		unsigned pendingPresentMasterViewController : 1;
		unsigned pendingUpdateTargetDisplayMode : 1;
		unsigned collapsingClockwise : 1;
		unsigned firstResponderChangedFromPostTransitionResponder : 1;
		unsigned firstResponderChangedFromPostTransitionResponderToNil : 1;
		unsigned inWillTransitionToSize : 1;
		unsigned hasTransitioningToInternalMode : 1;
		unsigned delegateImplementsPrivateIsPrimaryVisible : 1;
		unsigned delegateImplementsPrivateCollapseSecondaryViewControllerWhileSuspended : 1;
		unsigned usesExtraWidePrimaryColumn : 1;
		unsigned usesDeviceOverlayPreferences : 1;
		unsigned prefersOverlayInRegularWidthPhone : 1;
	}  _splitViewControllerFlags;
	NSString* _displayModeButtonItemTitle;
	double _preferredPrimaryColumnWidthFraction;
	double _minimumPrimaryColumnWidth;
	double _maximumPrimaryColumnWidth;
	unsigned long long _lastFocusedChildViewControllerIndex;
	UIViewController* __preservedDetailController;
	/*^block*/id __clearPreventRotationHook;
	UIFocusContainerGuide* _masterFocusContainerGuide;
	UIFocusContainerGuide* _detailFocusContainerGuide;

}

@property (setter=_setPreservedDetailController:,nonatomic,retain) UIViewController * _preservedDetailController;                                    //@synthesize _preservedDetailController=__preservedDetailController - In the implementation block
@property (setter=_setClearPreventRotationHook:,nonatomic,copy) id _clearPreventRotationHook;                                                        //@synthesize _clearPreventRotationHook=__clearPreventRotationHook - In the implementation block
@property (getter=_lastFocusedChildViewControllerIndex,nonatomic,readonly) unsigned long long lastFocusedChildViewControllerIndex;                   //@synthesize lastFocusedChildViewControllerIndex=_lastFocusedChildViewControllerIndex - In the implementation block
@property (getter=_masterFocusContainerGuide,nonatomic,readonly) UIFocusContainerGuide * masterFocusContainerGuide;                                  //@synthesize masterFocusContainerGuide=_masterFocusContainerGuide - In the implementation block
@property (getter=_detailFocusContainerGuide,nonatomic,readonly) UIFocusContainerGuide * detailFocusContainerGuide;                                  //@synthesize detailFocusContainerGuide=_detailFocusContainerGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic,__weak) id<UISplitViewControllerDelegate> delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL presentsWithGesture;                                                                                               //@synthesize presentsWithGesture=_presentsWithGesture - In the implementation block
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (assign,nonatomic) long long preferredDisplayMode; 
@property (assign,nonatomic) double preferredPrimaryColumnWidthFraction;                                                                             //@synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction - In the implementation block
@property (assign,nonatomic) double minimumPrimaryColumnWidth;                                                                                       //@synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth - In the implementation block
@property (assign,nonatomic) double maximumPrimaryColumnWidth;                                                                                       //@synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth - In the implementation block
@property (assign,nonatomic) long long primaryEdge; 
@property (assign,nonatomic) float gutterWidth; 
@property (assign,nonatomic) BOOL hidesMasterViewInPortrait; 
@property (assign,nonatomic) BOOL prefersOverlayInRegularWidthPhone; 
@property (assign,nonatomic) BOOL usesDeviceOverlayPreferences; 
@property (setter=_setDisplayModeButtonItemTitle:,nonatomic,copy) NSString * _displayModeButtonItemTitle;                                            //@synthesize displayModeButtonItemTitle=_displayModeButtonItemTitle - In the implementation block
@property (assign,setter=_setUsesExtraWidePrimaryColumn:,getter=_usesExtraWidePrimaryColumn,nonatomic) BOOL usesExtraWidePrimaryColumn; 
@property (assign,nonatomic) long long primaryBackgroundStyle; 
+(double)_defaultGutterWidthInView:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id<UISplitViewControllerDelegate>)delegate;
-(void)setDelegate:(id<UISplitViewControllerDelegate>)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_commonInit;
-(long long)displayMode;
-(void)_initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(NSArray *)viewControllers;
-(BOOL)isCollapsed;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)masterViewController;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(id)childViewControllerForStatusBarStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)_isRotating;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(long long)preferredInterfaceOrientationForPresentation;
-(id)detailViewController;
-(void)setPreferredDisplayMode:(long long)arg1 ;
-(long long)preferredDisplayMode;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)displayModeButtonItem;
-(void)_loadNewSubviews:(id)arg1 ;
-(void)_updateDisplayModeButtonItem;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI39*)arg1 ;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(long long)preferredLeadingStatusBarStyle;
-(long long)preferredTrailingStatusBarStyle;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(CGRect)_frameForChildContentContainer:(id)arg1 ;
-(BOOL)_handlesCounterRotationForPresentation;
-(void)_setUpFocusContainerGuides;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(void)__viewWillLayoutSubviews;
-(void)_layoutContainerViewWillMoveToWindow:(id)arg1 ;
-(void)_layoutContainerViewDidMoveToWindow:(id)arg1 ;
-(BOOL)_shouldPersistViewWhenCoding;
-(id)_allContainedViewControllers;
-(id)_additionalViewControllersToCheckForUserActivity;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)_updateChildContentMargins;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3 ;
-(void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2 ;
-(void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2 ;
-(CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2 ;
-(BOOL)_iPhoneShouldUseOverlayInCurrentEnvironment;
-(BOOL)_isCollapsed;
-(BOOL)_layoutPrimaryOnRight;
-(void)_setCollapsedState:(long long)arg1 ;
-(UIViewController *)_preservedDetailController;
-(id)initWithSplitViewController:(id)arg1 ;
-(BOOL)presentsWithGesture;
-(void)setPresentsWithGesture:(BOOL)arg1 ;
-(double)preferredPrimaryColumnWidthFraction;
-(void)setPreferredPrimaryColumnWidthFraction:(double)arg1 ;
-(double)minimumPrimaryColumnWidth;
-(void)setMinimumPrimaryColumnWidth:(double)arg1 ;
-(double)maximumPrimaryColumnWidth;
-(void)setMaximumPrimaryColumnWidth:(double)arg1 ;
-(double)primaryColumnWidth;
-(void)setPrimaryEdge:(long long)arg1 ;
-(long long)primaryEdge;
-(float)gutterWidth;
-(void)setGutterWidth:(float)arg1 ;
-(BOOL)hidesMasterViewInPortrait;
-(void)setHidesMasterViewInPortrait:(BOOL)arg1 ;
-(NSString *)_displayModeButtonItemTitle;
-(void)_setDisplayModeButtonItemTitle:(id)arg1 ;
-(id)_primaryDimmingView;
-(void)setPrefersOverlayInRegularWidthPhone:(BOOL)arg1 ;
-(BOOL)prefersOverlayInRegularWidthPhone;
-(void)setUsesDeviceOverlayPreferences:(BOOL)arg1 ;
-(BOOL)usesDeviceOverlayPreferences;
-(BOOL)_usesExtraWidePrimaryColumn;
-(void)_setUsesExtraWidePrimaryColumn:(BOOL)arg1 ;
-(void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4 ;
-(void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2 ;
-(void)_willBeginSnapshotSession;
-(void)_didEndSnapshotSession;
-(void)toggleMasterVisible:(id)arg1 ;
-(void)setPrimaryBackgroundStyle:(long long)arg1 ;
-(void)unloadViewForced:(BOOL)arg1 ;
-(double)_contentMarginForChildViewController:(id)arg1 ;
-(void)_didChangeToFirstResponder:(id)arg1 ;
-(id)_primaryContentResponder;
-(void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg1 ;
-(CGRect)_masterViewFrame;
-(CGRect)_detailViewFrame;
-(void)_removeCollapsingSnapshotViews;
-(void)_triggerDisplayModeAction:(id)arg1 ;
-(void)_updateTargetDisplayMode;
-(long long)_primaryHidingStateForCurrentOrientation;
-(long long)_primaryHidingState;
-(BOOL)_isBasicallyHorizontallyCompact;
-(long long)_effectivePrimaryHidingState;
-(long long)_currentInterfaceIdiom;
-(BOOL)_iPhoneShouldUseOverlayIfRegularWidth;
-(BOOL)_hidesMasterViewInCurrentOrientation;
-(BOOL)_isMasterPopoverVisible;
-(BOOL)_isHidesMasterInPortraitInvalid;
-(void)_setDelegateHidesMaster:(BOOL)arg1 inAspectRatio:(long long)arg2 ;
-(BOOL)_isHidesMasterInLandscapeInvalid;
-(BOOL)_effectivePresentsWithGesture;
-(BOOL)_hasMasterViewController;
-(void)_setupHiddenPopoverControllerWithViewController:(id)arg1 ;
-(unsigned long long)_targetEdgeForPopover;
-(long long)_effectiveTargetDisplayMode;
-(void)_invalidateHidesMasterViewForAspectRatio:(long long)arg1 ;
-(BOOL)_defersUpdateDelegateHiddenMasterAspectRatios;
-(void)_updateDelegateHiddenMasterAspectRatios;
-(void)_addOrRemovePopoverPresentationGestureRecognizer;
-(double)_primaryColumnWidthForSize:(CGSize)arg1 ;
-(BOOL)_isMasterViewShown;
-(CGSize)_screenSizeInMainScene:(BOOL)arg1 ;
-(CGRect)_masterViewFrame:(CGRect)arg1 ;
-(CGRect)_detailViewFrame:(CGRect)arg1 ;
-(void)popoverWillAppear:(id)arg1 ;
-(double)_primaryColumnWidthForSize:(CGSize)arg1 isCompact:(BOOL)arg2 ;
-(void)_setMasterOverrideTraitCollectionActive:(BOOL)arg1 ;
-(void)_prepareForCompactLayout;
-(id)_childContainingSender:(id)arg1 ;
-(void)_setPreservedDetailController:(id)arg1 ;
-(id)_primaryViewControllerForCollapsing;
-(id)_secondaryViewControllerForCollapsing;
-(void)_collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2 ;
-(void)_separateMasterAndDetailWithTransitionCoordinator:(id)arg1 ;
-(void)_collapseMasterAndDetailWithTransitionCoordinator:(id)arg1 ;
-(id)_primaryViewControllerForExpanding;
-(id)_separateSecondaryViewControllerFromPrimaryViewController:(id)arg1 ;
-(void)_collapseMaster:(id)arg1 andDetail:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(BOOL)_isTransitioningFromCollapsedToSeparated;
-(void)_animateTransitionFromTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_didTransitionTraitCollection;
-(long long)_medusaState;
-(BOOL)_hidesMasterViewInOrientation:(long long)arg1 medusaState:(long long)arg2 ;
-(BOOL)hidesMasterViewInLandscape;
-(void)_showMasterViewAnimated:(BOOL)arg1 ;
-(void)_changeToDisplayMode:(long long)arg1 forCurrentOrientationOnly:(BOOL)arg2 ;
-(id)_defaultDisplayModes;
-(void)_displayModeWillChangeTo:(long long)arg1 ;
-(void)_setPrimaryHidingStateForCurrentOrientation:(long long)arg1 ;
-(void)_setPrimaryHidingState:(long long)arg1 ;
-(void)_dismissMasterViewController:(BOOL)arg1 ;
-(void)_presentMasterViewController:(BOOL)arg1 ;
-(void)_displayModeDidChange;
-(void)_cacheEffectiveTargetDisplayMode;
-(long long)_defaultTargetDisplayMode;
-(double)_masterPresentationAnimationDuration;
-(void)_viewControllerHiding:(id)arg1 ;
-(id)_clearPreventRotationHook;
-(void)_setClearPreventRotationHook:(/*^block*/id)arg1 ;
-(BOOL)_shouldPreventAutorotation;
-(BOOL)_canDisplayHostedMaster;
-(BOOL)_shouldUseRelativeInsets;
-(unsigned long long)_lastFocusedChildViewControllerIndex;
-(long long)_medusaStateForOrientation:(long long)arg1 viewWidth:(double)arg2 ;
-(long long)_internalModeForTraitCollection:(id)arg1 orientation:(long long)arg2 viewSize:(CGSize)arg3 medusaState:(long long)arg4 ;
-(void)snapshotForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 masterChange:(long long)arg3 ;
-(long long)_prepareToTransitionToViewSize:(CGSize)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 duration:(double)arg4 ;
-(void)_animateTransitionToOrientation:(long long)arg1 duration:(double)arg2 masterChange:(long long)arg3 ;
-(void)_completeTransitionFromOrientation:(long long)arg1 masterChange:(long long)arg2 ;
-(void)snapshotMasterView;
-(void)snapshotAllViews;
-(void)_setupUnderBarSeparatorView;
-(void)_setDetailViewFrame:(CGRect)arg1 ;
-(void)_updateMasterViewControllerFrame;
-(id)_masterFocusContainerGuide;
-(id)_detailFocusContainerGuide;
-(double)_defaultMaximumPrimaryColumnWidthForSize:(CGSize)arg1 ;
-(long long)primaryIsSidebar;
@end

