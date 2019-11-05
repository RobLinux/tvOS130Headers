/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CacheDeletePurgeableProvider, OS_dispatch_source;
@class NSDictionary, NSObject;

@interface CacheDeleteCoordinator : NSObject {

	NSDictionary* _combinedSpaceByUrgency;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_queue> _freeSpaceQueue;
	NSObject*<OS_dispatch_queue> _runQueue;
	double _lastUpdate;
	id<CacheDeletePurgeableProvider> _appPurgeCoordinator;
	id<CacheDeletePurgeableProvider> _odrPurgeCoordinator;
	NSObject*<OS_dispatch_source> _scheduledTimer;

}

@property (retain) NSObject*<OS_dispatch_source> scheduledTimer;                                       //@synthesize scheduledTimer=_scheduledTimer - In the implementation block
@property (nonatomic,readonly) id<CacheDeletePurgeableProvider> appPurgeCoordinator;                   //@synthesize appPurgeCoordinator=_appPurgeCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<CacheDeletePurgeableProvider> odrPurgeCoordinator;              //@synthesize odrPurgeCoordinator=_odrPurgeCoordinator - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setOdrPurgeCoordinator:(id<CacheDeletePurgeableProvider>)arg1 ;
-(id<CacheDeletePurgeableProvider>)appPurgeCoordinator;
-(void)requestFreeSpace:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updatePurgeableStorage;
-(void)registerCacheDeleteInfoCallbacks;
-(NSObject*<OS_dispatch_source>)scheduledTimer;
-(void)_requestFreeSpace:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_purgeable:(id)arg1 urgency:(int)arg2 ;
-(id)_purge:(id)arg1 urgency:(int)arg2 ;
-(void)_cancelPurge;
-(id<CacheDeletePurgeableProvider>)odrPurgeCoordinator;
-(void)_updatePurgeableStorageWithCoaleseInterval:(float)arg1 refresh:(BOOL)arg2 ;
-(void)setScheduledTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)_isStale;
-(void)_refreshPurgeableStorage:(id)arg1 ;
-(void)_pushUpdatedAvailableStorage:(BOOL)arg1 ;
-(void)invaldateCaches;
-(void)updatePurgeableStorageRightAway;
-(void)watchAppsUpdated;
-(id)_periodic:(id)arg1 urgency:(int)arg2 ;
@end
