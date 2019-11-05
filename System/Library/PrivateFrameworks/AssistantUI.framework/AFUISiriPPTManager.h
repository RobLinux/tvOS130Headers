/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface AFUISiriPPTManager : NSObject {

	BOOL _runningPPT;
	NSString* _currentTestName;
	NSDictionary* _testOptions;

}

@property (nonatomic,readonly) BOOL runningPPT;                              //@synthesize runningPPT=_runningPPT - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentTestName;              //@synthesize currentTestName=_currentTestName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * testOptions;              //@synthesize testOptions=_testOptions - In the implementation block
+(id)sharedManager;
-(void)reset;
-(NSDictionary *)testOptions;
-(NSString *)currentTestName;
-(void)setRunningPPT:(BOOL)arg1 withTestName:(id)arg2 testOptions:(id)arg3 ;
-(void)setRunningPPT:(BOOL)arg1 withTestName:(id)arg2 ;
-(BOOL)isRunningTestName:(id)arg1 ;
-(BOOL)runningPPT;
@end

