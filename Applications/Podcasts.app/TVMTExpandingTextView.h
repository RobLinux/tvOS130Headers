/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:22 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKitCore/UIView.h>
#import <Podcasts/_UIFloatingContentViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIVisualEffectView, NSAttributedString, UIColor, AMPLanguageAwareString, UITextView, _UIFloatingContentView, UITapGestureRecognizer, UILabel, NSString;

@interface TVMTExpandingTextView : UIView <_UIFloatingContentViewDelegate, UIGestureRecognizerDelegate> {

	UIVisualEffectView* _vibrantEffectView;
	BOOL _textTruncating;
	BOOL _moreLabelOnNewLine;
	BOOL _trackHorizontal;
	BOOL _needsTextSizeComputation;
	NSAttributedString* _descriptionText;
	UIColor* _descriptionTextColor;
	UIColor* _descriptionTextHighlightColor;
	UIColor* _highlightBackgroundColor;
	double _moreHighlightPadding;
	/*^block*/id _selectionHandler;
	/*^block*/id _playHandler;
	AMPLanguageAwareString* _languageAwareString;
	UITextView* _descriptionTextView;
	_UIFloatingContentView* _floatingView;
	UIVisualEffectView* _backgroundView;
	UITapGestureRecognizer* _selectRecognizer;
	UITapGestureRecognizer* _playRecognizer;
	UILabel* _moreLabel;

}

@property (nonatomic,retain) AMPLanguageAwareString * languageAwareString;               //@synthesize languageAwareString=_languageAwareString - In the implementation block
@property (nonatomic,retain) UITextView * descriptionTextView;                           //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) _UIFloatingContentView * floatingView;                      //@synthesize floatingView=_floatingView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * selectRecognizer;                  //@synthesize selectRecognizer=_selectRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * playRecognizer;                    //@synthesize playRecognizer=_playRecognizer - In the implementation block
@property (nonatomic,retain) UILabel * moreLabel;                                        //@synthesize moreLabel=_moreLabel - In the implementation block
@property (assign,nonatomic) BOOL needsTextSizeComputation;                              //@synthesize needsTextSizeComputation=_needsTextSizeComputation - In the implementation block
@property (nonatomic,retain) NSAttributedString * descriptionText;                       //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) UIColor * descriptionTextColor;                             //@synthesize descriptionTextColor=_descriptionTextColor - In the implementation block
@property (nonatomic,retain) UIColor * descriptionTextHighlightColor;                    //@synthesize descriptionTextHighlightColor=_descriptionTextHighlightColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightBackgroundColor;                         //@synthesize highlightBackgroundColor=_highlightBackgroundColor - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfLines; 
@property (getter=isTextTruncating,nonatomic,readonly) BOOL textTruncating;              //@synthesize textTruncating=_textTruncating - In the implementation block
@property (assign,nonatomic) double moreHighlightPadding;                                //@synthesize moreHighlightPadding=_moreHighlightPadding - In the implementation block
@property (assign,nonatomic) BOOL moreLabelOnNewLine;                                    //@synthesize moreLabelOnNewLine=_moreLabelOnNewLine - In the implementation block
@property (assign,nonatomic) BOOL trackHorizontal;                                       //@synthesize trackHorizontal=_trackHorizontal - In the implementation block
@property (nonatomic,copy) id selectionHandler;                                          //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (nonatomic,copy) id playHandler;                                               //@synthesize playHandler=_playHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)cornerRadius;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSAttributedString *)descriptionText;
-(void)setDescriptionText:(NSAttributedString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)maximumNumberOfLines;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIVisualEffectView *)backgroundView;
-(UILabel *)moreLabel;
-(void)setMoreLabel:(UILabel *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(_UIFloatingContentView *)floatingView;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(id)_moreLabelExclusionPath;
-(void)setSelectionHandler:(id)arg1 ;
-(id)selectionHandler;
-(void)_selectButtonAction:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(CGRect)_moreLabelFrame;
-(void)_recomputeTextSizeIfNeeded;
-(BOOL)isTextTruncating;
-(void)_setNeedsTextSizeComputation;
-(UITapGestureRecognizer *)playRecognizer;
-(id)playHandler;
-(void)setDescriptionTextColor:(UIColor *)arg1 ;
-(void)setDescriptionTextHighlightColor:(UIColor *)arg1 ;
-(void)setHighlightBackgroundColor:(UIColor *)arg1 ;
-(void)setTrackHorizontal:(BOOL)arg1 ;
-(UIColor *)descriptionTextColor;
-(UIColor *)descriptionTextHighlightColor;
-(UIColor *)highlightBackgroundColor;
-(double)moreHighlightPadding;
-(void)setMoreHighlightPadding:(double)arg1 ;
-(BOOL)moreLabelOnNewLine;
-(void)setMoreLabelOnNewLine:(BOOL)arg1 ;
-(BOOL)trackHorizontal;
-(void)setPlayHandler:(id)arg1 ;
-(UITextView *)descriptionTextView;
-(void)setDescriptionTextView:(UITextView *)arg1 ;
-(UITapGestureRecognizer *)selectRecognizer;
-(void)setSelectRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setPlayRecognizer:(UITapGestureRecognizer *)arg1 ;
-(BOOL)needsTextSizeComputation;
-(void)setNeedsTextSizeComputation:(BOOL)arg1 ;
-(AMPLanguageAwareString *)languageAwareString;
-(void)setLanguageAwareString:(AMPLanguageAwareString *)arg1 ;
@end

