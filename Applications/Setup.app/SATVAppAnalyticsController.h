/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SATVStepViewController.h>
#import <Setup/SATVConsentViewControllerDelegate.h>
#import <Setup/SATVConsentViewControllerDataSource.h>
#import <Setup/SATVConsentStep.h>

@class OBPrivacyLinkController, NSString;

@interface SATVAppAnalyticsController : SATVStepViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource, SATVConsentStep> {

	/*^block*/id consentHandler;
	OBPrivacyLinkController* _privacyLink;

}

@property (nonatomic,retain) OBPrivacyLinkController * privacyLink;              //@synthesize privacyLink=_privacyLink - In the implementation block
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
-(BOOL)isConfigured;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setPrivacyLink:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLink;
-(void)autoAdvance;
-(void)setConsentHandler:(id)arg1 ;
-(void)_enableAppAnalytics:(BOOL)arg1 ;
-(id)consentHandler;
-(void)consentViewControllerDidSelectConsent:(id)arg1 ;
-(void)consentViewControllerDidSelectDissent:(id)arg1 ;
-(id)titleTextForConsentViewController:(id)arg1 ;
-(id)subtitleTextForConsentViewController:(id)arg1 ;
-(id)consentButtonTextForConsentViewController:(id)arg1 ;
-(id)dissentButtonTextForConsentViewController:(id)arg1 ;
-(id)footerButtonViewForConsentViewController:(id)arg1 ;
@end

