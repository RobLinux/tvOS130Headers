/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GCControllerElement.h>

@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement {

	BOOL _flipped;
	float _value;
	/*^block*/id _valueChangedHandler;
	GCControllerButtonInput* _positive;
	GCControllerButtonInput* _negative;

}

@property (assign,nonatomic) float value;                                     //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * positive;              //@synthesize positive=_positive - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * negative;              //@synthesize negative=_negative - In the implementation block
@property (assign,getter=isFlipped,nonatomic) BOOL flipped;                   //@synthesize flipped=_flipped - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                            //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
-(BOOL)isFlipped;
-(void)setFlipped:(BOOL)arg1 ;
-(void)setValueChangedHandler:(id)arg1 ;
-(void)setNegative:(GCControllerButtonInput *)arg1 ;
-(GCControllerButtonInput *)negative;
-(int)getAndResetTimesPressed;
-(BOOL)isAnalog;
-(id)valueChangedHandler;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)_setValue:(float)arg1 ;
-(id)initWithCollection:(id)arg1 flipped:(BOOL)arg2 ;
-(GCControllerButtonInput *)positive;
-(void)setPositive:(GCControllerButtonInput *)arg1 ;
@end

