/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <ATVLegacyContentKit/TVSignInLandingViewDelegate.h>

@class TVSignInLandingView, NSString;

@interface TVLiCloudAuthenticationViewController : UIViewController <TVSignInLandingViewDelegate> {

	/*^block*/id _callbackBlock;
	TVSignInLandingView* _signInView;

}

@property (nonatomic,retain) TVSignInLandingView * signInView;              //@synthesize signInView=_signInView - In the implementation block
@property (nonatomic,copy) id callbackBlock;                                //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallbackBlock:(id)arg1 ;
-(void)loadView;
-(id)callbackBlock;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)_menuOutGestureRecognized;
-(void)authenticateUserOnSelectSignIn;
-(TVSignInLandingView *)signInView;
-(void)setSignInView:(TVSignInLandingView *)arg1 ;
@end

