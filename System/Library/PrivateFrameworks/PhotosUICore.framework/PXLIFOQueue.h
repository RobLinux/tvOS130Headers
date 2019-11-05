/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface PXLIFOQueue : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableArray* _internalQueue_pendingBlocks;
	NSObject*<OS_dispatch_queue> _targetQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> targetQueue;              //@synthesize targetQueue=_targetQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)_executeNextPendingBlock;
@end
