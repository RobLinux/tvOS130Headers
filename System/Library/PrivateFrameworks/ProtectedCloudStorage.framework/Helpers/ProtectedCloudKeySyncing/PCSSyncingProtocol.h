/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/Helpers/ProtectedCloudKeySyncing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PCSSyncingProtocol
@required
-(void)getAllClients:(/*^block*/id)arg1;
-(void)syncKeys:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)requestKeys:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)triggerDaily:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)triggerSyncingWithEscrowProxy:(id)arg1 complete:(/*^block*/id)arg2;
-(void)createIdentity:(id)arg1 roll:(BOOL)arg2 sync:(BOOL)arg3 complete:(/*^block*/id)arg4;
-(void)fetchStats:(/*^block*/id)arg1;
-(void)triggerWatchSyncing:(/*^block*/id)arg1;
-(void)triggerUserRegistryCheck:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)deleteThisDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)escrowRecordIDs:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)restoreMobileBackup:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)mobileBackupStatus:(/*^block*/id)arg1;
-(void)mobileBackupRecordIDsWithReply:(/*^block*/id)arg1;
-(void)userDBBackupRecordIDsWithReply:(/*^block*/id)arg1;
-(void)manateeStatus:(id)arg1 complete:(/*^block*/id)arg2;
-(void)keyRollPending:(id)arg1 complete:(/*^block*/id)arg2;
-(void)fetchAllDeviceKeys:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)triggerKeyRolling;
-(void)checkForBackupStateChange;
-(BOOL)shouldRoll;
-(id)getServicesToRoll;

@end

