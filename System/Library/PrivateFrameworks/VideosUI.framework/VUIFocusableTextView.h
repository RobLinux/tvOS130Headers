/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVFocusableTextView.h>
#import <VideosUI/VUILabelTopMarginCalculationProtocol.h>

@class VUILabel, VUITextLayout;

@interface VUIFocusableTextView : TVFocusableTextView <VUILabelTopMarginCalculationProtocol> {

	VUILabel* _computationLabel;
	VUITextLayout* _textLayout;
	VUITextLayout* _titleTextLayout;

}

@property (nonatomic,retain) VUITextLayout * textLayout;                   //@synthesize textLayout=_textLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleTextLayout;              //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,retain) VUILabel * computationLabel;                  //@synthesize computationLabel=_computationLabel - In the implementation block
+(id)textViewWithElement:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3 ;
+(id)textViewWithString:(id)arg1 textLayout:(id)arg2 titleString:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5 ;
+(id)textViewWithElement:(id)arg1 textLayout:(id)arg2 titleElement:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5 ;
+(id)textViewWithString:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateTextColor;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)textLayout;
-(VUITextLayout *)titleTextLayout;
-(double)topMarginWithBaselineMargin:(double)arg1 ;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(void)setTitleTextLayout:(VUITextLayout *)arg1 ;
-(VUILabel *)computationLabel;
-(void)setComputationLabel:(VUILabel *)arg1 ;
@end

