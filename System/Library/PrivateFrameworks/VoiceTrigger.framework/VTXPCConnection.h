/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTXPCService.h>

@class NSMutableSet, VTSiriPHash, NSString;

@interface VTXPCConnection : NSObject <VTXPCService> {

	NSMutableSet* _activationAssertions;
	BOOL _isPhraseSpotterBypassed;
	BOOL _isRecording;
	VTSiriPHash* _hasher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(oneway void)getTestResponse:(/*^block*/id)arg1 ;
-(oneway void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3 ;
-(oneway void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 timestamp:(double)arg3 ;
-(oneway void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 timestamp:(double)arg3 ;
-(oneway void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1 ;
-(oneway void)notifySecondChanceRequest;
-(oneway void)notifyTriggerEventRequest;
-(oneway void)queryLastTriggerEventTypeWithReply:(/*^block*/id)arg1 ;
-(oneway void)resetAssertions;
-(oneway void)clearVoiceTriggerCount;
-(oneway void)getVoiceTriggerCountWithReply:(/*^block*/id)arg1 ;
-(oneway void)getFirstChanceAudioBufferWithReply:(/*^block*/id)arg1 ;
-(oneway void)getFirstChanceVTEventInfoWithReply:(/*^block*/id)arg1 ;
-(oneway void)getFirstChanceTriggeredDateWithReply:(/*^block*/id)arg1 ;
-(oneway void)isLastTriggerFollowedBySpeechWithReply:(/*^block*/id)arg1 ;
-(oneway void)requestAudioCapture:(double)arg1 ;
-(oneway void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(/*^block*/id)arg1 ;
-(oneway void)requestCurrentBuiltInRTModelDictionaryWithReply:(/*^block*/id)arg1 ;
-(oneway void)setCurrentBuiltInRTModelDictionary:(id)arg1 ;
-(oneway void)enableTriggerEventXPCNotification:(BOOL)arg1 ;
-(void)handleDisconnect;
-(void)_setPhraseSpotterBypassing:(BOOL)arg1 ;
-(void)_setRaiseToSpeakBypassing:(BOOL)arg1 ;
@end

