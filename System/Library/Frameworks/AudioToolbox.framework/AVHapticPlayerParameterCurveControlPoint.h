/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVHapticPlayerParameterCurveControlPoint : NSObject {

	float _value;
	double _time;

}

@property (assign) double time;              //@synthesize time=_time - In the implementation block
@property (assign) float value;              //@synthesize value=_value - In the implementation block
-(float)value;
-(void)setValue:(float)arg1 ;
-(double)time;
-(id)initWithTime:(double)arg1 value:(float)arg2 ;
-(void)setTime:(double)arg1 ;
@end

