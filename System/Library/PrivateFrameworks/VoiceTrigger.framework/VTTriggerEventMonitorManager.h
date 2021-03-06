/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface VTTriggerEventMonitorManager : NSObject {

	NSMutableSet* _connections;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedManager;
-(id)init;
-(void)removeConnection:(id)arg1 ;
-(void)addConnection:(id)arg1 ;
-(void)notifyVoiceTrigger;
-(void)notifyEarlyDetect;
@end

