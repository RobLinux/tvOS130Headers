/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PVEffectResources : NSObject
+(void)setInteractiveMode:(BOOL)arg1 ;
+(void)flushEngine;
+(void)clearAllCachesAndPools;
+(void)cleanupEffectsCache;
+(void)cleanupEffectsSingletons;
+(BOOL)isInteractiveMode;
+(void)updateMemoryEnvironment:(int)arg1 ;
+(int)memoryEnvironment;
+(void)applicationWillTerminate;
+(void)shutdownEngine;
+(void)setUTObserver:(id)arg1 ;
+(id)utObserver;
@end

