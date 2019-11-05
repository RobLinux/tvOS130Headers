/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:13:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libAXSpeechManager.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString, NSMutableArray;

@interface AXSpeechAction : NSObject {

	NSString* _string;
	double _pitch;
	double _volume;
	double _speakingRate;
	NSString* _language;
	BOOL _shouldQueue;
	BOOL _cannotInterrupt;
	BOOL _shouldDetectLanguage;
	BOOL _shouldProcessEmoji;
	BOOL _shouldProcessEmoticons;
	BOOL _shouldPrecomposeString;
	/*^block*/id _completionCallback;
	/*^block*/id _onPauseCallback;
	/*^block*/id _onResumeCallback;
	/*^block*/id _onWillSpeakRangeCallback;
	/*^block*/id _onSpeechStartCallback;
	BOOL _ignoreCustomSubstitutions;
	BOOL _synthesizeSilently;
	BOOL _useMonarchStyleSpeechRate;
	NSString* _voiceIdentifier;
	long long _state;
	/*^block*/id _audioBufferCallback;
	NSAttributedString* _attributedString;
	long long _wordCallbackPostProcessedOffset;
	NSString* _finalSpokenString;
	NSString* _processedString;
	NSMutableArray* _emojiRangeReplacements;

}

@property (nonatomic,retain) NSString * processedString;                             //@synthesize processedString=_processedString - In the implementation block
@property (nonatomic,retain) NSMutableArray * emojiRangeReplacements;                //@synthesize emojiRangeReplacements=_emojiRangeReplacements - In the implementation block
@property (assign,nonatomic) BOOL shouldQueue;                                       //@synthesize shouldQueue=_shouldQueue - In the implementation block
@property (assign,nonatomic) BOOL cannotInterrupt;                                   //@synthesize cannotInterrupt=_cannotInterrupt - In the implementation block
@property (assign,nonatomic) BOOL shouldDetectLanguage;                              //@synthesize shouldDetectLanguage=_shouldDetectLanguage - In the implementation block
@property (assign,nonatomic) BOOL shouldProcessEmoji;                                //@synthesize shouldProcessEmoji=_shouldProcessEmoji - In the implementation block
@property (assign,nonatomic) BOOL shouldProcessEmoticons;                            //@synthesize shouldProcessEmoticons=_shouldProcessEmoticons - In the implementation block
@property (assign,nonatomic) BOOL shouldPrecomposeString;                            //@synthesize shouldPrecomposeString=_shouldPrecomposeString - In the implementation block
@property (assign,nonatomic) BOOL ignoreCustomSubstitutions;                         //@synthesize ignoreCustomSubstitutions=_ignoreCustomSubstitutions - In the implementation block
@property (assign,nonatomic) BOOL synthesizeSilently;                                //@synthesize synthesizeSilently=_synthesizeSilently - In the implementation block
@property (nonatomic,retain) NSString * language;                                    //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSString * voiceIdentifier;                             //@synthesize voiceIdentifier=_voiceIdentifier - In the implementation block
@property (assign,nonatomic) long long state;                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id audioBufferCallback;                                   //@synthesize audioBufferCallback=_audioBufferCallback - In the implementation block
@property (nonatomic,copy) NSString * string;                                        //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedString;                    //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,copy) id completionCallback;                                    //@synthesize completionCallback=_completionCallback - In the implementation block
@property (nonatomic,copy) id onPauseCallback;                                       //@synthesize onPauseCallback=_onPauseCallback - In the implementation block
@property (nonatomic,copy) id onResumeCallback;                                      //@synthesize onResumeCallback=_onResumeCallback - In the implementation block
@property (nonatomic,copy) id onWillSpeakRangeCallback;                              //@synthesize onWillSpeakRangeCallback=_onWillSpeakRangeCallback - In the implementation block
@property (nonatomic,copy) id onSpeechStartCallback;                                 //@synthesize onSpeechStartCallback=_onSpeechStartCallback - In the implementation block
@property (assign,nonatomic) double speakingRate;                                    //@synthesize speakingRate=_speakingRate - In the implementation block
@property (assign,nonatomic) BOOL useMonarchStyleSpeechRate;                         //@synthesize useMonarchStyleSpeechRate=_useMonarchStyleSpeechRate - In the implementation block
@property (assign,nonatomic) double pitch;                                           //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double volume;                                          //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) long long wordCallbackPostProcessedOffset;              //@synthesize wordCallbackPostProcessedOffset=_wordCallbackPostProcessedOffset - In the implementation block
@property (nonatomic,retain) NSString * finalSpokenString;                           //@synthesize finalSpokenString=_finalSpokenString - In the implementation block
+(id)actionWithString:(id)arg1 shouldQueue:(BOOL)arg2 ;
+(id)actionWithAttributedString:(id)arg1 shouldQueue:(BOOL)arg2 ;
+(void)test_setUseMaxSpeechRate:(BOOL)arg1 ;
-(id)description;
-(id)init;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)language;
-(id)completionCallback;
-(void)setCompletionCallback:(id)arg1 ;
-(double)pitch;
-(void)setPitch:(double)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(NSAttributedString *)attributedString;
-(void)setAudioBufferCallback:(id)arg1 ;
-(id)audioBufferCallback;
-(BOOL)synthesizeSilently;
-(void)setSynthesizeSilently:(BOOL)arg1 ;
-(NSString *)voiceIdentifier;
-(void)setVoiceIdentifier:(NSString *)arg1 ;
-(void)setShouldQueue:(BOOL)arg1 ;
-(id)_detectLanguageFromContent;
-(void)setProcessedString:(NSString *)arg1 ;
-(NSString *)processedString;
-(void)preprocessAction;
-(BOOL)shouldQueue;
-(BOOL)cannotInterrupt;
-(void)setCannotInterrupt:(BOOL)arg1 ;
-(BOOL)shouldDetectLanguage;
-(void)setShouldDetectLanguage:(BOOL)arg1 ;
-(BOOL)shouldProcessEmoji;
-(void)setShouldProcessEmoji:(BOOL)arg1 ;
-(BOOL)shouldProcessEmoticons;
-(void)setShouldProcessEmoticons:(BOOL)arg1 ;
-(BOOL)shouldPrecomposeString;
-(void)setShouldPrecomposeString:(BOOL)arg1 ;
-(BOOL)ignoreCustomSubstitutions;
-(void)setIgnoreCustomSubstitutions:(BOOL)arg1 ;
-(id)onPauseCallback;
-(void)setOnPauseCallback:(id)arg1 ;
-(id)onResumeCallback;
-(void)setOnResumeCallback:(id)arg1 ;
-(id)onWillSpeakRangeCallback;
-(void)setOnWillSpeakRangeCallback:(id)arg1 ;
-(id)onSpeechStartCallback;
-(void)setOnSpeechStartCallback:(id)arg1 ;
-(double)speakingRate;
-(void)setSpeakingRate:(double)arg1 ;
-(BOOL)useMonarchStyleSpeechRate;
-(void)setUseMonarchStyleSpeechRate:(BOOL)arg1 ;
-(long long)wordCallbackPostProcessedOffset;
-(void)setWordCallbackPostProcessedOffset:(long long)arg1 ;
-(NSString *)finalSpokenString;
-(void)setFinalSpokenString:(NSString *)arg1 ;
-(NSMutableArray *)emojiRangeReplacements;
-(void)setEmojiRangeReplacements:(NSMutableArray *)arg1 ;
@end

