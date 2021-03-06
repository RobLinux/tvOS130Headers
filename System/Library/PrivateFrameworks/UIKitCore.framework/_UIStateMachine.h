/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableDictionary;

@interface _UIStateMachine : NSObject {

	unsigned long long _stateCount;
	unsigned long long _eventCount;
	SCD_Struct_UI99* _transitionTable;
	NSMutableDictionary* _stateChangeObservers;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
+(void)debugStateTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
+(void)debugAttemptedInvalidStateTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithStates:(unsigned long long)arg1 events:(unsigned long long)arg2 initialState:(unsigned long long)arg3 ;
-(void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(/*^block*/id)arg3 ;
-(void)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(unsigned long long)_totalStateCount;
-(void)_iterateTransitionTable:(/*^block*/id)arg1 ;
-(void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(/*^block*/id)arg3 postTransitionHandler:(/*^block*/id)arg4 ;
-(void)setStaticTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)setStateChangeObserver:(unsigned long long)arg1 observer:(/*^block*/id)arg2 ;
-(id)_transitionDescriptions;
@end

