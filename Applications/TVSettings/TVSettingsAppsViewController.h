/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsAppsFacade, TSKSettingItem, TSKAppIconPreviewViewController;

@interface TVSettingsAppsViewController : TSKViewController {

	BOOL _nowPlayingEnabled;
	TVSettingsAppsFacade* _appsFacade;
	TSKSettingItem* _lastFocusedItem;
	TSKAppIconPreviewViewController* _appIconPreviewViewController;

}

@property (nonatomic,retain) TVSettingsAppsFacade * appsFacade;                                           //@synthesize appsFacade=_appsFacade - In the implementation block
@property (nonatomic,retain) TSKSettingItem * lastFocusedItem;                                            //@synthesize lastFocusedItem=_lastFocusedItem - In the implementation block
@property (assign,nonatomic) BOOL nowPlayingEnabled;                                                      //@synthesize nowPlayingEnabled=_nowPlayingEnabled - In the implementation block
@property (nonatomic,retain) TSKAppIconPreviewViewController * appIconPreviewViewController;              //@synthesize appIconPreviewViewController=_appIconPreviewViewController - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)tableView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(id)loadSettingGroups;
-(id)previewForItemAtIndexPath:(id)arg1 ;
-(TSKSettingItem *)lastFocusedItem;
-(void)setLastFocusedItem:(TSKSettingItem *)arg1 ;
-(TSKAppIconPreviewViewController *)appIconPreviewViewController;
-(void)setAppIconPreviewViewController:(TSKAppIconPreviewViewController *)arg1 ;
-(TVSettingsAppsFacade *)appsFacade;
-(void)setAppsFacade:(TVSettingsAppsFacade *)arg1 ;
-(BOOL)nowPlayingEnabled;
-(void)setNowPlayingEnabled:(BOOL)arg1 ;
@end

