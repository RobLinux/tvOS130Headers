/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPEdgeDetector : NSObject {

	unsigned long long _widthPadded;
	unsigned long long _heightPadded;
	unsigned long long _width;
	unsigned long long _height;
	int _widthExt;
	int _heightExt;
	DSPSplitComplex* _gradient;
	float* _image;
	float* _imageFiltered;
	float* _nonMaxSuppressed;
	float* _gradientX;
	float* _gradientY;
	float* _gradientMag;
	float* _edgeMap;

}
-(void)dealloc;
-(int)noiseReduction:(float*)arg1 sigma:(float)arg2 imageFiltered:(float*)arg3 ;
-(int)gradientEstimation:(float*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 gradient:(DSPSplitComplex*)arg4 gradientMag:(float*)arg5 ;
-(BOOL)isInImage:(int)arg1 width:(int)arg2 height:(int)arg3 ;
-(id)initWithImage:(float*)arg1 edgeMap:(float*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 widthExtension:(int)arg5 heightExtension:(int)arg6 ;
-(int)detectWithSigma:(float)arg1 lowThreshold:(float)arg2 highThreshold:(float)arg3 ;
@end

