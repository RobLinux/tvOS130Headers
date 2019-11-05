/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/backboardd-Structs.h>
#import <backboardd/BKHIDEventDispatcher.h>

@class NSMutableDictionary, BKHIDSystemInterface, NSString;

@interface BKTouchDeliveryGenericGestureFocusObserver : NSObject <BKHIDEventDispatcher> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _lock_destinationPerDisplayUUID;
	BKHIDSystemInterface* _HIDSystem;

}

@property (nonatomic,retain) BKHIDSystemInterface * HIDSystem;              //@synthesize HIDSystem=_HIDSystem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)destinationsForEvent:(IOHIDEventRef)arg1 fromSender:(id)arg2 ;
-(void)postEvent:(IOHIDEventRef)arg1 toDestination:(id)arg2 ;
-(void)postEvent:(IOHIDEventRef)arg1 fromSender:(id)arg2 ;
-(id)initWithHIDSystem:(id)arg1 ;
-(id)eventDestinationForDisplayUUID:(id)arg1 ;
-(void)setEventDestination:(id)arg1 forDisplayUUID:(id)arg2 ;
-(void)_workQueue_observeDeliveryOfTouchUpEvent:(unsigned)arg1 detached:(BOOL)arg2 tapToWake:(BOOL)arg3 transducerType:(unsigned)arg4 context:(unsigned)arg5 pid:(int)arg6 ;
-(BKHIDSystemInterface *)HIDSystem;
-(void)setHIDSystem:(BKHIDSystemInterface *)arg1 ;
@end

