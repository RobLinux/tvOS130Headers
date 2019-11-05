/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <sharingd/NSCopying.h>

@class NSString;

@interface AWDSharingAirDropPeerDiscoveredInfo : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _awdlVersion;
	unsigned _bluetoothDiscovery;
	unsigned _bonjourDiscovery;
	unsigned _bonjourResolveComplete;
	unsigned _bonjourTXTRecordDiscovery;
	NSString* _browserID;
	int _errorCode;
	NSString* _errorDomain;
	unsigned _identityQueryComplete;
	NSString* _modelCode;
	NSString* _modelName;
	unsigned _platform;
	int _rssi;
	NSString* _sessionID;
	unsigned _tcpConnectionComplete;
	unsigned _tlsHandshakeComplete;
	unsigned _totalDiscovery;
	BOOL _verifiableIdentity;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionID; 
@property (nonatomic,retain) NSString * sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL hasModelName; 
@property (nonatomic,retain) NSString * modelName;                            //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,readonly) BOOL hasModelCode; 
@property (nonatomic,retain) NSString * modelCode;                            //@synthesize modelCode=_modelCode - In the implementation block
@property (assign,nonatomic) BOOL hasBluetoothDiscovery; 
@property (assign,nonatomic) unsigned bluetoothDiscovery;                     //@synthesize bluetoothDiscovery=_bluetoothDiscovery - In the implementation block
@property (assign,nonatomic) BOOL hasBonjourDiscovery; 
@property (assign,nonatomic) unsigned bonjourDiscovery;                       //@synthesize bonjourDiscovery=_bonjourDiscovery - In the implementation block
@property (assign,nonatomic) BOOL hasBonjourTXTRecordDiscovery; 
@property (assign,nonatomic) unsigned bonjourTXTRecordDiscovery;              //@synthesize bonjourTXTRecordDiscovery=_bonjourTXTRecordDiscovery - In the implementation block
@property (assign,nonatomic) BOOL hasBonjourResolveComplete; 
@property (assign,nonatomic) unsigned bonjourResolveComplete;                 //@synthesize bonjourResolveComplete=_bonjourResolveComplete - In the implementation block
@property (assign,nonatomic) BOOL hasTcpConnectionComplete; 
@property (assign,nonatomic) unsigned tcpConnectionComplete;                  //@synthesize tcpConnectionComplete=_tcpConnectionComplete - In the implementation block
@property (assign,nonatomic) BOOL hasTlsHandshakeComplete; 
@property (assign,nonatomic) unsigned tlsHandshakeComplete;                   //@synthesize tlsHandshakeComplete=_tlsHandshakeComplete - In the implementation block
@property (assign,nonatomic) BOOL hasIdentityQueryComplete; 
@property (assign,nonatomic) unsigned identityQueryComplete;                  //@synthesize identityQueryComplete=_identityQueryComplete - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDiscovery; 
@property (assign,nonatomic) unsigned totalDiscovery;                         //@synthesize totalDiscovery=_totalDiscovery - In the implementation block
@property (assign,nonatomic) BOOL hasVerifiableIdentity; 
@property (assign,nonatomic) BOOL verifiableIdentity;                         //@synthesize verifiableIdentity=_verifiableIdentity - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                                        //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                          //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                                   //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlVersion; 
@property (assign,nonatomic) unsigned awdlVersion;                            //@synthesize awdlVersion=_awdlVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPlatform; 
@property (assign,nonatomic) unsigned platform;                               //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) BOOL hasBrowserID; 
@property (nonatomic,retain) NSString * browserID;                            //@synthesize browserID=_browserID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSString *)modelCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)errorCode;
-(NSString *)errorDomain;
-(int)rssi;
-(void)setRssi:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setErrorDomain:(NSString *)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(void)setPlatform:(unsigned)arg1 ;
-(unsigned)platform;
-(NSString *)modelName;
-(BOOL)hasSessionID;
-(void)setModelName:(NSString *)arg1 ;
-(void)setModelCode:(NSString *)arg1 ;
-(void)setBrowserID:(NSString *)arg1 ;
-(BOOL)hasModelName;
-(BOOL)hasModelCode;
-(void)setBluetoothDiscovery:(unsigned)arg1 ;
-(void)setHasBluetoothDiscovery:(BOOL)arg1 ;
-(BOOL)hasBluetoothDiscovery;
-(void)setBonjourDiscovery:(unsigned)arg1 ;
-(void)setHasBonjourDiscovery:(BOOL)arg1 ;
-(BOOL)hasBonjourDiscovery;
-(void)setBonjourTXTRecordDiscovery:(unsigned)arg1 ;
-(void)setHasBonjourTXTRecordDiscovery:(BOOL)arg1 ;
-(BOOL)hasBonjourTXTRecordDiscovery;
-(void)setBonjourResolveComplete:(unsigned)arg1 ;
-(void)setHasBonjourResolveComplete:(BOOL)arg1 ;
-(BOOL)hasBonjourResolveComplete;
-(void)setTcpConnectionComplete:(unsigned)arg1 ;
-(void)setHasTcpConnectionComplete:(BOOL)arg1 ;
-(BOOL)hasTcpConnectionComplete;
-(void)setTlsHandshakeComplete:(unsigned)arg1 ;
-(void)setHasTlsHandshakeComplete:(BOOL)arg1 ;
-(BOOL)hasTlsHandshakeComplete;
-(void)setIdentityQueryComplete:(unsigned)arg1 ;
-(void)setHasIdentityQueryComplete:(BOOL)arg1 ;
-(BOOL)hasIdentityQueryComplete;
-(void)setTotalDiscovery:(unsigned)arg1 ;
-(void)setHasTotalDiscovery:(BOOL)arg1 ;
-(BOOL)hasTotalDiscovery;
-(void)setVerifiableIdentity:(BOOL)arg1 ;
-(void)setHasVerifiableIdentity:(BOOL)arg1 ;
-(BOOL)hasVerifiableIdentity;
-(void)setAwdlVersion:(unsigned)arg1 ;
-(void)setHasAwdlVersion:(BOOL)arg1 ;
-(BOOL)hasAwdlVersion;
-(void)setHasPlatform:(BOOL)arg1 ;
-(BOOL)hasPlatform;
-(BOOL)hasBrowserID;
-(unsigned)bluetoothDiscovery;
-(unsigned)bonjourDiscovery;
-(unsigned)bonjourTXTRecordDiscovery;
-(unsigned)bonjourResolveComplete;
-(unsigned)tcpConnectionComplete;
-(unsigned)tlsHandshakeComplete;
-(unsigned)identityQueryComplete;
-(unsigned)totalDiscovery;
-(BOOL)verifiableIdentity;
-(unsigned)awdlVersion;
-(NSString *)browserID;
@end

