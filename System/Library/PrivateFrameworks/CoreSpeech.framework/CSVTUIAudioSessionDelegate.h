/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSVTUIAudioSessionDelegate <NSObject>
@required
-(void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2;
-(void)audioSessionDidStopRecording:(long long)arg1;
-(void)audioSessionRecordBufferAvailable:(id)arg1;
-(void)audioSessionErrorDidOccur:(id)arg1;
-(void)audioSessionUnsupportedAudioRoute;

@end

