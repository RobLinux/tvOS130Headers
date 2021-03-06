/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, PFCachePolicy, PFCacheStatistics;

@interface PFCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _contents;
	PFCachePolicy* _policy;
	PFCacheStatistics* _statistics;
	/*^block*/id _willBeRemovedFromCacheHandler;

}

@property (copy) id willBeRemovedFromCacheHandler;              //@synthesize willBeRemovedFromCacheHandler=_willBeRemovedFromCacheHandler - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)statistics;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithPolicy:(id)arg1 ;
-(void)_removeObjectForKey:(id)arg1 notify:(BOOL)arg2 ;
-(void)removeObjectForKeyWithoutNotification:(id)arg1 ;
-(void)_setEntry:(id)arg1 forKey:(id)arg2 ;
-(id)setObject:(id)arg1 forKeyIfNotPresent:(id)arg2 ;
-(void)enumerateCacheEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)willBeRemovedFromCacheHandler;
-(void)setWillBeRemovedFromCacheHandler:(id)arg1 ;
@end

