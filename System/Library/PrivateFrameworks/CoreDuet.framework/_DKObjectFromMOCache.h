/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _DKObjectFromMOCache : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _cacheEntries;
	NSMutableDictionary* _cacheHits;
	NSMutableDictionary* _cacheMisses;

}

@property (retain) NSMutableDictionary * cacheEntries;              //@synthesize cacheEntries=_cacheEntries - In the implementation block
@property (retain) NSMutableDictionary * cacheHits;                 //@synthesize cacheHits=_cacheHits - In the implementation block
@property (retain) NSMutableDictionary * cacheMisses;               //@synthesize cacheMisses=_cacheMisses - In the implementation block
@property (retain) NSMutableDictionary * cache;                     //@synthesize cache=_cache - In the implementation block
-(id)init;
-(NSMutableDictionary *)cache;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cacheEntries;
-(NSMutableDictionary *)cacheHits;
-(NSMutableDictionary *)cacheMisses;
-(void)setCacheEntries:(NSMutableDictionary *)arg1 ;
-(void)setCacheHits:(NSMutableDictionary *)arg1 ;
-(void)setCacheMisses:(NSMutableDictionary *)arg1 ;
-(id)objectForKey:(id)arg1 type:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 type:(id)arg3 ;
-(id)objectForKey:(id)arg1 type:(id)arg2 setIfMissingWithBlock:(/*^block*/id)arg3 ;
-(id)initWithReporting;
-(void)reportMetrics;
-(void)removeObjectForKey:(id)arg1 type:(id)arg2 ;
-(id)deduplicateString:(id)arg1 ;
@end

