/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <CoreCDPUI/CDPServiceInterface.h>

@class UIViewController;

@interface CDPServiceViewController : UIViewController <CDPServiceInterface> {

	BOOL _inlineMode;
	UIViewController* _contentViewController;

}
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(void)offsetForCurrentKeyboard:(/*^block*/id)arg1 ;
@end
