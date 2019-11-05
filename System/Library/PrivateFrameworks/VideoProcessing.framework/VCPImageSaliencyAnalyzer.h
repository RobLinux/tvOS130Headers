/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPImageSaliencyAnalyzer : VCPImageAnalyzer {

	int _chunk;
	CGRect _region[5];
	float _score[5];
	int _maxNumRegions;
	BOOL _prune;

}
+(id)analyzerWith:(int)arg1 prune:(BOOL)arg2 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
-(int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)processTile:(CVBufferRef)arg1 results:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(int)aggregateTileResults:(id)arg1 tileRect:(CGRect)arg2 imageSize:(CGSize)arg3 landscape:(BOOL)arg4 results:(id)arg5 ;
-(id)initWithMaxNumRegions:(int)arg1 prune:(BOOL)arg2 ;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 withChunk:(int)arg3 ;
-(float)outputScaling;
-(float)computeScore:(float*)arg1 width:(int)arg2 height:(int)arg3 posX:(int)arg4 posY:(int)arg5 ;
-(int)scaleImage:(CVBufferRef)arg1 toData:(float*)arg2 withWidth:(int)arg3 andHeight:(int)arg4 ;
-(int)getSalientRegions:(/*^block*/id)arg1 ;
-(int)saliencyDetection:(CVBufferRef)arg1 salientRegions:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(id)pruneRegions:(id)arg1 ;
-(int)generateSalientRegion:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3 ;
@end

