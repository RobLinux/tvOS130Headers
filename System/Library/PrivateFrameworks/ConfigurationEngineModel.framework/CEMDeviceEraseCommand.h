/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMCommandBase.h>
#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMDeviceEraseCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadPreserveDataPlan;
	NSNumber* _payloadDisallowProximitySetup;
	NSString* _payloadPIN;

}

@property (nonatomic,copy) NSNumber * payloadPreserveDataPlan;                    //@synthesize payloadPreserveDataPlan=_payloadPreserveDataPlan - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDisallowProximitySetup;              //@synthesize payloadDisallowProximitySetup=_payloadDisallowProximitySetup - In the implementation block
@property (nonatomic,copy) NSString * payloadPIN;                                 //@synthesize payloadPIN=_payloadPIN - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withPreserveDataPlan:(id)arg2 withDisallowProximitySetup:(id)arg3 withPIN:(id)arg4 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withPIN:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)mustBeSupervised;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(int)executionLevel;
-(void)setPayloadPreserveDataPlan:(NSNumber *)arg1 ;
-(void)setPayloadDisallowProximitySetup:(NSNumber *)arg1 ;
-(void)setPayloadPIN:(NSString *)arg1 ;
-(NSNumber *)payloadPreserveDataPlan;
-(NSNumber *)payloadDisallowProximitySetup;
-(NSString *)payloadPIN;
@end

