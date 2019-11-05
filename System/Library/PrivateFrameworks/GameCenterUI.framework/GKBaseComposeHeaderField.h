/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class GKLabel, GKHairlineView, NSString;

@interface GKBaseComposeHeaderField : UIImageView {

	GKLabel* _nameLabel;
	GKHairlineView* _separatorView;
	unsigned long long _maxLineCount;
	SEL _actionWhenTouched;

}

@property (nonatomic,retain) GKLabel * nameLabel;                          //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKHairlineView * separatorView;               //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) unsigned long long maxLineCount;              //@synthesize maxLineCount=_maxLineCount - In the implementation block
@property (nonatomic,readonly) CGRect valueFrame; 
@property (nonatomic,retain) NSString * nameText; 
@property (nonatomic,retain) NSString * valueText; 
@property (assign,nonatomic) SEL actionWhenTouched;                        //@synthesize actionWhenTouched=_actionWhenTouched - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(GKLabel *)nameLabel;
-(void)setNameLabel:(GKLabel *)arg1 ;
-(GKHairlineView *)separatorView;
-(void)setSeparatorView:(GKHairlineView *)arg1 ;
-(NSString *)valueText;
-(void)setValueText:(NSString *)arg1 ;
-(void)setNameText:(NSString *)arg1 ;
-(void)addConstraintsForValueView:(id)arg1 ;
-(NSString *)nameText;
-(CGRect)valueFrame;
-(void)setMaxLineCount:(unsigned long long)arg1 ;
-(id)viewForBaselineLayout;
-(unsigned long long)maxLineCount;
-(SEL)actionWhenTouched;
-(void)setActionWhenTouched:(SEL)arg1 ;
@end

