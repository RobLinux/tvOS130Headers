/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface NRMockXPCProxy : NSProxy {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _async;
	id _target;

}

@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)initWithBlahBlahBlahTarget:(id)arg1 queue:(id)arg2 async:(BOOL)arg3 ;
@end

