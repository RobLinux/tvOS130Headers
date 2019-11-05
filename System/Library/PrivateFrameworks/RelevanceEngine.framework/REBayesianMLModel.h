/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REMLModel.h>
#import <RelevanceEngine/REBayesianMLModelProperties.h>

@class REExportedTable;

@interface REBayesianMLModel : REMLModel <REBayesianMLModelProperties> {

	BayesianModel* _model;
	unsigned long long _numberOfFeatures;

}

@property (nonatomic,readonly) REExportedTable * content; 
+(unsigned long long)featureBitWidth;
+(unsigned long long)maxFeatureCount;
-(REExportedTable *)content;
-(id)_predictWithFeatures:(id)arg1 ;
-(id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3 ;
-(BOOL)_saveDebugModelToURL:(id)arg1 error:(id*)arg2 ;
-(void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 ;
-(BOOL)_saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadModelFromURL:(id)arg1 error:(id*)arg2 ;
-(void)_clearModel;
-(long long)_getNumberOfCoordinates;
-(float)_getAveragePrediction;
-(float)_getNormalizedEntropy;
-(unsigned long long)_getTotalExampleCount;
-(unsigned long long)_getTotalPositiveCount;
-(void)logCoreAnalyticsMetrics;
-(unsigned long long)_maxFeatureCoordinates;
-(void)_loadFeatureVector:(vector<unsigned long long, std::__1::allocator<unsigned long long> >*)arg1 fromFeatureMap:(id)arg2 ;
-(BOOL)_saveModelToURL:(id)arg1 includeDebugData:(BOOL)arg2 error:(id*)arg3 ;
@end

