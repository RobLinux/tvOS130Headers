/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDNetworkRouterFirewallRule.h>

@class NSString, HMFNetAddress, NSArray;

@interface HMDNetworkRouterFirewallRuleWAN : HMDNetworkRouterFirewallRule {

	unsigned char _transportProtocol;
	unsigned short _portStart;
	unsigned short _portEnd;
	unsigned long long _purpose;
	NSString* _hostname;
	HMFNetAddress* _address;
	HMFNetAddress* _addressEnd;
	NSArray* _icmpTypes;

}

@property (nonatomic,readonly) unsigned long long purpose;                   //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,readonly) unsigned char transportProtocol;              //@synthesize transportProtocol=_transportProtocol - In the implementation block
@property (nonatomic,readonly) NSString * hostname;                          //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,readonly) HMFNetAddress * address;                      //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) HMFNetAddress * addressEnd;                   //@synthesize addressEnd=_addressEnd - In the implementation block
@property (nonatomic,readonly) unsigned short portStart;                     //@synthesize portStart=_portStart - In the implementation block
@property (nonatomic,readonly) unsigned short portEnd;                       //@synthesize portEnd=_portEnd - In the implementation block
@property (nonatomic,readonly) NSArray * icmpTypes;                          //@synthesize icmpTypes=_icmpTypes - In the implementation block
+(id)ipAddressAny;
+(id)createWithJSONDictionary:(NSDictionary*)arg1 ;
+(BOOL)__decodePurpose:(NSDictionary*)arg1 purpose:(unsigned long long*)arg2 ;
+(id)ipAddressAnyIPv4;
+(id)ipAddressAnyIPv6;
+(BOOL)__isWildcardAddress:(id)arg1 ;
+(BOOL)__decodeFlags:(NSDictionary*)arg1 critical:(BOOL*)arg2 ;
+(BOOL)__decodeType:(NSDictionary*)arg1 transportProtocol:(unsigned char*)arg2 ;
+(BOOL)__decodeHostnameOrAddresses:(NSDictionary*)arg1 hostname:(id*)arg2 address:(id*)arg3 addressEnd:(id*)arg4 ;
+(BOOL)__decodePorts:(NSDictionary*)arg1 portStart:(unsigned short*)arg2 portEnd:(unsigned short*)arg3 ;
-(HMFNetAddress *)address;
-(NSString *)hostname;
-(unsigned long long)purpose;
-(id)attributeDescriptions;
-(unsigned char)transportProtocol;
-(NSDictionary*)prettyJSONDictionary;
-(unsigned short)portStart;
-(unsigned short)portEnd;
-(NSArray *)icmpTypes;
-(HMFNetAddress *)addressEnd;
-(id)initWithJSONDictionary:(NSDictionary*)arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(unsigned long long)arg4 transportProtocol:(unsigned char)arg5 hostname:(id)arg6 address:(id)arg7 addressEnd:(id)arg8 portStart:(unsigned short)arg9 portEnd:(unsigned short)arg10 icmpTypes:(id)arg11 ;
@end

