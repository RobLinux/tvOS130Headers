/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBProcessManaging <NSObject>
@required
-(id)processForIdentity:(id)arg1;
-(void)removeStateForProcessIdentity:(id)arg1;
-(void)applySystemState:(id)arg1;
-(id)processForIdentifier:(id)arg1;
-(id)processesMatchingPredicate:(id)arg1;
-(BOOL)isActiveProcess:(id)arg1;
-(id)executeLaunchRequest:(id)arg1 withError:(out id*)arg2;
-(BOOL)executeTerminateRequest:(id)arg1 withError:(out id*)arg2;
-(id)processForInstance:(id)arg1;
-(id)busyExtensionInstancesFromSet:(id)arg1;
-(id)processForAuditToken:(id)arg1;
-(void)didUpdateProcessStates:(id)arg1 completion:(/*^block*/id)arg2;

@end

