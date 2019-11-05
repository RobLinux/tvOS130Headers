/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <PassKitUI/PKPerformActionViewControllerDelegate.h>

@protocol PKPaymentDataProvider;
@class NSArray, PKPaymentPass, PKPaymentWebService, PKPaymentPassAction, NSDateComponentsFormatter, NSString;

@interface PKCommutePlanDetailsViewController : PKSectionTableViewController <PKPerformActionViewControllerDelegate> {

	long long _style;
	NSArray* _fields;
	PKPaymentPass* _pass;
	id<PKPaymentDataProvider> _paymentDataProvider;
	PKPaymentWebService* _webService;
	NSArray* _reminderIntervals;
	unsigned long long _selectedReminderIntervalsIndex;
	BOOL _shouldLoadReminderInterval;
	PKPaymentPassAction* _action;
	NSDateComponentsFormatter* _timeIntervalFormatter;
	BOOL _canShowReminders;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)performActionViewControllerDidCancel:(id)arg1 ;
-(void)performActionViewControllerDidPerformAction:(id)arg1 ;
-(void)_updateSelectedReminderIntervalsIndexWithInterval:(double)arg1 ;
-(void)_handleReminderIntervalChanged:(long long)arg1 ;
-(void)_handleActionSelected;
-(id)initWithSuicaFields:(id)arg1 forPass:(id)arg2 associatedAction:(id)arg3 paymentDataProvider:(id)arg4 webService:(id)arg5 style:(long long)arg6 ;
@end

