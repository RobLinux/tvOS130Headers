/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:08 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/CrashReporterTVApp.app/CrashReporterTVApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CrashReporterTVApp/CrashReporterTVApp-Structs.h>
#import <CrashReporterTVApp/TableViewController.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <CrashReporterTVApp/ButtonTableViewDelegate.h>

@class CrashLog, ModalActionSheet, NSDateFormatter, NSArray, TSPackage, NSString, NSIndexPath, ButtonTableViewController, UICollectionView;

@interface SuspectsViewController : TableViewController <UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, ButtonTableViewDelegate> {

	CrashLog* crashLog_;
	ModalActionSheet* statusPopup_;
	NSDateFormatter* dateFormatter_;
	NSArray* lastSelectedLinkInstructions_;
	TSPackage* lastSelectedPackage_;
	NSString* lastSelectedPath_;
	NSIndexPath* lastSelectedIndexPath_;
	ButtonTableViewController* bController;
	UICollectionView* buttonTableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cellClass;
-(id)initWithCrashLog:(id)arg1 ;
-(id)arrayForSection:(long long)arg1 ;
-(void)airDropFiles;
-(void)presentViewerWithString:(id)arg1 ;
-(id)syslogPath;
-(void)crashlogTapped;
-(void)syslogTapped;
-(void)didSelectButtonWithIndex:(int)arg1 ;
-(void)helpButtonTapped;
-(void)load;
-(void)dealloc;
-(id)referenceDate;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)titleForHeaderInSection:(long long)arg1 ;
@end

