/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SDRDiagnosticReporter, NSObject;

@interface CSDiagnosticReporter : NSObject {

	SDRDiagnosticReporter* _reporter;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) SDRDiagnosticReporter * reporter;                //@synthesize reporter=_reporter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(SDRDiagnosticReporter *)reporter;
-(void)submitDiagnosticReportWithType:(id)arg1 withSubType:(id)arg2 withContext:(id)arg3 ;
-(void)setReporter:(SDRDiagnosticReporter *)arg1 ;
@end

