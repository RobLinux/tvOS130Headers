/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWNodeMessage.h>

@class FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWPhotoManifest;

@interface BWNodeStillImagePrewarmMessage : BWNodeMessage {

	FigCaptureStillImageSettings* _requestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _resolvedStillImageCaptureSettings;
	BWPhotoManifest* _photoManifest;

}

@property (readonly) FigCaptureStillImageSettings * requestedStillImageCaptureSettings; 
@property (readonly) BWStillImageCaptureSettings * resolvedStillImageCaptureSettings; 
@property (readonly) BWPhotoManifest * photoManifest; 
+(id)newMessageWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 ;
-(void)dealloc;
-(FigCaptureStillImageSettings *)requestedStillImageCaptureSettings;
-(BWStillImageCaptureSettings *)resolvedStillImageCaptureSettings;
-(BWPhotoManifest *)photoManifest;
-(id)_initWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 ;
@end

