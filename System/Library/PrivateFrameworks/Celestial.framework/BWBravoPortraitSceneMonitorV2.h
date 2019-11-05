/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWPortraitSceneMonitor.h>

@class NSArray, NSString;

@interface BWBravoPortraitSceneMonitorV2 : NSObject <BWPortraitSceneMonitor> {

	int _numberOfFramesWithStableFocusThreshold;
	BOOL _oneShotFocusScanInProgress;
	BOOL _focusLocked;
	int _numFramesSinceFocusLocked;
	int _numFramesSinceFocusBecameStable;
	BOOL _focusHasBeenAttainedAfterStart;
	int _numFramesSinceFocusFirstAttainedStability;
	BOOL _focusIsStationaryBeyondThreshold;
	BOOL _subjectTooCloseMonitoringEnabled;
	float _subjectTooCloseFocusDistanceThreshold;
	float _subjectTooCloseHysteresis;
	BOOL _subjectIsTooClose;
	BOOL _subjectTooClosePreviousFrame;
	BOOL _subjectTooFarMonitoringEnabled;
	float _subjectTooFarFocusDistanceThreshold;
	float _subjectTooFarBackgroundShiftSumTooLowThreshold;
	BOOL _subjectTooFarDistanceThresholdReached;
	float _subjectTooFarDistanceThresholdHysteresis;
	BOOL _backgroundShiftSumTooLowThresholdReached;
	float _subjectTooFarBackGroundShiftSumIsTooLowHysteresis;
	BOOL _deliveryOfShiftsHasStarted;
	float _backgroundShiftSumSmoothed;
	float _backgroundShiftSumSmoothingTrend;
	float _backgroundShiftSumSmoothingFactor;
	float _backgroundShiftSumSmoothingTrendUpdateFactor;
	float _invalidShiftRatioSmoothed;
	float _invalidShiftRatioSmoothingFactor;
	BOOL _sceneTooDarkMonitoringEnabled;
	float _sceneTooDarkGainThreshold;
	float _sceneTooDarkAEAverageAETargetFractionThreshold;
	float _sceneTooDarkAEAverageAETargetFractionThresholdHysteresisLag;
	BOOL _sceneIsTooDark;
	BOOL _stageFaceMonitoringEnabled;
	int _stageFaceNumberOfFramesSinceLastFace;
	BOOL _stageFaceHasBeenSeen;
	int _stageFaceNumberOfFramesSinceLastFaceThreshold;
	NSArray* _stageMostRecentFaces;
	BOOL _portraitSceneMonitoringRequiresStageThresholds;
	BOOL _stageTooFarMonitoringEnabled;
	float _stageTooFarFocusDistanceThreshold;
	BOOL _stageTooFarDistanceThresholdReached;
	float _stageTooFarDistanceThresholdHysteresis;
	BOOL _stageBackgroundShiftSumTooLowThresholdReached;
	float _stageTooFarBackgroundShiftSumTooLowThreshold;
	float _stageTooFarBackGroundShiftSumIsTooLowHysteresis;
	int _lastSDOFEffectStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL portraitSceneMonitoringRequiresStageThresholds;              //@synthesize portraitSceneMonitoringRequiresStageThresholds=_portraitSceneMonitoringRequiresStageThresholds - In the implementation block
@property (nonatomic,readonly) float focusDistanceToMaxAllowedFocusDistanceRatio; 
+(void)initialize;
-(void)dealloc;
-(void)setAutoFocusInProgress:(BOOL)arg1 focusLocked:(BOOL)arg2 oneShotFocusScanInProgress:(BOOL)arg3 ;
-(void)focusScanDidComplete;
-(void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(BOOL)arg7 faces:(id)arg8 ;
-(BOOL)resolveSDOFStatusWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 frameStatisticsByPortType:(id)arg2 sceneFlags:(unsigned long long)arg3 flashWillFire:(BOOL)arg4 effectStatus:(int*)arg5 stagePreviewStatus:(int*)arg6 ;
-(BOOL)portraitSceneMonitoringRequiresStageThresholds;
-(void)setPortraitSceneMonitoringRequiresStageThresholds:(BOOL)arg1 ;
-(float)focusDistanceToMaxAllowedFocusDistanceRatio;
-(id)initWithTuningParameters:(id)arg1 attachDebugFrameStatistics:(BOOL)arg2 ;
-(void)doubleExponentialSmoothing:(float)arg1 smoothValue:(float*)arg2 trendValue:(float*)arg3 dataFactor:(float)arg4 trendFactor:(float)arg5 ;
@end

