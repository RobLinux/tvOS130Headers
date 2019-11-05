/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/NSCopying.h>
#import <Vision/NSSecureCoding.h>

@class VNSizeRange;

@interface VNSupportedImageSize : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _cachedCalculatedHash;
	BOOL _orientationAgnostic;
	unsigned _idealImageFormat;
	unsigned _idealOrientation;
	VNSizeRange* _pixelsWideRange;
	VNSizeRange* _pixelsHighRange;
	unsigned long long _aspectRatioHandling;

}

@property (nonatomic,readonly) VNSizeRange * pixelsWideRange;                                      //@synthesize pixelsWideRange=_pixelsWideRange - In the implementation block
@property (nonatomic,readonly) VNSizeRange * pixelsHighRange;                                      //@synthesize pixelsHighRange=_pixelsHighRange - In the implementation block
@property (nonatomic,readonly) unsigned long long aspectRatioHandling;                             //@synthesize aspectRatioHandling=_aspectRatioHandling - In the implementation block
@property (nonatomic,readonly) unsigned idealImageFormat;                                          //@synthesize idealImageFormat=_idealImageFormat - In the implementation block
@property (nonatomic,readonly) unsigned idealOrientation;                                          //@synthesize idealOrientation=_idealOrientation - In the implementation block
@property (getter=isOrientationAgnostic,nonatomic,readonly) BOOL orientationAgnostic;              //@synthesize orientationAgnostic=_orientationAgnostic - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(VNSizeRange *)pixelsWideRange;
-(VNSizeRange *)pixelsHighRange;
-(id)initWithIdealFormat:(unsigned)arg1 pixelsWideRange:(id)arg2 pixelsHighRange:(id)arg3 aspectRatioHandling:(unsigned long long)arg4 idealOrientation:(unsigned)arg5 orientationAgnostic:(BOOL)arg6 ;
-(BOOL)isAllowedPixelsWide:(unsigned long long)arg1 pixelsHigh:(unsigned long long)arg2 ;
-(unsigned long long)aspectRatioHandling;
-(unsigned)idealImageFormat;
-(unsigned)idealOrientation;
-(BOOL)isOrientationAgnostic;
@end

