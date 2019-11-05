/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerElement.h>

@class NSString, GCControllerButtonInput, GCControllerDirectionPad;

@interface GCControllerTouchpad : GCControllerElement {

	float _touchpadRelativeWindowSize;
	float _touchpadRelativeOriginBufferSize;
	long long _touchState;
	BOOL _leftBufferZone;
	BOOL _beganTouchOutsideBounds;
	BOOL _previousPressedState;
	CGPoint _absoluteWindowLocation;
	CGPoint _absolutePosition;
	CGPoint _absoluteTouchDownPosition;
	CGPoint _relativePosition;
	NSString* _descriptionName;
	BOOL _reportsAbsoluteTouchSurfaceValues;
	GCControllerButtonInput* _button;
	/*^block*/id _touchDown;
	/*^block*/id _touchMoved;
	/*^block*/id _touchUp;
	GCControllerDirectionPad* _touchSurface;

}

@property (nonatomic,retain) GCControllerDirectionPad * touchSurface;              //@synthesize touchSurface=_touchSurface - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * button;                   //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) id touchDown;                                           //@synthesize touchDown=_touchDown - In the implementation block
@property (nonatomic,copy) id touchMoved;                                          //@synthesize touchMoved=_touchMoved - In the implementation block
@property (nonatomic,copy) id touchUp;                                             //@synthesize touchUp=_touchUp - In the implementation block
@property (nonatomic,readonly) long long touchState;                               //@synthesize touchState=_touchState - In the implementation block
@property (assign,nonatomic) BOOL reportsAbsoluteTouchSurfaceValues;               //@synthesize reportsAbsoluteTouchSurfaceValues=_reportsAbsoluteTouchSurfaceValues - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GCControllerButtonInput *)button;
-(void)setTouchDown:(id)arg1 ;
-(id)touchDown;
-(id)initWithDescriptionName:(id)arg1 ;
-(double)distanceBetweenCGPoint:(CGPoint)arg1 andCGPoint:(CGPoint)arg2 ;
-(CGPoint)mulCGPoint:(CGPoint)arg1 byScalar:(double)arg2 ;
-(CGPoint)normalizeCGPoint:(CGPoint)arg1 ;
-(CGPoint)scaleCGPoint:(CGPoint)arg1 toLength:(double)arg2 ;
-(CGPoint)addCGPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(double)magnitudeForCGPoint:(CGPoint)arg1 ;
-(CGPoint)subCGPoint:(CGPoint)arg1 fromPoint:(CGPoint)arg2 ;
-(CGPoint)clampPoint:(CGPoint)arg1 toLength:(double)arg2 ;
-(id)touchMoved;
-(id)touchUp;
-(BOOL)determineTouchStateWithDigitizerX:(float)arg1 digitizerY:(float)arg2 timeStamp:(unsigned long long)arg3 touchDown:(BOOL)arg4 ;
-(BOOL)calculateRelativePositionWithDigitizerX:(float)arg1 digitizerY:(float)arg2 timeStamp:(unsigned long long)arg3 touchDown:(BOOL)arg4 ;
-(void)reportDigitizerChange:(id)arg1 ;
-(GCControllerDirectionPad *)touchSurface;
-(void)setValueForXAxis:(float)arg1 yAxis:(float)arg2 touchDown:(BOOL)arg3 pressed:(BOOL)arg4 ;
-(BOOL)setDigitizerX:(float)arg1 digitizerY:(float)arg2 timeStamp:(unsigned long long)arg3 touchDown:(BOOL)arg4 queue:(id)arg5 ;
-(void)setValue:(float)arg1 yAxis:(float)arg2 touchDown:(BOOL)arg3 ;
-(void)setTouchMoved:(id)arg1 ;
-(void)setTouchUp:(id)arg1 ;
-(void)setTouchSurface:(GCControllerDirectionPad *)arg1 ;
-(long long)touchState;
-(BOOL)reportsAbsoluteTouchSurfaceValues;
-(void)setReportsAbsoluteTouchSurfaceValues:(BOOL)arg1 ;
@end

