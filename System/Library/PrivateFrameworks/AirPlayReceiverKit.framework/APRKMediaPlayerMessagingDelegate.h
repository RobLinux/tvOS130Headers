/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiverKit.framework/AirPlayReceiverKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol APRKMediaPlayerMessagingDelegate <NSObject>
@required
-(void)mediaPlayerNeedsTLSInfo:(id)arg1;
-(void)mediaPlayer:(id)arg1 wantsToUpdateStreamingTypeWithIsAudioValue:(BOOL)arg2;
-(void)mediaPlayer:(id)arg1 wantsToSendUpstreamMessageWithDictionary:(id)arg2;
-(void)mediaPlayer:(id)arg1 didGenerateFPSSecureStopRecordPayload:(id)arg2;

@end

