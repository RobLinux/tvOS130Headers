/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMCredentialSCEPDeclaration_SCEPSubjectAltName : CEMPayloadBase {

	NSString* _payloadRfc822Name;
	NSString* _payloadDNSName;
	NSString* _payloadUniformResourceIdentifier;
	NSString* _payloadNtPrincipalName;

}

@property (nonatomic,copy) NSString * payloadRfc822Name;                             //@synthesize payloadRfc822Name=_payloadRfc822Name - In the implementation block
@property (nonatomic,copy) NSString * payloadDNSName;                                //@synthesize payloadDNSName=_payloadDNSName - In the implementation block
@property (nonatomic,copy) NSString * payloadUniformResourceIdentifier;              //@synthesize payloadUniformResourceIdentifier=_payloadUniformResourceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * payloadNtPrincipalName;                        //@synthesize payloadNtPrincipalName=_payloadNtPrincipalName - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithRfc822Name:(id)arg1 withDNSName:(id)arg2 withUniformResourceIdentifier:(id)arg3 withNtPrincipalName:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadRfc822Name:(NSString *)arg1 ;
-(void)setPayloadDNSName:(NSString *)arg1 ;
-(void)setPayloadUniformResourceIdentifier:(NSString *)arg1 ;
-(void)setPayloadNtPrincipalName:(NSString *)arg1 ;
-(NSString *)payloadRfc822Name;
-(NSString *)payloadDNSName;
-(NSString *)payloadUniformResourceIdentifier;
-(NSString *)payloadNtPrincipalName;
@end

