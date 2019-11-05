/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <Siri/VSSpeechSynthesizerDelegate.h>

@protocol SAAceCommand;
@class VSSpeechSynthesizer, AFVoiceInfo, NSError, NSArray, NSMutableArray, NSMutableDictionary, SAPreSynthesizeTTS, AceObject, NSString;

@interface SRPreSynthesisTask : NSObject <VSSpeechSynthesizerDelegate> {

	VSSpeechSynthesizer* _speechSynthesizer;
	AFVoiceInfo* _outputVoice;
	NSError* _currentError;
	NSArray* _parsedDialogStringsForPreSynthesis;
	NSMutableArray* _preSynthesizedTTSAudioDurations;
	NSMutableDictionary* _parsedDialogStringIndicies;
	SAPreSynthesizeTTS* _preSynthesizeTTSCommand;
	/*^block*/id _completion;
	AceObject*<SAAceCommand> _replyAceCommand;

}

@property (nonatomic,retain) AceObject*<SAAceCommand> replyAceCommand;                  //@synthesize replyAceCommand=_replyAceCommand - In the implementation block
@property (nonatomic,retain) SAPreSynthesizeTTS * preSynthesizeTTSCommand;              //@synthesize preSynthesizeTTSCommand=_preSynthesizeTTSCommand - In the implementation block
@property (nonatomic,copy) id completion;                                               //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4 ;
-(void)setPreSynthesizeTTSCommand:(SAPreSynthesizeTTS *)arg1 ;
-(AceObject*<SAAceCommand>)replyAceCommand;
-(BOOL)handlePreSynthesisCommandWithError:(id*)arg1 ;
-(SAPreSynthesizeTTS *)preSynthesizeTTSCommand;
-(void)setReplyAceCommand:(AceObject*<SAAceCommand>)arg1 ;
@end
