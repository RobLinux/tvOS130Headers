/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSArray, NSObject, AVCapturePhotoSettings, NSMutableArray, NSString;

@interface AVCapturePhotoOutputInternal : NSObject {

	AVWeakReference* weakReference;
	long long lastSettingsUniqueID;
	NSArray* availablePhotoPixelFormatTypes;
	NSArray* availablePhotoCodecTypes;
	NSArray* availableRawPhotoPixelFormatTypes;
	NSArray* availablePhotoFileTypes;
	NSArray* availableRawPhotoFileTypes;
	BOOL stillImageStabilizationSupported;
	NSArray* supportedHDRModes;
	NSArray* supportedFlashModes;
	BOOL highResolutionCaptureEnabled;
	unsigned long long maxBracketedCapturePhotoCount;
	BOOL lensStabilizationDuringBracketedCaptureSupported;
	BOOL livePhotoCaptureSupported;
	BOOL livePhotoCaptureEnabled;
	BOOL livePhotoAutoTrimmingEnabled;
	NSArray* availableLivePhotoVideoCodecTypes;
	SCD_Struct_AV7 livePhotoMovieDuration;
	SCD_Struct_AV7 livePhotoMovieVideoFrameDuration;
	SCD_Struct_AV41 livePhotoMovieDimensions;
	BOOL livePhotoCaptureSuspended;
	BOOL depthDataDeliverySupported;
	BOOL depthDataDeliveryEnabled;
	BOOL filterRenderingEnabled;
	BOOL imageOptimizationForOfflineVideoStabilizationSupported;
	BOOL optimizesImagesForOfflineVideoStabilization;
	SCD_Struct_AV41 optimizedImageDimensionsForOfflineStabilization;
	BOOL livePhotoMovieProcessingSuspended;
	BOOL videoCaptureSupported;
	BOOL videoCaptureEnabled;
	BOOL resumeLivePhotoMovieCaptureAfterVideoCaptureEnds;
	NSObject*<OS_dispatch_queue> sceneDetectionObserversDispatchQueue;
	int flashSceneObserverCount;
	int HDRSceneObserverCount;
	int stillImageStabilizationSceneObserverCount;
	BOOL isFlashScene;
	BOOL isHDRScene;
	BOOL isStillImageStabilizationScene;
	AVCapturePhotoSettings* photoSettingsForSceneMonitoring;
	OpaqueFigSimpleMutexRef requestsLock;
	NSMutableArray* photoRequests;
	NSMutableArray* prepareRequests;
	NSObject*<OS_dispatch_queue> beginEndIrisMovieCaptureHostTimeQueue;
	NSObject*<OS_dispatch_group> beginEndIrisMovieCaptureHostTimeDispatchGroup;
	NSString* sourceDeviceType;

}
@end

