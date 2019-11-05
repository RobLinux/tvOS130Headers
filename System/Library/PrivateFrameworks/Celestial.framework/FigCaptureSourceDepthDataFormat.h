/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSourceFormat.h>

@class NSArray;

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) SCD_Struct_BW19 dimensions; 
@property (readonly) float minSupportedFrameRate; 
@property (readonly) float maxSupportedFrameRate; 
@property (readonly) float fieldOfView; 
@property (readonly) SCD_Struct_BW19 highResStillImageDimensions; 
@property (getter=isStillImageOnlyDepthData,readonly) BOOL stillImageOnlyDepthData; 
@property (readonly) float portraitEffectsMatteMainImageDownscalingFactor; 
@property (readonly) BOOL RGBIRStereoFusionSupported; 
@property (readonly) NSArray * supportedSemanticSegmentationMatteURNs; 
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(float)maxSupportedFrameRate;
-(SCD_Struct_BW19)dimensions;
-(float)portraitEffectsMatteMainImageDownscalingFactor;
-(BOOL)RGBIRStereoFusionSupported;
-(SCD_Struct_BW19)highResStillImageDimensions;
-(float)minSupportedFrameRate;
-(SCD_Struct_BW19)depthEngineOutputDimensions;
-(id)copyWithNewPixelFormat:(unsigned)arg1 ;
-(float)fieldOfView;
-(BOOL)isStillImageOnlyDepthData;
-(NSArray *)supportedSemanticSegmentationMatteURNs;
@end

