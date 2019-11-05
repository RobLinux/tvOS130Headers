/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@class MPSCNNConvolutionGradient;

@interface MPSCNNConvolutionTransposeGradient : MPSCNNGradientKernel {

	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;
	unsigned long long _groups;
	unsigned long long _gradientOption;
	MPSCNNConvolutionGradient* _convolutionGradient;

}

@property (nonatomic,readonly) unsigned long long sourceGradientFeatureChannels;               //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceImageFeatureChannels;                  //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long groups;                                      //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain,readonly) id<MPSCNNConvolutionDataSource> dataSource; 
@property (assign,nonatomic) unsigned long long gradientOption;                                //@synthesize gradientOption=_gradientOption - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)groups;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)weights;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(SCD_Struct_MP11*)arg4 secondaryOffset:(SCD_Struct_MP11*)arg5 kernelOffset:(SCD_Struct_MP11*)arg6 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 ;
-(id<MPSCNNConvolutionDataSource>)dataSource;
-(BOOL)filterHandlesPlugin;
-(void)reloadWeightsAndBiasesFromDataSource;
-(void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg1 state:(id)arg2 ;
-(id)biases;
-(unsigned long long)sourceGradientFeatureChannels;
-(unsigned long long)sourceImageFeatureChannels;
-(unsigned long long)gradientOption;
-(void)setGradientOption:(unsigned long long)arg1 ;
-(id)PeakAtWeights:(id)arg1 ;
@end

