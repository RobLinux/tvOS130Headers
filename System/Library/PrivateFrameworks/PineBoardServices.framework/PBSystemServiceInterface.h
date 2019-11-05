/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBSystemServiceInterface <NSObject>
@property (nonatomic,readonly) BOOL hiliteModeActive; 
@required
-(void)reboot;
-(void)topActiveOrActivatingApplicationIdentifierWithReply:(/*^block*/id)arg1;
-(void)deactivateApplication;
-(void)setWantsVolumeButtonEvents:(BOOL)arg1;
-(void)setAirPlayActive:(BOOL)arg1;
-(void)presentSystemRoutingUIWithOptions:(id)arg1 completion:(/*^block*/id)arg2;
-(void)activateSiri;
-(void)wakeSystemForReason:(id)arg1;
-(void)sleepSystemForReason:(id)arg1;
-(void)purgeTopShelfContentForApplicationIdentifiers:(id)arg1;
-(void)getStoreFrontCountryCodeWithReply:(/*^block*/id)arg1;
-(void)registerServiceProviderEndpoint:(id)arg1 forProviderType:(id)arg2;
-(void)endpointForProviderType:(id)arg1 withIdentifier:(id)arg2 responseBlock:(/*^block*/id)arg3;
-(void)getAppInfoServiceProxyWithReply:(/*^block*/id)arg1;
-(void)getPictureInPictureServiceProxyWithReply:(/*^block*/id)arg1;
-(void)registerNowPlayingDelegate:(id)arg1;
-(void)launchKioskApp;
-(void)fetchDeviceIsAsleepWithResult:(/*^block*/id)arg1;
-(void)relaunchBackboardd;
-(void)relaunch;
-(void)activateScreenSaver;
-(void)activateScreenSaverWithReply:(/*^block*/id)arg1;
-(void)deactivateScreenSaver;
-(void)launchCRDApp;
-(void)presentNowPlayingWithOptions:(id)arg1 completion:(/*^block*/id)arg2;
-(void)presentThermalAlertWithCompletion:(/*^block*/id)arg1;
-(void)dismissThermalAlertWithCompletion:(/*^block*/id)arg1;
-(void)presentEventMaskingWindowWithCompletion:(/*^block*/id)arg1;
-(void)dismissEventMaskingWindowWithCompletion:(/*^block*/id)arg1;
-(void)presentSoftwareUpdateWithOptions:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dismissSoftwareUpdateWindowWithCompletion:(/*^block*/id)arg1;
-(void)setSleepTimeout:(double)arg1;
-(void)sleepTimeoutWithReply:(/*^block*/id)arg1;
-(void)recentApplicationBundleIdentifiersWithReply:(/*^block*/id)arg1;
-(void)setNextVoiceRecognitionAudioInputPaths:(id)arg1;
-(void)setNextAssistantRecognitionStrings:(id)arg1;
-(void)performScreenActionWithName:(id)arg1 forItemIdentifier:(id)arg2 parameters:(id)arg3 reply:(/*^block*/id)arg4;
-(void)sendMenuButtonEvent;
-(void)sendEventData:(id)arg1;
-(void)systemAppearanceWithReply:(/*^block*/id)arg1;
-(void)setSystemAppearance:(long long)arg1;
-(void)kioskAppBundleIdentifierWithReply:(/*^block*/id)arg1;
-(void)setKioskAppBundleIdentifier:(id)arg1;
-(void)setMinimumBackgroundFetchInterval:(double)arg1;
-(void)startSiriListening;
-(void)stopSiriListening;
-(void)fetchProvisionAppIdentifiersWithReply:(/*^block*/id)arg1;
-(void)fetchDisabledAdamIDsWithReply:(/*^block*/id)arg1;
-(void)fetchApplicationIdentifiersByBundleIdentifierMappingWithReply:(/*^block*/id)arg1;
-(void)fetchEnforceProvisioningOnSystemAppsEnabledWithReply:(/*^block*/id)arg1;
-(void)fetchPairedAppleRemoteStateWithReply:(/*^block*/id)arg1;
-(void)pairAppleRemote:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)setWantsPlayPauseButtonEvents:(BOOL)arg1;
-(void)getBulletinServiceProxyWithReply:(/*^block*/id)arg1;
-(void)getDiagnosticLogsServiceProxyWithReply:(/*^block*/id)arg1;
-(void)getOSUpdateServiceProxyWithReply:(/*^block*/id)arg1;
-(void)getAirPlayServiceProxyWithReply:(/*^block*/id)arg1;
-(void)getRestrictionServiceProxyWithReply:(/*^block*/id)arg1;
-(void)getMediaRemoteServiceProxyWithReply:(/*^block*/id)arg1;
-(void)getUserPresentationServiceProxyWithReply:(/*^block*/id)arg1;
-(void)getVideoSubscriberAccountServiceProxyWithReply:(/*^block*/id)arg1;
-(void)getDisplayManagerServiceProxyWithReply:(/*^block*/id)arg1;
-(void)listen;
-(BOOL)hiliteModeActive;

@end

