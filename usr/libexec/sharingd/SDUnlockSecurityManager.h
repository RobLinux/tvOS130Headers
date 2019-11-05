/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface SDUnlockSecurityManager : NSObject {

	NSData* _localLongTermKey;
	NSData* _remoteLongTermKey;
	NSString* _keybagUUID;
	NSString* _keyDeviceID;
	NSString* _pairingID;
	NSString* _pairingStorePath;
	NSString* _deviceName;

}

@property (readonly) BOOL ltksExist; 
@property (readonly) BOOL ltkFileExists; 
@property (nonatomic,retain) NSData * localLongTermKey;               //@synthesize localLongTermKey=_localLongTermKey - In the implementation block
@property (nonatomic,retain) NSData * remoteLongTermKey;              //@synthesize remoteLongTermKey=_remoteLongTermKey - In the implementation block
@property (nonatomic,retain) NSString * keybagUUID;                   //@synthesize keybagUUID=_keybagUUID - In the implementation block
@property (retain) NSString * keyDeviceID;                            //@synthesize keyDeviceID=_keyDeviceID - In the implementation block
@property (copy) NSString * pairingID;                                //@synthesize pairingID=_pairingID - In the implementation block
@property (copy) NSString * pairingStorePath;                         //@synthesize pairingStorePath=_pairingStorePath - In the implementation block
@property (copy) NSString * deviceName;                               //@synthesize deviceName=_deviceName - In the implementation block
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)allKeychainItems;
-(NSString *)pairingID;
-(NSString *)pairingStorePath;
-(void)setPairingID:(NSString *)arg1 ;
-(unsigned)lockState;
-(id)generateLocalLongTermKey:(long long)arg1 ;
-(BOOL)ltksExist;
-(BOOL)ltkFileExists;
-(void)deleteLongTermKeys;
-(long long)unlockSessionAsOriginator:(BOOL)arg1 usingEscrow:(BOOL)arg2 escrowSecret:(id)arg3 ;
-(void)clearStateForSession:(long long)arg1 ;
-(void)resetEscrowRecord;
-(id)signRemoteKey:(id)arg1 withLocalKey:(id)arg2 localKeyClass:(long long)arg3 remoteKeyClass:(long long)arg4 ;
-(void)updateLocalLongTermKey:(id)arg1 remoteLongTermKey:(id)arg2 ;
-(NSData *)localLongTermKey;
-(NSData *)remoteLongTermKey;
-(long long)escrowCreationSessionAsOriginator:(BOOL)arg1 errorCode:(int*)arg2 ;
-(id)stepWithAuthSession:(long long)arg1 data:(id)arg2 ;
-(id)stepWithAuthSession:(long long)arg1 data:(id)arg2 authStep:(BOOL)arg3 ;
-(BOOL)setupWithAuthSession:(long long)arg1 passcode:(id)arg2 ;
-(long long)stashBagSessionAsOriginator:(BOOL)arg1 escrowSecret:(id)arg2 manifest:(id)arg3 ;
-(id)initWithPairingID:(id)arg1 pairingStorePath:(id)arg2 deviceName:(id)arg3 ;
-(id)baseDictionary;
-(void)migrateOldKeysIfNeeded;
-(void)saveLongTermKeys;
-(void)deletePersistedLongTermKeys;
-(void)loadLongTermKeys;
-(id)longTermKeyStorageFilePath;
-(void)checkForBackupExclusion:(id)arg1 ;
-(void)validateKeybagUUID;
-(id)legacyLocalLongTermKey;
-(id)legacyRemoteLongTermKey;
-(long long)authSessionWithFlags:(unsigned)arg1 secret:(id)arg2 errorCode:(int*)arg3 ;
-(long long)unlockSessionAsOriginator:(BOOL)arg1 usingEscrow:(BOOL)arg2 escrowSecret:(id)arg3 errorCode:(int*)arg4 ;
-(long long)authSessionWithFlags:(unsigned)arg1 secret:(id)arg2 ;
-(id)stepWithAuthSession:(long long)arg1 data:(id)arg2 authStep:(BOOL)arg3 errorCode:(long long*)arg4 ;
-(BOOL)checkForLegacyEscrowData;
-(id)legacyEscrowData;
-(BOOL)storeEscrowData:(id)arg1 ;
-(void)deleteLegacyEscrowData;
-(id)escrowSecretWithAuthSession:(long long)arg1 ;
-(BOOL)confirmUnlockWithAuthSession:(long long)arg1 ;
-(id)escrowData;
-(BOOL)checkForEscrowData;
-(void)deleteEscrowData;
-(void)migrateEscrowDataIfNeeded;
-(void)setLocalLongTermKey:(NSData *)arg1 ;
-(void)setRemoteLongTermKey:(NSData *)arg1 ;
-(NSString *)keybagUUID;
-(void)setKeybagUUID:(NSString *)arg1 ;
-(NSString *)keyDeviceID;
-(void)setKeyDeviceID:(NSString *)arg1 ;
-(void)setPairingStorePath:(NSString *)arg1 ;
@end

