/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : NSObject {

	AVCaptureOutputInternal* _outputInternal;

}

@property (nonatomic,readonly) NSArray * connections; 
+(void)initialize;
+(id)availableVideoCodecTypesForSourceDevice:(id)arg1 sourceFormat:(id)arg2 outputDimensions:(SCD_Struct_AV41)arg3 fileType:(id)arg4 videoCodecTypesWhiteList:(id)arg5 ;
+(long long)dataDroppedReasonFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(id)session;
-(void)setSession:(id)arg1 ;
-(id)sinkID;
-(void)setSinkID:(id)arg1 ;
-(NSArray *)connections;
-(int)changeSeed;
-(id)initSubclass;
-(void)bumpChangeSeed;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(id)connectionWithMediaType:(id)arg1 ;
-(id)recommendedOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 videoCodecType:(id)arg3 fileType:(id)arg4 isIris:(BOOL)arg5 ;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)updateVideoSettingsForConnection:(id)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)removeConnection:(id)arg1 ;
-(id)liveConnections;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(void)performBlockOnSessionNotifyingThread:(/*^block*/id)arg1 ;
-(BOOL)hasRequiredOutputFormatForConnection:(id)arg1 ;
-(id)_inputForConnection:(id)arg1 ;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(void)updateMetadataTransformForSourceFormat:(id)arg1 ;
-(id)_recommendedVideoOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 videoCodec:(id)arg3 isIris:(BOOL)arg4 ;
-(id)_recommendedAudioOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 fileType:(id)arg3 ;
-(void)handleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(unsigned)requiredOutputFormatForConnection:(id)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 connection:(id)arg2 ;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(id)firstEnabledConnectionForMediaType:(id)arg1 ;
@end

