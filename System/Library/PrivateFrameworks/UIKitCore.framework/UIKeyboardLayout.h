/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIKBRTRecognizerDelegate.h>
#import <UIKitCore/_UIKBRTTouchDriftingDelegate.h>
#import <UIKitCore/_UIViewRepresentingKeyboardLayout.h>
#import <UIKitCore/_UIScreenEdgePanRecognizerDelegate.h>

@protocol OS_dispatch_queue;
@class UITextInputTraits, UIKBScreenTraits, UIKBTextEditingTraits, NSMutableArray, NSUUID, UIKeyboardTaskQueue, UIKeyboardTypingStyleEstimator, _UIScreenEdgePanRecognizer, _UIKBRTRecognizer, _UIKBRTFingerDetection, UIKBCadenceMonitor, _UIKBRTTouchVelocities, _UIKBRTTouchDrifting, NSMutableDictionary, NSObject, NSMutableSet, NSString;

@interface UIKeyboardLayout : UIView <_UIKBRTRecognizerDelegate, _UIKBRTTouchDriftingDelegate, _UIViewRepresentingKeyboardLayout, _UIScreenEdgePanRecognizerDelegate> {

	UITextInputTraits* _inputTraits;
	UIKBScreenTraits* _screenTraits;
	UIKBTextEditingTraits* _textEditingTraits;
	NSMutableArray* _uncommittedTouchUUIDs;
	NSUUID* _activeTouchUUID;
	NSUUID* _shiftKeyTouchUUID;
	unsigned long long _cursorLocation;
	BOOL _disableInteraction;
	UIKeyboardTaskQueue* _taskQueue;
	UIKeyboardTypingStyleEstimator* _typingStyleEstimator;
	BOOL hideKeysUnderIndicator;
	BOOL _hasPreferredHeight;
	BOOL _isExecutingDeferredTouchTasks;
	BOOL _listeningForWillChange;
	BOOL _listeningForDidChange;
	double _preferredHeight;
	_UIScreenEdgePanRecognizer* _screenEdgePanRecognizer;
	/*^block*/id _deferredTouchDownTask;
	/*^block*/id _deferredTouchMovedTask;
	_UIKBRTRecognizer* _handRestRecognizer;
	_UIKBRTFingerDetection* _fingerDetection;
	UIKBCadenceMonitor* _cadenceMonitor;
	_UIKBRTTouchVelocities* _touchVelocities;
	double lastTouchUpTime;
	double _timestampOfLastTouchesEnded;
	/*^block*/id _deferredTaskForActiveTouch;
	_UIKBRTTouchDrifting* _touchDrifting;
	NSMutableDictionary* _deferredTouchTaskLists;
	NSObject*<OS_dispatch_queue> _deferredTouchTaskListsQueue;
	NSMutableSet* _touchIgnoredUUIDSet;

}

@property (nonatomic,retain) _UIScreenEdgePanRecognizer * screenEdgePanRecognizer;                  //@synthesize screenEdgePanRecognizer=_screenEdgePanRecognizer - In the implementation block
@property (nonatomic,retain) _UIKBRTRecognizer * handRestRecognizer;                                //@synthesize handRestRecognizer=_handRestRecognizer - In the implementation block
@property (nonatomic,retain) _UIKBRTFingerDetection * fingerDetection;                              //@synthesize fingerDetection=_fingerDetection - In the implementation block
@property (nonatomic,retain) _UIKBRTTouchDrifting * touchDrifting;                                  //@synthesize touchDrifting=_touchDrifting - In the implementation block
@property (nonatomic,retain) UIKBCadenceMonitor * cadenceMonitor;                                   //@synthesize cadenceMonitor=_cadenceMonitor - In the implementation block
@property (nonatomic,retain) _UIKBRTTouchVelocities * touchVelocities;                              //@synthesize touchVelocities=_touchVelocities - In the implementation block
@property (nonatomic,copy) id deferredTouchDownTask;                                                //@synthesize deferredTouchDownTask=_deferredTouchDownTask - In the implementation block
@property (nonatomic,copy) id deferredTouchMovedTask;                                               //@synthesize deferredTouchMovedTask=_deferredTouchMovedTask - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deferredTouchTaskLists;                          //@synthesize deferredTouchTaskLists=_deferredTouchTaskLists - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> deferredTouchTaskListsQueue;              //@synthesize deferredTouchTaskListsQueue=_deferredTouchTaskListsQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * touchIgnoredUUIDSet;                                    //@synthesize touchIgnoredUUIDSet=_touchIgnoredUUIDSet - In the implementation block
@property (assign,nonatomic) BOOL isExecutingDeferredTouchTasks;                                    //@synthesize isExecutingDeferredTouchTasks=_isExecutingDeferredTouchTasks - In the implementation block
@property (assign,nonatomic) double lastTouchUpTime; 
@property (assign,nonatomic) BOOL listeningForWillChange;                                           //@synthesize listeningForWillChange=_listeningForWillChange - In the implementation block
@property (assign,nonatomic) BOOL listeningForDidChange;                                            //@synthesize listeningForDidChange=_listeningForDidChange - In the implementation block
@property (nonatomic,retain) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,retain) NSUUID * activeTouchUUID;                                              //@synthesize activeTouchUUID=_activeTouchUUID - In the implementation block
@property (nonatomic,retain) NSUUID * shiftKeyTouchUUID;                                            //@synthesize shiftKeyTouchUUID=_shiftKeyTouchUUID - In the implementation block
@property (nonatomic,readonly) long long orientation; 
@property (nonatomic,readonly) long long idiom; 
@property (assign,nonatomic) BOOL hideKeysUnderIndicator; 
@property (nonatomic,retain) NSString * layoutTag; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded;                                  //@synthesize timestampOfLastTouchesEnded=_timestampOfLastTouchesEnded - In the implementation block
@property (nonatomic,copy) id deferredTaskForActiveTouch;                                           //@synthesize deferredTaskForActiveTouch=_deferredTaskForActiveTouch - In the implementation block
@property (nonatomic,readonly) UIKeyboardTypingStyleEstimator * typingStyleEstimator; 
@property (assign,nonatomic) unsigned long long cursorLocation;                                     //@synthesize cursorLocation=_cursorLocation - In the implementation block
@property (assign,nonatomic) BOOL disableInteraction;                                               //@synthesize disableInteraction=_disableInteraction - In the implementation block
@property (assign,nonatomic) double preferredHeight;                                                //@synthesize preferredHeight=_preferredHeight - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredHeight;                                             //@synthesize hasPreferredHeight=_hasPreferredHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_showSmallDisplayKeyplane;
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3 ;
+(Class)_subclassForScreenTraits:(id)arg1 ;
-(void)dealloc;
-(long long)orientation;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)layoutTag;
-(long long)idiom;
-(void)setLayoutTag:(NSString *)arg1 ;
-(BOOL)hasAccentKey;
-(BOOL)canMultitap;
-(BOOL)isAlphabeticPlane;
-(BOOL)isKanaPlane;
-(BOOL)diacriticForwardCompose;
-(double)preferredHeight;
-(id)candidateList;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)touchDown:(id)arg1 ;
-(void)longPressAction;
-(UIKeyboardTaskQueue *)taskQueue;
-(void)setPreferredHeight:(double)arg1 ;
-(CGSize)stretchFactor;
-(void)touchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)touchUp:(id)arg1 executionContext:(id)arg2 ;
-(void)touchDragged:(id)arg1 executionContext:(id)arg2 ;
-(id)keyplaneNamed:(id)arg1 ;
-(void)changeToKeyplane:(id)arg1 ;
-(void)setLabel:(id)arg1 forKey:(id)arg2 ;
-(void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(long long)currentHandBias;
-(BOOL)canProduceString:(id)arg1 ;
-(void)setShift:(BOOL)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(unsigned long long)cursorLocation;
-(void)setAction:(SEL)arg1 forKey:(id)arg2 ;
-(CGRect)frameForKeylayoutName:(id)arg1 ;
-(id)currentKeyplane;
-(BOOL)isShiftKeyBeingHeld;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(void)setCursorLocation:(unsigned long long)arg1 ;
-(void)traitCollectionDidChange;
-(void)screenEdgePanRecognizerStateDidChange:(id)arg1 ;
-(double)biasedKeyboardWidthRatio;
-(void)setKeyboardBias:(long long)arg1 ;
-(void)deactivateActiveKeysClearingTouchInfo:(BOOL)arg1 clearingDimming:(BOOL)arg2 ;
-(void)deactivateActiveKeys;
-(void)updateGlobeKeyAndLayoutOriginBeforeSnapshotForInputView:(id)arg1 ;
-(void)setRecentInputs:(id)arg1 ;
-(void)setDisableInteraction:(BOOL)arg1 ;
-(id)keyplaneForKey:(id)arg1 ;
-(BOOL)usesAutoShift;
-(BOOL)isShiftKeyPlaneChooser;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(BOOL)canHandleEvent:(id)arg1 ;
-(BOOL)disableInteraction;
-(void)acceptRecentInputIfNecessary;
-(unsigned char)getHandRestRecognizerState;
-(BOOL)supportsEmoji;
-(BOOL)ignoresShiftState;
-(void)setDisableTouchInput:(BOOL)arg1 ;
-(unsigned long long)targetEdgesForScreenGestureRecognition;
-(UIKeyboardTypingStyleEstimator *)typingStyleEstimator;
-(void)clearTransientState;
-(CGRect)dragGestureRectInView:(id)arg1 ;
-(BOOL)showsDedicatedEmojiKeyAlongsideGlobeButton;
-(void)willBeginIndirectSelectionGesture;
-(BOOL)isEmojiKeyplane;
-(void)cancelTouchesForTwoFingerTapGesture:(id)arg1 ;
-(void)didEndIndirectSelectionGesture;
-(BOOL)isResizing;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(BOOL)isHandwritingPlane;
-(BOOL)hasActiveContinuousPathInput;
-(BOOL)globeKeyDisplaysAsEmojiKey;
-(BOOL)hasCandidateKeys;
-(void)updateTouchProcessingForKeyplaneChange;
-(BOOL)hasPreferredHeight;
-(void)updateLocalizedKeys:(BOOL)arg1 ;
-(void)setTextEditingTraits:(id)arg1 ;
-(void)reloadKeyboardGestureRecognition;
-(BOOL)_allowContinuousPathUI;
-(void)didClearInput;
-(void)restoreDefaultsForKey:(id)arg1 ;
-(BOOL)_hasRelatedTouchesForTouchState:(id)arg1 ;
-(CGSize)handRestRecognizerStandardKeyPixelSize;
-(unsigned long long)fingerIDForTouchUUID:(id)arg1 ;
-(CGPoint)getCenterForKeyUnderLeftIndexFinger;
-(void)setNeedsVirtualDriftUpdate;
-(BOOL)supportsVirtualDrift;
-(void)resetHRRLayoutState;
-(double)hitBuffer;
-(void)_updateTouchState:(id)arg1 errorVector:(CGPoint)arg2 rowOffsetFromHomeRow:(long long)arg3 ;
-(void)_ignoreTouchState:(id)arg1 ;
-(BOOL)isReachableDevice;
-(id)touchUUIDsToCommitBeforeTouchUUID:(id)arg1 ;
-(void)commitTouches:(id)arg1 executionContext:(id)arg2 ;
-(BOOL)canForceTouchUUIDCommit:(id)arg1 inWindow:(id)arg2 ;
-(void)touchDragged:(id)arg1 ;
-(double)flickDistance;
-(void)setAutoshift:(BOOL)arg1 ;
-(void)touchCancelled:(id)arg1 forResting:(BOOL)arg2 executionContext:(id)arg3 ;
-(void)setShiftKeyTouchUUID:(NSUUID *)arg1 ;
-(CGPoint)leftVirtualDriftOffset;
-(CGPoint)rightVirtualDriftOffset;
-(id)baseKeyForString:(id)arg1 ;
-(void)clearUnusedObjects:(BOOL)arg1 ;
-(SEL)handlerForNotification:(id)arg1 ;
-(id)internationalKeyDisplayStringOnEmojiKeyboard;
-(void)setPasscodeOutlineAlpha:(double)arg1 ;
-(void)updateBackgroundCorners;
-(BOOL)isResized;
-(void)setTwoFingerTapTimestamp:(double)arg1 ;
-(BOOL)shouldMergeAssistantBarWithKeyboardLayout;
-(unsigned long long)textEditingKeyMask;
-(BOOL)isGeometricShiftOrMoreKeyForTouch:(id)arg1 ;
-(void)setTarget:(id)arg1 forKey:(id)arg2 ;
-(void)setLongPressAction:(SEL)arg1 forKey:(id)arg2 ;
-(void)restoreDefaultsForAllKeys;
-(id)_keyboardLongPressInteractionRegions;
-(BOOL)shouldShowIndicator;
-(void)setHideKeysUnderIndicator:(BOOL)arg1 ;
-(id)activationIndicatorView;
-(BOOL)handRestRecognizerShouldNeverIgnoreTouchState:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 forRestingState:(unsigned long long)arg4 otherRestedTouchLocations:(id)arg5 ;
-(/*^block*/id)handRestRecognizerSilenceNextTouchDown;
-(void)handRestRecognizerNotifyRestForBegin:(BOOL)arg1 location:(CGPoint)arg2 timestamp:(double)arg3 pathIndex:(int)arg4 touchUUID:(id)arg5 context:(id)arg6 ;
-(CGPoint)getCenterForKeyUnderRightIndexFinger;
-(id)getHorizontalOffsetFromHomeRowForRowRelativeToHomeRow:(long long)arg1 ;
-(BOOL)_handRestRecognizerCancelShouldBeEnd;
-(BOOL)performReturnAction;
-(BOOL)performSpaceAction;
-(void)touchCancelled:(id)arg1 executionContext:(id)arg2 ;
-(void)touchChanged:(id)arg1 executionContext:(id)arg2 ;
-(void)updateUndoKeyState;
-(id)simulateTouch:(CGPoint)arg1 ;
-(id)simulateTouchForCharacter:(id)arg1 errorVector:(CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4 ;
-(void)fadeWithInvocation:(id)arg1 ;
-(BOOL)keyplaneContainsDismissKey;
-(BOOL)keyplaneContainsEmojiKey;
-(void)triggerSpaceKeyplaneSwitchIfNecessary;
-(BOOL)shouldFadeFromLayout;
-(BOOL)shouldFadeToLayout;
-(id)_keyboardLayoutView;
-(void)resetTouchProcessingForKeyboardChange;
-(void)updateTouchProcessingForKeyboardChange;
-(void)setTaskQueue:(UIKeyboardTaskQueue *)arg1 ;
-(double)timestampOfLastTouchesEnded;
-(void)_setRequiresExclusiveTouch:(BOOL)arg1 ;
-(void)setActiveTouchUUID:(NSUUID *)arg1 ;
-(_UIKBRTRecognizer *)handRestRecognizer;
-(UIKBCadenceMonitor *)cadenceMonitor;
-(/*^block*/id)touchDownTaskForTouchState:(id)arg1 ;
-(BOOL)_shouldAllowKeyboardHandlingIfNecessaryForTouch:(id)arg1 phase:(long long)arg2 withTouchState:(id)arg3 task:(/*^block*/id)arg4 ;
-(/*^block*/id)touchDraggedTaskForTouchState:(id)arg1 ;
-(void)commitTouchUUIDs:(id)arg1 ;
-(void)touchUp:(id)arg1 ;
-(_UIScreenEdgePanRecognizer *)screenEdgePanRecognizer;
-(void)_clearDeferredTouchTasks;
-(void)clearShiftIfNecessaryForEndedTouchState:(id)arg1 ;
-(void)didCommitTouchState:(id)arg1 ;
-(/*^block*/id)touchUpTaskForTouchState:(id)arg1 ;
-(void)setLastTouchUpTime:(double)arg1 ;
-(NSUUID *)activeTouchUUID;
-(id)deferredTaskForActiveTouch;
-(void)setDeferredTaskForActiveTouch:(id)arg1 ;
-(/*^block*/id)touchCancelledTaskForTouchState:(id)arg1 forResting:(BOOL)arg2 ;
-(/*^block*/id)touchChangedTaskForTouchState:(id)arg1 ;
-(BOOL)_shouldAllowKeyboardHandlingForTouchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldAllowKeyboardHandlingForTouchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldAllowKeyboardHandlingForTouchesEndedOrCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_removeTouchesFromProcessing:(id)arg1 ;
-(void)_touchEndedProcessingForTouches:(id)arg1 ;
-(void)touchCancelled:(id)arg1 ;
-(void)touchChanged:(id)arg1 ;
-(void)forceUpdatesForCommittedTouch;
-(void)setIsExecutingDeferredTouchTasks:(BOOL)arg1 ;
-(BOOL)queryShouldNeverIgnoreTouchStateWithIdentifier:(id)arg1 touchState:(id)arg2 startPoint:(CGPoint)arg3 forRestingState:(unsigned long long)arg4 ;
-(void)_enumerateDeferredTouchUUIDs:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)recognizerBlockUntilTaskQueueReadyForceUsingDeferredTask:(BOOL)arg1 ;
-(BOOL)isExecutingDeferredTouchTasks;
-(_UIKBRTFingerDetection *)fingerDetection;
-(_UIKBRTTouchDrifting *)touchDrifting;
-(void)setDeferredTouchDownTask:(id)arg1 ;
-(void)setDeferredTouchMovedTask:(id)arg1 ;
-(void)_executeDeferredTouchTasks;
-(BOOL)_canAddTouchesToScreenGestureRecognizer:(id)arg1 ;
-(void)_addTouchToScreenEdgePanRecognizer:(id)arg1 ;
-(void)assertSavedLocation:(CGPoint)arg1 onTouch:(id)arg2 inWindow:(id)arg3 resetPrevious:(BOOL)arg4 ;
-(void)setScreenEdgePanRecognizer:(_UIScreenEdgePanRecognizer *)arg1 ;
-(void)setCadenceMonitor:(UIKBCadenceMonitor *)arg1 ;
-(void)setTouchDrifting:(_UIKBRTTouchDrifting *)arg1 ;
-(void)setFingerDetection:(_UIKBRTFingerDetection *)arg1 ;
-(void)setHandRestRecognizer:(_UIKBRTRecognizer *)arg1 ;
-(_UIKBRTTouchVelocities *)touchVelocities;
-(void)setTouchVelocities:(_UIKBRTTouchVelocities *)arg1 ;
-(void)_resetFingerDetectionFromLayout;
-(double)lastTouchUpTime;
-(void)recognizer:(id)arg1 beginTouchDownForTouchWithId:(id)arg2 atPoint:(CGPoint)arg3 forBeginState:(unsigned long long)arg4 whenStateReady:(/*^block*/id)arg5 ;
-(void)recognizer:(id)arg1 restartTouchDownForTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5 whenStateReady:(/*^block*/id)arg6 ;
-(void)recognizer:(id)arg1 shouldContinueTrackingTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5 forContinueState:(unsigned long long)arg6 whenStateReady:(/*^block*/id)arg7 ;
-(void)recognizer:(id)arg1 willIgnoreTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5 whenReady:(/*^block*/id)arg6 ;
-(void)recognizer:(id)arg1 continueTrackingIgnoredTouchWithId:(id)arg2 currentPoint:(CGPoint)arg3 whenReady:(/*^block*/id)arg4 ;
-(void)recognizer:(id)arg1 releaseTouchToLayoutWithId:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4 whenReady:(/*^block*/id)arg5 ;
-(void)recognizer:(id)arg1 cancelTouchOnLayoutWithId:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4 whenReady:(/*^block*/id)arg5 ;
-(void)_uikbrtTouchDriftingStateChanged:(id)arg1 ;
-(unsigned long long)_uikbrtTouchDrifting:(id)arg1 fingerIDFortouchIdentifier:(id)arg2 ;
-(id)_uikbrtTouchDrifting:(id)arg1 touchIdentifiersForFingerID:(unsigned long long)arg2 ;
-(CGPoint)_uikbrtTouchDrifting:(id)arg1 touchCenterForFingerID:(unsigned long long)arg2 ;
-(NSUUID *)shiftKeyTouchUUID;
-(BOOL)hideKeysUnderIndicator;
-(id)deferredTouchDownTask;
-(id)deferredTouchMovedTask;
-(NSMutableDictionary *)deferredTouchTaskLists;
-(void)setDeferredTouchTaskLists:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)deferredTouchTaskListsQueue;
-(void)setDeferredTouchTaskListsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableSet *)touchIgnoredUUIDSet;
-(void)setTouchIgnoredUUIDSet:(NSMutableSet *)arg1 ;
-(BOOL)listeningForWillChange;
-(void)setListeningForWillChange:(BOOL)arg1 ;
-(BOOL)listeningForDidChange;
-(void)setListeningForDidChange:(BOOL)arg1 ;
@end

