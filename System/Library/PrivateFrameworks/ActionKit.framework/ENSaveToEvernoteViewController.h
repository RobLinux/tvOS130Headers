/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <ActionKit/ENNotebookChooserViewControllerDelegate.h>

@protocol ENSendToEvernoteViewControllerDelegate;
@class UIBarButtonItem, UITextField, ENNotebookPickerView, ENNotebookPickerButton, RMSTokenView, UIWebView, NSArray, ENNotebook, NSString;

@interface ENSaveToEvernoteViewController : UIViewController <ENNotebookChooserViewControllerDelegate> {

	id<ENSendToEvernoteViewControllerDelegate> _delegate;
	UIBarButtonItem* _saveButtonItem;
	UITextField* _titleField;
	UITextField* _notebookField;
	ENNotebookPickerView* _notebookPickerView;
	ENNotebookPickerButton* _notebookPickerButton;
	RMSTokenView* _tagsView;
	UIWebView* _noteView;
	NSArray* _notebookList;
	ENNotebook* _currentNotebook;

}

@property (nonatomic,retain) UIBarButtonItem * saveButtonItem;                                        //@synthesize saveButtonItem=_saveButtonItem - In the implementation block
@property (nonatomic,retain) UITextField * titleField;                                                //@synthesize titleField=_titleField - In the implementation block
@property (nonatomic,retain) UITextField * notebookField;                                             //@synthesize notebookField=_notebookField - In the implementation block
@property (nonatomic,retain) ENNotebookPickerView * notebookPickerView;                               //@synthesize notebookPickerView=_notebookPickerView - In the implementation block
@property (nonatomic,retain) ENNotebookPickerButton * notebookPickerButton;                           //@synthesize notebookPickerButton=_notebookPickerButton - In the implementation block
@property (nonatomic,retain) RMSTokenView * tagsView;                                                 //@synthesize tagsView=_tagsView - In the implementation block
@property (nonatomic,retain) UIWebView * noteView;                                                    //@synthesize noteView=_noteView - In the implementation block
@property (nonatomic,retain) NSArray * notebookList;                                                  //@synthesize notebookList=_notebookList - In the implementation block
@property (nonatomic,retain) ENNotebook * currentNotebook;                                            //@synthesize currentNotebook=_currentNotebook - In the implementation block
@property (assign,nonatomic,__weak) id<ENSendToEvernoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ENSendToEvernoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<ENSendToEvernoteViewControllerDelegate>)arg1 ;
-(void)save:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(long long)preferredStatusBarStyle;
-(UITextField *)titleField;
-(void)setTitleField:(UITextField *)arg1 ;
-(void)setTagsView:(RMSTokenView *)arg1 ;
-(void)showNotebookChooser;
-(void)setNotebookPickerView:(ENNotebookPickerView *)arg1 ;
-(ENNotebookPickerButton *)notebookPickerButton;
-(void)setNotebookPickerButton:(ENNotebookPickerButton *)arg1 ;
-(void)setNoteView:(UIWebView *)arg1 ;
-(void)setSaveButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)saveButtonItem;
-(RMSTokenView *)tagsView;
-(void)setNotebookList:(NSArray *)arg1 ;
-(void)setCurrentNotebook:(ENNotebook *)arg1 ;
-(void)updateCurrentNotebookDisplay;
-(UIWebView *)noteView;
-(ENNotebook *)currentNotebook;
-(NSArray *)notebookList;
-(ENNotebookPickerView *)notebookPickerView;
-(void)notebookChooser:(id)arg1 didChooseNotebook:(id)arg2 ;
-(UITextField *)notebookField;
-(void)setNotebookField:(UITextField *)arg1 ;
@end

