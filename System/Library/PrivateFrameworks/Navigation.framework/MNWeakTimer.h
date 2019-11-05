/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface MNWeakTimer : NSObject {

	id _target;
	SEL _selector;
	NSTimer* _timer;

}

@property (assign,nonatomic,__weak) id target;               //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                   //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) NSTimer * timer;              //@synthesize timer=_timer - In the implementation block
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)dealloc;
-(SEL)selector;
-(void)invalidate;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(NSTimer *)timer;
-(id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)_timerDidFire;
@end

