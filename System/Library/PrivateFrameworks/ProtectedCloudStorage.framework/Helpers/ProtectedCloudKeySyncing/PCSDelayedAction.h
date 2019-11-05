/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/Helpers/ProtectedCloudKeySyncing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
@class NSObject, NSOperationQueue;

@interface PCSDelayedAction : NSObject {

	BOOL _running;
	/*^block*/id _actionOnTrigger;
	unsigned long long _delayInSeconds;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_source> _waitSource;
	NSObject*<OS_os_transaction> _pendingTransaction;
	long long _noTransaction;

}

@property (copy) id actionOnTrigger;                                             //@synthesize actionOnTrigger=_actionOnTrigger - In the implementation block
@property (assign) unsigned long long delayInSeconds;                            //@synthesize delayInSeconds=_delayInSeconds - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (retain) NSOperationQueue * operationQueue;                            //@synthesize operationQueue=_operationQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> waitSource;                     //@synthesize waitSource=_waitSource - In the implementation block
@property (retain) NSObject*<OS_os_transaction> pendingTransaction;              //@synthesize pendingTransaction=_pendingTransaction - In the implementation block
@property (assign) long long noTransaction;                                      //@synthesize noTransaction=_noTransaction - In the implementation block
@property (assign) BOOL running;                                                 //@synthesize running=_running - In the implementation block
-(void)run;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)trigger;
-(void)setAction:(/*^block*/id)arg1 ;
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
-(NSObject*<OS_os_transaction>)pendingTransaction;
-(unsigned long long)delayInSeconds;
-(void)setDelayInSeconds:(unsigned long long)arg1 ;
-(id)initWithDelay:(unsigned long long)arg1 operationQueue:(id)arg2 ;
-(void)setHoldTransaction:(BOOL)arg1 ;
-(id)actionOnTrigger;
-(void)setActionOnTrigger:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)waitSource;
-(void)setWaitSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setPendingTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(long long)noTransaction;
-(void)setNoTransaction:(long long)arg1 ;
@end

