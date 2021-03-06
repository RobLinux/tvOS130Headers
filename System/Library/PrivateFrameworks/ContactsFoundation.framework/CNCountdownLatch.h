/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class CNUnfairLock, NSObject;

@interface CNCountdownLatch : NSObject {

	unsigned long long _count;
	CNUnfairLock* _lock;
	NSObject*<OS_dispatch_semaphore> _latchedSemaphore;

}
-(id)description;
-(id)init;
-(id)initWithStartingCount:(unsigned long long)arg1 ;
-(BOOL)awaitWithTimeout:(double)arg1 ;
-(BOOL)awaitWithTimeout:(double)arg1 strategy:(unsigned long long)arg2 ;
-(BOOL)awaitImmediate;
-(BOOL)awaitOnSemaphoreWithTimeout:(double)arg1 ;
-(BOOL)awaitWhileSpinningRunloopWithTimeout:(double)arg1 ;
-(BOOL)hasLatched;
-(void)countDown;
-(void)await;
@end

