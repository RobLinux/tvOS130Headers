/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUIPresentationDelegate <NSObject>
@optional
-(void)siriPresentation:(id)arg1 didPresentIntentWithBundleId:(id)arg2;
-(void)siriPresentation:(id)arg1 willStartTest:(id)arg2;
-(void)siriPresentation:(id)arg1 didFinishTest:(id)arg2;
-(void)siriPresentation:(id)arg1 failTest:(id)arg2 withReason:(id)arg3;
-(void)siriPresentationWillSendStartRequest:(id)arg1;
-(void)siriPresentation:(id)arg1 setTypeToSiriViewHidden:(BOOL)arg2;
-(void)siriPresentationDidRequestCancelSpeechSynthesis:(id)arg1;
-(void)siriPresentationDidRequestRestartSpeechSynthesis:(id)arg1;
-(void)siriPresentationDidPresentDynamicSnippetWithInfo:(id)arg1;

@required
-(void)endSiriSessionForSiriPresentation:(id)arg1 delayForTTS:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;
-(void)siriPresentation:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forConversationItemWithIdentifier:(id)arg4 userSelectionResults:(id)arg5;
-(double)contentWidthForForSiriPresentation:(id)arg1;
-(CGRect*)statusBarFrameForSiriPresentation:(id)arg1;
-(double)statusViewHeightForSiriPresentation:(id)arg1;
-(void)siriPresentation:(id)arg1 startRequestWithOptions:(id)arg2;
-(void)stopRecordingSpeechForSiriPresentation:(id)arg1;
-(void)cancelRequestForSiriPresentation:(id)arg1;
-(void)forceAudioSessionInactiveForSiriPresentation:(id)arg1;
-(void)endSiriSessionForSiriPresentation:(id)arg1;
-(void)siriPresentation:(id)arg1 didPrepareAnimationLinkedConversationItem:(id)arg2 animationBlock:(/*^block*/id)arg3;
-(void)siriPresentation:(id)arg1 didPresentItemsAtIndexPaths:(id)arg2;
-(void)siriPresentation:(id)arg1 willDiscardConversationItemsWithIdentifiers:(id)arg2;
-(void)siriPresentation:(id)arg1 didDelayPresentationOfItemsWithIdentifiers:(id)arg2;
-(BOOL)siriIsSpeakingForSiriPresentation:(id)arg1;
-(unsigned long long)siriDeviceLockStateForSiriPresentation:(id)arg1;
-(void)siriPresentation:(id)arg1 synthesizeSpeechWithText:(id)arg2 completion:(/*^block*/id)arg3;
-(void)siriPresentation:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(/*^block*/id)arg3;
-(void)stopSpeakingForSiriPresentation:(id)arg1;
-(void)siriPresentation:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4;
-(void)siriPresentation:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(id)effectiveCoreLocationBundleForSiriPresentation:(id)arg1;
-(void)siriPresentation:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(void)siriPresentation:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4;
-(void)enableIdleTimerForSiriPresentation:(id)arg1;
-(void)disableIdleTimerForSiriPresentation:(id)arg1;
-(void)getScreenshotImageForSiriPresentation:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)siriPresentationPresentAcousticIDSpinner:(id)arg1;
-(void)siriPresentationRemoveAcousticIDSpinner:(id)arg1;
-(void)handlePasscodeUnlockForSiriPresentation:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)siriPresentation:(id)arg1 setStatusViewHidden:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 setCarDisplaySnippetVisible:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 setCarDisplaySnippetMode:(long long)arg2;
-(void)siriPresentation:(id)arg1 setStatusViewUserInteractionEnabled:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 setStatusViewDisabled:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3;
-(void)siriPresentation:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)siriPresentation:(id)arg1 willPresentViewController:(id)arg2;
-(void)siriPresentation:(id)arg1 didPresentViewController:(id)arg2;
-(void)siriPresentation:(id)arg1 willDismissViewController:(id)arg2;
-(void)siriPresentation:(id)arg1 didDismissViewController:(id)arg2;
-(void)siriPresentation:(id)arg1 didRequestKeyboardWithVisibility:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 setHelpButtonEmphasized:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 setBugReportingAvailable:(BOOL)arg2;
-(void)siriPresentationPulseHelpButton:(id)arg1;
-(void)siriPresentationDidPresentConversationFromBreadcrumb:(id)arg1;
-(void)siriPresentationDidPresentBugReporter:(id)arg1;
-(void)siriPresentationDidDismissBugReporter:(id)arg1;
-(BOOL)siriPresentationShouldDelaySuggestions:(id)arg1;
-(BOOL)inTextInputModeForSiriPresentation:(id)arg1;
-(void)siriPresentationDidPresentUserInterface:(id)arg1;
-(void)siriPresentation:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;
-(void)siriPresentation:(id)arg1 didScrollForInterval:(double)arg2 metricsContext:(id)arg3;
-(void)siriPresentation:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5;
-(void)siriPresentation:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5;
-(void)siriPresentation:(id)arg1 didShowGuideStartTime:(id)arg2 endTime:(id)arg3;
-(void)siriPresentationDidPresentCarPlayGatekeeper:(id)arg1;
-(void)siriPresentationMicButtonWasTapped:(id)arg1;
-(void)siriPresentationMicButtonLongPressBegan:(id)arg1;
-(void)siriPresentationMicButtonLongPressEnded:(id)arg1;
-(void)siriPresentation:(id)arg1 didChangePeekMode:(unsigned long long)arg2;
-(void)siriPresentationClearContext:(id)arg1;
-(id)siriPresentation:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2;
-(id)siriPresentation:(id)arg1 updatedUserUtteranceForRefId:(id)arg2;
-(void)siriPresentationRequestKeyboardForTapToEditWithCompletion:(/*^block*/id)arg1;
-(void)siriPresentationWillBeginEditing:(id)arg1;
-(void)siriPresentationDidEndEditing:(id)arg1;
-(void)siriPresentationDidResignFirstResponder:(id)arg1;
-(void)siriPresentationDidHideUnlockScreen:(id)arg1;

@end
