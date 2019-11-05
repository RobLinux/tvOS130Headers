/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class AVAudioPCMBuffer, NSMutableArray;

@interface VCPLoudnessAnalyzer : NSObject {

	AVAudioPCMBuffer* _pcmBuffer;
	long long _framePosition;
	LkFsMeasure* _loudnessAnalyzer;
	CAStreamBasicDescription* _processFormat;
	float _sampleRate;
	vector<double, std::__1::allocator<double> >* _peakValues;
	vector<double, std::__1::allocator<double> >* _momentaryEnergyValues;
	vector<float, std::__1::allocator<float> >* _loudnessSampleBuffer;
	NSMutableArray* _loudnessResults;
	unsigned _samplesFor100ms;
	AUOutputBL* _samplesForProcessingBufferList;

}
-(id)init;
-(void)dealloc;
-(id)results;
-(int)setupWithSample:(opaqueCMSampleBufferRef)arg1 andSampleBatchSize:(int)arg2 ;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
@end

