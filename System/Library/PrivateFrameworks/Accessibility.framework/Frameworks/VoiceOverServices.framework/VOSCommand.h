/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, AXSiriShortcut;

@interface VOSCommand : NSObject {

	NSString* _rawValue;
	AXSiriShortcut* _siriShortcut;
	NSString* _votEventCommandName;
	long long _commandType;

}

@property (nonatomic,retain) NSString * votEventCommandName;               //@synthesize votEventCommandName=_votEventCommandName - In the implementation block
@property (assign,nonatomic) long long commandType;                        //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,readonly) NSString * rawValue; 
@property (nonatomic,readonly) AXSiriShortcut * siriShortcut; 
@property (nonatomic,readonly) NSString * localizedName; 
+(id)Invalid;
+(id)builtInCommandWithStringValue:(id)arg1 ;
+(id)PrimaryActivate;
+(id)SecondaryActivate;
+(id)MagicTap;
+(id)Escape;
+(id)PerformLongPress;
+(id)MoveToPreviousElement;
+(id)MoveToNextElement;
+(id)MoveToFirstElement;
+(id)MoveToElementAbove;
+(id)MoveToElementBelow;
+(id)MoveToLastElement;
+(id)MoveToPreviousContainer;
+(id)MoveToNextContainer;
+(id)MoveToTopOfCurrentContainer;
+(id)MoveToBottomOfCurrentContainer;
+(id)MoveToTopOfCurrentDocument;
+(id)MoveToBottomOfCurrentDocument;
+(id)MoveToLinkedUI;
+(id)MoveToStatusBar;
+(id)MoveToPreviousElementCommunity;
+(id)MoveToNextElementCommunity;
+(id)MoveToPreviousCharacter;
+(id)MoveToNextCharacter;
+(id)MoveToPreviousSentence;
+(id)MoveToNextSentence;
+(id)MoveToPreviousParagraph;
+(id)MoveToNextParagraph;
+(id)MoveToPreviousStyleChange;
+(id)MoveToNextStyleChange;
+(id)MoveToPreviousFontChange;
+(id)MoveToNextFontChange;
+(id)MoveToPreviousUnderlineText;
+(id)MoveToNextUnderlineText;
+(id)MoveToPreviousItalicText;
+(id)MoveToNextItalicText;
+(id)MoveToPreviousBoldText;
+(id)MoveToNextBoldText;
+(id)MoveToPreviousColorChange;
+(id)MoveToNextColorChange;
+(id)MoveToPreviousPlainText;
+(id)MoveToNextPlainText;
+(id)MoveToPreviousMisspelledWord;
+(id)MoveToNextMisspelledWord;
+(id)MoveToPreviousBlockquote;
+(id)MoveToNextBlockquote;
+(id)MoveToPreviousSameBlockquote;
+(id)MoveToNextSameBlockquote;
+(id)Cut;
+(id)Copy;
+(id)Paste;
+(id)Undo;
+(id)Redo;
+(id)MoveToPreviousFrame;
+(id)MoveToNextFrame;
+(id)MoveToPreviousTable;
+(id)MoveToNextTable;
+(id)MoveToPreviousColumn;
+(id)MoveToNextColumn;
+(id)MoveToPreviousList;
+(id)MoveToNextList;
+(id)MoveToPreviousSameElement;
+(id)MoveToNextSameElement;
+(id)MoveToPreviousDifferentElement;
+(id)MoveToNextDifferentElement;
+(id)MoveToPreviousHeading;
+(id)MoveToNextHeading;
+(id)MoveToPreviousSameHeading;
+(id)MoveToNextSameHeading;
+(id)MoveToPreviousLink;
+(id)MoveToNextLink;
+(id)MoveToPreviousVisitedLink;
+(id)MoveToNextVisitedLink;
+(id)MoveToPreviousControl;
+(id)MoveToNextControl;
+(id)MoveToPreviousGraphic;
+(id)MoveToNextGraphic;
+(id)MoveToSystemFocusedElement;
+(id)FindElementWithTextSearch;
+(id)PreviousSearchResult;
+(id)NextSearchResult;
+(id)ToggleMute;
+(id)ToggleSpeech;
+(id)SummarizeElement;
+(id)AnalyzeElement;
+(id)PreviewElementWith3DTouch;
+(id)ReadAll;
+(id)ReadFromTop;
+(id)ReadLine;
+(id)ReadWord;
+(id)ReadURL;
+(id)ReadSelectedText;
+(id)ReadTextStyle;
+(id)ReadHint;
+(id)ReadCharacter;
+(id)ReadCharacterPhonetically;
+(id)ReadRowHeader;
+(id)ReadRowContents;
+(id)ReadTableRowColumn;
+(id)ReadTableRowColumnCell;
+(id)ReadColumnHeader;
+(id)ReadColumnContents;
+(id)ReadLineCount;
+(id)SummarizeSystemFocusedElement;
+(id)ReadSystemFocusedElementDetails;
+(id)PreviousRotor;
+(id)NextRotor;
+(id)PreviousRotorItem;
+(id)NextRotorItem;
+(id)ScrollLeft;
+(id)ScrollRight;
+(id)ScrollUp;
+(id)ScrollDown;
+(id)ShowItemChooser;
+(id)OpenVoiceOverSettings;
+(id)ToggleScreenCurtain;
+(id)StartHelp;
+(id)ToggleCaptionPanel;
+(id)LabelElement;
+(id)MonitorElement;
+(id)ToggleSingleLetterQuickNav;
+(id)ToggleLockModifierKeys;
+(id)ShowNotificationCenter;
+(id)ShowControlCenter;
+(id)ActivateSpeakScreen;
+(id)ActivateHomeButton;
+(id)ToggleDock;
+(id)ToggleAppSwitcher;
+(id)ActivateLockButton;
+(id)ShowSpotlight;
+(id)ActivateAccessibilityShortcut;
+(id)ToggleReachability;
+(id)TakeScreenshot;
+(id)SwitchToPreviousApp;
+(id)SwitchToNextApp;
+(id)ToggleTextSelection;
+(id)CopySpeechToClipboard;
+(id)DetectOCRTextOnElement;
+(id)CaptureImageCaptionDiagnostics;
+(id)OutputElementImageCaption;
+(id)PreviousHandwritingCharacterMode;
+(id)NextHandwritingCharacterMode;
+(id)AnnounceHandwritingCharacterMode;
+(id)GesturedTextInputInsertSpace;
+(id)GesturedTextInputBackspace;
+(id)GesturedTextInputDeleteWord;
+(id)GesturedTextInputPerformReturnEquivalent;
+(id)GesturedTextInputPreviousSuggestion;
+(id)GesturedTextInputNextSuggestion;
+(id)GesturedTextInputLaunchApp;
+(id)GesturedTextInputNextKeyboardLanguage;
+(id)BSIPreviousBrailleMode;
+(id)BSINextBrailleMode;
+(id)BSITranslateImmediately;
+(id)BSIOrientationLock;
+(id)BSIQuickAction;
+(id)GesturedTextInputNextBrailleTable;
+(id)MoveToFirstWord;
+(id)MoveToLastWord;
+(id)ActivateBrailleScreenInput;
+(id)allBuiltInCommands;
+(id)commandWithSiriShortcut:(id)arg1 ;
+(id)commandForVOSEventCommand:(id)arg1 ;
-(id)description;
-(NSString *)localizedName;
-(NSString *)rawValue;
-(long long)commandType;
-(void)setCommandType:(long long)arg1 ;
-(AXSiriShortcut *)siriShortcut;
-(id)_initWithSiriShortcut:(id)arg1 ;
-(id)_initBuiltInCommandWithRawValue:(id)arg1 votEventCommandName:(id)arg2 ;
-(NSString *)votEventCommandName;
-(void)setVotEventCommandName:(NSString *)arg1 ;
@end

