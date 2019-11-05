/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol.h>

@class NSString, CEMAccountGoogleDeclaration_CommunicationServiceRules;

@interface CEMAccountGoogleDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadAccountDescription;
	NSString* _payloadAccountName;
	NSString* _payloadEmailAddress;
	CEMAccountGoogleDeclaration_CommunicationServiceRules* _payloadCommunicationServiceRules;

}

@property (nonatomic,copy) NSString * payloadAccountDescription;                                                                  //@synthesize payloadAccountDescription=_payloadAccountDescription - In the implementation block
@property (nonatomic,copy) NSString * payloadAccountName;                                                                         //@synthesize payloadAccountName=_payloadAccountName - In the implementation block
@property (nonatomic,copy) NSString * payloadEmailAddress;                                                                        //@synthesize payloadEmailAddress=_payloadEmailAddress - In the implementation block
@property (nonatomic,copy) CEMAccountGoogleDeclaration_CommunicationServiceRules * payloadCommunicationServiceRules;              //@synthesize payloadCommunicationServiceRules=_payloadCommunicationServiceRules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAccountDescription:(id)arg2 withAccountName:(id)arg3 withEmailAddress:(id)arg4 withCommunicationServiceRules:(id)arg5 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withEmailAddress:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadCommunicationServiceRules:(CEMAccountGoogleDeclaration_CommunicationServiceRules *)arg1 ;
-(CEMAccountGoogleDeclaration_CommunicationServiceRules *)payloadCommunicationServiceRules;
-(void)setPayloadAccountDescription:(NSString *)arg1 ;
-(void)setPayloadAccountName:(NSString *)arg1 ;
-(void)setPayloadEmailAddress:(NSString *)arg1 ;
-(NSString *)payloadAccountDescription;
-(NSString *)payloadAccountName;
-(NSString *)payloadEmailAddress;
@end

