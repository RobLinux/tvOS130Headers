/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILongPressGestureRecognizer.h>

@class UIKBPanGestureVelocitySample;

@interface _UITextSelectionForceGesture : UILongPressGestureRecognizer {

	BOOL _shouldFailWithoutForce;
	BOOL _didLongPress;
	BOOL _touchEclipsesVelocity;
	UIKBPanGestureVelocitySample* _velocitySample;
	UIKBPanGestureVelocitySample* _previousVelocitySample;
	UIKBPanGestureVelocitySample* _liftOffSample;
	double _increasingForceTimestamp;
	double _lastTouchTime;
	long long _liftOffState;
	long long _increasingForceState;
	CGPoint _lastSceneReferenceLocation;
	CGPoint _lastUnadjustedSceneReferenceLocation;
	CGRect _velocityRange;

}

@property (assign,nonatomic) BOOL didLongPress;                                                                          //@synthesize didLongPress=_didLongPress - In the implementation block
@property (getter=_velocitySample,readonly) UIKBPanGestureVelocitySample * _velocitySample;                              //@synthesize velocitySample=_velocitySample - In the implementation block
@property (getter=_previousVelocitySample,readonly) UIKBPanGestureVelocitySample * _previousVelocitySample;              //@synthesize previousVelocitySample=_previousVelocitySample - In the implementation block
@property (getter=_liftOffSample,readonly) UIKBPanGestureVelocitySample * _liftOffSample;                                //@synthesize liftOffSample=_liftOffSample - In the implementation block
@property (assign,nonatomic) double increasingForceTimestamp;                                                            //@synthesize increasingForceTimestamp=_increasingForceTimestamp - In the implementation block
@property (assign,nonatomic) double lastTouchTime;                                                                       //@synthesize lastTouchTime=_lastTouchTime - In the implementation block
@property (assign,nonatomic) CGPoint lastSceneReferenceLocation;                                                         //@synthesize lastSceneReferenceLocation=_lastSceneReferenceLocation - In the implementation block
@property (assign,nonatomic) CGPoint lastUnadjustedSceneReferenceLocation;                                               //@synthesize lastUnadjustedSceneReferenceLocation=_lastUnadjustedSceneReferenceLocation - In the implementation block
@property (assign,nonatomic) long long liftOffState;                                                                     //@synthesize liftOffState=_liftOffState - In the implementation block
@property (assign,nonatomic) long long increasingForceState;                                                             //@synthesize increasingForceState=_increasingForceState - In the implementation block
@property (assign,nonatomic) CGRect velocityRange;                                                                       //@synthesize velocityRange=_velocityRange - In the implementation block
@property (assign,nonatomic) BOOL touchEclipsesVelocity;                                                                 //@synthesize touchEclipsesVelocity=_touchEclipsesVelocity - In the implementation block
@property (assign,nonatomic) BOOL shouldFailWithoutForce;                                                                //@synthesize shouldFailWithoutForce=_shouldFailWithoutForce - In the implementation block
-(void)dealloc;
-(void)reset;
-(CGRect)velocityRange;
-(void)setVelocityRange:(CGRect)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
-(void)_resetVelocitySamples;
-(void)enoughTimeElapsed:(id)arg1 ;
-(CGPoint)_locationOfTouches:(id)arg1 ;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 physicalTouch:(id)arg3 ;
-(CGPoint)_centroidInView:(id)arg1 ;
-(UIKBPanGestureVelocitySample *)_velocitySample;
-(UIKBPanGestureVelocitySample *)_previousVelocitySample;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(UIOffset)_offsetInViewFromSceneReferenceLocation:(CGPoint)arg1 toSceneReferenceLocation:(CGPoint)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2 ;
-(CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(CGPoint)arg1 ;
-(CGPoint)_adjustSceneReferenceLocation:(CGPoint)arg1 ;
-(CGPoint)lastSceneReferenceLocation;
-(void)setLastSceneReferenceLocation:(CGPoint)arg1 ;
-(CGPoint)lastUnadjustedSceneReferenceLocation;
-(void)setLastUnadjustedSceneReferenceLocation:(CGPoint)arg1 ;
-(double)lastTouchTime;
-(void)setLastTouchTime:(double)arg1 ;
-(BOOL)didLongPress;
-(void)setDidLongPress:(BOOL)arg1 ;
-(BOOL)forceHasIncreasedForTimeInterval:(double)arg1 ;
-(void)setShouldFailWithoutForce:(BOOL)arg1 ;
-(BOOL)shouldFailWithoutForce;
-(BOOL)touchEclipsesVelocity;
-(UIKBPanGestureVelocitySample *)_liftOffSample;
-(void)setTouchEclipsesVelocity:(BOOL)arg1 ;
-(void)setLiftOffState:(long long)arg1 ;
-(void)setIncreasingForceState:(long long)arg1 ;
-(void)setIncreasingForceTimestamp:(double)arg1 ;
-(BOOL)shouldResetRangeForVelocity:(CGPoint)arg1 previousVelocity:(CGPoint)arg2 ;
-(long long)increasingForceState;
-(long long)liftOffState;
-(double)increasingForceTimestamp;
-(void)_updateLiftOffState;
@end

