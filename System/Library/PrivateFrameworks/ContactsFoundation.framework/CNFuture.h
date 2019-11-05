/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNFuture.h>

@protocol CNFuture <NSObject>
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@required
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2;
-(id)result:(id*)arg1;
-(void)addSuccessBlock:(/*^block*/id)arg1;
-(void)addFailureBlock:(/*^block*/id)arg1;
-(id)flatMap:(/*^block*/id)arg1;
-(id)recover:(/*^block*/id)arg1;
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2;

@end

#import <ContactsFoundation/CNPromise.h>

@protocol CNFutureImpl;
@class NSMutableArray, NSString;

@interface CNFuture : NSObject <CNFuture, CNPromise> {

	id<CNFutureImpl> _impl;
	NSMutableArray* _calculationDependencies;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
+(id)future;
+(id)futureWithResult:(id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 schedulerProvider:(id)arg3 ;
+(void)finishPromise:(id)arg1 withFuture:(id)arg2 ;
+(id)chain:(id)arg1 ;
+(id)flatMap:(id)arg1 withBlock:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
+(id)recover:(id)arg1 withBlock:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
+(id)promiseFuture;
+(id)futureWithError:(id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)sequence:(id)arg1 ;
+(id)join:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)_flushCompletionBlocks;
-(void)didCancel;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)result:(id*)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(id)initWithImpl:(id)arg1 ;
-(id)flatMap:(/*^block*/id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(id)flatMap:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(/*^block*/id)completionHandlerAdapter;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(void)addCalculationDependency:(id)arg1 ;
-(id)recover:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
@end

