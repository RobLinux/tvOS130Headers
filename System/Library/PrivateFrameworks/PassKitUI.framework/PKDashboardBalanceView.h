/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, NSString, PKContinuousButton;

@interface PKDashboardBalanceView : PKDashboardCollectionViewCell {

	BOOL _isTemplateLayout;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UILabel* _availableCreditLabel;
	NSString* _title;
	PKContinuousButton* _actionButton;
	BOOL _topUpEnabled;
	NSString* _balance;
	NSString* _availableCredit;
	NSString* _topUpTitle;
	/*^block*/id _topUpAction;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * balance;                      //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy) NSString * availableCredit;              //@synthesize availableCredit=_availableCredit - In the implementation block
@property (nonatomic,copy) NSString * topUpTitle;                   //@synthesize topUpTitle=_topUpTitle - In the implementation block
@property (nonatomic,copy) id topUpAction;                          //@synthesize topUpAction=_topUpAction - In the implementation block
@property (assign,nonatomic) BOOL topUpEnabled;                     //@synthesize topUpEnabled=_topUpEnabled - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)balance;
-(void)setBalance:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(NSString *)availableCredit;
-(void)setAvailableCredit:(NSString *)arg1 ;
-(void)createSubviews;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)resetFonts;
-(NSString *)topUpTitle;
-(void)setTopUpTitle:(NSString *)arg1 ;
-(id)topUpAction;
-(void)setTopUpAction:(id)arg1 ;
-(BOOL)topUpEnabled;
-(void)setTopUpEnabled:(BOOL)arg1 ;
@end

