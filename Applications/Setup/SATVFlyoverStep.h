/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SATVBaseStep.h>

@protocol SATVStepDelegate;
@class SATVFlyoverViewController, NSString;

@interface SATVFlyoverStep : NSObject <SATVBaseStep> {

	id<SATVStepDelegate> stepDelegate;
	SATVFlyoverViewController* _flyoverViewController;

}

@property (nonatomic,retain) SATVFlyoverViewController * flyoverViewController;              //@synthesize flyoverViewController=_flyoverViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SATVStepDelegate> stepDelegate; 
+(void)initialize;
+(id)stepPresentationRecordKey;
-(void)autoAdvance;
-(id<SATVStepDelegate>)stepDelegate;
-(void)_sendStepCompletionNotification;
-(BOOL)executeStepForContext:(id)arg1 ;
-(void)setStepDelegate:(id<SATVStepDelegate>)arg1 ;
-(void)_enableFlyover:(BOOL)arg1 ;
-(void)_presentFlyoverController;
-(SATVFlyoverViewController *)flyoverViewController;
-(void)setFlyoverViewController:(SATVFlyoverViewController *)arg1 ;
@end

