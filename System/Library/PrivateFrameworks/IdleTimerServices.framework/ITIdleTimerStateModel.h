/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IdleTimerServices/IdleTimerServices-Structs.h>
#import <IdleTimerServices/ITIdleTimerStateRequestDelegate.h>

@protocol ITIdleTimerStateRequestHandling, BSInvalidatable;
@class NSMutableDictionary, NSString;

@interface ITIdleTimerStateModel : NSObject <ITIdleTimerStateRequestDelegate> {

	os_unfair_lock_s _accessLock;
	NSMutableDictionary* _access_idleTimerAssertionsByConfigIdentifier;
	id<ITIdleTimerStateRequestHandling> _requestHandler;
	id<BSInvalidatable> _stateCaptureAssertion;

}

@property (getter=isIdleTimerServiceAvailable,readonly) BOOL idleTimerServiceAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)_addStateCaptureHandler;
-(BOOL)handleIdleEvent:(unsigned long long)arg1 usingConfigurationWithIdentifier:(id)arg2 ;
-(BOOL)isIdleTimerServiceAvailable;
-(void)resendIdleTimerAssertions;
-(id)newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2 ;
-(id)_access_newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2 ;
@end

