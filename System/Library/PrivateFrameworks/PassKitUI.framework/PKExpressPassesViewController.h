/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <PassKitUI/PKExpressPassCategoryViewControllerDelegate.h>

@protocol PKPaymentDataProvider;
@class NSMutableArray, PKExpressPassController, NSArray, PKPassSnapshotter, LAContext, NSString;

@interface PKExpressPassesViewController : PKSectionTableViewController <PKExpressPassCategoryViewControllerDelegate> {

	NSMutableArray* _transitPassCategories;
	PKExpressPassController* _expressPassController;
	NSMutableArray* _paymentPasses;
	NSArray* _allPasses;
	id<PKPaymentDataProvider> _paymentDataProvider;
	long long _style;
	long long _selectedPaymentPassIndex;
	BOOL _selectedPaymentPassIsInPendingState;
	BOOL _isUserInteractionsEnabled;
	BOOL _userAutomaticExpressModeText;
	BOOL _useOldAppearance;
	PKPassSnapshotter* _passSnapshotter;
	LAContext* _LAContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(double)heightForRowAtIndexPath:(id)arg1 ;
-(void)_setUserInteractionsEnabled:(BOOL)arg1 ;
-(void)_enableExpressModeForPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_disableExpressModeForPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_transformState:(id)arg1 ;
-(void)_invalidateUserAuth;
-(void)_acquireUserAuthForPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_conflictingPassesForUseCaseWithPasses:(id)arg1 ;
-(void)_promptUserAboutConflicts:(id)arg1 forPass:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)expressPassCategoryViewController:(id)arg1 didUpdateExpressState:(id)arg2 ;
-(void)_updatePasses:(id)arg1 ;
-(id)_passWithUniqueIdentifier:(id)arg1 ;
-(id)_categoryForTransitPass:(id)arg1 ;
-(void)_addSpinnerToCell:(id)arg1 ;
-(id)_paymentPassForIndex:(long long)arg1 ;
-(void)_updateExpressState:(id)arg1 ;
-(void)_updateUIWithExpressState;
-(void)_sendExpressPassDidChangeNotification;
-(void)_upgradeExpressModeForPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_updatePaymentCardCellWithIndex:(long long)arg1 statusString:(id)arg2 ;
-(id)_categoryForIndex:(long long)arg1 ;
-(void)_updateCardImageForCell:(id)arg1 withPass:(id)arg2 inCategory:(id)arg3 ;
-(id)paymentCardCellForRow:(long long)arg1 ;
-(id)transitCardCategoryCellForRow:(long long)arg1 ;
-(void)userChangedExpressSettingForPaymentPassAtIndexPath:(id)arg1 ;
-(long long)_categoryIndexForPass:(id)arg1 ;
-(id)_categoryIdentifierForPass:(id)arg1 ;
-(id)_createCategoryForPass:(id)arg1 ;
-(id)initWithPasses:(id)arg1 paymentDataProvider:(id)arg2 controller:(id)arg3 style:(long long)arg4 ;
-(id)additionalViewControllersForPassUniqueIdentifier:(id)arg1 ;
@end

