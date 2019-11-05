/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPSCNNConvolutionDataSource <NSCopying,NSObject>
@optional
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2;
-(id*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(unsigned)weightsQuantizationType;
-(id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3;
-(BOOL)updateWithGradientState:(id)arg1 sourceState:(id)arg2;
-(unsigned)weightsLayout;

@required
-(BOOL)load;
-(id)label;
-(id)descriptor;
-(unsigned)dataType;
-(void)purge;
-(void*)weights;
-(float*)biasTerms;

@end

