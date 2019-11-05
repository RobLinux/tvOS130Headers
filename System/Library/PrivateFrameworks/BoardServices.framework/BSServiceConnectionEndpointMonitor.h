/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BoardServices-Structs.h>
#import <BoardServices/BSServiceMonitor.h>
#import <BoardServices/BSInvalidatable.h>

@protocol BSServiceConnectionEndpointMonitorDelegate, BSInvalidatable;
@class NSString, BSServiceManager, NSDictionary, NSMutableSet;

@interface BSServiceConnectionEndpointMonitor : NSObject <BSServiceMonitor, BSInvalidatable> {

	BSServiceManager* _manager;
	NSString* _service;
	os_unfair_lock_s _lock;
	id<BSServiceConnectionEndpointMonitorDelegate> _lock_delegate;
	NSDictionary* _lock_endpointToEnvironments;
	NSMutableSet* _lock_serialCallOut_endpoints;
	BOOL _lock_activated;
	BOOL _lock_invalidated;
	os_unfair_lock_s _registrationLock;
	id<BSInvalidatable> _registrationLock_assertion;

}

@property (nonatomic,copy,readonly) NSString * service;                                            //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) id<BSServiceConnectionEndpointMonitorDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monitorForService:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<BSServiceConnectionEndpointMonitorDelegate>)delegate;
-(void)setDelegate:(id<BSServiceConnectionEndpointMonitorDelegate>)arg1 ;
-(NSString *)service;
-(void)activate;
-(void)serialCallOut_didUpdateEndpointEnvironments:(id)arg1 ;
-(id)_initWithManager:(id)arg1 service:(id)arg2 ;
-(id)endpointsForEnvironment:(id)arg1 ;
@end

