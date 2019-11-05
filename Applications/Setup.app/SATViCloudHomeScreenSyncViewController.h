/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SATVStepViewController.h>
#import <Setup/SATVChooseOptionViewDataSource.h>
#import <Setup/SATVChooseOptionViewDelegate.h>
#import <Setup/SATVConsentStep.h>

@class UIActivityIndicatorView, UIView, SATViCloudServicesManager, SATVChooseOptionView, SATVActivityIndicatorViewController, NSString;

@interface SATViCloudHomeScreenSyncViewController : SATVStepViewController <SATVChooseOptionViewDataSource, SATVChooseOptionViewDelegate, SATVConsentStep> {

	/*^block*/id consentHandler;
	UIActivityIndicatorView* _activityIndicatorView;
	UIView* _activityIndicatorContainerView;
	SATViCloudServicesManager* _iCloudServicesManager;
	SATVChooseOptionView* _chooseOptionView;
	SATVActivityIndicatorViewController* _activityIndicatorViewController;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                                    //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) UIView * activityIndicatorContainerView;                                            //@synthesize activityIndicatorContainerView=_activityIndicatorContainerView - In the implementation block
@property (nonatomic,retain) SATViCloudServicesManager * iCloudServicesManager;                                  //@synthesize iCloudServicesManager=_iCloudServicesManager - In the implementation block
@property (nonatomic,retain) SATVChooseOptionView * chooseOptionView;                                            //@synthesize chooseOptionView=_chooseOptionView - In the implementation block
@property (nonatomic,retain) SATVActivityIndicatorViewController * activityIndicatorViewController;              //@synthesize activityIndicatorViewController=_activityIndicatorViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id menuHandler; 
@property (nonatomic,readonly) BOOL isConfigured; 
@property (nonatomic,copy) id consentHandler; 
+(BOOL)isSupported;
+(id)stableKey;
-(id)init;
-(void)reset;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(id)_footerText;
-(SATVActivityIndicatorViewController *)activityIndicatorViewController;
-(void)setActivityIndicatorViewController:(SATVActivityIndicatorViewController *)arg1 ;
-(void)autoAdvance;
-(void)setConsentHandler:(id)arg1 ;
-(id)consentHandler;
-(void)_enableOrDisableHomeScreenSync:(BOOL)arg1 ;
-(void)_showActivityIndicatorView;
-(void)_showOptionsView;
-(SATVChooseOptionView *)chooseOptionView;
-(void)_dismissActivityIndicatorView;
-(id)titleTextForView:(id)arg1 ;
-(id)subtitleTextForView:(id)arg1 ;
-(id)firstOptionButtonTextForView:(id)arg1 ;
-(id)secondOptionButtonTextForView:(id)arg1 ;
-(id)firstOptionButtonFooterTextForView:(id)arg1 ;
-(id)secondOptionButtonFooterTextForView:(id)arg1 ;
-(void)didSelectFirstOptionForView:(id)arg1 ;
-(void)didSelectSecondOptionForView:(id)arg1 ;
-(UIView *)activityIndicatorContainerView;
-(void)setActivityIndicatorContainerView:(UIView *)arg1 ;
-(SATViCloudServicesManager *)iCloudServicesManager;
-(void)setICloudServicesManager:(SATViCloudServicesManager *)arg1 ;
-(void)setChooseOptionView:(SATVChooseOptionView *)arg1 ;
@end

