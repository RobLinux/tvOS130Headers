/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSNumber, NSData, NSArray, NSDictionary;

@interface BFFSettingsManager : NSObject {

	NSMutableArray* _stashedPaths;
	NSMutableDictionary* _stashedPreferences;
	NSMutableDictionary* _stashedManagedConfigurationSettings;
	NSMutableArray* _stashedButtonHaptics;
	NSNumber* _stashedAssistantEnabled;
	NSNumber* _stashedAssistantVoiceTriggerEnabled;
	NSNumber* _stashedLocationServicesEnabled;
	NSData* _stashedLocationServicesSettings;
	NSData* _stashedWatchData;
	NSArray* _stashedFlowSkipIdentifiers;
	NSNumber* _stashedScreenTimeEnabled;
	NSNumber* _stashedAutoUpdateEnabled;
	NSData* _stashedAccessibilityData;
	NSDictionary* _stashedDeviceToDeviceMigrationSuccessInfo;
	NSNumber* _stashedUserInterfaceStyleMode;

}
+(id)sharedManager;
-(id)init;
-(void)reset;
-(void)setAssistantEnabled:(BOOL)arg1 ;
-(BOOL)hasStashedValuesOnDisk;
-(BOOL)removeSafeHaven;
-(void)postDidRestoreSafeHavenNotification;
-(void)setScreenTimeEnabled:(BOOL)arg1 ;
-(void)setAutoUpdateEnabled:(BOOL)arg1 ;
-(void)setUserInterfaceStyleMode:(long long)arg1 ;
-(void)_reset:(BOOL)arg1 ;
-(id)loadConfigurationFromDisk;
-(void)setObject:(id)arg1 forDomain:(id)arg2 key:(id)arg3 ;
-(id)_preferencesForDomain:(id)arg1 ;
-(void)stashPath:(id)arg1 ;
-(void)clearHapticTypeForButtonKind:(long long)arg1 ;
-(BOOL)hideStashInSafeHavenAsProvisional:(BOOL)arg1 ;
-(void)populatePathsToStash;
-(BOOL)hasStashedValues;
-(long long)stashConfigurationType;
-(BOOL)_stashConfiguration:(BOOL)arg1 ;
-(BOOL)_stashPaths;
-(BOOL)_commitStash;
-(id)stashProductVersion;
-(id)stashBuildVersion;
-(unsigned long long)_restoreConfiguration;
-(void)_applyStashedPreferences;
-(void)_applyStashedManagedConfiguration;
-(void)_applyStashedButtonHaptics;
-(void)_applyAssistantPreferences;
-(void)_applyLocationServices;
-(void)_applyLocationServicesSettings;
-(void)_restoreWatchData;
-(void)_applyStashedFlowSkipIdentifiers;
-(void)_applyScreenTimePreferences;
-(void)_applyAutoUpdatePreferences;
-(void)_restoreAccessibilityData;
-(void)_applyUserInterfaceStyleMode;
-(void)_restoreStashedFiles;
-(id)_shovePath:(id)arg1 toPath:(id)arg2 ;
-(unsigned long long)stashVersion;
-(void)setBool:(BOOL)arg1 forManagedConfigurationSetting:(id)arg2 ;
-(void)removeBoolSettingForManagedConfigurationSetting:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forDomain:(id)arg2 key:(id)arg3 ;
-(void)stashHapticType:(long long)arg1 forButtonKind:(long long)arg2 ;
-(void)stashLocationServicesChoice:(BOOL)arg1 ;
-(void)stashLocationServicesSettings:(id)arg1 ;
-(void)stashWatchData:(id)arg1 ;
-(void)setAssistantVoiceTriggerEnabled:(BOOL)arg1 ;
-(void)stashDeviceToDeviceMigrationSuccessInfo:(id)arg1 ;
-(void)stashFlowSkipIdentifiers:(id)arg1 ;
-(void)stashAccessibilityData:(id)arg1 ;
-(BOOL)hideStashInSafeHaven;
-(void)applySafeHavenStash;
@end

