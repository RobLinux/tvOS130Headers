/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber;


@protocol HMDCameraRemoteStreamSenderProtocol <HMDCameraRemoteStreamProtocol>
@property (nonatomic,readonly) NSNumber * mtu; 
@optional
-(void)startPacketRelayWithIDSDeviceSession:(id)arg1 cameraVideoSSRC:(unsigned)arg2 cameraAudioSSRC:(unsigned)arg3;

@required
-(NSNumber *)mtu;
-(void)openRelaySession;
-(void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned)arg6;

@end

