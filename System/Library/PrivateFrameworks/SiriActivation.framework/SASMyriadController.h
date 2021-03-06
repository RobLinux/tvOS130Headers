/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, CMMotionActivityManager, SASLockStateMonitor, FBSDisplayLayoutMonitor;

@interface SASMyriadController : NSObject {

	NSObject*<OS_dispatch_semaphore> _myriadFinishedSemaphore;
	CMMotionActivityManager* _activityManager;
	BOOL _isLifted;
	double _liftEndTime;
	BOOL _isLocked;
	SASLockStateMonitor* _lockStateMonitor;
	FBSDisplayLayoutMonitor* _displayMonitor;
	double _raiseToWakeTime;
	BOOL _canceledByMyriad;

}

@property (assign,nonatomic) BOOL canceledByMyriad;              //@synthesize canceledByMyriad=_canceledByMyriad - In the implementation block
+(id)currentController;
-(void)dealloc;
-(id)_init;
-(void)_handleCMMotionActivity:(id)arg1 ;
-(void)_updateRaiseToWakeTimeForTransition:(id)arg1 ;
-(void)setCanceledByMyriad:(BOOL)arg1 ;
-(BOOL)activateForRequest:(id)arg1 visible:(BOOL)arg2 ;
-(BOOL)canceledByMyriad;
@end

