/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_path_monitor, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AKNetworkObserver : NSObject {

	NSObject*<OS_nw_path_monitor> _pathMonitor;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableDictionary* _invocationByObserver;
	BOOL _isNetworkReachable;

}

@property (readonly) BOOL isNetworkReachable;              //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
+(id)sharedNetworkObserver;
-(id)init;
-(void)dealloc;
-(BOOL)isNetworkReachable;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeNetworkReachableObserver:(id)arg1 ;
-(void)_startPathMonitor;
-(void)_stopPathMonitor;
-(void)_networkReachabilityDidChange;
@end

