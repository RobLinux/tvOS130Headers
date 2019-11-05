/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>

@protocol PKPaymentDataProvider, PKPaymentTransactionReportFraudConfirmationViewControllerDelegate;
@class PKPaymentTransaction;

@interface PKPaymentTransactionReportFraudConfirmationViewController : PKExplanationViewController {

	PKPaymentTransaction* _transaction;
	id<PKPaymentDataProvider> _dataProvider;
	id<PKPaymentTransactionReportFraudConfirmationViewControllerDelegate> _fraudDelegate;

}
-(void)viewDidLoad;
-(void)reportFraud:(id)arg1 ;
-(id)initWithContext:(long long)arg1 transaction:(id)arg2 dataProvider:(id)arg3 fraudDelegate:(id)arg4 ;
@end
