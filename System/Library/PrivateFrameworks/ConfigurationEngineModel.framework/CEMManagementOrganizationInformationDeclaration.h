/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol.h>

@class NSString;

@interface CEMManagementOrganizationInformationDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadOrganizationName;
	NSString* _payloadOrganizationAddress;
	NSString* _payloadOrganizationPhone;
	NSString* _payloadOrganizationEmail;
	NSString* _payloadOrganizationMagic;

}

@property (nonatomic,copy) NSString * payloadOrganizationName;                 //@synthesize payloadOrganizationName=_payloadOrganizationName - In the implementation block
@property (nonatomic,copy) NSString * payloadOrganizationAddress;              //@synthesize payloadOrganizationAddress=_payloadOrganizationAddress - In the implementation block
@property (nonatomic,copy) NSString * payloadOrganizationPhone;                //@synthesize payloadOrganizationPhone=_payloadOrganizationPhone - In the implementation block
@property (nonatomic,copy) NSString * payloadOrganizationEmail;                //@synthesize payloadOrganizationEmail=_payloadOrganizationEmail - In the implementation block
@property (nonatomic,copy) NSString * payloadOrganizationMagic;                //@synthesize payloadOrganizationMagic=_payloadOrganizationMagic - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withOrganizationName:(id)arg2 withOrganizationAddress:(id)arg3 withOrganizationPhone:(id)arg4 withOrganizationEmail:(id)arg5 withOrganizationMagic:(id)arg6 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withOrganizationName:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadOrganizationName:(NSString *)arg1 ;
-(void)setPayloadOrganizationAddress:(NSString *)arg1 ;
-(void)setPayloadOrganizationPhone:(NSString *)arg1 ;
-(void)setPayloadOrganizationEmail:(NSString *)arg1 ;
-(void)setPayloadOrganizationMagic:(NSString *)arg1 ;
-(NSString *)payloadOrganizationName;
-(NSString *)payloadOrganizationAddress;
-(NSString *)payloadOrganizationPhone;
-(NSString *)payloadOrganizationEmail;
-(NSString *)payloadOrganizationMagic;
@end

