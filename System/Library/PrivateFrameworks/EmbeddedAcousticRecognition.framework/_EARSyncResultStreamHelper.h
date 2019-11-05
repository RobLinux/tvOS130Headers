/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/_EARSpeechRecognitionResultStream.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSError, NSArray, NSString;

@interface _EARSyncResultStreamHelper : NSObject <_EARSpeechRecognitionResultStream> {

	NSObject*<OS_dispatch_semaphore> _finishSemaphore;
	NSError* _error;
	NSArray* _results;

}

@property (nonatomic,readonly) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSArray * results;                   //@synthesize results=_results - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSError *)error;
-(NSArray *)results;
-(void)waitForCompletion;
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 ;
@end

