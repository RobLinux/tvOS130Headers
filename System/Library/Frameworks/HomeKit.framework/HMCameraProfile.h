/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMAccessoryProfile.h>

@protocol HMCameraProfileUserSettingsDelegate;
@class HMCameraStreamControl, HMCameraSnapshotControl, HMCameraSettingsControl, HMCameraAudioControl, _HMCameraProfile, HMCameraUserSettings, HMCameraClipManager;

@interface HMCameraProfile : HMAccessoryProfile {

	HMCameraStreamControl* _streamControl;
	HMCameraSnapshotControl* _snapshotControl;
	HMCameraSettingsControl* _settingsControl;
	HMCameraAudioControl* _speakerControl;
	HMCameraAudioControl* _microphoneControl;
	id<HMCameraProfileUserSettingsDelegate> _userSettingsDelegate;

}

@property (nonatomic,readonly) _HMCameraProfile * cameraProfile; 
@property (nonatomic,retain) HMCameraStreamControl * streamControl;                           //@synthesize streamControl=_streamControl - In the implementation block
@property (nonatomic,retain) HMCameraSnapshotControl * snapshotControl;                       //@synthesize snapshotControl=_snapshotControl - In the implementation block
@property (nonatomic,retain) HMCameraSettingsControl * settingsControl;                       //@synthesize settingsControl=_settingsControl - In the implementation block
@property (nonatomic,retain) HMCameraAudioControl * speakerControl;                           //@synthesize speakerControl=_speakerControl - In the implementation block
@property (nonatomic,retain) HMCameraAudioControl * microphoneControl;                        //@synthesize microphoneControl=_microphoneControl - In the implementation block
@property (readonly) HMCameraUserSettings * userSettings; 
@property (__weak) id<HMCameraProfileUserSettingsDelegate> userSettingsDelegate;              //@synthesize userSettingsDelegate=_userSettingsDelegate - In the implementation block
@property (readonly) HMCameraClipManager * clipManager; 
-(HMCameraUserSettings *)userSettings;
-(id)services;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(HMCameraStreamControl *)streamControl;
-(void)setStreamControl:(HMCameraStreamControl *)arg1 ;
-(HMCameraSettingsControl *)settingsControl;
-(void)setSettingsControl:(HMCameraSettingsControl *)arg1 ;
-(HMCameraClipManager *)clipManager;
-(HMCameraAudioControl *)microphoneControl;
-(HMCameraAudioControl *)speakerControl;
-(void)deleteAllClipsWithCompletionHandler:(/*^block*/id)arg1 ;
-(_HMCameraProfile *)cameraProfile;
-(HMCameraSnapshotControl *)snapshotControl;
-(id<HMCameraProfileUserSettingsDelegate>)userSettingsDelegate;
-(id)initWithCameraProfile:(id)arg1 ;
-(void)setSnapshotControl:(HMCameraSnapshotControl *)arg1 ;
-(void)setSpeakerControl:(HMCameraAudioControl *)arg1 ;
-(void)setMicrophoneControl:(HMCameraAudioControl *)arg1 ;
-(void)setUserSettingsDelegate:(id<HMCameraProfileUserSettingsDelegate>)arg1 ;
@end

