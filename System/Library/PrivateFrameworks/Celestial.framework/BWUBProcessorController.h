/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorController.h>
#import <Celestial/BWUBProcessorInputDelegate.h>
#import <Celestial/UBProcessorDelegate.h>

@class BWUBProcessorControllerConfiguration, NSSet, FigStateMachine, UBProcessor, UBPrepareDescriptor, NSDictionary, NSMutableArray, BWUBProcessorRequest, NSString;

@interface BWUBProcessorController : BWStillImageProcessorController <BWUBProcessorInputDelegate, UBProcessorDelegate> {

	BWUBProcessorControllerConfiguration* _configuration;
	NSSet* _supportedPortTypes;
	FigStateMachine* _stateMachine;
	UBProcessor* _ubProcessor;
	UBPrepareDescriptor* _prepareDescriptor;
	Class _ubFusionOutputClass;
	Class _ubProgressiveBracketingStatisticsClass;
	Class _ubProgressiveBracketingParametersClass;
	NSDictionary* _adaptiveBracketingCaptureParametersByPortType;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	opaqueCMFormatDescriptionRef _inferenceInputFormatDescription;
	NSMutableArray* _requestQueue;
	BWUBProcessorRequest* _currentRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(unsigned long long)type;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)finishProcessingCurrentInputNow;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(BOOL)arg3 ;
-(id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg1 ;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 processOriginalImage:(BOOL)arg3 ;
-(void)cancelProcessing;
-(void)input:(id)arg1 addFrame:(opaqueCMSampleBufferRef)arg2 isReferenceFrame:(BOOL)arg3 ;
-(void)inputReceivedAllFrames:(id)arg1 ;
-(int)_loadSetupAndPrepareUBProcessor;
-(void)_resetProcessor;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(int)_setupProcessorForProcessingType:(unsigned)arg1 ;
-(int)_singleImageProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 sampleBufferOut:(opaqueCMSampleBuffer*)arg2 ;
-(void)_processUBFusion;
-(opaqueCMSampleBufferRef)_newOutputSampleBufferWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 pixelBuffer:(CVBufferRef)arg2 formatDescriptionInOut:(const opaqueCMFormatDescription*)arg3 metadataToMerge:(id)arg4 ;
-(void)processor:(id)arg1 outputReadyWithFrameType:(int)arg2 outputPixelBuffer:(CVBufferRef)arg3 outputMetadata:(id)arg4 ;
-(id)processorGetInferenceResults:(id)arg1 ;
-(void)processor:(id)arg1 didSelectFusionMode:(int)arg2 ;
-(void)_setupProcessor;
-(void)_processSingleImage;
-(void)_processUBOriginalImage;
-(void)_processLowLightFusion;
@end

