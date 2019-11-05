/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLConnectionManager.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSMutableArray, NSArray, NSObject;

@interface NSSQLDefaultConnectionManager : NSSQLConnectionManager {

	NSMutableArray* _availableConnections;
	NSArray* _allConnections;
	NSObject*<OS_dispatch_semaphore> _poolCounter;
	int _connectionLock;
	NSObject*<OS_dispatch_queue> _processingQueue;

}
-(void)dealloc;
-(void)disconnectAllConnections;
-(id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3 ;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(BOOL)handleStoreRequest:(id)arg1 ;
-(void)scheduleBarrierBlock:(/*^block*/id)arg1 ;
-(void)scheduleConnectionsBarrier:(/*^block*/id)arg1 ;
-(void)_initializeConnectionsWithSeed:(id)arg1 ;
-(id)_checkoutConnectionOfType:(unsigned long long)arg1 ;
-(void)_checkinConnection:(id)arg1 ;
@end

