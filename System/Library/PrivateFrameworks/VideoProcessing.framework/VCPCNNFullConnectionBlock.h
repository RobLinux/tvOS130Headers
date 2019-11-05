/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNBlock.h>

@interface VCPCNNFullConnectionBlock : VCPCNNBlock {

	float* _weight;
	float* _bias;
	int _numNeurons;
	int _neuronType;

}
+(id)fcBlockWithNumNeurons:(int)arg1 NeuronType:(int)arg2 ;
-(void)dealloc;
-(BOOL)useGPU;
-(BOOL)supportGPU;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(id)initWithParameters:(int)arg1 NeuronType:(int)arg2 ;
-(int)readWeightsBias:(_sFILE*)arg1 weights:(float*)arg2 bias:(float*)arg3 inputDim:(int)arg4 outputDim:(int)arg5 quantFactor:(int)arg6 ;
-(int)loadWeights:(_sFILE*)arg1 inputDim:(int)arg2 outputDim:(int)arg3 quantFactor:(int)arg4 ;
@end

