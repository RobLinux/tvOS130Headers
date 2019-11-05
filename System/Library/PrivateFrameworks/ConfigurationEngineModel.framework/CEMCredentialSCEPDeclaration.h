/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMAssetBase.h>
#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol.h>

@class CEMAssetBaseDescriptor, CEMCredentialSCEPDeclaration_SCEP, NSString;

@interface CEMCredentialSCEPDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol> {

	CEMAssetBaseDescriptor* _payloadDescriptor;
	CEMCredentialSCEPDeclaration_SCEP* _payloadSCEP;

}

@property (nonatomic,copy) CEMAssetBaseDescriptor * payloadDescriptor;                   //@synthesize payloadDescriptor=_payloadDescriptor - In the implementation block
@property (nonatomic,copy) CEMCredentialSCEPDeclaration_SCEP * payloadSCEP;              //@synthesize payloadSCEP=_payloadSCEP - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withSCEP:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withSCEP:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDescriptor:(CEMAssetBaseDescriptor *)arg1 ;
-(CEMAssetBaseDescriptor *)payloadDescriptor;
-(void)setPayloadSCEP:(CEMCredentialSCEPDeclaration_SCEP *)arg1 ;
-(CEMCredentialSCEPDeclaration_SCEP *)payloadSCEP;
@end

