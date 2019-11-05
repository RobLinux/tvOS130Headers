/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NaturalLanguage/NLModelTrainerDelegate.h>

@class NSString;

@interface NLPModelTrainingDelegate : NSObject <NLModelTrainerDelegate> {

	/*^block*/id _logHandler;
	BOOL _stop;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modelTrainer:(id)arg1 logMessage:(id)arg2 ;
-(BOOL)modelTrainerShouldStop:(id)arg1 ;
-(id)initWithLogHandler:(/*^block*/id)arg1 ;
@end

