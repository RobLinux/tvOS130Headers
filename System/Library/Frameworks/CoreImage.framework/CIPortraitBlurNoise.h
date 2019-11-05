/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIPortraitBlurNoise : CIFilter {

	CIImage* inputImage;
	NSNumber* inputLumaNoiseAmpl;
	NSNumber* inputLumaNoiseModelCoeff;
	CIVector* inputExtent;
	NSNumber* inputUseMetal;

}

@property (retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseAmpl; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseModelCoeff; 
@property (copy) CIVector * inputExtent; 
@property (nonatomic,copy) NSNumber * inputUseMetal; 
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(id)_kernelMetal;
-(NSNumber *)inputLumaNoiseAmpl;
-(void)setInputLumaNoiseAmpl:(NSNumber *)arg1 ;
-(NSNumber *)inputLumaNoiseModelCoeff;
-(void)setInputLumaNoiseModelCoeff:(NSNumber *)arg1 ;
-(NSNumber *)inputUseMetal;
-(void)setInputUseMetal:(NSNumber *)arg1 ;
@end

