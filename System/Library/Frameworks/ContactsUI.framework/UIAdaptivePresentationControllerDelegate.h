/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIAdaptivePresentationControllerDelegate <NSObject>
@optional
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
-(BOOL)presentationControllerShouldDismiss:(id)arg1;
-(void)presentationControllerWillDismiss:(id)arg1;
-(void)presentationControllerDidDismiss:(id)arg1;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1;

@end

