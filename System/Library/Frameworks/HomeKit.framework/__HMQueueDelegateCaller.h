/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMDelegateCaller.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface __HMQueueDelegateCaller : HMDelegateCaller {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithQueue:(id)arg1 ;
-(void)invokeBlock:(/*^block*/id)arg1 ;
@end

