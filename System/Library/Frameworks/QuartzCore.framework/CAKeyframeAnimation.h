/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@class NSArray, NSString;

@interface CAKeyframeAnimation : CAPropertyAnimation

@property (copy) NSArray * values; 
@property (assign) const CGPathRef path; 
@property (copy) NSArray * keyTimes; 
@property (copy) NSArray * timingFunctions; 
@property (copy) NSString * calculationMode; 
@property (copy) NSArray * tensionValues; 
@property (copy) NSArray * continuityValues; 
@property (copy) NSArray * biasValues; 
@property (copy) NSString * rotationMode; 
+(id)normalizedKeyframeAnimationWithKeyPath:(id)arg1 ;
-(BOOL)SCN_evaluateAtTime:(double)arg1 reverse:(BOOL)arg2 to:(void*)arg3 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(const CGPathRef)path;
-(void)setPath:(const CGPathRef)arg1 ;
-(void)CA_prepareRenderValue;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(NSString *)calculationMode;
-(void)setCalculationMode:(NSString *)arg1 ;
-(NSArray *)keyTimes;
-(void)setKeyTimes:(NSArray *)arg1 ;
-(NSArray *)timingFunctions;
-(void)setTimingFunctions:(NSArray *)arg1 ;
-(NSArray *)tensionValues;
-(void)setTensionValues:(NSArray *)arg1 ;
-(NSArray *)continuityValues;
-(void)setContinuityValues:(NSArray *)arg1 ;
-(NSArray *)biasValues;
-(void)setBiasValues:(NSArray *)arg1 ;
-(NSString *)rotationMode;
-(void)setRotationMode:(NSString *)arg1 ;
@end

