/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIColor, NSNumber;

@interface CISpotColor : CIFilter {

	CIImage* inputImage;
	CIColor* inputCenterColor1;
	CIColor* inputReplacementColor1;
	NSNumber* inputCloseness1;
	NSNumber* inputContrast1;
	CIColor* inputCenterColor2;
	CIColor* inputReplacementColor2;
	NSNumber* inputCloseness2;
	NSNumber* inputContrast2;
	CIColor* inputCenterColor3;
	CIColor* inputReplacementColor3;
	NSNumber* inputCloseness3;
	NSNumber* inputContrast3;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CISpotColor;
@end

