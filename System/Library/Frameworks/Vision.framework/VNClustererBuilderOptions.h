/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNClustererOptions.h>

@interface VNClustererBuilderOptions : VNClustererOptions {

	float _ageClassifierBabyThreshold;
	float _ageClassifierKidThreshold;

}

@property (assign,nonatomic) float ageClassifierBabyThreshold;              //@synthesize ageClassifierBabyThreshold=_ageClassifierBabyThreshold - In the implementation block
@property (assign,nonatomic) float ageClassifierKidThreshold;               //@synthesize ageClassifierKidThreshold=_ageClassifierKidThreshold - In the implementation block
+(BOOL)_defaultAgeClassifierKidThreshold:(float*)arg1 forFaceprintRequestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
+(BOOL)_defaultAgeClassifierBabyThreshold:(float*)arg1 forFaceprintRequestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 ;
-(float)ageClassifierBabyThreshold;
-(void)setAgeClassifierBabyThreshold:(float)arg1 ;
-(float)ageClassifierKidThreshold;
-(void)setAgeClassifierKidThreshold:(float)arg1 ;
@end

