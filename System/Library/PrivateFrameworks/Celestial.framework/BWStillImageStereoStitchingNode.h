/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol MTLBuffer;
@class NSArray, FigWiredMemory, FigStillStereoStitchingProcessor, BWStillImageNodeConfiguration, BWNodeInput, BWNodeOutput, FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWNodeError, NSDictionary;

@interface BWStillImageStereoStitchingNode : BWNode {

	NSArray* _sensorConfigurations;
	id<MTLBuffer> _sharedMetalBuffer;
	FigWiredMemory* _sharedRegWarpBuffer;
	FigStillStereoStitchingProcessor* _processor;
	OpaqueVTPixelTransferSessionRef _pixelTransferSession;
	BWStillImageNodeConfiguration* _nodeConfiguration;
	float _overCaptureMultiplier;
	BWNodeInput* _wideFieldOfViewInput;
	BWNodeInput* _narrowFieldOfViewInput;
	BWNodeOutput* _overCaptureOutput;
	BWNodeOutput* _narrowFieldOfViewOutput;
	opaqueCMFormatDescriptionRef _outputSbufFormatDescription;
	FigCaptureStillImageSettings* _currentRequestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	int _overCaptureMode;
	opaqueCMSampleBufferRef _wideFieldOfViewSbuf;
	opaqueCMSampleBufferRef _narrowFieldOfViewSbuf;
	BWNodeError* _wideFieldOfViewError;
	BWNodeError* _narrowFieldOfViewError;
	NSDictionary* _baseZoomFactorByPortType;
	BOOL _stereoStitchingEnabled;

}

@property (nonatomic,readonly) BWNodeInput * wideFieldOfViewInput;                  //@synthesize wideFieldOfViewInput=_wideFieldOfViewInput - In the implementation block
@property (nonatomic,readonly) BWNodeInput * narrowFieldOfViewInput;                //@synthesize narrowFieldOfViewInput=_narrowFieldOfViewInput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * overCaptureOutput;                    //@synthesize overCaptureOutput=_overCaptureOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * narrowFieldOfViewOutput;              //@synthesize narrowFieldOfViewOutput=_narrowFieldOfViewOutput - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setSharedMetalBuffer:(id)arg1 ;
-(id)sharedMetalBuffer;
-(void)setSharedRegWarpBuffer:(id)arg1 ;
-(id)sharedRegWarpBuffer;
-(id)_processorOptions;
-(void)_clearCaptureRequestState;
-(id)initWithNodeConfiguration:(id)arg1 sensorConfigurations:(id)arg2 overCapturePercentage:(float)arg3 overCaptureOutputDimensions:(SCD_Struct_BW19)arg4 stereoStitchingEnabled:(BOOL)arg5 ;
-(BWNodeInput *)wideFieldOfViewInput;
-(BWNodeInput *)narrowFieldOfViewInput;
-(BWNodeOutput *)narrowFieldOfViewOutput;
-(BWNodeOutput *)overCaptureOutput;
-(int)_processDualCameraStereoStitchingWithOutputSampleBuffer:(opaqueCMSampleBufferRef)arg1 primaryImageZoomCropRect:(CGRect)arg2 overCaptureImageTypeOut:(int*)arg3 overCaptureImageConfidenceScoreOut:(unsigned*)arg4 ;
-(int)_processSingleCameraOverCaptureWithOutputSampleBuffer:(opaqueCMSampleBufferRef)arg1 primaryImageZoomCropRect:(CGRect)arg2 overCaptureImageTypeOut:(int*)arg3 overCaptureImageConfidenceScoreOut:(unsigned*)arg4 ;
-(BOOL)_horizonLinePresentInSampleBuffer:(opaqueCMSampleBufferRef)arg1 horizonLineAngleInDegreesOut:(float*)arg2 horizonLineVerticalCenterlineIntersectionOut:(float*)arg3 ;
-(void)_addOverCaptureImageMetadataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 metadata:(id)arg2 ;
-(int)_scaleInputPixelBuffer:(CVBufferRef)arg1 inputRect:(CGRect)arg2 outputPixelBuffer:(CVBufferRef)arg3 outputDimensions:(SCD_Struct_BW19)arg4 ;
-(int)_generatePartialOverCaptureImageFromInputPixelBuffer:(CVBufferRef)arg1 outputPixelBuffer:(CVBufferRef)arg2 primaryImageZoomCropRect:(CGRect)arg3 validBufferRect:(CGRect)arg4 ;
-(int)_generateFallbackOverCaptureImageWithWide:(opaqueCMSampleBufferRef)arg1 narrowSbuf:(opaqueCMSampleBufferRef)arg2 outputSbuf:(opaqueCMSampleBufferRef)arg3 primaryImageZoomCropRect:(CGRect)arg4 onlyCrop:(BOOL)arg5 ;
-(float)_zoomAdjustedHorizonLineVerticalCenterlineIntersection:(float)arg1 finalCropRect:(CGRect)arg2 ;
-(int)_loadAndConfigureProcessor;
-(void)_configureCurrentCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 ;
-(void)_emitNodeErrorForError:(int)arg1 fromNodeOutput:(id)arg2 ;
-(void)_processOverCaptureIfNecessary;
@end

