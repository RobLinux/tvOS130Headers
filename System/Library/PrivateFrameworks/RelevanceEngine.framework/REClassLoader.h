/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/NSCopying.h>

@protocol REClassLoaderConfiguration;
@class NSArray;

@interface REClassLoader : NSObject <NSCopying> {

	NSArray* _cachedDataSources;
	NSArray* _cachedBundleConfigurations;
	os_unfair_lock_s _loadingLock;
	id<REClassLoaderConfiguration> _configuration;

}

@property (nonatomic,readonly) id<REClassLoaderConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)loaderWithObjects:(id)arg1 configuration:(id)arg2 ;
+(id)loaderWithBlock:(/*^block*/id)arg1 configuration:(id)arg2 ;
+(id)loaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2 configuration:(id)arg3 ;
+(id)groupLoaderWithLoaders:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id<REClassLoaderConfiguration>)configuration;
-(void)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)prewarm;
-(void)enumerateBundleConfigurations:(/*^block*/id)arg1 ;
-(void)enumerateClassesWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateClassesWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateBundleConfigurations:(/*^block*/id)arg1 ;
@end

