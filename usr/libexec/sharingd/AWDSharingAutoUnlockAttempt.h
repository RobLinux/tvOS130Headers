/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <sharingd/NSCopying.h>

@class NSString;

@interface AWDSharingAutoUnlockAttempt : PBCodable <NSCopying> {

	long long _timeIntervalSinceLastDarkWake;
	unsigned long long _timestamp;
	unsigned _attemptType;
	unsigned _awdlBringUpTime;
	unsigned _awdlPeerDiscoveryTime;
	unsigned _awdlRangingTime;
	unsigned _bleAWDLInfoExchangeTime;
	unsigned _bleAuthTokenExchangeTime;
	unsigned _bleConfirmationTime;
	unsigned _bleKeyConnectionTime;
	unsigned _bleKeyDiscoveryTime;
	unsigned _bleKeyRequestExchangeTime;
	unsigned _bleProxyConnectionTime;
	unsigned _bleProxyDiscoveryTime;
	unsigned _bluetoothConnectedDevices;
	int _cancelReason;
	unsigned _cancelTime;
	unsigned _clamshellWaitTime;
	unsigned _displayWaitTime;
	unsigned _distance;
	unsigned _errorCode;
	NSString* _errorDomain;
	unsigned _errorType;
	unsigned _flags;
	int _keyBluetoothRSSI;
	NSString* _keyDeviceModel;
	int _lastSleepType;
	int _proxyBluetoothRSSI;
	NSString* _proxyDeviceModel;
	int _timeIntervalSinceLastWake;
	unsigned _totalUnlockTime;
	NSString* _watchBuildVersion;
	NSString* _watchOSVersion;
	BOOL _clamshellClosed;
	BOOL _externalDisplay;
	BOOL _unlockSucceeded;
	BOOL _usingProxy;
	BOOL _usingTool;
	BOOL _withinRange;
	SCD_Struct_AW39 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyDeviceModel; 
@property (nonatomic,retain) NSString * keyDeviceModel;                            //@synthesize keyDeviceModel=_keyDeviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasProxyDeviceModel; 
@property (nonatomic,retain) NSString * proxyDeviceModel;                          //@synthesize proxyDeviceModel=_proxyDeviceModel - In the implementation block
@property (assign,nonatomic) BOOL hasUsingProxy; 
@property (assign,nonatomic) BOOL usingProxy;                                      //@synthesize usingProxy=_usingProxy - In the implementation block
@property (assign,nonatomic) BOOL hasBleKeyDiscoveryTime; 
@property (assign,nonatomic) unsigned bleKeyDiscoveryTime;                         //@synthesize bleKeyDiscoveryTime=_bleKeyDiscoveryTime - In the implementation block
@property (assign,nonatomic) BOOL hasBleProxyDiscoveryTime; 
@property (assign,nonatomic) unsigned bleProxyDiscoveryTime;                       //@synthesize bleProxyDiscoveryTime=_bleProxyDiscoveryTime - In the implementation block
@property (assign,nonatomic) BOOL hasBleAWDLInfoExchangeTime; 
@property (assign,nonatomic) unsigned bleAWDLInfoExchangeTime;                     //@synthesize bleAWDLInfoExchangeTime=_bleAWDLInfoExchangeTime - In the implementation block
@property (assign,nonatomic) BOOL hasBleKeyRequestExchangeTime; 
@property (assign,nonatomic) unsigned bleKeyRequestExchangeTime;                   //@synthesize bleKeyRequestExchangeTime=_bleKeyRequestExchangeTime - In the implementation block
@property (assign,nonatomic) BOOL hasBleAuthTokenExchangeTime; 
@property (assign,nonatomic) unsigned bleAuthTokenExchangeTime;                    //@synthesize bleAuthTokenExchangeTime=_bleAuthTokenExchangeTime - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlBringUpTime; 
@property (assign,nonatomic) unsigned awdlBringUpTime;                             //@synthesize awdlBringUpTime=_awdlBringUpTime - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlPeerDiscoveryTime; 
@property (assign,nonatomic) unsigned awdlPeerDiscoveryTime;                       //@synthesize awdlPeerDiscoveryTime=_awdlPeerDiscoveryTime - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlRangingTime; 
@property (assign,nonatomic) unsigned awdlRangingTime;                             //@synthesize awdlRangingTime=_awdlRangingTime - In the implementation block
@property (assign,nonatomic) BOOL hasBleConfirmationTime; 
@property (assign,nonatomic) unsigned bleConfirmationTime;                         //@synthesize bleConfirmationTime=_bleConfirmationTime - In the implementation block
@property (assign,nonatomic) BOOL hasTotalUnlockTime; 
@property (assign,nonatomic) unsigned totalUnlockTime;                             //@synthesize totalUnlockTime=_totalUnlockTime - In the implementation block
@property (assign,nonatomic) BOOL hasUnlockSucceeded; 
@property (assign,nonatomic) BOOL unlockSucceeded;                                 //@synthesize unlockSucceeded=_unlockSucceeded - In the implementation block
@property (assign,nonatomic) BOOL hasErrorType; 
@property (assign,nonatomic) unsigned errorType;                                   //@synthesize errorType=_errorType - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                               //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                                   //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                                       //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                    //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasKeyBluetoothRSSI; 
@property (assign,nonatomic) int keyBluetoothRSSI;                                 //@synthesize keyBluetoothRSSI=_keyBluetoothRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasProxyBluetoothRSSI; 
@property (assign,nonatomic) int proxyBluetoothRSSI;                               //@synthesize proxyBluetoothRSSI=_proxyBluetoothRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasWithinRange; 
@property (assign,nonatomic) BOOL withinRange;                                     //@synthesize withinRange=_withinRange - In the implementation block
@property (assign,nonatomic) BOOL hasBleProxyConnectionTime; 
@property (assign,nonatomic) unsigned bleProxyConnectionTime;                      //@synthesize bleProxyConnectionTime=_bleProxyConnectionTime - In the implementation block
@property (assign,nonatomic) BOOL hasBleKeyConnectionTime; 
@property (assign,nonatomic) unsigned bleKeyConnectionTime;                        //@synthesize bleKeyConnectionTime=_bleKeyConnectionTime - In the implementation block
@property (assign,nonatomic) BOOL hasUsingTool; 
@property (assign,nonatomic) BOOL usingTool;                                       //@synthesize usingTool=_usingTool - In the implementation block
@property (assign,nonatomic) BOOL hasCancelTime; 
@property (assign,nonatomic) unsigned cancelTime;                                  //@synthesize cancelTime=_cancelTime - In the implementation block
@property (assign,nonatomic) BOOL hasClamshellClosed; 
@property (assign,nonatomic) BOOL clamshellClosed;                                 //@synthesize clamshellClosed=_clamshellClosed - In the implementation block
@property (assign,nonatomic) BOOL hasBluetoothConnectedDevices; 
@property (assign,nonatomic) unsigned bluetoothConnectedDevices;                   //@synthesize bluetoothConnectedDevices=_bluetoothConnectedDevices - In the implementation block
@property (assign,nonatomic) BOOL hasTimeIntervalSinceLastWake; 
@property (assign,nonatomic) int timeIntervalSinceLastWake;                        //@synthesize timeIntervalSinceLastWake=_timeIntervalSinceLastWake - In the implementation block
@property (assign,nonatomic) BOOL hasLastSleepType; 
@property (assign,nonatomic) int lastSleepType;                                    //@synthesize lastSleepType=_lastSleepType - In the implementation block
@property (assign,nonatomic) BOOL hasExternalDisplay; 
@property (assign,nonatomic) BOOL externalDisplay;                                 //@synthesize externalDisplay=_externalDisplay - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayWaitTime; 
@property (assign,nonatomic) unsigned displayWaitTime;                             //@synthesize displayWaitTime=_displayWaitTime - In the implementation block
@property (assign,nonatomic) BOOL hasClamshellWaitTime; 
@property (assign,nonatomic) unsigned clamshellWaitTime;                           //@synthesize clamshellWaitTime=_clamshellWaitTime - In the implementation block
@property (assign,nonatomic) BOOL hasTimeIntervalSinceLastDarkWake; 
@property (assign,nonatomic) long long timeIntervalSinceLastDarkWake;              //@synthesize timeIntervalSinceLastDarkWake=_timeIntervalSinceLastDarkWake - In the implementation block
@property (assign,nonatomic) BOOL hasCancelReason; 
@property (assign,nonatomic) int cancelReason;                                     //@synthesize cancelReason=_cancelReason - In the implementation block
@property (assign,nonatomic) BOOL hasAttemptType; 
@property (assign,nonatomic) unsigned attemptType;                                 //@synthesize attemptType=_attemptType - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchBuildVersion; 
@property (nonatomic,retain) NSString * watchBuildVersion;                         //@synthesize watchBuildVersion=_watchBuildVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchOSVersion; 
@property (nonatomic,retain) NSString * watchOSVersion;                            //@synthesize watchOSVersion=_watchOSVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)flags;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setFlags:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)errorCode;
-(NSString *)errorDomain;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setErrorDomain:(NSString *)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setDistance:(unsigned)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(unsigned)distance;
-(unsigned)errorType;
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(void)setClamshellClosed:(BOOL)arg1 ;
-(void)setHasClamshellClosed:(BOOL)arg1 ;
-(BOOL)hasClamshellClosed;
-(BOOL)clamshellClosed;
-(int)cancelReason;
-(BOOL)hasExternalDisplay;
-(void)setExternalDisplay:(BOOL)arg1 ;
-(BOOL)externalDisplay;
-(void)setAttemptType:(unsigned)arg1 ;
-(unsigned)attemptType;
-(void)setLastSleepType:(int)arg1 ;
-(int)lastSleepType;
-(void)setProxyDeviceModel:(NSString *)arg1 ;
-(NSString *)proxyDeviceModel;
-(void)setKeyDeviceModel:(NSString *)arg1 ;
-(void)setWatchBuildVersion:(NSString *)arg1 ;
-(void)setWatchOSVersion:(NSString *)arg1 ;
-(BOOL)hasKeyDeviceModel;
-(BOOL)hasProxyDeviceModel;
-(void)setUsingProxy:(BOOL)arg1 ;
-(void)setHasUsingProxy:(BOOL)arg1 ;
-(BOOL)hasUsingProxy;
-(void)setBleKeyDiscoveryTime:(unsigned)arg1 ;
-(void)setHasBleKeyDiscoveryTime:(BOOL)arg1 ;
-(BOOL)hasBleKeyDiscoveryTime;
-(void)setBleProxyDiscoveryTime:(unsigned)arg1 ;
-(void)setHasBleProxyDiscoveryTime:(BOOL)arg1 ;
-(BOOL)hasBleProxyDiscoveryTime;
-(void)setBleAWDLInfoExchangeTime:(unsigned)arg1 ;
-(void)setHasBleAWDLInfoExchangeTime:(BOOL)arg1 ;
-(BOOL)hasBleAWDLInfoExchangeTime;
-(void)setBleKeyRequestExchangeTime:(unsigned)arg1 ;
-(void)setHasBleKeyRequestExchangeTime:(BOOL)arg1 ;
-(BOOL)hasBleKeyRequestExchangeTime;
-(void)setBleAuthTokenExchangeTime:(unsigned)arg1 ;
-(void)setHasBleAuthTokenExchangeTime:(BOOL)arg1 ;
-(BOOL)hasBleAuthTokenExchangeTime;
-(void)setAwdlBringUpTime:(unsigned)arg1 ;
-(void)setHasAwdlBringUpTime:(BOOL)arg1 ;
-(BOOL)hasAwdlBringUpTime;
-(void)setAwdlPeerDiscoveryTime:(unsigned)arg1 ;
-(void)setHasAwdlPeerDiscoveryTime:(BOOL)arg1 ;
-(BOOL)hasAwdlPeerDiscoveryTime;
-(void)setAwdlRangingTime:(unsigned)arg1 ;
-(void)setHasAwdlRangingTime:(BOOL)arg1 ;
-(BOOL)hasAwdlRangingTime;
-(void)setBleConfirmationTime:(unsigned)arg1 ;
-(void)setHasBleConfirmationTime:(BOOL)arg1 ;
-(BOOL)hasBleConfirmationTime;
-(void)setTotalUnlockTime:(unsigned)arg1 ;
-(void)setHasTotalUnlockTime:(BOOL)arg1 ;
-(BOOL)hasTotalUnlockTime;
-(void)setUnlockSucceeded:(BOOL)arg1 ;
-(void)setHasUnlockSucceeded:(BOOL)arg1 ;
-(BOOL)hasUnlockSucceeded;
-(void)setErrorType:(unsigned)arg1 ;
-(void)setHasErrorType:(BOOL)arg1 ;
-(BOOL)hasErrorType;
-(void)setKeyBluetoothRSSI:(int)arg1 ;
-(void)setHasKeyBluetoothRSSI:(BOOL)arg1 ;
-(BOOL)hasKeyBluetoothRSSI;
-(void)setProxyBluetoothRSSI:(int)arg1 ;
-(void)setHasProxyBluetoothRSSI:(BOOL)arg1 ;
-(BOOL)hasProxyBluetoothRSSI;
-(void)setWithinRange:(BOOL)arg1 ;
-(void)setHasWithinRange:(BOOL)arg1 ;
-(BOOL)hasWithinRange;
-(void)setBleProxyConnectionTime:(unsigned)arg1 ;
-(void)setHasBleProxyConnectionTime:(BOOL)arg1 ;
-(BOOL)hasBleProxyConnectionTime;
-(void)setBleKeyConnectionTime:(unsigned)arg1 ;
-(void)setHasBleKeyConnectionTime:(BOOL)arg1 ;
-(BOOL)hasBleKeyConnectionTime;
-(void)setUsingTool:(BOOL)arg1 ;
-(void)setHasUsingTool:(BOOL)arg1 ;
-(BOOL)hasUsingTool;
-(void)setCancelTime:(unsigned)arg1 ;
-(void)setHasCancelTime:(BOOL)arg1 ;
-(BOOL)hasCancelTime;
-(void)setBluetoothConnectedDevices:(unsigned)arg1 ;
-(void)setHasBluetoothConnectedDevices:(BOOL)arg1 ;
-(BOOL)hasBluetoothConnectedDevices;
-(void)setTimeIntervalSinceLastWake:(int)arg1 ;
-(void)setHasTimeIntervalSinceLastWake:(BOOL)arg1 ;
-(BOOL)hasTimeIntervalSinceLastWake;
-(void)setHasLastSleepType:(BOOL)arg1 ;
-(BOOL)hasLastSleepType;
-(void)setHasExternalDisplay:(BOOL)arg1 ;
-(void)setDisplayWaitTime:(unsigned)arg1 ;
-(void)setHasDisplayWaitTime:(BOOL)arg1 ;
-(BOOL)hasDisplayWaitTime;
-(void)setClamshellWaitTime:(unsigned)arg1 ;
-(void)setHasClamshellWaitTime:(BOOL)arg1 ;
-(BOOL)hasClamshellWaitTime;
-(void)setTimeIntervalSinceLastDarkWake:(long long)arg1 ;
-(void)setHasTimeIntervalSinceLastDarkWake:(BOOL)arg1 ;
-(BOOL)hasTimeIntervalSinceLastDarkWake;
-(void)setCancelReason:(int)arg1 ;
-(void)setHasCancelReason:(BOOL)arg1 ;
-(BOOL)hasCancelReason;
-(void)setHasAttemptType:(BOOL)arg1 ;
-(BOOL)hasAttemptType;
-(BOOL)hasWatchBuildVersion;
-(BOOL)hasWatchOSVersion;
-(NSString *)keyDeviceModel;
-(BOOL)usingProxy;
-(unsigned)bleKeyDiscoveryTime;
-(unsigned)bleProxyDiscoveryTime;
-(unsigned)bleAWDLInfoExchangeTime;
-(unsigned)bleKeyRequestExchangeTime;
-(unsigned)bleAuthTokenExchangeTime;
-(unsigned)awdlBringUpTime;
-(unsigned)awdlPeerDiscoveryTime;
-(unsigned)awdlRangingTime;
-(unsigned)bleConfirmationTime;
-(unsigned)totalUnlockTime;
-(BOOL)unlockSucceeded;
-(int)keyBluetoothRSSI;
-(int)proxyBluetoothRSSI;
-(BOOL)withinRange;
-(unsigned)bleProxyConnectionTime;
-(unsigned)bleKeyConnectionTime;
-(BOOL)usingTool;
-(unsigned)cancelTime;
-(unsigned)bluetoothConnectedDevices;
-(int)timeIntervalSinceLastWake;
-(unsigned)displayWaitTime;
-(unsigned)clamshellWaitTime;
-(long long)timeIntervalSinceLastDarkWake;
-(NSString *)watchBuildVersion;
-(NSString *)watchOSVersion;
@end

