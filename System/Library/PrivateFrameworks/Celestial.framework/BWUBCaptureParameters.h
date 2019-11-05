/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface BWUBCaptureParameters : NSObject {

	NSString* _portType;
	double _lowLightEffectiveIntegrationTimeThreshold;
	double _sifrMainEffectiveIntegrationTimeThreshold;
	float _sifrGainThreshold;
	double _longWithoutSphereEffectiveIntegrationTimeThreshold;
	double _redSaturationMainEffectiveIntegrationTimeThreshold;
	float _redSaturationSIFRGainThreshold;
	BOOL _useSquareRootToneCurveForHDRDisabled;
	BOOL _preserveBlackLevel;
	id _afWindowParams;
	int _maxNumberOfFramesForAdaptiveBracketing;
	double _digitalFlashAvailableEffectiveIntegrationTimeThreshold;
	double _digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
	double _stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
	float _digitalFlashRecommendRegularFlashSNRThreshold;
	int _referenceFrameSelectionMethod;
	BOOL _usePreviousSIFR;
	NSArray* _motionAndFocusScoreWeights;

}

@property (nonatomic,readonly) double lowLightEffectiveIntegrationTimeThreshold;                       //@synthesize lowLightEffectiveIntegrationTimeThreshold=_lowLightEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) double sifrMainEffectiveIntegrationTimeThreshold;                       //@synthesize sifrMainEffectiveIntegrationTimeThreshold=_sifrMainEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) float sifrGainThreshold;                                                //@synthesize sifrGainThreshold=_sifrGainThreshold - In the implementation block
@property (nonatomic,readonly) double longWithoutSphereEffectiveIntegrationTimeThreshold;              //@synthesize longWithoutSphereEffectiveIntegrationTimeThreshold=_longWithoutSphereEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) double redSaturationMainEffectiveIntegrationTimeThreshold;              //@synthesize redSaturationMainEffectiveIntegrationTimeThreshold=_redSaturationMainEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) float redSaturationSIFRGainThreshold;                                   //@synthesize redSaturationSIFRGainThreshold=_redSaturationSIFRGainThreshold - In the implementation block
@property (nonatomic,readonly) BOOL useSquareRootToneCurveForHDRDisabled;                              //@synthesize useSquareRootToneCurveForHDRDisabled=_useSquareRootToneCurveForHDRDisabled - In the implementation block
@property (nonatomic,readonly) BOOL preserveBlackLevel;                                                //@synthesize preserveBlackLevel=_preserveBlackLevel - In the implementation block
@property (nonatomic,readonly) id afWindowParams;                                                      //@synthesize afWindowParams=_afWindowParams - In the implementation block
-(id)description;
-(void)dealloc;
-(id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2 ;
-(int)maxNumberOfFramesForAdaptiveBracketing;
-(double)digitalFlashAvailableEffectiveIntegrationTimeThreshold;
-(double)digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
-(double)stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
-(float)digitalFlashRecommendRegularFlashSNRThreshold;
-(int)referenceFrameSelectionMethod;
-(BOOL)usePreviousSIFR;
-(id)motionAndFocusScoreWeights;
-(double)lowLightEffectiveIntegrationTimeThreshold;
-(double)sifrMainEffectiveIntegrationTimeThreshold;
-(float)sifrGainThreshold;
-(double)longWithoutSphereEffectiveIntegrationTimeThreshold;
-(double)redSaturationMainEffectiveIntegrationTimeThreshold;
-(float)redSaturationSIFRGainThreshold;
-(BOOL)useSquareRootToneCurveForHDRDisabled;
-(BOOL)preserveBlackLevel;
-(id)afWindowParams;
@end

