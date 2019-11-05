/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/securityd-Structs.h>
#import <securityd/CKKSGroupOperation.h>
#import <securityd/OctagonStateTransitionOperationProtocol.h>

@class OTOperationDependencies, NSOperation;

@interface OTUpdateTrustedDeviceListOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol> {

	BOOL _logForUpgrade;
	NSString* _nextState;
	NSString* _intendedState;
	OTOperationDependencies* _deps;
	NSString* _stateIfListUpdates;
	NSString* _retryFlag;
	NSOperation* _finishedOp;

}

@property (retain) OTOperationDependencies * deps;                                //@synthesize deps=_deps - In the implementation block
@property (retain) NSString*<OctagonStateString> stateIfListUpdates;              //@synthesize stateIfListUpdates=_stateIfListUpdates - In the implementation block
@property (retain) NSString*<OctagonFlagString> retryFlag;                        //@synthesize retryFlag=_retryFlag - In the implementation block
@property (retain) NSOperation * finishedOp;                                      //@synthesize finishedOp=_finishedOp - In the implementation block
@property (assign) BOOL logForUpgrade;                                            //@synthesize logForUpgrade=_logForUpgrade - In the implementation block
@property (retain) NSString*<OctagonStateString> nextState;                       //@synthesize nextState=_nextState - In the implementation block
@property (readonly) NSString*<OctagonStateString> intendedState;                 //@synthesize intendedState=_intendedState - In the implementation block
-(void)groupStart;
-(NSString*<OctagonStateString>)intendedState;
-(NSOperation *)finishedOp;
-(void)setFinishedOp:(NSOperation *)arg1 ;
-(OTOperationDependencies *)deps;
-(void)setDeps:(OTOperationDependencies *)arg1 ;
-(id)initWithDependencies:(id)arg1 intendedState:(NSString*)arg2 listUpdatesState:(NSString*)arg3 errorState:(NSString*)arg4 retryFlag:(NSString*)arg5 ;
-(void)afterAuthKitFetch:(id)arg1 ;
-(BOOL)logForUpgrade;
-(void)setLogForUpgrade:(BOOL)arg1 ;
-(NSString*<OctagonStateString>)stateIfListUpdates;
-(void)setStateIfListUpdates:(NSString*<OctagonStateString>)arg1 ;
-(NSString*<OctagonFlagString>)retryFlag;
-(void)setRetryFlag:(NSString*<OctagonFlagString>)arg1 ;
-(NSString*<OctagonStateString>)nextState;
-(void)setNextState:(NSString*<OctagonStateString>)arg1 ;
@end

