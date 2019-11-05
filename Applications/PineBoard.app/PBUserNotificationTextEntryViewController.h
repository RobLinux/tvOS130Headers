/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:27 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <PineBoard/TextEntryButtonViewDelegate.h>
#import <PineBoard/TVSUITextEntryControllerDelegate.h>
#import <PineBoard/PBUserNotificationViewController.h>

@protocol PBUserNotificationViewControllerDelegate;
@class PBCFUserNotification, UIViewController, UITapGestureRecognizer, TVSStateMachine, NSMutableArray, NSString;

@interface PBUserNotificationTextEntryViewController : UIViewController <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, TextEntryButtonViewDelegate, TVSUITextEntryControllerDelegate, PBUserNotificationViewController> {

	PBCFUserNotification* _notification;
	id<PBUserNotificationViewControllerDelegate> _delegate;
	long long _preferredUserInterfaceStyle;
	UIViewController* _childViewController;
	UITapGestureRecognizer* _menuRecognizer;
	TVSStateMachine* _stateMachine;
	long long _currentTextField;
	NSMutableArray* _userValues;

}

@property (nonatomic,retain) UIViewController * childViewController;                                    //@synthesize childViewController=_childViewController - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * menuRecognizer;                                   //@synthesize menuRecognizer=_menuRecognizer - In the implementation block
@property (nonatomic,retain) TVSStateMachine * stateMachine;                                            //@synthesize stateMachine=_stateMachine - In the implementation block
@property (assign,nonatomic) long long currentTextField;                                                //@synthesize currentTextField=_currentTextField - In the implementation block
@property (nonatomic,retain) NSMutableArray * userValues;                                               //@synthesize userValues=_userValues - In the implementation block
@property (assign,nonatomic) long long preferredUserInterfaceStyle;                                     //@synthesize preferredUserInterfaceStyle=_preferredUserInterfaceStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PBCFUserNotification * notification;                                       //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic,__weak) id<PBUserNotificationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PBUserNotificationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PBUserNotificationViewControllerDelegate>)arg1 ;
-(PBCFUserNotification *)notification;
-(void)setNotification:(PBCFUserNotification *)arg1 ;
-(NSMutableArray *)userValues;
-(void)setUserValues:(NSMutableArray *)arg1 ;
-(void)loadView;
-(TVSStateMachine *)stateMachine;
-(void)setStateMachine:(TVSStateMachine *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)textField;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(long long)preferredUserInterfaceStyle;
-(void)_menuButtonPressed:(id)arg1 ;
-(id)_titleStringAttributes;
-(id)_messageStringAttributes;
-(void)_showChildViewController:(id)arg1 ;
-(UIViewController *)childViewController;
-(void)textEntryControllerDidFinish:(id)arg1 ;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(UITapGestureRecognizer *)menuRecognizer;
-(void)setMenuRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setPreferredUserInterfaceStyle:(long long)arg1 ;
-(void)_configureStateMachine;
-(void)_handleHomeButton:(id)arg1 ;
-(void)_showTextEntryViewControllerForTextField:(long long)arg1 ;
-(id)_buttonsForTextField:(long long)arg1 defaultButtonIndex:(long long*)arg2 ;
-(void)buttonView:(id)arg1 didSelectButton:(id)arg2 atIndex:(long long)arg3 ;
-(long long)currentTextField;
-(void)setCurrentTextField:(long long)arg1 ;
@end

