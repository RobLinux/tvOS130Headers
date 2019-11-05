/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PVSceneTaxonomy, NSString, NSMutableSet, NSSet;

@interface PVSceneTaxonomyNode : NSObject {

	BOOL _indexed;
	unsigned _sceneClassId;
	PVSceneTaxonomy* _taxonomy;
	NSString* _name;
	double _threshold;
	double _highRecallThreshold;
	double _highPrecisionThreshold;
	NSMutableSet* _parentNodes;
	NSMutableSet* _childNodes;

}

@property (retain) NSMutableSet * parentNodes;                   //@synthesize parentNodes=_parentNodes - In the implementation block
@property (retain) NSMutableSet * childNodes;                    //@synthesize childNodes=_childNodes - In the implementation block
@property (readonly) PVSceneTaxonomy * taxonomy;                 //@synthesize taxonomy=_taxonomy - In the implementation block
@property (readonly) unsigned sceneClassId;                      //@synthesize sceneClassId=_sceneClassId - In the implementation block
@property (copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (getter=isIndexed,readonly) BOOL indexed;              //@synthesize indexed=_indexed - In the implementation block
@property (readonly) double threshold;                           //@synthesize threshold=_threshold - In the implementation block
@property (readonly) double highRecallThreshold;                 //@synthesize highRecallThreshold=_highRecallThreshold - In the implementation block
@property (readonly) double highPrecisionThreshold;              //@synthesize highPrecisionThreshold=_highPrecisionThreshold - In the implementation block
@property (copy,readonly) NSSet * parents; 
@property (copy,readonly) NSSet * children; 
@property (getter=isRoot,readonly) BOOL root; 
+(id)localizedStringForKey:(id)arg1 localizationBundle:(id)arg2 tableName:(id)arg3 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSSet *)children;
-(NSSet *)parents;
-(BOOL)isIndexed;
-(BOOL)isRoot;
-(double)threshold;
-(NSMutableSet *)childNodes;
-(void)addChildNode:(id)arg1 ;
-(id)localizedLabel;
-(void)setChildNodes:(NSMutableSet *)arg1 ;
-(void)traverse:(long long)arg1 visitor:(/*^block*/id)arg2 ;
-(double)highPrecisionThreshold;
-(double)highRecallThreshold;
-(unsigned)sceneClassId;
-(BOOL)isEqualToNode:(id)arg1 ;
-(id)localizedSynonyms;
-(PVSceneTaxonomy *)taxonomy;
-(id)initWithSceneClassId:(unsigned)arg1 name:(id)arg2 indexed:(BOOL)arg3 threshold:(double)arg4 highRecallThreshold:(double)arg5 highPrecisionThreshold:(double)arg6 taxonomy:(id)arg7 ;
-(void)recursivelyReleaseParents;
-(NSMutableSet *)parentNodes;
-(void)setParentNodes:(NSMutableSet *)arg1 ;
@end

