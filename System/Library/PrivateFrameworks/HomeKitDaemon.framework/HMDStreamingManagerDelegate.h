/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDStreamingManagerDelegate <NSObject>
@optional
-(void)streamingManager:(id)arg1 didStartRelay:(id)arg2;

@required
-(void)streamingManager:(id)arg1 didStartStream:(id)arg2 slotIdentifier:(id)arg3;
-(void)streamingManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(id)arg3 slotIdentifier:(id)arg4;
-(void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;
-(void)streamingManagerDidNetworkImprove:(id)arg1;
-(void)streamingManagerDidNetworkDeteriorate:(id)arg1;
-(void)streamingManagerDidUpdateConfiguration:(id)arg1;

@end

