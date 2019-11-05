/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <EmbeddedAcousticRecognition/NSCopying.h>

@class NSDictionary;

@interface _EARAudioAnalytics : NSObject <NSCopying> {

	NSDictionary* _speechRecognitionFeatures;
	NSDictionary* _acousticFeatures;

}

@property (nonatomic,copy,readonly) NSDictionary * speechRecognitionFeatures;              //@synthesize speechRecognitionFeatures=_speechRecognitionFeatures - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * acousticFeatures;                       //@synthesize acousticFeatures=_acousticFeatures - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)acousticFeatures;
-(NSDictionary *)speechRecognitionFeatures;
-(id)_initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2 ;
@end

