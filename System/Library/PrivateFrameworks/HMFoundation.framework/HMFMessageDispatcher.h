/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFTimerDelegate.h>
#import <HMFoundation/HMFMessageTransportDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSMutableOrderedSet, HMFTimer, NSMutableArray, NSSet, HMFMessageTransport, NSMutableDictionary, NSObject, NSString;

@interface HMFMessageDispatcher : HMFObject <HMFLogging, HMFTimerDelegate, HMFMessageTransportDelegate> {

	id<HMFLocking> _lock;
	NSMutableOrderedSet* _handlers;
	HMFTimer* _indexWatchdog;
	NSMutableArray* _indexOperations;
	NSSet* _filterClasses;
	HMFMessageTransport* _transport;
	NSMutableDictionary* _destinationHandlerIndexes;
	NSMutableDictionary* _nameHandlerIndexes;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) NSMutableDictionary * destinationHandlerIndexes;              //@synthesize destinationHandlerIndexes=_destinationHandlerIndexes - In the implementation block
@property (readonly) NSMutableDictionary * nameHandlerIndexes;                     //@synthesize nameHandlerIndexes=_nameHandlerIndexes - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMFMessageTransport * transport;                    //@synthesize transport=_transport - In the implementation block
@property (copy) NSSet * filterClasses;                                            //@synthesize filterClasses=_filterClasses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMFMessageTransport *)transport;
-(id)initWithTransport:(id)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(/*^block*/id)arg4 ;
-(id)handlersForMessage:(id)arg1 ;
-(void)dispatchMessage:(id)arg1 ;
-(void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(NSSet *)filterClasses;
-(void)setFilterClasses:(NSSet *)arg1 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 selector:(SEL)arg3 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(void)deregisterForMessage:(id)arg1 receiver:(id)arg2 ;
-(void)deregisterReceiver:(id)arg1 ;
-(NSMutableDictionary *)destinationHandlerIndexes;
-(NSMutableDictionary *)nameHandlerIndexes;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)dispatchMessage:(id)arg1 target:(id)arg2 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(/*^block*/id)arg3 ;
@end

