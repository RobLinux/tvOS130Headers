/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AKAppleIDAuthenticationDelegate.h>
#import <AppleMediaServicesUI/AMSAuthKitUpdateController.h>

@class UIViewController, NSString;

@interface AMSUIAuthKitUpdatePromptController : NSObject <AKAppleIDAuthenticationDelegate, AMSAuthKitUpdateController> {

	UIViewController* _presentingViewController;

}

@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_createAuthenticationController;
+(Class)_authKitAuthenticationContextClass;
-(UIViewController *)presentingViewController;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(id)initWithPresentingViewController:(id)arg1 ;
-(id)performAuthKitUpdateForAccount:(id)arg1 options:(id)arg2 ;
-(id)_createAuthenticationContextForAccount:(id)arg1 options:(id)arg2 ;
-(void)_handleAuthKitError:(id)arg1 options:(id)arg2 ;
@end

