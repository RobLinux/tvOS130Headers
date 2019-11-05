/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>
#import <TVSettings/AKAppleIDAuthenticationInAppContextDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, TVSettingsAccountsFacade, NSString;

@interface TVSettingsGameCenterAccountViewController : TSKViewController <AKAppleIDAuthenticationInAppContextDelegate, UIGestureRecognizerDelegate> {

	BOOL _authenticationInProgress;
	UITapGestureRecognizer* _menuGestureRecognizer;
	BOOL _signOutInProgress;
	TVSettingsAccountsFacade* _accountsFacade;

}

@property (getter=isAuthenticationInProgress) BOOL authenticationInProgress; 
@property (nonatomic,retain) TVSettingsAccountsFacade * accountsFacade;                   //@synthesize accountsFacade=_accountsFacade - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(TVSettingsAccountsFacade *)accountsFacade;
-(void)setAccountsFacade:(TVSettingsAccountsFacade *)arg1 ;
-(void)contextDidPresentLoginAlertController:(id)arg1 ;
-(void)contextWillDismissLoginAlertController:(id)arg1 ;
-(void)contextDidDismissLoginAlertController:(id)arg1 ;
-(void)_presentError:(id)arg1 ;
-(BOOL)isAuthenticationInProgress;
-(void)setAuthenticationInProgress:(BOOL)arg1 ;
-(id)loadSettingGroups;
-(void)_updateSignInItem:(id)arg1 value:(id)arg2 ;
-(void)_signIn:(id)arg1 ;
-(void)_signOut:(id)arg1 ;
-(id)initWithAccountsFacade:(id)arg1 ;
-(void)_presentAboutFriends:(id)arg1 ;
-(void)_resetAuthenticationInProgressState;
@end

