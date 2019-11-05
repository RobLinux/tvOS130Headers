/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssetCacheServicesExtensions.framework/AssetCacheServicesExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AssetCacheServicesReporterDelegate, OS_dispatch_queue, OS_os_log;
@class NSObject, NSMutableDictionary, NSMutableSet;

@interface AssetCacheServicesReporter : NSObject {

	id<AssetCacheServicesReporterDelegate> _weakDelegate;
	NSObject*<OS_dispatch_queue> _weakDelegateQueue;
	NSObject*<OS_os_log> _logHandle;
	NSMutableDictionary* _results;
	NSMutableSet* _allServerHostPorts;

}

@property (__weak) id<AssetCacheServicesReporterDelegate> weakDelegate;              //@synthesize weakDelegate=_weakDelegate - In the implementation block
@property (__weak) NSObject*<OS_dispatch_queue> weakDelegateQueue;                   //@synthesize weakDelegateQueue=_weakDelegateQueue - In the implementation block
@property (retain) NSObject*<OS_os_log> logHandle;                                   //@synthesize logHandle=_logHandle - In the implementation block
@property (retain) NSMutableDictionary * results;                                    //@synthesize results=_results - In the implementation block
@property (retain) NSMutableSet * allServerHostPorts;                                //@synthesize allServerHostPorts=_allServerHostPorts - In the implementation block
-(void)start;
-(NSMutableDictionary *)results;
-(NSObject*<OS_os_log>)logHandle;
-(void)setLogHandle:(NSObject*<OS_os_log>)arg1 ;
-(void)setResults:(NSMutableDictionary *)arg1 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)setWeakDelegate:(id<AssetCacheServicesReporterDelegate>)arg1 ;
-(void)setWeakDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAllServerHostPorts:(NSMutableSet *)arg1 ;
-(void)reportPublicIPAddress;
-(void)reportMightHaveWithKeyPath:(id)arg1 ;
-(void)reportCachedServersWithKeyPath:(id)arg1 ;
-(void)reportFreshServersWithKeyPath:(id)arg1 ;
-(void)reportPublicIPAddressRangesAndFavoredServerRangesWithKeyPath:(id)arg1 ;
-(void)reportReachability;
-(void)didFinishWithResults:(id)arg1 ;
-(id)serverSortInfoForHostPort:(id)arg1 rank:(id)arg2 ;
-(id)sortedHostPorts:(id)arg1 usingSortInfo:(id)arg2 ;
-(void)willStartGatheringResultsForKeyPath:(id)arg1 ;
-(void)didGatherResults:(id)arg1 forKeyPath:(id)arg2 ;
-(id)keyPath:(id)arg1 byAppendingKey:(id)arg2 ;
-(void)reportServersWithKeyPath:(id)arg1 generateOptions:(/*^block*/id)arg2 ;
-(id)locateServersWithOptions:(id)arg1 ;
-(NSMutableSet *)allServerHostPorts;
-(id<AssetCacheServicesReporterDelegate>)weakDelegate;
-(NSObject*<OS_dispatch_queue>)weakDelegateQueue;
-(id)prettyRanges:(id)arg1 ;
-(BOOL)doRanges:(id)arg1 containAddress:(id)arg2 ;
-(id)sortedHostPorts:(id)arg1 ;
@end

