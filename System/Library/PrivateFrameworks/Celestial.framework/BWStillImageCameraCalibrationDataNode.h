/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary, NSSet, BWStillImageCaptureSettings, NSMutableDictionary, FigCalibration;

@interface BWStillImageCameraCalibrationDataNode : BWNode {

	NSDictionary* _sensorConfigurationsByPortType;
	BOOL _propagatesDetectedObjects;
	NSDictionary* _baseZoomFactorsByPortType;
	NSSet* _expectedPortTypes;
	BWStillImageCaptureSettings* _captureSettings;
	int _processingMode;
	NSMutableDictionary* _inputSbufsByPortType;
	FigCalibration* _calibrationProcessor;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)baseZoomFactorsByPortType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_clearCaptureRequestState;
-(void)setBaseZoomFactorsByPortType:(id)arg1 ;
-(id)initWithSensorConfigurationsByPortType:(id)arg1 ;
-(void)setPropagatesDetectedObjects:(BOOL)arg1 ;
-(void)_finishPendingProcessing;
-(int)_loadAndConfigureCalibrationBundle;
-(void)_resolveProcessingMode;
-(BOOL)_receivedExpectedInputsForCaptureRequest;
-(void)_computeCameraCalibrationDataBetweenReferenceSampleBuffer:(opaqueCMSampleBufferRef)arg1 auxiliarySampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_propagateDetectedObjects;
-(id)processorOptions;
-(id)_sensorConfigurationWithPortraitTuningParameters;
-(BOOL)propagatesDetectedObjects;
@end

