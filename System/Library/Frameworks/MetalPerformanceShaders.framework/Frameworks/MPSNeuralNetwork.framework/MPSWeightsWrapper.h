/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource.h>

@protocol MPSCNNBatchNormalizationDataSource, MPSCNNConvolutionDataSource;
@class MPSCNNConvolutionDescriptor, NSString;

@interface MPSWeightsWrapper : NSObject <MPSCNNConvolutionDataSource> {

	id<MPSCNNBatchNormalizationDataSource> _dataSource;
	id<MPSCNNConvolutionDataSource> _source;
	NeuronInfo _info;
	MPSCNNConvolutionDescriptor* _descriptor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)label;
-(id)descriptor;
-(unsigned)dataType;
-(void)purge;
-(void*)weights;
-(float*)biasTerms;
-(1*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(id)initWithSource:(id)arg1 neuronInfo:(NeuronInfo)arg2 batchNorm:(id)arg3 ;
@end

