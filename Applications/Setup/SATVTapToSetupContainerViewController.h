/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class SATVTapToSetupController, SATVNavigationController;

@interface SATVTapToSetupContainerViewController : UIViewController {

	SATVTapToSetupController* _tapToSetupController;
	/*^block*/id _menuHandler;
	/*^block*/id _completion;
	SATVNavigationController* _navController;

}

@property (nonatomic,retain) SATVNavigationController * navController;                                                    //@synthesize navController=_navController - In the implementation block
@property (getter=_tapToSetupController,nonatomic,readonly) SATVTapToSetupController * tapToSetupController;              //@synthesize tapToSetupController=_tapToSetupController - In the implementation block
@property (nonatomic,copy) id menuHandler;                                                                                //@synthesize menuHandler=_menuHandler - In the implementation block
@property (nonatomic,copy) id completion;                                                                                 //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)reset;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(SATVNavigationController *)navController;
-(void)setNavController:(SATVNavigationController *)arg1 ;
-(void)autoAdvance;
-(void)setMenuHandler:(id)arg1 ;
-(void)_sendStepCompletionNotificationWithSuccessInfo:(BOOL)arg1 ;
-(id)menuHandler;
-(id)_tapToSetupController;
@end

