/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DSPGMLModel, MLFeatureProvider;
@class MLModelDescription, DSPGMLInputProvider, NSArray;

@interface DSPGCoreMLInfo : NSObject {

	id<DSPGMLModel> _model;
	MLModelDescription* _modelDescription;
	DSPGMLInputProvider* _inputProvider;
	id<MLFeatureProvider> _outputProvider;
	NSArray* _outputs;
	NSArray* _outputLabels;

}

@property (nonatomic,retain) id<DSPGMLModel> model;                              //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) MLModelDescription * modelDescription;              //@synthesize modelDescription=_modelDescription - In the implementation block
@property (nonatomic,retain) DSPGMLInputProvider * inputProvider;                //@synthesize inputProvider=_inputProvider - In the implementation block
@property (nonatomic,retain) id<MLFeatureProvider> outputProvider;               //@synthesize outputProvider=_outputProvider - In the implementation block
@property (nonatomic,retain) NSArray * outputs;                                  //@synthesize outputs=_outputs - In the implementation block
@property (nonatomic,retain) NSArray * outputLabels;                             //@synthesize outputLabels=_outputLabels - In the implementation block
-(id<DSPGMLModel>)model;
-(MLModelDescription *)modelDescription;
-(void)setModel:(id<DSPGMLModel>)arg1 ;
-(NSArray *)outputs;
-(void)setOutputProvider:(id<MLFeatureProvider>)arg1 ;
-(void)setOutputs:(NSArray *)arg1 ;
-(void)setModelDescription:(MLModelDescription *)arg1 ;
-(DSPGMLInputProvider *)inputProvider;
-(NSArray *)outputLabels;
-(id<MLFeatureProvider>)outputProvider;
-(void)setInputProvider:(DSPGMLInputProvider *)arg1 ;
-(void)setOutputLabels:(NSArray *)arg1 ;
@end

