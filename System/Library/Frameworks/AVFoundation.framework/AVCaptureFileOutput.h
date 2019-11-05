/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@protocol AVCaptureFileOutputDelegate;
@class AVCaptureFileOutputInternal, NSURL;

@interface AVCaptureFileOutput : AVCaptureOutput {

	AVCaptureFileOutputInternal* _fileOutputInternal;
	id<AVCaptureFileOutputDelegate> _delegate;

}

@property (assign,nonatomic) id<AVCaptureFileOutputDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * outputFileURL; 
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (getter=isRecordingPaused,nonatomic,readonly) BOOL recordingPaused; 
@property (nonatomic,readonly) SCD_Struct_AV7 recordedDuration; 
@property (nonatomic,readonly) long long recordedFileSize; 
@property (assign,nonatomic) SCD_Struct_AV7 maxRecordedDuration; 
@property (assign,nonatomic) long long maxRecordedFileSize; 
@property (assign,nonatomic) long long minFreeDiskSpaceLimit; 
+(void)initialize;
-(void)dealloc;
-(id<AVCaptureFileOutputDelegate>)delegate;
-(void)setDelegate:(id<AVCaptureFileOutputDelegate>)arg1 ;
-(long long)minFreeDiskSpaceLimit;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)setMinFreeDiskSpaceLimit:(long long)arg1 ;
-(void)stopRecording;
-(BOOL)isRecording;
-(id)initSubclass;
-(NSURL *)outputFileURL;
-(SCD_Struct_AV7)maxRecordedDuration;
-(long long)maxRecordedFileSize;
-(BOOL)pausesRecordingOnInterruption;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(BOOL)isRecordingPaused;
-(void)setPausesRecordingOnInterruption:(BOOL)arg1 ;
-(SCD_Struct_AV7)recordedDuration;
-(long long)recordedFileSize;
-(void)setMaxRecordedDuration:(SCD_Struct_AV7)arg1 ;
-(void)setMaxRecordedFileSize:(long long)arg1 ;
@end

