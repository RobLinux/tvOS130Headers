/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OnBoardingKit/OnBoardingKit-Structs.h>
@class OBPrivacySplashController, OBPrivacyCombinedController, NSString, UIViewController, NSArray;

@interface OBPrivacyPresenter : NSObject {

	/*^block*/id _dismissHandler;
	OBPrivacySplashController* _splashController;
	OBPrivacyCombinedController* _combinedController;
	NSString* _displayLanguage;
	UIViewController* _presentingViewController;
	UIViewController* _presentedController;
	NSArray* _presentedIdentifiers;

}

@property (retain) OBPrivacySplashController * splashController;                  //@synthesize splashController=_splashController - In the implementation block
@property (retain) OBPrivacyCombinedController * combinedController;              //@synthesize combinedController=_combinedController - In the implementation block
@property (retain) UIViewController * presentedController;                        //@synthesize presentedController=_presentedController - In the implementation block
@property (retain) NSArray * presentedIdentifiers;                                //@synthesize presentedIdentifiers=_presentedIdentifiers - In the implementation block
@property (copy) id dismissHandler;                                               //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (nonatomic,retain) NSString * displayLanguage;                          //@synthesize displayLanguage=_displayLanguage - In the implementation block
@property (__weak) UIViewController * presentingViewController;                   //@synthesize presentingViewController=_presentingViewController - In the implementation block
+(id)presenterForPrivacySplashWithIdentifier:(id)arg1 ;
+(id)presenterForPrivacySplashWithBundle:(id)arg1 ;
+(id)presenterForPrivacySplashWithIdentifer:(id)arg1 ;
+(id)presenterForPrivacySplashWithBundleAtPath:(id)arg1 ;
+(id)presenterForPrivacyUnifiedAbout;
+(id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)arg1 ;
-(void)present;
-(NSString *)displayLanguage;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id)dismissHandler;
-(void)setDismissHandler:(id)arg1 ;
-(void)setDisplayLanguage:(NSString *)arg1 ;
-(void)setSplashController:(OBPrivacySplashController *)arg1 ;
-(OBPrivacySplashController *)splashController;
-(void)setPresentedIdentifiers:(NSArray *)arg1 ;
-(void)setCombinedController:(OBPrivacyCombinedController *)arg1 ;
-(OBPrivacyCombinedController *)combinedController;
-(void)setPresentedController:(UIViewController *)arg1 ;
-(void)_presenterDidDismiss;
-(UIViewController *)presentedController;
-(NSArray *)presentedIdentifiers;
@end

