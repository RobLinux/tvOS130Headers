/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface TUAudioController : NSObject {

	NSObject*<OS_dispatch_semaphore> _modifyingStateLock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> modifyingStateLock;              //@synthesize modifyingStateLock=_modifyingStateLock - In the implementation block
-(id)init;
-(void)_releaseLock;
-(NSObject*<OS_dispatch_semaphore>)modifyingStateLock;
-(void)setModifyingStateLock:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)_acquireLock;
-(void)_requestUpdatedValueWithBlock:(/*^block*/id)arg1 object:(id*)arg2 isRequestingPointer:(BOOL*)arg3 forceNewRequest:(BOOL)arg4 scheduleTimePointer:(unsigned long long*)arg5 notificationString:(id)arg6 queue:(id)arg7 ;
@end

