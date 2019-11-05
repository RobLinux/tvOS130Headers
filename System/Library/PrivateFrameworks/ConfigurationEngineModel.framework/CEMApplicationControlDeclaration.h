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

@class CEMApplicationControlDeclaration_InstallSchedule, NSString, CEMApplicationControlDeclaration_UpdateSchedule;

@interface CEMApplicationControlDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	CEMApplicationControlDeclaration_InstallSchedule* _payloadInstallSchedule;
	NSString* _payloadUpdatePolicy;
	CEMApplicationControlDeclaration_UpdateSchedule* _payloadUpdateSchedule;

}

@property (nonatomic,copy) CEMApplicationControlDeclaration_InstallSchedule * payloadInstallSchedule;              //@synthesize payloadInstallSchedule=_payloadInstallSchedule - In the implementation block
@property (nonatomic,copy) NSString * payloadUpdatePolicy;                                                         //@synthesize payloadUpdatePolicy=_payloadUpdatePolicy - In the implementation block
@property (nonatomic,copy) CEMApplicationControlDeclaration_UpdateSchedule * payloadUpdateSchedule;                //@synthesize payloadUpdateSchedule=_payloadUpdateSchedule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withInstallSchedule:(id)arg2 withUpdatePolicy:(id)arg3 withUpdateSchedule:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadInstallSchedule:(CEMApplicationControlDeclaration_InstallSchedule *)arg1 ;
-(void)setPayloadUpdatePolicy:(NSString *)arg1 ;
-(void)setPayloadUpdateSchedule:(CEMApplicationControlDeclaration_UpdateSchedule *)arg1 ;
-(CEMApplicationControlDeclaration_InstallSchedule *)payloadInstallSchedule;
-(NSString *)payloadUpdatePolicy;
-(CEMApplicationControlDeclaration_UpdateSchedule *)payloadUpdateSchedule;
@end

