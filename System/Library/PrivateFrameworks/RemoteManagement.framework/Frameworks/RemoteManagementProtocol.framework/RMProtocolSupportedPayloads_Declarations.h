/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray;

@interface RMProtocolSupportedPayloads_Declarations : RMModelPayloadBase {

	NSArray* _payloadsActivations;
	NSArray* _payloadsAssets;
	NSArray* _payloadsConfigurations;
	NSArray* _payloadsPredicates;

}

@property (nonatomic,copy) NSArray * payloadsActivations;                 //@synthesize payloadsActivations=_payloadsActivations - In the implementation block
@property (nonatomic,copy) NSArray * payloadsAssets;                      //@synthesize payloadsAssets=_payloadsAssets - In the implementation block
@property (nonatomic,copy) NSArray * payloadsConfigurations;              //@synthesize payloadsConfigurations=_payloadsConfigurations - In the implementation block
@property (nonatomic,copy) NSArray * payloadsPredicates;                  //@synthesize payloadsPredicates=_payloadsPredicates - In the implementation block
+(id)buildRequiredOnly;
+(id)allowedPayloadsKeys;
+(id)buildWithActivations:(id)arg1 assets:(id)arg2 configurations:(id)arg3 predicates:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setPayloadsActivations:(NSArray *)arg1 ;
-(void)setPayloadsAssets:(NSArray *)arg1 ;
-(void)setPayloadsConfigurations:(NSArray *)arg1 ;
-(void)setPayloadsPredicates:(NSArray *)arg1 ;
-(NSArray *)payloadsActivations;
-(NSArray *)payloadsAssets;
-(NSArray *)payloadsConfigurations;
-(NSArray *)payloadsPredicates;
@end

