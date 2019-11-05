/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>

@class PBSDisplayMode, UIViewController;

@interface TVSettingsResolutionViewController : TSKViewController {

	PBSDisplayMode* _lastDisplayMode;
	UIViewController* _recoveryController;

}

@property (nonatomic,retain) PBSDisplayMode * lastDisplayMode;                          //@synthesize lastDisplayMode=_lastDisplayMode - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * recoveryController;              //@synthesize recoveryController=_recoveryController - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(void)setRecoveryController:(UIViewController *)arg1 ;
-(/*^block*/id)resolutionItemConfigurationBlock;
-(void)_selectedItem:(id)arg1 ;
-(void)changeModeTo:(id)arg1 ;
-(void)setLastDisplayMode:(PBSDisplayMode *)arg1 ;
-(id)resolutionGroupsForCommonModes:(BOOL)arg1 ;
-(PBSDisplayMode *)lastDisplayMode;
-(UIViewController *)recoveryController;
@end
