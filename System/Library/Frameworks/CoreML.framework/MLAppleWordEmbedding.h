/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <CoreML/MLModelSpecificationLoader.h>

@class MLAppleWordEmbeddingParameters, NSString;

@interface MLAppleWordEmbedding : MLModel <MLModelSpecificationLoader> {

	void* wordEmbeddingModel;
	MLAppleWordEmbeddingParameters* _parameters;

}

@property (readonly) MLAppleWordEmbeddingParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveAppleWordEmbeddingModelToURL:(id)arg1 wordEmbeddingParameters:(id)arg2 error:(id*)arg3 ;
-(MLAppleWordEmbeddingParameters *)parameters;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithParameters:(id)arg1 modelDescription:(id)arg2 nlpHandle:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
@end

