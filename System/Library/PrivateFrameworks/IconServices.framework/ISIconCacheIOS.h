/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface ISIconCacheIOS : NSObject {

	BOOL _initialized;
	NSString* _cacheKeySalt;
	NSURL* _cacheURL;

}

@property (readonly) BOOL initialized;                 //@synthesize initialized=_initialized - In the implementation block
@property (copy) NSString * cacheKeySalt;              //@synthesize cacheKeySalt=_cacheKeySalt - In the implementation block
@property (retain) NSURL * cacheURL;                   //@synthesize cacheURL=_cacheURL - In the implementation block
+(id)xpcInterface;
+(id)cacheContainerURL;
+(id)cacheFolderURL;
+(id)UUIDStringForString:(id)arg1 ;
+(id)iconCacheSystemVersionFileURL;
+(long long)currentDisplayGamut;
-(id)init;
-(BOOL)initialized;
-(NSURL *)cacheURL;
-(void)setCacheURL:(NSURL *)arg1 ;
-(id)initWithCacheURL:(id)arg1 salt:(id)arg2 ;
-(NSString *)cacheKeySalt;
-(void)setCacheKeySalt:(NSString *)arg1 ;
-(id)cacheKeyFromBundleIdentifier:(id)arg1 iconDictionary:(id)arg2 preferedIconName:(id)arg3 ;
-(id)bundleCacheKeyForBundleIdentifier:(id)arg1 cacheKey:(id)arg2 variant:(int)arg3 options:(int)arg4 ;
-(id)iconDataForKey:(id)arg1 ignoreCache:(BOOL)arg2 generatorBlock:(/*^block*/id)arg3 ;
-(id)bundleCacheKeyPrefixForBundleIdentifier:(id)arg1 ;
@end

