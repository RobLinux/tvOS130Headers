/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SATVStepViewController.h>
#import <Setup/SATVActionStep.h>

@class SATVActivityIndicatorViewController, SATViCloudServicesManager, NSString;

@interface SATViCloudHomeScreenSyncQueryController : SATVStepViewController <SATVActionStep> {

	/*^block*/id completionHandler;
	SATVActivityIndicatorViewController* _activityIndicatorViewController;
	SATViCloudServicesManager* _iCloudServicesManager;

}

@property (nonatomic,retain) SATVActivityIndicatorViewController * activityIndicatorViewController;              //@synthesize activityIndicatorViewController=_activityIndicatorViewController - In the implementation block
@property (nonatomic,retain) SATViCloudServicesManager * iCloudServicesManager;                                  //@synthesize iCloudServicesManager=_iCloudServicesManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id menuHandler; 
@property (nonatomic,readonly) BOOL isConfigured; 
@property (nonatomic,copy) id completionHandler; 
+(BOOL)isSupported;
+(id)stableKey;
-(id)init;
-(void)reset;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(SATVActivityIndicatorViewController *)activityIndicatorViewController;
-(void)setActivityIndicatorViewController:(SATVActivityIndicatorViewController *)arg1 ;
-(SATViCloudServicesManager *)iCloudServicesManager;
-(void)setICloudServicesManager:(SATViCloudServicesManager *)arg1 ;
@end

