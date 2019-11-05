/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DASubCal/DATask.h>

@class DATaskManager, DAStatusReport, NSString;

@interface SubCalDATask : NSObject <DATask> {

	BOOL _finished;
	DATaskManager* _taskManager;
	DAStatusReport* _statusReport;

}

@property (assign,nonatomic) BOOL finished;                                   //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic,__weak) DATaskManager * taskManager;              //@synthesize taskManager=_taskManager - In the implementation block
@property (nonatomic,retain) DAStatusReport * statusReport;                   //@synthesize statusReport=_statusReport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)finished;
-(void)setFinished:(BOOL)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(DATaskManager *)taskManager;
-(void)setTaskManager:(DATaskManager *)arg1 ;
-(void)didFinish;
-(void)performTask;
-(DAStatusReport *)statusReport;
-(void)setStatusReport:(DAStatusReport *)arg1 ;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2 ;
-(BOOL)shouldHoldPowerAssertion;
-(id)consumerDictKey;
-(void)willFinish;
-(void)performDelegateCallbackWithError:(id)arg1 ;
@end

