/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SATVBaseStep.h>

@protocol SATVStepDelegate;
@class SATVLanguageController, NSString;

@interface SATVLanguageStep : NSObject <SATVBaseStep> {

	id<SATVStepDelegate> stepDelegate;
	SATVLanguageController* _languageController;

}

@property (nonatomic,retain) SATVLanguageController * languageController;              //@synthesize languageController=_languageController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SATVStepDelegate> stepDelegate; 
+(void)initialize;
+(id)stepPresentationRecordKey;
-(void)autoAdvance;
-(id<SATVStepDelegate>)stepDelegate;
-(BOOL)executeStepForContext:(id)arg1 ;
-(void)setStepDelegate:(id<SATVStepDelegate>)arg1 ;
-(BOOL)_didLockdownSetLanguage;
-(void)_resetLanguageIfRequiredForContext:(id)arg1 ;
-(void)_presentLanguageController;
-(SATVLanguageController *)languageController;
-(void)_sendStepCompletionNotificationWithLanguageCode:(id)arg1 ;
-(void)setLanguageController:(SATVLanguageController *)arg1 ;
@end
