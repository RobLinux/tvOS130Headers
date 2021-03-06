/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface WFLocationQueryGeocodeCache : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _cacheAge;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	double _expirationInterval;

}

@property (assign,nonatomic) double expirationInterval;              //@synthesize expirationInterval=_expirationInterval - In the implementation block
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setExpirationInterval:(double)arg1 ;
-(double)expirationInterval;
-(BOOL)_shouldEvictObjectWithDate:(id)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 withDate:(id)arg3 ;
@end

