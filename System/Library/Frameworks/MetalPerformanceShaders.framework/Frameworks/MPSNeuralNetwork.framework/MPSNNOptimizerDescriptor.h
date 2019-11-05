/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPSNNOptimizerDescriptor : NSObject {

	float _learningRate;
	float _gradientRescale;
	BOOL _applyGradientClipping;
	float _gradientClipMax;
	float _gradientClipMin;
	unsigned long long _regularizationType;
	float _regularizationScale;

}

@property (assign,nonatomic) float learningRate;                                 //@synthesize learningRate=_learningRate - In the implementation block
@property (assign,nonatomic) float gradientRescale;                              //@synthesize gradientRescale=_gradientRescale - In the implementation block
@property (assign,nonatomic) BOOL applyGradientClipping;                         //@synthesize applyGradientClipping=_applyGradientClipping - In the implementation block
@property (assign,nonatomic) float gradientClipMax;                              //@synthesize gradientClipMax=_gradientClipMax - In the implementation block
@property (assign,nonatomic) float gradientClipMin;                              //@synthesize gradientClipMin=_gradientClipMin - In the implementation block
@property (assign,nonatomic) float regularizationScale;                          //@synthesize regularizationScale=_regularizationScale - In the implementation block
@property (assign,nonatomic) unsigned long long regularizationType;              //@synthesize regularizationType=_regularizationType - In the implementation block
+(id)optimizerDescriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 regularizationType:(unsigned long long)arg3 regularizationScale:(float)arg4 ;
+(id)optimizerDescriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(BOOL)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(unsigned long long)arg6 regularizationScale:(float)arg7 ;
-(void)setLearningRate:(float)arg1 ;
-(void)setGradientRescale:(float)arg1 ;
-(void)setApplyGradientClipping:(BOOL)arg1 ;
-(void)setGradientClipMax:(float)arg1 ;
-(void)setGradientClipMin:(float)arg1 ;
-(void)setRegularizationType:(unsigned long long)arg1 ;
-(void)setRegularizationScale:(float)arg1 ;
-(id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(BOOL)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(unsigned long long)arg6 regularizationScale:(float)arg7 ;
-(id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 regularizationType:(unsigned long long)arg3 regularizationScale:(float)arg4 ;
-(float)learningRate;
-(float)gradientRescale;
-(BOOL)applyGradientClipping;
-(float)gradientClipMax;
-(float)gradientClipMin;
-(unsigned long long)regularizationType;
-(float)regularizationScale;
@end

