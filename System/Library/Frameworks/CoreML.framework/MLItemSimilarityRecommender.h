/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <CoreML/MLModelSpecificationLoader.h>
#import <CoreML/MLModeling.h>
#import <CoreML/MLCompiledModelLoader.h>
#import <CoreML/MLSpecificationCompiler.h>

@class MLModelDescription, MLModelInterface, MLModelMetadata, NSString, NSDictionary, NSArray;

@interface MLItemSimilarityRecommender : MLModel <MLModelSpecificationLoader, MLModeling, MLCompiledModelLoader, MLSpecificationCompiler> {

	shared_ptr<Archiver::MMappedFile>* m_mmapped_model;
	vector<unsigned char, std::__1::allocator<unsigned char> > m_cached_model;
	unsigned long long m_num_items;
	NSString* m_item_data_feature_name;
	NSString* m_num_recommendations_feature_name;
	NSString* m_item_restriction_feature_name;
	NSString* m_item_exclusion_feature_name;
	NSString* m_item_list_output_feature_name;
	NSString* m_item_score_output_feature_name;
	NSDictionary* m_item_mapping;
	NSArray* m_item_string_list;
	NSArray* m_item_integer_list;
	vector<double, std::__1::allocator<double> >* _m_scores;
	vector<unsigned long long, std::__1::allocator<unsigned long long> >* _m_items;
	vector<unsigned long long, std::__1::allocator<unsigned long long> >* _m_item_buffer;
	vector<unsigned char, std::__1::allocator<unsigned char> > _m_item_invalid_mask;
	vector<double, std::__1::allocator<double> >* _m_item_predictions;
	vector<std::__1::pair<unsigned long long, double>, std::__1::allocator<std::__1::pair<unsigned long long, double> > >* _m_item_heap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)compileSpecification:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)compiledVersionForSpecification:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
+(id)loadModelFromSpecificationWithCompilationOptions:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(const char*)_model_data;
-(id)_itemForIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_mapItemSequence:(id)arg1 dest:(vector<unsigned long long, std::__1::allocator<unsigned long long> >*)arg2 error:(id*)arg3 ;
@end

