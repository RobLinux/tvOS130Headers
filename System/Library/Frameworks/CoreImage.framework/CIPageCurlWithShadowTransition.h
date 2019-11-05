/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIPageCurlWithShadowTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputBacksideImage;
	CIVector* inputExtent;
	NSNumber* inputTime;
	NSNumber* inputAngle;
	NSNumber* inputRadius;
	NSNumber* inputShadowSize;
	NSNumber* inputShadowAmount;
	CIVector* inputShadowExtent;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CIPageCurlWithShadowTransition;
-(id)_CIPageCurlNoShadowTransition;
@end
