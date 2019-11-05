/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HomeAI/HMISystemResourceUsageMonitorProtocol.h>

@protocol OS_dispatch_queue;
@class HMISystemResourceUsageMonitorImpl, NSObject;

@interface HMISystemResourceUsageMonitor : HMFObject <HMISystemResourceUsageMonitorProtocol> {

	HMISystemResourceUsageMonitorImpl* _systemResourceUsageMonitorImpl;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) HMISystemResourceUsageMonitorImpl * systemResourceUsageMonitorImpl;              //@synthesize systemResourceUsageMonitorImpl=_systemResourceUsageMonitorImpl - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                          //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak) id<HMISystemResourceUsageMonitorDelegate> delegate; 
-(id)init;
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(void)setDelegate:(id<HMISystemResourceUsageMonitorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)start;
-(id)getCurrentSystemResourceUsage;
-(HMISystemResourceUsageMonitorImpl *)systemResourceUsageMonitorImpl;
@end

