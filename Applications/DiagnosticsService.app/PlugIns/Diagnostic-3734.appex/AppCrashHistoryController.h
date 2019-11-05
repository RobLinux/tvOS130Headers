/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:48:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3734.appex/Diagnostic-3734
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DKDiagnosticController.h>

@class AppCrashHistoryInputs;

@interface AppCrashHistoryController : DKDiagnosticController {

	AppCrashHistoryInputs* _inputs;

}

@property (nonatomic,retain) AppCrashHistoryInputs * inputs;              //@synthesize inputs=_inputs - In the implementation block
-(void)start;
-(AppCrashHistoryInputs *)inputs;
-(void)setInputs:(AppCrashHistoryInputs *)arg1 ;
-(void)setupWithInputs:(id)arg1 responder:(id)arg2 ;
-(id)appNameForBundleID:(id)arg1 ;
-(void)parseLogsWithCollector:(id)arg1 ;
-(id)userFriendlyAppNameForBundleID:(id)arg1 ;
@end

