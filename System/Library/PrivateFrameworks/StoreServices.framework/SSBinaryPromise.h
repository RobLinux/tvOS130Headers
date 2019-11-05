/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSPromise;

@interface SSBinaryPromise : NSObject {

	SSPromise* _backingPromise;

}

@property (nonatomic,retain) SSPromise * backingPromise;              //@synthesize backingPromise=_backingPromise - In the implementation block
+(id)promiseWithError:(id)arg1 ;
+(id)promiseWithSuccess;
+(id)_globalPromiseStorageAccessQueue;
+(id)_globalPromiseStorage;
+(id)promiseWithPromise:(id)arg1 ;
-(id)init;
-(void)waitUntilFinished;
-(BOOL)resultWithError:(id*)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(BOOL)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithSuccess;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(SSPromise *)backingPromise;
-(void)_removeFromGlobalPromiseStorage;
-(void)waitUntilFinishedWithTimeout:(double)arg1 ;
-(id)promiseAdapter;
-(void)setBackingPromise:(SSPromise *)arg1 ;
@end

