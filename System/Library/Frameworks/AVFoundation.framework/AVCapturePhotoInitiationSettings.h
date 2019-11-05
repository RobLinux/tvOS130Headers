/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVCapturePhotoInitiationSettingsInternal;

@interface AVCapturePhotoInitiationSettings : NSObject {

	AVCapturePhotoInitiationSettingsInternal* _internal;

}

@property (nonatomic,readonly) unsigned long long timestamp; 
@property (nonatomic,readonly) long long uniqueID; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,getter=isAutoStillImageStabilizationEnabled,nonatomic) BOOL autoStillImageStabilizationEnabled; 
@property (assign,nonatomic) long long HDRMode; 
@property (assign,nonatomic) BOOL burstQualityCaptureEnabled; 
+(id)photoInitiationSettingsWithUserInitiatedRequestTimestamp:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)timestamp;
-(long long)uniqueID;
-(void)setBurstQualityCaptureEnabled:(BOOL)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)setHDRMode:(long long)arg1 ;
-(BOOL)burstQualityCaptureEnabled;
-(long long)flashMode;
-(long long)HDRMode;
-(BOOL)isAutoStillImageStabilizationEnabled;
-(void)setAutoStillImageStabilizationEnabled:(BOOL)arg1 ;
-(id)_initWithTimestamp:(unsigned long long)arg1 ;
@end
