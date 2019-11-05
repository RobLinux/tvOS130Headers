/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:49 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <rapportd/rapportd-Structs.h>
#import <rapportd/NSXPCListenerDelegate.h>

@protocol OS_dispatch_source, OS_xpc_event_publisher, OS_dispatch_queue;
@class NSCountedSet, NSObject, CUSystemMonitor, NSXPCListener, NSString;

@interface RPDaemon : NSObject <NSXPCListenerDelegate> {

	NSCountedSet* _assertions;
	unsigned long long _errorFlagsForceSet;
	unsigned long long _errorFlagsForceClear;
	int _languageChangedNotifier;
	BOOL _prefXPCMatchingTestMode;
	NSObject*<OS_dispatch_source> _sigTermSource;
	unsigned long long _stateHandleGeneral;
	unsigned long long _stateHandleIdentities;
	unsigned long long _stateHandleKeychain;
	NSMutableArray* _subDaemons;
	CUSystemMonitor* _systemMonitor;
	NSMutableSet* _xpcConnections;
	BOOL _xpcEventsRegistered;
	NSXPCListener* _xpcListener;
	NSObject*<OS_xpc_event_publisher> _xpcPublisher;
	BOOL _languageChangePending;
	BOOL _sigTermPending;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned long long _errorFlags;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long errorFlags;                         //@synthesize errorFlags=_errorFlags - In the implementation block
@property (nonatomic,readonly) BOOL languageChangePending;                            //@synthesize languageChangePending=_languageChangePending - In the implementation block
@property (nonatomic,readonly) BOOL sigTermPending;                                   //@synthesize sigTermPending=_sigTermPending - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDaemon;
-(id)init;
-(void)invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)_prefsChanged;
-(unsigned long long)errorFlags;
-(void)postDaemonInfoChanges:(unsigned long long)arg1 ;
-(BOOL)diagnosticCommand:(id)arg1 params:(id)arg2 ;
-(BOOL)sigTermPending;
-(BOOL)languageChangePending;
-(void)_updateErrorFlags;
-(void)_xpcPublisherAction:(unsigned)arg1 token:(unsigned long long)arg2 event:(id)arg3 ;
-(id)keychainStateString;
-(void)_xpcPublisherAddToken:(unsigned long long)arg1 event:(id)arg2 ;
-(void)_xpcPublisherRemoveToken:(unsigned long long)arg1 ;
-(void)_xpcPublisherTriggeredToken:(unsigned long long)arg1 payload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_xpcPublisherStateChangedForToken:(unsigned long long)arg1 state:(BOOL)arg2 ;
-(void)_xpcPublisherTriggeredReply:(id)arg1 token:(unsigned long long)arg2 responseHandler:(/*^block*/id)arg3 ;
@end
