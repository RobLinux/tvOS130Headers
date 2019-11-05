/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class UIPrintPanelViewController;

@interface UIPrintMoreOptionsTableViewController : UITableViewController {

	UIPrintPanelViewController* _printPanelViewController;
	long long _stapleRow;

}
-(unsigned long long)supportedInterfaceOrientations;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)showCancelButton;
-(void)updateStaple:(id)arg1 ;
-(id)initWithPrintPanelViewController:(id)arg1 ;
@end

