/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class VCPFrameAnalysisStats, VCPVideoActivityDescriptor, NSMutableArray, VCPCNNModel, VCPCNNData, NSNumber;

@interface VCPVideoActivityAnalyzer : VCPVideoAnalyzer {

	VCPFrameAnalysisStats* _frameStats;
	VCPVideoActivityDescriptor* _activityDescriptor;
	NSMutableArray* _activityScores;
	NSMutableArray* _validActivityScores;
	NSMutableArray* _qualityResults;
	NSMutableArray* _interestingnessResults;
	NSMutableArray* _obstructionResults;
	NSMutableArray* _classificationResults;
	NSMutableArray* _fineActionResults;
	NSMutableArray* _faceResults;
	NSMutableArray* _results;
	float _sceneSwitchFrequency;
	long long _numOfFrames;
	SCD_Struct_VC6 _lastProcessTime;
	float _overallActivityLevel;
	VCPCNNModel* _model;
	VCPCNNData* _input;
	NSNumber* _sportsSceneId;

}
-(id)results;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(id)initWithFrameStats:(id)arg1 ;
-(void)normalizeActivityDescriptor;
-(int)prepareActivityStats;
-(void)generateActivityDescriptor;
-(int)computeActivityScoreAtTime:(SCD_Struct_VC6)arg1 ;
-(void)resetActivityStatsAtTime:(SCD_Struct_VC6)arg1 ;
-(int)extractRequiredInfoFrom:(id)arg1 toArray:(id)arg2 ;
-(int)extractRequiredClassificationInfoFrom:(id)arg1 toArray:(id)arg2 ;
-(int)extractRequiredFaceInfoFrom:(id)arg1 toArray:(id)arg2 ;
-(float)validationScoreOfTimeRange:(SCD_Struct_VC28)arg1 fromResult:(id)arg2 startIdx:(int*)arg3 ;
-(float)actionScoreInTimeRange:(SCD_Struct_VC28)arg1 ;
-(void)validateActivityScores;
-(float)scaleBasedOnFaceForTimeRange:(SCD_Struct_VC28)arg1 ;
-(void)addSceneSwitchFrequencyConstributionToActivityLevel:(float*)arg1 ;
-(void)addSceneClassificationContributionToActivityLevel:(float*)arg1 ;
-(int)preProcessQualityResults:(id)arg1 interestingnessResults:(id)arg2 obstructionResults:(id)arg3 classificationResults:(id)arg4 fineActionResults:(id)arg5 faceResults:(id)arg6 sceneSwitchFrequency:(float)arg7 ;
-(int)finishAnalysisPass:(SCD_Struct_VC28)arg1 fpsRate:(float)arg2 ;
@end

