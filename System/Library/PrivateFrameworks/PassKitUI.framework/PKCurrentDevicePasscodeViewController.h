/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/DevicePINController.h>
#import <PassKitUI/DevicePINControllerDelegate.h>

@class PKPasscodeUpgradeFlowController, NSString;

@interface PKCurrentDevicePasscodeViewController : DevicePINController <DevicePINControllerDelegate> {

	PKPasscodeUpgradeFlowController* _flowController;
	BOOL _viewHasAppeared;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)requiresKeyboard;
-(id)stringsBundle;
-(id)pinInstructionsPrompt;
-(id)initWithPasscodeUpgradeFlowController:(id)arg1 ;
@end

