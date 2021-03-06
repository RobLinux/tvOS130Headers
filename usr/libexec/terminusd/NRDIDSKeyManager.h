/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:59 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSMPFullLegacyIdentity, NSMutableDictionary, NRAnalyticsKeyManager;

@interface NRDIDSKeyManager : NSObject {

	BOOL _isQueryingIDS;
	BOOL _shouldQueryAgain;
	BOOL _isRegisteredForDataProtectionClassUpdates;
	NSObject*<OS_dispatch_queue> _queue;
	IDSMPFullLegacyIdentity* _localIDSClassDIdentity;
	IDSMPFullLegacyIdentity* _localIDSClassCIdentity;
	IDSMPFullLegacyIdentity* _localIDSClassAIdentity;
	NSMutableDictionary* _deviceRecords;
	NRAnalyticsKeyManager* _keyManagerAnalytics;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL isQueryingIDS;                                            //@synthesize isQueryingIDS=_isQueryingIDS - In the implementation block
@property (assign,nonatomic) BOOL shouldQueryAgain;                                         //@synthesize shouldQueryAgain=_shouldQueryAgain - In the implementation block
@property (assign,nonatomic) BOOL isRegisteredForDataProtectionClassUpdates;                //@synthesize isRegisteredForDataProtectionClassUpdates=_isRegisteredForDataProtectionClassUpdates - In the implementation block
@property (nonatomic,retain) IDSMPFullLegacyIdentity * localIDSClassDIdentity;              //@synthesize localIDSClassDIdentity=_localIDSClassDIdentity - In the implementation block
@property (nonatomic,retain) IDSMPFullLegacyIdentity * localIDSClassCIdentity;              //@synthesize localIDSClassCIdentity=_localIDSClassCIdentity - In the implementation block
@property (nonatomic,retain) IDSMPFullLegacyIdentity * localIDSClassAIdentity;              //@synthesize localIDSClassAIdentity=_localIDSClassAIdentity - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceRecords;                           //@synthesize deviceRecords=_deviceRecords - In the implementation block
@property (nonatomic,retain) NRAnalyticsKeyManager * keyManagerAnalytics;                   //@synthesize keyManagerAnalytics=_keyManagerAnalytics - In the implementation block
+(id)copySharedIDSKeyManager;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initInternal;
-(void)reportEvent:(int)arg1 ;
-(void)reportEvent:(int)arg1 details:(id)arg2 ;
-(void)reportEvent:(int)arg1 detailsFormat:(id)arg2 ;
-(void)ingestIDSLocalDeviceRecord:(id)arg1 ;
-(void)ingestIDSPairedDevicesRecords:(id)arg1 ;
-(void)queryIDSForKeysForce:(BOOL)arg1 ;
-(void)registerForDataProtectionClassUpdates;
-(void)unregisterForDataProtectionClassUpdates;
-(void)checkOutstandingQueries;
-(void)checkOutstandingQueriesForceQueryIDS:(BOOL)arg1 ;
-(void)internalQueryIDSKeysForBluetoothUUID:(id)arg1 minDataProtectionClass:(unsigned char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)copyLocalPrivateSigningKeyFromIDSIdentity:(id)arg1 ;
-(id)copyRemotePublicSigningKeyFromIDSIdentity:(id)arg1 ;
-(void)queryIDSKeysForBluetoothUUID:(id)arg1 minDataProtectionClass:(unsigned char)arg2 localPublicClassDKeys:(id)arg3 localPublicClassCKeys:(id)arg4 localPublicClassAKeys:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)decryptRemoteClassDKeysEncryptedWithIDS:(id)arg1 bluetoothUUID:(id)arg2 decryptCompletionBlock:(/*^block*/id)arg3 ;
-(void)decryptRemoteClassCKeysEncryptedWithIDS:(id)arg1 bluetoothUUID:(id)arg2 decryptCompletionBlock:(/*^block*/id)arg3 ;
-(void)decryptRemoteClassAKeysEncryptedWithIDS:(id)arg1 bluetoothUUID:(id)arg2 decryptCompletionBlock:(/*^block*/id)arg3 ;
-(BOOL)isQueryingIDS;
-(void)setIsQueryingIDS:(BOOL)arg1 ;
-(BOOL)shouldQueryAgain;
-(void)setShouldQueryAgain:(BOOL)arg1 ;
-(BOOL)isRegisteredForDataProtectionClassUpdates;
-(void)setIsRegisteredForDataProtectionClassUpdates:(BOOL)arg1 ;
-(IDSMPFullLegacyIdentity *)localIDSClassDIdentity;
-(void)setLocalIDSClassDIdentity:(IDSMPFullLegacyIdentity *)arg1 ;
-(IDSMPFullLegacyIdentity *)localIDSClassCIdentity;
-(void)setLocalIDSClassCIdentity:(IDSMPFullLegacyIdentity *)arg1 ;
-(IDSMPFullLegacyIdentity *)localIDSClassAIdentity;
-(void)setLocalIDSClassAIdentity:(IDSMPFullLegacyIdentity *)arg1 ;
-(NSMutableDictionary *)deviceRecords;
-(void)setDeviceRecords:(NSMutableDictionary *)arg1 ;
-(NRAnalyticsKeyManager *)keyManagerAnalytics;
-(void)setKeyManagerAnalytics:(NRAnalyticsKeyManager *)arg1 ;
@end

