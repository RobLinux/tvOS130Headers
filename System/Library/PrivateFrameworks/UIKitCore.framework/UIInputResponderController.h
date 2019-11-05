/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISceneComponentProviding.h>

@class UITextEffectsWindow, UIResponder, UIInputViewSet, NSMutableDictionary, NSMutableArray, NSHashTable, UIInputViewPostPinningReloadState, NSMutableSet, NSDate, UITextFormattingCoordinator, UISystemInputAssistantViewController, UIScene, UIKBRenderConfig, UIInputWindowController, UIView, UIWindowScene, NSString;

@interface UIInputResponderController : NSObject <_UISceneComponentProviding> {

	unsigned long long _hostedUseCount;
	UITextEffectsWindow* _containerWindow;
	UIResponder* _responder;
	UIResponder* _responderWithoutAutomaticAppearanceEnabled;
	UIResponder* _selfHostingTrigger;
	UIInputViewSet* _inputViewSet;
	UIInputViewSet* _transientInputViewSet;
	NSMutableDictionary* _preservedViewSets;
	NSMutableArray* _animationStyleStack;
	NSHashTable* _visibilityObservers;
	UIInputViewPostPinningReloadState* _postPinningReloadState;
	NSMutableSet* _pinningResponders;
	NSMutableDictionary* _persistentInputAccessoryResponders;
	NSMutableArray* _persistentInputAccessoryResponderOrder;
	NSDate* _transitionStartTime;
	UITextFormattingCoordinator* _textFormattingCoordinator;
	UISystemInputAssistantViewController* _systemInputAssistantViewController;
	int _ignoringReloadInputViews;
	int _ignoredReloads;
	int _disableAnimationsCount;
	BOOL _ignoresPinning;
	BOOL _interfaceAutorotationDisabled;
	BOOL _automaticAppearanceEnabled;
	BOOL _automaticAppearanceEnabledInternal;
	BOOL _dontNeedAssistantBar;
	BOOL _allowNilResponderReload;
	BOOL _reloadInputViewsForcedIsAllowed;
	BOOL _blockedReloadInputViewsForDictation;
	BOOL _hideSystemInputAssistantView;
	BOOL _preservingInputViews;
	UIScene* _scene;
	long long _currentState;
	UIKBRenderConfig* _restorableRenderConfig;
	unsigned long long _deactivationCount;

}

@property (assign,nonatomic) BOOL useHostedInstance; 
@property (nonatomic,readonly) UITextEffectsWindow * containerWindow; 
@property (nonatomic,readonly) UITextEffectsWindow * existingContainerWindow; 
@property (nonatomic,readonly) UIInputWindowController * containerRootController; 
@property (nonatomic,readonly) UISystemInputAssistantViewController * systemInputAssistantViewController; 
@property (nonatomic,readonly) UIView * containerView; 
@property (assign,nonatomic) BOOL hideSystemInputAssistantView;                                                        //@synthesize hideSystemInputAssistantView=_hideSystemInputAssistantView - In the implementation block
@property (nonatomic,readonly) UIInputViewSet * inputViews; 
@property (nonatomic,readonly) UIInputViewSet * transientInputViews; 
@property (nonatomic,readonly) long long currentState;                                                                 //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * restorableRenderConfig;                                                //@synthesize restorableRenderConfig=_restorableRenderConfig - In the implementation block
@property (assign,nonatomic) BOOL preservingInputViews;                                                                //@synthesize preservingInputViews=_preservingInputViews - In the implementation block
@property (nonatomic,readonly) BOOL deactivated; 
@property (assign,nonatomic) unsigned long long deactivationCount;                                                     //@synthesize deactivationCount=_deactivationCount - In the implementation block
@property (assign,nonatomic) BOOL automaticAppearanceInternalEnabled; 
@property (nonatomic,readonly) BOOL automaticAppearanceReallyEnabled; 
@property (nonatomic,readonly) NSDate * _transitionStartTime; 
@property (nonatomic,readonly) UITextFormattingCoordinator * textFormattingCoordinator; 
@property (getter=_isIgnoringReloadInputViews,nonatomic,readonly) BOOL ignoringReloadInputViews; 
@property (assign,nonatomic) BOOL ignoresPinning;                                                                      //@synthesize ignoresPinning=_ignoresPinning - In the implementation block
@property (nonatomic,readonly) UIWindowScene * scene; 
@property (nonatomic,readonly) UIResponder * responder;                                                                //@synthesize responder=_responder - In the implementation block
@property (nonatomic,readonly) BOOL isOnScreen; 
@property (assign,nonatomic) BOOL automaticAppearanceEnabled;                                                          //@synthesize automaticAppearanceEnabled=_automaticAppearanceEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;                                  //@synthesize scene=_scene - In the implementation block
+(void)initialize;
+(void)performOnControllers:(/*^block*/id)arg1 ;
+(id)activeInputResponderController;
+(void)_pinInputViewsForInputResponderController:(id)arg1 onBehalfOfResponder:(id)arg2 duringBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(UIWindowScene *)scene;
-(UIScene *)_scene;
-(long long)currentState;
-(UIView *)containerView;
-(BOOL)isOnScreen;
-(id)initWithScene:(id)arg1 ;
-(NSDate *)_transitionStartTime;
-(id)passthroughViews;
-(void)orderInWithAnimationStyle:(id)arg1 ;
-(void)orderOutWithAnimationStyle:(id)arg1 ;
-(void)setInputViews:(id)arg1 animationStyle:(id)arg2 ;
-(BOOL)deactivated;
-(void)_setScene:(id)arg1 ;
-(void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3 ;
-(UIKBRenderConfig *)restorableRenderConfig;
-(void)setRestorableRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_restoreInputViewsWithId:(id)arg1 animated:(BOOL)arg2 ;
-(void)_clearPreservedInputViewsWithRestorableResponder:(id)arg1 ;
-(CGRect)visibleFrameInView:(id)arg1 ;
-(UIInputViewSet *)inputViews;
-(CGRect)visibleInputViewFrameInView:(id)arg1 ;
-(void)pushAnimationStyle:(id)arg1 ;
-(void)popAnimationStyle;
-(id)nextAnimationStyle;
-(void)_setIgnoresPinning:(BOOL)arg1 allowImmediateReload:(BOOL)arg2 ;
-(void)_beginDisablingAnimations;
-(UIResponder *)responder;
-(void)_endDisablingAnimations;
-(void)_preserveInputViewsWithId:(id)arg1 ;
-(void)forceOrderOutAutomaticExceptAccessoryView;
-(BOOL)automaticAppearanceEnabled;
-(void)forceOrderOutAutomaticAnimated:(BOOL)arg1 ;
-(double)verticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2 ;
-(void)_clearPreservedInputViewsWithId:(id)arg1 clearKeyboard:(BOOL)arg2 ;
-(void)_endPersistingInputAccessoryViewWithId:(id)arg1 ;
-(void)_beginPersistingInputAccessoryViewForResponder:(id)arg1 withId:(id)arg2 ;
-(void)_restoreInputAccessoryViewOverrideWithId:(id)arg1 ;
-(void)_beginIgnoringReloadInputViews;
-(void)setAutomaticAppearanceInternalEnabled:(BOOL)arg1 ;
-(int)_endIgnoringReloadInputViews;
-(void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)prepareForAlongsideTransitionWithContext:(id)arg1 ;
-(BOOL)hideSystemInputAssistantView;
-(void)inputResponderControllerWillResume:(id)arg1 ;
-(void)inputModeChangedForRenderConfig:(id)arg1 ;
-(UITextEffectsWindow *)containerWindow;
-(UIInputWindowController *)containerRootController;
-(id)_renderConfigForResponder:(id)arg1 ;
-(void)updateRenderConfigForCurrentResponder;
-(BOOL)useHostedInstance;
-(id)nextAnimationStyle:(BOOL)arg1 ;
-(BOOL)automaticAppearanceReallyEnabled;
-(void)setTextEffectsWindowLevelForInputView:(id)arg1 responder:(id)arg2 ;
-(void)traitCollectionDidChange;
-(void)updateRenderConfigForResponder:(id)arg1 ;
-(void)_reloadInputViewsForResponder:(id)arg1 ;
-(void)_reloadInputViewsForKeyWindowSceneResponder:(id)arg1 ;
-(void)_reloadInputViewsForWindowSceneResponder:(id)arg1 ;
-(void)disableInterfaceAutorotation:(BOOL)arg1 ;
-(id)_inputViewsForResponder:(id)arg1 withAutomaticKeyboard:(BOOL)arg2 ;
-(BOOL)pinningPreventsInputViews:(id)arg1 ;
-(BOOL)hasDictationKeyboard;
-(BOOL)_isIgnoringReloadInputViews;
-(void)setInputViews:(UIInputViewSet *)arg1 ;
-(BOOL)preservingInputViews;
-(UISystemInputAssistantViewController *)systemInputAssistantViewController;
-(void)setKeyWindowSceneInputViews:(id)arg1 animationStyle:(id)arg2 ;
-(void)setWindowSceneInputViews:(id)arg1 animationStyle:(id)arg2 ;
-(void)prepareToMoveKeyboardForInputViewSet:(id)arg1 animationStyle:(id)arg2 ;
-(BOOL)animationsEnabled;
-(void)setInputViews:(id)arg1 animated:(BOOL)arg2 ;
-(void)performMultipleOperations:(/*^block*/id)arg1 withAnimationStyle:(id)arg2 ;
-(BOOL)maximizeWithAnimation:(BOOL)arg1 ;
-(void)setHideSystemInputAssistantView:(BOOL)arg1 ;
-(id)_inputViewsForResponder:(id)arg1 ;
-(void)createAutomaticKeyboardIfNeeded;
-(void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(BOOL)_preserveMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 reset:(BOOL)arg3 ;
-(void)_updateVisibilityObserversWithVisibility:(BOOL)arg1 reset:(BOOL)arg2 ;
-(void)setPreservingInputViews:(BOOL)arg1 ;
-(void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2 reset:(BOOL)arg3 ;
-(BOOL)_restoreMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 ;
-(void)_clearMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 ;
-(void)performWithAllowingNilResponderReload:(/*^block*/id)arg1 ;
-(void)setUseHostedInstance:(BOOL)arg1 ;
-(UITextEffectsWindow *)existingContainerWindow;
-(BOOL)automaticAppearanceInternalEnabled;
-(void)_updateContainerWindowLevel;
-(void)_setReloadInputViewsForcedIsAllowed:(BOOL)arg1 ;
-(void)forceReloadInputViews;
-(UIInputViewSet *)transientInputViews;
-(BOOL)minimize;
-(BOOL)maximize;
-(id)_placementForDeactivatedKeyboard:(BOOL)arg1 ;
-(void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)forceOrderInAutomaticAnimated:(BOOL)arg1 ;
-(void)_clearPinningResponders;
-(BOOL)_isPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(BOOL)_hasPostPinningReloadState;
-(BOOL)_isTrackingResponder:(id)arg1 ;
-(void)addVisibilityObserver:(id)arg1 ;
-(void)removeVisibilityObserver:(id)arg1 ;
-(void)_removePreservedInputViewSetForInputView:(id)arg1 ;
-(UITextFormattingCoordinator *)textFormattingCoordinator;
-(void)setAutomaticAppearanceEnabled:(BOOL)arg1 ;
-(unsigned long long)deactivationCount;
-(void)setDeactivationCount:(unsigned long long)arg1 ;
-(BOOL)ignoresPinning;
-(void)setIgnoresPinning:(BOOL)arg1 ;
@end

