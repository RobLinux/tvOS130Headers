/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSUTunDeliveryControllerDelegate <NSObject>
@optional
-(void)deliveryController:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(BOOL)arg8 expectsPeerResponse:(BOOL)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 isCompressed:(BOOL)arg13 connectionType:(long long)arg14;
-(void)deliveryController:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(BOOL)arg8 expectsPeerResponse:(BOOL)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 isCompressed:(BOOL)arg13 connectionType:(long long)arg14;
-(void)deliveryController:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(BOOL)arg8 expectsPeerResponse:(BOOL)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 isCompressed:(BOOL)arg13 connectionType:(long long)arg14;
-(void)deliveryController:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 deviceID:(id)arg3 btUUID:(id)arg4 messageID:(id)arg5 peerResponseIdentifier:(id)arg6 priority:(long long)arg7 connectionType:(long long)arg8;
-(void)deliveryControllerHasSpaceforNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3;
-(void)deliveryControllerHasSpaceforNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 ofTypes:(id)arg4;
-(void)deliveryControllerHasSpaceforUrgentMessages:(id)arg1 dataProtectionClass:(unsigned)arg2 ofTypes:(id)arg3;
-(void)deliveryController:(id)arg1 foundNearbyIPsecCapableDeviceWithUniqueID:(id)arg2;
-(id)deliveryControllerQueuedIncomingMessageDictionary:(id)arg1;

@end

