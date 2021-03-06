/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>

@class TVPAudioRoutingController, TSKSettingItem;

@interface TVSettingsAudioVideoViewController : TSKViewController {

	TVPAudioRoutingController* _routingController;
	TSKSettingItem* _wirelessAudioSyncItem;

}

@property (nonatomic,retain) TSKSettingItem * wirelessAudioSyncItem;              //@synthesize wirelessAudioSyncItem=_wirelessAudioSyncItem - In the implementation block
+(id)_multiChannelAudioFormatter;
+(id)_volumeFormatter;
+(BOOL)_hardwareSupportsAC3Decode;
+(id)_audioLanguageFormatter;
+(id)_subtitleOptionFormatter;
+(id)_nativeModeSwitchingOptionsFormatter;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)loadSettingGroups;
-(void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3 ;
-(void)_promptResetVideoSettings;
-(BOOL)_areDisplayFiltersEnabled;
-(TSKSettingItem *)wirelessAudioSyncItem;
-(void)setWirelessAudioSyncItem:(TSKSettingItem *)arg1 ;
@end

