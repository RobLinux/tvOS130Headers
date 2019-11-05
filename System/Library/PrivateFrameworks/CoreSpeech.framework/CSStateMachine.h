/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSStateMachineDelegate;
@class NSMutableDictionary;

@interface CSStateMachine : NSObject {

	id<CSStateMachineDelegate> _delegate;
	long long _currentState;
	long long _initialState;
	NSMutableDictionary* _transitions;

}

@property (assign,nonatomic) long long initialState;                                  //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transitions;                       //@synthesize transitions=_transitions - In the implementation block
@property (assign,nonatomic,__weak) id<CSStateMachineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long currentState;                                //@synthesize currentState=_currentState - In the implementation block
-(id<CSStateMachineDelegate>)delegate;
-(void)setDelegate:(id<CSStateMachineDelegate>)arg1 ;
-(void)reset;
-(NSMutableDictionary *)transitions;
-(void)setTransitions:(NSMutableDictionary *)arg1 ;
-(long long)currentState;
-(void)setInitialState:(long long)arg1 ;
-(long long)initialState;
-(id)initWithInitialState:(long long)arg1 ;
-(void)performTransitionForEvent:(long long)arg1 ;
-(void)addTransitionFrom:(long long)arg1 to:(long long)arg2 for:(long long)arg3 ;
@end

