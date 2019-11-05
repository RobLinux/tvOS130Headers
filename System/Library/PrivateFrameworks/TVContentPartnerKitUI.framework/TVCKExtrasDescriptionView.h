/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVContentPartnerKitUI/TVAuxiliaryViewSelecting.h>

@class UIView, UILabel, NSAttributedString, NSString;

@interface TVCKExtrasDescriptionView : UIView <TVAuxiliaryViewSelecting> {

	UIView* _descriptionView;
	UILabel* _subtextLabel;

}

@property (nonatomic,retain) UILabel * subtextLabel;                             //@synthesize subtextLabel=_subtextLabel - In the implementation block
@property (nonatomic,retain) UIView * descriptionView;                           //@synthesize descriptionView=_descriptionView - In the implementation block
@property (nonatomic,copy) NSAttributedString * descriptionSubtext; 
@property (assign,nonatomic) long long subtextMaxLines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)didSelect;
-(UIView *)descriptionView;
-(void)setDescriptionView:(UIView *)arg1 ;
-(void)setDescriptionSubtext:(NSAttributedString *)arg1 ;
-(NSAttributedString *)descriptionSubtext;
-(void)setSubtextMaxLines:(long long)arg1 ;
-(UILabel *)subtextLabel;
-(long long)subtextMaxLines;
-(void)setSubtextLabel:(UILabel *)arg1 ;
@end

