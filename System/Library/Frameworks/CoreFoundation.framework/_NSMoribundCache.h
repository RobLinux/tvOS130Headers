/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCache.h>

@interface _NSMoribundCache : NSCache
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setName:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(unsigned long long)totalCostLimit;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(unsigned long long)countLimit;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(BOOL)evictsObjectsWithDiscardedContent;
-(void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1 ;
@end

