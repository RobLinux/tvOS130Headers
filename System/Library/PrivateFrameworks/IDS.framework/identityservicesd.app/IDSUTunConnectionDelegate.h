/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSUTunConnectionDelegate <NSObject>
@required
-(void)connection:(id)arg1 connectivityChanged:(BOOL)arg2;
-(void)connection:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(BOOL)arg7 expectsPeerResponse:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(BOOL)arg11;
-(void)connection:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(BOOL)arg7 expectsPeerResponse:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(BOOL)arg11;
-(void)connection:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(BOOL)arg7 expectsPeerResponse:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(BOOL)arg11;
-(void)connection:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 fromID:(id)arg3 messageID:(id)arg4 peerResponseIdentifier:(id)arg5;
-(void)connectionHasSpaceForMessages:(id)arg1 dataProtectionClass:(unsigned)arg2;
-(void)connectionIsEmpty:(id)arg1;
-(void)connectionIsEmptyOfCloudMessages:(id)arg1;

@end

