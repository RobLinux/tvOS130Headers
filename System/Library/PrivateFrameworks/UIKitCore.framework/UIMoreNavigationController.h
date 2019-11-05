/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@class UIMoreListController, UINavigationController, UIViewController, NSArray;

@interface UIMoreNavigationController : UINavigationController {

	UIMoreListController* _moreListController;
	UINavigationController* _originalNavigationController;
	UIViewController* _originalRootViewController;

}

@property (nonatomic,readonly) UIViewController * moreListController;                 //@synthesize moreListController=_moreListController - In the implementation block
@property (nonatomic,retain) NSArray * moreViewControllers; 
@property (assign,nonatomic) BOOL allowsCustomizing; 
@property (assign,nonatomic) UIViewController * displayedViewController; 
@property (assign,nonatomic) BOOL moreViewControllersChanged; 
+(Class)_moreListControllerClass;
-(id)init;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)allowsCustomizing;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(NSArray *)moreViewControllers;
-(void)setMoreViewControllers:(NSArray *)arg1 ;
-(BOOL)moreViewControllersChanged;
-(void)setMoreViewControllersChanged:(BOOL)arg1 ;
-(void)setAllowsCustomizing:(BOOL)arg1 ;
-(void)_restoreOriginalNavigationController;
-(id)_preparedViewController:(id)arg1 ;
-(void)_ensureChildrenHaveParentViewController;
-(void)restoreOriginalNavigationControllerIfNecessary:(id)arg1 ;
-(UIViewController *)displayedViewController;
-(void)setDisplayedViewController:(UIViewController *)arg1 ;
-(id)_stateRestorationParentForChildViewController:(id)arg1 index:(unsigned long long*)arg2 ;
-(void)_redisplayMoreTableView;
-(UIViewController *)moreListController;
@end

