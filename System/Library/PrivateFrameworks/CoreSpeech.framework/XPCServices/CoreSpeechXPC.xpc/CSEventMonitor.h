/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/XPCServices/CoreSpeechXPC.xpc/CoreSpeechXPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface CSEventMonitor : NSObject {

	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)notifyObserver:(id)arg1 ;
-(void)_stopMonitoring;
-(void)enumerateObserversInQueue:(/*^block*/id)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
@end

