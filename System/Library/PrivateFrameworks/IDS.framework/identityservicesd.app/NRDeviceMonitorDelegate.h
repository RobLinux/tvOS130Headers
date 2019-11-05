/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NRDeviceMonitorDelegate <NSObject>
@optional
-(void)deviceLinkTypeDidChange:(id)arg1 linkType:(unsigned char)arg2;
-(void)deviceIsClassCConnectedDidChange:(id)arg1 isClassCConnected:(BOOL)arg2;
-(void)deviceIsAsleepDidChange:(id)arg1 isAsleep:(BOOL)arg2;
-(void)deviceIsCloudConnectedDidChange:(id)arg1 isCloudConnected:(BOOL)arg2;
-(void)deviceIsConnectedDidChange:(id)arg1 isConnected:(BOOL)arg2;
-(void)deviceIsNearbyDidChange:(id)arg1 isNearby:(BOOL)arg2;
-(void)deviceIsEnabledDidChange:(id)arg1 isEnabled:(BOOL)arg2;
-(void)deviceIsRegisteredDidChange:(id)arg1 isRegistered:(BOOL)arg2;

@end
