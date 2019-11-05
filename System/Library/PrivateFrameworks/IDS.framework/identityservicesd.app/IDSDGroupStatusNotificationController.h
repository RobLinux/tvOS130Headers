/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, IDSDAccount, NSObject, IDSDSessionController, IDSRealTimeEncryptionController, IDSDGroupStatusNotificationControllerBroadcaster;

@interface IDSDGroupStatusNotificationController : NSObject {

	NSMutableDictionary* _notifiers;
	NSMutableSet* _groups;
	NSMutableDictionary* _events;
	NSMutableDictionary* _groupMemberPushTokens;
	IDSDAccount* _account;
	NSObject*<OS_dispatch_queue> _queue;
	IDSDSessionController* _sessionController;
	IDSRealTimeEncryptionController* _realTimeEncryptionController;
	IDSDGroupStatusNotificationControllerBroadcaster* _broadcaster;

}

@property (nonatomic,readonly) IDSDSessionController * sessionController;                                   //@synthesize sessionController=_sessionController - In the implementation block
@property (nonatomic,readonly) IDSRealTimeEncryptionController * realTimeEncryptionController;              //@synthesize realTimeEncryptionController=_realTimeEncryptionController - In the implementation block
@property (nonatomic,readonly) IDSDGroupStatusNotificationControllerBroadcaster * broadcaster;              //@synthesize broadcaster=_broadcaster - In the implementation block
@property (nonatomic,readonly) NSMutableSet * groups;                                                       //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * events;                                                //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * groupMemberPushTokens;                                 //@synthesize groupMemberPushTokens=_groupMemberPushTokens - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                          //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableSet *)groups;
-(NSMutableDictionary *)events;
-(IDSDGroupStatusNotificationControllerBroadcaster *)broadcaster;
-(void)pushTokenLookup:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3 account:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)notifyJoinToGroup:(id)arg1 members:(id)arg2 params:(id)arg3 fromAccount:(id)arg4 fromID:(id)arg5 sessionID:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)notifyLeaveToGroup:(id)arg1 members:(id)arg2 params:(id)arg3 fromAccount:(id)arg4 fromID:(id)arg5 sessionID:(id)arg6 ;
-(void)updateMembers:(id)arg1 toGroup:(id)arg2 withContext:(id)arg3 params:(id)arg4 fromAccount:(id)arg5 fromID:(id)arg6 sessionID:(id)arg7 reason:(unsigned char)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)updateParticipantData:(id)arg1 members:(id)arg2 toGroup:(id)arg3 withContext:(id)arg4 params:(id)arg5 fromAccount:(id)arg6 fromID:(id)arg7 sessionID:(id)arg8 ;
-(id)initWithSessionController:(id)arg1 realTimeEncryptionController:(id)arg2 broadcaster:(id)arg3 ;
-(IDSRealTimeEncryptionController *)realTimeEncryptionController;
-(void)_sendFanoutMessage:(id)arg1 account:(id)arg2 toGroupMembers:(id)arg3 fromID:(id)arg4 command:(long long)arg5 commandContext:(id)arg6 toGroup:(id)arg7 sessionID:(id)arg8 reason:(unsigned char)arg9 waitForMadridAcks:(BOOL)arg10 completionBlock:(/*^block*/id)arg11 ;
-(void)_sendFanoutMessage:(id)arg1 account:(id)arg2 toGroupMembers:(id)arg3 fromID:(id)arg4 command:(long long)arg5 toGroup:(id)arg6 sessionID:(id)arg7 reason:(unsigned char)arg8 ;
-(double)_multiwayFTMessageSendTimeout;
-(id)_specificOriginatorFromID:(id)arg1 senderToken:(id)arg2 accountUniqueID:(id)arg3 ;
-(IDSDSessionController *)sessionController;
-(id)participantsForGroupID:(id)arg1 ;
-(id)_currentDateString;
-(void)processIncomingParticipantUpdateMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 toID:(id)arg4 topic:(id)arg5 idsMessageContext:(id)arg6 ;
-(void)processIncomingParticipantDataUpdateMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 toID:(id)arg4 topic:(id)arg5 idsMessageContext:(id)arg6 ;
-(id)getURIFromPushToken:(id)arg1 forGroup:(id)arg2 ;
-(NSMutableDictionary *)groupMemberPushTokens;
@end

