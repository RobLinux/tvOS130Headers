/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>

@protocol TSKSettingItemEditingController;
@class TSKSettingItem, UIGestureRecognizer, UIAlertController, TVSettingsDiagnosticsController, UIViewController;

@interface TVSettingsAboutViewController : TSKViewController {

	BOOL _showPartNumberAndFirmwareVersion;
	TSKSettingItem* _wifiSignalStrengthItem;
	unsigned long long _currentMoreInfoItemType;
	UIGestureRecognizer* _downButtonRecognizer;
	UIGestureRecognizer* _playPauseButtonRecognizer;
	UIAlertController* _diagnosticsTicketController;
	TVSettingsDiagnosticsController* _diagnostics;
	UIViewController*<TSKSettingItemEditingController> _nameViewController;

}

@property (assign,nonatomic) BOOL showPartNumberAndFirmwareVersion;                                                     //@synthesize showPartNumberAndFirmwareVersion=_showPartNumberAndFirmwareVersion - In the implementation block
@property (nonatomic,retain) TSKSettingItem * wifiSignalStrengthItem;                                                   //@synthesize wifiSignalStrengthItem=_wifiSignalStrengthItem - In the implementation block
@property (assign,nonatomic) unsigned long long currentMoreInfoItemType;                                                //@synthesize currentMoreInfoItemType=_currentMoreInfoItemType - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * downButtonRecognizer;                                                //@synthesize downButtonRecognizer=_downButtonRecognizer - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * playPauseButtonRecognizer;                                           //@synthesize playPauseButtonRecognizer=_playPauseButtonRecognizer - In the implementation block
@property (nonatomic,retain) UIAlertController * diagnosticsTicketController;                                           //@synthesize diagnosticsTicketController=_diagnosticsTicketController - In the implementation block
@property (nonatomic,retain) TVSettingsDiagnosticsController * diagnostics;                                             //@synthesize diagnostics=_diagnostics - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<TSKSettingItemEditingController> nameViewController;              //@synthesize nameViewController=_nameViewController - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(TVSettingsDiagnosticsController *)diagnostics;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setDiagnostics:(TVSettingsDiagnosticsController *)arg1 ;
-(void)_setDeviceName:(id)arg1 ;
-(UIGestureRecognizer *)playPauseButtonRecognizer;
-(void)setPlayPauseButtonRecognizer:(UIGestureRecognizer *)arg1 ;
-(id)loadSettingGroups;
-(id)previewForItemAtIndexPath:(id)arg1 ;
-(void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3 ;
-(void)networkUpdated:(id)arg1 ;
-(TSKSettingItem *)wifiSignalStrengthItem;
-(void)setWifiSignalStrengthItem:(TSKSettingItem *)arg1 ;
-(void)_handleUpGesture:(id)arg1 ;
-(void)_handleDownGesture:(id)arg1 ;
-(void)setDownButtonRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)_handlePlayPauseGesture:(id)arg1 ;
-(id)_nameViewControllerForItem:(id)arg1 ;
-(void)_updateDiagnosticsItem:(id)arg1 ;
-(BOOL)showPartNumberAndFirmwareVersion;
-(BOOL)_showWiFiSettings;
-(unsigned long long)currentMoreInfoItemType;
-(UIViewController*<TSKSettingItemEditingController>)nameViewController;
-(UIAlertController *)diagnosticsTicketController;
-(void)setShowPartNumberAndFirmwareVersion:(BOOL)arg1 ;
-(void)_advanceMoreInfoItem;
-(void)setDiagnosticsTicketController:(UIAlertController *)arg1 ;
-(BOOL)_hasTiltID;
-(void)setNameViewController:(UIViewController*<TSKSettingItemEditingController>)arg1 ;
-(void)_presentSetAccessoryNameFailedViewControllerWithError:(id)arg1 ;
-(void)setCurrentMoreInfoItemType:(unsigned long long)arg1 ;
-(UIGestureRecognizer *)downButtonRecognizer;
@end

