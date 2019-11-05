/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCountedSet;

@interface MPCUserIdentityPropertiesProactiveCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSCountedSet* _proactiveCachingIdentities;

}
+(id)sharedCache;
-(id)_init;
-(void)_userIdentityStoreDidChangeNotification:(id)arg1 ;
-(void)endProactiveCachingForUserIdentity:(id)arg1 ;
-(void)beginProactiveCachingForUserIdentity:(id)arg1 ;
-(void)_proactivelyCacheUserIdentity:(id)arg1 ;
@end

