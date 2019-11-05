/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXLoggingSubsystem : NSObject {

	BOOL _ignoreLogging;

}

@property (assign,nonatomic) BOOL ignoreLogging; 
+(void)initialize;
+(id)sharedInstance;
+(id)identifier;
+(double)threshold;
+(id)subsystems;
+(id)errorWithDescription:(id)arg1 ;
+(void)initializeSubsytem;
+(id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2 ;
+(id)wrapError:(id)arg1 description:(id)arg2 ;
+(BOOL)shouldIncludeBacktraceInLogs;
+(BOOL)shouldIncludeFileLineAndFunctionInLogs;
+(BOOL)shouldProcessMessageForLogs;
+(int)defaultLogLevel;
+(BOOL)willLog;
+(BOOL)willLogInfo;
+(BOOL)willLogDebug;
-(BOOL)ignoreLogging;
-(void)setIgnoreLogging:(BOOL)arg1 ;
@end

