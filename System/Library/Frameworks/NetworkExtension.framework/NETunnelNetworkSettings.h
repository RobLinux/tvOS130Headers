/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEConfigurationValidating.h>
#import <NetworkExtension/NEPrettyDescription.h>
#import <NetworkExtension/NSSecureCoding.h>
#import <NetworkExtension/NSCopying.h>

@class NSString, NEDNSSettings, NEProxySettings;

@interface NETunnelNetworkSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	NSString* _tunnelRemoteAddress;
	NEDNSSettings* _DNSSettings;
	NEProxySettings* _proxySettings;

}

@property (readonly) NSString * tunnelRemoteAddress;              //@synthesize tunnelRemoteAddress=_tunnelRemoteAddress - In the implementation block
@property (copy) NEDNSSettings * DNSSettings;                     //@synthesize DNSSettings=_DNSSettings - In the implementation block
@property (copy) NEProxySettings * proxySettings;                 //@synthesize proxySettings=_proxySettings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setDNSSettings:(NEDNSSettings *)arg1 ;
-(void)setProxySettings:(NEProxySettings *)arg1 ;
-(NEProxySettings *)proxySettings;
-(id)initWithTunnelRemoteAddress:(id)arg1 ;
-(NSString *)tunnelRemoteAddress;
-(NEDNSSettings *)DNSSettings;
@end

