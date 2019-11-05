/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy {

	BOOL _requiresEntitlement;

}

@property (readonly) BOOL requiresEntitlement;              //@synthesize requiresEntitlement=_requiresEntitlement - In the implementation block
+(id)policyWithEntitlementRequirement:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)requiresEntitlement;
-(id)initWithEntitlementRequirement:(BOOL)arg1 ;
@end

