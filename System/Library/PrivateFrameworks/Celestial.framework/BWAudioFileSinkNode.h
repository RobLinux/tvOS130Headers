/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFileSinkNode.h>

@protocol OS_dispatch_queue;
@class FigStateMachine, FigCaptureAudioFileRecordingSettings, NSObject;

@interface BWAudioFileSinkNode : BWFileSinkNode {

	FigStateMachine* _stateMachine;
	OpaqueFigFormatWriterRef _formatWriter;
	OpaqueCMByteStreamRef _byteStream;
	int _trackID;
	BOOL _didBeginFileWriterSession;
	char* _parentPath;
	FigCaptureAudioFileRecordingSettings* _settings;
	SCD_Struct_BW2 _curFileDuration;
	unsigned long long _curFileSize;
	unsigned long long _adjustedMinFreeDiskSpace;
	NSObject*<OS_dispatch_queue> _propertySyncQueue;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithSinkID:(id)arg1 ;
-(void)_setupStateMachine;
-(void)_stopRecordingWithError:(int)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(int)_handleMarkerBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_applyRecordingLimits;
-(void)_updateFilePropertiesForSbuf:(opaqueCMSampleBufferRef)arg1 ;
-(int)_setupFileWriter;
-(void)_setupMinFreeDiskSpace;
-(int)_teardownFileWriter;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(SCD_Struct_BW2)lastFileDuration;
-(unsigned long long)lastFileSize;
@end

