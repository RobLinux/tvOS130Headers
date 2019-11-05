/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <Celestial/BWNodeBackPressureSource.h>

@protocol OS_dispatch_semaphore;
@class NSDictionary, FigStreamingStereoStitchingProcessor, NSMutableDictionary, NSObject, NSString;

@interface BWVideoStitcherNode : BWNode <BWNodeBackPressureSource> {

	NSDictionary* _sensorIDDictionaryByPortType;
	FigStreamingStereoStitchingProcessor* _stereoStitchingProcessor;
	NSMutableDictionary* _stereoStitchingOptions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	NSObject*<OS_dispatch_semaphore> _emitSampleBufferSemaphore;
	Class _stitchingOutputClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> emitSampleBufferSemaphore; 
+(void)initialize;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)_setupAttachedMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(void)_setupDepthMediaConfigurationForInput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(int)_loadAndConfigureVideoStitchingBundle;
-(id)_processorOptions;
-(NSObject*<OS_dispatch_semaphore>)emitSampleBufferSemaphore;
-(void)setEmitSampleBufferSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)initWithSensorIDDictionaryByPortType:(id)arg1 expectDepth:(BOOL)arg2 ;
@end

