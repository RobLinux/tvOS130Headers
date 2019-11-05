/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSTimer;

@interface TITypingAssertion : NSObject {

	BOOL _active;
	NSMutableSet* _restingPathIndices;
	NSTimer* _timer;

}

@property (nonatomic,retain) NSTimer * timer;                          //@synthesize timer=_timer - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
+(id)sharedTypingAssertion;
-(id)init;
-(void)dealloc;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)touch;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSTimer *)timer;
-(void)timerFired:(id)arg1 ;
-(void)restResetTouches;
-(void)restTouchStartWithPathIndex:(long long)arg1 ;
-(void)restTouchEndWithPathIndex:(long long)arg1 ;
-(void)_sbsSetTypingActive:(BOOL)arg1 ;
-(void)touchWithDuration:(double)arg1 ;
-(id)__restingPathIndices;
@end

