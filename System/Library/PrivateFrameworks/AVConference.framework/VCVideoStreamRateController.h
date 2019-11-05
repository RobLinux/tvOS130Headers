/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCVideoStreamRateControlProtocol, OS_dispatch_queue;
@class NSObject;

@interface VCVideoStreamRateController : NSObject {

	int _algorithm;
	id<VCVideoStreamRateControlProtocol> _rateControl;
	unsigned _minBitrate;
	unsigned _maxBitrate;
	unsigned _targetBitrate;
	unsigned short _operatingTierIndex;
	unsigned short _maxTierIndex;
	unsigned short _minTierIndex;
	double _rateControlTime;
	double _rateControlInterval;
	unsigned _previousRTPTimestamp;
	unsigned _averageTargetBitrate;
	unsigned long long _accumulatedTargetDataSize;
	double _totalTime;
	double _videoFrozenDuration;
	BOOL _didVideoStall;
	void* _logDump;
	NSObject*<OS_dispatch_queue> _videoStreamRateControllerQueue;

}

@property (nonatomic,readonly) unsigned minBitrate;                 //@synthesize minBitrate=_minBitrate - In the implementation block
@property (nonatomic,readonly) unsigned maxBitrate;                 //@synthesize maxBitrate=_maxBitrate - In the implementation block
@property (nonatomic,readonly) unsigned targetBitrate;              //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (nonatomic,readonly) double owrd; 
@property (nonatomic,readonly) double nowrd; 
@property (nonatomic,readonly) double nowrdShort; 
@property (nonatomic,readonly) double nowrdAcc; 
-(void)dealloc;
-(id)className;
-(unsigned)maxBitrate;
-(unsigned)targetBitrate;
-(double)owrd;
-(void)updateRTPReceiveWithTimestamp:(unsigned)arg1 sampleRate:(unsigned)arg2 time:(double)arg3 ;
-(double)nowrd;
-(double)nowrdShort;
-(double)nowrdAcc;
-(void)setRateControlInterval:(double)arg1 ;
-(void)updateVideoStall:(BOOL)arg1 withStallDuration:(unsigned)arg2 ;
-(id)initWithDumpID:(unsigned)arg1 ;
-(void)setMaxTargetBitrate:(unsigned)arg1 minTargetBitrate:(unsigned)arg2 ;
-(unsigned)minBitrate;
-(void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingBitrate:(unsigned)arg4 averageReceivedBitrate:(unsigned)arg5 ;
-(void)createLogDumpFile:(unsigned)arg1 ;
-(void)releaseLogDumpFile;
-(unsigned short)minTierIndex:(unsigned)arg1 ;
-(unsigned short)maxTierIndex:(unsigned)arg1 ;
-(void)updateAverageTargetBitrate:(unsigned)arg1 interval:(double)arg2 ;
-(void)setOperatingTierIndexWithBitrate:(unsigned)arg1 ;
@end

