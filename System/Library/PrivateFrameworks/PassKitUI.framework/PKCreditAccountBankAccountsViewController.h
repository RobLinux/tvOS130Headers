/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <PassKitUI/PKAddBankAccountInformationViewControllerDelegate.h>

@class PKAccount, PKPaymentWebService, NSMutableArray, NSString;

@interface PKCreditAccountBankAccountsViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate> {

	PKAccount* _account;
	PKPaymentWebService* _paymentWebService;
	unsigned long long _accountFeatureIdentifier;
	NSMutableArray* _fundingSources;
	long long _context;
	NSMutableArray* _deletingFundingSources;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(id)_addBankAccountInformationViewController;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1 ;
-(void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2 ;
-(void)addBankAccountInformationViewControllerDidFinish:(id)arg1 ;
-(void)addBankAccountInformationViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)_updateEditButtonIfNecessary;
-(void)_editButtonPressed:(id)arg1 ;
-(id)_broadwayBankAccountCellForRowAtIndex:(long long)arg1 ;
-(void)_configureBankAccountCell:(id)arg1 withFundingSource:(id)arg2 ;
-(BOOL)_isBankAccountIndexPath:(id)arg1 ;
-(void)_didSelectDeleteBroadwayBankAccountAtIndexPath:(id)arg1 ;
-(id)initWithAccount:(id)arg1 paymentWebService:(id)arg2 context:(long long)arg3 ;
@end

