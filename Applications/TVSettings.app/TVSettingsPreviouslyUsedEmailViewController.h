/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsPreviouslyUsedEmailFacade, UIBarButtonItem;

@interface TVSettingsPreviouslyUsedEmailViewController : TSKViewController {

	TVSettingsPreviouslyUsedEmailFacade* _emailFacade;
	UIBarButtonItem* _editButtonItem;
	UIBarButtonItem* _doneButtonItem;

}

@property (nonatomic,retain) TVSettingsPreviouslyUsedEmailFacade * emailFacade;              //@synthesize emailFacade=_emailFacade - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * editButtonItem;                               //@synthesize editButtonItem=_editButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButtonItem;                               //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
-(void)dealloc;
-(id)title;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)didReceiveMemoryWarning;
-(UIBarButtonItem *)editButtonItem;
-(void)clearAll;
-(void)_updateNavigationItem;
-(id)loadSettingGroups;
-(void)willResumeFromBackground;
-(void)toggleEditMode:(id)arg1 ;
-(TVSettingsPreviouslyUsedEmailFacade *)emailFacade;
-(UIBarButtonItem *)doneButtonItem;
-(void)_clearAll;
-(void)_showDeleteConfirmationForItem:(id)arg1 ;
-(void)setEmailFacade:(TVSettingsPreviouslyUsedEmailFacade *)arg1 ;
-(void)setEditButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
@end

