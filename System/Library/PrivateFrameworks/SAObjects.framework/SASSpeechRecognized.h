/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASAudioAnalytics, NSNumber, SASRecognition, SAUIGetResponseAlternatives, NSString;

@interface SASSpeechRecognized : SABaseClientBoundCommand

@property (nonatomic,retain) SASAudioAnalytics * audioAnalytics; 
@property (assign,nonatomic) BOOL eager; 
@property (nonatomic,copy) NSNumber * processedAudioDuration; 
@property (nonatomic,retain) SASRecognition * recognition; 
@property (nonatomic,retain) SAUIGetResponseAlternatives * responseAlternatives; 
@property (nonatomic,copy) NSString * resultId; 
@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSString * title; 
+(id)speechRecognized;
+(id)speechRecognizedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_correctionContext;
-(id)af_userUtteranceValue;
-(id)af_bestTextInterpretation;
-(BOOL)af_isUtterance;
-(BOOL)af_isUserUtterance;
-(BOOL)af_waitsForConfirmation;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SASAudioAnalytics *)audioAnalytics;
-(void)setAudioAnalytics:(SASAudioAnalytics *)arg1 ;
-(BOOL)eager;
-(void)setEager:(BOOL)arg1 ;
-(NSNumber *)processedAudioDuration;
-(void)setProcessedAudioDuration:(NSNumber *)arg1 ;
-(SASRecognition *)recognition;
-(void)setRecognition:(SASRecognition *)arg1 ;
-(SAUIGetResponseAlternatives *)responseAlternatives;
-(void)setResponseAlternatives:(SAUIGetResponseAlternatives *)arg1 ;
-(NSString *)resultId;
-(void)setResultId:(NSString *)arg1 ;
@end

