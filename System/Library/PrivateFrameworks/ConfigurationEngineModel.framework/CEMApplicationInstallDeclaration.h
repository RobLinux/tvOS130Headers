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

@class NSString, NSNumber, CEMAnyPayload;

@interface CEMApplicationInstallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadApplication;
	NSNumber* _payloadMandatory;
	NSNumber* _payloadInstallWhenActivated;
	NSNumber* _payloadRemoveWhenDeactivated;
	NSNumber* _payloadManageData;
	NSString* _payloadVPNUUID;
	NSNumber* _payloadPreventDataBackup;
	CEMAnyPayload* _payloadConfiguration;

}

@property (nonatomic,copy) NSString * payloadApplication;                        //@synthesize payloadApplication=_payloadApplication - In the implementation block
@property (nonatomic,copy) NSNumber * payloadMandatory;                          //@synthesize payloadMandatory=_payloadMandatory - In the implementation block
@property (nonatomic,copy) NSNumber * payloadInstallWhenActivated;               //@synthesize payloadInstallWhenActivated=_payloadInstallWhenActivated - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRemoveWhenDeactivated;              //@synthesize payloadRemoveWhenDeactivated=_payloadRemoveWhenDeactivated - In the implementation block
@property (nonatomic,copy) NSNumber * payloadManageData;                         //@synthesize payloadManageData=_payloadManageData - In the implementation block
@property (nonatomic,copy) NSString * payloadVPNUUID;                            //@synthesize payloadVPNUUID=_payloadVPNUUID - In the implementation block
@property (nonatomic,copy) NSNumber * payloadPreventDataBackup;                  //@synthesize payloadPreventDataBackup=_payloadPreventDataBackup - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * payloadConfiguration;                 //@synthesize payloadConfiguration=_payloadConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withApplication:(id)arg2 withMandatory:(id)arg3 withInstallWhenActivated:(id)arg4 withRemoveWhenDeactivated:(id)arg5 withManageData:(id)arg6 withVPNUUID:(id)arg7 withPreventDataBackup:(id)arg8 withConfiguration:(id)arg9 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withApplication:(id)arg2 withMandatory:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(NSString *)payloadApplication;
-(void)setPayloadApplication:(NSString *)arg1 ;
-(void)setPayloadMandatory:(NSNumber *)arg1 ;
-(void)setPayloadInstallWhenActivated:(NSNumber *)arg1 ;
-(void)setPayloadRemoveWhenDeactivated:(NSNumber *)arg1 ;
-(void)setPayloadManageData:(NSNumber *)arg1 ;
-(void)setPayloadVPNUUID:(NSString *)arg1 ;
-(void)setPayloadPreventDataBackup:(NSNumber *)arg1 ;
-(void)setPayloadConfiguration:(CEMAnyPayload *)arg1 ;
-(NSNumber *)payloadMandatory;
-(NSNumber *)payloadInstallWhenActivated;
-(NSNumber *)payloadRemoveWhenDeactivated;
-(NSNumber *)payloadManageData;
-(NSString *)payloadVPNUUID;
-(NSNumber *)payloadPreventDataBackup;
-(CEMAnyPayload *)payloadConfiguration;
@end

