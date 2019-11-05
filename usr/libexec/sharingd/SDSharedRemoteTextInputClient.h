/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <sharingd/sharingd-Structs.h>
@class NSObject, SFRemoteTextInputClient, NSDate, NSDictionary;

@interface SDSharedRemoteTextInputClient : NSObject {

	BOOL _activateCalled;
	NSMutableSet* _delegates;
	NSObject*<OS_dispatch_source> _overrunTimer;
	SFRemoteTextInputClient* _rtiClient;
	NSDate* _sessionClock;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,copy,readonly) NSDictionary * currentPayload; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)sharedClient;
-(id)init;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_ensureStarted;
-(NSDictionary *)currentPayload;
-(void)handleTextInputData:(NSDictionary*)arg1 ;
-(void)handleUsername:(id)arg1 password:(id)arg2 ;
-(void)prefsChanged;
-(void)_rtiHandleEventWithData:(NSDictionary*)arg1 ;
-(void)_rtiHandleInputDidBeginWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2 ;
-(void)_rtiHandleInputDidEndWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2 ;
-(void)removeAllDelegates;
-(void)_stopClock:(unsigned long long)arg1 ;
-(void)_startClockWithResetIfNeeded;
-(void)_logEvent:(unsigned long long)arg1 stopClock:(BOOL)arg2 ;
@end

