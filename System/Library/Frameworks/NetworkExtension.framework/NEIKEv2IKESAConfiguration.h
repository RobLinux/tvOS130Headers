/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NSCopying.h>

@class NSArray, NWEndpoint, NSString, NWAddressEndpoint, NSSet;

@interface NEIKEv2IKESAConfiguration : NSObject <NSCopying> {

	NSArray* _proposals;
	BOOL _randomizeLocalPort;
	BOOL _serverMode;
	BOOL _allowRedirect;
	BOOL _disableSwitchToNATTPorts;
	BOOL _allowTCPEncapsulation;
	BOOL _useTLSForTCPEncapsulation;
	BOOL _forceUDPEncapsulation;
	unsigned short _tcpEncapsulationPort;
	unsigned _nonceSize;
	NWEndpoint* _localEndpoint;
	NWEndpoint* _remoteEndpoint;
	NSString* _outgoingInterfaceName;
	NWAddressEndpoint* _redirectedFromServer;
	NSArray* _customIKESAInitPayloads;
	NSArray* _customIKESAInitVendorPayloads;
	NSSet* _extraSupportedSignatureHashes;

}

@property (retain) NWEndpoint * localEndpoint;                            //@synthesize localEndpoint=_localEndpoint - In the implementation block
@property (retain) NWEndpoint * remoteEndpoint;                           //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
@property (retain) NSString * outgoingInterfaceName;                      //@synthesize outgoingInterfaceName=_outgoingInterfaceName - In the implementation block
@property (assign) BOOL randomizeLocalPort;                               //@synthesize randomizeLocalPort=_randomizeLocalPort - In the implementation block
@property (assign) BOOL serverMode;                                       //@synthesize serverMode=_serverMode - In the implementation block
@property (assign) BOOL allowRedirect;                                    //@synthesize allowRedirect=_allowRedirect - In the implementation block
@property (assign) BOOL disableSwitchToNATTPorts;                         //@synthesize disableSwitchToNATTPorts=_disableSwitchToNATTPorts - In the implementation block
@property (assign) BOOL allowTCPEncapsulation;                            //@synthesize allowTCPEncapsulation=_allowTCPEncapsulation - In the implementation block
@property (assign) BOOL useTLSForTCPEncapsulation;                        //@synthesize useTLSForTCPEncapsulation=_useTLSForTCPEncapsulation - In the implementation block
@property (assign) BOOL forceUDPEncapsulation;                            //@synthesize forceUDPEncapsulation=_forceUDPEncapsulation - In the implementation block
@property (assign) unsigned short tcpEncapsulationPort;                   //@synthesize tcpEncapsulationPort=_tcpEncapsulationPort - In the implementation block
@property (assign) unsigned nonceSize;                                    //@synthesize nonceSize=_nonceSize - In the implementation block
@property (retain) NWAddressEndpoint * redirectedFromServer;              //@synthesize redirectedFromServer=_redirectedFromServer - In the implementation block
@property (nonatomic,copy) NSArray * proposals; 
@property (retain) NSArray * customIKESAInitPayloads;                     //@synthesize customIKESAInitPayloads=_customIKESAInitPayloads - In the implementation block
@property (retain) NSArray * customIKESAInitVendorPayloads;               //@synthesize customIKESAInitVendorPayloads=_customIKESAInitVendorPayloads - In the implementation block
@property (retain) NSSet * extraSupportedSignatureHashes;                 //@synthesize extraSupportedSignatureHashes=_extraSupportedSignatureHashes - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NWEndpoint *)localEndpoint;
-(void)setLocalEndpoint:(NWEndpoint *)arg1 ;
-(NWEndpoint *)remoteEndpoint;
-(void)setRemoteEndpoint:(NWEndpoint *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)proposals;
-(void)setNonceSize:(unsigned)arg1 ;
-(NSString *)outgoingInterfaceName;
-(BOOL)randomizeLocalPort;
-(NSArray *)customIKESAInitPayloads;
-(NSArray *)customIKESAInitVendorPayloads;
-(NWAddressEndpoint *)redirectedFromServer;
-(BOOL)allowRedirect;
-(BOOL)disableSwitchToNATTPorts;
-(BOOL)forceUDPEncapsulation;
-(BOOL)serverMode;
-(unsigned)nonceSize;
-(NSSet *)extraSupportedSignatureHashes;
-(void)setOutgoingInterfaceName:(NSString *)arg1 ;
-(void)setRandomizeLocalPort:(BOOL)arg1 ;
-(void)setServerMode:(BOOL)arg1 ;
-(void)setAllowRedirect:(BOOL)arg1 ;
-(void)setDisableSwitchToNATTPorts:(BOOL)arg1 ;
-(BOOL)allowTCPEncapsulation;
-(void)setAllowTCPEncapsulation:(BOOL)arg1 ;
-(BOOL)useTLSForTCPEncapsulation;
-(void)setUseTLSForTCPEncapsulation:(BOOL)arg1 ;
-(void)setForceUDPEncapsulation:(BOOL)arg1 ;
-(unsigned short)tcpEncapsulationPort;
-(void)setTcpEncapsulationPort:(unsigned short)arg1 ;
-(void)setRedirectedFromServer:(NWAddressEndpoint *)arg1 ;
-(void)setProposals:(NSArray *)arg1 ;
-(void)setCustomIKESAInitPayloads:(NSArray *)arg1 ;
-(void)setCustomIKESAInitVendorPayloads:(NSArray *)arg1 ;
-(void)setExtraSupportedSignatureHashes:(NSSet *)arg1 ;
@end

