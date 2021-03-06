/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/Helpers/ProtectedCloudKeySyncing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSHashTable, NSObject, NSUUID;

@interface PCSDevice : NSObject {

	BOOL _isActivePairedDevice;
	BOOL _isConnected;
	BOOL _isTombstone;
	BOOL _syncingIsRestricted;
	NSString* _idsDeviceIdentifier;
	NSString* _watchSize;
	NSString* _buildVersion;
	NSString* _osVersion;
	NSString* _serialNumber;
	NSString* _UUID;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (assign) BOOL isConnected;                                          //@synthesize isConnected=_isConnected - In the implementation block
@property (assign) BOOL isActivePairedDevice;                                 //@synthesize isActivePairedDevice=_isActivePairedDevice - In the implementation block
@property (assign) BOOL isTombstone;                                          //@synthesize isTombstone=_isTombstone - In the implementation block
@property (assign) BOOL syncingIsRestricted;                                  //@synthesize syncingIsRestricted=_syncingIsRestricted - In the implementation block
@property (readonly) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (readonly) NSString * idsDeviceIdentifier;                          //@synthesize idsDeviceIdentifier=_idsDeviceIdentifier - In the implementation block
@property (readonly) NSUUID * pairingID; 
@property (readonly) BOOL supportsPCSKeySync; 
@property (readonly) BOOL supportsNewProtocol; 
@property (readonly) BOOL isReachable; 
@property (readonly) NSString * model; 
@property (readonly) NSString * watchSize;                                    //@synthesize watchSize=_watchSize - In the implementation block
@property (readonly) NSString * buildVersion;                                 //@synthesize buildVersion=_buildVersion - In the implementation block
@property (readonly) NSString * osVersion;                                    //@synthesize osVersion=_osVersion - In the implementation block
@property (readonly) NSString * serialNumber;                                 //@synthesize serialNumber=_serialNumber - In the implementation block
@property (readonly) NSString * UUID;                                         //@synthesize UUID=_UUID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSString *)UUID;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)isConnected;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(NSString *)model;
-(NSString *)buildVersion;
-(NSString *)serialNumber;
-(NSString *)osVersion;
-(void)setIsConnected:(BOOL)arg1 ;
-(NSHashTable *)observers;
-(NSString *)idsDeviceIdentifier;
-(NSString *)watchSize;
-(BOOL)isTombstone;
-(NSUUID *)pairingID;
-(BOOL)isReachable;
-(BOOL)isActivePairedDevice;
-(BOOL)_onQueue_isReachable;
-(BOOL)supportsPCSKeySync;
-(BOOL)supportsNewProtocol;
-(void)setIsActivePairedDevice:(BOOL)arg1 ;
-(void)setIsTombstone:(BOOL)arg1 ;
-(BOOL)syncingIsRestricted;
-(void)setSyncingIsRestricted:(BOOL)arg1 ;
@end

