/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol OS_dispatch_queue;
@class OBPrivacyLinkController, OBWelcomeController, UIImage, NSString, NSObject, UITraitCollection;

@interface AMSUIOnboardingViewController : UIViewController <UIScrollViewDelegate> {

	BOOL _viewHasAppeared;
	OBPrivacyLinkController* _privacyLinkController;
	/*^block*/id _primaryButtonCallback;
	OBWelcomeController* _welcomeController;
	UIImage* _image;
	NSString* _titleText;
	NSString* _descriptionText;
	NSString* _primaryButtonText;
	NSObject*<OS_dispatch_queue> _metricsQueue;

}

@property (nonatomic,retain) OBWelcomeController * welcomeController;                      //@synthesize welcomeController=_welcomeController - In the implementation block
@property (nonatomic,retain) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                         //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                                   //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) NSString * primaryButtonText;                                 //@synthesize primaryButtonText=_primaryButtonText - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLinkController;              //@synthesize privacyLinkController=_privacyLinkController - In the implementation block
@property (nonatomic,readonly) BOOL isPresentedInFormSheet; 
@property (nonatomic,readonly) UITraitCollection * cappedTraitCollection; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> metricsQueue;                    //@synthesize metricsQueue=_metricsQueue - In the implementation block
@property (assign,nonatomic) BOOL viewHasAppeared;                                         //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
@property (nonatomic,readonly) UIImage * headerImage; 
@property (nonatomic,copy) id primaryButtonCallback;                                       //@synthesize primaryButtonCallback=_primaryButtonCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)supportedInterfaceOrientations;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)metricsQueue;
-(void)setMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIImage *)headerImage;
-(BOOL)viewHasAppeared;
-(void)setViewHasAppeared:(BOOL)arg1 ;
-(OBPrivacyLinkController *)privacyLinkController;
-(void)setPrivacyLinkController:(OBPrivacyLinkController *)arg1 ;
-(void)updateOverrideTraits;
-(UITraitCollection *)cappedTraitCollection;
-(id)childTraitCollectionForViewController:(id)arg1 ;
-(NSString *)primaryButtonText;
-(id)primaryButtonCallback;
-(id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkController:(id)arg5 ;
-(id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkController:(id)arg4 ;
-(void)didTapPrimaryButton:(id)arg1 ;
-(BOOL)isPresentedInFormSheet;
-(void)setPrimaryButtonCallback:(id)arg1 ;
-(void)setPrimaryButtonText:(NSString *)arg1 ;
-(id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5 ;
-(id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkBundleIdentifier:(id)arg4 ;
-(void)commonSetupWithPrimaryButtonText:(id)arg1 privacyLinkBundleIdentifiers:(id)arg2 ;
-(OBWelcomeController *)welcomeController;
-(void)setWelcomeController:(OBWelcomeController *)arg1 ;
@end

