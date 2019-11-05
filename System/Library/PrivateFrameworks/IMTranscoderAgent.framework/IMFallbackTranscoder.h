/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMFallbackTranscoder_AudioMessage;

@interface IMFallbackTranscoder : NSObject {

	IMFallbackTranscoder_AudioMessage* _audioTranscoder;

}

@property (nonatomic,retain) IMFallbackTranscoder_AudioMessage * audioTranscoder;              //@synthesize audioTranscoder=_audioTranscoder - In the implementation block
-(void)dealloc;
-(id)_findPluginFallbackEncoder:(id)arg1 withBalloonBundleID:(id)arg2 ;
-(void)_transcodeAudioMessageContents:(id)arg1 utiType:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_transcodeAutoloopContents:(id)arg1 utiType:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(IMFallbackTranscoder_AudioMessage *)audioTranscoder;
-(void)transcodeFileTransferData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 inFileURL:(id)arg4 fallBack:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setAudioTranscoder:(IMFallbackTranscoder_AudioMessage *)arg1 ;
@end

