/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RBPowerAssertion.h>

@class RBSystemState;

@interface RBSystemPowerAssertion : RBPowerAssertion {

	RBSystemState* _state;

}

@property (nonatomic,copy) RBSystemState * state;              //@synthesize state=_state - In the implementation block
-(id)init;
-(RBSystemState *)state;
-(void)setState:(RBSystemState *)arg1 ;
-(id)_preventIdleSleepIdentifiers;
-(int)_targetPid;
@end

