/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:21 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <Podcasts/MTSettingsControllerDelegate.h>

@class MTSettingsController, NSString;

@interface MTGenericSettingsViewController : UITableViewController <MTSettingsControllerDelegate> {

	BOOL _emphasizedCellNeedsScrollToVisible;
	MTSettingsController* _settingsController;

}

@property (assign,nonatomic) BOOL emphasizedCellNeedsScrollToVisible;                //@synthesize emphasizedCellNeedsScrollToVisible=_emphasizedCellNeedsScrollToVisible - In the implementation block
@property (nonatomic,retain) MTSettingsController * settingsController;              //@synthesize settingsController=_settingsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)rowHeight;
+(id)footerFont;
+(id)settingFont;
+(id)cellClassForSettingType:(long long)arg1 inGroupWithIdentifier:(id)arg2 ;
+(id)cellIdentifierForSettingType:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(MTSettingsController *)settingsController;
-(void)setSettingsController:(MTSettingsController *)arg1 ;
-(void)syncControllerOperationCompleted:(id)arg1 ;
-(void)updateRowHeight;
-(void)settingsController:(id)arg1 reloadedGroupWithIdentifier:(id)arg2 ;
-(void)settingsController:(id)arg1 didChangeHeaderAction:(id)arg2 inGroupWithIdentifier:(id)arg3 ;
-(void)settingsController:(id)arg1 addedGroup:(id)arg2 atIndex:(long long)arg3 ;
-(void)settingsController:(id)arg1 removedGroupAtIndex:(long long)arg2 ;
-(void)settingsController:(id)arg1 removedSettingAtIndex:(long long)arg2 inGroupWithIdentifier:(id)arg3 ;
-(void)settingsController:(id)arg1 didChangeSettingValueAtIndex:(long long)arg2 inGroupWithIdentifier:(id)arg3 ;
-(void)_scrollEmphasizedCellToVisibleIfNecessary;
-(long long)_defaultSelectionStyleForSetting:(id)arg1 ;
-(id)indexPathForSetting:(id)arg1 ;
-(void)_configureEmphasisForCell:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)switchSettingChanged:(id)arg1 value:(BOOL)arg2 ;
-(BOOL)_radioButtonTintsTextColorOnSelection;
-(id)settingAtIndexPath:(id)arg1 ;
-(double)heightForRowWithDescription:(id)arg1 inGroupWithIdentifier:(id)arg2 ;
-(id)newCellForDescriptionType:(long long)arg1 inGroupWithIdentifier:(id)arg2 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withDescription:(id)arg3 inGroupWithIdentifier:(id)arg4 ;
-(id)optionsTableViewControllerWithOption:(id)arg1 ;
-(void)optionSettingChanged:(id)arg1 value:(unsigned long long)arg2 ;
-(void)setCell:(id)arg1 enabled:(BOOL)arg2 withDescription:(id)arg3 ;
-(BOOL)updateSettingForSettingValueChangeByUpdatingCellAtIndexPath:(id)arg1 ;
-(void)textSettingChanged:(id)arg1 value:(id)arg2 ;
-(BOOL)emphasizedCellNeedsScrollToVisible;
-(void)setEmphasizedCellNeedsScrollToVisible:(BOOL)arg1 ;
@end

