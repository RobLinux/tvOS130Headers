/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMHome, NSSet, HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HMSettings;


@protocol HFHomeKitSettingsVendor <HFHomeKitObject,HFGroupableItemProtocol>
@property (nonatomic,readonly) HMHome * hf_home; 
@property (nonatomic,readonly) NSSet * hf_dependentHomeKitObjectsForDownstreamItems; 
@property (nonatomic,readonly) HFHomeKitSettingsAdapterManager * hf_settingsAdapterManager; 
@property (nonatomic,readonly) HFHomeKitSettingsValueManager * hf_settingsValueManager; 
@property (nonatomic,readonly) BOOL hasValidSettings; 
@property (readonly) HMSettings * settings; 
@required
-(HMSettings *)settings;
-(HFHomeKitSettingsValueManager *)hf_settingsValueManager;
-(NSSet *)hf_dependentHomeKitObjectsForDownstreamItems;
-(HFHomeKitSettingsAdapterManager *)hf_settingsAdapterManager;
-(HMHome *)hf_home;
-(BOOL)hasValidSettings;

@end

