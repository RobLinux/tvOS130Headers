/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKitCore/PKAppearanceObject.h>
#import <UIKitCore/MPUAutoupdatingTextContainer.h>
#import <UIKitCore/ABText.h>
#import <UIKitCore/_UIViewBaselineSpacing.h>
#import <UIKitCore/_UITextContainerViewDelegate.h>
#import <UIKitCore/_UITextViewContentPaddingDelegate.h>
#import <UIKit/UITextInputControllerDelegate.h>
#import <UIKit/UITextAutoscrolling.h>
#import <UIKit/UIKeyboardInput.h>
#import <UIKit/UITextInputTraits_Private.h>
#import <UIKitCore/_UIMultilineTextContentSizing.h>
#import <UIKitCore/_UILayoutBaselineUpdating.h>
#import <UIKit/UIViewGhostedRangeSupporting.h>
#import <UIKitCore/_UITextItemInteracting.h>
#import <UIKitCore/_UITextContent.h>
#import <UIKitCore/_UITextItemDiscoverable.h>
#import <UIKit/UITextInput.h>
#import <UIKit/UIContentSizeCategoryAdjusting.h>

@protocol UITextInputTokenizer;
@class NSLayoutManager, NSTextStorage, NSTextContainer, _UITextContainerView, UITextInputController, UITextInteractionAssistant, UITextInputTraits, UIAutoscroll, _UITextViewRestorableScrollPosition, UILabel, UIView, NSDictionary, _UICharacterStreamingManager, _UITextSizeCache, CUICatalog, _UITextItemDiscoverer, _UITextViewContentPadding, _UITextViewVisualStyle, NSString, UIFont, NSAttributedString, MPUTextContainerContentSizeUpdater, UIColor, UITextInputPasswordRules, NSIndexSet, UIImage, UIInputContextHistory, UITextRange, UITextPosition;

@interface UITextView : UIScrollView <PKAppearanceObject, MPUAutoupdatingTextContainer, ABText, _UIViewBaselineSpacing, _UITextContainerViewDelegate, _UITextViewContentPaddingDelegate, UITextInputControllerDelegate, UITextAutoscrolling, UIKeyboardInput, UITextInputTraits_Private, _UIMultilineTextContentSizing, _UILayoutBaselineUpdating, UIViewGhostedRangeSupporting, _UITextItemInteracting, _UITextContent, _UITextItemDiscoverable, UITextInput, UIContentSizeCategoryAdjusting> {

	NSTextStorage* _textStorage;
	NSTextContainer* _textContainer;
	NSLayoutManager* _layoutManager;
	_UITextContainerView* _containerView;
	id _inputDelegate;
	id<UITextInputTokenizer> _tokenizer;
	UITextInputController* _inputController;
	UITextInteractionAssistant* _interactionAssistant;
	UITextInputTraits* _textInputTraits;
	UIAutoscroll* _autoscroll;
	struct {
		unsigned needsScrollToSelectionAfterLayout : 1;
		unsigned editable : 1;
		unsigned reentrancyGuard : 1;
		unsigned usesExplicitPreferredMaxLayoutWidth : 1;
		unsigned interactiveSelectionDisabled : 1;
		unsigned selectable : 1;
		unsigned shouldPresentSheetsInAWindowLayeredAboveTheKeyboard : 1;
		unsigned shouldAutoscrollAboveBottom : 1;
		unsigned containerViewSizeInvalid : 1;
		unsigned isAnimatingPaste : 1;
		unsigned textSizeCacheEnabled : 1;
	}  _tvFlags;
	long long _contentSizeUpdateSeqNo;
	_UITextViewRestorableScrollPosition* _scrollTarget;
	unsigned long long _scrollPositionDontRecordCount;
	_UITextViewRestorableScrollPosition* _scrollPosition;
	double _offsetFromScrollPosition;
	unsigned long long _dataDetectorTypes;
	double _preferredMaxLayoutWidth;
	UILabel* _placeholderLabel;
	UIView* _inputAccessoryView;
	NSDictionary* _linkTextAttributes;
	_UICharacterStreamingManager* _characterStreamingManager;
	NSDictionary* _siriParameters;
	double _firstBaselineOffsetFromTop;
	double _lastBaselineOffsetFromBottom;
	_UITextSizeCache* _intrinsicSizeCache;
	CUICatalog* _cuiCatalog;
	UIEdgeInsets _beforeFreezingTextContainerInset;
	UIEdgeInsets _duringFreezingTextContainerInset;
	CGSize _beforeFreezingFrameSize;
	BOOL _unfreezingTextContainerSize;
	CGRect _frameOfTrailingWhitespace;
	_UITextItemDiscoverer* _textItemDiscoverer;
	_UITextViewContentPadding* _topContentPadding;
	_UITextViewContentPadding* _bottomContentPadding;
	CGPoint _scrollEndDraggingVelocity;
	BOOL _adjustsFontForContentSizeCategory;
	BOOL _clearsOnInsertion;
	double _multilineContextWidth;
	UIView* _inputView;
	_UITextViewVisualStyle* _visualStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:,nonatomic) BOOL MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) MPUTextContainerContentSizeUpdater * MPU_contentSizeUpdater; 
@property (nonatomic,copy) NSString * ab_text; 
@property (nonatomic,copy) NSDictionary * ab_textAttributes; 
@property (nonatomic,retain) UIView * uiss_snapshotView; 
@property (assign,setter=_setDrawsDebugBaselines:,nonatomic) BOOL _drawsDebugBaselines; 
@property (nonatomic,retain) _UITextViewVisualStyle * visualStyle;                                                                                                                         //@synthesize visualStyle=_visualStyle - In the implementation block
@property (assign,nonatomic,__weak) id<UITextViewDelegate> delegate; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,getter=isSelectable,nonatomic) BOOL selectable; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes; 
@property (assign,nonatomic) BOOL allowsEditingTextAttributes; 
@property (copy) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSDictionary * typingAttributes; 
@property (retain) UIView * inputView;                                                                                                                                                     //@synthesize inputView=_inputView - In the implementation block
@property (retain) UIView * inputAccessoryView; 
@property (assign,nonatomic) BOOL clearsOnInsertion;                                                                                                                                       //@synthesize clearsOnInsertion=_clearsOnInsertion - In the implementation block
@property (nonatomic,readonly) NSTextContainer * textContainer;                                                                                                                            //@synthesize textContainer=_textContainer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textContainerInset; 
@property (nonatomic,readonly) NSLayoutManager * layoutManager;                                                                                                                            //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,readonly) NSTextStorage * textStorage;                                                                                                                                //@synthesize textStorage=_textStorage - In the implementation block
@property (nonatomic,copy) NSDictionary * linkTextAttributes; 
@property (assign,nonatomic) BOOL usesStandardTextScaling; 
@property (nonatomic,readonly) BOOL isSingleLineDocument; 
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
@property (nonatomic,readonly) id<UICoordinateSpace> textItemCoordinateSpace; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                                                                                       //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
+(id)pkui_plainInteractiveTextViewWithFrame:(CGRect)arg1 ;
+(id)pkui_plainNonInteractiveTextViewWithFrame:(CGRect)arg1 ;
+(void)pkui_styleTextView:(id)arg1 ;
+(id)_defaultTextColor;
+(BOOL)_isCompatibilityTextView;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(CGSize)pkui_textSizeThatFits:(CGSize)arg1 ;
-(CGRect)pkui_frameForTextFrame:(CGRect)arg1 ;
-(CGRect)pkui_textFrame;
-(void)pk_setAttributedTextRespectingTextAndBackgroundColors:(id)arg1 ;
-(MPUTextContainerContentSizeUpdater *)MPU_contentSizeUpdater;
-(BOOL)MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
-(void)MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:(BOOL)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(CGSize)_nui_additionalInsetsForBaselines;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
-(void)_cnui_applyContactStyle;
-(void)setAb_text:(NSString *)arg1 ;
-(NSString *)ab_text;
-(NSDictionary *)ab_textAttributes;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_containerView;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)isEditable;
-(BOOL)isEditing;
-(id)undoManager;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)visibleRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<UITextInputDelegate>)inputDelegate;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(BOOL)hasText;
-(id)selectedText;
-(NSRange)selectedRange;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(id)_textInputTraits;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(double)lineHeight;
-(void)setLineHeight:(double)arg1 ;
-(unsigned long long)marginTop;
-(void)setMarginTop:(unsigned long long)arg1 ;
-(id)webView;
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
-(void)unmarkText;
-(id)selectionView;
-(void)setContinuousSpellCheckingEnabled:(BOOL)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(NSDictionary *)typingAttributes;
-(NSLayoutManager *)layoutManager;
-(NSTextStorage *)textStorage;
-(NSDictionary *)linkTextAttributes;
-(NSTextContainer *)textContainer;
-(NSDictionary *)markedTextStyle;
-(BOOL)_drawsDebugBaselines;
-(void)_setDrawsDebugBaselines:(BOOL)arg1 ;
-(UIEdgeInsets)textContainerInset;
-(CGSize)intrinsicContentSize;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)layoutSubviews;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)setContentToHTMLString:(id)arg1 ;
-(void)setAttributedPlaceholder:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(void)setContentMode:(long long)arg1 ;
-(void)setSelectable:(BOOL)arg1 ;
-(void)_setInteractiveTextSelectionDisabled:(BOOL)arg1 ;
-(void)setLinkTextAttributes:(NSDictionary *)arg1 ;
-(long long)textAlignment;
-(void)tintColorDidChange;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setInputView:(UIView *)arg1 ;
-(UITextRange *)markedTextRange;
-(void)setTextContainerInset:(UIEdgeInsets)arg1 ;
-(void)setUsesTiledViews:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
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
-(void)updateTextAttributesWithConversionHandler:(/*^block*/id)arg1 ;
-(UIView *)inputAccessoryView;
-(UIView *)inputView;
-(Class)_printFormatterClass;
-(unsigned long long)dataDetectorTypes;
-(void)beginSelectionChange;
-(BOOL)_shouldSuppressSelectionCommands;
-(UITextRange *)selectedTextRange;
-(void)takeTraitsFrom:(id)arg1 ;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)cancelAutoscroll;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(BOOL)_allowAnimatedUpdateSelectionRectViews;
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
-(id)interactionAssistant;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(id)automaticallySelectedOverlay;
-(id)metadataDictionariesForDictationResults;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(void)insertText:(id)arg1 alternatives:(id)arg2 style:(long long)arg3 ;
-(void)setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(id)insertTextPlaceholderWithSize:(CGSize)arg1 ;
-(void)removeTextPlaceholder:(id)arg1 ;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(UIView *)textInputView;
-(id)insertDictationResultPlaceholder;
-(BOOL)forceEnableDictation;
-(void)setForceEnableDictation:(BOOL)arg1 ;
-(BOOL)forceDisableDictation;
-(void)setForceDisableDictation:(BOOL)arg1 ;
-(void)insertAttributedText:(id)arg1 ;
-(id)attributedTextInRange:(id)arg1 ;
-(void)insertText:(id)arg1 style:(long long)arg2 alternatives:(id)arg3 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1 ;
-(BOOL)isSelectable;
-(BOOL)canBecomeFocused;
-(void)drawRect:(CGRect)arg1 forViewPrintFormatter:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(double)_baselineOffsetFromBottom;
-(void)_updatePlaceholderVisibility;
-(double)_firstBaselineOffsetFromTop;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(void)_updateContentSize;
-(id)attributedPlaceholder;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6 ;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4 ;
-(id)_fontInfoForBaselineSpacing;
-(BOOL)_hasFontInfoForVerticalBaselineSpacing;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(double)_preferredMaxLayoutWidth;
-(void)_setPreferredMaxLayoutWidth:(double)arg1 ;
-(id)initReadonlyAndUnselectableWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)_setTextColor:(id)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(id)_canvasView;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(_UITextViewVisualStyle *)visualStyle;
-(void)adjustedContentInsetDidChange;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)setVisualStyle:(_UITextViewVisualStyle *)arg1 ;
-(BOOL)_allowInteraction:(long long)arg1 forTextInteractableItem:(id)arg2 ;
-(BOOL)_allowHighlightForTextInteractableItem:(id)arg1 ;
-(void)validateCommand:(id)arg1 ;
-(BOOL)_ownsInputAccessoryView;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1 ;
-(void)_scrollViewWillEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(CGPoint*)arg2 ;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(id)_layoutDebuggingTitle;
-(void)_diagnoseFocusabilityForReport:(id)arg1 ;
-(BOOL)_restoreFirstResponder;
-(BOOL)_hasBaseline;
-(CGRect)visibleTextRect;
-(id)_inputController;
-(BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
-(void)_updateBaselineInformationDependentOnBounds;
-(void)updateSelection;
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)arg1 ;
-(void)_deleteBackwardAndNotify:(BOOL)arg1 ;
-(void)_scrollRangeToVisible:(NSRange)arg1 animated:(BOOL)arg2 ;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1 ;
-(void)disableClearsOnInsertion;
-(BOOL)_isInteractiveTextSelectionDisabled;
-(id)_textInputViewForAddingGestureRecognizers;
-(void)_resetUsesExplicitPreferredMaxLayoutWidth;
-(BOOL)_isDisplayingShortcutViewController;
-(BOOL)allowsEditingTextAttributes;
-(void)setAllowsEditingTextAttributes:(BOOL)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(BOOL)_mightHaveInteractableItems;
-(id)_textInteractableItemAtPoint:(CGPoint)arg1 ;
-(BOOL)_presentActionsForTextInteractableItem:(id)arg1 ;
-(id)_getDelegateZoomView;
-(UIView *)uiss_snapshotView;
-(CGRect)rectInTextContainerForRect:(CGRect)arg1 ;
-(void)setUiss_snapshotView:(UIView *)arg1 ;
-(double)beginSnapshotSeparationOfHeight:(double)arg1 atYOffset:(double)arg2 ;
-(void)addSnapshotSeparation:(double)arg1 withAffinity:(long long)arg2 ;
-(void)endSnapshotSeparation;
-(void)setMaxTileHeight:(double)arg1 ;
-(double)maxTileHeight;
-(void)addGhostedRange:(id)arg1 ;
-(void)removeAllGhostedRanges;
-(void)addInvisibleRange:(id)arg1 ;
-(void)removeInvisibleRange:(id)arg1 ;
-(void)_textStorageDidProcessEditing:(id)arg1 ;
-(BOOL)_shouldObscureInput;
-(id)_cuiStyleEffectConfiguration;
-(id)_cuiCatalog;
-(void)addTextAlternativesDisplayStyle:(long long)arg1 toRange:(NSRange)arg2 ;
-(BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textInputDidChange:(id)arg1 ;
-(void)textInputDidChangeSelection:(id)arg1 ;
-(void)textInputWillAnimatePaste:(id)arg1 ;
-(void)textInputDidAnimatePaste:(id)arg1 ;
-(BOOL)allowsAttachments;
-(void)_setCuiCatalog:(id)arg1 ;
-(void)_setCuiStyleEffectConfiguration:(id)arg1 ;
-(void)_setupDefaultStyleEffectConfiguration;
-(void)setClearsOnInsertion:(BOOL)arg1 ;
-(void)_updateSelectionGestures;
-(void)_notifyDidBeginEditing;
-(BOOL)isTextDragActive;
-(void)_notifyDidEndEditing;
-(void)_adjustFontForAccessibilityTraits:(BOOL)arg1 ;
-(void)_updateTextEffectsConfigurationIfNeeded;
-(BOOL)clearsOnInsertion;
-(id)_attributedStringForInsertionOfAttributedString:(id)arg1 ;
-(BOOL)_isDisplayingReferenceLibraryViewController;
-(BOOL)_isDisplayingShareViewController;
-(BOOL)_isDisplayingLookupViewController;
-(void)_selectionMayChange:(id)arg1 ;
-(BOOL)isTextDropActive;
-(id)_textItemDiscoverer;
-(id<UICoordinateSpace>)textItemCoordinateSpace;
-(id)visibleTextRange;
-(id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2 ;
-(BOOL)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2 ;
-(NSRange)_visibleRangeWithLayout:(BOOL)arg1 ;
-(BOOL)_mightHaveSelection;
-(id)_whitelistedTypingAttributes;
-(BOOL)usesStandardTextScaling;
-(void)_pasteAttributedString:(id)arg1 pasteAsRichText:(BOOL)arg2 ;
-(void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2 ;
-(void)_setWhitelistedTypingAttributes:(id)arg1 ;
-(void)_observedTextViewDidChange:(id)arg1 ;
-(void)_setTypingAttributesTextColor:(id)arg1 ;
-(void)_updateContainerTileAndSizingFlags;
-(void)_textContainerSizeDidChange:(id)arg1 ;
-(void)_commonInitWithTextContainer:(id)arg1 isDecoding:(BOOL)arg2 isEditable:(BOOL)arg3 isSelectable:(BOOL)arg4 isDraggable:(BOOL)arg5 ;
-(void)setUsesStandardTextScaling:(BOOL)arg1 ;
-(void)_syncTypingAttributesToTextContainerAttributesForExtraLineFragment;
-(BOOL)_shouldStartDataDetectors;
-(void)_startDataDetectors;
-(unsigned long long)_totalNumberOfTextViewsInLayoutManager;
-(id)_restorableScrollPosition;
-(CGPoint)_contentOffsetForScrollToVisible:(NSRange)arg1 ;
-(CGSize)_containerSizeForBoundsSize:(CGSize)arg1 allowingOverflow:(BOOL)arg2 ;
-(void)_resyncContainerFrameForNonAutolayoutDeferringSizeToFit:(BOOL)arg1 ;
-(CGRect)visibleRectIgnoringKeyboard;
-(BOOL)_freezeTextContainerSize;
-(void)_updateTextContainerSizeAndSizeToFit;
-(void)_resyncContainerFrameForNonAutolayout;
-(void)_scrollToSelectionIfNeeded;
-(void)_layoutPlaceholder;
-(BOOL)_shouldScrollEnclosingScrollView;
-(void)_scrollRect:(CGRect)arg1 toVisibleInContainingScrollView:(BOOL)arg2 ;
-(void)_scrollSelectionToVisibleInContainingScrollView;
-(CGRect)_rectForScrollToVisible:(NSRange)arg1 ;
-(void)_setContentOffsetWithoutRecordingScrollPosition:(CGPoint)arg1 ;
-(BOOL)usesTiledViews;
-(void)_setFrameOrBounds:(CGRect)arg1 fromOldRect:(CGRect)arg2 settingAction:(/*^block*/id)arg3 ;
-(CGPoint)_firstGlyphBaselineLeftPointWithLayoutManager:(id)arg1 ;
-(CGPoint)_lastGlyphBaselineRightPointWithLayoutManager:(id)arg1 ;
-(void)_performLayoutCalculation:(/*^block*/id)arg1 inSize:(CGSize)arg2 ;
-(double)_currentPreferredMaxLayoutWidth;
-(void)_baselineOffsetDidChange;
-(void)_scrollSelectionToVisibleInContainingScrollView:(BOOL)arg1 ;
-(void)_resetDataDetectorsResults;
-(BOOL)shouldAutoscrollAboveBottom;
-(void)updateAutoscrollAboveBottom;
-(void)_startDataDetectorsIfNeeded;
-(id)extractWordArrayFromTokensArray:(id)arg1 ;
-(void)_didRecognizeSpeechStrings:(id)arg1 ;
-(void)_restoreScrollPosition:(id)arg1 animated:(BOOL)arg2 ;
-(CGPoint)_contentOffsetForScrollingToRect:(CGRect)arg1 ;
-(void)_updateSelectableInteractions;
-(void)_scrollToCaretIfNeeded;
-(id)_currentDefaultAttributes;
-(void)_invalidateContainerViewSize;
-(void)_setFreezeTextContainerSize:(BOOL)arg1 ;
-(id)_linkTextAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2 ;
-(id)linkTextAttributesForTextContainerView:(id)arg1 ;
-(id)textContainerView:(id)arg1 linkTextAttributesForLink:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3 ;
-(BOOL)isEditableForTextContainerView:(id)arg1 ;
-(NSRange)selectedRangeForTextContainerView:(id)arg1 ;
-(void)updateSelectionForTextContainerView:(id)arg1 ;
-(id)textContainerView:(id)arg1 cuiCatalogForTextEffectName:(id)arg2 ;
-(void)_textViewContentPaddingDidChange:(id)arg1 ;
-(id)topContentPadding;
-(id)bottomContentPadding;
-(CGRect)_frameOfTrailingWhitespace;
-(void)_disableTiledViews;
-(BOOL)tiledViewsDrawAsynchronously;
-(void)setTiledViewsDrawAsynchronously:(BOOL)arg1 ;
-(BOOL)shouldPresentSheetsInAWindowLayeredAboveTheKeyboard;
-(void)setShouldPresentSheetsInAWindowLayeredAboveTheKeyboard:(BOOL)arg1 ;
-(void)_setTextSizeCacheEnabled:(BOOL)arg1 ;
-(BOOL)_isTextSizeCacheEnabled;
-(void)updateSelectionImmediately;
-(void)_enableSiriAnimationDictationStyle;
-(void)_setSiriAnimationDictationStyleWithCharacterInsertionRate:(double)arg1 minimumDurationBetweenHypotheses:(double)arg2 ;
-(void)_didRecognizeSpeechTokens:(id)arg1 ;
-(void)_didFinishSpeechRecognition;
-(void)_ensureCleanedUp;
-(CGPoint)_firstGlyphBaselineRightPointWithLayoutManager:(id)arg1 ;
-(CGPoint)_lastGlyphBaselineLeftPointWithLayoutManager:(id)arg1 ;
-(id)_restorableScrollPositionForStateRestoration;
-(id)initWithFrame:(CGRect)arg1 font:(id)arg2 ;
-(void)setShouldAutoscrollAboveBottom:(BOOL)arg1 ;
-(BOOL)shouldPreserveVisualFontSizeFidelity;
-(void)setShouldPreserveVisualFontSizeFidelity:(BOOL)arg1 ;
-(void)_constrainTiledRenderingToRect:(CGRect)arg1 ;
-(void)_unconstrainTiledRendering;
-(void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(unsigned long long)_effectiveDataDetectorTypes;
-(void)_cancelDataDetectors;
-(double)_multilineContextWidth;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1 ;
@end

