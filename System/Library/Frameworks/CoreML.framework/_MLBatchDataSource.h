/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/ETDataProvider.h>

@protocol MLBatchProvider;
@class MLNeuralNetworkEngine;

@interface _MLBatchDataSource : NSObject <ETDataProvider> {

	BOOL _useForPrediction;
	id<MLBatchProvider> _batchProvider;
	MLNeuralNetworkEngine* _nnEngine;

}

@property (nonatomic,readonly) id<MLBatchProvider> batchProvider;              //@synthesize batchProvider=_batchProvider - In the implementation block
@property (nonatomic,readonly) MLNeuralNetworkEngine * nnEngine;               //@synthesize nnEngine=_nnEngine - In the implementation block
@property (nonatomic,readonly) BOOL useForPrediction;                          //@synthesize useForPrediction=_useForPrediction - In the implementation block
-(unsigned long long)numberOfDataPoints;
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initWithMLBatchProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
-(id<MLBatchProvider>)batchProvider;
-(MLNeuralNetworkEngine *)nnEngine;
-(BOOL)useForPrediction;
@end

