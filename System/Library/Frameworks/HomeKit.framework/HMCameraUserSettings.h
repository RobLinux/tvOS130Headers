/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMFLogging.h>
#import <HomeKit/HMFMessageReceiver.h>

@protocol HMCameraUserSettingsDelegate;
@class HMFUnfairLock, _HMCameraUserSettings, _HMContext, HMAccessory, NSUUID, HMCameraBulletinBoardSmartNotification, NSString;

@interface HMCameraUserSettings : NSObject <HMFLogging, HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	_HMCameraUserSettings* _cameraUserSettings;
	id<HMCameraUserSettingsDelegate> _delegate;
	_HMContext* _context;
	HMAccessory* _accessory;

}

@property (retain) _HMCameraUserSettings * cameraUserSettings;                                                           //@synthesize cameraUserSettings=_cameraUserSettings - In the implementation block
@property (readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,retain) _HMContext * context;                                                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HMAccessory * accessory;                                                                    //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long supportedFeatures; 
@property (readonly) unsigned long long currentAccessMode; 
@property (readonly) unsigned long long recordingStorageDuration; 
@property (readonly) unsigned long long recordingEventTriggers; 
@property (getter=areSnapshotsAllowed,readonly) BOOL snapshotsAllowed; 
@property (readonly) HMCameraBulletinBoardSmartNotification * smartNotificationBulletin; 
@property (getter=isAccessModeIndicatorEnabled,readonly) BOOL accessModeIndicatorEnabled; 
@property (getter=isCameraDisabledByThirdParty,readonly) BOOL cameraDisabledByThirdParty; 
@property (getter=isNightVisionModeEnabled,readonly) BOOL nightVisionModeEnabled; 
@property (getter=isRecordingAudioEnabled,readonly) BOOL recordingAudioEnabled; 
@property (getter=isAccessModeChangeNotificationEnabled,readonly) BOOL accessModeChangeNotificationEnabled; 
@property (__weak) id<HMCameraUserSettingsDelegate> delegate;                                                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(NSString *)description;
-(id<HMCameraUserSettingsDelegate>)delegate;
-(void)setDelegate:(id<HMCameraUserSettingsDelegate>)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(unsigned long long)supportedFeatures;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)messageDestination;
-(void)setCameraUserSettings:(_HMCameraUserSettings *)arg1 ;
-(_HMCameraUserSettings *)cameraUserSettings;
-(void)configureWithAccessory:(id)arg1 context:(id)arg2 ;
-(id)initWithCameraUserSettings:(id)arg1 ;
-(void)_mergeNewSettings:(id)arg1 operations:(id)arg2 ;
-(HMCameraBulletinBoardSmartNotification *)smartNotificationBulletin;
-(unsigned long long)accessModeAtHome;
-(unsigned long long)accessModeNotAtHome;
-(unsigned long long)currentAccessMode;
-(unsigned long long)recordingEventTriggers;
-(BOOL)isAccessModeIndicatorEnabled;
-(BOOL)areSnapshotsAllowed;
-(BOOL)isNightVisionModeEnabled;
-(BOOL)isCameraDisabledByThirdParty;
-(BOOL)isRecordingAudioEnabled;
-(BOOL)isAccessModeChangeNotificationEnabled;
-(void)updateWithSettings:(id)arg1 ;
-(void)_callSettingsDidUpdateDelegate;
-(unsigned long long)accessModeForPresenceType:(unsigned long long)arg1 ;
-(void)updateAccessMode:(unsigned long long)arg1 forPresenceEventType:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateRecordingStorageDuration:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRecordingEventTriggers:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAccessModeIndicatorEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSnapshotsAllowed:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateNightVisionModeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRecordingAudioEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAccessModeChangeNotificationEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)recordingStorageDuration;
@end

