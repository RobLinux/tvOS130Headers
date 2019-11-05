/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIPortraitAntialias : CIFilter {

	CIImage* inputImage;
	NSNumber* inputMaxBlurInPixels;
	NSNumber* inputAntiAliasRadius;
	NSNumber* inputLumaNoiseAmpl;
	NSNumber* inputLumaNoiseModelCoeff;
	NSNumber* inputScale;
	CIVector* inputRect;
	CIVector* inputSensorSize;

}

@property (retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputMaxBlurInPixels; 
@property (nonatomic,copy) NSNumber * inputAntiAliasRadius; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseAmpl; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseModelCoeff; 
@property (nonatomic,copy) NSNumber * inputScale; 
@property (nonatomic,copy) CIVector * inputRect; 
@property (nonatomic,copy) CIVector * inputSensorSize; 
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputLumaNoiseAmpl;
-(void)setInputLumaNoiseAmpl:(NSNumber *)arg1 ;
-(NSNumber *)inputLumaNoiseModelCoeff;
-(void)setInputLumaNoiseModelCoeff:(NSNumber *)arg1 ;
-(id)_kernel:(BOOL)arg1 withAddedNoise:(BOOL)arg2 ;
-(id)_noiseGeneratorKernel;
-(id)noiseColorKernel;
-(id)outputImage:(id)arg1 horizontal:(BOOL)arg2 ;
-(NSNumber *)inputMaxBlurInPixels;
-(void)setInputMaxBlurInPixels:(NSNumber *)arg1 ;
-(NSNumber *)inputAntiAliasRadius;
-(void)setInputAntiAliasRadius:(NSNumber *)arg1 ;
-(CIVector *)inputRect;
-(void)setInputRect:(CIVector *)arg1 ;
-(CIVector *)inputSensorSize;
-(void)setInputSensorSize:(CIVector *)arg1 ;
@end

