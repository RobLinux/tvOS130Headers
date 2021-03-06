/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <HomeKit/HMUserManagementRemoteHost.h>

@class HMHome, _UIAsyncInvocation, HMUserListRemoteViewController;

@interface HMUserListViewController : UIViewController <HMUserManagementRemoteHost> {

	BOOL _shouldPresentWhenLoaded;
	HMHome* _home;
	/*^block*/id _completionHandler;
	/*^block*/id _loadHandler;
	_UIAsyncInvocation* _cancelServiceInvocation;
	HMUserListRemoteViewController* _remoteViewController;

}

@property (nonatomic,retain) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentWhenLoaded;                                       //@synthesize shouldPresentWhenLoaded=_shouldPresentWhenLoaded - In the implementation block
@property (nonatomic,copy) id loadHandler;                                                       //@synthesize loadHandler=_loadHandler - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * cancelServiceInvocation;                       //@synthesize cancelServiceInvocation=_cancelServiceInvocation - In the implementation block
@property (nonatomic,retain) HMUserListRemoteViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                 //@synthesize completionHandler=_completionHandler - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)viewDidLoad;
-(HMUserListRemoteViewController *)remoteViewController;
-(void)setRemoteViewController:(HMUserListRemoteViewController *)arg1 ;
-(BOOL)shouldAutorotate;
-(void)_requestRemoteViewController;
-(void)userManagementDidFinishWithError:(id)arg1 ;
-(void)userManagementDidLoad;
-(void)setLoadHandler:(id)arg1 ;
-(void)setShouldPresentWhenLoaded:(BOOL)arg1 ;
-(void)_configureAndAddRemoteViewController;
-(void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg1 ;
-(BOOL)shouldPresentWhenLoaded;
-(void)_presentAsTopmostViewController;
-(id)loadHandler;
-(void)presentWhenLoaded;
-(_UIAsyncInvocation *)cancelServiceInvocation;
-(void)_finishSetupWithError:(id)arg1 ;
-(id)initWithHome:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
@end

