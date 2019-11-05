/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>

@class UIDelayedAction;

@interface _UIPanOrFlickGestureRecognizer : UIPanGestureRecognizer {

	unsigned long long _touchCount;
	BOOL _didLongPress;
	BOOL _longPressOnly;
	unsigned long long _allowedFlickDirections;
	double _maximumFlickDuration;
	double _minimumFlickDistance;
	double _minimumPressDuration;
	double _allowableMovement;
	double _responsivenessDelay;
	double _timestampBeforeGestureBegan;
	double _timestampOfLastEvent;
	UIDelayedAction* _elapsedAction;
	UIDelayedAction* _responsivenessAction;
	CGPoint _initialCentroidLocation;

}

@property (assign,nonatomic) double timestampBeforeGestureBegan;                                           //@synthesize timestampBeforeGestureBegan=_timestampBeforeGestureBegan - In the implementation block
@property (assign,nonatomic) double timestampOfLastEvent;                                                  //@synthesize timestampOfLastEvent=_timestampOfLastEvent - In the implementation block
@property (nonatomic,retain) UIDelayedAction * elapsedAction;                                              //@synthesize elapsedAction=_elapsedAction - In the implementation block
@property (nonatomic,retain) UIDelayedAction * responsivenessAction;                                       //@synthesize responsivenessAction=_responsivenessAction - In the implementation block
@property (assign,nonatomic) CGPoint initialCentroidLocation;                                              //@synthesize initialCentroidLocation=_initialCentroidLocation - In the implementation block
@property (nonatomic,readonly) id<_UIPanOrFlickGestureRecognizerDelegate> panOrFlickDelegate; 
@property (assign,nonatomic) unsigned long long allowedFlickDirections;                                    //@synthesize allowedFlickDirections=_allowedFlickDirections - In the implementation block
@property (assign,nonatomic) double maximumFlickDuration;                                                  //@synthesize maximumFlickDuration=_maximumFlickDuration - In the implementation block
@property (assign,nonatomic) double minimumFlickDistance;                                                  //@synthesize minimumFlickDistance=_minimumFlickDistance - In the implementation block
@property (nonatomic,readonly) unsigned long long recognizedFlickDirection; 
@property (assign,nonatomic) double minimumPressDuration;                                                  //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (assign,nonatomic) double allowableMovement;                                                     //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (nonatomic,readonly) BOOL didLongPress;                                                          //@synthesize didLongPress=_didLongPress - In the implementation block
@property (assign,nonatomic) BOOL longPressOnly;                                                           //@synthesize longPressOnly=_longPressOnly - In the implementation block
@property (assign,nonatomic) double responsivenessDelay;                                                   //@synthesize responsivenessDelay=_responsivenessDelay - In the implementation block
-(void)dealloc;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(void)setAllowableMovement:(double)arg1 ;
-(double)minimumPressDuration;
-(double)allowableMovement;
-(void)startTimer;
-(void)clearTimer;
-(void)enoughTimeElapsed:(id)arg1 ;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(BOOL)didLongPress;
-(void)setAllowedFlickDirections:(unsigned long long)arg1 ;
-(void)setMaximumFlickDuration:(double)arg1 ;
-(void)setMinimumFlickDistance:(double)arg1 ;
-(void)setResponsivenessDelay:(double)arg1 ;
-(void)setLongPressOnly:(BOOL)arg1 ;
-(unsigned long long)recognizedFlickDirection;
-(double)timestampOfLastEvent;
-(double)timestampBeforeGestureBegan;
-(double)maximumFlickDuration;
-(double)minimumFlickDistance;
-(unsigned long long)allowedFlickDirections;
-(CGPoint)initialCentroidLocation;
-(BOOL)isValidLongPress;
-(id<_UIPanOrFlickGestureRecognizerDelegate>)panOrFlickDelegate;
-(double)responsivenessDelay;
-(void)responsivenessTimeElapsed:(id)arg1 ;
-(void)setTimestampOfLastEvent:(double)arg1 ;
-(void)setTimestampBeforeGestureBegan:(double)arg1 ;
-(void)setInitialCentroidLocation:(CGPoint)arg1 ;
-(BOOL)longPressOnly;
-(UIDelayedAction *)elapsedAction;
-(void)setElapsedAction:(UIDelayedAction *)arg1 ;
-(UIDelayedAction *)responsivenessAction;
-(void)setResponsivenessAction:(UIDelayedAction *)arg1 ;
@end

