/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSourceFormat.h>

@class NSArray, FigCaptureSourceCompanionFormat, FigCaptureSourceDepthDataFormat;

@interface FigCaptureSourceVideoFormat : FigCaptureSourceFormat {

	NSArray* _frontEndScalerCompanionFormats;
	BOOL _sifrSupported;
	FigCaptureSourceCompanionFormat* _nonSIFRCompanionFormat;
	FigCaptureSourceCompanionFormat* _depthCompanionFormat;
	NSArray* _supportedDepthDataFormats;
	FigCaptureSourceDepthDataFormat* _streamingDXDYDepthDataFormat;
	BOOL _isStreamingDisparitySupported;
	BOOL _isStreamingDepthSupported;
	BOOL _isStillImageDisparitySupported;
	BOOL _isStillImageDepthSupported;

}

@property (readonly) int formatIndex; 
@property (readonly) SCD_Struct_BW19 dimensions; 
@property (readonly) SCD_Struct_BW19 sensorDimensions; 
@property (readonly) SCD_Struct_BW19 previewDimensions; 
@property (readonly) float minSupportedFrameRate; 
@property (readonly) float maxSupportedFrameRate; 
@property (readonly) float defaultMinFrameRate; 
@property (readonly) float defaultMaxFrameRate; 
@property (readonly) float fieldOfView; 
@property (readonly) float geometricDistortionCorrectedFieldOfView; 
@property (getter=isBinned,readonly) BOOL binned; 
@property (getter=isZoomSupported,readonly) BOOL zoomSupported; 
@property (readonly) float maxZoomFactor; 
@property (readonly) float zoomFactorUpscaleThreshold; 
@property (getter=isZoomDynamicSensorCropSupported,readonly) BOOL zoomDynamicSensorCropSupported; 
@property (readonly) int rawBitDepth; 
@property (readonly) float minISO; 
@property (readonly) float maxISO; 
@property (readonly) SCD_Struct_BW2 minExposureDuration; 
@property (readonly) SCD_Struct_BW2 maxExposureDuration; 
@property (readonly) BOOL hasSensorHDRCompanionIndex; 
@property (readonly) BOOL prefersSensorHDREnabled; 
@property (getter=isSIFRSupported,readonly) BOOL SIFRSupported; 
@property (getter=isLowLightVideoCaptureSupported,readonly) BOOL lowLightVideoCaptureSupported; 
@property (getter=isVariableFrameRateVideoCaptureSupported,readonly) BOOL variableFrameRateVideoCaptureSupported; 
@property (getter=isVisionDataDeliverySupported,readonly) BOOL visionDataDeliverySupported; 
@property (getter=isSecondaryScalerUnavailable,readonly) BOOL secondaryScalerUnavailable; 
@property (getter=isStudioAndContourPreviewRenderingSupported,readonly) BOOL studioAndContourPreviewRenderingSupported; 
@property (getter=isStagePreviewRenderingSupported,readonly) BOOL stagePreviewRenderingSupported; 
@property (getter=isWideAsStatsMasterEnabled,readonly) BOOL wideAsStatsMasterEnabled; 
@property (readonly) int autoFocusSystem; 
@property (getter=isPhotoFormat,readonly) BOOL photoFormat; 
@property (getter=isHighResPhotoFormat,readonly) BOOL highResPhotoFormat; 
@property (readonly) BOOL needsPreviewDPCC; 
@property (getter=isStillImageStabilizationSupported,readonly) BOOL stillImageStabilizationSupported; 
@property (readonly) BOOL configureForStillImageStabilizationSupport; 
@property (readonly) BOOL configureForSpatialOverCaptureSupport; 
@property (getter=isIrisSupported,readonly) BOOL irisSupported; 
@property (getter=isIrisVideoStabilizationSupported,readonly) BOOL irisVideoStabilizationSupported; 
@property (getter=isHDRSupported,readonly) BOOL hdrSupported; 
@property (getter=isHighResStillImageSupported,readonly) BOOL highResStillImageSupported; 
@property (getter=isQuadraHighResStillImageSupported,readonly) BOOL quadraHighResStillImageSupported; 
@property (getter=isStereoFusionSupported,readonly) BOOL stereoFusionSupported; 
@property (getter=isISPMultiBandNoiseReductionSupported,readonly) BOOL ispMultiBandNoiseReductionSupported; 
@property (getter=isStillImageISPMultiBandNoiseReductionSupported,readonly) BOOL stillImageISPMultiBandNoiseReductionSupported; 
@property (getter=isZeroShutterLagSupported,readonly) BOOL zeroShutterLagSupported; 
@property (readonly) BOOL zeroShutterLagRequiresUserInitiatedCaptureRequestTime; 
@property (getter=isRedEyeReductionSupported,readonly) BOOL redEyeReductionSupported; 
@property (getter=isDigitalFlashSupported,readonly) BOOL digitalFlashSupported; 
@property (readonly) SCD_Struct_BW19 highResStillImageDimensions; 
@property (getter=isWideColorSupported,readonly) BOOL wideColorSupported; 
@property (readonly) NSArray * supportedColorSpaces; 
@property (readonly) unsigned supportedRawPixelFormat; 
@property (readonly) float defaultSimulatedAperture; 
@property (readonly) float minSimulatedAperture; 
@property (readonly) float maxSimulatedAperture; 
@property (getter=isHighProfileH264Supported,readonly) BOOL highProfileH264Supported; 
@property (readonly) NSArray * AVCaptureSessionPresets; 
@property (getter=isStreamingDisparitySupported,readonly) BOOL streamingDisparitySupported; 
@property (getter=isStreamingDepthSupported,readonly) BOOL streamingDepthSupported; 
@property (getter=isStillImageDisparitySupported,readonly) BOOL stillImageDisparitySupported; 
@property (getter=isStillImageDepthSupported,readonly) BOOL stillImageDepthSupported; 
@property (readonly) NSArray * supportedDepthDataFormats; 
@property (readonly) float minZoomFactorForDepthDataDelivery; 
@property (readonly) float maxZoomFactorForDepthDataDelivery; 
@property (getter=isMomentCaptureMovieRecordingSupported,readonly) BOOL momentCaptureMovieRecordingSupported; 
@property (getter=isSpatialOverCaptureSupported,readonly) BOOL spatialOverCaptureSupported; 
@property (readonly) float spatialOverCapturePercentage; 
@property (readonly) SCD_Struct_BW19 spatialOverCaptureHighResStillImageDimensions; 
@property (getter=isNonDestructiveCropSupported,readonly) BOOL nonDestructiveCropSupported; 
@property (getter=isMultiCamSupported,readonly) BOOL multiCamSupported; 
@property (readonly) float hardwareCost; 
@property (readonly) int sensorPowerConsumption; 
@property (readonly) int baseSensorPowerConsumption; 
@property (readonly) int variableSensorPowerConsumption; 
@property (readonly) int ispPowerConsumption; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(id)initWithXPCEncoding:(id)arg1 ;
-(float)maxSupportedFrameRate;
-(int)horizontalSensorBinningFactor;
-(int)verticalSensorBinningFactor;
-(SCD_Struct_BW19)dimensions;
-(BOOL)isZoomSupported;
-(SCD_Struct_BW19)spatialOverCaptureHighResStillImageDimensions;
-(NSArray *)AVCaptureSessionPresets;
-(id)streamingDXDYDepthDataFormat;
-(SCD_Struct_BW19)previewDimensions;
-(float)spatialOverCapturePercentage;
-(BOOL)configureForStillImageStabilizationSupport;
-(BOOL)configureForSpatialOverCaptureSupport;
-(BOOL)isStudioAndContourPreviewRenderingSupported;
-(int)stabilizationTypeOverrideForStandard;
-(int)stabilizationTypeOverrideForCinematic;
-(BOOL)isPhotoFormat;
-(int)stillImageNoiseReductionAndStabilizationScheme;
-(BOOL)isStillImageStabilizationSupported;
-(SCD_Struct_BW19)highResStillImageDimensions;
-(int)redEyeReductionVersion;
-(BOOL)isCaptureTimePhotoCurationSupported;
-(BOOL)ispChromaNoiseReductionEnabled;
-(BOOL)isStereoFusionSupported;
-(BOOL)isIrisSupported;
-(BOOL)isHDRSupported;
-(BOOL)sushiRawBlackBorderingEnabled;
-(SCD_Struct_BW19)sensorCropDimensions;
-(int)rawBitDepth;
-(id)rawLensShadingCorrection;
-(SCD_Struct_BW19)_outputDimensions;
-(SCD_Struct_BW2)maxExposureDuration;
-(float)aeMaxGain;
-(BOOL)capturesStillsFromVideoStream;
-(int)formatIndex;
-(BOOL)isSecondaryScalerUnavailable;
-(id)frontEndScalerCompanionFormats;
-(SCD_Struct_BW19)nativeDimensions;
-(BOOL)isSIFRSupported;
-(id)nonSIFRCompanionFormat;
-(SCD_Struct_BW19)fesInputCropDimensions;
-(SCD_Struct_BW19)cropDimensionsForFES;
-(id)depthCompanionFormat;
-(BOOL)hasSensorHDRCompanionIndex;
-(int)sensorHDRCompanionIndex;
-(float)minSupportedFrameRate;
-(BOOL)isStillImageISPMultiBandNoiseReductionSupported;
-(int)autoFocusSystem;
-(CGRect)maxVisibleSensorRect;
-(BOOL)isWideAsStatsMasterEnabled;
-(BOOL)isQuadraHighResStillImageSupported;
-(BOOL)usesPacked10BitFirmwareStillImageOutputPixelFormat;
-(SCD_Struct_BW19)sourceCropAspectRatio;
-(int)fesBinningFactorHorizontal;
-(CGSize)stabilizationOverscanPercentageFromSensorForFESCropDimensions:(SCD_Struct_BW19)arg1 ;
-(float)stabilizationOverscanPercentageOverrideForCinematic;
-(int)temporalNoiseReductionMode;
-(BOOL)isStillImageISPChromaNoiseReductionEnabled;
-(BOOL)isISPMultiBandNoiseReductionSupported;
-(SCD_Struct_BW19)sensorDimensions;
-(float)lowLightVideoAEMaxGain;
-(int)maxIntegrationTimeOverride;
-(float)depthDataAEMaxGain;
-(float)depthDataMaxIntegrationTimeOverride;
-(BOOL)isLowLightVideoCaptureSupported;
-(BOOL)isZeroShutterLagSupported;
-(BOOL)zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
-(id)copyWithNewPixelFormat:(unsigned)arg1 ;
-(float)fieldOfView;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg1 ;
-(void)_resolveProperties;
-(float)defaultMaxFrameRate;
-(SCD_Struct_BW19)_maxUseableSensorDimensions;
-(SCD_Struct_BW19)_nativeDimensionsWithoutCrop;
-(SCD_Struct_BW19)_visibleSensorDimensionsIncludingCinematic:(BOOL)arg1 ;
-(float)minISO;
-(BOOL)isBinned;
-(SCD_Struct_BW19)_highQualitySensorDimensions;
-(BOOL)isHighResPhotoFormat;
-(BOOL)isHighResStillImageSupported;
-(NSArray *)supportedColorSpaces;
-(float)maxZoomFactor;
-(BOOL)isSpatialOverCaptureSupported;
-(BOOL)isStabilizationModeSupported:(int)arg1 ;
-(float)defaultMinFrameRate;
-(float)geometricDistortionCorrectedFieldOfView;
-(int)previewImageQueueSyncStrategy;
-(float)zoomFactorUpscaleThreshold;
-(BOOL)isZoomDynamicSensorCropSupported;
-(float)maxISO;
-(SCD_Struct_BW2)minExposureDuration;
-(BOOL)prefersSensorHDREnabled;
-(BOOL)isVariableFrameRateVideoCaptureSupported;
-(BOOL)isVisionDataDeliverySupported;
-(BOOL)isStagePreviewRenderingSupported;
-(BOOL)needsPreviewDPCC;
-(BOOL)isIrisVideoStabilizationSupported;
-(BOOL)isRedEyeReductionSupported;
-(BOOL)isDigitalFlashSupported;
-(BOOL)isWideColorSupported;
-(unsigned)supportedRawPixelFormat;
-(float)defaultSimulatedAperture;
-(float)minSimulatedAperture;
-(float)maxSimulatedAperture;
-(BOOL)isHighProfileH264Supported;
-(BOOL)isStreamingDisparitySupported;
-(BOOL)isStreamingDepthSupported;
-(BOOL)isStillImageDisparitySupported;
-(BOOL)isStillImageDepthSupported;
-(NSArray *)supportedDepthDataFormats;
-(float)minZoomFactorForDepthDataDelivery;
-(float)maxZoomFactorForDepthDataDelivery;
-(BOOL)isMomentCaptureMovieRecordingSupported;
-(BOOL)isNonDestructiveCropSupported;
-(BOOL)isMultiCamSupported;
-(float)hardwareCost;
-(int)sensorPowerConsumption;
-(int)baseSensorPowerConsumption;
-(int)variableSensorPowerConsumption;
-(int)ispPowerConsumption;
-(BOOL)isValidDerivedBravoFormatForUnderlyingFormat:(id)arg1 ;
-(BOOL)isCompatibleWithInfraredFormat:(id)arg1 ;
@end

