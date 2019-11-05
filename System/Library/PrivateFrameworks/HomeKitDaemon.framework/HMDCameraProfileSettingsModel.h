/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSData, HMDBulletinBoardNotification;

@interface HMDCameraProfileSettingsModel : HMBModel {

	BOOL _cameraDisabledByThirdParty;
	unsigned long long _currentAccessMode;

}

@property (copy) NSNumber * accessModeAtHomeField; 
@property (copy) NSNumber * accessModeNotAtHomeField; 
@property (copy) NSNumber * recordingEventTriggersField; 
@property (copy) NSNumber * accessModeIndicatorEnabledField; 
@property (copy) NSNumber * nightVisionModeEnabledField; 
@property (copy) NSNumber * snapshotsAllowedField; 
@property (copy) NSNumber * periodicSnapshotsAllowedField; 
@property (copy) NSNumber * recordingAudioEnabledField; 
@property (copy) NSNumber * accessModeChangeNotificationEnabledField; 
@property (copy) NSData * smartBulletinBoardNotificationDataField; 
@property (assign) unsigned long long currentAccessMode;                                       //@synthesize currentAccessMode=_currentAccessMode - In the implementation block
@property (assign) unsigned long long accessModeAtHome; 
@property (assign) unsigned long long accessModeNotAtHome; 
@property (assign) unsigned long long recordingEventTriggers; 
@property (assign) BOOL accessModeIndicatorEnabled; 
@property (assign) BOOL nightVisionModeEnabled; 
@property (assign) BOOL snapshotsAllowed; 
@property (assign) BOOL periodicSnapshotsAllowed; 
@property (assign) BOOL cameraDisabledByThirdParty;                                            //@synthesize cameraDisabledByThirdParty=_cameraDisabledByThirdParty - In the implementation block
@property (assign) BOOL recordingAudioEnabled; 
@property (assign) BOOL accessModeChangeNotificationEnabled; 
@property (retain) HMDBulletinBoardNotification * smartBulletinBoardNotification; 
+(id)hmbProperties;
-(unsigned long long)accessModeAtHome;
-(unsigned long long)accessModeNotAtHome;
-(unsigned long long)currentAccessMode;
-(unsigned long long)recordingEventTriggers;
-(void)setAccessModeAtHome:(unsigned long long)arg1 ;
-(void)setAccessModeNotAtHome:(unsigned long long)arg1 ;
-(void)setRecordingEventTriggers:(unsigned long long)arg1 ;
-(BOOL)accessModeIndicatorEnabled;
-(void)setAccessModeIndicatorEnabled:(BOOL)arg1 ;
-(BOOL)nightVisionModeEnabled;
-(void)setNightVisionModeEnabled:(BOOL)arg1 ;
-(BOOL)snapshotsAllowed;
-(void)setSnapshotsAllowed:(BOOL)arg1 ;
-(BOOL)periodicSnapshotsAllowed;
-(void)setPeriodicSnapshotsAllowed:(BOOL)arg1 ;
-(BOOL)recordingAudioEnabled;
-(void)setRecordingAudioEnabled:(BOOL)arg1 ;
-(BOOL)accessModeChangeNotificationEnabled;
-(void)setAccessModeChangeNotificationEnabled:(BOOL)arg1 ;
-(HMDBulletinBoardNotification *)smartBulletinBoardNotification;
-(void)setSmartBulletinBoardNotification:(HMDBulletinBoardNotification *)arg1 ;
-(void)setCurrentAccessMode:(unsigned long long)arg1 ;
-(BOOL)cameraDisabledByThirdParty;
-(void)setCameraDisabledByThirdParty:(BOOL)arg1 ;
@end
