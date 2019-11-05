/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SATVBaseStep.h>

@protocol SATVStepDelegate;
@class SATVAppAnalyticsController, NSString;

@interface SATVAppAnalyticsStep : NSObject <SATVBaseStep> {

	id<SATVStepDelegate> stepDelegate;
	SATVAppAnalyticsController* _appAnalyticsController;

}

@property (nonatomic,retain) SATVAppAnalyticsController * appAnalyticsController;              //@synthesize appAnalyticsController=_appAnalyticsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SATVStepDelegate> stepDelegate; 
+(void)initialize;
+(id)stepPresentationRecordKey;
-(void)_presentAppAnalyticsController;
-(SATVAppAnalyticsController *)appAnalyticsController;
-(void)autoAdvance;
-(id<SATVStepDelegate>)stepDelegate;
-(void)_sendStepCompletionNotification;
-(void)setAppAnalyticsController:(SATVAppAnalyticsController *)arg1 ;
-(BOOL)executeStepForContext:(id)arg1 ;
-(void)setStepDelegate:(id<SATVStepDelegate>)arg1 ;
@end

