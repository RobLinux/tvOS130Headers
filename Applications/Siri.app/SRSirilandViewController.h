/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <Siri/AFUIDebugControllerDelegate.h>
#import <Siri/AFUIInternalDebugControllerDelegate.h>
#import <Siri/SRPagerViewControllerDelegate.h>
#import <Siri/SRSirilandViewDelegate.h>
#import <Siri/SRTranscriptStackViewControllerDataSource.h>
#import <Siri/SRSuggestionsViewControllerDelegate.h>
#import <Siri/SRTranscriptStackViewControllerDelegate.h>
#import <Siri/RadiosPreferencesDelegate.h>
#import <Siri/AFUIStateMachineDelegate.h>
#import <Siri/SiriUIVideoPlayerViewControllerDelegate.h>
#import <Siri/SiriUIModalContainerViewControllerDelegate.h>
#import <Siri/SiriUIPresentation.h>

@protocol SiriUIPresentationDataSource, SiriUIPresentationDelegate, AFUIDebugControlling, AFUIInternalDebugControlling;
@class AFUIStateMachine, SRSuggestionsViewController, SRPagerViewController, UIViewController, UIAlertController, RadiosPreferences, SFStartSearchFeedback, SRSirilandView, NSString;

@interface SRSirilandViewController : UIViewController <AFUIDebugControllerDelegate, AFUIInternalDebugControllerDelegate, SRPagerViewControllerDelegate, SRSirilandViewDelegate, SRTranscriptStackViewControllerDataSource, SRSuggestionsViewControllerDelegate, SRTranscriptStackViewControllerDelegate, RadiosPreferencesDelegate, AFUIStateMachineDelegate, SiriUIVideoPlayerViewControllerDelegate, SiriUIModalContainerViewControllerDelegate, SiriUIPresentation> {

	AFUIStateMachine* _stateMachine;
	long long _currentRequestSource;
	BOOL _passcodeUnlockViewIsShowing;
	BOOL _presentedPreviousConversationFromBreadcrumb;
	SCD_Struct_SR4 _keyboardInfo;
	id<SiriUIPresentationDataSource> _dataSource;
	id<SiriUIPresentationDelegate> _delegate;
	SRSuggestionsViewController* _siriUnavailableViewController;
	SRPagerViewController* _pagerViewController;
	id<AFUIDebugControlling> _debugController;
	UIViewController*<AFUIInternalDebugControlling> _internalDebugController;
	double _lastPresentationTime;
	UIAlertController* _debugAlertController;
	RadiosPreferences* _radioPreferences;
	UIViewController* _presentedViewControllerForDebugController;
	SFStartSearchFeedback* _currentStartSearchFeedback;

}

@property (nonatomic,retain) SRSirilandView * view; 
@property (getter=_siriUnavailableViewController,nonatomic,readonly) SRSuggestionsViewController * siriUnavailableViewController;              //@synthesize siriUnavailableViewController=_siriUnavailableViewController - In the implementation block
@property (getter=_pagerViewController,nonatomic,readonly) SRPagerViewController * pagerViewController;                                        //@synthesize pagerViewController=_pagerViewController - In the implementation block
@property (nonatomic,retain) id<AFUIDebugControlling> debugController;                                                                         //@synthesize debugController=_debugController - In the implementation block
@property (nonatomic,retain) UIViewController*<AFUIInternalDebugControlling> internalDebugController;                                          //@synthesize internalDebugController=_internalDebugController - In the implementation block
@property (assign,nonatomic) double lastPresentationTime;                                                                                      //@synthesize lastPresentationTime=_lastPresentationTime - In the implementation block
@property (getter=_debugAlertController,nonatomic,retain) UIAlertController * debugAlertController;                                            //@synthesize debugAlertController=_debugAlertController - In the implementation block
@property (nonatomic,retain) RadiosPreferences * radioPreferences;                                                                             //@synthesize radioPreferences=_radioPreferences - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentedViewControllerForDebugController;                                              //@synthesize presentedViewControllerForDebugController=_presentedViewControllerForDebugController - In the implementation block
@property (nonatomic,retain) SFStartSearchFeedback * currentStartSearchFeedback;                                                               //@synthesize currentStartSearchFeedback=_currentStartSearchFeedback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriUIPresentationDataSource> dataSource;                                                               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIPresentationDelegate> delegate;                                                                   //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(long long)options;
-(id)initWithCoder:(id)arg1 ;
-(id<SiriUIPresentationDelegate>)delegate;
-(void)setDelegate:(id<SiriUIPresentationDelegate>)arg1 ;
-(long long)_state;
-(void)airplaneModeChanged;
-(id<SiriUIPresentationDataSource>)dataSource;
-(void)setDataSource:(id<SiriUIPresentationDataSource>)arg1 ;
-(void)reloadData;
-(id)_stateMachine;
-(id)requestContext;
-(void)loadView;
-(id)viewController;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)acousticIDRequestDidFinishWithSuccess:(BOOL)arg1 ;
-(void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4 ;
-(void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 ;
-(void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)initWithDelegate:(id)arg1 dataSource:(id)arg2 ;
-(void)_cancelRequest;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)siriDidStartSpeakingWithIdentifier:(id)arg1 ;
-(void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(BOOL)arg2 ;
-(void)playbackDidFinishForVideoPlayerViewController:(id)arg1 ;
-(void)playbackDidFailForVideoPlayerViewController:(id)arg1 ;
-(void)modalContainerViewControllerViewWillDisappear:(id)arg1 ;
-(void)modalContainerViewControllerViewDidDisappear:(id)arg1 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(BOOL)_isTextInputEnabled;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)siriWillShowPasscodeUnlockAndCancelRequest:(BOOL)arg1 ;
-(void)siriDidHidePasscodeUnlock;
-(void)didReceiveHelpAction;
-(void)didReceiveReportBugAction;
-(void)didReceiveBugButtonLongPress;
-(void)siriWillShowPasscodeUnlock;
-(void)_performTransitionForEvent:(long long)arg1 ;
-(void)stateMachine:(id)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3 ;
-(id)stateMachine:(id)arg1 descriptionForEvent:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4 ;
-(id)_topTranscriptViewController;
-(void)statusBarFrameDidChange;
-(void)statusViewHeightDidChange;
-(void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2 ;
-(BOOL)currentSnippetContainsFooterButtons;
-(id)conversationForTranscriptStackViewController:(id)arg1 ;
-(void)changeUtterance:(id)arg1 ;
-(void)handleGetResponseAlternativesPlayback:(id)arg1 ;
-(void)showFullScreenEffect:(id)arg1 ;
-(void)showSpeechAlternatives:(id)arg1 ;
-(long long)siriStateForTranscriptStackViewController:(id)arg1 ;
-(id)domainObjectStoreForTranscriptStackViewController:(id)arg1 ;
-(id)siriEnabledAppListForTranscriptStackViewController:(id)arg1 ;
-(double)contentWidthForTranscriptStackViewController:(id)arg1 ;
-(CGRect)statusBarFrameForTranscriptStackViewController:(id)arg1 ;
-(double)statusViewHeightForTranscriptStackViewController:(id)arg1 ;
-(long long)initialDisplayTypeForTranscriptStackViewController:(id)arg1 ;
-(BOOL)transcriptStackViewControllerShouldDelaySuggestions:(id)arg1 ;
-(BOOL)transcriptStackViewControllerWillShowSuggestions:(id)arg1 ;
-(void)transcriptStackViewControllerDidShowSuggestions:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 didHideVibrantView:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willDiscardConversationItemsWithIdentifiers:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didDelayPresentationOfItemsWithIdentifiers:(id)arg2 ;
-(id)effectiveCoreLocationBundleForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)transcriptStackViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4 userSelectionResults:(id)arg5 ;
-(void)transcriptStackViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)willSendStartRequestForTranscriptStackViewController:(id)arg1 ;
-(BOOL)transcriptStackViewControllerShouldPreventUserInteraction:(id)arg1 ;
-(void)transcriptStackViewControllerRequestKeyboardForTapToEditWithCompletion:(/*^block*/id)arg1 ;
-(void)transcriptStackViewControllerWillBeginEditing:(id)arg1 ;
-(void)transcriptStackViewControllerDidEndEditing:(id)arg1 ;
-(void)cancelRequestForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)stopSpeakingForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 setStatusViewHidden:(BOOL)arg2 ;
-(void)transcriptStackViewController:(id)arg1 setTypeToSiriViewHidden:(BOOL)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didPresentViewController:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didDismissViewController:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didRequestKeyboardWithVisibility:(BOOL)arg2 ;
-(void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)transcriptStackViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transcriptStackViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3 ;
-(void)transcriptStackViewController:(id)arg1 didScrollForInterval:(double)arg2 metricsContext:(id)arg3 ;
-(void)transcriptStackViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5 ;
-(void)transcriptStackViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5 ;
-(void)transcriptStackViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3 ;
-(id)transcriptStackViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2 ;
-(id)transcriptStackViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2 ;
-(unsigned long long)deviceLockStateForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(/*^block*/id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 viewDidSetContentSizeForTranscriptAtIndex:(long long)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willStartTest:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didFinishTest:(id)arg2 ;
-(void)transcriptStackViewControllerDidResignFirstResponder:(id)arg1 ;
-(SCD_Struct_SR0)keyboardInfoForTranscriptStackViewController:(id)arg1 ;
-(BOOL)inTextInputModeForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewControllerWillEnterSiriland:(id)arg1 ;
-(void)transcriptStackViewControllerDidExitSiriland:(id)arg1 ;
-(void)suggestionsViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)suggestionsViewDidShowSuggestions:(id)arg1 ;
-(double)contentWidthForSuggestionsViewController:(id)arg1 ;
-(CGRect)statusBarFrameForSuggestionsViewController:(id)arg1 ;
-(double)statusViewHeightForSuggestionsViewController:(id)arg1 ;
-(id)siriEnabledAppListForSuggestionsController:(id)arg1 ;
-(SCD_Struct_SR0)keyboardInfoForSuggestionsController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transcriptStackViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3 ;
-(void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2 ;
-(id)_activeConversation;
-(id)_previousConversation;
-(void)siriWillHidePasscodeUnlock;
-(void)siriWillStartTextInputRequest;
-(void)updateKeyboardInfo:(SCD_Struct_SR0)arg1 ;
-(BOOL)siriIsShowingPasscodeUnlock;
-(void)didReceiveDismissalAction:(/*^block*/id)arg1 ;
-(id)configureOptionsForImminentRequest:(id)arg1 ;
-(void)siriRequestWillStartWithRequestOptions:(id)arg1 ;
-(void)siriNetworkAvailabilityDidChange;
-(id)prepareAddViewsCommandForConversation:(id)arg1 ;
-(void)startNewConversation;
-(id)prepareUpdateViewsCommandForConversation:(id)arg1 ;
-(void)speechRecordingDidEndForRequest:(id)arg1 onAVRecordRoute:(id)arg2 ;
-(void)speechRecordingDidCancelForRequest:(id)arg1 onAVRecordRoute:(id)arg2 ;
-(void)speechRecordingDidFailForRequest:(id)arg1 onAVRecordRoute:(id)arg2 withError:(id)arg3 ;
-(void)siriDidDetectMusic;
-(void)speechRecordingDidDetectSpeechStartpoint;
-(void)handlePlayContentCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)conversation:(id)arg1 didChangePresentationStateForItemsAtIndexPaths:(id)arg2 ;
-(BOOL)supportsTextInput;
-(void)siriIsIdleAndQuietStatusDidChange:(BOOL)arg1 ;
-(BOOL)shouldResumeInterruptedAudioPlayback;
-(BOOL)shouldUseEventDrivenIdleAndQuietUpdates;
-(void)siriWillStartTest:(id)arg1 ;
-(void)siriDidFinishTest:(id)arg1 ;
-(void)siriFailTest:(id)arg1 withReason:(id)arg2 ;
-(id)_createTranscriptStackViewController;
-(void)_handleDidShowEmergencyCallView:(id)arg1 ;
-(void)_handleWillLeaveEmergencyCallView:(id)arg1 ;
-(id)_siriUnavailableViewController;
-(id)_transcriptStackViewControllers;
-(id)_pagerViewController;
-(void)_updateSiriAvailability:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_scheduleAutoDismissalForLongIdling;
-(void)setDebugAlertController:(UIAlertController *)arg1 ;
-(void)_cancelScheduledAutoDismissalForLongIdlingIfNeeded;
-(id)_activeTranscriptStackViewController;
-(id)_previousTranscriptStackViewController;
-(id)_conversationIdentifiers;
-(id)_identifierOfPreviousConversation;
-(void)_speakText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isUsingBuiltInSpeaker;
-(void)_speakText:(id)arg1 ;
-(id)_transcriptStackViewControllerForConversation:(id)arg1 ;
-(id)_freshTranscriptStackViewController;
-(void)_logParsecStartSearchFeedback;
-(void)_logParsecEndSearchFeedback;
-(void)_dismissForLongIdling;
-(void)_presentRadarComposeController;
-(void)_presentInternalDebugController;
-(id)_debugAlertController;
-(void)_hideAcousticIDSpinner;
-(void)_dismissVideoPlayerViewController;
-(id)_conversationItemAtIndexPath:(id)arg1 forTranscriptStackViewController:(id)arg2 ;
-(id<AFUIDebugControlling>)debugController;
-(void)_updateConversationAvailability:(unsigned long long)arg1 ;
-(void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2 ;
-(UIViewController *)presentedViewControllerForDebugController;
-(void)debugController:(id)arg1 wantsPresentViewController:(id)arg2 ;
-(void)debugController:(id)arg1 wantsDismissViewController:(id)arg2 ;
-(void)getScreenshotImageForDebugController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)debugController:(id)arg1 openURL:(id)arg2 ;
-(void)internalDebugControllerWantsDismissViewController;
-(void)pagerViewController:(id)arg1 didActivatePageViewController:(id)arg2 oldActivePageViewController:(id)arg3 ;
-(void)pagerViewControllerDidChangeTransitionState:(id)arg1 ;
-(CGRect)statusBarFrameForSirilandView:(id)arg1 ;
-(double)statusViewHeightForSirilandView:(id)arg1 ;
-(id)_itemInPreviousConversationAtIndexPath:(id)arg1 ;
-(id)_itemInCurrentConversationAtIndexPath:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 setHelpButtonEmphasized:(BOOL)arg2 ;
-(void)transcriptStackViewControllerPulseHelpButton:(id)arg1 ;
-(void)setDebugController:(id<AFUIDebugControlling>)arg1 ;
-(UIViewController*<AFUIInternalDebugControlling>)internalDebugController;
-(void)setInternalDebugController:(UIViewController*<AFUIInternalDebugControlling>)arg1 ;
-(double)lastPresentationTime;
-(void)setLastPresentationTime:(double)arg1 ;
-(RadiosPreferences *)radioPreferences;
-(void)setRadioPreferences:(RadiosPreferences *)arg1 ;
-(void)setPresentedViewControllerForDebugController:(UIViewController *)arg1 ;
-(SFStartSearchFeedback *)currentStartSearchFeedback;
-(void)setCurrentStartSearchFeedback:(SFStartSearchFeedback *)arg1 ;
@end

