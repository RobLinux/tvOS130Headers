/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:52:41 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Arcade.app/Arcade
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITabBarControllerDelegate <NSObject>
@optional
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
-(void)tabBarController:(id)arg1 willBeginCustomizingViewControllers:(id)arg2;
-(void)tabBarController:(id)arg1 willEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3;
-(void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3;
-(unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
-(long long)tabBarControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
-(id)tabBarController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
-(id)tabBarController:(id)arg1 animationControllerForTransitionFromViewController:(id)arg2 toViewController:(id)arg3;

@end

