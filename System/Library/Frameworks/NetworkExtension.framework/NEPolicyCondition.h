/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEPrettyDescription.h>

@class NSUUID, NSString, NWAddressEndpoint;

@interface NEPolicyCondition : NSObject <NEPrettyDescription> {

	BOOL _negative;
	unsigned char _prefix;
	unsigned short _ipProtocol;
	int _pid;
	unsigned _uid;
	unsigned _trafficClassStart;
	unsigned _trafficClassEnd;
	unsigned _clientFlags;
	long long _conditionType;
	NSUUID* _applicationUUID;
	NSString* _accountIdentifier;
	NSString* _domain;
	NSString* _interfaceName;
	NWAddressEndpoint* _startAddress;
	NWAddressEndpoint* _endAddress;
	NSString* _customEntitlement;
	NSString* _agentDomain;
	NSString* _agentType;

}

@property (assign) long long conditionType;                     //@synthesize conditionType=_conditionType - In the implementation block
@property (copy) NSUUID * applicationUUID;                      //@synthesize applicationUUID=_applicationUUID - In the implementation block
@property (assign) int pid;                                     //@synthesize pid=_pid - In the implementation block
@property (assign) unsigned uid;                                //@synthesize uid=_uid - In the implementation block
@property (copy) NSString * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (copy) NSString * domain;                             //@synthesize domain=_domain - In the implementation block
@property (copy) NSString * interfaceName;                      //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) unsigned trafficClassStart;                  //@synthesize trafficClassStart=_trafficClassStart - In the implementation block
@property (assign) unsigned trafficClassEnd;                    //@synthesize trafficClassEnd=_trafficClassEnd - In the implementation block
@property (assign) unsigned short ipProtocol;                   //@synthesize ipProtocol=_ipProtocol - In the implementation block
@property (assign) unsigned char prefix;                        //@synthesize prefix=_prefix - In the implementation block
@property (assign) unsigned clientFlags;                        //@synthesize clientFlags=_clientFlags - In the implementation block
@property (copy) NWAddressEndpoint * startAddress;              //@synthesize startAddress=_startAddress - In the implementation block
@property (copy) NWAddressEndpoint * endAddress;                //@synthesize endAddress=_endAddress - In the implementation block
@property (copy) NSString * customEntitlement;                  //@synthesize customEntitlement=_customEntitlement - In the implementation block
@property (copy) NSString * agentDomain;                        //@synthesize agentDomain=_agentDomain - In the implementation block
@property (copy) NSString * agentType;                          //@synthesize agentType=_agentType - In the implementation block
@property (getter=isNegative) BOOL negative;                    //@synthesize negative=_negative - In the implementation block
+(id)entitlement;
+(id)scopedInterface:(id)arg1 ;
+(id)isInbound;
+(id)effectiveApplication:(id)arg1 ;
+(id)realApplication:(id)arg1 ;
+(id)effectivePID:(int)arg1 ;
+(id)uid:(unsigned)arg1 ;
+(id)allInterfaces;
+(id)usesModernNetworkAPI;
+(id)requiredAgentDomain:(id)arg1 agentType:(id)arg2 ;
+(id)accountIdentifier:(id)arg1 ;
+(id)domain:(id)arg1 ;
+(id)trafficClassStart:(unsigned)arg1 end:(unsigned)arg2 ;
+(id)ipProtocol:(unsigned short)arg1 ;
+(id)flowIPProtocol:(unsigned short)arg1 ;
+(id)clientFlags:(unsigned)arg1 ;
+(id)localAddress:(id)arg1 prefix:(unsigned char)arg2 ;
+(id)remoteAddress:(id)arg1 prefix:(unsigned char)arg2 ;
+(id)flowLocalAddress:(id)arg1 prefix:(unsigned char)arg2 ;
+(id)flowRemoteAddress:(id)arg1 prefix:(unsigned char)arg2 ;
+(id)localAddressStart:(id)arg1 end:(id)arg2 ;
+(id)remoteAddressStart:(id)arg1 end:(id)arg2 ;
+(id)flowLocalAddressStart:(id)arg1 end:(id)arg2 ;
+(id)flowRemoteAddressStart:(id)arg1 end:(id)arg2 ;
+(id)flowLocalAddressEmpty;
+(id)flowRemoteAddressEmpty;
+(id)platformBinary;
+(id)localNetworks;
+(id)customEntitlement:(id)arg1 ;
+(id)fallbackTraffic;
+(id)clientProhibitsContrained;
+(id)clientProhibitsExpensive;
+(id)isListener;
-(id)description;
-(id)init;
-(NSString *)domain;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(BOOL)validate;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setIpProtocol:(unsigned short)arg1 ;
-(unsigned short)ipProtocol;
-(id)initInternal;
-(unsigned)uid;
-(void)setUid:(unsigned)arg1 ;
-(long long)conditionType;
-(void)setStartAddress:(NWAddressEndpoint *)arg1 ;
-(unsigned char)prefix;
-(void)setPrefix:(unsigned char)arg1 ;
-(void)setConditionType:(long long)arg1 ;
-(BOOL)isNegative;
-(void)setNegative:(BOOL)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NWAddressEndpoint *)startAddress;
-(NWAddressEndpoint *)endAddress;
-(void)setEndAddress:(NWAddressEndpoint *)arg1 ;
-(NSString *)agentType;
-(NSString *)agentDomain;
-(void)setApplicationUUID:(NSUUID *)arg1 ;
-(void)setTrafficClassStart:(unsigned)arg1 ;
-(void)setTrafficClassEnd:(unsigned)arg1 ;
-(void)setCustomEntitlement:(NSString *)arg1 ;
-(void)setAgentDomain:(NSString *)arg1 ;
-(void)setAgentType:(NSString *)arg1 ;
-(void)setClientFlags:(unsigned)arg1 ;
-(id)conditionTypeString;
-(unsigned char)conditionTypeValue;
-(BOOL)addTLVsToMessage:(id)arg1 ;
-(NSUUID *)applicationUUID;
-(unsigned)trafficClassStart;
-(unsigned)trafficClassEnd;
-(unsigned)clientFlags;
-(NSString *)customEntitlement;
@end

