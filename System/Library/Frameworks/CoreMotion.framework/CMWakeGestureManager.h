/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMWakeGestureDelegate;
@interface CMWakeGestureManager : NSObject {

	id<CMWakeGestureDelegate> _delegate;

}

@property (assign,nonatomic) id<CMWakeGestureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
+(BOOL)isWakeGestureAvailable;
+(BOOL)isWakeGestureOverrideEnabled;
+(id)stringForGestureState:(long long)arg1 ;
-(id<CMWakeGestureDelegate>)delegate;
-(void)setDelegate:(id<CMWakeGestureDelegate>)arg1 ;
-(void)logAssert;
-(void)startWakeGestureUpdates;
-(void)stopWakeGestureUpdates;
-(BOOL)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2 ;
-(void)simulateGesture:(long long)arg1 after:(double)arg2 ;
-(void)forceDetected;
@end

