/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MPCPlayerPathCache : NSObject {

	NSMutableDictionary* _playerPathResolutions;
	NSMutableDictionary* _observers;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * playerPathResolutions;              //@synthesize playerPathResolutions=_playerPathResolutions - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * observers;                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                 //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;                //@synthesize calloutQueue=_calloutQueue - In the implementation block
+(id)sharedCache;
-(void)dealloc;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(NSMutableDictionary *)observers;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)observationTokenDescriptionForPlayerPath:(id)arg1 ;
-(id)resolvedPlayerPathForPlayerPath:(id)arg1 ;
-(void)_onQueue_registerForInvalidationWithUnresolvedPlayerPath:(id)arg1 invalidationPlayerPath:(void*)arg2 ;
-(NSMutableDictionary *)playerPathResolutions;
@end

