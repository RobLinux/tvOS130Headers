/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol VSCredentialEntryPickerViewControllerDelegate;
@class VSCredentialEntryPicker, NSString, UITableView, UILabel, UITapGestureRecognizer, NSLayoutConstraint, VSFontCenter;

@interface VSCredentialEntryPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	id<VSCredentialEntryPickerViewControllerDelegate> _delegate;
	VSCredentialEntryPicker* _picker;
	NSString* _footerMessageText;
	UITableView* _tableView;
	UILabel* _headerLabel;
	UITapGestureRecognizer* _menuRecognizer;
	UILabel* _footerLabel;
	NSLayoutConstraint* _tableViewHeightConstraint;
	NSLayoutConstraint* _headerLabelTopSpaceConstraint;
	NSLayoutConstraint* _tableViewCenterYConstraint;
	VSFontCenter* _fontCenter;

}

@property (nonatomic,retain) UITableView * tableView;                                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                                                          //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * menuRecognizer;                                        //@synthesize menuRecognizer=_menuRecognizer - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                                                          //@synthesize footerLabel=_footerLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tableViewHeightConstraint;                                 //@synthesize tableViewHeightConstraint=_tableViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headerLabelTopSpaceConstraint;                             //@synthesize headerLabelTopSpaceConstraint=_headerLabelTopSpaceConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tableViewCenterYConstraint;                                //@synthesize tableViewCenterYConstraint=_tableViewCenterYConstraint - In the implementation block
@property (nonatomic,retain) VSFontCenter * fontCenter;                                                      //@synthesize fontCenter=_fontCenter - In the implementation block
@property (assign,nonatomic,__weak) id<VSCredentialEntryPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VSCredentialEntryPicker * picker;                                               //@synthesize picker=_picker - In the implementation block
@property (nonatomic,retain) NSString * footerMessageText;                                                   //@synthesize footerMessageText=_footerMessageText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<VSCredentialEntryPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VSCredentialEntryPickerViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UITableView *)tableView;
-(void)viewDidLayoutSubviews;
-(UILabel *)headerLabel;
-(UILabel *)footerLabel;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(UITapGestureRecognizer *)menuRecognizer;
-(void)setMenuRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setPicker:(VSCredentialEntryPicker *)arg1 ;
-(VSCredentialEntryPicker *)picker;
-(void)menuPressed:(id)arg1 ;
-(VSFontCenter *)fontCenter;
-(NSString *)footerMessageText;
-(void)setFooterMessageText:(NSString *)arg1 ;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(void)setHeaderLabelTopSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTableViewCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)tableViewCenterYConstraint;
-(NSLayoutConstraint *)headerLabelTopSpaceConstraint;
-(NSLayoutConstraint *)tableViewHeightConstraint;
@end

