/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BYFlowSkipController : NSObject
+(id)sharedInstance;
+(id)_supportedIdentifiers;
+(id)flowSkipIdentifiersFromFollowUpAction:(id)arg1 ;
-(id)init;
-(void)observeFinishSetupTriggers;
-(void)setBasicFunctionalityEnabled:(BOOL)arg1 ;
-(BOOL)_isBasicFunctionalityEnabled;
-(void)didSkipFlow:(id)arg1 ;
-(void)didCompleteFlow:(id)arg1 ;
-(void)cancelPendingFlows;
-(void)passcodeDidChange;
-(void)revisePendingFollowUps;
-(void)registerActivities;
@end

