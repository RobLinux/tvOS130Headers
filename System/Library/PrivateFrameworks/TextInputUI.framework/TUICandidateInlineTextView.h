/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TUICandidateViewStyle;
@class NSString, UILabel;

@interface TUICandidateInlineTextView : UIView {

	NSString* _text;
	id<TUICandidateViewStyle> _style;
	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> style;              //@synthesize style=_style - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<TUICandidateViewStyle>)style;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(void)updateLabels;
@end

