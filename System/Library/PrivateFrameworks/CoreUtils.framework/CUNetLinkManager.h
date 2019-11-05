/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject, NSString;

@interface CUNetLinkManager : NSObject {

	NSMutableSet* _endpoints;
	unsigned _endpointChanges;
	BOOL _hasIPv4Endpoint;
	BOOL _hasIPv6Endpoint;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_source> _pollTimer;
	int _probeSocketV4;
	NSObject*<OS_dispatch_source> _probeSourceV4;
	int _probeSocketV6;
	NSObject*<OS_dispatch_source> _probeSourceV6;
	unsigned _reReachableCount;
	unsigned _rxCount;
	unsigned _txCount;
	unsigned _txErrors;
	LogCategory* _ucat;
	unsigned _unreachableCount;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_update;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)activate;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)addEndpoint:(id)arg1 ;
-(void)removeEndpoint:(id)arg1 ;
-(void)_updateEndpoints;
-(void)_updateARP;
-(void)_updateNDP;
-(void)_updateEndpoint:(id)arg1 state:(int)arg2 ;
-(void)_monitorEnsureStarted;
-(void)_monitorEnsureStopped;
-(void)_monitorSetupSocket:(int)arg1 ;
-(void)_monitorReadPacket:(int)arg1 ;
-(void)_monitorSendPacketToEndpoint:(id)arg1 ;
@end

