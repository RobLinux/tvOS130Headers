/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ISDeferredDealloc : NSObject {

	NSObject*<OS_dispatch_queue> _deferredDeallocQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_performDeferredDealloc:(id)arg1 withDelay:(double)arg2 ;
-(void)_performDeferredDealloc:(id)arg1 ;
@end

