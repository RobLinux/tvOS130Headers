/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration, NSArray, FigDepthDataCaptureConnectionConfiguration;

@interface FigCaptureCameraSourcePipelineConfiguration : NSObject {

	int _motionAttachmentsSource;
	int _videoStabilizationType;
	int _depthType;
	SCD_Struct_BW2 _maxExposureDurationClientOverride;
	SCD_Struct_BW2 _maxExposureDurationFrameworkOverride;
	BOOL _forceCNRDisabled;
	BOOL _coreMediaFaceTrackingEnabled;
	BOOL _ispFaceTrackingEnabled;
	BOOL _offlineVISEnabled;
	BOOL _zeroShutterLagEnabled;
	BOOL _configureForZeroShutterLagSupport;
	BOOL _configureForSpatialOverCaptureSupport;
	BOOL _clockSynchronizationEnabled;
	BOOL _depthConversionEnabled;
	int _preferredCompressionTypeOnPreviewOutput;
	int _preferredCompressionTypeOnVideoCaptureOutputs;
	int _stillImageFocusPixelDataRetainedBufferCount;
	int _stillImageSashimiRawRetainedBufferCount;
	BOOL _streamingForegroundSegmentationEnabled;
	BOOL _RGBIRStereoFusionEnabled;
	float _overCapturePercentage;
	int _autoImageControlMode;
	FigCaptureSourceConfiguration* _cameraConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoPreviewSinkConnectionConfiguration;
	NSArray* _previewDerivedVideoConnectionConfigurations;
	NSArray* _videoCaptureConnectionConfigurations;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	NSArray* _visionDataConnectionConfigurations;
	NSArray* _metadataObjectConnectionConfigurations;
	NSArray* _movieFileDetectedObjectMetadataConnectionConfigurations;

}

@property (assign,nonatomic) int motionAttachmentsSource;                                                                   //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (assign,nonatomic) int videoStabilizationType;                                                                    //@synthesize videoStabilizationType=_videoStabilizationType - In the implementation block
@property (assign,nonatomic) int depthType;                                                                                 //@synthesize depthType=_depthType - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 maxExposureDurationClientOverride;                                              //@synthesize maxExposureDurationClientOverride=_maxExposureDurationClientOverride - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 maxExposureDurationFrameworkOverride;                                           //@synthesize maxExposureDurationFrameworkOverride=_maxExposureDurationFrameworkOverride - In the implementation block
@property (assign,nonatomic) BOOL forceCNRDisabled;                                                                         //@synthesize forceCNRDisabled=_forceCNRDisabled - In the implementation block
@property (assign,nonatomic) BOOL coreMediaFaceTrackingEnabled;                                                             //@synthesize coreMediaFaceTrackingEnabled=_coreMediaFaceTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL ispFaceTrackingEnabled;                                                                   //@synthesize ispFaceTrackingEnabled=_ispFaceTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL offlineVISEnabled;                                                                        //@synthesize offlineVISEnabled=_offlineVISEnabled - In the implementation block
@property (assign,nonatomic) BOOL zeroShutterLagEnabled;                                                                    //@synthesize zeroShutterLagEnabled=_zeroShutterLagEnabled - In the implementation block
@property (assign,nonatomic) BOOL configureForZeroShutterLagSupport;                                                        //@synthesize configureForZeroShutterLagSupport=_configureForZeroShutterLagSupport - In the implementation block
@property (assign,nonatomic) BOOL configureForSpatialOverCaptureSupport;                                                    //@synthesize configureForSpatialOverCaptureSupport=_configureForSpatialOverCaptureSupport - In the implementation block
@property (assign,nonatomic) BOOL clockSynchronizationEnabled;                                                              //@synthesize clockSynchronizationEnabled=_clockSynchronizationEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthConversionEnabled;                                                                   //@synthesize depthConversionEnabled=_depthConversionEnabled - In the implementation block
@property (assign,nonatomic) int preferredCompressionTypeOnPreviewOutput;                                                   //@synthesize preferredCompressionTypeOnPreviewOutput=_preferredCompressionTypeOnPreviewOutput - In the implementation block
@property (assign,nonatomic) int preferredCompressionTypeOnVideoCaptureOutputs;                                             //@synthesize preferredCompressionTypeOnVideoCaptureOutputs=_preferredCompressionTypeOnVideoCaptureOutputs - In the implementation block
@property (assign,nonatomic) int stillImageFocusPixelDataRetainedBufferCount;                                               //@synthesize stillImageFocusPixelDataRetainedBufferCount=_stillImageFocusPixelDataRetainedBufferCount - In the implementation block
@property (assign,nonatomic) int stillImageSashimiRawRetainedBufferCount;                                                   //@synthesize stillImageSashimiRawRetainedBufferCount=_stillImageSashimiRawRetainedBufferCount - In the implementation block
@property (assign,nonatomic) BOOL streamingForegroundSegmentationEnabled;                                                   //@synthesize streamingForegroundSegmentationEnabled=_streamingForegroundSegmentationEnabled - In the implementation block
@property (assign,nonatomic) BOOL RGBIRStereoFusionEnabled;                                                                 //@synthesize RGBIRStereoFusionEnabled=_RGBIRStereoFusionEnabled - In the implementation block
@property (assign,nonatomic) float overCapturePercentage;                                                                   //@synthesize overCapturePercentage=_overCapturePercentage - In the implementation block
@property (assign,nonatomic) int autoImageControlMode;                                                                      //@synthesize autoImageControlMode=_autoImageControlMode - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * cameraConfiguration;                                           //@synthesize cameraConfiguration=_cameraConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoPreviewSinkConnectionConfiguration;              //@synthesize videoPreviewSinkConnectionConfiguration=_videoPreviewSinkConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * previewDerivedVideoConnectionConfigurations;                                         //@synthesize previewDerivedVideoConnectionConfigurations=_previewDerivedVideoConnectionConfigurations - In the implementation block
@property (nonatomic,retain) NSArray * videoCaptureConnectionConfigurations;                                                //@synthesize videoCaptureConnectionConfigurations=_videoCaptureConnectionConfigurations - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                    //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;                 //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * visionDataConnectionConfigurations;                                                  //@synthesize visionDataConnectionConfigurations=_visionDataConnectionConfigurations - In the implementation block
@property (nonatomic,retain) NSArray * metadataObjectConnectionConfigurations;                                              //@synthesize metadataObjectConnectionConfigurations=_metadataObjectConnectionConfigurations - In the implementation block
@property (nonatomic,retain) NSArray * movieFileDetectedObjectMetadataConnectionConfigurations;                             //@synthesize movieFileDetectedObjectMetadataConnectionConfigurations=_movieFileDetectedObjectMetadataConnectionConfigurations - In the implementation block
-(void)dealloc;
-(BOOL)zeroShutterLagEnabled;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(FigCaptureSourceConfiguration *)cameraConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoPreviewSinkConnectionConfiguration;
-(NSArray *)previewDerivedVideoConnectionConfigurations;
-(NSArray *)videoCaptureConnectionConfigurations;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(NSArray *)visionDataConnectionConfigurations;
-(NSArray *)metadataObjectConnectionConfigurations;
-(NSArray *)movieFileDetectedObjectMetadataConnectionConfigurations;
-(void)setOverCapturePercentage:(float)arg1 ;
-(int)videoStabilizationType;
-(void)setVideoStabilizationType:(int)arg1 ;
-(int)motionAttachmentsSource;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(int)autoImageControlMode;
-(void)setAutoImageControlMode:(int)arg1 ;
-(void)setDepthType:(int)arg1 ;
-(SCD_Struct_BW2)maxExposureDurationClientOverride;
-(void)setMaxExposureDurationClientOverride:(SCD_Struct_BW2)arg1 ;
-(void)setMaxExposureDurationFrameworkOverride:(SCD_Struct_BW2)arg1 ;
-(void)setForceCNRDisabled:(BOOL)arg1 ;
-(void)setCoreMediaFaceTrackingEnabled:(BOOL)arg1 ;
-(void)setOfflineVISEnabled:(BOOL)arg1 ;
-(void)setConfigureForZeroShutterLagSupport:(BOOL)arg1 ;
-(BOOL)configureForSpatialOverCaptureSupport;
-(void)setConfigureForSpatialOverCaptureSupport:(BOOL)arg1 ;
-(void)setPreferredCompressionTypeOnPreviewOutput:(int)arg1 ;
-(void)setPreferredCompressionTypeOnVideoCaptureOutputs:(int)arg1 ;
-(void)setStillImageFocusPixelDataRetainedBufferCount:(int)arg1 ;
-(void)setStillImageSashimiRawRetainedBufferCount:(int)arg1 ;
-(void)setStreamingForegroundSegmentationEnabled:(BOOL)arg1 ;
-(void)setIspFaceTrackingEnabled:(BOOL)arg1 ;
-(void)setRGBIRStereoFusionEnabled:(BOOL)arg1 ;
-(void)setCameraConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(void)setVideoPreviewSinkConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setPreviewDerivedVideoConnectionConfigurations:(NSArray *)arg1 ;
-(void)setVideoCaptureConnectionConfigurations:(NSArray *)arg1 ;
-(void)setStillImageConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setDepthDataConnectionConfiguration:(FigDepthDataCaptureConnectionConfiguration *)arg1 ;
-(void)setClockSynchronizationEnabled:(BOOL)arg1 ;
-(void)setDepthConversionEnabled:(BOOL)arg1 ;
-(void)setVisionDataConnectionConfigurations:(NSArray *)arg1 ;
-(void)setMetadataObjectConnectionConfigurations:(NSArray *)arg1 ;
-(void)setMovieFileDetectedObjectMetadataConnectionConfigurations:(NSArray *)arg1 ;
-(SCD_Struct_BW2)maxExposureDurationFrameworkOverride;
-(int)depthType;
-(BOOL)forceCNRDisabled;
-(BOOL)coreMediaFaceTrackingEnabled;
-(BOOL)ispFaceTrackingEnabled;
-(BOOL)offlineVISEnabled;
-(BOOL)configureForZeroShutterLagSupport;
-(BOOL)clockSynchronizationEnabled;
-(BOOL)depthConversionEnabled;
-(int)preferredCompressionTypeOnPreviewOutput;
-(int)preferredCompressionTypeOnVideoCaptureOutputs;
-(int)stillImageFocusPixelDataRetainedBufferCount;
-(int)stillImageSashimiRawRetainedBufferCount;
-(BOOL)streamingForegroundSegmentationEnabled;
-(BOOL)RGBIRStereoFusionEnabled;
-(float)overCapturePercentage;
@end

