/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCountedSet, NSMutableDictionary;

@interface TransactionStore : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned long long _handle;
	long long _holdTime;
	NSCountedSet* _transactionCount;
	NSMutableDictionary* _transactionStore;

}

@property (copy,readonly) NSCountedSet * activeTransactions; 
@property (readonly) unsigned long long transactionCount; 
+(void)takeKeepAliveTransaction:(id)arg1 ;
+(void)releaseKeepAliveTransaction:(id)arg1 ;
+(void)holdKeepAliveTransaction:(id)arg1 whilePerformingBlock:(/*^block*/id)arg2 ;
+(id)globalStore;
-(id)init;
-(void)dealloc;
-(NSCountedSet *)activeTransactions;
-(unsigned long long)transactionCount;
-(void)takeKeepAliveTransaction:(id)arg1 ;
-(void)releaseKeepAliveTransaction:(id)arg1 ;
-(void)holdKeepAliveTransaction:(id)arg1 whilePerformingBlock:(/*^block*/id)arg2 ;
-(id)initWithHoldTime:(double)arg1 ;
@end
