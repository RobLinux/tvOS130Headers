/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASSpeechRecognitionComplete : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * sessionId; 
+(id)speechRecognitionComplete;
+(id)speechRecognitionCompleteWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

