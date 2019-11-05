/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNFastGestureRecognition;

@interface VCPPriorityAnalysis : NSObject {

	BOOL _buttonPressed;
	BOOL _light;
	float _accumulateScore;
	int _frameInd;
	int _rotationAngle;
	int _sendStopSignalKTimes;
	Rotator* _rotator;
	EncodeStats* _stats;
	VCPCNNFastGestureRecognition* _fastGestureDetector;

}
+(id)priorityAnalysis;
-(id)init;
-(void)dealloc;
-(int)fastSignLanguageDetection:(float*)arg1 ofPixelBuffer:(CVBufferRef)arg2 withMetadata:(id)arg3 ;
-(int)calculatePriorityScore:(float*)arg1 ofPixelBuffer:(CVBufferRef)arg2 withMetadata:(id)arg3 ;
@end

