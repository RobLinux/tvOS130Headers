/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/securityd-Structs.h>
#import <securityd/CKKSCKRecordHolder.h>

@class CKKSKeychainBackedKey, NSString, CKKSWrappedAESSIVKey, CKKSAESSIVKey;

@interface CKKSKey : CKKSCKRecordHolder {

	BOOL _currentkey;
	CKKSKeychainBackedKey* _keycore;
	NSString* _state;

}

@property (retain) CKKSKeychainBackedKey * keycore;                   //@synthesize keycore=_keycore - In the implementation block
@property (retain) NSString * uuid; 
@property (retain) NSString * parentKeyUUID; 
@property (copy) NSString*<SecCKKSKeyClass> keyclass; 
@property (copy) CKKSWrappedAESSIVKey * wrappedkey; 
@property (readonly) CKKSAESSIVKey * aessivkey; 
@property (copy) NSString*<SecCKKSProcessedState> state;              //@synthesize state=_state - In the implementation block
@property (assign) BOOL currentkey;                                   //@synthesize currentkey=_currentkey - In the implementation block
+(id)sqlTable;
+(id)fromDatabaseRow:(id)arg1 ;
+(id)sqlColumns;
+(id)loadKeyWithUUID:(id)arg1 zoneID:(id)arg2 error:(id*)arg3 ;
+(id)tryFromDatabase:(id)arg1 zoneID:(id)arg2 error:(id*)arg3 ;
+(id)fromDatabase:(id)arg1 zoneID:(id)arg2 error:(id*)arg3 ;
+(id)allKeys:(id)arg1 error:(id*)arg2 ;
+(id)isItemKeyForKeychainView:(SecDbItem*)arg1 ;
+(id)currentKeysForClass:(NSString*)arg1 state:(id)arg2 zoneID:(id)arg3 error:(id*)arg4 ;
+(id)fromDatabaseAnyState:(id)arg1 zoneID:(id)arg2 error:(id*)arg3 ;
+(id)keyFromKeychain:(id)arg1 parentKeyUUID:(id)arg2 keyclass:(NSString*)arg3 state:(NSString*)arg4 zoneID:(id)arg5 encodedCKRecord:(id)arg6 currentkey:(long long)arg7 error:(id*)arg8 ;
+(id)tryFromDatabaseAnyState:(id)arg1 zoneID:(id)arg2 error:(id*)arg3 ;
+(id)selfWrappedKeys:(id)arg1 error:(id*)arg2 ;
+(id)currentKeyForClass:(NSString*)arg1 zoneID:(id)arg2 error:(id*)arg3 ;
+(id)remoteKeys:(id)arg1 error:(id*)arg2 ;
+(id)localKeys:(id)arg1 error:(id*)arg2 ;
+(id)countsByClass:(id)arg1 error:(id*)arg2 ;
+(id)randomKeyWrappedByParent:(id)arg1 error:(id*)arg2 ;
+(id)randomKeyWrappedByParent:(id)arg1 keyclass:(NSString*)arg2 error:(id*)arg3 ;
+(id)randomKeyWrappedBySelf:(id)arg1 error:(id*)arg2 ;
+(id)loadFromProtobuf:(id)arg1 error:(id*)arg2 ;
-(id)sqlValues;
-(id)whereClauseToFindSelf;
-(id)CKRecordName;
-(id)updateCKRecord:(id)arg1 zoneID:(id)arg2 ;
-(void)setFromCKRecord:(id)arg1 ;
-(BOOL)matchesCKRecord:(id)arg1 ;
-(id)unwrapViaKeyHierarchy:(id*)arg1 ;
-(BOOL)saveToDatabaseAsOnlyCurrentKeyForClassAndState:(id*)arg1 ;
-(id)topKeyInAnyState:(id*)arg1 ;
-(CKKSKeychainBackedKey *)keycore;
-(id)initSelfWrappedWithAESKey:(id)arg1 uuid:(id)arg2 keyclass:(NSString*)arg3 state:(NSString*)arg4 zoneID:(id)arg5 encodedCKRecord:(id)arg6 currentkey:(long long)arg7 ;
-(id)initWrappedBy:(id)arg1 AESKey:(id)arg2 uuid:(id)arg3 keyclass:(NSString*)arg4 state:(NSString*)arg5 zoneID:(id)arg6 encodedCKRecord:(id)arg7 currentkey:(long long)arg8 ;
-(id)initWithWrappedAESKey:(id)arg1 uuid:(id)arg2 parentKeyUUID:(id)arg3 keyclass:(NSString*)arg4 state:(NSString*)arg5 zoneID:(id)arg6 encodedCKRecord:(id)arg7 currentkey:(long long)arg8 ;
-(id)initWithKeyCore:(id)arg1 ;
-(void)setKeycore:(CKKSKeychainBackedKey *)arg1 ;
-(BOOL)currentkey;
-(void)setCurrentkey:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSString*<SecCKKSProcessedState>)state;
-(void)setState:(NSString*<SecCKKSProcessedState>)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(NSString*<SecCKKSKeyClass>)keyclass;
-(NSString *)parentKeyUUID;
-(CKKSWrappedAESSIVKey *)wrappedkey;
-(BOOL)saveKeyMaterialToKeychain:(id*)arg1 ;
-(id)wrapAESKey:(id)arg1 error:(id*)arg2 ;
-(id)unwrapAESKey:(id)arg1 error:(id*)arg2 ;
-(id)encryptData:(id)arg1 authenticatedData:(id)arg2 error:(id*)arg3 ;
-(id)decryptData:(id)arg1 authenticatedData:(id)arg2 error:(id*)arg3 ;
-(BOOL)wrapsSelf;
-(BOOL)wrapUnder:(id)arg1 error:(id*)arg2 ;
-(id)ensureKeyLoaded:(id*)arg1 ;
-(BOOL)trySelfWrappedKeyCandidate:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveKeyMaterialToKeychain:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)loadKeyMaterialFromKeychain:(id*)arg1 ;
-(BOOL)deleteKeyMaterialFromKeychain:(id*)arg1 ;
-(id)serializeAsProtobuf:(id*)arg1 ;
-(void)setParentKeyUUID:(NSString *)arg1 ;
-(void)setKeyclass:(NSString*<SecCKKSKeyClass>)arg1 ;
-(void)setWrappedkey:(CKKSWrappedAESSIVKey *)arg1 ;
-(CKKSAESSIVKey *)aessivkey;
@end

