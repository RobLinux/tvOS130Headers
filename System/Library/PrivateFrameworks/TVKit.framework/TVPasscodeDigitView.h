/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TVPasscodeDigitViewDelegate;
@class UIView, UILabel, TVHighlightView, UIImageView, NSArray, NSString;

@interface TVPasscodeDigitView : UIView {

	BOOL _showDigit;
	double _fontSize;
	unsigned long long _maxDigitValue;
	id<TVPasscodeDigitViewDelegate> _delegate;
	UIView* _clippingView;
	UILabel* _label;
	TVHighlightView* _highlight;
	UIImageView* _bulletView;
	UIImageView* _upArrowView;
	UIImageView* _downArrowView;
	NSArray* _recognizers;

}

@property (nonatomic,retain) UIView * clippingView;                                        //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) TVHighlightView * highlight;                                  //@synthesize highlight=_highlight - In the implementation block
@property (nonatomic,retain) UIImageView * bulletView;                                     //@synthesize bulletView=_bulletView - In the implementation block
@property (nonatomic,retain) UIImageView * upArrowView;                                    //@synthesize upArrowView=_upArrowView - In the implementation block
@property (nonatomic,retain) UIImageView * downArrowView;                                  //@synthesize downArrowView=_downArrowView - In the implementation block
@property (nonatomic,retain) NSArray * recognizers;                                        //@synthesize recognizers=_recognizers - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) double fontSize;                                              //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxDigitValue;                             //@synthesize maxDigitValue=_maxDigitValue - In the implementation block
@property (assign,nonatomic) BOOL showDigit;                                               //@synthesize showDigit=_showDigit - In the implementation block
@property (assign,nonatomic,__weak) id<TVPasscodeDigitViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<TVPasscodeDigitViewDelegate>)delegate;
-(void)setDelegate:(id<TVPasscodeDigitViewDelegate>)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(TVHighlightView *)highlight;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setHighlightProgress:(double)arg1 ;
-(void)setHighlight:(TVHighlightView *)arg1 ;
-(id)hiddenDigitImage;
-(id)arrowImage:(BOOL)arg1 ;
-(void)upGesture:(id)arg1 ;
-(void)downGesture:(id)arg1 ;
-(void)setShowDigit:(BOOL)arg1 ;
-(void)setMaxDigitValue:(unsigned long long)arg1 ;
-(unsigned long long)maxDigitValue;
-(BOOL)showDigit;
-(UIView *)clippingView;
-(void)setClippingView:(UIView *)arg1 ;
-(UIImageView *)bulletView;
-(void)setBulletView:(UIImageView *)arg1 ;
-(UIImageView *)upArrowView;
-(void)setUpArrowView:(UIImageView *)arg1 ;
-(UIImageView *)downArrowView;
-(void)setDownArrowView:(UIImageView *)arg1 ;
-(NSArray *)recognizers;
-(void)setRecognizers:(NSArray *)arg1 ;
@end

