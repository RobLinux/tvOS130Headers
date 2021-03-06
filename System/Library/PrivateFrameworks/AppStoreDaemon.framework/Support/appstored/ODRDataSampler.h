/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSMutableArray;

@interface ODRDataSampler : NSObject {

	NSTimer* _timer;
	NSMutableArray* _samples;
	BOOL _isRunning;
	double _samplingInterval;

}

@property (readonly) double samplingInterval;              //@synthesize samplingInterval=_samplingInterval - In the implementation block
-(void)start;
-(void)stop;
-(id)max;
-(double)samplingInterval;
-(id)min;
-(id)average;
-(id)takeSample;
-(id)currentStatsString;
-(void)_recordSample;
-(id)initWithSamplingRate:(double)arg1 ;
@end

