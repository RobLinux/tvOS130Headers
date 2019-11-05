/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UITextInput_Internal.h>
#import <UIKit/UITextInput.h>
#import <UIKit/UITextInputAdditions.h>
#import <UIKit/UIResponderStandardEditActions.h>
#import <UIKit/UITextInputPrivate.h>

@protocol UITextInputDelegate, UITextInput, UITextInputControllerDelegate;
@class _UITextKitTextRange, _UITextInputControllerTokenizer, NSLayoutManager, NSHashTable, _UITextServiceSession, UITextInputTraits, NSDictionary, NSArray, UIView, _UITextUndoManager, _UITextUndoOperationTyping, UITextChecker, NSSet, UITextPlaceholder, NSString, UITextInputPasswordRules, UITextRange, UITextPosition, NSIndexSet, UIColor, UIImage, UIInputContextHistory, UITextInteractionAssistant, RTIInputSystemSourceSession;

@interface UITextInputController : NSObject <UITextInput_Internal, UITextInput, UITextInputAdditions, UIResponderStandardEditActions, UITextInputPrivate> {

	id<UITextInputDelegate> _inputDelegate;
	_UITextKitTextRange* _selectedTextRange;
	_UITextInputControllerTokenizer* _tokenizer;
	NSLayoutManager* _layoutManager;
	NSHashTable* _observedScrollViews;
	_UITextServiceSession* _learnSession;
	_UITextServiceSession* _shareSession;
	_UITextServiceSession* _lookupSession;
	UITextInputTraits* _textInputTraits;
	NSRange _markedTextRange;
	NSRange _markedTextSelection;
	NSDictionary* _markedTextStyle;
	struct {
		unsigned delegateRespondsToTextInputShouldBeginEditing : 1;
		unsigned delegateRespondsToTextInputShouldChangeCharactersInRangeReplacementText : 1;
		unsigned delegateRespondsToTextInputDidChange : 1;
		unsigned delegateRespondsToTextInputDidChangeSelection : 1;
		unsigned delegateRespondsToTextInputWillChangeSelectionFromCharacterRangeToCharacterRange : 1;
		unsigned delegateRespondsToTextInputEditorDidChangeSelection : 1;
		unsigned delegateRespondsToTextInputPrepareAttributedTextForInsertion : 1;
		unsigned delegateRespondsToIsSingleLine : 1;
		unsigned textOrSelectionChangeOriginatesWithKeyboard : 1;
		unsigned showingTextStyleOptions : 1;
		unsigned undoRedoInProgress : 1;
		unsigned textOrSelectionChangeOriginatesWithMarkedText : 1;
		unsigned nextSelectionChangeMustUpdate : 1;
		unsigned hasTextAlternatives : 1;
		unsigned hasDictationResultMetadata : 1;
		unsigned suppressDelegateChangeNotifications : 1;
	}  _tiFlags;
	NSArray* _extraItemsBeforeTextStyleOptions;
	UIView*<UITextInput> _firstTextView;
	_UITextUndoManager* _undoManager;
	_UITextUndoOperationTyping* _undoOperationForCoalescing;
	UITextChecker* _textChecker;
	NSSet* _whitelistedTypingAttributes;
	UITextPlaceholder* _textPlaceholder;
	BOOL _allowsEditingTextAttributes;
	BOOL _continuousSpellCheckingEnabled;
	BOOL _shouldStartUndoGroup;
	int _currentUndoGroupType;
	NSDictionary* _emptyStringAttributes;
	NSDictionary* _typingAttributes;
	id<UITextInputControllerDelegate> _delegate;
	NSRange _previousSelectedRange;

}

@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder*<UITextInput> __content; 
@property (nonatomic,readonly) UIView*<UITextInputPrivate> _textSelectingContainer; 
@property (assign,nonatomic) NSRange previousSelectedRange;                                                                                               //@synthesize previousSelectedRange=_previousSelectedRange - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutManager * layoutManager;                                                                                      //@synthesize layoutManager=_layoutManager - In the implementation block
@property (setter=_setEmptyStringAttributes:,getter=_emptyStringAttributes,nonatomic,copy) NSDictionary * emptyStringAttributes;                          //@synthesize emptyStringAttributes=_emptyStringAttributes - In the implementation block
@property (assign,nonatomic) int currentUndoGroupType;                                                                                                    //@synthesize currentUndoGroupType=_currentUndoGroupType - In the implementation block
@property (assign,nonatomic) BOOL shouldStartUndoGroup;                                                                                                   //@synthesize shouldStartUndoGroup=_shouldStartUndoGroup - In the implementation block
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,nonatomic) BOOL allowsEditingTextAttributes;                                                                                            //@synthesize allowsEditingTextAttributes=_allowsEditingTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * typingAttributes;                                                                                               //@synthesize typingAttributes=_typingAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<UITextInputControllerDelegate> delegate;                                                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL continuousSpellCheckingEnabled;                                                                                         //@synthesize continuousSpellCheckingEnabled=_continuousSpellCheckingEnabled - In the implementation block
@property (setter=_setWhitelistedTypingAttributes:,getter=_whitelistedTypingAttributes,nonatomic,copy) NSSet * _whitelistedTypingAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (nonatomic,readonly) BOOL hasText; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (assign,nonatomic) NSRange validTextRange; 
@property (nonatomic,copy) NSIndexSet * PINEntrySeparatorIndexes; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (nonatomic,retain) UIColor * underlineColorForTextAlternatives; 
@property (nonatomic,retain) UIColor * underlineColorForSpelling; 
@property (assign,nonatomic) unsigned long long insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL isSingleLineDocument; 
@property (assign,nonatomic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic) BOOL hasDefaultContents; 
@property (assign,nonatomic) BOOL acceptsPayloads; 
@property (assign,nonatomic) BOOL acceptsEmoji; 
@property (assign,nonatomic) BOOL acceptsDictationSearchResults; 
@property (assign,nonatomic) BOOL useAutomaticEndpointing; 
@property (assign,nonatomic) BOOL showDictationButton; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL forceDisableDictation; 
@property (assign,nonatomic) BOOL forceDefaultDictationInfo; 
@property (assign,nonatomic) long long forceDictationKeyboardType; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL forceFloatingKeyboard; 
@property (assign,nonatomic) UIEdgeInsets floatingKeyboardEdgeInsets; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL displaySecureEditsUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (nonatomic,retain) UIInputContextHistory * inputContextHistory; 
@property (assign,nonatomic) BOOL disableInputBars; 
@property (assign,nonatomic) BOOL isCarPlayIdiom; 
@property (assign,nonatomic) long long textScriptType; 
@property (assign,nonatomic) BOOL loadKeyboardsForSiriLanguage; 
@property (assign,nonatomic) BOOL disablePrediction; 
@property (assign,nonatomic) BOOL hidePrediction; 
@property (assign,getter=isDevicePasscodeEntry,nonatomic) BOOL devicePasscodeEntry; 
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) long long selectionGranularity; 
@property (nonatomic,readonly) id<UITextInputSuggestionDelegate> textInputSuggestionDelegate; 
@property (assign,nonatomic) long long _textInputSource; 
@property (nonatomic,readonly) RTIInputSystemSourceSession * _rtiSourceSession; 
@property (nonatomic,readonly) BOOL supportsImagePaste; 
+(id)whitelistedDictationDictionaryFromMetadata:(id)arg1 ;
+(BOOL)_pasteboardHasStrings;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(id<UITextInputControllerDelegate>)delegate;
-(void)setDelegate:(id<UITextInputControllerDelegate>)arg1 ;
-(BOOL)isEditable;
-(BOOL)isEditing;
-(id)undoManager;
-(void)_transpose;
-(id<UITextInputDelegate>)inputDelegate;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(BOOL)hasText;
-(id)_selectedText;
-(NSRange)selectedRange;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(id)_textInputTraits;
-(NSRange)_selectedRange;
-(id<UITextInputTokenizer>)tokenizer;
-(BOOL)isCoalescing;
-(void)selectAll;
-(NSRange)_selectedNSRange;
-(id)_rectsForRange:(NSRange)arg1 ;
-(void)_selectAll;
-(long long)selectionAffinity;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(void)alignCenter:(id)arg1 ;
-(void)alignJustified:(id)arg1 ;
-(void)alignLeft:(id)arg1 ;
-(void)alignRight:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)makeTextWritingDirectionNatural:(id)arg1 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(NSRange)markedRange;
-(void)unmarkText;
-(id)selectionView;
-(void)setContinuousSpellCheckingEnabled:(BOOL)arg1 ;
-(NSDictionary *)typingAttributes;
-(NSLayoutManager *)layoutManager;
-(id)_layoutManager;
-(NSDictionary *)markedTextStyle;
-(id)_textStorage;
-(void)setLayoutManager:(NSLayoutManager *)arg1 ;
-(id)_firstTextView;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(UITextRange *)markedTextRange;
-(void)_addShortcut:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_promptForReplace:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(void)replace:(id)arg1 ;
-(void)select:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)increaseSize:(id)arg1 ;
-(void)decreaseSize:(id)arg1 ;
-(void)pasteAndMatchStyle:(id)arg1 ;
-(void)_pasteAndMatchStyle:(BOOL)arg1 ;
-(void)updateTextAttributesWithConversionHandler:(/*^block*/id)arg1 ;
-(id)_moveDown:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveUp:(BOOL)arg1 withHistory:(id)arg2 ;
-(void)_deleteByWord;
-(void)_deleteForwardAndNotify:(BOOL)arg1 ;
-(void)_deleteToEndOfParagraph;
-(void)_deleteToStartOfLine;
-(void)beginSelectionChange;
-(UITextRange *)selectedTextRange;
-(CGRect)_selectionClipRect;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(unsigned)_characterBeforeCaretSelection;
-(unsigned)_characterInRelationToCaretSelection:(int)arg1 ;
-(BOOL)_selectionAtDocumentStart;
-(void)endSelectionChange;
-(id)textInRange:(id)arg1 ;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(UITextPosition *)beginningOfDocument;
-(UITextPosition *)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(UITextInteractionAssistant *)interactionAssistant;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(void)_deleteToEndOfLine;
-(id)metadataDictionariesForDictationResults;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(void)setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(id)insertTextPlaceholderWithSize:(CGSize)arg1 ;
-(void)removeTextPlaceholder:(id)arg1 ;
-(id)insertDictationResultPlaceholder;
-(void)insertAttributedText:(id)arg1 ;
-(id)attributedTextInRange:(id)arg1 ;
-(void)replaceRange:(id)arg1 withAttributedText:(id)arg2 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1 ;
-(id<UITextInputSuggestionDelegate>)textInputSuggestionDelegate;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)clearText;
-(void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(void)_sendDelegateChangeNotificationsForText:(BOOL)arg1 selection:(BOOL)arg2 ;
-(void)validateCommand:(id)arg1 ;
-(BOOL)_hasMarkedText;
-(BOOL)_usesAsynchronousProtocol;
-(BOOL)_isSecureTextEntry;
-(id)_fontForCaretSelection;
-(id)_textColorForCaretSelection;
-(void)_unmarkText;
-(NSRange)_selectedRangeWithinMarkedText;
-(unsigned)_characterAfterCaretSelection;
-(NSRange)_nsrangeForTextRange:(id)arg1 ;
-(unsigned)_characterInRelationToRangedSelection:(int)arg1 ;
-(void)updateSelection;
-(id)_rangeFromCurrentRangeWithDelta:(NSRange)arg1 ;
-(id)_textRangeFromNSRange:(NSRange)arg1 ;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1 ;
-(void)_extendCurrentSelection:(int)arg1 ;
-(void)_setCaretSelectionAtEndOfSelection;
-(void)_setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)_setGestureRecognizers;
-(void)_replaceDocumentWithText:(id)arg1 ;
-(void)_moveCurrentSelection:(int)arg1 ;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_deleteBackwardAndNotify:(BOOL)arg1 ;
-(id)_wordContainingCaretSelection;
-(id)_rangeOfEnclosingWord:(id)arg1 ;
-(id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2 ;
-(id)_fullText;
-(id)_proxyTextInput;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2 ;
-(void)_replaceCurrentWordWithText:(id)arg1 ;
-(BOOL)_selectionAtDocumentEnd;
-(void)_setSelectionToPosition:(id)arg1 ;
-(id)_rangeOfSmartSelectionIncludingRange:(id)arg1 ;
-(id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2 ;
-(unsigned)_characterInRelationToPosition:(id)arg1 amount:(int)arg2 ;
-(id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2 ;
-(id)_selectableText;
-(id)_fullRange;
-(int)_indexForTextPosition:(id)arg1 ;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2 ;
-(long long)_opposingDirectionFromDirection:(long long)arg1 ;
-(id)_keyInput;
-(id)_normalizedStringForRangeComparison:(id)arg1 ;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isEmptySelection;
-(id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4 ;
-(id)_setSelectionRangeWithHistory:(id)arg1 ;
-(long long)_selectionAffinity;
-(id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4 ;
-(void)_setInternalGestureRecognizers;
-(BOOL)_selectionAtWordStart;
-(BOOL)_hasMarkedTextOrRangedSelection;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(id)_rangeOfLineEnclosingPosition:(id)arg1 ;
-(id)_rangeOfSentenceEnclosingPosition:(id)arg1 ;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1 ;
-(BOOL)_range:(id)arg1 containsRange:(id)arg2 ;
-(BOOL)_range:(id)arg1 intersectsRange:(id)arg2 ;
-(id)_intersectionOfRange:(id)arg1 andRange:(id)arg2 ;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1 ;
-(BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3 ;
-(CGRect)_caretRect;
-(void)_performWhileSuppressingDelegateNotifications:(/*^block*/id)arg1 ;
-(BOOL)_isDisplayingShortcutViewController;
-(BOOL)allowsEditingTextAttributes;
-(void)setAllowsEditingTextAttributes:(BOOL)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(void)_removeShareController;
-(void)_removeShortcutController;
-(void)_removeDefinitionController;
-(BOOL)drawsAsAtom;
-(int)atomStyle;
-(id)textChecker;
-(void)_textStorageDidProcessEditing:(id)arg1 ;
-(void)didEndEditing;
-(void)_invalidateEmptyStringAttributes;
-(void)addTextAlternativesDisplayStyle:(long long)arg1 toRange:(NSRange)arg2 ;
-(id)_filteredAttributedTextInRange:(NSRange)arg1 ;
-(void)_selectionGeometryChanged;
-(BOOL)_hasDictationPlaceholder;
-(void)_addToTypingAttributes:(id)arg1 value:(id)arg2 ;
-(id)_attributedStringForInsertionOfAttributedString:(id)arg1 ;
-(void)_updateEmptyStringAttributes;
-(NSRange)_rangeForBackwardsDelete;
-(BOOL)_isDisplayingReferenceLibraryViewController;
-(BOOL)_isDisplayingShareViewController;
-(BOOL)_isDisplayingLookupViewController;
-(BOOL)_canHandleResponderAction:(SEL)arg1 ;
-(BOOL)_shouldHandleResponderAction:(SEL)arg1 ;
-(void)_clearSelectionUI;
-(void)_setUndoRedoInProgress:(BOOL)arg1 ;
-(BOOL)_delegateShouldChangeTextInRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(void)undoWillChangeText;
-(void)undoDidChangeText;
-(void)stopCoalescing;
-(void)_detachFromLayoutManager;
-(id)_initWithLayoutManager:(id)arg1 ;
-(void)_textContainerDidChangeView:(id)arg1 ;
-(void)_resetShowingTextStyle:(id)arg1 ;
-(void)setPreviousSelectedRange:(NSRange)arg1 ;
-(void)_updateFirstTextView;
-(id)_senderForDelegateNotifications;
-(void)_cancelDictationIfNecessaryForChangeInRange:(NSRange)arg1 ;
-(void)_setupTextContainerView:(id)arg1 ;
-(void)_teardownTextContainerView:(id)arg1 ;
-(void)_forceUnmarkTextDueToEditing;
-(void)_ensureSelectionValid;
-(BOOL)supportLetterByLetterUndo;
-(BOOL)_mightHaveSelection;
-(void)_setSelectedTextRange:(id)arg1 ;
-(void)_coordinateSelectionChange:(/*^block*/id)arg1 ;
-(void)_invalidateTypingAttributes;
-(void)_setSelectedRange:(NSRange)arg1 ;
-(NSRange)_rangeToReplaceWhenInsertingText;
-(void)_sendDelegateWillChangeNotificationsForText:(BOOL)arg1 selection:(BOOL)arg2 ;
-(id)_newAttributedStringForInsertionOfText:(id)arg1 inRange:(NSRange)arg2 ;
-(NSRange)nsRangeForTextRange:(id)arg1 ;
-(void)registerUndoOperationForType:(int)arg1 actionName:(id)arg2 affectedRange:(NSRange)arg3 replacementText:(id)arg4 ;
-(void)_insertText:(id)arg1 fromKeyboard:(BOOL)arg2 ;
-(void)checkSpellingForSelectionChangeIfNecessary;
-(void)removeAlternativesForCurrentWord;
-(id)_newAttributedStringForInsertionOfAttributedText:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_insertAttributedText:(id)arg1 fromKeyboard:(BOOL)arg2 ;
-(void)_updateRangeForSmartDelete;
-(void)removeSpellingMarkersForCurrentWord;
-(void)removeSpellingMarkersFromWordInRange:(id)arg1 ;
-(BOOL)continuousSpellCheckingEnabled;
-(NSRange)previousSelectedRange;
-(void)checkSpellingForWordInRange:(id)arg1 ;
-(BOOL)_shouldConsiderTextViewForGeometry:(id)arg1 ;
-(unsigned long long)_validCaretPositionFromCharacterIndex:(unsigned long long)arg1 downstream:(BOOL)arg2 ;
-(CGRect)_caretRectForOffset:(unsigned long long)arg1 ;
-(id)_parentScrollView;
-(void)_replaceRange:(id)arg1 withAttributedTextFromKeyboard:(id)arg2 addingUnderlinesForAlternatives:(BOOL)arg3 ;
-(void)checkSmartPunctuationForWordInRange:(id)arg1 ;
-(void)_setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2 fromKeyboard:(BOOL)arg3 ;
-(id)_characterPositionForPoint:(CGPoint)arg1 ;
-(NSSet *)_whitelistedTypingAttributes;
-(id)_attributesForReplacementInRange:(NSRange)arg1 ;
-(id)_emptyStringAttributes;
-(id)_fixupTypingAttributeForAttributes:(id)arg1 ;
-(void)_setEmptyStringAttributes:(id)arg1 ;
-(void)_undoManagerWillUndo:(id)arg1 ;
-(BOOL)shouldStartNewUndoGroup:(id)arg1 textGranularity:(long long)arg2 operationType:(int)arg3 ;
-(BOOL)_undoRedoInProgress;
-(BOOL)shouldStartUndoGroup;
-(void)setCurrentUndoGroupType:(int)arg1 ;
-(void)appendUndoOperation:(id)arg1 newGroup:(BOOL)arg2 ;
-(void)setShouldStartUndoGroup:(BOOL)arg1 ;
-(void)scheduleUndoOperationForType:(int)arg1 actionName:(id)arg2 previousSelectedRange:(NSRange)arg3 replacementText:(id)arg4 ;
-(void)coalesceInTextView:(id)arg1 affectedRange:(NSRange)arg2 replacementRange:(NSRange)arg3 replacementText:(id)arg4 ;
-(void)_insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 replacingRange:(NSRange)arg3 resultLength:(unsigned long long*)arg4 ;
-(void)_setSelectedRangeToEndIfNecessary;
-(id)insertTextPlaceholderWithSize:(CGSize)arg1 embeddingType:(long long)arg2 ;
-(CGRect)frameForTextPlaceholder:(id)arg1 ;
-(void)removeTextPlaceholder:(id)arg1 notifyInputDelegate:(BOOL)arg2 ;
-(id)textRangeForNSRange:(NSRange)arg1 ;
-(id)_selectedAttributedText;
-(void)_copySelectionToClipboard:(id)arg1 ;
-(void)_copySelectionToClipboard;
-(BOOL)_pasteFromPasteboard:(id)arg1 andMatchStyle:(BOOL)arg2 ;
-(void)_pasteAttributedString:(id)arg1 pasteAsRichText:(BOOL)arg2 ;
-(void)_pasteRawAttributedString:(id)arg1 asRichText:(BOOL)arg2 ;
-(void)_toggleFontTrait:(unsigned)arg1 ;
-(void)_changeTextAlignment:(long long)arg1 undoString:(id)arg2 ;
-(void)_validateCommand:(id)arg1 forFont:(id)arg2 traits:(int)arg3 ;
-(void)_selectionDidScroll:(id)arg1 ;
-(void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2 ;
-(void)preheatTextChecker;
-(void)_ensureSelectionVisible;
-(void)_setWhitelistedTypingAttributes:(id)arg1 ;
-(void)changeWillBeUndone:(id)arg1 ;
-(void)removeTextStylingFromString:(id)arg1 ;
-(void)_pasteAttributedString:(id)arg1 toRange:(id)arg2 completion:(/*^block*/id)arg3 ;
-(int)currentUndoGroupType;
@end

