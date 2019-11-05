/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class BWRamp;

@interface BWStreamingCVAFilterRendererAnimator : NSObject {

	SCD_Struct_BW119 _currentFrame;
	int _mostRecentEffectStatus;
	BWRamp* _simulatedApertureRamp;
	float _defaultSimulatedAperture;

}

@property (getter=isDepthAvailable,nonatomic,readonly) BOOL depthAvailable; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(BOOL)isDepthAvailable;
-(id)initWithEffectStatus:(int)arg1 ;
-(void)_resetSimulatedApertureRampWithEffectStatus:(int)arg1 clientSuppliedSimulatedAperture:(float)arg2 ;
-(SCD_Struct_BW119*)simulateNextFrameWithEffectStatus:(int)arg1 portraitStability:(float)arg2 clientSuppliedSimulatedAperture:(float)arg3 ;
@end

