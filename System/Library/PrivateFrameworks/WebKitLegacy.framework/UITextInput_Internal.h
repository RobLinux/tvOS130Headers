/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInput_Internal
@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder*<UITextInput> __content; 
@property (nonatomic,readonly) UIView*<UITextInputPrivate> _textSelectingContainer; 
@optional
-(UIView*<UITextInputPrivate>)_textSelectingContainer;
-(CGRect*)_lastRectForRange:(id)arg1;
-(void)_setInternalGestureRecognizers;
-(BOOL)_isInteractiveTextSelectionDisabled;

@required
-(void)_transpose;
-(NSRange*)_selectedNSRange;
-(void)_selectAll;
-(id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
-(void)_deleteByWord;
-(void)_deleteForwardAndNotify:(BOOL)arg1;
-(void)_deleteToEndOfParagraph;
-(void)_deleteToStartOfLine;
-(CGRect*)_selectionClipRect;
-(unsigned)_characterBeforeCaretSelection;
-(unsigned)_characterInRelationToCaretSelection:(int)arg1;
-(BOOL)_selectionAtDocumentStart;
-(void)_deleteToEndOfLine;
-(BOOL)_hasMarkedText;
-(BOOL)_usesAsynchronousProtocol;
-(id)_fontForCaretSelection;
-(id)_textColorForCaretSelection;
-(void)_unmarkText;
-(NSRange*)_selectedRangeWithinMarkedText;
-(unsigned)_characterAfterCaretSelection;
-(NSRange*)_nsrangeForTextRange:(id)arg1;
-(unsigned)_characterInRelationToRangedSelection:(int)arg1;
-(id)_rangeFromCurrentRangeWithDelta:(NSRange)arg1;
-(id)_textRangeFromNSRange:(NSRange)arg1;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
-(void)_extendCurrentSelection:(int)arg1;
-(void)_setCaretSelectionAtEndOfSelection;
-(void)_setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(void)_setGestureRecognizers;
-(void)_replaceDocumentWithText:(id)arg1;
-(void)_moveCurrentSelection:(int)arg1;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_deleteBackwardAndNotify:(BOOL)arg1;
-(id)_wordContainingCaretSelection;
-(id)_rangeOfEnclosingWord:(id)arg1;
-(id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
-(id)_fullText;
-(id)_proxyTextInput;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
-(void)_replaceCurrentWordWithText:(id)arg1;
-(BOOL)_selectionAtDocumentEnd;
-(void)_setSelectionToPosition:(id)arg1;
-(id)_rangeOfSmartSelectionIncludingRange:(id)arg1;
-(id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
-(id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
-(id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;
-(unsigned)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;
-(id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;
-(id)_fullRange;
-(int)_indexForTextPosition:(id)arg1;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2;
-(BOOL)_isEmptySelection;
-(long long)_selectionAffinity;
-(id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4;
-(BOOL)_selectionAtWordStart;
-(BOOL)_hasMarkedTextOrRangedSelection;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(id)_rangeOfLineEnclosingPosition:(id)arg1;
-(id)_rangeOfSentenceEnclosingPosition:(id)arg1;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1;
-(BOOL)_range:(id)arg1 containsRange:(id)arg2;
-(BOOL)_range:(id)arg1 intersectsRange:(id)arg2;
-(id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1;
-(BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3;

@end

