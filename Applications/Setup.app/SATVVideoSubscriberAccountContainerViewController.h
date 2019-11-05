/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class SATVStepContext, SATVVideoSubscriberAccountViewController, SATVNavigationController, SATVVideoSubscriberAccountAppViewController;

@interface SATVVideoSubscriberAccountContainerViewController : UIViewController {

	SATVStepContext* _currentStepContext;
	/*^block*/id _menuHandler;
	/*^block*/id _completion;
	SATVVideoSubscriberAccountViewController* _videoSubscriberViewController;
	SATVNavigationController* _navController;
	SATVVideoSubscriberAccountAppViewController* _videoSubscriberAppViewController;

}

@property (nonatomic,retain) SATVNavigationController * navController;                                                    //@synthesize navController=_navController - In the implementation block
@property (nonatomic,retain) SATVVideoSubscriberAccountViewController * videoSubscriberViewController;                    //@synthesize videoSubscriberViewController=_videoSubscriberViewController - In the implementation block
@property (nonatomic,retain) SATVVideoSubscriberAccountAppViewController * videoSubscriberAppViewController;              //@synthesize videoSubscriberAppViewController=_videoSubscriberAppViewController - In the implementation block
@property (nonatomic,retain) SATVStepContext * currentStepContext;                                                        //@synthesize currentStepContext=_currentStepContext - In the implementation block
@property (nonatomic,copy) id menuHandler;                                                                                //@synthesize menuHandler=_menuHandler - In the implementation block
@property (nonatomic,copy) id completion;                                                                                 //@synthesize completion=_completion - In the implementation block
+(void)initialize;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)_reset;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)resetConfiguration;
-(SATVNavigationController *)navController;
-(void)setNavController:(SATVNavigationController *)arg1 ;
-(void)autoAdvance;
-(void)setMenuHandler:(id)arg1 ;
-(void)_sendStepCompletionNotificationWithSuccessInfo:(BOOL)arg1 ;
-(id)menuHandler;
-(void)deviceDidActivateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCurrentStepContext:(SATVStepContext *)arg1 ;
-(BOOL)isVSAViewControllerSupported;
-(id)videoSubscriberAccountViewController;
-(BOOL)_shouldSkipForManagedDevice;
-(SATVVideoSubscriberAccountViewController *)videoSubscriberViewController;
-(SATVVideoSubscriberAccountAppViewController *)videoSubscriberAppViewController;
-(BOOL)isVSAAppViewControllerSupported;
-(void)setVideoSubscriberAppViewController:(SATVVideoSubscriberAccountAppViewController *)arg1 ;
-(SATVStepContext *)currentStepContext;
-(void)setVideoSubscriberViewController:(SATVVideoSubscriberAccountViewController *)arg1 ;
@end

