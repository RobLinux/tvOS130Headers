/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>
#import <AVConference/VCAudioPowerSpectrumProtocol.h>

@class NSString;

@interface VCAudioPowerSpectrumMeter : VCObject <VCAudioPowerSpectrumProtocol> {

	unsigned short _audioSpectrumBinCount;
	VCAudioPowerSpectrumMeterRealtimeContext* _realtimeContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* realtimeContext; 
-(void)dealloc;
-(void*)realtimeContext;
-(id)initWithBinCount:(unsigned short)arg1 refreshRate:(double)arg2 delegate:(id)arg3 ;
-(void)registerNewAudioPowerSpectrumForStreamToken:(id)arg1 spectrumSource:(id)arg2 ;
-(void)releaseAudioPowerSpectrumForStreamToken:(id)arg1 ;
-(void)unregisterAllStreams;
@end

