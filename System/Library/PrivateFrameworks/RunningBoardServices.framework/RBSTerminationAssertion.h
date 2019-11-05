/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RunningBoardServices/RunningBoardServices-Structs.h>
@class RBSAssertion, RBSProcessMonitor, RBSTerminateContext, RBSTarget, NSHashTable;

@interface RBSTerminationAssertion : NSObject {

	os_unfair_lock_s _lock;
	RBSAssertion* _assertion;
	RBSProcessMonitor* _monitor;
	RBSTerminateContext* _terminateContext;
	RBSTarget* _target;
	unsigned long long _state;
	BOOL _processExists;
	NSHashTable* _observers;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) BOOL processExists; 
-(void)invalidate;
-(BOOL)isValid;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)acquireWithError:(out id*)arg1 ;
-(BOOL)invalidateWithError:(out id*)arg1 ;
-(id)explanation;
-(void)_notifyObserversOfProcessExit;
-(id)initWithTarget:(id)arg1 context:(id)arg2 ;
-(BOOL)processExists;
@end

