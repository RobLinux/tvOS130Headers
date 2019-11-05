/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:59 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <terminusd/terminusd-Structs.h>
#import <terminusd/NSCopying.h>
#import <terminusd/NSSecureCoding.h>

@class NSUUID, NSString, NSDate, NSData;

@interface NRDLocalDeviceOldEncoding : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRegistered;
	BOOL _isEnabled;
	BOOL _isEmptyPairing;
	BOOL _wasInitiallySetupUsingIDSPairing;
	BOOL _lastSeenAlwaysOnWiFiSupported;
	BOOL _usesSPPLink;
	unsigned short _lastSeenInnerLinkVersionHBO;
	NSUUID* _nrUUID;
	NSUUID* _bluetoothUUID;
	long long _pairingProtocolVersion;
	NSString* _lastSeenName;
	NSString* _lastSeenBuildVersion;
	NSDate* _dateCreated;
	NSDate* _dateRegistered;
	NSDate* _dateEnabled;
	NSData* _outOfBandKey;
	NSData* _bluetoothMACAddress;
	NSData* _classDRemotePublicKey;
	NSData* _classDLocalPublicKey;
	NSData* _classDLocalPrivateKey;
	NSData* _classDSharedSecret;
	NSData* _localPublicClassDTLVEncryptedWithIDS;
	NSData* _dhLocalPublicClassD;
	NSData* _dhLocalPrivateClassD;
	NSData* _classCRemotePublicKey;
	NSData* _classCLocalPublicKey;
	NSData* _classCLocalPrivateKey;
	NSData* _classCSharedSecret;
	NSData* _localPublicClassCTLVEncryptedWithIDS;
	NSData* _dhLocalPublicClassC;
	NSData* _dhLocalPrivateClassC;
	NSData* _classARemotePublicKey;
	NSData* _classALocalPublicKey;
	NSData* _classALocalPrivateKey;
	NSData* _classASharedSecret;
	NSData* _localPublicClassATLVEncryptedWithIDS;
	NSData* _dhLocalPublicClassA;
	NSData* _dhLocalPrivateClassA;
	NSData* _localInnerIPv6AddressBytesClassD;
	NSData* _remoteInnerIPv6AddressBytesClassD;
	NSData* _localInnerIPv6AddressBytesClassC;
	NSData* _remoteInnerIPv6AddressBytesClassC;
	NSData* _receivedProxyNotifyPayload;

}

@property (nonatomic,retain) NSUUID * nrUUID;                                            //@synthesize nrUUID=_nrUUID - In the implementation block
@property (nonatomic,retain) NSUUID * bluetoothUUID;                                     //@synthesize bluetoothUUID=_bluetoothUUID - In the implementation block
@property (assign,nonatomic) BOOL isRegistered;                                          //@synthesize isRegistered=_isRegistered - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                                             //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL isEmptyPairing;                                        //@synthesize isEmptyPairing=_isEmptyPairing - In the implementation block
@property (assign,nonatomic) long long pairingProtocolVersion;                           //@synthesize pairingProtocolVersion=_pairingProtocolVersion - In the implementation block
@property (assign,nonatomic) BOOL wasInitiallySetupUsingIDSPairing;                      //@synthesize wasInitiallySetupUsingIDSPairing=_wasInitiallySetupUsingIDSPairing - In the implementation block
@property (assign,nonatomic) unsigned short lastSeenInnerLinkVersionHBO;                 //@synthesize lastSeenInnerLinkVersionHBO=_lastSeenInnerLinkVersionHBO - In the implementation block
@property (nonatomic,retain) NSString * lastSeenName;                                    //@synthesize lastSeenName=_lastSeenName - In the implementation block
@property (nonatomic,retain) NSString * lastSeenBuildVersion;                            //@synthesize lastSeenBuildVersion=_lastSeenBuildVersion - In the implementation block
@property (assign,nonatomic) BOOL lastSeenAlwaysOnWiFiSupported;                         //@synthesize lastSeenAlwaysOnWiFiSupported=_lastSeenAlwaysOnWiFiSupported - In the implementation block
@property (assign,nonatomic) BOOL usesSPPLink;                                           //@synthesize usesSPPLink=_usesSPPLink - In the implementation block
@property (nonatomic,retain) NSDate * dateCreated;                                       //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,retain) NSDate * dateRegistered;                                    //@synthesize dateRegistered=_dateRegistered - In the implementation block
@property (nonatomic,retain) NSDate * dateEnabled;                                       //@synthesize dateEnabled=_dateEnabled - In the implementation block
@property (nonatomic,retain) NSData * outOfBandKey;                                      //@synthesize outOfBandKey=_outOfBandKey - In the implementation block
@property (nonatomic,retain) NSData * bluetoothMACAddress;                               //@synthesize bluetoothMACAddress=_bluetoothMACAddress - In the implementation block
@property (nonatomic,retain) NSData * classDRemotePublicKey;                             //@synthesize classDRemotePublicKey=_classDRemotePublicKey - In the implementation block
@property (nonatomic,retain) NSData * classDLocalPublicKey;                              //@synthesize classDLocalPublicKey=_classDLocalPublicKey - In the implementation block
@property (nonatomic,retain) NSData * classDLocalPrivateKey;                             //@synthesize classDLocalPrivateKey=_classDLocalPrivateKey - In the implementation block
@property (nonatomic,retain) NSData * classDSharedSecret;                                //@synthesize classDSharedSecret=_classDSharedSecret - In the implementation block
@property (nonatomic,retain) NSData * localPublicClassDTLVEncryptedWithIDS;              //@synthesize localPublicClassDTLVEncryptedWithIDS=_localPublicClassDTLVEncryptedWithIDS - In the implementation block
@property (nonatomic,retain) NSData * dhLocalPublicClassD;                               //@synthesize dhLocalPublicClassD=_dhLocalPublicClassD - In the implementation block
@property (nonatomic,retain) NSData * dhLocalPrivateClassD;                              //@synthesize dhLocalPrivateClassD=_dhLocalPrivateClassD - In the implementation block
@property (nonatomic,retain) NSData * classCRemotePublicKey;                             //@synthesize classCRemotePublicKey=_classCRemotePublicKey - In the implementation block
@property (nonatomic,retain) NSData * classCLocalPublicKey;                              //@synthesize classCLocalPublicKey=_classCLocalPublicKey - In the implementation block
@property (nonatomic,retain) NSData * classCLocalPrivateKey;                             //@synthesize classCLocalPrivateKey=_classCLocalPrivateKey - In the implementation block
@property (nonatomic,retain) NSData * classCSharedSecret;                                //@synthesize classCSharedSecret=_classCSharedSecret - In the implementation block
@property (nonatomic,retain) NSData * localPublicClassCTLVEncryptedWithIDS;              //@synthesize localPublicClassCTLVEncryptedWithIDS=_localPublicClassCTLVEncryptedWithIDS - In the implementation block
@property (nonatomic,retain) NSData * dhLocalPublicClassC;                               //@synthesize dhLocalPublicClassC=_dhLocalPublicClassC - In the implementation block
@property (nonatomic,retain) NSData * dhLocalPrivateClassC;                              //@synthesize dhLocalPrivateClassC=_dhLocalPrivateClassC - In the implementation block
@property (nonatomic,retain) NSData * classARemotePublicKey;                             //@synthesize classARemotePublicKey=_classARemotePublicKey - In the implementation block
@property (nonatomic,retain) NSData * classALocalPublicKey;                              //@synthesize classALocalPublicKey=_classALocalPublicKey - In the implementation block
@property (nonatomic,retain) NSData * classALocalPrivateKey;                             //@synthesize classALocalPrivateKey=_classALocalPrivateKey - In the implementation block
@property (nonatomic,retain) NSData * classASharedSecret;                                //@synthesize classASharedSecret=_classASharedSecret - In the implementation block
@property (nonatomic,retain) NSData * localPublicClassATLVEncryptedWithIDS;              //@synthesize localPublicClassATLVEncryptedWithIDS=_localPublicClassATLVEncryptedWithIDS - In the implementation block
@property (nonatomic,retain) NSData * dhLocalPublicClassA;                               //@synthesize dhLocalPublicClassA=_dhLocalPublicClassA - In the implementation block
@property (nonatomic,retain) NSData * dhLocalPrivateClassA;                              //@synthesize dhLocalPrivateClassA=_dhLocalPrivateClassA - In the implementation block
@property (nonatomic,retain) NSData * localInnerIPv6AddressBytesClassD;                  //@synthesize localInnerIPv6AddressBytesClassD=_localInnerIPv6AddressBytesClassD - In the implementation block
@property (nonatomic,retain) NSData * remoteInnerIPv6AddressBytesClassD;                 //@synthesize remoteInnerIPv6AddressBytesClassD=_remoteInnerIPv6AddressBytesClassD - In the implementation block
@property (nonatomic,retain) NSData * localInnerIPv6AddressBytesClassC;                  //@synthesize localInnerIPv6AddressBytesClassC=_localInnerIPv6AddressBytesClassC - In the implementation block
@property (nonatomic,retain) NSData * remoteInnerIPv6AddressBytesClassC;                 //@synthesize remoteInnerIPv6AddressBytesClassC=_remoteInnerIPv6AddressBytesClassC - In the implementation block
@property (nonatomic,retain) NSData * receivedProxyNotifyPayload;                        //@synthesize receivedProxyNotifyPayload=_receivedProxyNotifyPayload - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isRegistered;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setIsRegistered:(BOOL)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(NSDate *)dateCreated;
-(void)setDateCreated:(NSDate *)arg1 ;
-(long long)pairingProtocolVersion;
-(NSData *)bluetoothMACAddress;
-(void)setBluetoothMACAddress:(NSData *)arg1 ;
-(NSDate *)dateRegistered;
-(NSUUID *)bluetoothUUID;
-(void)setBluetoothUUID:(NSUUID *)arg1 ;
-(id)initWithNRUUID:(id)arg1 ;
-(NSUUID *)nrUUID;
-(void)setNrUUID:(NSUUID *)arg1 ;
-(void)setPairingProtocolVersion:(long long)arg1 ;
-(NSData *)outOfBandKey;
-(void)setOutOfBandKey:(NSData *)arg1 ;
-(BOOL)wasInitiallySetupUsingIDSPairing;
-(void)setWasInitiallySetupUsingIDSPairing:(BOOL)arg1 ;
-(id)copyNewEncoding;
-(BOOL)isEmptyPairing;
-(void)setIsEmptyPairing:(BOOL)arg1 ;
-(unsigned short)lastSeenInnerLinkVersionHBO;
-(void)setLastSeenInnerLinkVersionHBO:(unsigned short)arg1 ;
-(NSString *)lastSeenName;
-(void)setLastSeenName:(NSString *)arg1 ;
-(NSString *)lastSeenBuildVersion;
-(void)setLastSeenBuildVersion:(NSString *)arg1 ;
-(BOOL)lastSeenAlwaysOnWiFiSupported;
-(void)setLastSeenAlwaysOnWiFiSupported:(BOOL)arg1 ;
-(BOOL)usesSPPLink;
-(void)setUsesSPPLink:(BOOL)arg1 ;
-(void)setDateRegistered:(NSDate *)arg1 ;
-(NSDate *)dateEnabled;
-(void)setDateEnabled:(NSDate *)arg1 ;
-(NSData *)classDRemotePublicKey;
-(void)setClassDRemotePublicKey:(NSData *)arg1 ;
-(NSData *)classDLocalPublicKey;
-(void)setClassDLocalPublicKey:(NSData *)arg1 ;
-(NSData *)classDLocalPrivateKey;
-(void)setClassDLocalPrivateKey:(NSData *)arg1 ;
-(NSData *)classDSharedSecret;
-(void)setClassDSharedSecret:(NSData *)arg1 ;
-(NSData *)localPublicClassDTLVEncryptedWithIDS;
-(void)setLocalPublicClassDTLVEncryptedWithIDS:(NSData *)arg1 ;
-(NSData *)dhLocalPublicClassD;
-(void)setDhLocalPublicClassD:(NSData *)arg1 ;
-(NSData *)dhLocalPrivateClassD;
-(void)setDhLocalPrivateClassD:(NSData *)arg1 ;
-(NSData *)classCRemotePublicKey;
-(void)setClassCRemotePublicKey:(NSData *)arg1 ;
-(NSData *)classCLocalPublicKey;
-(void)setClassCLocalPublicKey:(NSData *)arg1 ;
-(NSData *)classCLocalPrivateKey;
-(void)setClassCLocalPrivateKey:(NSData *)arg1 ;
-(NSData *)classCSharedSecret;
-(void)setClassCSharedSecret:(NSData *)arg1 ;
-(NSData *)localPublicClassCTLVEncryptedWithIDS;
-(void)setLocalPublicClassCTLVEncryptedWithIDS:(NSData *)arg1 ;
-(NSData *)dhLocalPublicClassC;
-(void)setDhLocalPublicClassC:(NSData *)arg1 ;
-(NSData *)dhLocalPrivateClassC;
-(void)setDhLocalPrivateClassC:(NSData *)arg1 ;
-(NSData *)classARemotePublicKey;
-(void)setClassARemotePublicKey:(NSData *)arg1 ;
-(NSData *)classALocalPublicKey;
-(void)setClassALocalPublicKey:(NSData *)arg1 ;
-(NSData *)classALocalPrivateKey;
-(void)setClassALocalPrivateKey:(NSData *)arg1 ;
-(NSData *)classASharedSecret;
-(void)setClassASharedSecret:(NSData *)arg1 ;
-(NSData *)localPublicClassATLVEncryptedWithIDS;
-(void)setLocalPublicClassATLVEncryptedWithIDS:(NSData *)arg1 ;
-(NSData *)dhLocalPublicClassA;
-(void)setDhLocalPublicClassA:(NSData *)arg1 ;
-(NSData *)dhLocalPrivateClassA;
-(void)setDhLocalPrivateClassA:(NSData *)arg1 ;
-(NSData *)localInnerIPv6AddressBytesClassD;
-(void)setLocalInnerIPv6AddressBytesClassD:(NSData *)arg1 ;
-(NSData *)remoteInnerIPv6AddressBytesClassD;
-(void)setRemoteInnerIPv6AddressBytesClassD:(NSData *)arg1 ;
-(NSData *)localInnerIPv6AddressBytesClassC;
-(void)setLocalInnerIPv6AddressBytesClassC:(NSData *)arg1 ;
-(NSData *)remoteInnerIPv6AddressBytesClassC;
-(void)setRemoteInnerIPv6AddressBytesClassC:(NSData *)arg1 ;
-(NSData *)receivedProxyNotifyPayload;
-(void)setReceivedProxyNotifyPayload:(NSData *)arg1 ;
@end
