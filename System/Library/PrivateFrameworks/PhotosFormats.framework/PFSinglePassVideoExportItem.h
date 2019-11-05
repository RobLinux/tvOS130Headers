/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;
#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSString, NSProgress, NSArray, NSObject, AVAsset, AVAssetTrack, NSFileHandle, NSURL, PFSinglePassVideoExportItemStatistics, PFProportionalIntegralController, AVAssetReader, AVAssetReaderTrackOutput, AVAssetWriter, AVAssetWriterInput, PFVideoExportRangeCoordinator;

@interface PFSinglePassVideoExportItem : NSObject {

	BOOL _shouldDeleteDestinationURLOnDeallocation;
	BOOL _needsCurrentEncodingBitRateUpdate;
	BOOL _maximizePowerEfficiency;
	NSString* _identifier;
	unsigned long long _targetOutputFileSize;
	NSProgress* _progress;
	NSArray* _additionalMetadata;
	unsigned long long _state;
	NSObject*<OS_dispatch_queue> _stateQueue;
	AVAsset* _inputAsset;
	AVAssetTrack* _videoTrack;
	NSArray* _additionalTracks;
	NSFileHandle* _conversionOutputFileHandle;
	NSURL* _destinationFileURL;
	unsigned long long _outputFileLastEndOffset;
	long long _targetOutputMediaDataSize;
	PFSinglePassVideoExportItemStatistics* _statistics;
	PFProportionalIntegralController* _bitRateController;
	AVAssetReader* _assetReader;
	AVAssetReaderTrackOutput* _videoReaderTrackOutput;
	NSArray* _additionalReaderTrackOutputs;
	AVAssetWriter* _assetWriter;
	AVAssetWriterInput* _videoWriterInput;
	NSArray* _additionalWriterInputs;
	NSObject*<OS_dispatch_source> _outputFileSizeChangeSource;
	unsigned long long _minimumChunkLength;
	NSObject*<OS_dispatch_group> _inputReadingCompletionGroup;
	PFVideoExportRangeCoordinator* _availableRangeCoordinator;
	OpaqueVTCompressionSessionRef _compressionSession;
	long long _currentEncodingBitRate;

}

@property (retain) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long state;                                               //@synthesize state=_state - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> stateQueue;                                //@synthesize stateQueue=_stateQueue - In the implementation block
@property (retain) AVAsset * inputAsset;                                                   //@synthesize inputAsset=_inputAsset - In the implementation block
@property (retain) AVAssetTrack * videoTrack;                                              //@synthesize videoTrack=_videoTrack - In the implementation block
@property (retain) NSArray * additionalTracks;                                             //@synthesize additionalTracks=_additionalTracks - In the implementation block
@property (retain) NSFileHandle * conversionOutputFileHandle;                              //@synthesize conversionOutputFileHandle=_conversionOutputFileHandle - In the implementation block
@property (retain) NSURL * destinationFileURL;                                             //@synthesize destinationFileURL=_destinationFileURL - In the implementation block
@property (assign) BOOL shouldDeleteDestinationURLOnDeallocation;                          //@synthesize shouldDeleteDestinationURLOnDeallocation=_shouldDeleteDestinationURLOnDeallocation - In the implementation block
@property (assign) unsigned long long outputFileLastEndOffset;                             //@synthesize outputFileLastEndOffset=_outputFileLastEndOffset - In the implementation block
@property (assign,nonatomic) unsigned long long targetOutputFileSize;                      //@synthesize targetOutputFileSize=_targetOutputFileSize - In the implementation block
@property (assign) long long targetOutputMediaDataSize;                                    //@synthesize targetOutputMediaDataSize=_targetOutputMediaDataSize - In the implementation block
@property (retain) PFSinglePassVideoExportItemStatistics * statistics;                     //@synthesize statistics=_statistics - In the implementation block
@property (retain) PFProportionalIntegralController * bitRateController;                   //@synthesize bitRateController=_bitRateController - In the implementation block
@property (retain) AVAssetReader * assetReader;                                            //@synthesize assetReader=_assetReader - In the implementation block
@property (retain) AVAssetReaderTrackOutput * videoReaderTrackOutput;                      //@synthesize videoReaderTrackOutput=_videoReaderTrackOutput - In the implementation block
@property (retain) NSArray * additionalReaderTrackOutputs;                                 //@synthesize additionalReaderTrackOutputs=_additionalReaderTrackOutputs - In the implementation block
@property (retain) AVAssetWriter * assetWriter;                                            //@synthesize assetWriter=_assetWriter - In the implementation block
@property (retain) AVAssetWriterInput * videoWriterInput;                                  //@synthesize videoWriterInput=_videoWriterInput - In the implementation block
@property (retain) NSArray * additionalWriterInputs;                                       //@synthesize additionalWriterInputs=_additionalWriterInputs - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> outputFileSizeChangeSource;               //@synthesize outputFileSizeChangeSource=_outputFileSizeChangeSource - In the implementation block
@property (assign) unsigned long long minimumChunkLength;                                  //@synthesize minimumChunkLength=_minimumChunkLength - In the implementation block
@property (retain) NSProgress * progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> inputReadingCompletionGroup;               //@synthesize inputReadingCompletionGroup=_inputReadingCompletionGroup - In the implementation block
@property (retain) PFVideoExportRangeCoordinator * availableRangeCoordinator;              //@synthesize availableRangeCoordinator=_availableRangeCoordinator - In the implementation block
@property (assign) OpaqueVTCompressionSessionRef compressionSession;                       //@synthesize compressionSession=_compressionSession - In the implementation block
@property (assign) long long currentEncodingBitRate;                                       //@synthesize currentEncodingBitRate=_currentEncodingBitRate - In the implementation block
@property (assign) BOOL needsCurrentEncodingBitRateUpdate;                                 //@synthesize needsCurrentEncodingBitRateUpdate=_needsCurrentEncodingBitRateUpdate - In the implementation block
@property (assign) BOOL maximizePowerEfficiency;                                           //@synthesize maximizePowerEfficiency=_maximizePowerEfficiency - In the implementation block
@property (nonatomic,copy) NSArray * additionalMetadata;                                   //@synthesize additionalMetadata=_additionalMetadata - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(PFSinglePassVideoExportItemStatistics *)statistics;
-(BOOL)maximizePowerEfficiency;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(void)_cancel;
-(BOOL)preflight;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStatistics:(PFSinglePassVideoExportItemStatistics *)arg1 ;
-(NSURL *)destinationFileURL;
-(void)setDestinationFileURL:(NSURL *)arg1 ;
-(AVAssetReader *)assetReader;
-(AVAssetWriter *)assetWriter;
-(void)setTargetOutputFileSize:(unsigned long long)arg1 ;
-(BOOL)startConversionWithError:(id*)arg1 outputAvailableHandler:(/*^block*/id)arg2 ;
-(id)outputDataInRange:(NSRange)arg1 waitUntilAvailableWithTimeout:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setupConversionWithError:(id*)arg1 ;
-(void)configureDroppableFrameRateForCompressionSession:(OpaqueVTCompressionSessionRef)arg1 inputWidth:(int)arg2 inputHeight:(int)arg3 ;
-(long long)estimatedOutputBitRate;
-(void)startReadingInputAssetWithOutputAvailableHandler:(/*^block*/id)arg1 ;
-(void)processCompressedSampleBuffer:(opaqueCMSampleBufferRef)arg1 presentationTimeStamp:(SCD_Struct_PF3)arg2 ;
-(void)setupOutputFileSourceWithOutputAvailableHandler:(/*^block*/id)arg1 ;
-(void)notifyDataAvailableToHandler:(/*^block*/id)arg1 ignoreMinimumChunkLength:(BOOL)arg2 ;
-(id)bitRateControllerForTargetEncodingBitRate:(long long)arg1 ;
-(double)inputAssetDuration;
-(unsigned long long)targetOutputFileSize;
-(NSArray *)additionalMetadata;
-(void)setAdditionalMetadata:(NSArray *)arg1 ;
-(AVAsset *)inputAsset;
-(void)setInputAsset:(AVAsset *)arg1 ;
-(AVAssetTrack *)videoTrack;
-(void)setVideoTrack:(AVAssetTrack *)arg1 ;
-(NSArray *)additionalTracks;
-(void)setAdditionalTracks:(NSArray *)arg1 ;
-(NSFileHandle *)conversionOutputFileHandle;
-(void)setConversionOutputFileHandle:(NSFileHandle *)arg1 ;
-(BOOL)shouldDeleteDestinationURLOnDeallocation;
-(void)setShouldDeleteDestinationURLOnDeallocation:(BOOL)arg1 ;
-(unsigned long long)outputFileLastEndOffset;
-(void)setOutputFileLastEndOffset:(unsigned long long)arg1 ;
-(long long)targetOutputMediaDataSize;
-(void)setTargetOutputMediaDataSize:(long long)arg1 ;
-(PFProportionalIntegralController *)bitRateController;
-(void)setBitRateController:(PFProportionalIntegralController *)arg1 ;
-(void)setAssetReader:(AVAssetReader *)arg1 ;
-(AVAssetReaderTrackOutput *)videoReaderTrackOutput;
-(void)setVideoReaderTrackOutput:(AVAssetReaderTrackOutput *)arg1 ;
-(NSArray *)additionalReaderTrackOutputs;
-(void)setAdditionalReaderTrackOutputs:(NSArray *)arg1 ;
-(void)setAssetWriter:(AVAssetWriter *)arg1 ;
-(AVAssetWriterInput *)videoWriterInput;
-(void)setVideoWriterInput:(AVAssetWriterInput *)arg1 ;
-(NSArray *)additionalWriterInputs;
-(void)setAdditionalWriterInputs:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_source>)outputFileSizeChangeSource;
-(void)setOutputFileSizeChangeSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long long)minimumChunkLength;
-(void)setMinimumChunkLength:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_group>)inputReadingCompletionGroup;
-(void)setInputReadingCompletionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(PFVideoExportRangeCoordinator *)availableRangeCoordinator;
-(void)setAvailableRangeCoordinator:(PFVideoExportRangeCoordinator *)arg1 ;
-(OpaqueVTCompressionSessionRef)compressionSession;
-(void)setCompressionSession:(OpaqueVTCompressionSessionRef)arg1 ;
-(long long)currentEncodingBitRate;
-(void)setCurrentEncodingBitRate:(long long)arg1 ;
-(BOOL)needsCurrentEncodingBitRateUpdate;
-(void)setNeedsCurrentEncodingBitRateUpdate:(BOOL)arg1 ;
@end

