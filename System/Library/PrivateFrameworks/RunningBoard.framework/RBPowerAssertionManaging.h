/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBPowerAssertionManaging <NSObject>
@required
-(void)removeProcess:(id)arg1;
-(void)addProcess:(id)arg1;
-(void)didUpdateProcessStates:(id)arg1;
-(void)removeStateForProcessIdentity:(id)arg1;
-(void)applySystemState:(id)arg1;
-(BOOL)_unitTest_hasSystemPowerAssertion;
-(BOOL)_unitTest_hasPowerAssertionForProcess:(id)arg1;
-(id)_unitTest_nameOfPowerAssertionForSystem;
-(id)_unitTest_nameOfPowerAssertionForProcess:(id)arg1;

@end

