/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWNodeFileWriterStatusDelegate <NSObject>
@required
-(void)fileWriter:(id)arg1 startedRecordingForSettings:(id)arg2 writerPipelineIndex:(unsigned long long)arg3;
-(void)fileWriter:(id)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2;
-(void)fileWriter:(id)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2;
-(void)fileWriter:(id)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingForSettings:(id)arg3 withError:(int)arg4 thumbnailSurface:(IOSurfaceRef)arg5 irisMovieInfo:(id)arg6 debugMetadataSidecarFileURL:(id)arg7 recordingSucceeded:(BOOL)arg8;
-(void)fileWriter:(id)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingSampleDataForSettingsID:(long long)arg3;

@end

