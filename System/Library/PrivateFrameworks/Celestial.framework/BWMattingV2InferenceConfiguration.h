/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWInferenceConfiguration.h>

@protocol MTLCommandQueue;
@class NSDictionary;

@interface BWMattingV2InferenceConfiguration : BWInferenceConfiguration {

	NSDictionary* _sensorConfigurationsByPortType;
	unsigned _enabledMattes;
	int _tuningConfiguration;
	float _mainImageDownscalingFactor;
	BOOL _depthDataDeliveryEnabled;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (nonatomic,retain) NSDictionary * sensorConfigurationsByPortType;              //@synthesize sensorConfigurationsByPortType=_sensorConfigurationsByPortType - In the implementation block
@property (assign,nonatomic) unsigned enabledMattes;                                     //@synthesize enabledMattes=_enabledMattes - In the implementation block
@property (assign,nonatomic) int tuningConfiguration;                                    //@synthesize tuningConfiguration=_tuningConfiguration - In the implementation block
@property (assign,nonatomic) float mainImageDownscalingFactor;                           //@synthesize mainImageDownscalingFactor=_mainImageDownscalingFactor - In the implementation block
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                              //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) id<MTLCommandQueue> metalCommandQueue;                      //@synthesize metalCommandQueue=_metalCommandQueue - In the implementation block
-(void)dealloc;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(float)mainImageDownscalingFactor;
-(void)setMainImageDownscalingFactor:(float)arg1 ;
-(void)setSensorConfigurationsByPortType:(NSDictionary *)arg1 ;
-(NSDictionary *)sensorConfigurationsByPortType;
-(unsigned)enabledMattes;
-(void)setEnabledMattes:(unsigned)arg1 ;
-(int)tuningConfiguration;
-(void)setTuningConfiguration:(int)arg1 ;
@end

