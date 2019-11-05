/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSEndpointAnalyzer <NSObject>
@property (assign,nonatomic) long long endpointStyle; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double startWaitTime; 
@property (assign,nonatomic) double automaticEndpointingSuspensionEndTime; 
@property (assign,nonatomic) double minimumDurationForEndpointer; 
@property (nonatomic,readonly) double lastEndOfVoiceActivityTime; 
@property (nonatomic,readonly) double lastStartOfVoiceActivityTime; 
@property (assign,nonatomic) double bypassSamples; 
@property (assign,nonatomic) long long endpointMode; 
@property (assign,nonatomic) double interspeechWaitTime; 
@property (assign,nonatomic) double endWaitTime; 
@property (assign,nonatomic) BOOL saveSamplesSeenInReset; 
@optional
-(long long)endpointMode;
-(void)setEndpointMode:(long long)arg1;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1;
-(double)endWaitTime;
-(void)setEndWaitTime:(double)arg1;
-(double)bypassSamples;
-(void)setBypassSamples:(double)arg1;
-(BOOL)saveSamplesSeenInReset;
-(void)setSaveSamplesSeenInReset:(BOOL)arg1;

@required
-(double)delay;
-(void)setDelay:(double)arg1;
-(void)reset;
-(void)preheat;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1;
-(double)lastStartOfVoiceActivityTime;
-(double)lastEndOfVoiceActivityTime;
-(void)setAutomaticEndpointingSuspensionEndTime:(double)arg1;
-(double)automaticEndpointingSuspensionEndTime;
-(double)minimumDurationForEndpointer;
-(void)setMinimumDurationForEndpointer:(double)arg1;
-(long long)endpointStyle;
-(void)setEndpointStyle:(long long)arg1;

@end

