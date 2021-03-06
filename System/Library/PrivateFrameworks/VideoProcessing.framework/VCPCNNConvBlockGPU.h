/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNConvBlock.h>

@class MPSCNNConvolution;

@interface VCPCNNConvBlockGPU : VCPCNNConvBlock {

	float* _batchNormMean;
	float* _batchNormVar;
	float* _batchNormGamma;
	float* _batchNormBeta;
	MPSCNNConvolution* _mpsConv;

}
-(void)dealloc;
-(void)releaseBatchNormMemory;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)readBatchNormParam:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)fillConvWeightsGPU;
-(int)gpuForward;
-(int)forward;
@end

