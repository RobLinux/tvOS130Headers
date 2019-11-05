/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageDispatcher.h>
#import <HomeKitDaemon/HMFLogging.h>

@protocol HMFLocking;
@class NSOperationQueue, NSMapTable, HMDHome, HMFMessageDispatcher, NSString;

@interface HMDHomeAdministratorHandler : HMFMessageDispatcher <HMFLogging> {

	id<HMFLocking> _lock;
	NSOperationQueue* _queue;
	NSMapTable* _receivers;
	HMDHome* _home;

}

@property (readonly) HMFMessageDispatcher * dispatcher; 
@property (__weak,readonly) HMDHome * home;                          //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)addOperation:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(HMDHome *)home;
-(id)initWithTransport:(id)arg1 ;
-(HMFMessageDispatcher *)dispatcher;
-(id)initWithHome:(id)arg1 ;
-(id)logIdentifier;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(/*^block*/id)arg4 ;
-(void)deregisterReceiver:(id)arg1 ;
-(id)operationForMessage:(id)arg1 error:(id*)arg2 ;
-(id)syncOperationManager;
@end

