/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <UIKitCore/UIView.h>
#import <Siri/SRUtteranceCorrectionTextViewDelegate.h>

@protocol SREditableTextViewDelegate;
@class SRSpeechRecognizedCorrectionTextView, UIVisualEffectView, NSString;

@interface SREditableTextView : UIView <SRUtteranceCorrectionTextViewDelegate> {

	NSDirectionalEdgeInsets _edgeInsets;
	SRSpeechRecognizedCorrectionTextView* _textView;
	UIVisualEffectView* _blurView;
	double _topOffsetForTextView;
	double _heightOffsetForTextView;
	BOOL _editable;
	BOOL _didCorrect;
	id<SREditableTextViewDelegate> _delegate;
	long long _textAlignment;

}

@property (assign,nonatomic,__weak) id<SREditableTextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long textAlignment;                                     //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) BOOL editable;                                               //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic) BOOL didCorrect;                                             //@synthesize didCorrect=_didCorrect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)insertionAnimatedZPosition;
-(void)beginEditing;
-(id<SREditableTextViewDelegate>)delegate;
-(void)setDelegate:(id<SREditableTextViewDelegate>)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)resignFirstResponder;
-(void)setEditable:(BOOL)arg1 ;
-(BOOL)isFirstResponder;
-(double)baselineOffsetFromBottom;
-(BOOL)editable;
-(void)layoutSubviews;
-(void)setTextAlignment:(long long)arg1 ;
-(BOOL)canResignFirstResponder;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(long long)textAlignment;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)_indentWidth;
-(void)_handleTap:(id)arg1 ;
-(void)endEditingAndCorrect:(BOOL)arg1 ;
-(double)firstLineBaselineOffsetFromTop;
-(void)_adjustLineSpacing;
-(void)_requestKeyboardFocusAndBecomeFirstResponder;
-(void)utteranceTextDidBecomeFirstResponder:(id)arg1 ;
-(void)utteranceTextDidResignFirstResponder:(id)arg1 ;
-(void)utteranceTextDidReceiveReturnKey:(id)arg1 ;
-(void)setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(BOOL)didCorrect;
-(void)setDidCorrect:(BOOL)arg1 ;
@end

