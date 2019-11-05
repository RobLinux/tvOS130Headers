/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSObject, NSMutableArray;

@interface AVSampleBufferRenderSynchronizerInternal : NSObject {

	AVWeakReference* weakObserver;
	OpaqueCMTimebaseRef readOnlyTimebase;
	NSObject*<OS_dispatch_queue> rateQueue;
	float rate;
	SCD_Struct_AV7 mostRecentlySetTime;
	NSObject*<OS_dispatch_queue> rendererListQueue;
	NSMutableArray* renderers;
	NSMutableArray* timedRenderRemovals;
	NSObject*<OS_dispatch_queue> figSynchronizerAccessQueue;
	OpaqueFigSampleBufferRenderSynchronizerRef figSynchronizer;

}
@end

