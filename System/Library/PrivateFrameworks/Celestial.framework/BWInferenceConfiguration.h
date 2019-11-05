/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface BWInferenceConfiguration : NSObject {

	int _inferenceType;
	unsigned _priority;
	float _maximumFramesPerSecond;
	NSDictionary* _tuningParameters;

}

@property (nonatomic,readonly) int inferenceType;                        //@synthesize inferenceType=_inferenceType - In the implementation block
@property (assign,nonatomic) unsigned priority;                          //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) float maximumFramesPerSecond;               //@synthesize maximumFramesPerSecond=_maximumFramesPerSecond - In the implementation block
@property (nonatomic,copy) NSDictionary * tuningParameters;              //@synthesize tuningParameters=_tuningParameters - In the implementation block
-(void)dealloc;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(NSDictionary *)tuningParameters;
-(void)setTuningParameters:(NSDictionary *)arg1 ;
-(int)inferenceType;
-(id)initWithInferenceType:(int)arg1 ;
-(void)setMaximumFramesPerSecond:(float)arg1 ;
-(float)maximumFramesPerSecond;
@end

