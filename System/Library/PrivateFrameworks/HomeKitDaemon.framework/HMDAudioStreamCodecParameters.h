/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/NSCopying.h>

@class HMDAudioStreamNumAudioChannels, HMDAudioStreamBitRate, HMDAudioStreamSampleRate, HMDAudioStreamPacketTime;

@interface HMDAudioStreamCodecParameters : NSObject <NSCopying> {

	HMDAudioStreamNumAudioChannels* _numAudioChannels;
	HMDAudioStreamBitRate* _bitRate;
	HMDAudioStreamSampleRate* _sampleRate;
	HMDAudioStreamPacketTime* _packetTime;

}

@property (nonatomic,retain) HMDAudioStreamNumAudioChannels * numAudioChannels;              //@synthesize numAudioChannels=_numAudioChannels - In the implementation block
@property (nonatomic,retain) HMDAudioStreamBitRate * bitRate;                                //@synthesize bitRate=_bitRate - In the implementation block
@property (nonatomic,retain) HMDAudioStreamSampleRate * sampleRate;                          //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,retain) HMDAudioStreamPacketTime * packetTime;                          //@synthesize packetTime=_packetTime - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(HMDAudioStreamBitRate *)bitRate;
-(void)setBitRate:(HMDAudioStreamBitRate *)arg1 ;
-(HMDAudioStreamSampleRate *)sampleRate;
-(void)setSampleRate:(HMDAudioStreamSampleRate *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setNumAudioChannels:(HMDAudioStreamNumAudioChannels *)arg1 ;
-(HMDAudioStreamNumAudioChannels *)numAudioChannels;
-(void)setPacketTime:(HMDAudioStreamPacketTime *)arg1 ;
-(HMDAudioStreamPacketTime *)packetTime;
-(id)initWithNumAudioChannels:(id)arg1 bitRate:(id)arg2 sampleRate:(id)arg3 packetTime:(id)arg4 ;
@end

