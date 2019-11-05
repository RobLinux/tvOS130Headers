/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCRCGestureFactoryCallback;
#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@class SCRCTargetSelectorTimer;

@interface SCRCGestureFactory : NSObject {

	double _stallDistance;
	double _maxDimension;
	double _thumbRegion;
	long long _orientation;
	long long _directions[7];
	CGPoint _axisFlipper;
	double _scaledTrackingDistance;
	BOOL _setTrackingTimer;
	double _flickVelocityThreshold;
	double _tapVelocityThreshold;
	double _echoWaitTime;
	CGRect _tapSpeedRegion;
	double _tapVelocityThresholdForRegion;
	long long _tapSpeedFingerCount;
	BOOL _inTapSpeedRegionForDownEvent;
	CGRect _mainFrame;
	CGRect _gutterFrame;
	double _lastTime;
	double _lastDownTime;
	double _lastGutterDownTime;
	double _lastDegrees;
	double _startDegrees;
	double _startDistance;
	double _potentialTrackingStartTimestamp;
	BOOL _requireUp;
	BOOL _thumbRejectionEnabled;
	long long _state;
	long long _direction;
	double _directionalSlope;
	SCRCFingerState _finger[2];
	unsigned long long _absoluteFingerCount;
	unsigned short _fingerCount;
	unsigned short _lastFingerCount;
	double _distance;
	unsigned long long _tapCount;
	CGRect _tapFrame;
	CGRect _tapMultiFrame;
	id<SCRCGestureFactoryCallback> _trackDelegate;
	id<SCRCGestureFactoryCallback> _tapDelegate;
	id<SCRCGestureFactoryCallback> _gutterUpDelegate;
	id<SCRCGestureFactoryCallback> _splitTapDelegate;
	id<SCRCGestureFactoryCallback> _canSplitTapDelegate;
	id<SCRCGestureFactoryCallback> _didBeginSplitGestureDelegate;
	SCRCTargetSelectorTimer* _trackingTimer;
	SCD_Struct_SC6 _tap;
	SCRCTargetSelectorTimer* _tapTimer;
	SCRCTargetSelectorTimer* _gutterUpTimer;
	SCRCGestureFactory* _splitFactory;
	SCD_Struct_SC7 _split;

}

@property (assign,nonatomic) BOOL thumbRejectionEnabled;              //@synthesize thumbRejectionEnabled=_thumbRejectionEnabled - In the implementation block
-(void)dealloc;
-(void)reset;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(CGPoint)startLocation;
-(double)distance;
-(double)velocity;
-(long long)direction;
-(CGPoint)rawLocation;
-(CGRect)mainFrame;
-(CGPoint)endLocation;
-(unsigned long long)fingerCount;
-(id)initWithSize:(CGSize)arg1 delegate:(id)arg2 threadKey:(id)arg3 ;
-(void)_enterTrackingMode:(id)arg1 ;
-(void)_handleTap;
-(CGRect)_currentTapRect;
-(void)_updateMultiTapFrame;
-(void)_resetSplit;
-(void)_processUpAndPost:(BOOL)arg1 ;
-(void)_up;
-(void)_updateTapState;
-(long long)gestureState;
-(BOOL)_handleSplitTap;
-(SCD_Struct_SC8)handleGestureEvent:(id)arg1 ;
-(SCD_Struct_SC8)captureCurrentState;
-(BOOL)_handleSplitEvent:(id)arg1 ;
-(void)_drag:(id)arg1 ;
-(void)_down:(id)arg1 ;
-(void)_updateStartWithPoint:(CGPoint)arg1 time:(double)arg2 ;
-(CGRect)tapFrame;
-(double)vector;
-(id)initWithSize:(CGSize)arg1 delegate:(id)arg2 ;
-(void)setFlickSpeed:(double)arg1 ;
-(double)flickSpeed;
-(void)setTapSpeed:(double)arg1 ;
-(void)setTapSpeedTimeThreshold:(double)arg1 forRegion:(CGRect)arg2 fingerCount:(long long)arg3 ;
-(double)tapSpeed;
-(void)_handleGutterUp;
-(double)directionalSlope;
-(unsigned long long)absoluteFingerCount;
-(unsigned long long)tapCount;
-(BOOL)tapIsDown;
-(double)firstFingerPressure;
-(double)firstFingerAltitude;
-(double)firstFingerAzimuth;
-(CGPoint)rawAverageLocation;
-(CGRect)multiTapFrame;
-(CGPoint)tapPoint;
-(CGPoint)tapPointWeightedToSides;
-(double)tapInterval;
-(id)gestureStateString;
-(BOOL)thumbRejectionEnabled;
-(void)setThumbRejectionEnabled:(BOOL)arg1 ;
@end

