/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <PassKitUI/PKExplanationViewDelegate.h>

@protocol PKExplanationViewControllerDelegate;
@class UIBarButtonItem, UIActivityIndicatorView, PKExplanationView, NSString;

@interface PKExplanationViewController : UIViewController <PKExplanationViewDelegate> {

	UIBarButtonItem* _spinningItem;
	UIBarButtonItem* _hiddenRightBarButtonItem;
	UIActivityIndicatorView* _activityIndicatorView;
	BOOL _showingSpinner;
	BOOL _wasBackHidden;
	BOOL _showCancelButton;
	BOOL _showDoneButton;
	id<PKExplanationViewControllerDelegate> _explanationViewControllerDelegate;
	long long _context;
	PKExplanationView* _explanationView;

}

@property (assign,nonatomic,__weak) id<PKExplanationViewControllerDelegate> explanationViewControllerDelegate;              //@synthesize explanationViewControllerDelegate=_explanationViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) long long context;                                                                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL showCancelButton;                                                                         //@synthesize showCancelButton=_showCancelButton - In the implementation block
@property (assign,nonatomic) BOOL showDoneButton;                                                                           //@synthesize showDoneButton=_showDoneButton - In the implementation block
@property (nonatomic,readonly) PKExplanationView * explanationView;                                                         //@synthesize explanationView=_explanationView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)context;
-(id)initWithContext:(long long)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)contentScrollView;
-(void)_dismissViewController;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(BOOL)showCancelButton;
-(void)_setNavigationBarEnabled:(BOOL)arg1 ;
-(PKExplanationView *)explanationView;
-(void)setShowDoneButton:(BOOL)arg1 ;
-(void)setExplanationViewControllerDelegate:(id<PKExplanationViewControllerDelegate>)arg1 ;
-(void)_donePressed;
-(void)showNavigationBarSpinner:(BOOL)arg1 ;
-(BOOL)showDoneButton;
-(void)_cancelPressed;
-(id<PKExplanationViewControllerDelegate>)explanationViewControllerDelegate;
@end

