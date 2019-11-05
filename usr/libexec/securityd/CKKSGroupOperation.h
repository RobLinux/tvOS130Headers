/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:50 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/CKKSResultOperation.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, NSBlockOperation, NSObject, NSMutableArray;

@interface CKKSGroupOperation : CKKSResultOperation {

	BOOL executing;
	BOOL finished;
	BOOL _fillInError;
	NSOperationQueue* _operationQueue;
	NSBlockOperation* _startOperation;
	NSBlockOperation* _finishOperation;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _internalSuccesses;

}

@property (assign) BOOL fillInError;                                //@synthesize fillInError=_fillInError - In the implementation block
@property (retain) NSBlockOperation * startOperation;               //@synthesize startOperation=_startOperation - In the implementation block
@property (retain) NSBlockOperation * finishOperation;              //@synthesize finishOperation=_finishOperation - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) NSMutableArray * internalSuccesses;              //@synthesize internalSuccesses=_internalSuccesses - In the implementation block
@property (retain) NSOperationQueue * operationQueue;               //@synthesize operationQueue=_operationQueue - In the implementation block
+(id)named:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)named:(id)arg1 withBlockTakingSelf:(/*^block*/id)arg2 ;
+(id)operationWithBlock:(/*^block*/id)arg1 ;
-(void)groupStart;
-(void)runBeforeGroupFinished:(id)arg1 ;
-(void)dependOnBeforeGroupFinished:(id)arg1 ;
-(BOOL)fillInError;
-(void)setFillInError:(BOOL)arg1 ;
-(void)setStartOperation:(NSBlockOperation *)arg1 ;
-(NSMutableArray *)internalSuccesses;
-(void)setInternalSuccesses:(NSMutableArray *)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setName:(id)arg1 ;
-(void)cancel;
-(void)start;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)addDependency:(id)arg1 ;
-(BOOL)isPending;
-(NSBlockOperation *)startOperation;
-(void)completeOperation;
-(NSBlockOperation *)finishOperation;
-(void)setFinishOperation:(NSBlockOperation *)arg1 ;
@end
