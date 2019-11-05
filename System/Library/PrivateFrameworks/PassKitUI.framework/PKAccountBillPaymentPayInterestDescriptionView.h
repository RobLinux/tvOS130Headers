/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PKAccountBillPaymentPayInterestDescriptionViewDelegate;
@class UILabel, UITextView, NSDateFormatter, PKAccount, NSNumberFormatter, NSString, NSDate, NSDecimalNumber;

@interface PKAccountBillPaymentPayInterestDescriptionView : UIView <UITextViewDelegate> {

	UILabel* _estimatedChargeLabel;
	UITextView* _cancellationView;
	UILabel* _interestLabel;
	NSDateFormatter* _productDateFormatter;
	NSDateFormatter* _localDateFormatter;
	NSDateFormatter* _localTimeFormatter;
	PKAccount* _account;
	NSNumberFormatter* _amountFormatter;
	NSString* _learnMoreString;
	NSDate* _cancellationDate;
	NSDecimalNumber* _interest;
	NSDate* _interestChargeDate;
	NSDate* _selectedPaymentDate;
	id<PKAccountBillPaymentPayInterestDescriptionViewDelegate> _delegate;

}

@property (nonatomic,copy) NSDecimalNumber * interest;                                                                //@synthesize interest=_interest - In the implementation block
@property (nonatomic,copy) NSDate * interestChargeDate;                                                               //@synthesize interestChargeDate=_interestChargeDate - In the implementation block
@property (nonatomic,copy) NSDate * selectedPaymentDate;                                                              //@synthesize selectedPaymentDate=_selectedPaymentDate - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccountBillPaymentPayInterestDescriptionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKAccountBillPaymentPayInterestDescriptionViewDelegate>)delegate;
-(void)setDelegate:(id<PKAccountBillPaymentPayInterestDescriptionViewDelegate>)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSDecimalNumber *)interest;
-(void)setInterest:(NSDecimalNumber *)arg1 ;
-(void)layoutSubviews;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)_updateLabels;
-(void)setInterestChargeDate:(NSDate *)arg1 ;
-(void)setSelectedPaymentDate:(NSDate *)arg1 ;
-(BOOL)_showInterest;
-(id)_learnMoreAttributedStringWithText:(id)arg1 ;
-(NSDate *)interestChargeDate;
-(NSDate *)selectedPaymentDate;
@end

