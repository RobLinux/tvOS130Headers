/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:17 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIApplicationDelegate.h>

@protocol MTAppController;
@class UIWindow, MTMediaRemoteController, UIViewController, NSString;

@interface MTAppDelegate_Shared : NSObject <UIApplicationDelegate> {

	UIWindow* _window;
	id<MTAppController> _appController;
	MTMediaRemoteController* _mediaRemoteController;

}

@property (nonatomic,retain) UIWindow * window;                                            //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) UIViewController * rootViewController; 
@property (nonatomic,retain) id<MTAppController> appController;                            //@synthesize appController=_appController - In the implementation block
@property (nonatomic,retain) MTMediaRemoteController * mediaRemoteController;              //@synthesize mediaRemoteController=_mediaRemoteController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createWindow;
-(void)dealloc;
-(void)applicationWillResignActive:(id)arg1 ;
-(UIViewController *)rootViewController;
-(UIWindow *)window;
-(BOOL)openURL:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(void)application:(id)arg1 didChangeStatusBarOrientation:(long long)arg2 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(void)_setupPlayer;
-(id<MTAppController>)appController;
-(void)setAppController:(id<MTAppController>)arg1 ;
-(void)didChangeStoreAccount:(id)arg1 ;
-(void)setMediaRemoteController:(MTMediaRemoteController *)arg1 ;
-(BOOL)_isApplicationActive;
-(void)storeAccountDidChange;
-(void)_performBackgroundLaunchFeedUpdatesForApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setupAfterBecomingActive;
-(long long)_hostWindowLayoutDirection;
-(void)_showMainWindow;
-(BOOL)_hasMainWindow;
-(MTMediaRemoteController *)mediaRemoteController;
@end
