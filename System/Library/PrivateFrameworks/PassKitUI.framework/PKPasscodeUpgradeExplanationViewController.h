/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <PassKitUI/PKExplanationViewControllerDelegate.h>
#import <PassKitUI/PKPaymentSetupPresentationProtocol.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPasscodeUpgradeFlowController, NSString;

@interface PKPasscodeUpgradeExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKPaymentSetupPresentationProtocol> {

	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKPasscodeUpgradeFlowController* _flowController;
	long long _context;
	BOOL _isForWatch;
	BOOL _viewHasAppeared;
	BOOL _upgradeRequiredToAddNewPass;
	/*^block*/id _continuationHandler;
	/*^block*/id _setupLaterHandler;

}

@property (nonatomic,copy) id continuationHandler;                          //@synthesize continuationHandler=_continuationHandler - In the implementation block
@property (nonatomic,copy) id setupLaterHandler;                            //@synthesize setupLaterHandler=_setupLaterHandler - In the implementation block
@property (assign,nonatomic) BOOL upgradeRequiredToAddNewPass;              //@synthesize upgradeRequiredToAddNewPass=_upgradeRequiredToAddNewPass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_showSpinner:(BOOL)arg1 ;
-(id)paymentSetupMarker;
-(void)setUpgradeRequiredToAddNewPass:(BOOL)arg1 ;
-(id)initWithPasscodeUpgradeFlowController:(id)arg1 isForWatch:(BOOL)arg2 ;
-(id)continuationHandler;
-(void)setContinuationHandler:(id)arg1 ;
-(id)setupLaterHandler;
-(void)setSetupLaterHandler:(id)arg1 ;
-(BOOL)upgradeRequiredToAddNewPass;
@end

