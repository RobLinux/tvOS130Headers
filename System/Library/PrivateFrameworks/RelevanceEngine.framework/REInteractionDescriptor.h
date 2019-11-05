/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REAutomaticExportedInterface.h>
#import <RelevanceEngine/NSCopying.h>

@class NSString, REFeature;

@interface REInteractionDescriptor : NSObject <REAutomaticExportedInterface, NSCopying> {

	BOOL _enableExploreExploit;
	float _weight;
	float _exploreBias;
	float _trainingSimulationExploreBias;
	float _initialProbability;
	float _varianceEpsilon;
	NSString* _name;
	REFeature* _identificationFeature;
	REFeature* _selectionFeature;
	REFeature* _biasFeature;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) REFeature * identificationFeature;                //@synthesize identificationFeature=_identificationFeature - In the implementation block
@property (nonatomic,retain) REFeature * selectionFeature;                     //@synthesize selectionFeature=_selectionFeature - In the implementation block
@property (nonatomic,retain) REFeature * biasFeature;                          //@synthesize biasFeature=_biasFeature - In the implementation block
@property (assign,nonatomic) float weight;                                     //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) BOOL enableExploreExploit;                        //@synthesize enableExploreExploit=_enableExploreExploit - In the implementation block
@property (assign,nonatomic) float exploreBias;                                //@synthesize exploreBias=_exploreBias - In the implementation block
@property (assign,nonatomic) float trainingSimulationExploreBias;              //@synthesize trainingSimulationExploreBias=_trainingSimulationExploreBias - In the implementation block
@property (assign,nonatomic) float initialProbability;                         //@synthesize initialProbability=_initialProbability - In the implementation block
@property (assign,nonatomic) float varianceEpsilon;                            //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(void)setEnableExploreExploit:(BOOL)arg1 ;
-(void)setIdentificationFeature:(REFeature *)arg1 ;
-(REFeature *)selectionFeature;
-(REFeature *)identificationFeature;
-(REFeature *)biasFeature;
-(void)setExploreBias:(float)arg1 ;
-(void)setTrainingSimulationExploreBias:(float)arg1 ;
-(void)setInitialProbability:(float)arg1 ;
-(void)setSelectionFeature:(REFeature *)arg1 ;
-(void)setBiasFeature:(REFeature *)arg1 ;
-(void)setVarianceEpsilon:(float)arg1 ;
-(BOOL)enableExploreExploit;
-(float)exploreBias;
-(float)trainingSimulationExploreBias;
-(float)initialProbability;
-(float)varianceEpsilon;
@end

