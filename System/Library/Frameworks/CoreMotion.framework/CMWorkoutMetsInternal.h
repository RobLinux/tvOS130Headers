/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMWorkoutMetsInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;

}
-(id)init;
-(void)dealloc;
-(void)_teardown;
-(void)_queryWorkoutMetsWithSessionId:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

