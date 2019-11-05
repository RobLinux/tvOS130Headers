/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface BWImageControlModeTransitionMonitor : NSObject {

	NSDictionary* _expectedSphereModesByPortType;
	NSDictionary* _expectedMinimumFrameRatesByPortType;
	NSMutableDictionary* _currentSphereModesByPortType;
	NSMutableDictionary* _currentFrameRatesByPortType;
	int _frameWaitCount;

}

@property (nonatomic,copy) NSDictionary * expectedSphereModesByPortType;                    //@synthesize expectedSphereModesByPortType=_expectedSphereModesByPortType - In the implementation block
@property (nonatomic,copy) NSDictionary * expectedMinimumFrameRatesByPortType;              //@synthesize expectedMinimumFrameRatesByPortType=_expectedMinimumFrameRatesByPortType - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(BOOL)isTransitionCompleteWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 masterCaptureStreamPortType:(id)arg2 activeSlaveStreamPortType:(id)arg3 ;
-(NSDictionary *)expectedSphereModesByPortType;
-(void)setExpectedSphereModesByPortType:(NSDictionary *)arg1 ;
-(NSDictionary *)expectedMinimumFrameRatesByPortType;
-(void)setExpectedMinimumFrameRatesByPortType:(NSDictionary *)arg1 ;
@end

