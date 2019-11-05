/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController;

@interface PKWrapperViewController : UIViewController {

	long long _type;
	UIViewController* _wrappedViewController;

}

@property (nonatomic,readonly) UIViewController * wrappedViewController;              //@synthesize wrappedViewController=_wrappedViewController - In the implementation block
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)extendedLayoutIncludesOpaqueBars;
-(id)childViewControllerForStatusBarStyle;
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(long long)preferredUserInterfaceStyle;
-(id)childViewControllerForStatusBarHidden;
-(unsigned long long)edgesForExtendedLayout;
-(id)initWithWrappedViewController:(id)arg1 type:(long long)arg2 ;
-(UIViewController *)wrappedViewController;
-(id)childViewControllerForUserInterfaceStyle;
-(id)childViewControllerForWhitePointAdaptivityStyle;
@end

